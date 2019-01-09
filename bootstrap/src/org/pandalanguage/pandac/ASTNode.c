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

typedef panda$collections$Iterator* (*$fn674)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn678)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn683)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn730)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn737)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn775)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn801)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn853)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn857)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn862)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn896)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn909)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn920)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn924)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn929)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn984)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn996)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1029)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1033)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1038)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1071)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn1097)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn1108)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1143)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1147)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1152)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1179)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1183)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1188)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1239)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1243)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1248)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1283)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1324)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1328)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1333)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1377)(org$pandalanguage$pandac$IR$Value*);
typedef panda$collections$Iterator* (*$fn1406)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1410)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1415)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1454)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1458)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1463)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1526)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1530)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1535)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1567)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1577)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1600)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1604)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1609)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1671)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1895)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1913)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1971)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1997)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2057)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2083)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2087)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2092)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2110)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2114)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2119)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2166)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2170)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2175)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 32, -9211815390615587804, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x6f\x73\x69\x74\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 111, 8956204005101181995, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s692 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s804 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s808 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s916 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s963 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1074 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1078 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s1231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s1235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s1554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s1570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static panda$core$String $s1661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static panda$core$String $s1665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static panda$core$String $s1667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static panda$core$String $s1674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1692 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1700 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x29", 2, 14282, NULL };
static panda$core$String $s1708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1798 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s1882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1916 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s1980 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s2042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s2047 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s2052 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s2125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s2160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x41\x53\x54\x4e\x6f\x64\x65\x3a\x20", 21, -8877512154781713630, NULL };
static panda$core$String $s2200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s2206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 94, -4884667081240384487, NULL };

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
// line 89
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
// line 91
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
// line 94
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
// line 97
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
// line 100
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
// line 103
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
// line 106
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
// line 109
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
// line 112
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
// line 115
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
// line 118
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
// line 121
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
// line 124
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
// line 127
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
// line 130
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
// line 133
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
// line 136
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
// line 139
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
// line 142
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
// line 145
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
// line 148
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
// line 151
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
// line 154
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
// line 157
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
org$pandalanguage$pandac$ASTNode** $tmp245 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp246 = *$tmp245;
org$pandalanguage$pandac$FixedArray** $tmp247 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp248 = *$tmp247;
org$pandalanguage$pandac$ASTNode** $tmp249 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp250 = *$tmp249;
// line 160
org$pandalanguage$pandac$Position $tmp251 = *(&local22);
return $tmp251;
block49:;
panda$core$Int64 $tmp252 = (panda$core$Int64) {24};
panda$core$Bit $tmp253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp252);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block50; else goto block51;
block50:;
org$pandalanguage$pandac$Position* $tmp255 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp256 = *$tmp255;
*(&local23) = $tmp256;
panda$core$UInt64* $tmp257 = (panda$core$UInt64*) (param0->$data + 16);
panda$core$UInt64 $tmp258 = *$tmp257;
// line 163
org$pandalanguage$pandac$Position $tmp259 = *(&local23);
return $tmp259;
block51:;
panda$core$Int64 $tmp260 = (panda$core$Int64) {25};
panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp260);
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block52; else goto block53;
block52:;
org$pandalanguage$pandac$Position* $tmp263 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp264 = *$tmp263;
*(&local24) = $tmp264;
org$pandalanguage$pandac$IR$Value** $tmp265 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp266 = *$tmp265;
// line 166
org$pandalanguage$pandac$Position $tmp267 = *(&local24);
return $tmp267;
block53:;
panda$core$Int64 $tmp268 = (panda$core$Int64) {26};
panda$core$Bit $tmp269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp268);
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block54; else goto block55;
block54:;
org$pandalanguage$pandac$Position* $tmp271 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp272 = *$tmp271;
*(&local25) = $tmp272;
panda$core$String** $tmp273 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp274 = *$tmp273;
org$pandalanguage$pandac$FixedArray** $tmp275 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp276 = *$tmp275;
// line 169
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
org$pandalanguage$pandac$FixedArray** $tmp285 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp286 = *$tmp285;
org$pandalanguage$pandac$FixedArray** $tmp287 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp288 = *$tmp287;
// line 172
org$pandalanguage$pandac$Position $tmp289 = *(&local26);
return $tmp289;
block57:;
panda$core$Int64 $tmp290 = (panda$core$Int64) {28};
panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp290);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block58; else goto block59;
block58:;
org$pandalanguage$pandac$Position* $tmp293 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp294 = *$tmp293;
*(&local27) = $tmp294;
org$pandalanguage$pandac$ASTNode** $tmp295 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp296 = *$tmp295;
org$pandalanguage$pandac$FixedArray** $tmp297 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp298 = *$tmp297;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp299 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp300 = *$tmp299;
panda$core$String** $tmp301 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp302 = *$tmp301;
org$pandalanguage$pandac$FixedArray** $tmp303 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp304 = *$tmp303;
org$pandalanguage$pandac$FixedArray** $tmp305 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp306 = *$tmp305;
org$pandalanguage$pandac$ASTNode** $tmp307 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp308 = *$tmp307;
org$pandalanguage$pandac$FixedArray** $tmp309 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 72);
org$pandalanguage$pandac$FixedArray* $tmp310 = *$tmp309;
// line 175
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
org$pandalanguage$pandac$parser$Token$Kind* $tmp317 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp318 = *$tmp317;
org$pandalanguage$pandac$FixedArray** $tmp319 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp320 = *$tmp319;
org$pandalanguage$pandac$ASTNode** $tmp321 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp322 = *$tmp321;
// line 178
org$pandalanguage$pandac$Position $tmp323 = *(&local28);
return $tmp323;
block61:;
panda$core$Int64 $tmp324 = (panda$core$Int64) {30};
panda$core$Bit $tmp325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp324);
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block62; else goto block63;
block62:;
org$pandalanguage$pandac$Position* $tmp327 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp328 = *$tmp327;
*(&local29) = $tmp328;
// line 181
org$pandalanguage$pandac$Position $tmp329 = *(&local29);
return $tmp329;
block63:;
panda$core$Int64 $tmp330 = (panda$core$Int64) {31};
panda$core$Bit $tmp331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp330);
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block64; else goto block65;
block64:;
org$pandalanguage$pandac$Position* $tmp333 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp334 = *$tmp333;
*(&local30) = $tmp334;
org$pandalanguage$pandac$ASTNode** $tmp335 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp336 = *$tmp335;
// line 184
org$pandalanguage$pandac$Position $tmp337 = *(&local30);
return $tmp337;
block65:;
panda$core$Int64 $tmp338 = (panda$core$Int64) {32};
panda$core$Bit $tmp339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp338);
bool $tmp340 = $tmp339.value;
if ($tmp340) goto block66; else goto block67;
block66:;
org$pandalanguage$pandac$Position* $tmp341 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp342 = *$tmp341;
*(&local31) = $tmp342;
panda$core$String** $tmp343 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp344 = *$tmp343;
// line 187
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
panda$core$String** $tmp351 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp352 = *$tmp351;
org$pandalanguage$pandac$ASTNode** $tmp353 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp354 = *$tmp353;
// line 190
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
org$pandalanguage$pandac$parser$Token$Kind* $tmp361 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp362 = *$tmp361;
org$pandalanguage$pandac$ASTNode** $tmp363 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp364 = *$tmp363;
// line 193
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
org$pandalanguage$pandac$ASTNode** $tmp371 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp372 = *$tmp371;
panda$core$Bit* $tmp373 = (panda$core$Bit*) (param0->$data + 24);
panda$core$Bit $tmp374 = *$tmp373;
org$pandalanguage$pandac$ASTNode** $tmp375 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 25);
org$pandalanguage$pandac$ASTNode* $tmp376 = *$tmp375;
org$pandalanguage$pandac$ASTNode** $tmp377 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 33);
org$pandalanguage$pandac$ASTNode* $tmp378 = *$tmp377;
// line 196
org$pandalanguage$pandac$Position $tmp379 = *(&local34);
return $tmp379;
block73:;
panda$core$Int64 $tmp380 = (panda$core$Int64) {36};
panda$core$Bit $tmp381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp380);
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block74; else goto block75;
block74:;
org$pandalanguage$pandac$Position* $tmp383 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp384 = *$tmp383;
*(&local35) = $tmp384;
panda$core$Real64* $tmp385 = (panda$core$Real64*) (param0->$data + 16);
panda$core$Real64 $tmp386 = *$tmp385;
// line 199
org$pandalanguage$pandac$Position $tmp387 = *(&local35);
return $tmp387;
block75:;
panda$core$Int64 $tmp388 = (panda$core$Int64) {37};
panda$core$Bit $tmp389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp388);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block76; else goto block77;
block76:;
org$pandalanguage$pandac$Position* $tmp391 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp392 = *$tmp391;
*(&local36) = $tmp392;
panda$core$String** $tmp393 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp394 = *$tmp393;
// line 202
org$pandalanguage$pandac$Position $tmp395 = *(&local36);
return $tmp395;
block77:;
panda$core$Int64 $tmp396 = (panda$core$Int64) {38};
panda$core$Bit $tmp397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp396);
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block78; else goto block79;
block78:;
org$pandalanguage$pandac$Position* $tmp399 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp400 = *$tmp399;
*(&local37) = $tmp400;
org$pandalanguage$pandac$ASTNode** $tmp401 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp402 = *$tmp401;
// line 205
org$pandalanguage$pandac$Position $tmp403 = *(&local37);
return $tmp403;
block79:;
panda$core$Int64 $tmp404 = (panda$core$Int64) {39};
panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp404);
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block80; else goto block81;
block80:;
org$pandalanguage$pandac$Position* $tmp407 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp408 = *$tmp407;
*(&local38) = $tmp408;
// line 208
org$pandalanguage$pandac$Position $tmp409 = *(&local38);
return $tmp409;
block81:;
panda$core$Int64 $tmp410 = (panda$core$Int64) {40};
panda$core$Bit $tmp411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp410);
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block82; else goto block83;
block82:;
org$pandalanguage$pandac$Position* $tmp413 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp414 = *$tmp413;
*(&local39) = $tmp414;
panda$core$String** $tmp415 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp416 = *$tmp415;
// line 211
org$pandalanguage$pandac$Position $tmp417 = *(&local39);
return $tmp417;
block83:;
panda$core$Int64 $tmp418 = (panda$core$Int64) {41};
panda$core$Bit $tmp419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp418);
bool $tmp420 = $tmp419.value;
if ($tmp420) goto block84; else goto block85;
block84:;
org$pandalanguage$pandac$Position* $tmp421 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp422 = *$tmp421;
*(&local40) = $tmp422;
// line 214
org$pandalanguage$pandac$Position $tmp423 = *(&local40);
return $tmp423;
block85:;
panda$core$Int64 $tmp424 = (panda$core$Int64) {42};
panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp424);
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block86; else goto block87;
block86:;
org$pandalanguage$pandac$Position* $tmp427 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp428 = *$tmp427;
*(&local41) = $tmp428;
org$pandalanguage$pandac$FixedArray** $tmp429 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp430 = *$tmp429;
// line 217
org$pandalanguage$pandac$Position $tmp431 = *(&local41);
return $tmp431;
block87:;
panda$core$Int64 $tmp432 = (panda$core$Int64) {43};
panda$core$Bit $tmp433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp432);
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block88; else goto block89;
block88:;
org$pandalanguage$pandac$Position* $tmp435 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp436 = *$tmp435;
*(&local42) = $tmp436;
org$pandalanguage$pandac$FixedArray** $tmp437 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp438 = *$tmp437;
// line 220
org$pandalanguage$pandac$Position $tmp439 = *(&local42);
return $tmp439;
block89:;
panda$core$Int64 $tmp440 = (panda$core$Int64) {44};
panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp440);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block90; else goto block91;
block90:;
org$pandalanguage$pandac$Position* $tmp443 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp444 = *$tmp443;
*(&local43) = $tmp444;
panda$core$String** $tmp445 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp446 = *$tmp445;
// line 223
org$pandalanguage$pandac$Position $tmp447 = *(&local43);
return $tmp447;
block91:;
panda$core$Int64 $tmp448 = (panda$core$Int64) {46};
panda$core$Bit $tmp449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp448);
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block92; else goto block93;
block92:;
org$pandalanguage$pandac$Position* $tmp451 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp452 = *$tmp451;
*(&local44) = $tmp452;
panda$core$String** $tmp453 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp454 = *$tmp453;
org$pandalanguage$pandac$ASTNode** $tmp455 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp456 = *$tmp455;
// line 226
org$pandalanguage$pandac$Position $tmp457 = *(&local44);
return $tmp457;
block93:;
panda$core$Int64 $tmp458 = (panda$core$Int64) {45};
panda$core$Bit $tmp459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp458);
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block94; else goto block95;
block94:;
org$pandalanguage$pandac$Position* $tmp461 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp462 = *$tmp461;
*(&local45) = $tmp462;
org$pandalanguage$pandac$FixedArray** $tmp463 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp464 = *$tmp463;
org$pandalanguage$pandac$ASTNode** $tmp465 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp466 = *$tmp465;
// line 229
org$pandalanguage$pandac$Position $tmp467 = *(&local45);
return $tmp467;
block95:;
panda$core$Int64 $tmp468 = (panda$core$Int64) {47};
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
// line 232
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
panda$core$String** $tmp483 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp484 = *$tmp483;
// line 235
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
org$pandalanguage$pandac$Variable$Kind* $tmp491 = (org$pandalanguage$pandac$Variable$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp492 = *$tmp491;
org$pandalanguage$pandac$FixedArray** $tmp493 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp494 = *$tmp493;
// line 238
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
org$pandalanguage$pandac$FixedArray** $tmp501 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp502 = *$tmp501;
org$pandalanguage$pandac$FixedArray** $tmp503 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp504 = *$tmp503;
// line 241
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
panda$core$String** $tmp511 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp512 = *$tmp511;
org$pandalanguage$pandac$ASTNode** $tmp513 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp514 = *$tmp513;
org$pandalanguage$pandac$FixedArray** $tmp515 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp516 = *$tmp515;
// line 244
org$pandalanguage$pandac$Position $tmp517 = *(&local50);
return $tmp517;
block105:;
// line 247
panda$core$Bit $tmp518 = panda$core$Bit$init$builtin_bit(false);
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block106; else goto block107;
block107:;
panda$core$Int64 $tmp520 = (panda$core$Int64) {247};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s521, $tmp520);
abort(); // unreachable
block106:;
goto block1;
block1:;
panda$core$Bit $tmp522 = panda$core$Bit$init$builtin_bit(false);
bool $tmp523 = $tmp522.value;
if ($tmp523) goto block108; else goto block109;
block109:;
panda$core$Int64 $tmp524 = (panda$core$Int64) {88};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s525, $tmp524, &$s526);
abort(); // unreachable
block108:;
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
org$pandalanguage$pandac$ASTNode* local63 = NULL;
org$pandalanguage$pandac$FixedArray* local64 = NULL;
org$pandalanguage$pandac$ASTNode* local65 = NULL;
panda$core$MutableString* local66 = NULL;
org$pandalanguage$pandac$ASTNode* local67 = NULL;
panda$core$UInt64 local68;
org$pandalanguage$pandac$IR$Value* local69 = NULL;
panda$core$String* local70 = NULL;
org$pandalanguage$pandac$FixedArray* local71 = NULL;
panda$core$MutableString* local72 = NULL;
org$pandalanguage$pandac$ASTNode* local73 = NULL;
org$pandalanguage$pandac$ASTNode* local74 = NULL;
org$pandalanguage$pandac$FixedArray* local75 = NULL;
org$pandalanguage$pandac$FixedArray* local76 = NULL;
panda$core$MutableString* local77 = NULL;
org$pandalanguage$pandac$ASTNode* local78 = NULL;
org$pandalanguage$pandac$ASTNode* local79 = NULL;
org$pandalanguage$pandac$FixedArray* local80 = NULL;
org$pandalanguage$pandac$MethodDecl$Kind local81;
panda$core$String* local82 = NULL;
org$pandalanguage$pandac$FixedArray* local83 = NULL;
org$pandalanguage$pandac$FixedArray* local84 = NULL;
org$pandalanguage$pandac$ASTNode* local85 = NULL;
org$pandalanguage$pandac$FixedArray* local86 = NULL;
panda$core$MutableString* local87 = NULL;
org$pandalanguage$pandac$ASTNode* local88 = NULL;
org$pandalanguage$pandac$ASTNode* local89 = NULL;
org$pandalanguage$pandac$parser$Token$Kind local90;
org$pandalanguage$pandac$FixedArray* local91 = NULL;
org$pandalanguage$pandac$ASTNode* local92 = NULL;
panda$core$String* local93 = NULL;
panda$core$String* local94 = NULL;
org$pandalanguage$pandac$ASTNode* local95 = NULL;
panda$core$String* local96 = NULL;
panda$core$String* local97 = NULL;
org$pandalanguage$pandac$ASTNode* local98 = NULL;
org$pandalanguage$pandac$parser$Token$Kind local99;
org$pandalanguage$pandac$ASTNode* local100 = NULL;
org$pandalanguage$pandac$ASTNode* local101 = NULL;
panda$core$Bit local102;
org$pandalanguage$pandac$ASTNode* local103 = NULL;
org$pandalanguage$pandac$ASTNode* local104 = NULL;
panda$core$MutableString* local105 = NULL;
panda$core$Real64 local106;
panda$core$String* local107 = NULL;
org$pandalanguage$pandac$ASTNode* local108 = NULL;
panda$core$String* local109 = NULL;
org$pandalanguage$pandac$FixedArray* local110 = NULL;
org$pandalanguage$pandac$FixedArray* local111 = NULL;
panda$core$String* local112 = NULL;
panda$core$String* local113 = NULL;
org$pandalanguage$pandac$ASTNode* local114 = NULL;
org$pandalanguage$pandac$FixedArray* local115 = NULL;
org$pandalanguage$pandac$ASTNode* local116 = NULL;
org$pandalanguage$pandac$FixedArray* local117 = NULL;
org$pandalanguage$pandac$ASTNode* local118 = NULL;
panda$core$String* local119 = NULL;
org$pandalanguage$pandac$Variable$Kind local120;
org$pandalanguage$pandac$FixedArray* local121 = NULL;
panda$core$MutableString* local122 = NULL;
org$pandalanguage$pandac$FixedArray* local123 = NULL;
org$pandalanguage$pandac$FixedArray* local124 = NULL;
panda$core$MutableString* local125 = NULL;
panda$core$String* local126 = NULL;
org$pandalanguage$pandac$ASTNode* local127 = NULL;
org$pandalanguage$pandac$ASTNode* local128 = NULL;
panda$core$String* local129 = NULL;
org$pandalanguage$pandac$ASTNode* local130 = NULL;
org$pandalanguage$pandac$FixedArray* local131 = NULL;
panda$core$MutableString* local132 = NULL;
org$pandalanguage$pandac$ASTNode* local133 = NULL;
// line 254
panda$core$Int64* $tmp527 = &param0->$rawValue;
panda$core$Int64 $tmp528 = *$tmp527;
panda$core$Int64 $tmp529 = (panda$core$Int64) {0};
panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp529);
bool $tmp531 = $tmp530.value;
if ($tmp531) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp532 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp533 = *$tmp532;
panda$core$String** $tmp534 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp535 = *$tmp534;
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp535));
panda$core$String* $tmp536 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp536));
*(&local0) = $tmp535;
panda$core$String** $tmp537 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp538 = *$tmp537;
org$pandalanguage$pandac$ASTNode** $tmp539 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp540 = *$tmp539;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp540));
org$pandalanguage$pandac$ASTNode* $tmp541 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
*(&local1) = $tmp540;
// line 256
org$pandalanguage$pandac$ASTNode* $tmp542 = *(&local1);
panda$core$Bit $tmp543 = panda$core$Bit$init$builtin_bit($tmp542 != NULL);
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block4; else goto block5;
block4:;
// line 257
panda$core$String* $tmp545 = *(&local0);
panda$core$String* $tmp546 = panda$core$String$convert$R$panda$core$String($tmp545);
panda$core$String* $tmp547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp546, &$s548);
org$pandalanguage$pandac$ASTNode* $tmp549 = *(&local1);
panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp547, ((panda$core$Object*) $tmp549));
panda$core$String* $tmp551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp550, &$s552);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp551));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp551));
// unreffing REF($42:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp550));
// unreffing REF($41:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
// unreffing REF($37:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp553 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp553));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp554 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp554));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp551;
block5:;
// line 259
panda$core$String* $tmp555 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
org$pandalanguage$pandac$ASTNode* $tmp556 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp557 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp557));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp555;
block3:;
panda$core$Int64 $tmp558 = (panda$core$Int64) {1};
panda$core$Bit $tmp559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp558);
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp561 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp562 = *$tmp561;
org$pandalanguage$pandac$FixedArray** $tmp563 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp564 = *$tmp563;
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
org$pandalanguage$pandac$FixedArray* $tmp565 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
*(&local2) = $tmp564;
// line 262
org$pandalanguage$pandac$FixedArray* $tmp566 = *(&local2);
panda$core$String* $tmp567 = org$pandalanguage$pandac$FixedArray$convert$R$panda$core$String($tmp566);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
// unreffing REF($101:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp568 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
// unreffing elements
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp567;
block7:;
panda$core$Int64 $tmp569 = (panda$core$Int64) {2};
panda$core$Bit $tmp570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp569);
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp572 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp573 = *$tmp572;
org$pandalanguage$pandac$ASTNode** $tmp574 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp575 = *$tmp574;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp575));
org$pandalanguage$pandac$ASTNode* $tmp576 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp576));
*(&local3) = $tmp575;
org$pandalanguage$pandac$ASTNode** $tmp577 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp578 = *$tmp577;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
org$pandalanguage$pandac$ASTNode* $tmp579 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
*(&local4) = $tmp578;
// line 265
org$pandalanguage$pandac$ASTNode* $tmp580 = *(&local4);
panda$core$Bit $tmp581 = panda$core$Bit$init$builtin_bit($tmp580 == NULL);
bool $tmp582 = $tmp581.value;
if ($tmp582) goto block10; else goto block11;
block10:;
// line 266
org$pandalanguage$pandac$ASTNode* $tmp583 = *(&local3);
panda$core$String* $tmp584 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s585, ((panda$core$Object*) $tmp583));
panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp584, &$s587);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp586));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp586));
// unreffing REF($147:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
// unreffing REF($146:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp588 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp588));
// unreffing msg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp589 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp589));
// unreffing test
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp586;
block11:;
// line 268
org$pandalanguage$pandac$ASTNode* $tmp590 = *(&local3);
panda$core$String* $tmp591 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s592, ((panda$core$Object*) $tmp590));
panda$core$String* $tmp593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp591, &$s594);
org$pandalanguage$pandac$ASTNode* $tmp595 = *(&local4);
panda$core$String* $tmp596 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp593, ((panda$core$Object*) $tmp595));
panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp596, &$s598);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
// unreffing REF($175:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp596));
// unreffing REF($174:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp593));
// unreffing REF($171:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp591));
// unreffing REF($170:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp599 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
// unreffing msg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp600 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp600));
// unreffing test
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp597;
block9:;
panda$core$Int64 $tmp601 = (panda$core$Int64) {3};
panda$core$Bit $tmp602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp601);
bool $tmp603 = $tmp602.value;
if ($tmp603) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp604 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp605 = *$tmp604;
org$pandalanguage$pandac$ASTNode** $tmp606 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp607 = *$tmp606;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
org$pandalanguage$pandac$ASTNode* $tmp608 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp608));
*(&local5) = $tmp607;
// line 271
org$pandalanguage$pandac$ASTNode* $tmp609 = *(&local5);
panda$core$String* $tmp610 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s611, ((panda$core$Object*) $tmp609));
panda$core$String* $tmp612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp610, &$s613);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp612));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp612));
// unreffing REF($220:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp610));
// unreffing REF($219:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp614 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp614));
// unreffing expr
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp612;
block13:;
panda$core$Int64 $tmp615 = (panda$core$Int64) {4};
panda$core$Bit $tmp616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp615);
bool $tmp617 = $tmp616.value;
if ($tmp617) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp618 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp619 = *$tmp618;
// line 274
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s620));
return &$s621;
block15:;
panda$core$Int64 $tmp622 = (panda$core$Int64) {5};
panda$core$Bit $tmp623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp622);
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp625 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp626 = *$tmp625;
org$pandalanguage$pandac$ASTNode** $tmp627 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp628 = *$tmp627;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp628));
org$pandalanguage$pandac$ASTNode* $tmp629 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp629));
*(&local6) = $tmp628;
org$pandalanguage$pandac$parser$Token$Kind* $tmp630 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp631 = *$tmp630;
*(&local7) = $tmp631;
org$pandalanguage$pandac$ASTNode** $tmp632 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp633 = *$tmp632;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp633));
org$pandalanguage$pandac$ASTNode* $tmp634 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp634));
*(&local8) = $tmp633;
// line 277
org$pandalanguage$pandac$ASTNode* $tmp635 = *(&local6);
panda$core$String* $tmp636 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s637, ((panda$core$Object*) $tmp635));
panda$core$String* $tmp638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp636, &$s639);
org$pandalanguage$pandac$parser$Token$Kind $tmp640 = *(&local7);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp641;
$tmp641 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp641->value = $tmp640;
panda$core$String* $tmp642 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp638, ((panda$core$Object*) $tmp641));
panda$core$String* $tmp643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp642, &$s644);
org$pandalanguage$pandac$ASTNode* $tmp645 = *(&local8);
panda$core$String* $tmp646 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp643, ((panda$core$Object*) $tmp645));
panda$core$String* $tmp647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp646, &$s648);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp647));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp647));
// unreffing REF($284:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp646));
// unreffing REF($283:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp643));
// unreffing REF($280:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp642));
// unreffing REF($279:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp641));
// unreffing REF($278:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp638));
// unreffing REF($276:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp636));
// unreffing REF($275:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp649 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp649));
// unreffing right
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp650 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp650));
// unreffing left
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp647;
block17:;
panda$core$Int64 $tmp651 = (panda$core$Int64) {6};
panda$core$Bit $tmp652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp651);
bool $tmp653 = $tmp652.value;
if ($tmp653) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp654 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp655 = *$tmp654;
panda$core$Bit* $tmp656 = (panda$core$Bit*) (param0->$data + 16);
panda$core$Bit $tmp657 = *$tmp656;
*(&local9) = $tmp657;
// line 280
panda$core$Bit $tmp658 = *(&local9);
panda$core$String* $tmp659 = panda$core$Bit$convert$R$panda$core$String($tmp658);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
// unreffing REF($330:panda.core.String)
return $tmp659;
block19:;
panda$core$Int64 $tmp660 = (panda$core$Int64) {7};
panda$core$Bit $tmp661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp660);
bool $tmp662 = $tmp661.value;
if ($tmp662) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp663 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp664 = *$tmp663;
org$pandalanguage$pandac$FixedArray** $tmp665 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp666 = *$tmp665;
*(&local10) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
org$pandalanguage$pandac$FixedArray* $tmp667 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
*(&local10) = $tmp666;
// line 283
panda$core$MutableString* $tmp668 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp668, &$s669);
*(&local11) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp668));
panda$core$MutableString* $tmp670 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
*(&local11) = $tmp668;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp668));
// unreffing REF($353:panda.core.MutableString)
// line 284
org$pandalanguage$pandac$FixedArray* $tmp671 = *(&local10);
ITable* $tmp672 = ((panda$collections$Iterable*) $tmp671)->$class->itable;
while ($tmp672->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp672 = $tmp672->next;
}
$fn674 $tmp673 = $tmp672->methods[0];
panda$collections$Iterator* $tmp675 = $tmp673(((panda$collections$Iterable*) $tmp671));
goto block22;
block22:;
ITable* $tmp676 = $tmp675->$class->itable;
while ($tmp676->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp676 = $tmp676->next;
}
$fn678 $tmp677 = $tmp676->methods[0];
panda$core$Bit $tmp679 = $tmp677($tmp675);
bool $tmp680 = $tmp679.value;
if ($tmp680) goto block24; else goto block23;
block23:;
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp681 = $tmp675->$class->itable;
while ($tmp681->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp681 = $tmp681->next;
}
$fn683 $tmp682 = $tmp681->methods[1];
panda$core$Object* $tmp684 = $tmp682($tmp675);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp684)));
org$pandalanguage$pandac$ASTNode* $tmp685 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp685));
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) $tmp684);
// line 285
panda$core$MutableString* $tmp686 = *(&local11);
org$pandalanguage$pandac$ASTNode* $tmp687 = *(&local12);
panda$core$String* $tmp688 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp687), &$s689);
panda$core$MutableString$append$panda$core$String($tmp686, $tmp688);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp688));
// unreffing REF($393:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp684);
// unreffing REF($381:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp690 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp690));
// unreffing s
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block22;
block24:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp675));
// unreffing REF($370:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 287
panda$core$MutableString* $tmp691 = *(&local11);
panda$core$MutableString$append$panda$core$String($tmp691, &$s692);
// line 288
panda$core$MutableString* $tmp693 = *(&local11);
panda$core$String* $tmp694 = panda$core$MutableString$finish$R$panda$core$String($tmp693);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
// unreffing REF($415:panda.core.String)
panda$core$MutableString* $tmp695 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp695));
// unreffing result
*(&local11) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp696 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
// unreffing statements
*(&local10) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp694;
block21:;
panda$core$Int64 $tmp697 = (panda$core$Int64) {8};
panda$core$Bit $tmp698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp697);
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block25; else goto block26;
block25:;
org$pandalanguage$pandac$Position* $tmp700 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp701 = *$tmp700;
panda$core$String** $tmp702 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp703 = *$tmp702;
*(&local13) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp703));
panda$core$String* $tmp704 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp704));
*(&local13) = $tmp703;
// line 291
panda$core$String* $tmp705 = *(&local13);
panda$core$Bit $tmp706 = panda$core$Bit$init$builtin_bit($tmp705 != NULL);
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block27; else goto block28;
block27:;
// line 292
panda$core$String* $tmp708 = *(&local13);
panda$core$String* $tmp709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s710, $tmp708);
panda$core$String* $tmp711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp709, &$s712);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp711));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp711));
// unreffing REF($457:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp709));
// unreffing REF($456:panda.core.String)
panda$core$String* $tmp713 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp713));
// unreffing label
*(&local13) = ((panda$core$String*) NULL);
return $tmp711;
block28:;
// line 294
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s714));
panda$core$String* $tmp715 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp715));
// unreffing label
*(&local13) = ((panda$core$String*) NULL);
return &$s716;
block26:;
panda$core$Int64 $tmp717 = (panda$core$Int64) {9};
panda$core$Bit $tmp718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp717);
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block29; else goto block30;
block29:;
org$pandalanguage$pandac$Position* $tmp720 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp721 = *$tmp720;
org$pandalanguage$pandac$ASTNode** $tmp722 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp723 = *$tmp722;
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
org$pandalanguage$pandac$ASTNode* $tmp724 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp724));
*(&local14) = $tmp723;
org$pandalanguage$pandac$FixedArray** $tmp725 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp726 = *$tmp725;
*(&local15) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp726));
org$pandalanguage$pandac$FixedArray* $tmp727 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp727));
*(&local15) = $tmp726;
// line 297
org$pandalanguage$pandac$ASTNode* $tmp728 = *(&local14);
$fn730 $tmp729 = ($fn730) $tmp728->$class->vtable[0];
panda$core$String* $tmp731 = $tmp729($tmp728);
panda$core$String* $tmp732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp731, &$s733);
org$pandalanguage$pandac$FixedArray* $tmp734 = *(&local15);
ITable* $tmp735 = ((panda$collections$CollectionView*) $tmp734)->$class->itable;
while ($tmp735->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp735 = $tmp735->next;
}
$fn737 $tmp736 = $tmp735->methods[1];
panda$core$String* $tmp738 = $tmp736(((panda$collections$CollectionView*) $tmp734));
panda$core$String* $tmp739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp732, $tmp738);
panda$core$String* $tmp740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp739, &$s741);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp740));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp740));
// unreffing REF($515:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp739));
// unreffing REF($514:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp738));
// unreffing REF($513:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp732));
// unreffing REF($509:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp731));
// unreffing REF($508:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp742 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp742));
// unreffing args
*(&local15) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp743 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp743));
// unreffing target
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp740;
block30:;
panda$core$Int64 $tmp744 = (panda$core$Int64) {10};
panda$core$Bit $tmp745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp744);
bool $tmp746 = $tmp745.value;
if ($tmp746) goto block31; else goto block32;
block31:;
org$pandalanguage$pandac$Position* $tmp747 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp748 = *$tmp747;
org$pandalanguage$pandac$ASTNode** $tmp749 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp750 = *$tmp749;
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp750));
org$pandalanguage$pandac$ASTNode* $tmp751 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp751));
*(&local16) = $tmp750;
panda$core$String** $tmp752 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp753 = *$tmp752;
*(&local17) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp753));
panda$core$String* $tmp754 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp754));
*(&local17) = $tmp753;
org$pandalanguage$pandac$FixedArray** $tmp755 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp756 = *$tmp755;
*(&local18) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp756));
org$pandalanguage$pandac$FixedArray* $tmp757 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp757));
*(&local18) = $tmp756;
// line 300
panda$core$MutableString* $tmp758 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp758);
*(&local19) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp758));
panda$core$MutableString* $tmp759 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp759));
*(&local19) = $tmp758;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp758));
// unreffing REF($578:panda.core.MutableString)
// line 301
org$pandalanguage$pandac$ASTNode* $tmp760 = *(&local16);
panda$core$Bit $tmp761 = panda$core$Bit$init$builtin_bit($tmp760 != NULL);
bool $tmp762 = $tmp761.value;
if ($tmp762) goto block33; else goto block34;
block33:;
// line 302
panda$core$MutableString* $tmp763 = *(&local19);
org$pandalanguage$pandac$ASTNode* $tmp764 = *(&local16);
panda$core$String* $tmp765 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp764), &$s766);
panda$core$MutableString$append$panda$core$String($tmp763, $tmp765);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
// unreffing REF($600:panda.core.String)
goto block34;
block34:;
// line 304
panda$core$MutableString* $tmp767 = *(&local19);
panda$core$String* $tmp768 = *(&local17);
panda$core$String* $tmp769 = panda$core$String$convert$R$panda$core$String($tmp768);
panda$core$String* $tmp770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp769, &$s771);
org$pandalanguage$pandac$FixedArray* $tmp772 = *(&local18);
ITable* $tmp773 = ((panda$collections$CollectionView*) $tmp772)->$class->itable;
while ($tmp773->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp773 = $tmp773->next;
}
$fn775 $tmp774 = $tmp773->methods[1];
panda$core$String* $tmp776 = $tmp774(((panda$collections$CollectionView*) $tmp772));
panda$core$String* $tmp777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp770, $tmp776);
panda$core$String* $tmp778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp777, &$s779);
panda$core$MutableString$append$panda$core$String($tmp767, $tmp778);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp778));
// unreffing REF($616:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp777));
// unreffing REF($615:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp776));
// unreffing REF($614:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp770));
// unreffing REF($610:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp769));
// unreffing REF($609:panda.core.String)
// line 305
panda$core$MutableString* $tmp780 = *(&local19);
panda$core$String* $tmp781 = panda$core$MutableString$finish$R$panda$core$String($tmp780);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp781));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp781));
// unreffing REF($635:panda.core.String)
panda$core$MutableString* $tmp782 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp782));
// unreffing result
*(&local19) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp783 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp783));
// unreffing fields
*(&local18) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp784 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp784));
// unreffing name
*(&local17) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp785 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp785));
// unreffing dc
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp781;
block32:;
panda$core$Int64 $tmp786 = (panda$core$Int64) {11};
panda$core$Bit $tmp787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp786);
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block35; else goto block36;
block35:;
org$pandalanguage$pandac$Position* $tmp789 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp790 = *$tmp789;
org$pandalanguage$pandac$ASTNode** $tmp791 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp792 = *$tmp791;
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp792));
org$pandalanguage$pandac$ASTNode* $tmp793 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp793));
*(&local20) = $tmp792;
org$pandalanguage$pandac$ChoiceCase** $tmp794 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp795 = *$tmp794;
*(&local21) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp795));
org$pandalanguage$pandac$ChoiceCase* $tmp796 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp796));
*(&local21) = $tmp795;
panda$core$Int64* $tmp797 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp798 = *$tmp797;
*(&local22) = $tmp798;
// line 308
org$pandalanguage$pandac$ASTNode* $tmp799 = *(&local20);
$fn801 $tmp800 = ($fn801) $tmp799->$class->vtable[0];
panda$core$String* $tmp802 = $tmp800($tmp799);
panda$core$String* $tmp803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp802, &$s804);
org$pandalanguage$pandac$ChoiceCase* $tmp805 = *(&local21);
panda$core$String* $tmp806 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp803, ((panda$core$Object*) $tmp805));
panda$core$String* $tmp807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp806, &$s808);
panda$core$Int64 $tmp809 = *(&local22);
panda$core$Int64$wrapper* $tmp810;
$tmp810 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp810->value = $tmp809;
panda$core$String* $tmp811 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp807, ((panda$core$Object*) $tmp810));
panda$core$String* $tmp812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp811, &$s813);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp812));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp812));
// unreffing REF($701:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
// unreffing REF($700:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
// unreffing REF($699:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp807));
// unreffing REF($697:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp806));
// unreffing REF($696:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp803));
// unreffing REF($693:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp802));
// unreffing REF($692:panda.core.String)
org$pandalanguage$pandac$ChoiceCase* $tmp814 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp814));
// unreffing ce
*(&local21) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp815 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp815));
// unreffing base
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp812;
block36:;
panda$core$Int64 $tmp816 = (panda$core$Int64) {12};
panda$core$Bit $tmp817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp816);
bool $tmp818 = $tmp817.value;
if ($tmp818) goto block37; else goto block38;
block37:;
org$pandalanguage$pandac$Position* $tmp819 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp820 = *$tmp819;
org$pandalanguage$pandac$ASTNode** $tmp821 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp822 = *$tmp821;
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp822));
org$pandalanguage$pandac$ASTNode* $tmp823 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp823));
*(&local23) = $tmp822;
org$pandalanguage$pandac$FixedArray** $tmp824 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp825 = *$tmp824;
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp825));
org$pandalanguage$pandac$FixedArray* $tmp826 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp826));
*(&local24) = $tmp825;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp827 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp828 = *$tmp827;
*(&local25) = $tmp828;
panda$core$String** $tmp829 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp830 = *$tmp829;
*(&local26) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp830));
panda$core$String* $tmp831 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp831));
*(&local26) = $tmp830;
org$pandalanguage$pandac$FixedArray** $tmp832 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp833 = *$tmp832;
*(&local27) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp833));
org$pandalanguage$pandac$FixedArray* $tmp834 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp834));
*(&local27) = $tmp833;
org$pandalanguage$pandac$FixedArray** $tmp835 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp836 = *$tmp835;
*(&local28) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
org$pandalanguage$pandac$FixedArray* $tmp837 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp837));
*(&local28) = $tmp836;
org$pandalanguage$pandac$FixedArray** $tmp838 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 64);
org$pandalanguage$pandac$FixedArray* $tmp839 = *$tmp838;
*(&local29) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp839));
org$pandalanguage$pandac$FixedArray* $tmp840 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp840));
*(&local29) = $tmp839;
// line 311
panda$core$MutableString* $tmp841 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp841);
*(&local30) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp841));
panda$core$MutableString* $tmp842 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp842));
*(&local30) = $tmp841;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp841));
// unreffing REF($800:panda.core.MutableString)
// line 312
org$pandalanguage$pandac$ASTNode* $tmp843 = *(&local23);
panda$core$Bit $tmp844 = panda$core$Bit$init$builtin_bit($tmp843 != NULL);
bool $tmp845 = $tmp844.value;
if ($tmp845) goto block39; else goto block40;
block39:;
// line 313
panda$core$MutableString* $tmp846 = *(&local30);
org$pandalanguage$pandac$ASTNode* $tmp847 = *(&local23);
panda$core$String* $tmp848 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp847), &$s849);
panda$core$MutableString$append$panda$core$String($tmp846, $tmp848);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp848));
// unreffing REF($822:panda.core.String)
goto block40;
block40:;
// line 315
org$pandalanguage$pandac$FixedArray* $tmp850 = *(&local24);
ITable* $tmp851 = ((panda$collections$Iterable*) $tmp850)->$class->itable;
while ($tmp851->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp851 = $tmp851->next;
}
$fn853 $tmp852 = $tmp851->methods[0];
panda$collections$Iterator* $tmp854 = $tmp852(((panda$collections$Iterable*) $tmp850));
goto block41;
block41:;
ITable* $tmp855 = $tmp854->$class->itable;
while ($tmp855->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp855 = $tmp855->next;
}
$fn857 $tmp856 = $tmp855->methods[0];
panda$core$Bit $tmp858 = $tmp856($tmp854);
bool $tmp859 = $tmp858.value;
if ($tmp859) goto block43; else goto block42;
block42:;
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp860 = $tmp854->$class->itable;
while ($tmp860->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp860 = $tmp860->next;
}
$fn862 $tmp861 = $tmp860->methods[1];
panda$core$Object* $tmp863 = $tmp861($tmp854);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp863)));
org$pandalanguage$pandac$ASTNode* $tmp864 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) $tmp863);
// line 316
panda$core$MutableString* $tmp865 = *(&local30);
org$pandalanguage$pandac$ASTNode* $tmp866 = *(&local31);
panda$core$String* $tmp867 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp866), &$s868);
panda$core$MutableString$append$panda$core$String($tmp865, $tmp867);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp867));
// unreffing REF($856:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp863);
// unreffing REF($844:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp869 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp869));
// unreffing a
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block41;
block43:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp854));
// unreffing REF($833:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 318
org$pandalanguage$pandac$ClassDecl$Kind $tmp870 = *(&local25);
panda$core$Int64 $tmp871 = $tmp870.$rawValue;
panda$core$Int64 $tmp872 = (panda$core$Int64) {0};
panda$core$Bit $tmp873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp871, $tmp872);
bool $tmp874 = $tmp873.value;
if ($tmp874) goto block45; else goto block46;
block45:;
// line 319
panda$core$MutableString* $tmp875 = *(&local30);
panda$core$MutableString$append$panda$core$String($tmp875, &$s876);
goto block44;
block46:;
panda$core$Int64 $tmp877 = (panda$core$Int64) {1};
panda$core$Bit $tmp878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp871, $tmp877);
bool $tmp879 = $tmp878.value;
if ($tmp879) goto block47; else goto block48;
block47:;
// line 320
panda$core$MutableString* $tmp880 = *(&local30);
panda$core$MutableString$append$panda$core$String($tmp880, &$s881);
goto block44;
block48:;
panda$core$Int64 $tmp882 = (panda$core$Int64) {2};
panda$core$Bit $tmp883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp871, $tmp882);
bool $tmp884 = $tmp883.value;
if ($tmp884) goto block49; else goto block44;
block49:;
// line 321
panda$core$MutableString* $tmp885 = *(&local30);
panda$core$MutableString$append$panda$core$String($tmp885, &$s886);
goto block44;
block44:;
// line 323
panda$core$MutableString* $tmp887 = *(&local30);
panda$core$String* $tmp888 = *(&local26);
panda$core$MutableString$append$panda$core$String($tmp887, $tmp888);
// line 324
org$pandalanguage$pandac$FixedArray* $tmp889 = *(&local27);
panda$core$Bit $tmp890 = panda$core$Bit$init$builtin_bit($tmp889 != NULL);
bool $tmp891 = $tmp890.value;
if ($tmp891) goto block50; else goto block51;
block50:;
// line 325
panda$core$MutableString* $tmp892 = *(&local30);
org$pandalanguage$pandac$FixedArray* $tmp893 = *(&local27);
ITable* $tmp894 = ((panda$collections$CollectionView*) $tmp893)->$class->itable;
while ($tmp894->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp894 = $tmp894->next;
}
$fn896 $tmp895 = $tmp894->methods[1];
panda$core$String* $tmp897 = $tmp895(((panda$collections$CollectionView*) $tmp893));
panda$core$String* $tmp898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s899, $tmp897);
panda$core$String* $tmp900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp898, &$s901);
panda$core$MutableString$append$panda$core$String($tmp892, $tmp900);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp900));
// unreffing REF($917:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp898));
// unreffing REF($916:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp897));
// unreffing REF($915:panda.core.String)
goto block51;
block51:;
// line 327
org$pandalanguage$pandac$FixedArray* $tmp902 = *(&local28);
panda$core$Bit $tmp903 = panda$core$Bit$init$builtin_bit($tmp902 != NULL);
bool $tmp904 = $tmp903.value;
if ($tmp904) goto block52; else goto block53;
block52:;
// line 328
panda$core$MutableString* $tmp905 = *(&local30);
org$pandalanguage$pandac$FixedArray* $tmp906 = *(&local28);
ITable* $tmp907 = ((panda$collections$CollectionView*) $tmp906)->$class->itable;
while ($tmp907->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp907 = $tmp907->next;
}
$fn909 $tmp908 = $tmp907->methods[1];
panda$core$String* $tmp910 = $tmp908(((panda$collections$CollectionView*) $tmp906));
panda$core$String* $tmp911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s912, $tmp910);
panda$core$String* $tmp913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp911, &$s914);
panda$core$MutableString$append$panda$core$String($tmp905, $tmp913);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp913));
// unreffing REF($942:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp911));
// unreffing REF($941:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp910));
// unreffing REF($940:panda.core.String)
goto block53;
block53:;
// line 330
panda$core$MutableString* $tmp915 = *(&local30);
panda$core$MutableString$append$panda$core$String($tmp915, &$s916);
// line 331
org$pandalanguage$pandac$FixedArray* $tmp917 = *(&local29);
ITable* $tmp918 = ((panda$collections$Iterable*) $tmp917)->$class->itable;
while ($tmp918->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp918 = $tmp918->next;
}
$fn920 $tmp919 = $tmp918->methods[0];
panda$collections$Iterator* $tmp921 = $tmp919(((panda$collections$Iterable*) $tmp917));
goto block54;
block54:;
ITable* $tmp922 = $tmp921->$class->itable;
while ($tmp922->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp922 = $tmp922->next;
}
$fn924 $tmp923 = $tmp922->methods[0];
panda$core$Bit $tmp925 = $tmp923($tmp921);
bool $tmp926 = $tmp925.value;
if ($tmp926) goto block56; else goto block55;
block55:;
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp927 = $tmp921->$class->itable;
while ($tmp927->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp927 = $tmp927->next;
}
$fn929 $tmp928 = $tmp927->methods[1];
panda$core$Object* $tmp930 = $tmp928($tmp921);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp930)));
org$pandalanguage$pandac$ASTNode* $tmp931 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) $tmp930);
// line 332
panda$core$MutableString* $tmp932 = *(&local30);
org$pandalanguage$pandac$ASTNode* $tmp933 = *(&local32);
panda$core$String* $tmp934 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp933), &$s935);
panda$core$MutableString$append$panda$core$String($tmp932, $tmp934);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp934));
// unreffing REF($985:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp930);
// unreffing REF($973:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp936 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp936));
// unreffing m
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block54;
block56:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp921));
// unreffing REF($962:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 334
panda$core$MutableString* $tmp937 = *(&local30);
panda$core$MutableString$append$panda$core$String($tmp937, &$s938);
// line 335
panda$core$MutableString* $tmp939 = *(&local30);
panda$core$String* $tmp940 = panda$core$MutableString$finish$R$panda$core$String($tmp939);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp940));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp940));
// unreffing REF($1007:panda.core.String)
panda$core$MutableString* $tmp941 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp941));
// unreffing result
*(&local30) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp942 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp942));
// unreffing members
*(&local29) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp943 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp943));
// unreffing supertypes
*(&local28) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp944 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp944));
// unreffing generics
*(&local27) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp945 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp945));
// unreffing name
*(&local26) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp946 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp946));
// unreffing annotations
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp947 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp947));
// unreffing dc
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp940;
block38:;
panda$core$Int64 $tmp948 = (panda$core$Int64) {13};
panda$core$Bit $tmp949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp948);
bool $tmp950 = $tmp949.value;
if ($tmp950) goto block57; else goto block58;
block57:;
org$pandalanguage$pandac$Position* $tmp951 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp952 = *$tmp951;
panda$core$String** $tmp953 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp954 = *$tmp953;
*(&local33) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp954));
panda$core$String* $tmp955 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp955));
*(&local33) = $tmp954;
// line 338
panda$core$String* $tmp956 = *(&local33);
panda$core$Bit $tmp957 = panda$core$Bit$init$builtin_bit($tmp956 != NULL);
bool $tmp958 = $tmp957.value;
if ($tmp958) goto block59; else goto block60;
block59:;
// line 339
panda$core$String* $tmp959 = *(&local33);
panda$core$String* $tmp960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s961, $tmp959);
panda$core$String* $tmp962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp960, &$s963);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp962));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp962));
// unreffing REF($1074:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp960));
// unreffing REF($1073:panda.core.String)
panda$core$String* $tmp964 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp964));
// unreffing label
*(&local33) = ((panda$core$String*) NULL);
return $tmp962;
block60:;
// line 341
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s965));
panda$core$String* $tmp966 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp966));
// unreffing label
*(&local33) = ((panda$core$String*) NULL);
return &$s967;
block58:;
panda$core$Int64 $tmp968 = (panda$core$Int64) {14};
panda$core$Bit $tmp969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp968);
bool $tmp970 = $tmp969.value;
if ($tmp970) goto block61; else goto block62;
block61:;
org$pandalanguage$pandac$Position* $tmp971 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp972 = *$tmp971;
org$pandalanguage$pandac$ASTNode** $tmp973 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp974 = *$tmp973;
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp974));
org$pandalanguage$pandac$ASTNode* $tmp975 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp975));
*(&local34) = $tmp974;
org$pandalanguage$pandac$ASTNode** $tmp976 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp977 = *$tmp976;
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp977));
org$pandalanguage$pandac$ASTNode* $tmp978 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp978));
*(&local35) = $tmp977;
// line 344
org$pandalanguage$pandac$ASTNode* $tmp979 = *(&local35);
panda$core$Bit $tmp980 = panda$core$Bit$init$builtin_bit($tmp979 != NULL);
bool $tmp981 = $tmp980.value;
if ($tmp981) goto block63; else goto block64;
block63:;
// line 345
org$pandalanguage$pandac$ASTNode* $tmp982 = *(&local34);
$fn984 $tmp983 = ($fn984) $tmp982->$class->vtable[0];
panda$core$String* $tmp985 = $tmp983($tmp982);
panda$core$String* $tmp986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp985, &$s987);
org$pandalanguage$pandac$ASTNode* $tmp988 = *(&local35);
panda$core$String* $tmp989 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp986, ((panda$core$Object*) $tmp988));
panda$core$String* $tmp990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp989, &$s991);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp990));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp990));
// unreffing REF($1136:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp989));
// unreffing REF($1135:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp986));
// unreffing REF($1132:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp985));
// unreffing REF($1131:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp992 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp992));
// unreffing value
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp993 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp993));
// unreffing target
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp990;
block64:;
// line 347
org$pandalanguage$pandac$ASTNode* $tmp994 = *(&local34);
$fn996 $tmp995 = ($fn996) $tmp994->$class->vtable[0];
panda$core$String* $tmp997 = $tmp995($tmp994);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp997));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp997));
// unreffing REF($1165:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp998 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp998));
// unreffing value
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp999 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp999));
// unreffing target
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp997;
block62:;
panda$core$Int64 $tmp1000 = (panda$core$Int64) {15};
panda$core$Bit $tmp1001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1000);
bool $tmp1002 = $tmp1001.value;
if ($tmp1002) goto block65; else goto block66;
block65:;
org$pandalanguage$pandac$Position* $tmp1003 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1004 = *$tmp1003;
panda$core$String** $tmp1005 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1006 = *$tmp1005;
*(&local36) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1006));
panda$core$String* $tmp1007 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1007));
*(&local36) = $tmp1006;
org$pandalanguage$pandac$FixedArray** $tmp1008 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1009 = *$tmp1008;
*(&local37) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1009));
org$pandalanguage$pandac$FixedArray* $tmp1010 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1010));
*(&local37) = $tmp1009;
org$pandalanguage$pandac$ASTNode** $tmp1011 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1012 = *$tmp1011;
*(&local38) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1012));
org$pandalanguage$pandac$ASTNode* $tmp1013 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1013));
*(&local38) = $tmp1012;
// line 350
panda$core$MutableString* $tmp1014 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1014);
*(&local39) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1014));
panda$core$MutableString* $tmp1015 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1015));
*(&local39) = $tmp1014;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1014));
// unreffing REF($1216:panda.core.MutableString)
// line 351
panda$core$String* $tmp1016 = *(&local36);
panda$core$Bit $tmp1017 = panda$core$Bit$init$builtin_bit($tmp1016 != NULL);
bool $tmp1018 = $tmp1017.value;
if ($tmp1018) goto block67; else goto block68;
block67:;
// line 352
panda$core$MutableString* $tmp1019 = *(&local39);
panda$core$String* $tmp1020 = *(&local36);
panda$core$String* $tmp1021 = panda$core$String$convert$R$panda$core$String($tmp1020);
panda$core$String* $tmp1022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1021, &$s1023);
panda$core$MutableString$append$panda$core$String($tmp1019, $tmp1022);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1022));
// unreffing REF($1239:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1021));
// unreffing REF($1238:panda.core.String)
goto block68;
block68:;
// line 354
panda$core$MutableString* $tmp1024 = *(&local39);
panda$core$MutableString$append$panda$core$String($tmp1024, &$s1025);
// line 355
org$pandalanguage$pandac$FixedArray* $tmp1026 = *(&local37);
ITable* $tmp1027 = ((panda$collections$Iterable*) $tmp1026)->$class->itable;
while ($tmp1027->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1027 = $tmp1027->next;
}
$fn1029 $tmp1028 = $tmp1027->methods[0];
panda$collections$Iterator* $tmp1030 = $tmp1028(((panda$collections$Iterable*) $tmp1026));
goto block69;
block69:;
ITable* $tmp1031 = $tmp1030->$class->itable;
while ($tmp1031->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1031 = $tmp1031->next;
}
$fn1033 $tmp1032 = $tmp1031->methods[0];
panda$core$Bit $tmp1034 = $tmp1032($tmp1030);
bool $tmp1035 = $tmp1034.value;
if ($tmp1035) goto block71; else goto block70;
block70:;
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1036 = $tmp1030->$class->itable;
while ($tmp1036->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1036 = $tmp1036->next;
}
$fn1038 $tmp1037 = $tmp1036->methods[1];
panda$core$Object* $tmp1039 = $tmp1037($tmp1030);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1039)));
org$pandalanguage$pandac$ASTNode* $tmp1040 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1040));
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) $tmp1039);
// line 356
panda$core$MutableString* $tmp1041 = *(&local39);
org$pandalanguage$pandac$ASTNode* $tmp1042 = *(&local40);
panda$core$String* $tmp1043 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1042), &$s1044);
panda$core$MutableString$append$panda$core$String($tmp1041, $tmp1043);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1043));
// unreffing REF($1279:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1039);
// unreffing REF($1267:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1045 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1045));
// unreffing s
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block69;
block71:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1030));
// unreffing REF($1256:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 358
panda$core$MutableString* $tmp1046 = *(&local39);
org$pandalanguage$pandac$ASTNode* $tmp1047 = *(&local38);
panda$core$String* $tmp1048 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1049, ((panda$core$Object*) $tmp1047));
panda$core$String* $tmp1050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1048, &$s1051);
panda$core$MutableString$append$panda$core$String($tmp1046, $tmp1050);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1050));
// unreffing REF($1301:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
// unreffing REF($1300:panda.core.String)
// line 359
panda$core$MutableString* $tmp1052 = *(&local39);
panda$core$String* $tmp1053 = panda$core$MutableString$finish$R$panda$core$String($tmp1052);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1053));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1053));
// unreffing REF($1311:panda.core.String)
panda$core$MutableString* $tmp1054 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1054));
// unreffing result
*(&local39) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1055 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1055));
// unreffing test
*(&local38) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1056 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1056));
// unreffing statements
*(&local37) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1057 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1057));
// unreffing label
*(&local36) = ((panda$core$String*) NULL);
return $tmp1053;
block66:;
panda$core$Int64 $tmp1058 = (panda$core$Int64) {16};
panda$core$Bit $tmp1059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1058);
bool $tmp1060 = $tmp1059.value;
if ($tmp1060) goto block72; else goto block73;
block72:;
org$pandalanguage$pandac$Position* $tmp1061 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1062 = *$tmp1061;
org$pandalanguage$pandac$ASTNode** $tmp1063 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1064 = *$tmp1063;
*(&local41) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1064));
org$pandalanguage$pandac$ASTNode* $tmp1065 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1065));
*(&local41) = $tmp1064;
panda$core$String** $tmp1066 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp1067 = *$tmp1066;
*(&local42) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1067));
panda$core$String* $tmp1068 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1068));
*(&local42) = $tmp1067;
// line 362
org$pandalanguage$pandac$ASTNode* $tmp1069 = *(&local41);
$fn1071 $tmp1070 = ($fn1071) $tmp1069->$class->vtable[0];
panda$core$String* $tmp1072 = $tmp1070($tmp1069);
panda$core$String* $tmp1073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1072, &$s1074);
panda$core$String* $tmp1075 = *(&local42);
panda$core$String* $tmp1076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1073, $tmp1075);
panda$core$String* $tmp1077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1076, &$s1078);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1077));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1077));
// unreffing REF($1369:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1076));
// unreffing REF($1368:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1073));
// unreffing REF($1366:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1072));
// unreffing REF($1365:panda.core.String)
panda$core$String* $tmp1079 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1079));
// unreffing field
*(&local42) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1080 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1080));
// unreffing base
*(&local41) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1077;
block73:;
panda$core$Int64 $tmp1081 = (panda$core$Int64) {17};
panda$core$Bit $tmp1082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1081);
bool $tmp1083 = $tmp1082.value;
if ($tmp1083) goto block74; else goto block75;
block74:;
org$pandalanguage$pandac$Position* $tmp1084 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1085 = *$tmp1084;
org$pandalanguage$pandac$ASTNode** $tmp1086 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1087 = *$tmp1086;
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1087));
org$pandalanguage$pandac$ASTNode* $tmp1088 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1088));
*(&local43) = $tmp1087;
panda$core$String** $tmp1089 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp1090 = *$tmp1089;
*(&local44) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1090));
panda$core$String* $tmp1091 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1091));
*(&local44) = $tmp1090;
org$pandalanguage$pandac$FixedArray** $tmp1092 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp1093 = *$tmp1092;
*(&local45) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1093));
org$pandalanguage$pandac$FixedArray* $tmp1094 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1094));
*(&local45) = $tmp1093;
// line 365
org$pandalanguage$pandac$ASTNode* $tmp1095 = *(&local43);
$fn1097 $tmp1096 = ($fn1097) $tmp1095->$class->vtable[0];
panda$core$String* $tmp1098 = $tmp1096($tmp1095);
panda$core$String* $tmp1099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1098, &$s1100);
panda$core$String* $tmp1101 = *(&local44);
panda$core$String* $tmp1102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1099, $tmp1101);
panda$core$String* $tmp1103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1102, &$s1104);
org$pandalanguage$pandac$FixedArray* $tmp1105 = *(&local45);
ITable* $tmp1106 = ((panda$collections$CollectionView*) $tmp1105)->$class->itable;
while ($tmp1106->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1106 = $tmp1106->next;
}
$fn1108 $tmp1107 = $tmp1106->methods[2];
panda$core$String* $tmp1109 = $tmp1107(((panda$collections$CollectionView*) $tmp1105), &$s1110);
panda$core$String* $tmp1111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1103, $tmp1109);
panda$core$String* $tmp1112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1111, &$s1113);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1112));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1112));
// unreffing REF($1441:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1111));
// unreffing REF($1440:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1109));
// unreffing REF($1439:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1103));
// unreffing REF($1435:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1102));
// unreffing REF($1434:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1099));
// unreffing REF($1432:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1098));
// unreffing REF($1431:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp1114 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1114));
// unreffing types
*(&local45) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1115 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1115));
// unreffing field
*(&local44) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1116 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1116));
// unreffing base
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1112;
block75:;
panda$core$Int64 $tmp1117 = (panda$core$Int64) {18};
panda$core$Bit $tmp1118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1117);
bool $tmp1119 = $tmp1118.value;
if ($tmp1119) goto block76; else goto block77;
block76:;
org$pandalanguage$pandac$Position* $tmp1120 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1121 = *$tmp1120;
org$pandalanguage$pandac$ASTNode** $tmp1122 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1123 = *$tmp1122;
*(&local46) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1123));
org$pandalanguage$pandac$ASTNode* $tmp1124 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1124));
*(&local46) = $tmp1123;
org$pandalanguage$pandac$FixedArray** $tmp1125 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1126 = *$tmp1125;
*(&local47) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1126));
org$pandalanguage$pandac$FixedArray* $tmp1127 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1127));
*(&local47) = $tmp1126;
org$pandalanguage$pandac$ASTNode** $tmp1128 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1129 = *$tmp1128;
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1129));
org$pandalanguage$pandac$ASTNode* $tmp1130 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1130));
*(&local48) = $tmp1129;
// line 368
panda$core$MutableString* $tmp1131 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1131);
*(&local49) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1131));
panda$core$MutableString* $tmp1132 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1132));
*(&local49) = $tmp1131;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1131));
// unreffing REF($1515:panda.core.MutableString)
// line 369
org$pandalanguage$pandac$ASTNode* $tmp1133 = *(&local46);
panda$core$Bit $tmp1134 = panda$core$Bit$init$builtin_bit($tmp1133 != NULL);
bool $tmp1135 = $tmp1134.value;
if ($tmp1135) goto block78; else goto block79;
block78:;
// line 370
panda$core$MutableString* $tmp1136 = *(&local49);
org$pandalanguage$pandac$ASTNode* $tmp1137 = *(&local46);
panda$core$String* $tmp1138 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1137), &$s1139);
panda$core$MutableString$append$panda$core$String($tmp1136, $tmp1138);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1138));
// unreffing REF($1537:panda.core.String)
goto block79;
block79:;
// line 372
org$pandalanguage$pandac$FixedArray* $tmp1140 = *(&local47);
ITable* $tmp1141 = ((panda$collections$Iterable*) $tmp1140)->$class->itable;
while ($tmp1141->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1141 = $tmp1141->next;
}
$fn1143 $tmp1142 = $tmp1141->methods[0];
panda$collections$Iterator* $tmp1144 = $tmp1142(((panda$collections$Iterable*) $tmp1140));
goto block80;
block80:;
ITable* $tmp1145 = $tmp1144->$class->itable;
while ($tmp1145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1145 = $tmp1145->next;
}
$fn1147 $tmp1146 = $tmp1145->methods[0];
panda$core$Bit $tmp1148 = $tmp1146($tmp1144);
bool $tmp1149 = $tmp1148.value;
if ($tmp1149) goto block82; else goto block81;
block81:;
*(&local50) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1150 = $tmp1144->$class->itable;
while ($tmp1150->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1150 = $tmp1150->next;
}
$fn1152 $tmp1151 = $tmp1150->methods[1];
panda$core$Object* $tmp1153 = $tmp1151($tmp1144);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1153)));
org$pandalanguage$pandac$ASTNode* $tmp1154 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1154));
*(&local50) = ((org$pandalanguage$pandac$ASTNode*) $tmp1153);
// line 373
panda$core$MutableString* $tmp1155 = *(&local49);
org$pandalanguage$pandac$ASTNode* $tmp1156 = *(&local50);
panda$core$String* $tmp1157 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1156), &$s1158);
panda$core$MutableString$append$panda$core$String($tmp1155, $tmp1157);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1157));
// unreffing REF($1571:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1153);
// unreffing REF($1559:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1159 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1159));
// unreffing a
*(&local50) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block80;
block82:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1144));
// unreffing REF($1548:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 375
panda$core$MutableString* $tmp1160 = *(&local49);
org$pandalanguage$pandac$ASTNode* $tmp1161 = *(&local48);
panda$core$MutableString$append$panda$core$Object($tmp1160, ((panda$core$Object*) $tmp1161));
// line 376
panda$core$MutableString* $tmp1162 = *(&local49);
panda$core$String* $tmp1163 = panda$core$MutableString$finish$R$panda$core$String($tmp1162);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1163));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1163));
// unreffing REF($1595:panda.core.String)
panda$core$MutableString* $tmp1164 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1164));
// unreffing result
*(&local49) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1165 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1165));
// unreffing decl
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1166 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1166));
// unreffing annotations
*(&local47) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1167 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1167));
// unreffing dc
*(&local46) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1163;
block77:;
panda$core$Int64 $tmp1168 = (panda$core$Int64) {19};
panda$core$Bit $tmp1169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1168);
bool $tmp1170 = $tmp1169.value;
if ($tmp1170) goto block83; else goto block84;
block83:;
org$pandalanguage$pandac$FixedArray** $tmp1171 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 0);
org$pandalanguage$pandac$FixedArray* $tmp1172 = *$tmp1171;
*(&local51) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1172));
org$pandalanguage$pandac$FixedArray* $tmp1173 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1173));
*(&local51) = $tmp1172;
// line 379
panda$core$MutableString* $tmp1174 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1174);
*(&local52) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1174));
panda$core$MutableString* $tmp1175 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1175));
*(&local52) = $tmp1174;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1174));
// unreffing REF($1636:panda.core.MutableString)
// line 380
org$pandalanguage$pandac$FixedArray* $tmp1176 = *(&local51);
ITable* $tmp1177 = ((panda$collections$Iterable*) $tmp1176)->$class->itable;
while ($tmp1177->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1177 = $tmp1177->next;
}
$fn1179 $tmp1178 = $tmp1177->methods[0];
panda$collections$Iterator* $tmp1180 = $tmp1178(((panda$collections$Iterable*) $tmp1176));
goto block85;
block85:;
ITable* $tmp1181 = $tmp1180->$class->itable;
while ($tmp1181->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1181 = $tmp1181->next;
}
$fn1183 $tmp1182 = $tmp1181->methods[0];
panda$core$Bit $tmp1184 = $tmp1182($tmp1180);
bool $tmp1185 = $tmp1184.value;
if ($tmp1185) goto block87; else goto block86;
block86:;
*(&local53) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1186 = $tmp1180->$class->itable;
while ($tmp1186->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1186 = $tmp1186->next;
}
$fn1188 $tmp1187 = $tmp1186->methods[1];
panda$core$Object* $tmp1189 = $tmp1187($tmp1180);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1189)));
org$pandalanguage$pandac$ASTNode* $tmp1190 = *(&local53);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1190));
*(&local53) = ((org$pandalanguage$pandac$ASTNode*) $tmp1189);
// line 381
panda$core$MutableString* $tmp1191 = *(&local52);
org$pandalanguage$pandac$ASTNode* $tmp1192 = *(&local53);
panda$core$String* $tmp1193 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1192), &$s1194);
panda$core$MutableString$append$panda$core$String($tmp1191, $tmp1193);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1193));
// unreffing REF($1676:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1189);
// unreffing REF($1664:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1195 = *(&local53);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1195));
// unreffing e
*(&local53) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block85;
block87:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1180));
// unreffing REF($1653:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 383
panda$core$MutableString* $tmp1196 = *(&local52);
panda$core$String* $tmp1197 = panda$core$MutableString$finish$R$panda$core$String($tmp1196);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1197));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1197));
// unreffing REF($1695:panda.core.String)
panda$core$MutableString* $tmp1198 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1198));
// unreffing result
*(&local52) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1199 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1199));
// unreffing entries
*(&local51) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1197;
block84:;
panda$core$Int64 $tmp1200 = (panda$core$Int64) {20};
panda$core$Bit $tmp1201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1200);
bool $tmp1202 = $tmp1201.value;
if ($tmp1202) goto block88; else goto block89;
block88:;
org$pandalanguage$pandac$Position* $tmp1203 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1204 = *$tmp1203;
panda$core$String** $tmp1205 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1206 = *$tmp1205;
*(&local54) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1206));
panda$core$String* $tmp1207 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1207));
*(&local54) = $tmp1206;
org$pandalanguage$pandac$ASTNode** $tmp1208 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1209 = *$tmp1208;
*(&local55) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1209));
org$pandalanguage$pandac$ASTNode* $tmp1210 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1210));
*(&local55) = $tmp1209;
org$pandalanguage$pandac$ASTNode** $tmp1211 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1212 = *$tmp1211;
*(&local56) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1212));
org$pandalanguage$pandac$ASTNode* $tmp1213 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1213));
*(&local56) = $tmp1212;
org$pandalanguage$pandac$FixedArray** $tmp1214 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 40);
org$pandalanguage$pandac$FixedArray* $tmp1215 = *$tmp1214;
*(&local57) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1215));
org$pandalanguage$pandac$FixedArray* $tmp1216 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1216));
*(&local57) = $tmp1215;
// line 386
panda$core$MutableString* $tmp1217 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1217);
*(&local58) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1217));
panda$core$MutableString* $tmp1218 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1218));
*(&local58) = $tmp1217;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1217));
// unreffing REF($1755:panda.core.MutableString)
// line 387
panda$core$String* $tmp1219 = *(&local54);
panda$core$Bit $tmp1220 = panda$core$Bit$init$builtin_bit($tmp1219 != NULL);
bool $tmp1221 = $tmp1220.value;
if ($tmp1221) goto block90; else goto block91;
block90:;
// line 388
panda$core$MutableString* $tmp1222 = *(&local58);
panda$core$String* $tmp1223 = *(&local54);
panda$core$String* $tmp1224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1223, &$s1225);
panda$core$MutableString$append$panda$core$String($tmp1222, $tmp1224);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1224));
// unreffing REF($1777:panda.core.String)
goto block91;
block91:;
// line 390
panda$core$MutableString* $tmp1226 = *(&local58);
org$pandalanguage$pandac$ASTNode* $tmp1227 = *(&local55);
panda$core$String* $tmp1228 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1229, ((panda$core$Object*) $tmp1227));
panda$core$String* $tmp1230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1228, &$s1231);
org$pandalanguage$pandac$ASTNode* $tmp1232 = *(&local56);
panda$core$String* $tmp1233 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1230, ((panda$core$Object*) $tmp1232));
panda$core$String* $tmp1234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1233, &$s1235);
panda$core$MutableString$append$panda$core$String($tmp1226, $tmp1234);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1234));
// unreffing REF($1792:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1233));
// unreffing REF($1791:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
// unreffing REF($1788:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1228));
// unreffing REF($1787:panda.core.String)
// line 391
org$pandalanguage$pandac$FixedArray* $tmp1236 = *(&local57);
ITable* $tmp1237 = ((panda$collections$Iterable*) $tmp1236)->$class->itable;
while ($tmp1237->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1237 = $tmp1237->next;
}
$fn1239 $tmp1238 = $tmp1237->methods[0];
panda$collections$Iterator* $tmp1240 = $tmp1238(((panda$collections$Iterable*) $tmp1236));
goto block92;
block92:;
ITable* $tmp1241 = $tmp1240->$class->itable;
while ($tmp1241->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1241 = $tmp1241->next;
}
$fn1243 $tmp1242 = $tmp1241->methods[0];
panda$core$Bit $tmp1244 = $tmp1242($tmp1240);
bool $tmp1245 = $tmp1244.value;
if ($tmp1245) goto block94; else goto block93;
block93:;
*(&local59) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1246 = $tmp1240->$class->itable;
while ($tmp1246->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1246 = $tmp1246->next;
}
$fn1248 $tmp1247 = $tmp1246->methods[1];
panda$core$Object* $tmp1249 = $tmp1247($tmp1240);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1249)));
org$pandalanguage$pandac$ASTNode* $tmp1250 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1250));
*(&local59) = ((org$pandalanguage$pandac$ASTNode*) $tmp1249);
// line 392
panda$core$MutableString* $tmp1251 = *(&local58);
org$pandalanguage$pandac$ASTNode* $tmp1252 = *(&local59);
panda$core$String* $tmp1253 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1252), &$s1254);
panda$core$MutableString$append$panda$core$String($tmp1251, $tmp1253);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1253));
// unreffing REF($1834:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1249);
// unreffing REF($1822:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1255 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1255));
// unreffing s
*(&local59) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block92;
block94:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1240));
// unreffing REF($1811:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 394
panda$core$MutableString* $tmp1256 = *(&local58);
panda$core$MutableString$append$panda$core$String($tmp1256, &$s1257);
// line 395
panda$core$MutableString* $tmp1258 = *(&local58);
panda$core$String* $tmp1259 = panda$core$MutableString$finish$R$panda$core$String($tmp1258);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1259));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1259));
// unreffing REF($1856:panda.core.String)
panda$core$MutableString* $tmp1260 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1260));
// unreffing result
*(&local58) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1261 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1261));
// unreffing statements
*(&local57) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1262 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1262));
// unreffing list
*(&local56) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1263 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1263));
// unreffing target
*(&local55) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1264 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1264));
// unreffing label
*(&local54) = ((panda$core$String*) NULL);
return $tmp1259;
block89:;
panda$core$Int64 $tmp1265 = (panda$core$Int64) {21};
panda$core$Bit $tmp1266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1265);
bool $tmp1267 = $tmp1266.value;
if ($tmp1267) goto block95; else goto block96;
block95:;
org$pandalanguage$pandac$Position* $tmp1268 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1269 = *$tmp1268;
panda$core$String** $tmp1270 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1271 = *$tmp1270;
*(&local60) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1271));
panda$core$String* $tmp1272 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1272));
*(&local60) = $tmp1271;
org$pandalanguage$pandac$FixedArray** $tmp1273 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1274 = *$tmp1273;
*(&local61) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1274));
org$pandalanguage$pandac$FixedArray* $tmp1275 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1275));
*(&local61) = $tmp1274;
// line 398
panda$core$String* $tmp1276 = *(&local60);
panda$core$String* $tmp1277 = panda$core$String$convert$R$panda$core$String($tmp1276);
panda$core$String* $tmp1278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1277, &$s1279);
org$pandalanguage$pandac$FixedArray* $tmp1280 = *(&local61);
ITable* $tmp1281 = ((panda$collections$CollectionView*) $tmp1280)->$class->itable;
while ($tmp1281->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1281 = $tmp1281->next;
}
$fn1283 $tmp1282 = $tmp1281->methods[1];
panda$core$String* $tmp1284 = $tmp1282(((panda$collections$CollectionView*) $tmp1280));
panda$core$String* $tmp1285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1278, $tmp1284);
panda$core$String* $tmp1286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1285, &$s1287);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1286));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1286));
// unreffing REF($1921:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1285));
// unreffing REF($1920:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1284));
// unreffing REF($1919:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1278));
// unreffing REF($1915:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1277));
// unreffing REF($1914:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp1288 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1288));
// unreffing subtypes
*(&local61) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1289 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1289));
// unreffing name
*(&local60) = ((panda$core$String*) NULL);
return $tmp1286;
block96:;
panda$core$Int64 $tmp1290 = (panda$core$Int64) {22};
panda$core$Bit $tmp1291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1290);
bool $tmp1292 = $tmp1291.value;
if ($tmp1292) goto block97; else goto block98;
block97:;
org$pandalanguage$pandac$Position* $tmp1293 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1294 = *$tmp1293;
panda$core$String** $tmp1295 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1296 = *$tmp1295;
*(&local62) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1296));
panda$core$String* $tmp1297 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1297));
*(&local62) = $tmp1296;
// line 401
panda$core$String* $tmp1298 = *(&local62);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1298));
panda$core$String* $tmp1299 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1299));
// unreffing name
*(&local62) = ((panda$core$String*) NULL);
return $tmp1298;
block98:;
panda$core$Int64 $tmp1300 = (panda$core$Int64) {23};
panda$core$Bit $tmp1301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1300);
bool $tmp1302 = $tmp1301.value;
if ($tmp1302) goto block99; else goto block100;
block99:;
org$pandalanguage$pandac$Position* $tmp1303 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1304 = *$tmp1303;
org$pandalanguage$pandac$ASTNode** $tmp1305 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1306 = *$tmp1305;
*(&local63) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1306));
org$pandalanguage$pandac$ASTNode* $tmp1307 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1307));
*(&local63) = $tmp1306;
org$pandalanguage$pandac$FixedArray** $tmp1308 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1309 = *$tmp1308;
*(&local64) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1309));
org$pandalanguage$pandac$FixedArray* $tmp1310 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1310));
*(&local64) = $tmp1309;
org$pandalanguage$pandac$ASTNode** $tmp1311 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1312 = *$tmp1311;
*(&local65) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1312));
org$pandalanguage$pandac$ASTNode* $tmp1313 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1313));
*(&local65) = $tmp1312;
// line 404
panda$core$MutableString* $tmp1314 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$ASTNode* $tmp1315 = *(&local63);
panda$core$String* $tmp1316 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1317, ((panda$core$Object*) $tmp1315));
panda$core$String* $tmp1318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1316, &$s1319);
panda$core$MutableString$init$panda$core$String($tmp1314, $tmp1318);
*(&local66) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1314));
panda$core$MutableString* $tmp1320 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1320));
*(&local66) = $tmp1314;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1318));
// unreffing REF($2013:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1316));
// unreffing REF($2012:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1314));
// unreffing REF($2009:panda.core.MutableString)
// line 405
org$pandalanguage$pandac$FixedArray* $tmp1321 = *(&local64);
ITable* $tmp1322 = ((panda$collections$Iterable*) $tmp1321)->$class->itable;
while ($tmp1322->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1322 = $tmp1322->next;
}
$fn1324 $tmp1323 = $tmp1322->methods[0];
panda$collections$Iterator* $tmp1325 = $tmp1323(((panda$collections$Iterable*) $tmp1321));
goto block101;
block101:;
ITable* $tmp1326 = $tmp1325->$class->itable;
while ($tmp1326->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1326 = $tmp1326->next;
}
$fn1328 $tmp1327 = $tmp1326->methods[0];
panda$core$Bit $tmp1329 = $tmp1327($tmp1325);
bool $tmp1330 = $tmp1329.value;
if ($tmp1330) goto block103; else goto block102;
block102:;
*(&local67) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1331 = $tmp1325->$class->itable;
while ($tmp1331->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1331 = $tmp1331->next;
}
$fn1333 $tmp1332 = $tmp1331->methods[1];
panda$core$Object* $tmp1334 = $tmp1332($tmp1325);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1334)));
org$pandalanguage$pandac$ASTNode* $tmp1335 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1335));
*(&local67) = ((org$pandalanguage$pandac$ASTNode*) $tmp1334);
// line 406
panda$core$MutableString* $tmp1336 = *(&local66);
org$pandalanguage$pandac$ASTNode* $tmp1337 = *(&local67);
panda$core$String* $tmp1338 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1337), &$s1339);
panda$core$MutableString$append$panda$core$String($tmp1336, $tmp1338);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1338));
// unreffing REF($2059:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1334);
// unreffing REF($2047:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1340 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1340));
// unreffing s
*(&local67) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block101;
block103:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1325));
// unreffing REF($2036:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 408
panda$core$MutableString* $tmp1341 = *(&local66);
panda$core$MutableString$append$panda$core$String($tmp1341, &$s1342);
// line 409
org$pandalanguage$pandac$ASTNode* $tmp1343 = *(&local65);
panda$core$Bit $tmp1344 = panda$core$Bit$init$builtin_bit($tmp1343 != NULL);
bool $tmp1345 = $tmp1344.value;
if ($tmp1345) goto block104; else goto block105;
block104:;
// line 410
panda$core$MutableString* $tmp1346 = *(&local66);
org$pandalanguage$pandac$ASTNode* $tmp1347 = *(&local65);
panda$core$String* $tmp1348 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1349, ((panda$core$Object*) $tmp1347));
panda$core$String* $tmp1350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1348, &$s1351);
panda$core$MutableString$append$panda$core$String($tmp1346, $tmp1350);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1350));
// unreffing REF($2090:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1348));
// unreffing REF($2089:panda.core.String)
goto block105;
block105:;
// line 412
panda$core$MutableString* $tmp1352 = *(&local66);
panda$core$String* $tmp1353 = panda$core$MutableString$finish$R$panda$core$String($tmp1352);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1353));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1353));
// unreffing REF($2101:panda.core.String)
panda$core$MutableString* $tmp1354 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1354));
// unreffing result
*(&local66) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1355 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1355));
// unreffing ifFalse
*(&local65) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1356 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1356));
// unreffing ifTrue
*(&local64) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1357 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1357));
// unreffing test
*(&local63) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1353;
block100:;
panda$core$Int64 $tmp1358 = (panda$core$Int64) {24};
panda$core$Bit $tmp1359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1358);
bool $tmp1360 = $tmp1359.value;
if ($tmp1360) goto block106; else goto block107;
block106:;
org$pandalanguage$pandac$Position* $tmp1361 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1362 = *$tmp1361;
panda$core$UInt64* $tmp1363 = (panda$core$UInt64*) (param0->$data + 16);
panda$core$UInt64 $tmp1364 = *$tmp1363;
*(&local68) = $tmp1364;
// line 415
panda$core$UInt64 $tmp1365 = *(&local68);
panda$core$String* $tmp1366 = panda$core$UInt64$convert$R$panda$core$String($tmp1365);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1366));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1366));
// unreffing REF($2139:panda.core.String)
return $tmp1366;
block107:;
panda$core$Int64 $tmp1367 = (panda$core$Int64) {25};
panda$core$Bit $tmp1368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1367);
bool $tmp1369 = $tmp1368.value;
if ($tmp1369) goto block108; else goto block109;
block108:;
org$pandalanguage$pandac$Position* $tmp1370 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1371 = *$tmp1370;
org$pandalanguage$pandac$IR$Value** $tmp1372 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp1373 = *$tmp1372;
*(&local69) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1373));
org$pandalanguage$pandac$IR$Value* $tmp1374 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1374));
*(&local69) = $tmp1373;
// line 418
org$pandalanguage$pandac$IR$Value* $tmp1375 = *(&local69);
$fn1377 $tmp1376 = ($fn1377) $tmp1375->$class->vtable[0];
panda$core$String* $tmp1378 = $tmp1376($tmp1375);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1378));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1378));
// unreffing REF($2164:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp1379 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1379));
// unreffing value
*(&local69) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp1378;
block109:;
panda$core$Int64 $tmp1380 = (panda$core$Int64) {26};
panda$core$Bit $tmp1381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1380);
bool $tmp1382 = $tmp1381.value;
if ($tmp1382) goto block110; else goto block111;
block110:;
org$pandalanguage$pandac$Position* $tmp1383 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1384 = *$tmp1383;
panda$core$String** $tmp1385 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1386 = *$tmp1385;
*(&local70) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1386));
panda$core$String* $tmp1387 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1387));
*(&local70) = $tmp1386;
org$pandalanguage$pandac$FixedArray** $tmp1388 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1389 = *$tmp1388;
*(&local71) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1389));
org$pandalanguage$pandac$FixedArray* $tmp1390 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1390));
*(&local71) = $tmp1389;
// line 421
panda$core$MutableString* $tmp1391 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1391);
*(&local72) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1391));
panda$core$MutableString* $tmp1392 = *(&local72);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1392));
*(&local72) = $tmp1391;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1391));
// unreffing REF($2201:panda.core.MutableString)
// line 422
panda$core$String* $tmp1393 = *(&local70);
panda$core$Bit $tmp1394 = panda$core$Bit$init$builtin_bit($tmp1393 != NULL);
bool $tmp1395 = $tmp1394.value;
if ($tmp1395) goto block112; else goto block113;
block112:;
// line 423
panda$core$MutableString* $tmp1396 = *(&local72);
panda$core$String* $tmp1397 = *(&local70);
panda$core$String* $tmp1398 = panda$core$String$convert$R$panda$core$String($tmp1397);
panda$core$String* $tmp1399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1398, &$s1400);
panda$core$MutableString$append$panda$core$String($tmp1396, $tmp1399);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1399));
// unreffing REF($2224:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1398));
// unreffing REF($2223:panda.core.String)
goto block113;
block113:;
// line 425
panda$core$MutableString* $tmp1401 = *(&local72);
panda$core$MutableString$append$panda$core$String($tmp1401, &$s1402);
// line 426
org$pandalanguage$pandac$FixedArray* $tmp1403 = *(&local71);
ITable* $tmp1404 = ((panda$collections$Iterable*) $tmp1403)->$class->itable;
while ($tmp1404->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1404 = $tmp1404->next;
}
$fn1406 $tmp1405 = $tmp1404->methods[0];
panda$collections$Iterator* $tmp1407 = $tmp1405(((panda$collections$Iterable*) $tmp1403));
goto block114;
block114:;
ITable* $tmp1408 = $tmp1407->$class->itable;
while ($tmp1408->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1408 = $tmp1408->next;
}
$fn1410 $tmp1409 = $tmp1408->methods[0];
panda$core$Bit $tmp1411 = $tmp1409($tmp1407);
bool $tmp1412 = $tmp1411.value;
if ($tmp1412) goto block116; else goto block115;
block115:;
*(&local73) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1413 = $tmp1407->$class->itable;
while ($tmp1413->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1413 = $tmp1413->next;
}
$fn1415 $tmp1414 = $tmp1413->methods[1];
panda$core$Object* $tmp1416 = $tmp1414($tmp1407);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1416)));
org$pandalanguage$pandac$ASTNode* $tmp1417 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1417));
*(&local73) = ((org$pandalanguage$pandac$ASTNode*) $tmp1416);
// line 427
panda$core$MutableString* $tmp1418 = *(&local72);
org$pandalanguage$pandac$ASTNode* $tmp1419 = *(&local73);
panda$core$String* $tmp1420 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1419), &$s1421);
panda$core$MutableString$append$panda$core$String($tmp1418, $tmp1420);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1420));
// unreffing REF($2264:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1416);
// unreffing REF($2252:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1422 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1422));
// unreffing s
*(&local73) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block114;
block116:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1407));
// unreffing REF($2241:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 429
panda$core$MutableString* $tmp1423 = *(&local72);
panda$core$MutableString$append$panda$core$String($tmp1423, &$s1424);
// line 430
panda$core$MutableString* $tmp1425 = *(&local72);
panda$core$String* $tmp1426 = panda$core$MutableString$finish$R$panda$core$String($tmp1425);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1426));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1426));
// unreffing REF($2286:panda.core.String)
panda$core$MutableString* $tmp1427 = *(&local72);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1427));
// unreffing result
*(&local72) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1428 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1428));
// unreffing statements
*(&local71) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1429 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1429));
// unreffing label
*(&local70) = ((panda$core$String*) NULL);
return $tmp1426;
block111:;
panda$core$Int64 $tmp1430 = (panda$core$Int64) {27};
panda$core$Bit $tmp1431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1430);
bool $tmp1432 = $tmp1431.value;
if ($tmp1432) goto block117; else goto block118;
block117:;
org$pandalanguage$pandac$Position* $tmp1433 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1434 = *$tmp1433;
org$pandalanguage$pandac$ASTNode** $tmp1435 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1436 = *$tmp1435;
*(&local74) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1436));
org$pandalanguage$pandac$ASTNode* $tmp1437 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1437));
*(&local74) = $tmp1436;
org$pandalanguage$pandac$FixedArray** $tmp1438 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1439 = *$tmp1438;
*(&local75) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1439));
org$pandalanguage$pandac$FixedArray* $tmp1440 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1440));
*(&local75) = $tmp1439;
org$pandalanguage$pandac$FixedArray** $tmp1441 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp1442 = *$tmp1441;
*(&local76) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1442));
org$pandalanguage$pandac$FixedArray* $tmp1443 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1443));
*(&local76) = $tmp1442;
// line 433
panda$core$MutableString* $tmp1444 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$ASTNode* $tmp1445 = *(&local74);
panda$core$String* $tmp1446 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1447, ((panda$core$Object*) $tmp1445));
panda$core$String* $tmp1448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1446, &$s1449);
panda$core$MutableString$init$panda$core$String($tmp1444, $tmp1448);
*(&local77) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1444));
panda$core$MutableString* $tmp1450 = *(&local77);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1450));
*(&local77) = $tmp1444;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1448));
// unreffing REF($2346:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1446));
// unreffing REF($2345:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1444));
// unreffing REF($2342:panda.core.MutableString)
// line 434
org$pandalanguage$pandac$FixedArray* $tmp1451 = *(&local75);
ITable* $tmp1452 = ((panda$collections$Iterable*) $tmp1451)->$class->itable;
while ($tmp1452->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1452 = $tmp1452->next;
}
$fn1454 $tmp1453 = $tmp1452->methods[0];
panda$collections$Iterator* $tmp1455 = $tmp1453(((panda$collections$Iterable*) $tmp1451));
goto block119;
block119:;
ITable* $tmp1456 = $tmp1455->$class->itable;
while ($tmp1456->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1456 = $tmp1456->next;
}
$fn1458 $tmp1457 = $tmp1456->methods[0];
panda$core$Bit $tmp1459 = $tmp1457($tmp1455);
bool $tmp1460 = $tmp1459.value;
if ($tmp1460) goto block121; else goto block120;
block120:;
*(&local78) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1461 = $tmp1455->$class->itable;
while ($tmp1461->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1461 = $tmp1461->next;
}
$fn1463 $tmp1462 = $tmp1461->methods[1];
panda$core$Object* $tmp1464 = $tmp1462($tmp1455);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1464)));
org$pandalanguage$pandac$ASTNode* $tmp1465 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1465));
*(&local78) = ((org$pandalanguage$pandac$ASTNode*) $tmp1464);
// line 435
panda$core$MutableString* $tmp1466 = *(&local77);
org$pandalanguage$pandac$ASTNode* $tmp1467 = *(&local78);
panda$core$String* $tmp1468 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1467), &$s1469);
panda$core$MutableString$append$panda$core$String($tmp1466, $tmp1468);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1468));
// unreffing REF($2392:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1464);
// unreffing REF($2380:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1470 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1470));
// unreffing w
*(&local78) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block119;
block121:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1455));
// unreffing REF($2369:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 437
org$pandalanguage$pandac$FixedArray* $tmp1471 = *(&local76);
panda$core$Bit $tmp1472 = panda$core$Bit$init$builtin_bit($tmp1471 != NULL);
bool $tmp1473 = $tmp1472.value;
if ($tmp1473) goto block122; else goto block123;
block122:;
// line 438
panda$core$MutableString* $tmp1474 = *(&local77);
org$pandalanguage$pandac$FixedArray* $tmp1475 = *(&local76);
panda$core$String* $tmp1476 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1475), &$s1477);
panda$core$MutableString$append$panda$core$String($tmp1474, $tmp1476);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1476));
// unreffing REF($2419:panda.core.String)
goto block123;
block123:;
// line 440
panda$core$MutableString* $tmp1478 = *(&local77);
panda$core$MutableString$append$panda$core$String($tmp1478, &$s1479);
// line 441
panda$core$MutableString* $tmp1480 = *(&local77);
panda$core$String* $tmp1481 = panda$core$MutableString$finish$R$panda$core$String($tmp1480);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1481));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1481));
// unreffing REF($2430:panda.core.String)
panda$core$MutableString* $tmp1482 = *(&local77);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1482));
// unreffing result
*(&local77) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1483 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1483));
// unreffing other
*(&local76) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1484 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1484));
// unreffing whens
*(&local75) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1485 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1485));
// unreffing value
*(&local74) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1481;
block118:;
panda$core$Int64 $tmp1486 = (panda$core$Int64) {28};
panda$core$Bit $tmp1487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1486);
bool $tmp1488 = $tmp1487.value;
if ($tmp1488) goto block124; else goto block125;
block124:;
org$pandalanguage$pandac$Position* $tmp1489 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1490 = *$tmp1489;
org$pandalanguage$pandac$ASTNode** $tmp1491 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1492 = *$tmp1491;
*(&local79) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1492));
org$pandalanguage$pandac$ASTNode* $tmp1493 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1493));
*(&local79) = $tmp1492;
org$pandalanguage$pandac$FixedArray** $tmp1494 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1495 = *$tmp1494;
*(&local80) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1495));
org$pandalanguage$pandac$FixedArray* $tmp1496 = *(&local80);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1496));
*(&local80) = $tmp1495;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp1497 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp1498 = *$tmp1497;
*(&local81) = $tmp1498;
panda$core$String** $tmp1499 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp1500 = *$tmp1499;
*(&local82) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1500));
panda$core$String* $tmp1501 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1501));
*(&local82) = $tmp1500;
org$pandalanguage$pandac$FixedArray** $tmp1502 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp1503 = *$tmp1502;
*(&local83) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1503));
org$pandalanguage$pandac$FixedArray* $tmp1504 = *(&local83);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1504));
*(&local83) = $tmp1503;
org$pandalanguage$pandac$FixedArray** $tmp1505 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp1506 = *$tmp1505;
*(&local84) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1506));
org$pandalanguage$pandac$FixedArray* $tmp1507 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1507));
*(&local84) = $tmp1506;
org$pandalanguage$pandac$ASTNode** $tmp1508 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp1509 = *$tmp1508;
*(&local85) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1509));
org$pandalanguage$pandac$ASTNode* $tmp1510 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1510));
*(&local85) = $tmp1509;
org$pandalanguage$pandac$FixedArray** $tmp1511 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 72);
org$pandalanguage$pandac$FixedArray* $tmp1512 = *$tmp1511;
*(&local86) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1512));
org$pandalanguage$pandac$FixedArray* $tmp1513 = *(&local86);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1513));
*(&local86) = $tmp1512;
// line 445
panda$core$MutableString* $tmp1514 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1514);
*(&local87) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
panda$core$MutableString* $tmp1515 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1515));
*(&local87) = $tmp1514;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
// unreffing REF($2530:panda.core.MutableString)
// line 446
org$pandalanguage$pandac$ASTNode* $tmp1516 = *(&local79);
panda$core$Bit $tmp1517 = panda$core$Bit$init$builtin_bit($tmp1516 != NULL);
bool $tmp1518 = $tmp1517.value;
if ($tmp1518) goto block126; else goto block127;
block126:;
// line 447
panda$core$MutableString* $tmp1519 = *(&local87);
org$pandalanguage$pandac$ASTNode* $tmp1520 = *(&local79);
panda$core$String* $tmp1521 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1520), &$s1522);
panda$core$MutableString$append$panda$core$String($tmp1519, $tmp1521);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1521));
// unreffing REF($2552:panda.core.String)
goto block127;
block127:;
// line 449
org$pandalanguage$pandac$FixedArray* $tmp1523 = *(&local80);
ITable* $tmp1524 = ((panda$collections$Iterable*) $tmp1523)->$class->itable;
while ($tmp1524->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1524 = $tmp1524->next;
}
$fn1526 $tmp1525 = $tmp1524->methods[0];
panda$collections$Iterator* $tmp1527 = $tmp1525(((panda$collections$Iterable*) $tmp1523));
goto block128;
block128:;
ITable* $tmp1528 = $tmp1527->$class->itable;
while ($tmp1528->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1528 = $tmp1528->next;
}
$fn1530 $tmp1529 = $tmp1528->methods[0];
panda$core$Bit $tmp1531 = $tmp1529($tmp1527);
bool $tmp1532 = $tmp1531.value;
if ($tmp1532) goto block130; else goto block129;
block129:;
*(&local88) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1533 = $tmp1527->$class->itable;
while ($tmp1533->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1533 = $tmp1533->next;
}
$fn1535 $tmp1534 = $tmp1533->methods[1];
panda$core$Object* $tmp1536 = $tmp1534($tmp1527);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1536)));
org$pandalanguage$pandac$ASTNode* $tmp1537 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1537));
*(&local88) = ((org$pandalanguage$pandac$ASTNode*) $tmp1536);
// line 450
panda$core$MutableString* $tmp1538 = *(&local87);
org$pandalanguage$pandac$ASTNode* $tmp1539 = *(&local88);
panda$core$String* $tmp1540 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1539), &$s1541);
panda$core$MutableString$append$panda$core$String($tmp1538, $tmp1540);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1540));
// unreffing REF($2586:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1536);
// unreffing REF($2574:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1542 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1542));
// unreffing a
*(&local88) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block128;
block130:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1527));
// unreffing REF($2563:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 452
org$pandalanguage$pandac$MethodDecl$Kind $tmp1543 = *(&local81);
panda$core$Int64 $tmp1544 = $tmp1543.$rawValue;
panda$core$Int64 $tmp1545 = (panda$core$Int64) {0};
panda$core$Bit $tmp1546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1544, $tmp1545);
bool $tmp1547 = $tmp1546.value;
if ($tmp1547) goto block132; else goto block133;
block132:;
// line 453
panda$core$MutableString* $tmp1548 = *(&local87);
panda$core$MutableString$append$panda$core$String($tmp1548, &$s1549);
goto block131;
block133:;
panda$core$Int64 $tmp1550 = (panda$core$Int64) {1};
panda$core$Bit $tmp1551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1544, $tmp1550);
bool $tmp1552 = $tmp1551.value;
if ($tmp1552) goto block134; else goto block135;
block134:;
// line 454
panda$core$MutableString* $tmp1553 = *(&local87);
panda$core$MutableString$append$panda$core$String($tmp1553, &$s1554);
goto block131;
block135:;
panda$core$Int64 $tmp1555 = (panda$core$Int64) {2};
panda$core$Bit $tmp1556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1544, $tmp1555);
bool $tmp1557 = $tmp1556.value;
if ($tmp1557) goto block136; else goto block131;
block136:;
goto block131;
block131:;
// line 457
panda$core$MutableString* $tmp1558 = *(&local87);
panda$core$String* $tmp1559 = *(&local82);
panda$core$MutableString$append$panda$core$String($tmp1558, $tmp1559);
// line 458
org$pandalanguage$pandac$FixedArray* $tmp1560 = *(&local83);
panda$core$Bit $tmp1561 = panda$core$Bit$init$builtin_bit($tmp1560 != NULL);
bool $tmp1562 = $tmp1561.value;
if ($tmp1562) goto block137; else goto block138;
block137:;
// line 459
panda$core$MutableString* $tmp1563 = *(&local87);
org$pandalanguage$pandac$FixedArray* $tmp1564 = *(&local83);
ITable* $tmp1565 = ((panda$collections$CollectionView*) $tmp1564)->$class->itable;
while ($tmp1565->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1565 = $tmp1565->next;
}
$fn1567 $tmp1566 = $tmp1565->methods[1];
panda$core$String* $tmp1568 = $tmp1566(((panda$collections$CollectionView*) $tmp1564));
panda$core$String* $tmp1569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1570, $tmp1568);
panda$core$String* $tmp1571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1569, &$s1572);
panda$core$MutableString$append$panda$core$String($tmp1563, $tmp1571);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1571));
// unreffing REF($2644:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1569));
// unreffing REF($2643:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1568));
// unreffing REF($2642:panda.core.String)
goto block138;
block138:;
// line 461
panda$core$MutableString* $tmp1573 = *(&local87);
org$pandalanguage$pandac$FixedArray* $tmp1574 = *(&local84);
ITable* $tmp1575 = ((panda$collections$CollectionView*) $tmp1574)->$class->itable;
while ($tmp1575->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1575 = $tmp1575->next;
}
$fn1577 $tmp1576 = $tmp1575->methods[1];
panda$core$String* $tmp1578 = $tmp1576(((panda$collections$CollectionView*) $tmp1574));
panda$core$String* $tmp1579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1580, $tmp1578);
panda$core$String* $tmp1581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1579, &$s1582);
panda$core$MutableString$append$panda$core$String($tmp1573, $tmp1581);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1581));
// unreffing REF($2663:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1579));
// unreffing REF($2662:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1578));
// unreffing REF($2661:panda.core.String)
// line 462
org$pandalanguage$pandac$ASTNode* $tmp1583 = *(&local85);
panda$core$Bit $tmp1584 = panda$core$Bit$init$builtin_bit($tmp1583 != NULL);
bool $tmp1585 = $tmp1584.value;
if ($tmp1585) goto block139; else goto block140;
block139:;
// line 463
panda$core$MutableString* $tmp1586 = *(&local87);
org$pandalanguage$pandac$ASTNode* $tmp1587 = *(&local85);
panda$core$String* $tmp1588 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1589, ((panda$core$Object*) $tmp1587));
panda$core$String* $tmp1590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1588, &$s1591);
panda$core$MutableString$append$panda$core$String($tmp1586, $tmp1590);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1590));
// unreffing REF($2685:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1588));
// unreffing REF($2684:panda.core.String)
goto block140;
block140:;
// line 465
org$pandalanguage$pandac$FixedArray* $tmp1592 = *(&local86);
panda$core$Bit $tmp1593 = panda$core$Bit$init$builtin_bit($tmp1592 != NULL);
bool $tmp1594 = $tmp1593.value;
if ($tmp1594) goto block141; else goto block142;
block141:;
// line 466
panda$core$MutableString* $tmp1595 = *(&local87);
panda$core$MutableString$append$panda$core$String($tmp1595, &$s1596);
// line 467
org$pandalanguage$pandac$FixedArray* $tmp1597 = *(&local86);
ITable* $tmp1598 = ((panda$collections$Iterable*) $tmp1597)->$class->itable;
while ($tmp1598->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1598 = $tmp1598->next;
}
$fn1600 $tmp1599 = $tmp1598->methods[0];
panda$collections$Iterator* $tmp1601 = $tmp1599(((panda$collections$Iterable*) $tmp1597));
goto block143;
block143:;
ITable* $tmp1602 = $tmp1601->$class->itable;
while ($tmp1602->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1602 = $tmp1602->next;
}
$fn1604 $tmp1603 = $tmp1602->methods[0];
panda$core$Bit $tmp1605 = $tmp1603($tmp1601);
bool $tmp1606 = $tmp1605.value;
if ($tmp1606) goto block145; else goto block144;
block144:;
*(&local89) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1607 = $tmp1601->$class->itable;
while ($tmp1607->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1607 = $tmp1607->next;
}
$fn1609 $tmp1608 = $tmp1607->methods[1];
panda$core$Object* $tmp1610 = $tmp1608($tmp1601);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1610)));
org$pandalanguage$pandac$ASTNode* $tmp1611 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1611));
*(&local89) = ((org$pandalanguage$pandac$ASTNode*) $tmp1610);
// line 468
panda$core$MutableString* $tmp1612 = *(&local87);
org$pandalanguage$pandac$ASTNode* $tmp1613 = *(&local89);
panda$core$String* $tmp1614 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1613), &$s1615);
panda$core$MutableString$append$panda$core$String($tmp1612, $tmp1614);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1614));
// unreffing REF($2731:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1610);
// unreffing REF($2719:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1616 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1616));
// unreffing s
*(&local89) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block143;
block145:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1601));
// unreffing REF($2708:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 470
panda$core$MutableString* $tmp1617 = *(&local87);
panda$core$MutableString$append$panda$core$String($tmp1617, &$s1618);
goto block142;
block142:;
// line 472
panda$core$MutableString* $tmp1619 = *(&local87);
panda$core$String* $tmp1620 = panda$core$MutableString$finish$R$panda$core$String($tmp1619);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1620));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1620));
// unreffing REF($2754:panda.core.String)
panda$core$MutableString* $tmp1621 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1621));
// unreffing result
*(&local87) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1622 = *(&local86);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1622));
// unreffing statements
*(&local86) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1623 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1623));
// unreffing returnType
*(&local85) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1624 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1624));
// unreffing parameters
*(&local84) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1625 = *(&local83);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1625));
// unreffing generics
*(&local83) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1626 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1626));
// unreffing name
*(&local82) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1627 = *(&local80);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1627));
// unreffing annotations
*(&local80) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1628 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
// unreffing dc
*(&local79) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1620;
block125:;
panda$core$Int64 $tmp1629 = (panda$core$Int64) {29};
panda$core$Bit $tmp1630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1629);
bool $tmp1631 = $tmp1630.value;
if ($tmp1631) goto block146; else goto block147;
block146:;
org$pandalanguage$pandac$Position* $tmp1632 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1633 = *$tmp1632;
org$pandalanguage$pandac$parser$Token$Kind* $tmp1634 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp1635 = *$tmp1634;
*(&local90) = $tmp1635;
org$pandalanguage$pandac$FixedArray** $tmp1636 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1637 = *$tmp1636;
*(&local91) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1637));
org$pandalanguage$pandac$FixedArray* $tmp1638 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1638));
*(&local91) = $tmp1637;
org$pandalanguage$pandac$ASTNode** $tmp1639 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1640 = *$tmp1639;
*(&local92) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1640));
org$pandalanguage$pandac$ASTNode* $tmp1641 = *(&local92);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1641));
*(&local92) = $tmp1640;
// line 475
*(&local93) = ((panda$core$String*) NULL);
// line 476
org$pandalanguage$pandac$parser$Token$Kind $tmp1642 = *(&local90);
panda$core$Int64 $tmp1643 = $tmp1642.$rawValue;
panda$core$Int64 $tmp1644 = (panda$core$Int64) {91};
panda$core$Bit $tmp1645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1643, $tmp1644);
bool $tmp1646 = $tmp1645.value;
if ($tmp1646) goto block149; else goto block150;
block149:;
// line 478
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1647));
panda$core$String* $tmp1648 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1648));
*(&local93) = &$s1649;
goto block148;
block150:;
panda$core$Int64 $tmp1650 = (panda$core$Int64) {92};
panda$core$Bit $tmp1651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1643, $tmp1650);
bool $tmp1652 = $tmp1651.value;
if ($tmp1652) goto block151; else goto block152;
block151:;
// line 481
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1653));
panda$core$String* $tmp1654 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1654));
*(&local93) = &$s1655;
goto block148;
block152:;
panda$core$Int64 $tmp1656 = (panda$core$Int64) {93};
panda$core$Bit $tmp1657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1643, $tmp1656);
bool $tmp1658 = $tmp1657.value;
if ($tmp1658) goto block153; else goto block154;
block153:;
// line 484
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1659));
panda$core$String* $tmp1660 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1660));
*(&local93) = &$s1661;
goto block148;
block154:;
panda$core$Int64 $tmp1662 = (panda$core$Int64) {94};
panda$core$Bit $tmp1663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1643, $tmp1662);
bool $tmp1664 = $tmp1663.value;
if ($tmp1664) goto block155; else goto block148;
block155:;
// line 487
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1665));
panda$core$String* $tmp1666 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1666));
*(&local93) = &$s1667;
goto block148;
block148:;
// line 490
org$pandalanguage$pandac$FixedArray* $tmp1668 = *(&local91);
ITable* $tmp1669 = ((panda$collections$CollectionView*) $tmp1668)->$class->itable;
while ($tmp1669->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1669 = $tmp1669->next;
}
$fn1671 $tmp1670 = $tmp1669->methods[1];
panda$core$String* $tmp1672 = $tmp1670(((panda$collections$CollectionView*) $tmp1668));
panda$core$String* $tmp1673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1674, $tmp1672);
panda$core$String* $tmp1675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1673, &$s1676);
panda$core$String* $tmp1677 = *(&local93);
panda$core$String* $tmp1678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1675, $tmp1677);
panda$core$String* $tmp1679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1678, &$s1680);
*(&local94) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1679));
panda$core$String* $tmp1681 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1681));
*(&local94) = $tmp1679;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1679));
// unreffing REF($2890:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1678));
// unreffing REF($2889:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1675));
// unreffing REF($2887:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1673));
// unreffing REF($2886:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1672));
// unreffing REF($2885:panda.core.String)
// line 491
org$pandalanguage$pandac$ASTNode* $tmp1682 = *(&local92);
panda$core$Bit $tmp1683 = panda$core$Bit$init$builtin_bit($tmp1682 != NULL);
bool $tmp1684 = $tmp1683.value;
if ($tmp1684) goto block156; else goto block157;
block156:;
// line 492
panda$core$String* $tmp1685 = *(&local94);
panda$core$String* $tmp1686 = panda$core$String$convert$R$panda$core$String($tmp1685);
panda$core$String* $tmp1687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1686, &$s1688);
org$pandalanguage$pandac$ASTNode* $tmp1689 = *(&local92);
panda$core$String* $tmp1690 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1687, ((panda$core$Object*) $tmp1689));
panda$core$String* $tmp1691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1690, &$s1692);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1691));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1691));
// unreffing REF($2926:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1690));
// unreffing REF($2925:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1687));
// unreffing REF($2922:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1686));
// unreffing REF($2921:panda.core.String)
panda$core$String* $tmp1693 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1693));
// unreffing partial
*(&local94) = ((panda$core$String*) NULL);
panda$core$String* $tmp1694 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1694));
// unreffing yield
*(&local93) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1695 = *(&local92);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1695));
// unreffing returnType
*(&local92) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1696 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1696));
// unreffing paramTypes
*(&local91) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1691;
block157:;
// line 494
panda$core$String* $tmp1697 = *(&local94);
panda$core$String* $tmp1698 = panda$core$String$convert$R$panda$core$String($tmp1697);
panda$core$String* $tmp1699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1698, &$s1700);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1699));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1699));
// unreffing REF($2965:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1698));
// unreffing REF($2964:panda.core.String)
panda$core$String* $tmp1701 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1701));
// unreffing partial
*(&local94) = ((panda$core$String*) NULL);
panda$core$String* $tmp1702 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1702));
// unreffing yield
*(&local93) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1703 = *(&local92);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1703));
// unreffing returnType
*(&local92) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1704 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1704));
// unreffing paramTypes
*(&local91) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1699;
block147:;
panda$core$Int64 $tmp1705 = (panda$core$Int64) {30};
panda$core$Bit $tmp1706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1705);
bool $tmp1707 = $tmp1706.value;
if ($tmp1707) goto block158; else goto block159;
block158:;
// line 497
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1708));
return &$s1709;
block159:;
panda$core$Int64 $tmp1710 = (panda$core$Int64) {31};
panda$core$Bit $tmp1711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1710);
bool $tmp1712 = $tmp1711.value;
if ($tmp1712) goto block160; else goto block161;
block160:;
org$pandalanguage$pandac$Position* $tmp1713 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1714 = *$tmp1713;
org$pandalanguage$pandac$ASTNode** $tmp1715 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1716 = *$tmp1715;
*(&local95) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1716));
org$pandalanguage$pandac$ASTNode* $tmp1717 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1717));
*(&local95) = $tmp1716;
// line 500
org$pandalanguage$pandac$ASTNode* $tmp1718 = *(&local95);
panda$core$String* $tmp1719 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1718), &$s1720);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1719));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1719));
// unreffing REF($3021:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1721 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1721));
// unreffing base
*(&local95) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1719;
block161:;
panda$core$Int64 $tmp1722 = (panda$core$Int64) {32};
panda$core$Bit $tmp1723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1722);
bool $tmp1724 = $tmp1723.value;
if ($tmp1724) goto block162; else goto block163;
block162:;
org$pandalanguage$pandac$Position* $tmp1725 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1726 = *$tmp1725;
panda$core$String** $tmp1727 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1728 = *$tmp1727;
*(&local96) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1728));
panda$core$String* $tmp1729 = *(&local96);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1729));
*(&local96) = $tmp1728;
// line 503
panda$core$String* $tmp1730 = *(&local96);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1730));
panda$core$String* $tmp1731 = *(&local96);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1731));
// unreffing name
*(&local96) = ((panda$core$String*) NULL);
return $tmp1730;
block163:;
panda$core$Int64 $tmp1732 = (panda$core$Int64) {33};
panda$core$Bit $tmp1733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1732);
bool $tmp1734 = $tmp1733.value;
if ($tmp1734) goto block164; else goto block165;
block164:;
org$pandalanguage$pandac$Position* $tmp1735 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1736 = *$tmp1735;
panda$core$String** $tmp1737 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1738 = *$tmp1737;
*(&local97) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1738));
panda$core$String* $tmp1739 = *(&local97);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1739));
*(&local97) = $tmp1738;
org$pandalanguage$pandac$ASTNode** $tmp1740 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1741 = *$tmp1740;
*(&local98) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1741));
org$pandalanguage$pandac$ASTNode* $tmp1742 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1742));
*(&local98) = $tmp1741;
// line 506
panda$core$String* $tmp1743 = *(&local97);
panda$core$String* $tmp1744 = panda$core$String$convert$R$panda$core$String($tmp1743);
panda$core$String* $tmp1745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1744, &$s1746);
org$pandalanguage$pandac$ASTNode* $tmp1747 = *(&local98);
panda$core$String* $tmp1748 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1745, ((panda$core$Object*) $tmp1747));
panda$core$String* $tmp1749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1748, &$s1750);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1749));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1749));
// unreffing REF($3089:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1748));
// unreffing REF($3088:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1745));
// unreffing REF($3085:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1744));
// unreffing REF($3084:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1751 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1751));
// unreffing type
*(&local98) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1752 = *(&local97);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1752));
// unreffing name
*(&local97) = ((panda$core$String*) NULL);
return $tmp1749;
block165:;
panda$core$Int64 $tmp1753 = (panda$core$Int64) {34};
panda$core$Bit $tmp1754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1753);
bool $tmp1755 = $tmp1754.value;
if ($tmp1755) goto block166; else goto block167;
block166:;
org$pandalanguage$pandac$Position* $tmp1756 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1757 = *$tmp1756;
org$pandalanguage$pandac$parser$Token$Kind* $tmp1758 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp1759 = *$tmp1758;
*(&local99) = $tmp1759;
org$pandalanguage$pandac$ASTNode** $tmp1760 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1761 = *$tmp1760;
*(&local100) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1761));
org$pandalanguage$pandac$ASTNode* $tmp1762 = *(&local100);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1762));
*(&local100) = $tmp1761;
// line 509
org$pandalanguage$pandac$parser$Token$Kind $tmp1763 = *(&local99);
panda$core$String* $tmp1764 = org$pandalanguage$pandac$parser$Token$Kind$convert$R$panda$core$String($tmp1763);
panda$core$String* $tmp1765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1764, &$s1766);
org$pandalanguage$pandac$ASTNode* $tmp1767 = *(&local100);
panda$core$String* $tmp1768 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1765, ((panda$core$Object*) $tmp1767));
panda$core$String* $tmp1769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1768, &$s1770);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1769));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1769));
// unreffing REF($3140:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1768));
// unreffing REF($3139:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1765));
// unreffing REF($3136:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1764));
// unreffing REF($3135:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1771 = *(&local100);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1771));
// unreffing base
*(&local100) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1769;
block167:;
panda$core$Int64 $tmp1772 = (panda$core$Int64) {35};
panda$core$Bit $tmp1773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1772);
bool $tmp1774 = $tmp1773.value;
if ($tmp1774) goto block168; else goto block169;
block168:;
org$pandalanguage$pandac$Position* $tmp1775 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1776 = *$tmp1775;
org$pandalanguage$pandac$ASTNode** $tmp1777 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1778 = *$tmp1777;
*(&local101) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1778));
org$pandalanguage$pandac$ASTNode* $tmp1779 = *(&local101);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1779));
*(&local101) = $tmp1778;
panda$core$Bit* $tmp1780 = (panda$core$Bit*) (param0->$data + 24);
panda$core$Bit $tmp1781 = *$tmp1780;
*(&local102) = $tmp1781;
org$pandalanguage$pandac$ASTNode** $tmp1782 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 25);
org$pandalanguage$pandac$ASTNode* $tmp1783 = *$tmp1782;
*(&local103) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1783));
org$pandalanguage$pandac$ASTNode* $tmp1784 = *(&local103);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1784));
*(&local103) = $tmp1783;
org$pandalanguage$pandac$ASTNode** $tmp1785 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 33);
org$pandalanguage$pandac$ASTNode* $tmp1786 = *$tmp1785;
*(&local104) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1786));
org$pandalanguage$pandac$ASTNode* $tmp1787 = *(&local104);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1787));
*(&local104) = $tmp1786;
// line 512
panda$core$MutableString* $tmp1788 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1788);
*(&local105) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1788));
panda$core$MutableString* $tmp1789 = *(&local105);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1789));
*(&local105) = $tmp1788;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1788));
// unreffing REF($3198:panda.core.MutableString)
// line 513
org$pandalanguage$pandac$ASTNode* $tmp1790 = *(&local101);
panda$core$Bit $tmp1791 = panda$core$Bit$init$builtin_bit($tmp1790 != NULL);
bool $tmp1792 = $tmp1791.value;
if ($tmp1792) goto block170; else goto block171;
block170:;
// line 514
panda$core$MutableString* $tmp1793 = *(&local105);
org$pandalanguage$pandac$ASTNode* $tmp1794 = *(&local101);
panda$core$MutableString$append$panda$core$Object($tmp1793, ((panda$core$Object*) $tmp1794));
goto block171;
block171:;
// line 516
panda$core$Bit $tmp1795 = *(&local102);
bool $tmp1796 = $tmp1795.value;
if ($tmp1796) goto block172; else goto block174;
block172:;
// line 517
panda$core$MutableString* $tmp1797 = *(&local105);
panda$core$MutableString$append$panda$core$String($tmp1797, &$s1798);
goto block173;
block174:;
// line 1
// line 520
panda$core$MutableString* $tmp1799 = *(&local105);
panda$core$MutableString$append$panda$core$String($tmp1799, &$s1800);
goto block173;
block173:;
// line 522
org$pandalanguage$pandac$ASTNode* $tmp1801 = *(&local103);
panda$core$Bit $tmp1802 = panda$core$Bit$init$builtin_bit($tmp1801 != NULL);
bool $tmp1803 = $tmp1802.value;
if ($tmp1803) goto block175; else goto block176;
block175:;
// line 523
panda$core$MutableString* $tmp1804 = *(&local105);
org$pandalanguage$pandac$ASTNode* $tmp1805 = *(&local103);
panda$core$MutableString$append$panda$core$Object($tmp1804, ((panda$core$Object*) $tmp1805));
goto block176;
block176:;
// line 525
org$pandalanguage$pandac$ASTNode* $tmp1806 = *(&local104);
panda$core$Bit $tmp1807 = panda$core$Bit$init$builtin_bit($tmp1806 != NULL);
bool $tmp1808 = $tmp1807.value;
if ($tmp1808) goto block177; else goto block178;
block177:;
// line 526
panda$core$MutableString* $tmp1809 = *(&local105);
org$pandalanguage$pandac$ASTNode* $tmp1810 = *(&local104);
panda$core$String* $tmp1811 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1812, ((panda$core$Object*) $tmp1810));
panda$core$MutableString$append$panda$core$String($tmp1809, $tmp1811);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1811));
// unreffing REF($3257:panda.core.String)
goto block178;
block178:;
// line 528
panda$core$MutableString* $tmp1813 = *(&local105);
panda$core$String* $tmp1814 = panda$core$MutableString$finish$R$panda$core$String($tmp1813);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1814));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1814));
// unreffing REF($3265:panda.core.String)
panda$core$MutableString* $tmp1815 = *(&local105);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1815));
// unreffing result
*(&local105) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1816 = *(&local104);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1816));
// unreffing step
*(&local104) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1817 = *(&local103);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1817));
// unreffing end
*(&local103) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1818 = *(&local101);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1818));
// unreffing start
*(&local101) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1814;
block169:;
panda$core$Int64 $tmp1819 = (panda$core$Int64) {36};
panda$core$Bit $tmp1820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1819);
bool $tmp1821 = $tmp1820.value;
if ($tmp1821) goto block179; else goto block180;
block179:;
org$pandalanguage$pandac$Position* $tmp1822 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1823 = *$tmp1822;
panda$core$Real64* $tmp1824 = (panda$core$Real64*) (param0->$data + 16);
panda$core$Real64 $tmp1825 = *$tmp1824;
*(&local106) = $tmp1825;
// line 531
panda$core$Real64 $tmp1826 = *(&local106);
panda$core$String* $tmp1827 = panda$core$Real64$convert$R$panda$core$String($tmp1826);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1827));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1827));
// unreffing REF($3303:panda.core.String)
return $tmp1827;
block180:;
panda$core$Int64 $tmp1828 = (panda$core$Int64) {37};
panda$core$Bit $tmp1829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1828);
bool $tmp1830 = $tmp1829.value;
if ($tmp1830) goto block181; else goto block182;
block181:;
org$pandalanguage$pandac$Position* $tmp1831 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1832 = *$tmp1831;
panda$core$String** $tmp1833 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1834 = *$tmp1833;
*(&local107) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1834));
panda$core$String* $tmp1835 = *(&local107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1835));
*(&local107) = $tmp1834;
// line 534
panda$core$String* $tmp1836 = *(&local107);
panda$core$String* $tmp1837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1838, $tmp1836);
panda$core$String* $tmp1839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1837, &$s1840);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1839));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1839));
// unreffing REF($3328:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1837));
// unreffing REF($3327:panda.core.String)
panda$core$String* $tmp1841 = *(&local107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1841));
// unreffing src
*(&local107) = ((panda$core$String*) NULL);
return $tmp1839;
block182:;
panda$core$Int64 $tmp1842 = (panda$core$Int64) {38};
panda$core$Bit $tmp1843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1842);
bool $tmp1844 = $tmp1843.value;
if ($tmp1844) goto block183; else goto block184;
block183:;
org$pandalanguage$pandac$Position* $tmp1845 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1846 = *$tmp1845;
org$pandalanguage$pandac$ASTNode** $tmp1847 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1848 = *$tmp1847;
*(&local108) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1848));
org$pandalanguage$pandac$ASTNode* $tmp1849 = *(&local108);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1849));
*(&local108) = $tmp1848;
// line 537
org$pandalanguage$pandac$ASTNode* $tmp1850 = *(&local108);
panda$core$Bit $tmp1851 = panda$core$Bit$init$builtin_bit($tmp1850 != NULL);
bool $tmp1852 = $tmp1851.value;
if ($tmp1852) goto block185; else goto block186;
block185:;
// line 538
org$pandalanguage$pandac$ASTNode* $tmp1853 = *(&local108);
panda$core$String* $tmp1854 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1855, ((panda$core$Object*) $tmp1853));
panda$core$String* $tmp1856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1854, &$s1857);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1856));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1856));
// unreffing REF($3368:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1854));
// unreffing REF($3367:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1858 = *(&local108);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1858));
// unreffing value
*(&local108) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1856;
block186:;
// line 540
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1859));
org$pandalanguage$pandac$ASTNode* $tmp1860 = *(&local108);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1860));
// unreffing value
*(&local108) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return &$s1861;
block184:;
panda$core$Int64 $tmp1862 = (panda$core$Int64) {39};
panda$core$Bit $tmp1863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1862);
bool $tmp1864 = $tmp1863.value;
if ($tmp1864) goto block187; else goto block188;
block187:;
// line 543
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1865));
return &$s1866;
block188:;
panda$core$Int64 $tmp1867 = (panda$core$Int64) {40};
panda$core$Bit $tmp1868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1867);
bool $tmp1869 = $tmp1868.value;
if ($tmp1869) goto block189; else goto block190;
block189:;
org$pandalanguage$pandac$Position* $tmp1870 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1871 = *$tmp1870;
panda$core$String** $tmp1872 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1873 = *$tmp1872;
*(&local109) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1873));
panda$core$String* $tmp1874 = *(&local109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1874));
*(&local109) = $tmp1873;
// line 546
panda$core$String* $tmp1875 = *(&local109);
panda$core$String* $tmp1876 = panda$core$String$format$panda$core$String$R$panda$core$String($tmp1875, &$s1877);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1876));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1876));
// unreffing REF($3417:panda.core.String)
panda$core$String* $tmp1878 = *(&local109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1878));
// unreffing str
*(&local109) = ((panda$core$String*) NULL);
return $tmp1876;
block190:;
panda$core$Int64 $tmp1879 = (panda$core$Int64) {41};
panda$core$Bit $tmp1880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1879);
bool $tmp1881 = $tmp1880.value;
if ($tmp1881) goto block191; else goto block192;
block191:;
// line 549
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1882));
return &$s1883;
block192:;
panda$core$Int64 $tmp1884 = (panda$core$Int64) {42};
panda$core$Bit $tmp1885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1884);
bool $tmp1886 = $tmp1885.value;
if ($tmp1886) goto block193; else goto block194;
block193:;
org$pandalanguage$pandac$Position* $tmp1887 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1888 = *$tmp1887;
org$pandalanguage$pandac$FixedArray** $tmp1889 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp1890 = *$tmp1889;
*(&local110) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1890));
org$pandalanguage$pandac$FixedArray* $tmp1891 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1891));
*(&local110) = $tmp1890;
// line 552
org$pandalanguage$pandac$FixedArray* $tmp1892 = *(&local110);
ITable* $tmp1893 = ((panda$collections$CollectionView*) $tmp1892)->$class->itable;
while ($tmp1893->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1893 = $tmp1893->next;
}
$fn1895 $tmp1894 = $tmp1893->methods[1];
panda$core$String* $tmp1896 = $tmp1894(((panda$collections$CollectionView*) $tmp1892));
panda$core$String* $tmp1897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1898, $tmp1896);
panda$core$String* $tmp1899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1897, &$s1900);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1899));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1899));
// unreffing REF($3458:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1897));
// unreffing REF($3457:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1896));
// unreffing REF($3456:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp1901 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1901));
// unreffing arguments
*(&local110) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1899;
block194:;
panda$core$Int64 $tmp1902 = (panda$core$Int64) {43};
panda$core$Bit $tmp1903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1902);
bool $tmp1904 = $tmp1903.value;
if ($tmp1904) goto block195; else goto block196;
block195:;
org$pandalanguage$pandac$Position* $tmp1905 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1906 = *$tmp1905;
org$pandalanguage$pandac$FixedArray** $tmp1907 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp1908 = *$tmp1907;
*(&local111) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1908));
org$pandalanguage$pandac$FixedArray* $tmp1909 = *(&local111);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1909));
*(&local111) = $tmp1908;
// line 555
org$pandalanguage$pandac$FixedArray* $tmp1910 = *(&local111);
ITable* $tmp1911 = ((panda$collections$CollectionView*) $tmp1910)->$class->itable;
while ($tmp1911->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1911 = $tmp1911->next;
}
$fn1913 $tmp1912 = $tmp1911->methods[1];
panda$core$String* $tmp1914 = $tmp1912(((panda$collections$CollectionView*) $tmp1910));
panda$core$String* $tmp1915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1916, $tmp1914);
panda$core$String* $tmp1917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1915, &$s1918);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1917));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1917));
// unreffing REF($3497:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1915));
// unreffing REF($3496:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1914));
// unreffing REF($3495:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp1919 = *(&local111);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1919));
// unreffing parameters
*(&local111) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1917;
block196:;
panda$core$Int64 $tmp1920 = (panda$core$Int64) {44};
panda$core$Bit $tmp1921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1920);
bool $tmp1922 = $tmp1921.value;
if ($tmp1922) goto block197; else goto block198;
block197:;
org$pandalanguage$pandac$Position* $tmp1923 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1924 = *$tmp1923;
panda$core$String** $tmp1925 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1926 = *$tmp1925;
*(&local112) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1926));
panda$core$String* $tmp1927 = *(&local112);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1927));
*(&local112) = $tmp1926;
// line 558
panda$core$String* $tmp1928 = *(&local112);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1928));
panda$core$String* $tmp1929 = *(&local112);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1929));
// unreffing name
*(&local112) = ((panda$core$String*) NULL);
return $tmp1928;
block198:;
panda$core$Int64 $tmp1930 = (panda$core$Int64) {46};
panda$core$Bit $tmp1931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1930);
bool $tmp1932 = $tmp1931.value;
if ($tmp1932) goto block199; else goto block200;
block199:;
org$pandalanguage$pandac$Position* $tmp1933 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1934 = *$tmp1933;
panda$core$String** $tmp1935 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1936 = *$tmp1935;
*(&local113) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1936));
panda$core$String* $tmp1937 = *(&local113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1937));
*(&local113) = $tmp1936;
org$pandalanguage$pandac$ASTNode** $tmp1938 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1939 = *$tmp1938;
*(&local114) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1939));
org$pandalanguage$pandac$ASTNode* $tmp1940 = *(&local114);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1940));
*(&local114) = $tmp1939;
// line 561
org$pandalanguage$pandac$ASTNode* $tmp1941 = *(&local114);
panda$core$Bit $tmp1942 = panda$core$Bit$init$builtin_bit($tmp1941 != NULL);
bool $tmp1943 = $tmp1942.value;
if ($tmp1943) goto block201; else goto block202;
block201:;
// line 562
panda$core$String* $tmp1944 = *(&local113);
panda$core$String* $tmp1945 = panda$core$String$convert$R$panda$core$String($tmp1944);
panda$core$String* $tmp1946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1945, &$s1947);
org$pandalanguage$pandac$ASTNode* $tmp1948 = *(&local114);
panda$core$String* $tmp1949 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1946, ((panda$core$Object*) $tmp1948));
panda$core$String* $tmp1950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1949, &$s1951);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1950));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1950));
// unreffing REF($3577:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1949));
// unreffing REF($3576:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1946));
// unreffing REF($3573:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1945));
// unreffing REF($3572:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1952 = *(&local114);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1952));
// unreffing type
*(&local114) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1953 = *(&local113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1953));
// unreffing name
*(&local113) = ((panda$core$String*) NULL);
return $tmp1950;
block202:;
// line 564
panda$core$String* $tmp1954 = *(&local113);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1954));
org$pandalanguage$pandac$ASTNode* $tmp1955 = *(&local114);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1955));
// unreffing type
*(&local114) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1956 = *(&local113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1956));
// unreffing name
*(&local113) = ((panda$core$String*) NULL);
return $tmp1954;
block200:;
panda$core$Int64 $tmp1957 = (panda$core$Int64) {45};
panda$core$Bit $tmp1958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1957);
bool $tmp1959 = $tmp1958.value;
if ($tmp1959) goto block203; else goto block204;
block203:;
org$pandalanguage$pandac$Position* $tmp1960 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1961 = *$tmp1960;
org$pandalanguage$pandac$FixedArray** $tmp1962 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp1963 = *$tmp1962;
*(&local115) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1963));
org$pandalanguage$pandac$FixedArray* $tmp1964 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1964));
*(&local115) = $tmp1963;
org$pandalanguage$pandac$ASTNode** $tmp1965 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1966 = *$tmp1965;
*(&local116) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1966));
org$pandalanguage$pandac$ASTNode* $tmp1967 = *(&local116);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1967));
*(&local116) = $tmp1966;
// line 567
org$pandalanguage$pandac$FixedArray* $tmp1968 = *(&local115);
ITable* $tmp1969 = ((panda$collections$CollectionView*) $tmp1968)->$class->itable;
while ($tmp1969->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1969 = $tmp1969->next;
}
$fn1971 $tmp1970 = $tmp1969->methods[1];
panda$core$String* $tmp1972 = $tmp1970(((panda$collections$CollectionView*) $tmp1968));
panda$core$String* $tmp1973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1974, $tmp1972);
panda$core$String* $tmp1975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1973, &$s1976);
org$pandalanguage$pandac$ASTNode* $tmp1977 = *(&local116);
panda$core$String* $tmp1978 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1975, ((panda$core$Object*) $tmp1977));
panda$core$String* $tmp1979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1978, &$s1980);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1979));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1979));
// unreffing REF($3652:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1978));
// unreffing REF($3651:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1975));
// unreffing REF($3648:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1973));
// unreffing REF($3647:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1972));
// unreffing REF($3646:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1981 = *(&local116);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1981));
// unreffing body
*(&local116) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1982 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1982));
// unreffing parameters
*(&local115) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1979;
block204:;
panda$core$Int64 $tmp1983 = (panda$core$Int64) {47};
panda$core$Bit $tmp1984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp1983);
bool $tmp1985 = $tmp1984.value;
if ($tmp1985) goto block205; else goto block206;
block205:;
org$pandalanguage$pandac$Position* $tmp1986 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1987 = *$tmp1986;
org$pandalanguage$pandac$FixedArray** $tmp1988 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp1989 = *$tmp1988;
*(&local117) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1989));
org$pandalanguage$pandac$FixedArray* $tmp1990 = *(&local117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1990));
*(&local117) = $tmp1989;
org$pandalanguage$pandac$ASTNode** $tmp1991 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1992 = *$tmp1991;
*(&local118) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1992));
org$pandalanguage$pandac$ASTNode* $tmp1993 = *(&local118);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1993));
*(&local118) = $tmp1992;
// line 570
org$pandalanguage$pandac$FixedArray* $tmp1994 = *(&local117);
ITable* $tmp1995 = ((panda$collections$CollectionView*) $tmp1994)->$class->itable;
while ($tmp1995->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1995 = $tmp1995->next;
}
$fn1997 $tmp1996 = $tmp1995->methods[1];
panda$core$String* $tmp1998 = $tmp1996(((panda$collections$CollectionView*) $tmp1994));
panda$core$String* $tmp1999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2000, $tmp1998);
panda$core$String* $tmp2001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1999, &$s2002);
org$pandalanguage$pandac$ASTNode* $tmp2003 = *(&local118);
panda$core$String* $tmp2004 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2001, ((panda$core$Object*) $tmp2003));
panda$core$String* $tmp2005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2004, &$s2006);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2005));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2005));
// unreffing REF($3715:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2004));
// unreffing REF($3714:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2001));
// unreffing REF($3711:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1999));
// unreffing REF($3710:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1998));
// unreffing REF($3709:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp2007 = *(&local118);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2007));
// unreffing body
*(&local118) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2008 = *(&local117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2008));
// unreffing parameters
*(&local117) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp2005;
block206:;
panda$core$Int64 $tmp2009 = (panda$core$Int64) {48};
panda$core$Bit $tmp2010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp2009);
bool $tmp2011 = $tmp2010.value;
if ($tmp2011) goto block207; else goto block208;
block207:;
org$pandalanguage$pandac$Position* $tmp2012 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2013 = *$tmp2012;
panda$core$String** $tmp2014 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2015 = *$tmp2014;
*(&local119) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2015));
panda$core$String* $tmp2016 = *(&local119);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2016));
*(&local119) = $tmp2015;
// line 573
panda$core$String* $tmp2017 = *(&local119);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2017));
panda$core$String* $tmp2018 = *(&local119);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2018));
// unreffing name
*(&local119) = ((panda$core$String*) NULL);
return $tmp2017;
block208:;
panda$core$Int64 $tmp2019 = (panda$core$Int64) {49};
panda$core$Bit $tmp2020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp2019);
bool $tmp2021 = $tmp2020.value;
if ($tmp2021) goto block209; else goto block210;
block209:;
org$pandalanguage$pandac$Position* $tmp2022 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2023 = *$tmp2022;
org$pandalanguage$pandac$Variable$Kind* $tmp2024 = (org$pandalanguage$pandac$Variable$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp2025 = *$tmp2024;
*(&local120) = $tmp2025;
org$pandalanguage$pandac$FixedArray** $tmp2026 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2027 = *$tmp2026;
*(&local121) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2027));
org$pandalanguage$pandac$FixedArray* $tmp2028 = *(&local121);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2028));
*(&local121) = $tmp2027;
// line 576
panda$core$MutableString* $tmp2029 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2029);
*(&local122) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2029));
panda$core$MutableString* $tmp2030 = *(&local122);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2030));
*(&local122) = $tmp2029;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2029));
// unreffing REF($3788:panda.core.MutableString)
// line 577
org$pandalanguage$pandac$Variable$Kind $tmp2031 = *(&local120);
panda$core$Int64 $tmp2032 = $tmp2031.$rawValue;
panda$core$Int64 $tmp2033 = (panda$core$Int64) {0};
panda$core$Bit $tmp2034 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2032, $tmp2033);
bool $tmp2035 = $tmp2034.value;
if ($tmp2035) goto block212; else goto block213;
block212:;
// line 578
panda$core$MutableString* $tmp2036 = *(&local122);
panda$core$MutableString$append$panda$core$String($tmp2036, &$s2037);
goto block211;
block213:;
panda$core$Int64 $tmp2038 = (panda$core$Int64) {1};
panda$core$Bit $tmp2039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2032, $tmp2038);
bool $tmp2040 = $tmp2039.value;
if ($tmp2040) goto block214; else goto block215;
block214:;
// line 579
panda$core$MutableString* $tmp2041 = *(&local122);
panda$core$MutableString$append$panda$core$String($tmp2041, &$s2042);
goto block211;
block215:;
panda$core$Int64 $tmp2043 = (panda$core$Int64) {2};
panda$core$Bit $tmp2044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2032, $tmp2043);
bool $tmp2045 = $tmp2044.value;
if ($tmp2045) goto block216; else goto block217;
block216:;
// line 580
panda$core$MutableString* $tmp2046 = *(&local122);
panda$core$MutableString$append$panda$core$String($tmp2046, &$s2047);
goto block211;
block217:;
panda$core$Int64 $tmp2048 = (panda$core$Int64) {3};
panda$core$Bit $tmp2049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2032, $tmp2048);
bool $tmp2050 = $tmp2049.value;
if ($tmp2050) goto block218; else goto block211;
block218:;
// line 581
panda$core$MutableString* $tmp2051 = *(&local122);
panda$core$MutableString$append$panda$core$String($tmp2051, &$s2052);
goto block211;
block211:;
// line 583
panda$core$MutableString* $tmp2053 = *(&local122);
org$pandalanguage$pandac$FixedArray* $tmp2054 = *(&local121);
ITable* $tmp2055 = ((panda$collections$CollectionView*) $tmp2054)->$class->itable;
while ($tmp2055->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2055 = $tmp2055->next;
}
$fn2057 $tmp2056 = $tmp2055->methods[1];
panda$core$String* $tmp2058 = $tmp2056(((panda$collections$CollectionView*) $tmp2054));
panda$core$MutableString$append$panda$core$String($tmp2053, $tmp2058);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2058));
// unreffing REF($3840:panda.core.String)
// line 584
panda$core$MutableString* $tmp2059 = *(&local122);
panda$core$String* $tmp2060 = panda$core$MutableString$finish$R$panda$core$String($tmp2059);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2060));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2060));
// unreffing REF($3847:panda.core.String)
panda$core$MutableString* $tmp2061 = *(&local122);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2061));
// unreffing result
*(&local122) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2062 = *(&local121);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2062));
// unreffing decls
*(&local121) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp2060;
block210:;
panda$core$Int64 $tmp2063 = (panda$core$Int64) {50};
panda$core$Bit $tmp2064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp2063);
bool $tmp2065 = $tmp2064.value;
if ($tmp2065) goto block219; else goto block220;
block219:;
org$pandalanguage$pandac$Position* $tmp2066 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2067 = *$tmp2066;
org$pandalanguage$pandac$FixedArray** $tmp2068 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2069 = *$tmp2068;
*(&local123) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2069));
org$pandalanguage$pandac$FixedArray* $tmp2070 = *(&local123);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2070));
*(&local123) = $tmp2069;
org$pandalanguage$pandac$FixedArray** $tmp2071 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2072 = *$tmp2071;
*(&local124) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2072));
org$pandalanguage$pandac$FixedArray* $tmp2073 = *(&local124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2073));
*(&local124) = $tmp2072;
// line 587
panda$core$MutableString* $tmp2074 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp2074, &$s2075);
*(&local125) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2074));
panda$core$MutableString* $tmp2076 = *(&local125);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2076));
*(&local125) = $tmp2074;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2074));
// unreffing REF($3889:panda.core.MutableString)
// line 588
*(&local126) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2077));
panda$core$String* $tmp2078 = *(&local126);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2078));
*(&local126) = &$s2079;
// line 589
org$pandalanguage$pandac$FixedArray* $tmp2080 = *(&local123);
ITable* $tmp2081 = ((panda$collections$Iterable*) $tmp2080)->$class->itable;
while ($tmp2081->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2081 = $tmp2081->next;
}
$fn2083 $tmp2082 = $tmp2081->methods[0];
panda$collections$Iterator* $tmp2084 = $tmp2082(((panda$collections$Iterable*) $tmp2080));
goto block221;
block221:;
ITable* $tmp2085 = $tmp2084->$class->itable;
while ($tmp2085->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2085 = $tmp2085->next;
}
$fn2087 $tmp2086 = $tmp2085->methods[0];
panda$core$Bit $tmp2088 = $tmp2086($tmp2084);
bool $tmp2089 = $tmp2088.value;
if ($tmp2089) goto block223; else goto block222;
block222:;
*(&local127) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2090 = $tmp2084->$class->itable;
while ($tmp2090->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2090 = $tmp2090->next;
}
$fn2092 $tmp2091 = $tmp2090->methods[1];
panda$core$Object* $tmp2093 = $tmp2091($tmp2084);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2093)));
org$pandalanguage$pandac$ASTNode* $tmp2094 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2094));
*(&local127) = ((org$pandalanguage$pandac$ASTNode*) $tmp2093);
// line 590
panda$core$MutableString* $tmp2095 = *(&local125);
panda$core$String* $tmp2096 = *(&local126);
panda$core$String* $tmp2097 = panda$core$String$convert$R$panda$core$String($tmp2096);
panda$core$String* $tmp2098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2097, &$s2099);
org$pandalanguage$pandac$ASTNode* $tmp2100 = *(&local127);
panda$core$String* $tmp2101 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2098, ((panda$core$Object*) $tmp2100));
panda$core$String* $tmp2102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2101, &$s2103);
panda$core$MutableString$append$panda$core$String($tmp2095, $tmp2102);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2102));
// unreffing REF($3941:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2101));
// unreffing REF($3940:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2098));
// unreffing REF($3937:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2097));
// unreffing REF($3936:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2093);
// unreffing REF($3925:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2104 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2104));
// unreffing t
*(&local127) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block221;
block223:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2084));
// unreffing REF($3914:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 592
panda$core$MutableString* $tmp2105 = *(&local125);
panda$core$MutableString$append$panda$core$String($tmp2105, &$s2106);
// line 593
org$pandalanguage$pandac$FixedArray* $tmp2107 = *(&local124);
ITable* $tmp2108 = ((panda$collections$Iterable*) $tmp2107)->$class->itable;
while ($tmp2108->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2108 = $tmp2108->next;
}
$fn2110 $tmp2109 = $tmp2108->methods[0];
panda$collections$Iterator* $tmp2111 = $tmp2109(((panda$collections$Iterable*) $tmp2107));
goto block224;
block224:;
ITable* $tmp2112 = $tmp2111->$class->itable;
while ($tmp2112->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2112 = $tmp2112->next;
}
$fn2114 $tmp2113 = $tmp2112->methods[0];
panda$core$Bit $tmp2115 = $tmp2113($tmp2111);
bool $tmp2116 = $tmp2115.value;
if ($tmp2116) goto block226; else goto block225;
block225:;
*(&local128) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2117 = $tmp2111->$class->itable;
while ($tmp2117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2117 = $tmp2117->next;
}
$fn2119 $tmp2118 = $tmp2117->methods[1];
panda$core$Object* $tmp2120 = $tmp2118($tmp2111);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2120)));
org$pandalanguage$pandac$ASTNode* $tmp2121 = *(&local128);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2121));
*(&local128) = ((org$pandalanguage$pandac$ASTNode*) $tmp2120);
// line 594
panda$core$MutableString* $tmp2122 = *(&local125);
org$pandalanguage$pandac$ASTNode* $tmp2123 = *(&local128);
panda$core$String* $tmp2124 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2125, ((panda$core$Object*) $tmp2123));
panda$core$MutableString$append$panda$core$String($tmp2122, $tmp2124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2124));
// unreffing REF($3998:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2120);
// unreffing REF($3986:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2126 = *(&local128);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2126));
// unreffing s
*(&local128) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block224;
block226:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2111));
// unreffing REF($3975:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 596
panda$core$MutableString* $tmp2127 = *(&local125);
panda$core$String* $tmp2128 = panda$core$MutableString$finish$R$panda$core$String($tmp2127);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2128));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2128));
// unreffing REF($4017:panda.core.String)
panda$core$String* $tmp2129 = *(&local126);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2129));
// unreffing separator
*(&local126) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2130 = *(&local125);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2130));
// unreffing result
*(&local125) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2131 = *(&local124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2131));
// unreffing statements
*(&local124) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2132 = *(&local123);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2132));
// unreffing tests
*(&local123) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp2128;
block220:;
panda$core$Int64 $tmp2133 = (panda$core$Int64) {51};
panda$core$Bit $tmp2134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp528, $tmp2133);
bool $tmp2135 = $tmp2134.value;
if ($tmp2135) goto block227; else goto block228;
block227:;
org$pandalanguage$pandac$Position* $tmp2136 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2137 = *$tmp2136;
panda$core$String** $tmp2138 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2139 = *$tmp2138;
*(&local129) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2139));
panda$core$String* $tmp2140 = *(&local129);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2140));
*(&local129) = $tmp2139;
org$pandalanguage$pandac$ASTNode** $tmp2141 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2142 = *$tmp2141;
*(&local130) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2142));
org$pandalanguage$pandac$ASTNode* $tmp2143 = *(&local130);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2143));
*(&local130) = $tmp2142;
org$pandalanguage$pandac$FixedArray** $tmp2144 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp2145 = *$tmp2144;
*(&local131) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2145));
org$pandalanguage$pandac$FixedArray* $tmp2146 = *(&local131);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2146));
*(&local131) = $tmp2145;
// line 599
panda$core$MutableString* $tmp2147 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2147);
*(&local132) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2147));
panda$core$MutableString* $tmp2148 = *(&local132);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2148));
*(&local132) = $tmp2147;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2147));
// unreffing REF($4078:panda.core.MutableString)
// line 600
panda$core$String* $tmp2149 = *(&local129);
panda$core$Bit $tmp2150 = panda$core$Bit$init$builtin_bit($tmp2149 != NULL);
bool $tmp2151 = $tmp2150.value;
if ($tmp2151) goto block229; else goto block230;
block229:;
// line 601
panda$core$MutableString* $tmp2152 = *(&local132);
panda$core$String* $tmp2153 = *(&local129);
panda$core$String* $tmp2154 = panda$core$String$convert$R$panda$core$String($tmp2153);
panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2154, &$s2156);
panda$core$MutableString$append$panda$core$String($tmp2152, $tmp2155);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2155));
// unreffing REF($4101:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2154));
// unreffing REF($4100:panda.core.String)
goto block230;
block230:;
// line 603
panda$core$MutableString* $tmp2157 = *(&local132);
org$pandalanguage$pandac$ASTNode* $tmp2158 = *(&local130);
panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2160, ((panda$core$Object*) $tmp2158));
panda$core$String* $tmp2161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2159, &$s2162);
panda$core$MutableString$append$panda$core$String($tmp2157, $tmp2161);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2161));
// unreffing REF($4115:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2159));
// unreffing REF($4114:panda.core.String)
// line 604
org$pandalanguage$pandac$FixedArray* $tmp2163 = *(&local131);
ITable* $tmp2164 = ((panda$collections$Iterable*) $tmp2163)->$class->itable;
while ($tmp2164->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2164 = $tmp2164->next;
}
$fn2166 $tmp2165 = $tmp2164->methods[0];
panda$collections$Iterator* $tmp2167 = $tmp2165(((panda$collections$Iterable*) $tmp2163));
goto block231;
block231:;
ITable* $tmp2168 = $tmp2167->$class->itable;
while ($tmp2168->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2168 = $tmp2168->next;
}
$fn2170 $tmp2169 = $tmp2168->methods[0];
panda$core$Bit $tmp2171 = $tmp2169($tmp2167);
bool $tmp2172 = $tmp2171.value;
if ($tmp2172) goto block233; else goto block232;
block232:;
*(&local133) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2173 = $tmp2167->$class->itable;
while ($tmp2173->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2173 = $tmp2173->next;
}
$fn2175 $tmp2174 = $tmp2173->methods[1];
panda$core$Object* $tmp2176 = $tmp2174($tmp2167);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2176)));
org$pandalanguage$pandac$ASTNode* $tmp2177 = *(&local133);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2177));
*(&local133) = ((org$pandalanguage$pandac$ASTNode*) $tmp2176);
// line 605
panda$core$MutableString* $tmp2178 = *(&local132);
org$pandalanguage$pandac$ASTNode* $tmp2179 = *(&local133);
panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp2179), &$s2181);
panda$core$MutableString$append$panda$core$String($tmp2178, $tmp2180);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2180));
// unreffing REF($4151:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2176);
// unreffing REF($4139:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2182 = *(&local133);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2182));
// unreffing s
*(&local133) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block231;
block233:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2167));
// unreffing REF($4128:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 607
panda$core$MutableString* $tmp2183 = *(&local132);
panda$core$MutableString$append$panda$core$String($tmp2183, &$s2184);
// line 608
panda$core$MutableString* $tmp2185 = *(&local132);
panda$core$String* $tmp2186 = panda$core$MutableString$finish$R$panda$core$String($tmp2185);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2186));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2186));
// unreffing REF($4173:panda.core.String)
panda$core$MutableString* $tmp2187 = *(&local132);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2187));
// unreffing result
*(&local132) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2188 = *(&local131);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2188));
// unreffing statements
*(&local131) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2189 = *(&local130);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2189));
// unreffing test
*(&local130) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2190 = *(&local129);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2190));
// unreffing label
*(&local129) = ((panda$core$String*) NULL);
return $tmp2186;
block228:;
// line 611
panda$core$Bit $tmp2191 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2192 = $tmp2191.value;
if ($tmp2192) goto block234; else goto block235;
block235:;
panda$core$Int64 $tmp2193 = (panda$core$Int64) {611};
panda$core$Int64* $tmp2194 = &param0->$rawValue;
panda$core$Int64 $tmp2195 = *$tmp2194;
panda$core$Int64$wrapper* $tmp2196;
$tmp2196 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2196->value = $tmp2195;
panda$core$String* $tmp2197 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2198, ((panda$core$Object*) $tmp2196));
panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2197, &$s2200);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2201, $tmp2193, $tmp2199);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2199));
// unreffing REF($4209:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2197));
// unreffing REF($4208:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2196));
// unreffing REF($4207:panda.core.Object)
abort(); // unreachable
block234:;
goto block1;
block1:;
panda$core$Bit $tmp2202 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2203 = $tmp2202.value;
if ($tmp2203) goto block236; else goto block237;
block237:;
panda$core$Int64 $tmp2204 = (panda$core$Int64) {253};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2205, $tmp2204, &$s2206);
abort(); // unreachable
block236:;
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
org$pandalanguage$pandac$ASTNode* local73 = NULL;
org$pandalanguage$pandac$FixedArray* local74 = NULL;
org$pandalanguage$pandac$ASTNode* local75 = NULL;
org$pandalanguage$pandac$Position local76;
panda$core$UInt64 local77;
org$pandalanguage$pandac$Position local78;
org$pandalanguage$pandac$IR$Value* local79 = NULL;
org$pandalanguage$pandac$Position local80;
panda$core$String* local81 = NULL;
org$pandalanguage$pandac$FixedArray* local82 = NULL;
org$pandalanguage$pandac$Position local83;
org$pandalanguage$pandac$ASTNode* local84 = NULL;
org$pandalanguage$pandac$FixedArray* local85 = NULL;
org$pandalanguage$pandac$FixedArray* local86 = NULL;
org$pandalanguage$pandac$Position local87;
org$pandalanguage$pandac$ASTNode* local88 = NULL;
org$pandalanguage$pandac$FixedArray* local89 = NULL;
org$pandalanguage$pandac$MethodDecl$Kind local90;
panda$core$String* local91 = NULL;
org$pandalanguage$pandac$FixedArray* local92 = NULL;
org$pandalanguage$pandac$FixedArray* local93 = NULL;
org$pandalanguage$pandac$ASTNode* local94 = NULL;
org$pandalanguage$pandac$FixedArray* local95 = NULL;
org$pandalanguage$pandac$Position local96;
org$pandalanguage$pandac$parser$Token$Kind local97;
org$pandalanguage$pandac$FixedArray* local98 = NULL;
org$pandalanguage$pandac$ASTNode* local99 = NULL;
org$pandalanguage$pandac$Position local100;
org$pandalanguage$pandac$Position local101;
org$pandalanguage$pandac$ASTNode* local102 = NULL;
org$pandalanguage$pandac$Position local103;
panda$core$String* local104 = NULL;
org$pandalanguage$pandac$Position local105;
panda$core$String* local106 = NULL;
org$pandalanguage$pandac$ASTNode* local107 = NULL;
org$pandalanguage$pandac$Position local108;
org$pandalanguage$pandac$parser$Token$Kind local109;
org$pandalanguage$pandac$ASTNode* local110 = NULL;
org$pandalanguage$pandac$Position local111;
org$pandalanguage$pandac$ASTNode* local112 = NULL;
panda$core$Bit local113;
org$pandalanguage$pandac$ASTNode* local114 = NULL;
org$pandalanguage$pandac$ASTNode* local115 = NULL;
org$pandalanguage$pandac$Position local116;
panda$core$Real64 local117;
org$pandalanguage$pandac$Position local118;
panda$core$String* local119 = NULL;
org$pandalanguage$pandac$Position local120;
org$pandalanguage$pandac$ASTNode* local121 = NULL;
org$pandalanguage$pandac$Position local122;
org$pandalanguage$pandac$Position local123;
panda$core$String* local124 = NULL;
org$pandalanguage$pandac$Position local125;
org$pandalanguage$pandac$Position local126;
org$pandalanguage$pandac$FixedArray* local127 = NULL;
org$pandalanguage$pandac$Position local128;
org$pandalanguage$pandac$FixedArray* local129 = NULL;
org$pandalanguage$pandac$Position local130;
panda$core$String* local131 = NULL;
org$pandalanguage$pandac$Position local132;
org$pandalanguage$pandac$FixedArray* local133 = NULL;
org$pandalanguage$pandac$ASTNode* local134 = NULL;
org$pandalanguage$pandac$Position local135;
panda$core$String* local136 = NULL;
org$pandalanguage$pandac$ASTNode* local137 = NULL;
org$pandalanguage$pandac$Position local138;
org$pandalanguage$pandac$FixedArray* local139 = NULL;
org$pandalanguage$pandac$ASTNode* local140 = NULL;
org$pandalanguage$pandac$Position local141;
panda$core$String* local142 = NULL;
org$pandalanguage$pandac$Position local143;
org$pandalanguage$pandac$Variable$Kind local144;
org$pandalanguage$pandac$FixedArray* local145 = NULL;
org$pandalanguage$pandac$Position local146;
org$pandalanguage$pandac$FixedArray* local147 = NULL;
org$pandalanguage$pandac$FixedArray* local148 = NULL;
org$pandalanguage$pandac$Position local149;
panda$core$String* local150 = NULL;
org$pandalanguage$pandac$ASTNode* local151 = NULL;
org$pandalanguage$pandac$FixedArray* local152 = NULL;
// line 6
panda$core$Int64* $tmp2207 = &param0->$rawValue;
panda$core$Int64 $tmp2208 = *$tmp2207;
panda$core$Int64 $tmp2209 = (panda$core$Int64) {0};
panda$core$Bit $tmp2210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2209);
bool $tmp2211 = $tmp2210.value;
if ($tmp2211) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp2212 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2213 = *$tmp2212;
*(&local0) = $tmp2213;
panda$core$String** $tmp2214 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2215 = *$tmp2214;
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2215));
panda$core$String* $tmp2216 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2216));
*(&local1) = $tmp2215;
panda$core$String** $tmp2217 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp2218 = *$tmp2217;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2218));
panda$core$String* $tmp2219 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2219));
*(&local2) = $tmp2218;
org$pandalanguage$pandac$ASTNode** $tmp2220 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2221 = *$tmp2220;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2221));
org$pandalanguage$pandac$ASTNode* $tmp2222 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2222));
*(&local3) = $tmp2221;
// line 1
panda$core$String* $tmp2223 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2223));
// line 1
panda$core$String* $tmp2224 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2224));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2225 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2225));
org$pandalanguage$pandac$ASTNode* $tmp2226 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2226));
// unreffing _f3
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2227 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2227));
// unreffing _f2
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2228 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2228));
// unreffing _f1
*(&local1) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp2229 = (panda$core$Int64) {1};
panda$core$Bit $tmp2230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2229);
bool $tmp2231 = $tmp2230.value;
if ($tmp2231) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp2232 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2233 = *$tmp2232;
*(&local4) = $tmp2233;
org$pandalanguage$pandac$FixedArray** $tmp2234 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2235 = *$tmp2234;
*(&local5) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2235));
org$pandalanguage$pandac$FixedArray* $tmp2236 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2236));
*(&local5) = $tmp2235;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2237 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2237));
org$pandalanguage$pandac$FixedArray* $tmp2238 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2238));
// unreffing _f1
*(&local5) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block5:;
panda$core$Int64 $tmp2239 = (panda$core$Int64) {2};
panda$core$Bit $tmp2240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2239);
bool $tmp2241 = $tmp2240.value;
if ($tmp2241) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp2242 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2243 = *$tmp2242;
*(&local6) = $tmp2243;
org$pandalanguage$pandac$ASTNode** $tmp2244 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2245 = *$tmp2244;
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2245));
org$pandalanguage$pandac$ASTNode* $tmp2246 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2246));
*(&local7) = $tmp2245;
org$pandalanguage$pandac$ASTNode** $tmp2247 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2248 = *$tmp2247;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2248));
org$pandalanguage$pandac$ASTNode* $tmp2249 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2249));
*(&local8) = $tmp2248;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2250 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2250));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2251 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2251));
org$pandalanguage$pandac$ASTNode* $tmp2252 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2252));
// unreffing _f2
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2253 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2253));
// unreffing _f1
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block7:;
panda$core$Int64 $tmp2254 = (panda$core$Int64) {3};
panda$core$Bit $tmp2255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2254);
bool $tmp2256 = $tmp2255.value;
if ($tmp2256) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp2257 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2258 = *$tmp2257;
*(&local9) = $tmp2258;
org$pandalanguage$pandac$ASTNode** $tmp2259 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2260 = *$tmp2259;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2260));
org$pandalanguage$pandac$ASTNode* $tmp2261 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2261));
*(&local10) = $tmp2260;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2262 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2262));
org$pandalanguage$pandac$ASTNode* $tmp2263 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2263));
// unreffing _f1
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block9:;
panda$core$Int64 $tmp2264 = (panda$core$Int64) {4};
panda$core$Bit $tmp2265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2264);
bool $tmp2266 = $tmp2265.value;
if ($tmp2266) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp2267 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2268 = *$tmp2267;
*(&local11) = $tmp2268;
goto block1;
block11:;
panda$core$Int64 $tmp2269 = (panda$core$Int64) {5};
panda$core$Bit $tmp2270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2269);
bool $tmp2271 = $tmp2270.value;
if ($tmp2271) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp2272 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2273 = *$tmp2272;
*(&local12) = $tmp2273;
org$pandalanguage$pandac$ASTNode** $tmp2274 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2275 = *$tmp2274;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2275));
org$pandalanguage$pandac$ASTNode* $tmp2276 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2276));
*(&local13) = $tmp2275;
org$pandalanguage$pandac$parser$Token$Kind* $tmp2277 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp2278 = *$tmp2277;
*(&local14) = $tmp2278;
org$pandalanguage$pandac$ASTNode** $tmp2279 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2280 = *$tmp2279;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2280));
org$pandalanguage$pandac$ASTNode* $tmp2281 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2281));
*(&local15) = $tmp2280;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2282 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2282));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2283 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2283));
org$pandalanguage$pandac$ASTNode* $tmp2284 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2284));
// unreffing _f3
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2285 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2285));
// unreffing _f1
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block13:;
panda$core$Int64 $tmp2286 = (panda$core$Int64) {6};
panda$core$Bit $tmp2287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2286);
bool $tmp2288 = $tmp2287.value;
if ($tmp2288) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp2289 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2290 = *$tmp2289;
*(&local16) = $tmp2290;
panda$core$Bit* $tmp2291 = (panda$core$Bit*) (param0->$data + 16);
panda$core$Bit $tmp2292 = *$tmp2291;
*(&local17) = $tmp2292;
goto block1;
block15:;
panda$core$Int64 $tmp2293 = (panda$core$Int64) {7};
panda$core$Bit $tmp2294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2293);
bool $tmp2295 = $tmp2294.value;
if ($tmp2295) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp2296 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2297 = *$tmp2296;
*(&local18) = $tmp2297;
org$pandalanguage$pandac$FixedArray** $tmp2298 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2299 = *$tmp2298;
*(&local19) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2299));
org$pandalanguage$pandac$FixedArray* $tmp2300 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2300));
*(&local19) = $tmp2299;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2301 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2301));
org$pandalanguage$pandac$FixedArray* $tmp2302 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2302));
// unreffing _f1
*(&local19) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block17:;
panda$core$Int64 $tmp2303 = (panda$core$Int64) {8};
panda$core$Bit $tmp2304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2303);
bool $tmp2305 = $tmp2304.value;
if ($tmp2305) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp2306 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2307 = *$tmp2306;
*(&local20) = $tmp2307;
panda$core$String** $tmp2308 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2309 = *$tmp2308;
*(&local21) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2309));
panda$core$String* $tmp2310 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2310));
*(&local21) = $tmp2309;
// line 1
panda$core$String* $tmp2311 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2311));
panda$core$String* $tmp2312 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2312));
// unreffing _f1
*(&local21) = ((panda$core$String*) NULL);
goto block1;
block19:;
panda$core$Int64 $tmp2313 = (panda$core$Int64) {9};
panda$core$Bit $tmp2314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2313);
bool $tmp2315 = $tmp2314.value;
if ($tmp2315) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp2316 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2317 = *$tmp2316;
*(&local22) = $tmp2317;
org$pandalanguage$pandac$ASTNode** $tmp2318 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2319 = *$tmp2318;
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2319));
org$pandalanguage$pandac$ASTNode* $tmp2320 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2320));
*(&local23) = $tmp2319;
org$pandalanguage$pandac$FixedArray** $tmp2321 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2322 = *$tmp2321;
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2322));
org$pandalanguage$pandac$FixedArray* $tmp2323 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2323));
*(&local24) = $tmp2322;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2324 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2324));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2325 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2325));
org$pandalanguage$pandac$FixedArray* $tmp2326 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2326));
// unreffing _f2
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2327 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2327));
// unreffing _f1
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block21:;
panda$core$Int64 $tmp2328 = (panda$core$Int64) {10};
panda$core$Bit $tmp2329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2328);
bool $tmp2330 = $tmp2329.value;
if ($tmp2330) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Position* $tmp2331 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2332 = *$tmp2331;
*(&local25) = $tmp2332;
org$pandalanguage$pandac$ASTNode** $tmp2333 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2334 = *$tmp2333;
*(&local26) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2334));
org$pandalanguage$pandac$ASTNode* $tmp2335 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2335));
*(&local26) = $tmp2334;
panda$core$String** $tmp2336 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp2337 = *$tmp2336;
*(&local27) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2337));
panda$core$String* $tmp2338 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2338));
*(&local27) = $tmp2337;
org$pandalanguage$pandac$FixedArray** $tmp2339 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp2340 = *$tmp2339;
*(&local28) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2340));
org$pandalanguage$pandac$FixedArray* $tmp2341 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2341));
*(&local28) = $tmp2340;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2342 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2342));
// line 1
panda$core$String* $tmp2343 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2343));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2344 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2344));
org$pandalanguage$pandac$FixedArray* $tmp2345 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2345));
// unreffing _f3
*(&local28) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2346 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2346));
// unreffing _f2
*(&local27) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2347 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2347));
// unreffing _f1
*(&local26) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block23:;
panda$core$Int64 $tmp2348 = (panda$core$Int64) {11};
panda$core$Bit $tmp2349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2348);
bool $tmp2350 = $tmp2349.value;
if ($tmp2350) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp2351 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2352 = *$tmp2351;
*(&local29) = $tmp2352;
org$pandalanguage$pandac$ASTNode** $tmp2353 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2354 = *$tmp2353;
*(&local30) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2354));
org$pandalanguage$pandac$ASTNode* $tmp2355 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2355));
*(&local30) = $tmp2354;
org$pandalanguage$pandac$ChoiceCase** $tmp2356 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp2357 = *$tmp2356;
*(&local31) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2357));
org$pandalanguage$pandac$ChoiceCase* $tmp2358 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2358));
*(&local31) = $tmp2357;
panda$core$Int64* $tmp2359 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp2360 = *$tmp2359;
*(&local32) = $tmp2360;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2361 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2361));
// line 1
org$pandalanguage$pandac$ChoiceCase* $tmp2362 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2362));
org$pandalanguage$pandac$ChoiceCase* $tmp2363 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2363));
// unreffing _f2
*(&local31) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2364 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2364));
// unreffing _f1
*(&local30) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block25:;
panda$core$Int64 $tmp2365 = (panda$core$Int64) {12};
panda$core$Bit $tmp2366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2365);
bool $tmp2367 = $tmp2366.value;
if ($tmp2367) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp2368 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2369 = *$tmp2368;
*(&local33) = $tmp2369;
org$pandalanguage$pandac$ASTNode** $tmp2370 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2371 = *$tmp2370;
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2371));
org$pandalanguage$pandac$ASTNode* $tmp2372 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2372));
*(&local34) = $tmp2371;
org$pandalanguage$pandac$FixedArray** $tmp2373 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2374 = *$tmp2373;
*(&local35) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2374));
org$pandalanguage$pandac$FixedArray* $tmp2375 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2375));
*(&local35) = $tmp2374;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp2376 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp2377 = *$tmp2376;
*(&local36) = $tmp2377;
panda$core$String** $tmp2378 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp2379 = *$tmp2378;
*(&local37) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2379));
panda$core$String* $tmp2380 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2380));
*(&local37) = $tmp2379;
org$pandalanguage$pandac$FixedArray** $tmp2381 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp2382 = *$tmp2381;
*(&local38) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2382));
org$pandalanguage$pandac$FixedArray* $tmp2383 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2383));
*(&local38) = $tmp2382;
org$pandalanguage$pandac$FixedArray** $tmp2384 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp2385 = *$tmp2384;
*(&local39) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2385));
org$pandalanguage$pandac$FixedArray* $tmp2386 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2386));
*(&local39) = $tmp2385;
org$pandalanguage$pandac$FixedArray** $tmp2387 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 64);
org$pandalanguage$pandac$FixedArray* $tmp2388 = *$tmp2387;
*(&local40) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2388));
org$pandalanguage$pandac$FixedArray* $tmp2389 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2389));
*(&local40) = $tmp2388;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2390 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2390));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2391 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2391));
// line 1
panda$core$String* $tmp2392 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2392));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2393 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2393));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2394 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2394));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2395 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2395));
org$pandalanguage$pandac$FixedArray* $tmp2396 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2396));
// unreffing _f7
*(&local40) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2397 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2397));
// unreffing _f6
*(&local39) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2398 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2398));
// unreffing _f5
*(&local38) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2399 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2399));
// unreffing _f4
*(&local37) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2400 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2400));
// unreffing _f2
*(&local35) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2401 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2401));
// unreffing _f1
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block27:;
panda$core$Int64 $tmp2402 = (panda$core$Int64) {13};
panda$core$Bit $tmp2403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2402);
bool $tmp2404 = $tmp2403.value;
if ($tmp2404) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Position* $tmp2405 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2406 = *$tmp2405;
*(&local41) = $tmp2406;
panda$core$String** $tmp2407 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2408 = *$tmp2407;
*(&local42) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2408));
panda$core$String* $tmp2409 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2409));
*(&local42) = $tmp2408;
// line 1
panda$core$String* $tmp2410 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2410));
panda$core$String* $tmp2411 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2411));
// unreffing _f1
*(&local42) = ((panda$core$String*) NULL);
goto block1;
block29:;
panda$core$Int64 $tmp2412 = (panda$core$Int64) {14};
panda$core$Bit $tmp2413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2412);
bool $tmp2414 = $tmp2413.value;
if ($tmp2414) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp2415 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2416 = *$tmp2415;
*(&local43) = $tmp2416;
org$pandalanguage$pandac$ASTNode** $tmp2417 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2418 = *$tmp2417;
*(&local44) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2418));
org$pandalanguage$pandac$ASTNode* $tmp2419 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2419));
*(&local44) = $tmp2418;
org$pandalanguage$pandac$ASTNode** $tmp2420 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2421 = *$tmp2420;
*(&local45) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2421));
org$pandalanguage$pandac$ASTNode* $tmp2422 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2422));
*(&local45) = $tmp2421;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2423 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2423));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2424 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2424));
org$pandalanguage$pandac$ASTNode* $tmp2425 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2425));
// unreffing _f2
*(&local45) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2426 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2426));
// unreffing _f1
*(&local44) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block31:;
panda$core$Int64 $tmp2427 = (panda$core$Int64) {15};
panda$core$Bit $tmp2428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2427);
bool $tmp2429 = $tmp2428.value;
if ($tmp2429) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$Position* $tmp2430 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2431 = *$tmp2430;
*(&local46) = $tmp2431;
panda$core$String** $tmp2432 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2433 = *$tmp2432;
*(&local47) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2433));
panda$core$String* $tmp2434 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2434));
*(&local47) = $tmp2433;
org$pandalanguage$pandac$FixedArray** $tmp2435 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2436 = *$tmp2435;
*(&local48) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2436));
org$pandalanguage$pandac$FixedArray* $tmp2437 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2437));
*(&local48) = $tmp2436;
org$pandalanguage$pandac$ASTNode** $tmp2438 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2439 = *$tmp2438;
*(&local49) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2439));
org$pandalanguage$pandac$ASTNode* $tmp2440 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2440));
*(&local49) = $tmp2439;
// line 1
panda$core$String* $tmp2441 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2441));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2442 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2442));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2443 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2443));
org$pandalanguage$pandac$ASTNode* $tmp2444 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2444));
// unreffing _f3
*(&local49) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2445 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2445));
// unreffing _f2
*(&local48) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2446 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2446));
// unreffing _f1
*(&local47) = ((panda$core$String*) NULL);
goto block1;
block33:;
panda$core$Int64 $tmp2447 = (panda$core$Int64) {16};
panda$core$Bit $tmp2448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2447);
bool $tmp2449 = $tmp2448.value;
if ($tmp2449) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp2450 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2451 = *$tmp2450;
*(&local50) = $tmp2451;
org$pandalanguage$pandac$ASTNode** $tmp2452 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2453 = *$tmp2452;
*(&local51) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2453));
org$pandalanguage$pandac$ASTNode* $tmp2454 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2454));
*(&local51) = $tmp2453;
panda$core$String** $tmp2455 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp2456 = *$tmp2455;
*(&local52) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2456));
panda$core$String* $tmp2457 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2457));
*(&local52) = $tmp2456;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2458 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2458));
// line 1
panda$core$String* $tmp2459 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2459));
panda$core$String* $tmp2460 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2460));
// unreffing _f2
*(&local52) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2461 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2461));
// unreffing _f1
*(&local51) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block35:;
panda$core$Int64 $tmp2462 = (panda$core$Int64) {17};
panda$core$Bit $tmp2463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2462);
bool $tmp2464 = $tmp2463.value;
if ($tmp2464) goto block36; else goto block37;
block36:;
org$pandalanguage$pandac$Position* $tmp2465 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2466 = *$tmp2465;
*(&local53) = $tmp2466;
org$pandalanguage$pandac$ASTNode** $tmp2467 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2468 = *$tmp2467;
*(&local54) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2468));
org$pandalanguage$pandac$ASTNode* $tmp2469 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2469));
*(&local54) = $tmp2468;
panda$core$String** $tmp2470 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp2471 = *$tmp2470;
*(&local55) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2471));
panda$core$String* $tmp2472 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2472));
*(&local55) = $tmp2471;
org$pandalanguage$pandac$FixedArray** $tmp2473 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp2474 = *$tmp2473;
*(&local56) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2474));
org$pandalanguage$pandac$FixedArray* $tmp2475 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2475));
*(&local56) = $tmp2474;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2476 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2476));
// line 1
panda$core$String* $tmp2477 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2477));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2478 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2478));
org$pandalanguage$pandac$FixedArray* $tmp2479 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2479));
// unreffing _f3
*(&local56) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2480 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2480));
// unreffing _f2
*(&local55) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2481 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2481));
// unreffing _f1
*(&local54) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block37:;
panda$core$Int64 $tmp2482 = (panda$core$Int64) {18};
panda$core$Bit $tmp2483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2482);
bool $tmp2484 = $tmp2483.value;
if ($tmp2484) goto block38; else goto block39;
block38:;
org$pandalanguage$pandac$Position* $tmp2485 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2486 = *$tmp2485;
*(&local57) = $tmp2486;
org$pandalanguage$pandac$ASTNode** $tmp2487 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2488 = *$tmp2487;
*(&local58) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2488));
org$pandalanguage$pandac$ASTNode* $tmp2489 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2489));
*(&local58) = $tmp2488;
org$pandalanguage$pandac$FixedArray** $tmp2490 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2491 = *$tmp2490;
*(&local59) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2491));
org$pandalanguage$pandac$FixedArray* $tmp2492 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2492));
*(&local59) = $tmp2491;
org$pandalanguage$pandac$ASTNode** $tmp2493 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2494 = *$tmp2493;
*(&local60) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2494));
org$pandalanguage$pandac$ASTNode* $tmp2495 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2495));
*(&local60) = $tmp2494;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2496 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2496));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2497 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2497));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2498 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2498));
org$pandalanguage$pandac$ASTNode* $tmp2499 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2499));
// unreffing _f3
*(&local60) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2500 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2500));
// unreffing _f2
*(&local59) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2501 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2501));
// unreffing _f1
*(&local58) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block39:;
panda$core$Int64 $tmp2502 = (panda$core$Int64) {19};
panda$core$Bit $tmp2503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2502);
bool $tmp2504 = $tmp2503.value;
if ($tmp2504) goto block40; else goto block41;
block40:;
org$pandalanguage$pandac$FixedArray** $tmp2505 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 0);
org$pandalanguage$pandac$FixedArray* $tmp2506 = *$tmp2505;
*(&local61) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2506));
org$pandalanguage$pandac$FixedArray* $tmp2507 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2507));
*(&local61) = $tmp2506;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2508 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2508));
org$pandalanguage$pandac$FixedArray* $tmp2509 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2509));
// unreffing _f0
*(&local61) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block41:;
panda$core$Int64 $tmp2510 = (panda$core$Int64) {20};
panda$core$Bit $tmp2511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2510);
bool $tmp2512 = $tmp2511.value;
if ($tmp2512) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Position* $tmp2513 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2514 = *$tmp2513;
*(&local62) = $tmp2514;
panda$core$String** $tmp2515 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2516 = *$tmp2515;
*(&local63) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2516));
panda$core$String* $tmp2517 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2517));
*(&local63) = $tmp2516;
org$pandalanguage$pandac$ASTNode** $tmp2518 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2519 = *$tmp2518;
*(&local64) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2519));
org$pandalanguage$pandac$ASTNode* $tmp2520 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2520));
*(&local64) = $tmp2519;
org$pandalanguage$pandac$ASTNode** $tmp2521 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2522 = *$tmp2521;
*(&local65) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2522));
org$pandalanguage$pandac$ASTNode* $tmp2523 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2523));
*(&local65) = $tmp2522;
org$pandalanguage$pandac$FixedArray** $tmp2524 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 40);
org$pandalanguage$pandac$FixedArray* $tmp2525 = *$tmp2524;
*(&local66) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2525));
org$pandalanguage$pandac$FixedArray* $tmp2526 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2526));
*(&local66) = $tmp2525;
// line 1
panda$core$String* $tmp2527 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2527));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2528 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2528));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2529 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2529));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2530 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2530));
org$pandalanguage$pandac$FixedArray* $tmp2531 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2531));
// unreffing _f4
*(&local66) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2532 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2532));
// unreffing _f3
*(&local65) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2533 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2533));
// unreffing _f2
*(&local64) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2534 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2534));
// unreffing _f1
*(&local63) = ((panda$core$String*) NULL);
goto block1;
block43:;
panda$core$Int64 $tmp2535 = (panda$core$Int64) {21};
panda$core$Bit $tmp2536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2535);
bool $tmp2537 = $tmp2536.value;
if ($tmp2537) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Position* $tmp2538 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2539 = *$tmp2538;
*(&local67) = $tmp2539;
panda$core$String** $tmp2540 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2541 = *$tmp2540;
*(&local68) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2541));
panda$core$String* $tmp2542 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2542));
*(&local68) = $tmp2541;
org$pandalanguage$pandac$FixedArray** $tmp2543 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2544 = *$tmp2543;
*(&local69) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2544));
org$pandalanguage$pandac$FixedArray* $tmp2545 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2545));
*(&local69) = $tmp2544;
// line 1
panda$core$String* $tmp2546 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2546));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2547 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2547));
org$pandalanguage$pandac$FixedArray* $tmp2548 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2548));
// unreffing _f2
*(&local69) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2549 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2549));
// unreffing _f1
*(&local68) = ((panda$core$String*) NULL);
goto block1;
block45:;
panda$core$Int64 $tmp2550 = (panda$core$Int64) {22};
panda$core$Bit $tmp2551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2550);
bool $tmp2552 = $tmp2551.value;
if ($tmp2552) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Position* $tmp2553 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2554 = *$tmp2553;
*(&local70) = $tmp2554;
panda$core$String** $tmp2555 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2556 = *$tmp2555;
*(&local71) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2556));
panda$core$String* $tmp2557 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2557));
*(&local71) = $tmp2556;
// line 1
panda$core$String* $tmp2558 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2558));
panda$core$String* $tmp2559 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2559));
// unreffing _f1
*(&local71) = ((panda$core$String*) NULL);
goto block1;
block47:;
panda$core$Int64 $tmp2560 = (panda$core$Int64) {23};
panda$core$Bit $tmp2561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2560);
bool $tmp2562 = $tmp2561.value;
if ($tmp2562) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Position* $tmp2563 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2564 = *$tmp2563;
*(&local72) = $tmp2564;
org$pandalanguage$pandac$ASTNode** $tmp2565 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2566 = *$tmp2565;
*(&local73) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2566));
org$pandalanguage$pandac$ASTNode* $tmp2567 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2567));
*(&local73) = $tmp2566;
org$pandalanguage$pandac$FixedArray** $tmp2568 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2569 = *$tmp2568;
*(&local74) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2569));
org$pandalanguage$pandac$FixedArray* $tmp2570 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2570));
*(&local74) = $tmp2569;
org$pandalanguage$pandac$ASTNode** $tmp2571 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2572 = *$tmp2571;
*(&local75) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2572));
org$pandalanguage$pandac$ASTNode* $tmp2573 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2573));
*(&local75) = $tmp2572;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2574 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2574));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2575 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2575));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2576 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2576));
org$pandalanguage$pandac$ASTNode* $tmp2577 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2577));
// unreffing _f3
*(&local75) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2578 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2578));
// unreffing _f2
*(&local74) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2579 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2579));
// unreffing _f1
*(&local73) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block49:;
panda$core$Int64 $tmp2580 = (panda$core$Int64) {24};
panda$core$Bit $tmp2581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2580);
bool $tmp2582 = $tmp2581.value;
if ($tmp2582) goto block50; else goto block51;
block50:;
org$pandalanguage$pandac$Position* $tmp2583 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2584 = *$tmp2583;
*(&local76) = $tmp2584;
panda$core$UInt64* $tmp2585 = (panda$core$UInt64*) (param0->$data + 16);
panda$core$UInt64 $tmp2586 = *$tmp2585;
*(&local77) = $tmp2586;
goto block1;
block51:;
panda$core$Int64 $tmp2587 = (panda$core$Int64) {25};
panda$core$Bit $tmp2588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2587);
bool $tmp2589 = $tmp2588.value;
if ($tmp2589) goto block52; else goto block53;
block52:;
org$pandalanguage$pandac$Position* $tmp2590 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2591 = *$tmp2590;
*(&local78) = $tmp2591;
org$pandalanguage$pandac$IR$Value** $tmp2592 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp2593 = *$tmp2592;
*(&local79) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2593));
org$pandalanguage$pandac$IR$Value* $tmp2594 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2594));
*(&local79) = $tmp2593;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp2595 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2595));
org$pandalanguage$pandac$IR$Value* $tmp2596 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2596));
// unreffing _f1
*(&local79) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block53:;
panda$core$Int64 $tmp2597 = (panda$core$Int64) {26};
panda$core$Bit $tmp2598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2597);
bool $tmp2599 = $tmp2598.value;
if ($tmp2599) goto block54; else goto block55;
block54:;
org$pandalanguage$pandac$Position* $tmp2600 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2601 = *$tmp2600;
*(&local80) = $tmp2601;
panda$core$String** $tmp2602 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2603 = *$tmp2602;
*(&local81) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2603));
panda$core$String* $tmp2604 = *(&local81);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2604));
*(&local81) = $tmp2603;
org$pandalanguage$pandac$FixedArray** $tmp2605 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2606 = *$tmp2605;
*(&local82) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2606));
org$pandalanguage$pandac$FixedArray* $tmp2607 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2607));
*(&local82) = $tmp2606;
// line 1
panda$core$String* $tmp2608 = *(&local81);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2608));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2609 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2609));
org$pandalanguage$pandac$FixedArray* $tmp2610 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2610));
// unreffing _f2
*(&local82) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2611 = *(&local81);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2611));
// unreffing _f1
*(&local81) = ((panda$core$String*) NULL);
goto block1;
block55:;
panda$core$Int64 $tmp2612 = (panda$core$Int64) {27};
panda$core$Bit $tmp2613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2612);
bool $tmp2614 = $tmp2613.value;
if ($tmp2614) goto block56; else goto block57;
block56:;
org$pandalanguage$pandac$Position* $tmp2615 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2616 = *$tmp2615;
*(&local83) = $tmp2616;
org$pandalanguage$pandac$ASTNode** $tmp2617 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2618 = *$tmp2617;
*(&local84) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2618));
org$pandalanguage$pandac$ASTNode* $tmp2619 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2619));
*(&local84) = $tmp2618;
org$pandalanguage$pandac$FixedArray** $tmp2620 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2621 = *$tmp2620;
*(&local85) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2621));
org$pandalanguage$pandac$FixedArray* $tmp2622 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2622));
*(&local85) = $tmp2621;
org$pandalanguage$pandac$FixedArray** $tmp2623 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp2624 = *$tmp2623;
*(&local86) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2624));
org$pandalanguage$pandac$FixedArray* $tmp2625 = *(&local86);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2625));
*(&local86) = $tmp2624;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2626 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2626));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2627 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2627));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2628 = *(&local86);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2628));
org$pandalanguage$pandac$FixedArray* $tmp2629 = *(&local86);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2629));
// unreffing _f3
*(&local86) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2630 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2630));
// unreffing _f2
*(&local85) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2631 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2631));
// unreffing _f1
*(&local84) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block57:;
panda$core$Int64 $tmp2632 = (panda$core$Int64) {28};
panda$core$Bit $tmp2633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2632);
bool $tmp2634 = $tmp2633.value;
if ($tmp2634) goto block58; else goto block59;
block58:;
org$pandalanguage$pandac$Position* $tmp2635 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2636 = *$tmp2635;
*(&local87) = $tmp2636;
org$pandalanguage$pandac$ASTNode** $tmp2637 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2638 = *$tmp2637;
*(&local88) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2638));
org$pandalanguage$pandac$ASTNode* $tmp2639 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2639));
*(&local88) = $tmp2638;
org$pandalanguage$pandac$FixedArray** $tmp2640 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2641 = *$tmp2640;
*(&local89) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2641));
org$pandalanguage$pandac$FixedArray* $tmp2642 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2642));
*(&local89) = $tmp2641;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2643 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2644 = *$tmp2643;
*(&local90) = $tmp2644;
panda$core$String** $tmp2645 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp2646 = *$tmp2645;
*(&local91) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2646));
panda$core$String* $tmp2647 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2647));
*(&local91) = $tmp2646;
org$pandalanguage$pandac$FixedArray** $tmp2648 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp2649 = *$tmp2648;
*(&local92) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2649));
org$pandalanguage$pandac$FixedArray* $tmp2650 = *(&local92);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2650));
*(&local92) = $tmp2649;
org$pandalanguage$pandac$FixedArray** $tmp2651 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp2652 = *$tmp2651;
*(&local93) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2652));
org$pandalanguage$pandac$FixedArray* $tmp2653 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2653));
*(&local93) = $tmp2652;
org$pandalanguage$pandac$ASTNode** $tmp2654 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp2655 = *$tmp2654;
*(&local94) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2655));
org$pandalanguage$pandac$ASTNode* $tmp2656 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2656));
*(&local94) = $tmp2655;
org$pandalanguage$pandac$FixedArray** $tmp2657 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 72);
org$pandalanguage$pandac$FixedArray* $tmp2658 = *$tmp2657;
*(&local95) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2658));
org$pandalanguage$pandac$FixedArray* $tmp2659 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2659));
*(&local95) = $tmp2658;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2660 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2660));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2661 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2661));
// line 1
panda$core$String* $tmp2662 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2662));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2663 = *(&local92);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2663));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2664 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2664));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2665 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2665));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2666 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2666));
org$pandalanguage$pandac$FixedArray* $tmp2667 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2667));
// unreffing _f8
*(&local95) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2668 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2668));
// unreffing _f7
*(&local94) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2669 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2669));
// unreffing _f6
*(&local93) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2670 = *(&local92);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2670));
// unreffing _f5
*(&local92) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2671 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2671));
// unreffing _f4
*(&local91) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2672 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2672));
// unreffing _f2
*(&local89) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2673 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2673));
// unreffing _f1
*(&local88) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block59:;
panda$core$Int64 $tmp2674 = (panda$core$Int64) {29};
panda$core$Bit $tmp2675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2674);
bool $tmp2676 = $tmp2675.value;
if ($tmp2676) goto block60; else goto block61;
block60:;
org$pandalanguage$pandac$Position* $tmp2677 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2678 = *$tmp2677;
*(&local96) = $tmp2678;
org$pandalanguage$pandac$parser$Token$Kind* $tmp2679 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp2680 = *$tmp2679;
*(&local97) = $tmp2680;
org$pandalanguage$pandac$FixedArray** $tmp2681 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2682 = *$tmp2681;
*(&local98) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2682));
org$pandalanguage$pandac$FixedArray* $tmp2683 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2683));
*(&local98) = $tmp2682;
org$pandalanguage$pandac$ASTNode** $tmp2684 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2685 = *$tmp2684;
*(&local99) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2685));
org$pandalanguage$pandac$ASTNode* $tmp2686 = *(&local99);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2686));
*(&local99) = $tmp2685;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2687 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2687));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2688 = *(&local99);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2688));
org$pandalanguage$pandac$ASTNode* $tmp2689 = *(&local99);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2689));
// unreffing _f3
*(&local99) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2690 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2690));
// unreffing _f2
*(&local98) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block61:;
panda$core$Int64 $tmp2691 = (panda$core$Int64) {30};
panda$core$Bit $tmp2692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2691);
bool $tmp2693 = $tmp2692.value;
if ($tmp2693) goto block62; else goto block63;
block62:;
org$pandalanguage$pandac$Position* $tmp2694 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2695 = *$tmp2694;
*(&local100) = $tmp2695;
goto block1;
block63:;
panda$core$Int64 $tmp2696 = (panda$core$Int64) {31};
panda$core$Bit $tmp2697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2696);
bool $tmp2698 = $tmp2697.value;
if ($tmp2698) goto block64; else goto block65;
block64:;
org$pandalanguage$pandac$Position* $tmp2699 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2700 = *$tmp2699;
*(&local101) = $tmp2700;
org$pandalanguage$pandac$ASTNode** $tmp2701 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2702 = *$tmp2701;
*(&local102) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2702));
org$pandalanguage$pandac$ASTNode* $tmp2703 = *(&local102);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2703));
*(&local102) = $tmp2702;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2704 = *(&local102);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2704));
org$pandalanguage$pandac$ASTNode* $tmp2705 = *(&local102);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2705));
// unreffing _f1
*(&local102) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block65:;
panda$core$Int64 $tmp2706 = (panda$core$Int64) {32};
panda$core$Bit $tmp2707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2706);
bool $tmp2708 = $tmp2707.value;
if ($tmp2708) goto block66; else goto block67;
block66:;
org$pandalanguage$pandac$Position* $tmp2709 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2710 = *$tmp2709;
*(&local103) = $tmp2710;
panda$core$String** $tmp2711 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2712 = *$tmp2711;
*(&local104) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2712));
panda$core$String* $tmp2713 = *(&local104);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2713));
*(&local104) = $tmp2712;
// line 1
panda$core$String* $tmp2714 = *(&local104);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2714));
panda$core$String* $tmp2715 = *(&local104);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2715));
// unreffing _f1
*(&local104) = ((panda$core$String*) NULL);
goto block1;
block67:;
panda$core$Int64 $tmp2716 = (panda$core$Int64) {33};
panda$core$Bit $tmp2717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2716);
bool $tmp2718 = $tmp2717.value;
if ($tmp2718) goto block68; else goto block69;
block68:;
org$pandalanguage$pandac$Position* $tmp2719 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2720 = *$tmp2719;
*(&local105) = $tmp2720;
panda$core$String** $tmp2721 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2722 = *$tmp2721;
*(&local106) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2722));
panda$core$String* $tmp2723 = *(&local106);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2723));
*(&local106) = $tmp2722;
org$pandalanguage$pandac$ASTNode** $tmp2724 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2725 = *$tmp2724;
*(&local107) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2725));
org$pandalanguage$pandac$ASTNode* $tmp2726 = *(&local107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2726));
*(&local107) = $tmp2725;
// line 1
panda$core$String* $tmp2727 = *(&local106);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2727));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2728 = *(&local107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2728));
org$pandalanguage$pandac$ASTNode* $tmp2729 = *(&local107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2729));
// unreffing _f2
*(&local107) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2730 = *(&local106);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2730));
// unreffing _f1
*(&local106) = ((panda$core$String*) NULL);
goto block1;
block69:;
panda$core$Int64 $tmp2731 = (panda$core$Int64) {34};
panda$core$Bit $tmp2732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2731);
bool $tmp2733 = $tmp2732.value;
if ($tmp2733) goto block70; else goto block71;
block70:;
org$pandalanguage$pandac$Position* $tmp2734 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2735 = *$tmp2734;
*(&local108) = $tmp2735;
org$pandalanguage$pandac$parser$Token$Kind* $tmp2736 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp2737 = *$tmp2736;
*(&local109) = $tmp2737;
org$pandalanguage$pandac$ASTNode** $tmp2738 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2739 = *$tmp2738;
*(&local110) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2739));
org$pandalanguage$pandac$ASTNode* $tmp2740 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2740));
*(&local110) = $tmp2739;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2741 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2741));
org$pandalanguage$pandac$ASTNode* $tmp2742 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2742));
// unreffing _f2
*(&local110) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block71:;
panda$core$Int64 $tmp2743 = (panda$core$Int64) {35};
panda$core$Bit $tmp2744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2743);
bool $tmp2745 = $tmp2744.value;
if ($tmp2745) goto block72; else goto block73;
block72:;
org$pandalanguage$pandac$Position* $tmp2746 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2747 = *$tmp2746;
*(&local111) = $tmp2747;
org$pandalanguage$pandac$ASTNode** $tmp2748 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2749 = *$tmp2748;
*(&local112) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2749));
org$pandalanguage$pandac$ASTNode* $tmp2750 = *(&local112);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2750));
*(&local112) = $tmp2749;
panda$core$Bit* $tmp2751 = (panda$core$Bit*) (param0->$data + 24);
panda$core$Bit $tmp2752 = *$tmp2751;
*(&local113) = $tmp2752;
org$pandalanguage$pandac$ASTNode** $tmp2753 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 25);
org$pandalanguage$pandac$ASTNode* $tmp2754 = *$tmp2753;
*(&local114) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2754));
org$pandalanguage$pandac$ASTNode* $tmp2755 = *(&local114);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2755));
*(&local114) = $tmp2754;
org$pandalanguage$pandac$ASTNode** $tmp2756 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 33);
org$pandalanguage$pandac$ASTNode* $tmp2757 = *$tmp2756;
*(&local115) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2757));
org$pandalanguage$pandac$ASTNode* $tmp2758 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2758));
*(&local115) = $tmp2757;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2759 = *(&local112);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2759));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2760 = *(&local114);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2760));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2761 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2761));
org$pandalanguage$pandac$ASTNode* $tmp2762 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2762));
// unreffing _f4
*(&local115) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2763 = *(&local114);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2763));
// unreffing _f3
*(&local114) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2764 = *(&local112);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2764));
// unreffing _f1
*(&local112) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block73:;
panda$core$Int64 $tmp2765 = (panda$core$Int64) {36};
panda$core$Bit $tmp2766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2765);
bool $tmp2767 = $tmp2766.value;
if ($tmp2767) goto block74; else goto block75;
block74:;
org$pandalanguage$pandac$Position* $tmp2768 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2769 = *$tmp2768;
*(&local116) = $tmp2769;
panda$core$Real64* $tmp2770 = (panda$core$Real64*) (param0->$data + 16);
panda$core$Real64 $tmp2771 = *$tmp2770;
*(&local117) = $tmp2771;
goto block1;
block75:;
panda$core$Int64 $tmp2772 = (panda$core$Int64) {37};
panda$core$Bit $tmp2773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2772);
bool $tmp2774 = $tmp2773.value;
if ($tmp2774) goto block76; else goto block77;
block76:;
org$pandalanguage$pandac$Position* $tmp2775 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2776 = *$tmp2775;
*(&local118) = $tmp2776;
panda$core$String** $tmp2777 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2778 = *$tmp2777;
*(&local119) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2778));
panda$core$String* $tmp2779 = *(&local119);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2779));
*(&local119) = $tmp2778;
// line 1
panda$core$String* $tmp2780 = *(&local119);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2780));
panda$core$String* $tmp2781 = *(&local119);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2781));
// unreffing _f1
*(&local119) = ((panda$core$String*) NULL);
goto block1;
block77:;
panda$core$Int64 $tmp2782 = (panda$core$Int64) {38};
panda$core$Bit $tmp2783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2782);
bool $tmp2784 = $tmp2783.value;
if ($tmp2784) goto block78; else goto block79;
block78:;
org$pandalanguage$pandac$Position* $tmp2785 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2786 = *$tmp2785;
*(&local120) = $tmp2786;
org$pandalanguage$pandac$ASTNode** $tmp2787 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2788 = *$tmp2787;
*(&local121) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2788));
org$pandalanguage$pandac$ASTNode* $tmp2789 = *(&local121);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2789));
*(&local121) = $tmp2788;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2790 = *(&local121);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2790));
org$pandalanguage$pandac$ASTNode* $tmp2791 = *(&local121);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2791));
// unreffing _f1
*(&local121) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block79:;
panda$core$Int64 $tmp2792 = (panda$core$Int64) {39};
panda$core$Bit $tmp2793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2792);
bool $tmp2794 = $tmp2793.value;
if ($tmp2794) goto block80; else goto block81;
block80:;
org$pandalanguage$pandac$Position* $tmp2795 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2796 = *$tmp2795;
*(&local122) = $tmp2796;
goto block1;
block81:;
panda$core$Int64 $tmp2797 = (panda$core$Int64) {40};
panda$core$Bit $tmp2798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2797);
bool $tmp2799 = $tmp2798.value;
if ($tmp2799) goto block82; else goto block83;
block82:;
org$pandalanguage$pandac$Position* $tmp2800 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2801 = *$tmp2800;
*(&local123) = $tmp2801;
panda$core$String** $tmp2802 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2803 = *$tmp2802;
*(&local124) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2803));
panda$core$String* $tmp2804 = *(&local124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2804));
*(&local124) = $tmp2803;
// line 1
panda$core$String* $tmp2805 = *(&local124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2805));
panda$core$String* $tmp2806 = *(&local124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2806));
// unreffing _f1
*(&local124) = ((panda$core$String*) NULL);
goto block1;
block83:;
panda$core$Int64 $tmp2807 = (panda$core$Int64) {41};
panda$core$Bit $tmp2808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2807);
bool $tmp2809 = $tmp2808.value;
if ($tmp2809) goto block84; else goto block85;
block84:;
org$pandalanguage$pandac$Position* $tmp2810 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2811 = *$tmp2810;
*(&local125) = $tmp2811;
goto block1;
block85:;
panda$core$Int64 $tmp2812 = (panda$core$Int64) {42};
panda$core$Bit $tmp2813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2812);
bool $tmp2814 = $tmp2813.value;
if ($tmp2814) goto block86; else goto block87;
block86:;
org$pandalanguage$pandac$Position* $tmp2815 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2816 = *$tmp2815;
*(&local126) = $tmp2816;
org$pandalanguage$pandac$FixedArray** $tmp2817 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2818 = *$tmp2817;
*(&local127) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2818));
org$pandalanguage$pandac$FixedArray* $tmp2819 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2819));
*(&local127) = $tmp2818;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2820 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2820));
org$pandalanguage$pandac$FixedArray* $tmp2821 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2821));
// unreffing _f1
*(&local127) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block87:;
panda$core$Int64 $tmp2822 = (panda$core$Int64) {43};
panda$core$Bit $tmp2823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2822);
bool $tmp2824 = $tmp2823.value;
if ($tmp2824) goto block88; else goto block89;
block88:;
org$pandalanguage$pandac$Position* $tmp2825 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2826 = *$tmp2825;
*(&local128) = $tmp2826;
org$pandalanguage$pandac$FixedArray** $tmp2827 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2828 = *$tmp2827;
*(&local129) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2828));
org$pandalanguage$pandac$FixedArray* $tmp2829 = *(&local129);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2829));
*(&local129) = $tmp2828;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2830 = *(&local129);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2830));
org$pandalanguage$pandac$FixedArray* $tmp2831 = *(&local129);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2831));
// unreffing _f1
*(&local129) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block89:;
panda$core$Int64 $tmp2832 = (panda$core$Int64) {44};
panda$core$Bit $tmp2833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2832);
bool $tmp2834 = $tmp2833.value;
if ($tmp2834) goto block90; else goto block91;
block90:;
org$pandalanguage$pandac$Position* $tmp2835 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2836 = *$tmp2835;
*(&local130) = $tmp2836;
panda$core$String** $tmp2837 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2838 = *$tmp2837;
*(&local131) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2838));
panda$core$String* $tmp2839 = *(&local131);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2839));
*(&local131) = $tmp2838;
// line 1
panda$core$String* $tmp2840 = *(&local131);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2840));
panda$core$String* $tmp2841 = *(&local131);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2841));
// unreffing _f1
*(&local131) = ((panda$core$String*) NULL);
goto block1;
block91:;
panda$core$Int64 $tmp2842 = (panda$core$Int64) {45};
panda$core$Bit $tmp2843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2842);
bool $tmp2844 = $tmp2843.value;
if ($tmp2844) goto block92; else goto block93;
block92:;
org$pandalanguage$pandac$Position* $tmp2845 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2846 = *$tmp2845;
*(&local132) = $tmp2846;
org$pandalanguage$pandac$FixedArray** $tmp2847 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2848 = *$tmp2847;
*(&local133) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2848));
org$pandalanguage$pandac$FixedArray* $tmp2849 = *(&local133);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2849));
*(&local133) = $tmp2848;
org$pandalanguage$pandac$ASTNode** $tmp2850 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2851 = *$tmp2850;
*(&local134) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2851));
org$pandalanguage$pandac$ASTNode* $tmp2852 = *(&local134);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2852));
*(&local134) = $tmp2851;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2853 = *(&local133);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2853));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2854 = *(&local134);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2854));
org$pandalanguage$pandac$ASTNode* $tmp2855 = *(&local134);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2855));
// unreffing _f2
*(&local134) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2856 = *(&local133);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2856));
// unreffing _f1
*(&local133) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block93:;
panda$core$Int64 $tmp2857 = (panda$core$Int64) {46};
panda$core$Bit $tmp2858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2857);
bool $tmp2859 = $tmp2858.value;
if ($tmp2859) goto block94; else goto block95;
block94:;
org$pandalanguage$pandac$Position* $tmp2860 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2861 = *$tmp2860;
*(&local135) = $tmp2861;
panda$core$String** $tmp2862 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2863 = *$tmp2862;
*(&local136) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2863));
panda$core$String* $tmp2864 = *(&local136);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2864));
*(&local136) = $tmp2863;
org$pandalanguage$pandac$ASTNode** $tmp2865 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2866 = *$tmp2865;
*(&local137) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2866));
org$pandalanguage$pandac$ASTNode* $tmp2867 = *(&local137);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2867));
*(&local137) = $tmp2866;
// line 1
panda$core$String* $tmp2868 = *(&local136);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2868));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2869 = *(&local137);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2869));
org$pandalanguage$pandac$ASTNode* $tmp2870 = *(&local137);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2870));
// unreffing _f2
*(&local137) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2871 = *(&local136);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2871));
// unreffing _f1
*(&local136) = ((panda$core$String*) NULL);
goto block1;
block95:;
panda$core$Int64 $tmp2872 = (panda$core$Int64) {47};
panda$core$Bit $tmp2873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2872);
bool $tmp2874 = $tmp2873.value;
if ($tmp2874) goto block96; else goto block97;
block96:;
org$pandalanguage$pandac$Position* $tmp2875 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2876 = *$tmp2875;
*(&local138) = $tmp2876;
org$pandalanguage$pandac$FixedArray** $tmp2877 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2878 = *$tmp2877;
*(&local139) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2878));
org$pandalanguage$pandac$FixedArray* $tmp2879 = *(&local139);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2879));
*(&local139) = $tmp2878;
org$pandalanguage$pandac$ASTNode** $tmp2880 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2881 = *$tmp2880;
*(&local140) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2881));
org$pandalanguage$pandac$ASTNode* $tmp2882 = *(&local140);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2882));
*(&local140) = $tmp2881;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2883 = *(&local139);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2883));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2884 = *(&local140);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2884));
org$pandalanguage$pandac$ASTNode* $tmp2885 = *(&local140);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2885));
// unreffing _f2
*(&local140) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2886 = *(&local139);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2886));
// unreffing _f1
*(&local139) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block97:;
panda$core$Int64 $tmp2887 = (panda$core$Int64) {48};
panda$core$Bit $tmp2888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2887);
bool $tmp2889 = $tmp2888.value;
if ($tmp2889) goto block98; else goto block99;
block98:;
org$pandalanguage$pandac$Position* $tmp2890 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2891 = *$tmp2890;
*(&local141) = $tmp2891;
panda$core$String** $tmp2892 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2893 = *$tmp2892;
*(&local142) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2893));
panda$core$String* $tmp2894 = *(&local142);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2894));
*(&local142) = $tmp2893;
// line 1
panda$core$String* $tmp2895 = *(&local142);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2895));
panda$core$String* $tmp2896 = *(&local142);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2896));
// unreffing _f1
*(&local142) = ((panda$core$String*) NULL);
goto block1;
block99:;
panda$core$Int64 $tmp2897 = (panda$core$Int64) {49};
panda$core$Bit $tmp2898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2897);
bool $tmp2899 = $tmp2898.value;
if ($tmp2899) goto block100; else goto block101;
block100:;
org$pandalanguage$pandac$Position* $tmp2900 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2901 = *$tmp2900;
*(&local143) = $tmp2901;
org$pandalanguage$pandac$Variable$Kind* $tmp2902 = (org$pandalanguage$pandac$Variable$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp2903 = *$tmp2902;
*(&local144) = $tmp2903;
org$pandalanguage$pandac$FixedArray** $tmp2904 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2905 = *$tmp2904;
*(&local145) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2905));
org$pandalanguage$pandac$FixedArray* $tmp2906 = *(&local145);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2906));
*(&local145) = $tmp2905;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2907 = *(&local145);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2907));
org$pandalanguage$pandac$FixedArray* $tmp2908 = *(&local145);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2908));
// unreffing _f2
*(&local145) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block101:;
panda$core$Int64 $tmp2909 = (panda$core$Int64) {50};
panda$core$Bit $tmp2910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2909);
bool $tmp2911 = $tmp2910.value;
if ($tmp2911) goto block102; else goto block103;
block102:;
org$pandalanguage$pandac$Position* $tmp2912 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2913 = *$tmp2912;
*(&local146) = $tmp2913;
org$pandalanguage$pandac$FixedArray** $tmp2914 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2915 = *$tmp2914;
*(&local147) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2915));
org$pandalanguage$pandac$FixedArray* $tmp2916 = *(&local147);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2916));
*(&local147) = $tmp2915;
org$pandalanguage$pandac$FixedArray** $tmp2917 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2918 = *$tmp2917;
*(&local148) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2918));
org$pandalanguage$pandac$FixedArray* $tmp2919 = *(&local148);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2919));
*(&local148) = $tmp2918;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2920 = *(&local147);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2920));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2921 = *(&local148);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2921));
org$pandalanguage$pandac$FixedArray* $tmp2922 = *(&local148);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2922));
// unreffing _f2
*(&local148) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2923 = *(&local147);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2923));
// unreffing _f1
*(&local147) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block103:;
panda$core$Int64 $tmp2924 = (panda$core$Int64) {51};
panda$core$Bit $tmp2925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2924);
bool $tmp2926 = $tmp2925.value;
if ($tmp2926) goto block104; else goto block1;
block104:;
org$pandalanguage$pandac$Position* $tmp2927 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2928 = *$tmp2927;
*(&local149) = $tmp2928;
panda$core$String** $tmp2929 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2930 = *$tmp2929;
*(&local150) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2930));
panda$core$String* $tmp2931 = *(&local150);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2931));
*(&local150) = $tmp2930;
org$pandalanguage$pandac$ASTNode** $tmp2932 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2933 = *$tmp2932;
*(&local151) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2933));
org$pandalanguage$pandac$ASTNode* $tmp2934 = *(&local151);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2934));
*(&local151) = $tmp2933;
org$pandalanguage$pandac$FixedArray** $tmp2935 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp2936 = *$tmp2935;
*(&local152) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2936));
org$pandalanguage$pandac$FixedArray* $tmp2937 = *(&local152);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2937));
*(&local152) = $tmp2936;
// line 1
panda$core$String* $tmp2938 = *(&local150);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2938));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2939 = *(&local151);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2939));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2940 = *(&local152);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2940));
org$pandalanguage$pandac$FixedArray* $tmp2941 = *(&local152);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2941));
// unreffing _f3
*(&local152) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2942 = *(&local151);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2942));
// unreffing _f2
*(&local151) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2943 = *(&local150);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2943));
// unreffing _f1
*(&local150) = ((panda$core$String*) NULL);
goto block1;
block1:;
// line 6
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, panda$core$String* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp2944 = &param0->$rawValue;
*$tmp2944 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2945 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2945 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp2946 = (panda$core$String**) (param0->$data + 16);
*$tmp2946 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp2947 = (panda$core$String**) (param0->$data + 24);
*$tmp2947 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp2948 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp2948 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$FixedArray* param3) {

// line 6
panda$core$Int64* $tmp2949 = &param0->$rawValue;
*$tmp2949 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2950 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2950 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$FixedArray** $tmp2951 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
*$tmp2951 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp2952 = &param0->$rawValue;
*$tmp2952 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2953 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2953 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2954 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2954 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp2955 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp2955 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3) {

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
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2) {

// line 6
panda$core$Int64* $tmp2959 = &param0->$rawValue;
*$tmp2959 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2960 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2960 = param2;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$parser$Token$Kind param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp2961 = &param0->$rawValue;
*$tmp2961 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2962 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2962 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2963 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2963 = param3;
// line 6
org$pandalanguage$pandac$parser$Token$Kind* $tmp2964 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
*$tmp2964 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp2965 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp2965 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$Bit param3) {

// line 6
panda$core$Int64* $tmp2966 = &param0->$rawValue;
*$tmp2966 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2967 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2967 = param2;
// line 6
panda$core$Bit* $tmp2968 = (panda$core$Bit*) (param0->$data + 16);
*$tmp2968 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3) {

// line 6
panda$core$Int64* $tmp2969 = &param0->$rawValue;
*$tmp2969 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2970 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2970 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp2971 = (panda$core$String**) (param0->$data + 16);
*$tmp2971 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 6
panda$core$Int64* $tmp2972 = &param0->$rawValue;
*$tmp2972 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2973 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2973 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2974 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2974 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp2975 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp2975 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$core$String* param4, org$pandalanguage$pandac$FixedArray* param5) {

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
panda$core$String** $tmp2979 = (panda$core$String**) (param0->$data + 24);
*$tmp2979 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$FixedArray** $tmp2980 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
*$tmp2980 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$ChoiceCase* param4, panda$core$Int64 param5) {

// line 6
panda$core$Int64* $tmp2981 = &param0->$rawValue;
*$tmp2981 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2982 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2982 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2983 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2983 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ChoiceCase** $tmp2984 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
*$tmp2984 = param4;
// line 6
panda$core$Int64* $tmp2985 = (panda$core$Int64*) (param0->$data + 32);
*$tmp2985 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$ClassDecl$Kind param5, panda$core$String* param6, org$pandalanguage$pandac$FixedArray* param7, org$pandalanguage$pandac$FixedArray* param8, org$pandalanguage$pandac$FixedArray* param9) {

// line 6
panda$core$Int64* $tmp2986 = &param0->$rawValue;
*$tmp2986 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2987 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2987 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2988 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2988 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp2989 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp2989 = param4;
// line 6
org$pandalanguage$pandac$ClassDecl$Kind* $tmp2990 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param0->$data + 32);
*$tmp2990 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
panda$core$String** $tmp2991 = (panda$core$String**) (param0->$data + 40);
*$tmp2991 = param6;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param7));
org$pandalanguage$pandac$FixedArray** $tmp2992 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
*$tmp2992 = param7;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
org$pandalanguage$pandac$FixedArray** $tmp2993 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
*$tmp2993 = param8;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param9));
org$pandalanguage$pandac$FixedArray** $tmp2994 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 64);
*$tmp2994 = param9;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

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
org$pandalanguage$pandac$FixedArray** $tmp2998 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp2998 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp2999 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp2999 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$core$String* param4) {

// line 6
panda$core$Int64* $tmp3000 = &param0->$rawValue;
*$tmp3000 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3001 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3001 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3002 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3002 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp3003 = (panda$core$String**) (param0->$data + 24);
*$tmp3003 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$core$String* param4, org$pandalanguage$pandac$FixedArray* param5) {

// line 6
panda$core$Int64* $tmp3004 = &param0->$rawValue;
*$tmp3004 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3005 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3005 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3006 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3006 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp3007 = (panda$core$String**) (param0->$data + 24);
*$tmp3007 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$FixedArray** $tmp3008 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
*$tmp3008 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp3009 = &param0->$rawValue;
*$tmp3009 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3010 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3010 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3011 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3011 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3012 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3012 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3013 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp3013 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$FixedArray* param2) {

// line 6
panda$core$Int64* $tmp3014 = &param0->$rawValue;
*$tmp3014 = param1;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$FixedArray** $tmp3015 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 0);
*$tmp3015 = param2;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$ASTNode* param4, org$pandalanguage$pandac$ASTNode* param5, org$pandalanguage$pandac$FixedArray* param6) {

// line 6
panda$core$Int64* $tmp3016 = &param0->$rawValue;
*$tmp3016 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3017 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3017 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3018 = (panda$core$String**) (param0->$data + 16);
*$tmp3018 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3019 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3019 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3020 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp3020 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
org$pandalanguage$pandac$FixedArray** $tmp3021 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 40);
*$tmp3021 = param6;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 6
panda$core$Int64* $tmp3022 = &param0->$rawValue;
*$tmp3022 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3023 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3023 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3024 = (panda$core$String**) (param0->$data + 16);
*$tmp3024 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3025 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3025 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3) {

// line 6
panda$core$Int64* $tmp3026 = &param0->$rawValue;
*$tmp3026 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3027 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3027 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3028 = (panda$core$String**) (param0->$data + 16);
*$tmp3028 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp3029 = &param0->$rawValue;
*$tmp3029 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3030 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3030 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3031 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3031 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3032 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3032 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3033 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp3033 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$UInt64 param3) {

// line 6
panda$core$Int64* $tmp3034 = &param0->$rawValue;
*$tmp3034 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3035 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3035 = param2;
// line 6
panda$core$UInt64* $tmp3036 = (panda$core$UInt64*) (param0->$data + 16);
*$tmp3036 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3) {

// line 6
panda$core$Int64* $tmp3037 = &param0->$rawValue;
*$tmp3037 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3038 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3038 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp3039 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp3039 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 6
panda$core$Int64* $tmp3040 = &param0->$rawValue;
*$tmp3040 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3041 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3041 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3042 = (panda$core$String**) (param0->$data + 16);
*$tmp3042 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3043 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3043 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$FixedArray* param5) {

// line 6
panda$core$Int64* $tmp3044 = &param0->$rawValue;
*$tmp3044 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3045 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3045 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3046 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3046 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3047 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3047 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$FixedArray** $tmp3048 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
*$tmp3048 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$MethodDecl$Kind param5, panda$core$String* param6, org$pandalanguage$pandac$FixedArray* param7, org$pandalanguage$pandac$FixedArray* param8, org$pandalanguage$pandac$ASTNode* param9, org$pandalanguage$pandac$FixedArray* param10) {

// line 6
panda$core$Int64* $tmp3049 = &param0->$rawValue;
*$tmp3049 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3050 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3050 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3051 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3051 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3052 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3052 = param4;
// line 6
org$pandalanguage$pandac$MethodDecl$Kind* $tmp3053 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param0->$data + 32);
*$tmp3053 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
panda$core$String** $tmp3054 = (panda$core$String**) (param0->$data + 40);
*$tmp3054 = param6;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param7));
org$pandalanguage$pandac$FixedArray** $tmp3055 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
*$tmp3055 = param7;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
org$pandalanguage$pandac$FixedArray** $tmp3056 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
*$tmp3056 = param8;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param9));
org$pandalanguage$pandac$ASTNode** $tmp3057 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 64);
*$tmp3057 = param9;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param10));
org$pandalanguage$pandac$FixedArray** $tmp3058 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 72);
*$tmp3058 = param10;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$parser$Token$Kind param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp3059 = &param0->$rawValue;
*$tmp3059 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3060 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3060 = param2;
// line 6
org$pandalanguage$pandac$parser$Token$Kind* $tmp3061 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
*$tmp3061 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3062 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3062 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3063 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp3063 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp3064 = &param0->$rawValue;
*$tmp3064 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3065 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3065 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3066 = (panda$core$String**) (param0->$data + 16);
*$tmp3066 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3067 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3067 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$parser$Token$Kind param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp3068 = &param0->$rawValue;
*$tmp3068 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3069 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3069 = param2;
// line 6
org$pandalanguage$pandac$parser$Token$Kind* $tmp3070 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
*$tmp3070 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3071 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3071 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$core$Bit param4, org$pandalanguage$pandac$ASTNode* param5, org$pandalanguage$pandac$ASTNode* param6) {

// line 6
panda$core$Int64* $tmp3072 = &param0->$rawValue;
*$tmp3072 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3073 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3073 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3074 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3074 = param3;
// line 6
panda$core$Bit* $tmp3075 = (panda$core$Bit*) (param0->$data + 24);
*$tmp3075 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3076 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 25);
*$tmp3076 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
org$pandalanguage$pandac$ASTNode** $tmp3077 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 33);
*$tmp3077 = param6;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$Real64 param3) {

// line 6
panda$core$Int64* $tmp3078 = &param0->$rawValue;
*$tmp3078 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3079 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3079 = param2;
// line 6
panda$core$Real64* $tmp3080 = (panda$core$Real64*) (param0->$data + 16);
*$tmp3080 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3) {

// line 6
panda$core$Int64* $tmp3081 = &param0->$rawValue;
*$tmp3081 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3082 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3082 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3083 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3083 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$FixedArray* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp3084 = &param0->$rawValue;
*$tmp3084 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3085 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3085 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$FixedArray** $tmp3086 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
*$tmp3086 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3087 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3087 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp3088 = &param0->$rawValue;
*$tmp3088 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3089 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3089 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3090 = (panda$core$String**) (param0->$data + 16);
*$tmp3090 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3091 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3091 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$Variable$Kind param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 6
panda$core$Int64* $tmp3092 = &param0->$rawValue;
*$tmp3092 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3093 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3093 = param2;
// line 6
org$pandalanguage$pandac$Variable$Kind* $tmp3094 = (org$pandalanguage$pandac$Variable$Kind*) (param0->$data + 16);
*$tmp3094 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3095 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3095 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$FixedArray* param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 6
panda$core$Int64* $tmp3096 = &param0->$rawValue;
*$tmp3096 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3097 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3097 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$FixedArray** $tmp3098 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
*$tmp3098 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3099 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3099 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$ASTNode* param4, org$pandalanguage$pandac$FixedArray* param5) {

// line 6
panda$core$Int64* $tmp3100 = &param0->$rawValue;
*$tmp3100 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3101 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3101 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3102 = (panda$core$String**) (param0->$data + 16);
*$tmp3102 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3103 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3103 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$FixedArray** $tmp3104 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
*$tmp3104 = param5;
return;

}






