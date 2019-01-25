#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "org/frostlang/frostc/ClassDecl/Kind.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/core/Real64.h"
#include "org/frostlang/frostc/expression/Unary/Operator.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/MutableMethod.h"


static frost$core$String $s1;
org$frostlang$frostc$ASTNode$class_type org$frostlang$frostc$ASTNode$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$ASTNode$get_asString$R$frost$core$String, org$frostlang$frostc$ASTNode$cleanup, org$frostlang$frostc$ASTNode$position$R$org$frostlang$frostc$Position} };

typedef frost$core$String* (*$fn591)(frost$core$Object*);
typedef frost$core$Bit (*$fn667)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn672)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn708)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn724)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn728)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn733)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn780)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn787)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn825)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn851)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn903)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn907)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn912)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn946)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn959)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn970)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn974)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn979)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1034)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1046)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1079)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1083)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1088)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1121)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1147)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1158)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1193)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1197)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1202)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1229)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1233)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1238)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1289)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1293)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1298)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1333)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1369)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1400)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1404)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1409)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1444)(frost$core$Object*);
typedef frost$core$String* (*$fn1456)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1485)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1489)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1494)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1533)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1537)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1542)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1605)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1609)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1614)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1646)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1656)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1679)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1683)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1688)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1750)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1889)(frost$core$Object*);
typedef frost$core$String* (*$fn1958)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1976)(frost$collections$CollectionView*);
typedef void (*$fn2002)(frost$core$MutableString*, frost$core$Object*);
typedef void (*$fn2006)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef void (*$fn2020)(frost$core$MutableString*, frost$core$Object*);
typedef void (*$fn2024)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn2084)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2149)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2209)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2235)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2239)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2244)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2262)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2266)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2271)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2318)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2322)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2327)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 28, 5772502652536328142, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s610 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static frost$core$String $s612 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s617 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static frost$core$String $s619 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s623 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s636 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static frost$core$String $s638 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s645 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static frost$core$String $s646 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static frost$core$String $s675 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s679 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };
static frost$core$String $s684 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s719 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static frost$core$String $s739 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s742 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s760 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static frost$core$String $s762 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s764 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static frost$core$String $s766 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static frost$core$String $s783 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s791 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s816 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s821 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s829 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s854 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s899 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s918 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static frost$core$String $s931 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static frost$core$String $s936 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static frost$core$String $s949 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s951 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s962 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s964 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s966 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s985 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s988 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1011 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static frost$core$String $s1013 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1015 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static frost$core$String $s1017 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static frost$core$String $s1037 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static frost$core$String $s1041 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1073 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1075 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static frost$core$String $s1094 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1099 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static frost$core$String $s1101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1163 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1189 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1275 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s1279 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static frost$core$String $s1281 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static frost$core$String $s1285 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1329 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1363 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52\x5f\x47\x45\x4e\x45\x52\x49\x43\x53\x28", 20, -4089576957169252493, NULL };
static frost$core$String $s1365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x29", 2, 16504, NULL };
static frost$core$String $s1393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static frost$core$String $s1395 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1415 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1418 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static frost$core$String $s1427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static frost$core$String $s1500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1503 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1526 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static frost$core$String $s1528 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1548 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1556 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1558 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1601 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1620 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1628 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static frost$core$String $s1633 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static frost$core$String $s1649 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1651 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1659 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1661 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1668 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1670 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1675 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1694 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1697 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1726 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s1728 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s1732 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s1734 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s1738 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s1740 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s1744 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s1746 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s1753 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1755 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1759 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1767 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1771 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1779 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x29", 2, 14282, NULL };
static frost$core$String $s1787 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s1788 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s1799 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s1825 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1829 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1858 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static frost$core$String $s1860 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s1872 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static frost$core$String $s1901 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s1903 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s1918 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s1920 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1922 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static frost$core$String $s1924 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static frost$core$String $s1928 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s1929 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s1940 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s1945 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static frost$core$String $s1946 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static frost$core$String $s1961 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1963 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1979 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1981 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1998 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static frost$core$String $s2013 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x0a\x66\x61\x69\x6c\x28", 7, 240019370222988, NULL };
static frost$core$String $s2015 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b\x0a", 4, 146641607, NULL };
static frost$core$String $s2017 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x0a\x66\x61\x69\x6c\x20\x7b\x0a", 9, 2448437595644631413, NULL };
static frost$core$String $s2026 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2060 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2064 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2087 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2089 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static frost$core$String $s2093 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65\x2c\x20", 13, 4377509119645419399, NULL };
static frost$core$String $s2130 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 184878482956378755, NULL };
static frost$core$String $s2134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 184878482956378755, NULL };
static frost$core$String $s2152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static frost$core$String $s2158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2189 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static frost$core$String $s2194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static frost$core$String $s2199 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static frost$core$String $s2204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static frost$core$String $s2227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static frost$core$String $s2229 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2231 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2251 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2255 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s2308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2312 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static frost$core$String $s2314 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s2333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s2336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2344 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };

org$frostlang$frostc$Position org$frostlang$frostc$ASTNode$position$R$org$frostlang$frostc$Position(org$frostlang$frostc$ASTNode* param0) {

org$frostlang$frostc$Position local0;
org$frostlang$frostc$Position local1;
org$frostlang$frostc$Position local2;
org$frostlang$frostc$Position local3;
org$frostlang$frostc$Position local4;
org$frostlang$frostc$Position local5;
org$frostlang$frostc$Position local6;
org$frostlang$frostc$Position local7;
org$frostlang$frostc$Position local8;
org$frostlang$frostc$Position local9;
org$frostlang$frostc$Position local10;
org$frostlang$frostc$Position local11;
org$frostlang$frostc$Position local12;
org$frostlang$frostc$Position local13;
org$frostlang$frostc$Position local14;
org$frostlang$frostc$Position local15;
org$frostlang$frostc$Position local16;
org$frostlang$frostc$Position local17;
org$frostlang$frostc$Position local18;
org$frostlang$frostc$Position local19;
org$frostlang$frostc$Position local20;
org$frostlang$frostc$Position local21;
org$frostlang$frostc$Position local22;
org$frostlang$frostc$Position local23;
org$frostlang$frostc$Position local24;
org$frostlang$frostc$Position local25;
org$frostlang$frostc$Position local26;
org$frostlang$frostc$Position local27;
org$frostlang$frostc$Position local28;
org$frostlang$frostc$Position local29;
org$frostlang$frostc$Position local30;
org$frostlang$frostc$Position local31;
org$frostlang$frostc$Position local32;
org$frostlang$frostc$Position local33;
org$frostlang$frostc$Position local34;
org$frostlang$frostc$Position local35;
org$frostlang$frostc$Position local36;
org$frostlang$frostc$Position local37;
org$frostlang$frostc$Position local38;
org$frostlang$frostc$Position local39;
org$frostlang$frostc$Position local40;
org$frostlang$frostc$Position local41;
org$frostlang$frostc$Position local42;
org$frostlang$frostc$Position local43;
org$frostlang$frostc$Position local44;
org$frostlang$frostc$Position local45;
org$frostlang$frostc$Position local46;
org$frostlang$frostc$Position local47;
org$frostlang$frostc$Position local48;
org$frostlang$frostc$Position local49;
org$frostlang$frostc$Position local50;
org$frostlang$frostc$Position local51;
org$frostlang$frostc$Position local52;
org$frostlang$frostc$Position local53;
// line 94
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp7 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp8 = *$tmp7;
*(&local0) = $tmp8;
frost$core$String** $tmp9 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp10 = *$tmp9;
frost$core$String** $tmp11 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp12 = *$tmp11;
org$frostlang$frostc$ASTNode** $tmp13 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp14 = *$tmp13;
// line 96
org$frostlang$frostc$Position $tmp15 = *(&local0);
return $tmp15;
block3:;
frost$core$Int64 $tmp16 = (frost$core$Int64) {1};
frost$core$Bit $tmp17 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp16);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp19 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp20 = *$tmp19;
*(&local1) = $tmp20;
org$frostlang$frostc$FixedArray** $tmp21 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp22 = *$tmp21;
// line 99
org$frostlang$frostc$Position $tmp23 = *(&local1);
return $tmp23;
block5:;
frost$core$Int64 $tmp24 = (frost$core$Int64) {2};
frost$core$Bit $tmp25 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp24);
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp27 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp28 = *$tmp27;
*(&local2) = $tmp28;
org$frostlang$frostc$ASTNode** $tmp29 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp30 = *$tmp29;
org$frostlang$frostc$ASTNode** $tmp31 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp32 = *$tmp31;
// line 102
org$frostlang$frostc$Position $tmp33 = *(&local2);
return $tmp33;
block7:;
frost$core$Int64 $tmp34 = (frost$core$Int64) {3};
frost$core$Bit $tmp35 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp34);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp37 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp38 = *$tmp37;
*(&local3) = $tmp38;
org$frostlang$frostc$ASTNode** $tmp39 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp40 = *$tmp39;
// line 105
org$frostlang$frostc$Position $tmp41 = *(&local3);
return $tmp41;
block9:;
frost$core$Int64 $tmp42 = (frost$core$Int64) {4};
frost$core$Bit $tmp43 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp42);
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp45 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp46 = *$tmp45;
*(&local4) = $tmp46;
// line 108
org$frostlang$frostc$Position $tmp47 = *(&local4);
return $tmp47;
block11:;
frost$core$Int64 $tmp48 = (frost$core$Int64) {5};
frost$core$Bit $tmp49 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp48);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp51 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp52 = *$tmp51;
*(&local5) = $tmp52;
org$frostlang$frostc$ASTNode** $tmp53 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp54 = *$tmp53;
org$frostlang$frostc$expression$Binary$Operator* $tmp55 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp56 = *$tmp55;
org$frostlang$frostc$ASTNode** $tmp57 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp58 = *$tmp57;
// line 111
org$frostlang$frostc$Position $tmp59 = *(&local5);
return $tmp59;
block13:;
frost$core$Int64 $tmp60 = (frost$core$Int64) {6};
frost$core$Bit $tmp61 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp60);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp63 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp64 = *$tmp63;
*(&local6) = $tmp64;
frost$core$Bit* $tmp65 = (frost$core$Bit*) (param0->$data + 16);
frost$core$Bit $tmp66 = *$tmp65;
// line 114
org$frostlang$frostc$Position $tmp67 = *(&local6);
return $tmp67;
block15:;
frost$core$Int64 $tmp68 = (frost$core$Int64) {7};
frost$core$Bit $tmp69 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp68);
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp71 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp72 = *$tmp71;
*(&local7) = $tmp72;
org$frostlang$frostc$FixedArray** $tmp73 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp74 = *$tmp73;
// line 117
org$frostlang$frostc$Position $tmp75 = *(&local7);
return $tmp75;
block17:;
frost$core$Int64 $tmp76 = (frost$core$Int64) {8};
frost$core$Bit $tmp77 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp76);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp79 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp80 = *$tmp79;
*(&local8) = $tmp80;
frost$core$String** $tmp81 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp82 = *$tmp81;
// line 120
org$frostlang$frostc$Position $tmp83 = *(&local8);
return $tmp83;
block19:;
frost$core$Int64 $tmp84 = (frost$core$Int64) {9};
frost$core$Bit $tmp85 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp84);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp87 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp88 = *$tmp87;
*(&local9) = $tmp88;
org$frostlang$frostc$ASTNode** $tmp89 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp90 = *$tmp89;
org$frostlang$frostc$FixedArray** $tmp91 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp92 = *$tmp91;
// line 123
org$frostlang$frostc$Position $tmp93 = *(&local9);
return $tmp93;
block21:;
frost$core$Int64 $tmp94 = (frost$core$Int64) {10};
frost$core$Bit $tmp95 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp94);
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp97 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp98 = *$tmp97;
*(&local10) = $tmp98;
org$frostlang$frostc$ASTNode** $tmp99 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp100 = *$tmp99;
frost$core$String** $tmp101 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp102 = *$tmp101;
org$frostlang$frostc$FixedArray** $tmp103 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp104 = *$tmp103;
// line 126
org$frostlang$frostc$Position $tmp105 = *(&local10);
return $tmp105;
block23:;
frost$core$Int64 $tmp106 = (frost$core$Int64) {11};
frost$core$Bit $tmp107 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp106);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp109 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp110 = *$tmp109;
*(&local11) = $tmp110;
org$frostlang$frostc$ASTNode** $tmp111 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp112 = *$tmp111;
org$frostlang$frostc$ChoiceCase** $tmp113 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp114 = *$tmp113;
frost$core$Int64* $tmp115 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp116 = *$tmp115;
// line 129
org$frostlang$frostc$Position $tmp117 = *(&local11);
return $tmp117;
block25:;
frost$core$Int64 $tmp118 = (frost$core$Int64) {12};
frost$core$Bit $tmp119 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp118);
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp121 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp122 = *$tmp121;
*(&local12) = $tmp122;
org$frostlang$frostc$ASTNode** $tmp123 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp124 = *$tmp123;
org$frostlang$frostc$FixedArray** $tmp125 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp126 = *$tmp125;
org$frostlang$frostc$ClassDecl$Kind* $tmp127 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp128 = *$tmp127;
frost$core$String** $tmp129 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp130 = *$tmp129;
org$frostlang$frostc$FixedArray** $tmp131 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp132 = *$tmp131;
org$frostlang$frostc$FixedArray** $tmp133 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp134 = *$tmp133;
org$frostlang$frostc$FixedArray** $tmp135 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp136 = *$tmp135;
// line 132
org$frostlang$frostc$Position $tmp137 = *(&local12);
return $tmp137;
block27:;
frost$core$Int64 $tmp138 = (frost$core$Int64) {13};
frost$core$Bit $tmp139 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp138);
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp141 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp142 = *$tmp141;
*(&local13) = $tmp142;
frost$core$String** $tmp143 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp144 = *$tmp143;
// line 135
org$frostlang$frostc$Position $tmp145 = *(&local13);
return $tmp145;
block29:;
frost$core$Int64 $tmp146 = (frost$core$Int64) {14};
frost$core$Bit $tmp147 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp146);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp149 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp150 = *$tmp149;
*(&local14) = $tmp150;
org$frostlang$frostc$ASTNode** $tmp151 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp152 = *$tmp151;
org$frostlang$frostc$ASTNode** $tmp153 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp154 = *$tmp153;
// line 138
org$frostlang$frostc$Position $tmp155 = *(&local14);
return $tmp155;
block31:;
frost$core$Int64 $tmp156 = (frost$core$Int64) {15};
frost$core$Bit $tmp157 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp156);
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp159 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp160 = *$tmp159;
*(&local15) = $tmp160;
frost$core$String** $tmp161 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp162 = *$tmp161;
org$frostlang$frostc$FixedArray** $tmp163 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp164 = *$tmp163;
org$frostlang$frostc$ASTNode** $tmp165 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp166 = *$tmp165;
// line 141
org$frostlang$frostc$Position $tmp167 = *(&local15);
return $tmp167;
block33:;
frost$core$Int64 $tmp168 = (frost$core$Int64) {16};
frost$core$Bit $tmp169 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp168);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp171 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp172 = *$tmp171;
*(&local16) = $tmp172;
org$frostlang$frostc$ASTNode** $tmp173 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp174 = *$tmp173;
frost$core$String** $tmp175 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp176 = *$tmp175;
// line 144
org$frostlang$frostc$Position $tmp177 = *(&local16);
return $tmp177;
block35:;
frost$core$Int64 $tmp178 = (frost$core$Int64) {17};
frost$core$Bit $tmp179 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp178);
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp181 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp182 = *$tmp181;
*(&local17) = $tmp182;
org$frostlang$frostc$ASTNode** $tmp183 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp184 = *$tmp183;
frost$core$String** $tmp185 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp186 = *$tmp185;
org$frostlang$frostc$FixedArray** $tmp187 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp188 = *$tmp187;
// line 147
org$frostlang$frostc$Position $tmp189 = *(&local17);
return $tmp189;
block37:;
frost$core$Int64 $tmp190 = (frost$core$Int64) {18};
frost$core$Bit $tmp191 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp190);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp193 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp194 = *$tmp193;
*(&local18) = $tmp194;
org$frostlang$frostc$ASTNode** $tmp195 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp196 = *$tmp195;
org$frostlang$frostc$FixedArray** $tmp197 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp198 = *$tmp197;
org$frostlang$frostc$ASTNode** $tmp199 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp200 = *$tmp199;
// line 150
org$frostlang$frostc$Position $tmp201 = *(&local18);
return $tmp201;
block39:;
frost$core$Int64 $tmp202 = (frost$core$Int64) {19};
frost$core$Bit $tmp203 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp202);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block40; else goto block41;
block40:;
org$frostlang$frostc$FixedArray** $tmp205 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp206 = *$tmp205;
// line 153
org$frostlang$frostc$Position $tmp207 = org$frostlang$frostc$Position$init();
return $tmp207;
block41:;
frost$core$Int64 $tmp208 = (frost$core$Int64) {20};
frost$core$Bit $tmp209 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp208);
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp211 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp212 = *$tmp211;
*(&local19) = $tmp212;
frost$core$String** $tmp213 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp214 = *$tmp213;
org$frostlang$frostc$ASTNode** $tmp215 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp216 = *$tmp215;
org$frostlang$frostc$ASTNode** $tmp217 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp218 = *$tmp217;
org$frostlang$frostc$FixedArray** $tmp219 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp220 = *$tmp219;
// line 156
org$frostlang$frostc$Position $tmp221 = *(&local19);
return $tmp221;
block43:;
frost$core$Int64 $tmp222 = (frost$core$Int64) {21};
frost$core$Bit $tmp223 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp222);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp225 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp226 = *$tmp225;
*(&local20) = $tmp226;
frost$core$String** $tmp227 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp228 = *$tmp227;
org$frostlang$frostc$FixedArray** $tmp229 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp230 = *$tmp229;
// line 159
org$frostlang$frostc$Position $tmp231 = *(&local20);
return $tmp231;
block45:;
frost$core$Int64 $tmp232 = (frost$core$Int64) {22};
frost$core$Bit $tmp233 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp232);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp235 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp236 = *$tmp235;
*(&local21) = $tmp236;
frost$core$String** $tmp237 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp238 = *$tmp237;
// line 162
org$frostlang$frostc$Position $tmp239 = *(&local21);
return $tmp239;
block47:;
frost$core$Int64 $tmp240 = (frost$core$Int64) {23};
frost$core$Bit $tmp241 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp240);
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp243 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp244 = *$tmp243;
*(&local22) = $tmp244;
frost$core$String** $tmp245 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp246 = *$tmp245;
org$frostlang$frostc$FixedArray** $tmp247 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp248 = *$tmp247;
// line 165
org$frostlang$frostc$Position $tmp249 = *(&local22);
return $tmp249;
block49:;
frost$core$Int64 $tmp250 = (frost$core$Int64) {24};
frost$core$Bit $tmp251 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp250);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp253 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp254 = *$tmp253;
*(&local23) = $tmp254;
org$frostlang$frostc$ASTNode** $tmp255 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp256 = *$tmp255;
org$frostlang$frostc$FixedArray** $tmp257 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp258 = *$tmp257;
org$frostlang$frostc$ASTNode** $tmp259 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp260 = *$tmp259;
// line 168
org$frostlang$frostc$Position $tmp261 = *(&local23);
return $tmp261;
block51:;
frost$core$Int64 $tmp262 = (frost$core$Int64) {25};
frost$core$Bit $tmp263 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp262);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block52; else goto block53;
block52:;
org$frostlang$frostc$Position* $tmp265 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp266 = *$tmp265;
*(&local24) = $tmp266;
frost$core$UInt64* $tmp267 = (frost$core$UInt64*) (param0->$data + 16);
frost$core$UInt64 $tmp268 = *$tmp267;
// line 171
org$frostlang$frostc$Position $tmp269 = *(&local24);
return $tmp269;
block53:;
frost$core$Int64 $tmp270 = (frost$core$Int64) {26};
frost$core$Bit $tmp271 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp270);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block54; else goto block55;
block54:;
org$frostlang$frostc$Position* $tmp273 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp274 = *$tmp273;
*(&local25) = $tmp274;
org$frostlang$frostc$IR$Value** $tmp275 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp276 = *$tmp275;
// line 174
org$frostlang$frostc$Position $tmp277 = *(&local25);
return $tmp277;
block55:;
frost$core$Int64 $tmp278 = (frost$core$Int64) {27};
frost$core$Bit $tmp279 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp278);
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp281 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp282 = *$tmp281;
*(&local26) = $tmp282;
frost$core$String** $tmp283 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp284 = *$tmp283;
org$frostlang$frostc$FixedArray** $tmp285 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp286 = *$tmp285;
// line 177
org$frostlang$frostc$Position $tmp287 = *(&local26);
return $tmp287;
block57:;
frost$core$Int64 $tmp288 = (frost$core$Int64) {28};
frost$core$Bit $tmp289 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp288);
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp291 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp292 = *$tmp291;
*(&local27) = $tmp292;
org$frostlang$frostc$ASTNode** $tmp293 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp294 = *$tmp293;
org$frostlang$frostc$FixedArray** $tmp295 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp296 = *$tmp295;
org$frostlang$frostc$FixedArray** $tmp297 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp298 = *$tmp297;
// line 180
org$frostlang$frostc$Position $tmp299 = *(&local27);
return $tmp299;
block59:;
frost$core$Int64 $tmp300 = (frost$core$Int64) {29};
frost$core$Bit $tmp301 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp300);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block60; else goto block61;
block60:;
org$frostlang$frostc$Position* $tmp303 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp304 = *$tmp303;
*(&local28) = $tmp304;
org$frostlang$frostc$ASTNode** $tmp305 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp306 = *$tmp305;
org$frostlang$frostc$FixedArray** $tmp307 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp308 = *$tmp307;
org$frostlang$frostc$MethodDecl$Kind* $tmp309 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp310 = *$tmp309;
frost$core$String** $tmp311 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp312 = *$tmp311;
org$frostlang$frostc$FixedArray** $tmp313 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp314 = *$tmp313;
org$frostlang$frostc$FixedArray** $tmp315 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp316 = *$tmp315;
org$frostlang$frostc$ASTNode** $tmp317 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
org$frostlang$frostc$ASTNode* $tmp318 = *$tmp317;
org$frostlang$frostc$FixedArray** $tmp319 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp320 = *$tmp319;
// line 183
org$frostlang$frostc$Position $tmp321 = *(&local28);
return $tmp321;
block61:;
frost$core$Int64 $tmp322 = (frost$core$Int64) {30};
frost$core$Bit $tmp323 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp322);
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block62; else goto block63;
block62:;
org$frostlang$frostc$Position* $tmp325 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp326 = *$tmp325;
*(&local29) = $tmp326;
org$frostlang$frostc$parser$Token$Kind* $tmp327 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp328 = *$tmp327;
org$frostlang$frostc$FixedArray** $tmp329 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp330 = *$tmp329;
org$frostlang$frostc$ASTNode** $tmp331 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp332 = *$tmp331;
// line 186
org$frostlang$frostc$Position $tmp333 = *(&local29);
return $tmp333;
block63:;
frost$core$Int64 $tmp334 = (frost$core$Int64) {31};
frost$core$Bit $tmp335 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp334);
bool $tmp336 = $tmp335.value;
if ($tmp336) goto block64; else goto block65;
block64:;
org$frostlang$frostc$Position* $tmp337 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp338 = *$tmp337;
*(&local30) = $tmp338;
// line 189
org$frostlang$frostc$Position $tmp339 = *(&local30);
return $tmp339;
block65:;
frost$core$Int64 $tmp340 = (frost$core$Int64) {32};
frost$core$Bit $tmp341 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp340);
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block66; else goto block67;
block66:;
org$frostlang$frostc$Position* $tmp343 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp344 = *$tmp343;
*(&local31) = $tmp344;
org$frostlang$frostc$ASTNode** $tmp345 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp346 = *$tmp345;
// line 192
org$frostlang$frostc$Position $tmp347 = *(&local31);
return $tmp347;
block67:;
frost$core$Int64 $tmp348 = (frost$core$Int64) {33};
frost$core$Bit $tmp349 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp348);
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Position* $tmp351 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp352 = *$tmp351;
*(&local32) = $tmp352;
frost$core$String** $tmp353 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp354 = *$tmp353;
// line 195
org$frostlang$frostc$Position $tmp355 = *(&local32);
return $tmp355;
block69:;
frost$core$Int64 $tmp356 = (frost$core$Int64) {34};
frost$core$Bit $tmp357 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp356);
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block70; else goto block71;
block70:;
org$frostlang$frostc$Position* $tmp359 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp360 = *$tmp359;
*(&local33) = $tmp360;
frost$core$String** $tmp361 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp362 = *$tmp361;
org$frostlang$frostc$ASTNode** $tmp363 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp364 = *$tmp363;
// line 198
org$frostlang$frostc$Position $tmp365 = *(&local33);
return $tmp365;
block71:;
frost$core$Int64 $tmp366 = (frost$core$Int64) {35};
frost$core$Bit $tmp367 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp366);
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block72; else goto block73;
block72:;
org$frostlang$frostc$Position* $tmp369 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp370 = *$tmp369;
*(&local34) = $tmp370;
org$frostlang$frostc$ASTNode** $tmp371 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp372 = *$tmp371;
frost$core$Bit* $tmp373 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp374 = *$tmp373;
org$frostlang$frostc$ASTNode** $tmp375 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
org$frostlang$frostc$ASTNode* $tmp376 = *$tmp375;
org$frostlang$frostc$ASTNode** $tmp377 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp378 = *$tmp377;
// line 201
org$frostlang$frostc$Position $tmp379 = *(&local34);
return $tmp379;
block73:;
frost$core$Int64 $tmp380 = (frost$core$Int64) {36};
frost$core$Bit $tmp381 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp380);
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp383 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp384 = *$tmp383;
*(&local35) = $tmp384;
frost$core$Real64* $tmp385 = (frost$core$Real64*) (param0->$data + 16);
frost$core$Real64 $tmp386 = *$tmp385;
// line 204
org$frostlang$frostc$Position $tmp387 = *(&local35);
return $tmp387;
block75:;
frost$core$Int64 $tmp388 = (frost$core$Int64) {37};
frost$core$Bit $tmp389 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp388);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block76; else goto block77;
block76:;
org$frostlang$frostc$Position* $tmp391 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp392 = *$tmp391;
*(&local36) = $tmp392;
frost$core$String** $tmp393 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp394 = *$tmp393;
// line 207
org$frostlang$frostc$Position $tmp395 = *(&local36);
return $tmp395;
block77:;
frost$core$Int64 $tmp396 = (frost$core$Int64) {38};
frost$core$Bit $tmp397 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp396);
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block78; else goto block79;
block78:;
org$frostlang$frostc$Position* $tmp399 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp400 = *$tmp399;
*(&local37) = $tmp400;
org$frostlang$frostc$ASTNode** $tmp401 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp402 = *$tmp401;
// line 210
org$frostlang$frostc$Position $tmp403 = *(&local37);
return $tmp403;
block79:;
frost$core$Int64 $tmp404 = (frost$core$Int64) {39};
frost$core$Bit $tmp405 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp404);
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block80; else goto block81;
block80:;
org$frostlang$frostc$Position* $tmp407 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp408 = *$tmp407;
*(&local38) = $tmp408;
// line 213
org$frostlang$frostc$Position $tmp409 = *(&local38);
return $tmp409;
block81:;
frost$core$Int64 $tmp410 = (frost$core$Int64) {40};
frost$core$Bit $tmp411 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp410);
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block82; else goto block83;
block82:;
org$frostlang$frostc$Position* $tmp413 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp414 = *$tmp413;
*(&local39) = $tmp414;
frost$core$String** $tmp415 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp416 = *$tmp415;
// line 216
org$frostlang$frostc$Position $tmp417 = *(&local39);
return $tmp417;
block83:;
frost$core$Int64 $tmp418 = (frost$core$Int64) {41};
frost$core$Bit $tmp419 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp418);
bool $tmp420 = $tmp419.value;
if ($tmp420) goto block84; else goto block85;
block84:;
org$frostlang$frostc$Position* $tmp421 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp422 = *$tmp421;
*(&local40) = $tmp422;
// line 219
org$frostlang$frostc$Position $tmp423 = *(&local40);
return $tmp423;
block85:;
frost$core$Int64 $tmp424 = (frost$core$Int64) {43};
frost$core$Bit $tmp425 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp424);
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block86; else goto block87;
block86:;
org$frostlang$frostc$Position* $tmp427 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp428 = *$tmp427;
*(&local41) = $tmp428;
org$frostlang$frostc$FixedArray** $tmp429 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp430 = *$tmp429;
// line 222
org$frostlang$frostc$Position $tmp431 = *(&local41);
return $tmp431;
block87:;
frost$core$Int64 $tmp432 = (frost$core$Int64) {44};
frost$core$Bit $tmp433 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp432);
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block88; else goto block89;
block88:;
org$frostlang$frostc$Position* $tmp435 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp436 = *$tmp435;
*(&local42) = $tmp436;
org$frostlang$frostc$FixedArray** $tmp437 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp438 = *$tmp437;
// line 225
org$frostlang$frostc$Position $tmp439 = *(&local42);
return $tmp439;
block89:;
frost$core$Int64 $tmp440 = (frost$core$Int64) {45};
frost$core$Bit $tmp441 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp440);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block90; else goto block91;
block90:;
org$frostlang$frostc$Position* $tmp443 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp444 = *$tmp443;
*(&local43) = $tmp444;
frost$core$String** $tmp445 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp446 = *$tmp445;
// line 228
org$frostlang$frostc$Position $tmp447 = *(&local43);
return $tmp447;
block91:;
frost$core$Int64 $tmp448 = (frost$core$Int64) {47};
frost$core$Bit $tmp449 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp448);
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block92; else goto block93;
block92:;
org$frostlang$frostc$Position* $tmp451 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp452 = *$tmp451;
*(&local44) = $tmp452;
frost$core$String** $tmp453 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp454 = *$tmp453;
org$frostlang$frostc$ASTNode** $tmp455 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp456 = *$tmp455;
// line 231
org$frostlang$frostc$Position $tmp457 = *(&local44);
return $tmp457;
block93:;
frost$core$Int64 $tmp458 = (frost$core$Int64) {46};
frost$core$Bit $tmp459 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp458);
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block94; else goto block95;
block94:;
org$frostlang$frostc$Position* $tmp461 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp462 = *$tmp461;
*(&local45) = $tmp462;
org$frostlang$frostc$FixedArray** $tmp463 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp464 = *$tmp463;
org$frostlang$frostc$ASTNode** $tmp465 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp466 = *$tmp465;
// line 234
org$frostlang$frostc$Position $tmp467 = *(&local45);
return $tmp467;
block95:;
frost$core$Int64 $tmp468 = (frost$core$Int64) {48};
frost$core$Bit $tmp469 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp468);
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block96; else goto block97;
block96:;
org$frostlang$frostc$Position* $tmp471 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp472 = *$tmp471;
*(&local46) = $tmp472;
org$frostlang$frostc$expression$Unary$Operator* $tmp473 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 16);
org$frostlang$frostc$expression$Unary$Operator $tmp474 = *$tmp473;
org$frostlang$frostc$ASTNode** $tmp475 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp476 = *$tmp475;
// line 237
org$frostlang$frostc$Position $tmp477 = *(&local46);
return $tmp477;
block97:;
frost$core$Int64 $tmp478 = (frost$core$Int64) {49};
frost$core$Bit $tmp479 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp478);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp481 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp482 = *$tmp481;
*(&local47) = $tmp482;
org$frostlang$frostc$ASTNode** $tmp483 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp484 = *$tmp483;
// line 240
org$frostlang$frostc$Position $tmp485 = *(&local47);
return $tmp485;
block99:;
frost$core$Int64 $tmp486 = (frost$core$Int64) {50};
frost$core$Bit $tmp487 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp486);
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block100; else goto block101;
block100:;
org$frostlang$frostc$Position* $tmp489 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp490 = *$tmp489;
*(&local48) = $tmp490;
org$frostlang$frostc$FixedArray** $tmp491 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp492 = *$tmp491;
org$frostlang$frostc$ASTNode** $tmp493 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp494 = *$tmp493;
// line 243
org$frostlang$frostc$Position $tmp495 = *(&local48);
return $tmp495;
block101:;
frost$core$Int64 $tmp496 = (frost$core$Int64) {51};
frost$core$Bit $tmp497 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp496);
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block102; else goto block103;
block102:;
org$frostlang$frostc$Position* $tmp499 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp500 = *$tmp499;
*(&local49) = $tmp500;
frost$core$String** $tmp501 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp502 = *$tmp501;
// line 246
org$frostlang$frostc$Position $tmp503 = *(&local49);
return $tmp503;
block103:;
frost$core$Int64 $tmp504 = (frost$core$Int64) {42};
frost$core$Bit $tmp505 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp504);
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block104; else goto block105;
block104:;
org$frostlang$frostc$Position* $tmp507 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp508 = *$tmp507;
*(&local50) = $tmp508;
org$frostlang$frostc$FixedArray** $tmp509 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp510 = *$tmp509;
org$frostlang$frostc$ASTNode** $tmp511 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp512 = *$tmp511;
org$frostlang$frostc$FixedArray** $tmp513 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp514 = *$tmp513;
// line 249
org$frostlang$frostc$Position $tmp515 = *(&local50);
return $tmp515;
block105:;
frost$core$Int64 $tmp516 = (frost$core$Int64) {52};
frost$core$Bit $tmp517 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp516);
bool $tmp518 = $tmp517.value;
if ($tmp518) goto block106; else goto block107;
block106:;
org$frostlang$frostc$Position* $tmp519 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp520 = *$tmp519;
*(&local51) = $tmp520;
org$frostlang$frostc$Variable$Kind* $tmp521 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp522 = *$tmp521;
org$frostlang$frostc$FixedArray** $tmp523 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp524 = *$tmp523;
// line 252
org$frostlang$frostc$Position $tmp525 = *(&local51);
return $tmp525;
block107:;
frost$core$Int64 $tmp526 = (frost$core$Int64) {53};
frost$core$Bit $tmp527 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp526);
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block108; else goto block109;
block108:;
org$frostlang$frostc$Position* $tmp529 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp530 = *$tmp529;
*(&local52) = $tmp530;
org$frostlang$frostc$FixedArray** $tmp531 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp532 = *$tmp531;
org$frostlang$frostc$FixedArray** $tmp533 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp534 = *$tmp533;
// line 255
org$frostlang$frostc$Position $tmp535 = *(&local52);
return $tmp535;
block109:;
frost$core$Int64 $tmp536 = (frost$core$Int64) {54};
frost$core$Bit $tmp537 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp536);
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block110; else goto block111;
block110:;
org$frostlang$frostc$Position* $tmp539 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp540 = *$tmp539;
*(&local53) = $tmp540;
frost$core$String** $tmp541 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp542 = *$tmp541;
org$frostlang$frostc$ASTNode** $tmp543 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp544 = *$tmp543;
org$frostlang$frostc$FixedArray** $tmp545 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp546 = *$tmp545;
// line 258
org$frostlang$frostc$Position $tmp547 = *(&local53);
return $tmp547;
block111:;
// line 261
frost$core$Int64 $tmp548 = (frost$core$Int64) {261};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s549, $tmp548);
abort(); // unreachable
block1:;
goto block112;
block112:;

}
frost$core$String* org$frostlang$frostc$ASTNode$get_asString$R$frost$core$String(org$frostlang$frostc$ASTNode* param0) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
org$frostlang$frostc$expression$Binary$Operator local7;
org$frostlang$frostc$ASTNode* local8 = NULL;
frost$core$Bit local9;
org$frostlang$frostc$FixedArray* local10 = NULL;
frost$core$MutableString* local11 = NULL;
org$frostlang$frostc$ASTNode* local12 = NULL;
frost$core$String* local13 = NULL;
org$frostlang$frostc$ASTNode* local14 = NULL;
org$frostlang$frostc$FixedArray* local15 = NULL;
org$frostlang$frostc$ASTNode* local16 = NULL;
frost$core$String* local17 = NULL;
org$frostlang$frostc$FixedArray* local18 = NULL;
frost$core$MutableString* local19 = NULL;
org$frostlang$frostc$ASTNode* local20 = NULL;
org$frostlang$frostc$ChoiceCase* local21 = NULL;
frost$core$Int64 local22;
org$frostlang$frostc$ASTNode* local23 = NULL;
org$frostlang$frostc$FixedArray* local24 = NULL;
org$frostlang$frostc$ClassDecl$Kind local25;
frost$core$String* local26 = NULL;
org$frostlang$frostc$FixedArray* local27 = NULL;
org$frostlang$frostc$FixedArray* local28 = NULL;
org$frostlang$frostc$FixedArray* local29 = NULL;
frost$core$MutableString* local30 = NULL;
org$frostlang$frostc$ASTNode* local31 = NULL;
org$frostlang$frostc$ASTNode* local32 = NULL;
frost$core$String* local33 = NULL;
org$frostlang$frostc$ASTNode* local34 = NULL;
org$frostlang$frostc$ASTNode* local35 = NULL;
frost$core$String* local36 = NULL;
org$frostlang$frostc$FixedArray* local37 = NULL;
org$frostlang$frostc$ASTNode* local38 = NULL;
frost$core$MutableString* local39 = NULL;
org$frostlang$frostc$ASTNode* local40 = NULL;
org$frostlang$frostc$ASTNode* local41 = NULL;
frost$core$String* local42 = NULL;
org$frostlang$frostc$ASTNode* local43 = NULL;
frost$core$String* local44 = NULL;
org$frostlang$frostc$FixedArray* local45 = NULL;
org$frostlang$frostc$ASTNode* local46 = NULL;
org$frostlang$frostc$FixedArray* local47 = NULL;
org$frostlang$frostc$ASTNode* local48 = NULL;
frost$core$MutableString* local49 = NULL;
org$frostlang$frostc$ASTNode* local50 = NULL;
org$frostlang$frostc$FixedArray* local51 = NULL;
frost$core$MutableString* local52 = NULL;
org$frostlang$frostc$ASTNode* local53 = NULL;
frost$core$String* local54 = NULL;
org$frostlang$frostc$ASTNode* local55 = NULL;
org$frostlang$frostc$ASTNode* local56 = NULL;
org$frostlang$frostc$FixedArray* local57 = NULL;
frost$core$MutableString* local58 = NULL;
org$frostlang$frostc$ASTNode* local59 = NULL;
frost$core$String* local60 = NULL;
org$frostlang$frostc$FixedArray* local61 = NULL;
frost$core$String* local62 = NULL;
frost$core$String* local63 = NULL;
org$frostlang$frostc$FixedArray* local64 = NULL;
org$frostlang$frostc$ASTNode* local65 = NULL;
org$frostlang$frostc$FixedArray* local66 = NULL;
org$frostlang$frostc$ASTNode* local67 = NULL;
frost$core$MutableString* local68 = NULL;
org$frostlang$frostc$ASTNode* local69 = NULL;
frost$core$UInt64 local70;
org$frostlang$frostc$IR$Value* local71 = NULL;
frost$core$String* local72 = NULL;
org$frostlang$frostc$FixedArray* local73 = NULL;
frost$core$MutableString* local74 = NULL;
org$frostlang$frostc$ASTNode* local75 = NULL;
org$frostlang$frostc$ASTNode* local76 = NULL;
org$frostlang$frostc$FixedArray* local77 = NULL;
org$frostlang$frostc$FixedArray* local78 = NULL;
frost$core$MutableString* local79 = NULL;
org$frostlang$frostc$ASTNode* local80 = NULL;
org$frostlang$frostc$ASTNode* local81 = NULL;
org$frostlang$frostc$FixedArray* local82 = NULL;
org$frostlang$frostc$MethodDecl$Kind local83;
frost$core$String* local84 = NULL;
org$frostlang$frostc$FixedArray* local85 = NULL;
org$frostlang$frostc$FixedArray* local86 = NULL;
org$frostlang$frostc$ASTNode* local87 = NULL;
org$frostlang$frostc$FixedArray* local88 = NULL;
frost$core$MutableString* local89 = NULL;
org$frostlang$frostc$ASTNode* local90 = NULL;
org$frostlang$frostc$ASTNode* local91 = NULL;
org$frostlang$frostc$parser$Token$Kind local92;
org$frostlang$frostc$FixedArray* local93 = NULL;
org$frostlang$frostc$ASTNode* local94 = NULL;
frost$core$String* local95 = NULL;
frost$core$String* local96 = NULL;
org$frostlang$frostc$ASTNode* local97 = NULL;
frost$core$String* local98 = NULL;
frost$core$String* local99 = NULL;
org$frostlang$frostc$ASTNode* local100 = NULL;
org$frostlang$frostc$ASTNode* local101 = NULL;
frost$core$Bit local102;
org$frostlang$frostc$ASTNode* local103 = NULL;
org$frostlang$frostc$ASTNode* local104 = NULL;
frost$core$MutableString* local105 = NULL;
frost$core$Real64 local106;
frost$core$String* local107 = NULL;
org$frostlang$frostc$ASTNode* local108 = NULL;
frost$core$String* local109 = NULL;
org$frostlang$frostc$FixedArray* local110 = NULL;
org$frostlang$frostc$FixedArray* local111 = NULL;
org$frostlang$frostc$FixedArray* local112 = NULL;
org$frostlang$frostc$ASTNode* local113 = NULL;
org$frostlang$frostc$FixedArray* local114 = NULL;
frost$core$MutableString* local115 = NULL;
frost$core$String* local116 = NULL;
frost$core$String* local117 = NULL;
org$frostlang$frostc$ASTNode* local118 = NULL;
org$frostlang$frostc$FixedArray* local119 = NULL;
org$frostlang$frostc$ASTNode* local120 = NULL;
org$frostlang$frostc$expression$Unary$Operator local121;
org$frostlang$frostc$ASTNode* local122 = NULL;
org$frostlang$frostc$ASTNode* local123 = NULL;
org$frostlang$frostc$FixedArray* local124 = NULL;
org$frostlang$frostc$ASTNode* local125 = NULL;
frost$core$String* local126 = NULL;
org$frostlang$frostc$Variable$Kind local127;
org$frostlang$frostc$FixedArray* local128 = NULL;
frost$core$MutableString* local129 = NULL;
org$frostlang$frostc$FixedArray* local130 = NULL;
org$frostlang$frostc$FixedArray* local131 = NULL;
frost$core$MutableString* local132 = NULL;
frost$core$String* local133 = NULL;
org$frostlang$frostc$ASTNode* local134 = NULL;
org$frostlang$frostc$ASTNode* local135 = NULL;
frost$core$String* local136 = NULL;
org$frostlang$frostc$ASTNode* local137 = NULL;
org$frostlang$frostc$FixedArray* local138 = NULL;
frost$core$MutableString* local139 = NULL;
org$frostlang$frostc$ASTNode* local140 = NULL;
// line 268
frost$core$Int64* $tmp550 = &param0->$rawValue;
frost$core$Int64 $tmp551 = *$tmp550;
frost$core$Int64 $tmp552 = (frost$core$Int64) {0};
frost$core$Bit $tmp553 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp552);
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp555 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp556 = *$tmp555;
frost$core$String** $tmp557 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp558 = *$tmp557;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
frost$core$String* $tmp559 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
*(&local0) = $tmp558;
frost$core$String** $tmp560 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp561 = *$tmp560;
org$frostlang$frostc$ASTNode** $tmp562 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp563 = *$tmp562;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
org$frostlang$frostc$ASTNode* $tmp564 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
*(&local1) = $tmp563;
// line 270
org$frostlang$frostc$ASTNode* $tmp565 = *(&local1);
frost$core$Bit $tmp566 = frost$core$Bit$init$builtin_bit($tmp565 != NULL);
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block4; else goto block5;
block4:;
// line 271
frost$core$String* $tmp568 = *(&local0);
frost$core$String* $tmp569 = frost$core$String$get_asString$R$frost$core$String($tmp568);
frost$core$String* $tmp570 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp569, &$s571);
org$frostlang$frostc$ASTNode* $tmp572 = *(&local1);
frost$core$String* $tmp573 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp570, ((frost$core$Object*) $tmp572));
frost$core$String* $tmp574 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp573, &$s575);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
org$frostlang$frostc$ASTNode* $tmp576 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp577 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
*(&local0) = ((frost$core$String*) NULL);
return $tmp574;
block5:;
// line 273
frost$core$String* $tmp578 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
org$frostlang$frostc$ASTNode* $tmp579 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp580 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
*(&local0) = ((frost$core$String*) NULL);
return $tmp578;
block3:;
frost$core$Int64 $tmp581 = (frost$core$Int64) {1};
frost$core$Bit $tmp582 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp581);
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp584 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp585 = *$tmp584;
org$frostlang$frostc$FixedArray** $tmp586 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp587 = *$tmp586;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
org$frostlang$frostc$FixedArray* $tmp588 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
*(&local2) = $tmp587;
// line 276
org$frostlang$frostc$FixedArray* $tmp589 = *(&local2);
$fn591 $tmp590 = ($fn591) ((frost$core$Object*) $tmp589)->$class->vtable[0];
frost$core$String* $tmp592 = $tmp590(((frost$core$Object*) $tmp589));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
org$frostlang$frostc$FixedArray* $tmp593 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp592;
block7:;
frost$core$Int64 $tmp594 = (frost$core$Int64) {2};
frost$core$Bit $tmp595 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp594);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp597 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp598 = *$tmp597;
org$frostlang$frostc$ASTNode** $tmp599 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp600 = *$tmp599;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
org$frostlang$frostc$ASTNode* $tmp601 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
*(&local3) = $tmp600;
org$frostlang$frostc$ASTNode** $tmp602 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp603 = *$tmp602;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
org$frostlang$frostc$ASTNode* $tmp604 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
*(&local4) = $tmp603;
// line 279
org$frostlang$frostc$ASTNode* $tmp605 = *(&local4);
frost$core$Bit $tmp606 = frost$core$Bit$init$builtin_bit($tmp605 == NULL);
bool $tmp607 = $tmp606.value;
if ($tmp607) goto block10; else goto block11;
block10:;
// line 280
org$frostlang$frostc$ASTNode* $tmp608 = *(&local3);
frost$core$String* $tmp609 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s610, ((frost$core$Object*) $tmp608));
frost$core$String* $tmp611 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp609, &$s612);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
org$frostlang$frostc$ASTNode* $tmp613 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp614 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp611;
block11:;
// line 282
org$frostlang$frostc$ASTNode* $tmp615 = *(&local3);
frost$core$String* $tmp616 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s617, ((frost$core$Object*) $tmp615));
frost$core$String* $tmp618 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp616, &$s619);
org$frostlang$frostc$ASTNode* $tmp620 = *(&local4);
frost$core$String* $tmp621 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp618, ((frost$core$Object*) $tmp620));
frost$core$String* $tmp622 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp621, &$s623);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
org$frostlang$frostc$ASTNode* $tmp624 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp625 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp622;
block9:;
frost$core$Int64 $tmp626 = (frost$core$Int64) {3};
frost$core$Bit $tmp627 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp626);
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp629 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp630 = *$tmp629;
org$frostlang$frostc$ASTNode** $tmp631 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp632 = *$tmp631;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
org$frostlang$frostc$ASTNode* $tmp633 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
*(&local5) = $tmp632;
// line 285
org$frostlang$frostc$ASTNode* $tmp634 = *(&local5);
frost$core$String* $tmp635 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s636, ((frost$core$Object*) $tmp634));
frost$core$String* $tmp637 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp635, &$s638);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
org$frostlang$frostc$ASTNode* $tmp639 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp637;
block13:;
frost$core$Int64 $tmp640 = (frost$core$Int64) {4};
frost$core$Bit $tmp641 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp640);
bool $tmp642 = $tmp641.value;
if ($tmp642) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp643 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp644 = *$tmp643;
// line 288
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s645));
return &$s646;
block15:;
frost$core$Int64 $tmp647 = (frost$core$Int64) {5};
frost$core$Bit $tmp648 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp647);
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp650 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp651 = *$tmp650;
org$frostlang$frostc$ASTNode** $tmp652 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp653 = *$tmp652;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
org$frostlang$frostc$ASTNode* $tmp654 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
*(&local6) = $tmp653;
org$frostlang$frostc$expression$Binary$Operator* $tmp655 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp656 = *$tmp655;
*(&local7) = $tmp656;
org$frostlang$frostc$ASTNode** $tmp657 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp658 = *$tmp657;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
org$frostlang$frostc$ASTNode* $tmp659 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
*(&local8) = $tmp658;
// line 291
org$frostlang$frostc$expression$Binary$Operator $tmp660 = *(&local7);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp661;
$tmp661 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp661->value = $tmp660;
frost$core$Int64 $tmp662 = (frost$core$Int64) {20};
org$frostlang$frostc$expression$Binary$Operator $tmp663 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp662);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp664;
$tmp664 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp664->value = $tmp663;
ITable* $tmp665 = ((frost$core$Equatable*) $tmp661)->$class->itable;
while ($tmp665->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp665 = $tmp665->next;
}
$fn667 $tmp666 = $tmp665->methods[0];
frost$core$Bit $tmp668 = $tmp666(((frost$core$Equatable*) $tmp661), ((frost$core$Equatable*) $tmp664));
bool $tmp669 = $tmp668.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp664)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp661)));
if ($tmp669) goto block18; else goto block19;
block18:;
// line 292
org$frostlang$frostc$ASTNode* $tmp670 = *(&local6);
$fn672 $tmp671 = ($fn672) $tmp670->$class->vtable[0];
frost$core$String* $tmp673 = $tmp671($tmp670);
frost$core$String* $tmp674 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp673, &$s675);
org$frostlang$frostc$ASTNode* $tmp676 = *(&local8);
frost$core$String* $tmp677 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp674, ((frost$core$Object*) $tmp676));
frost$core$String* $tmp678 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp677, &$s679);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
org$frostlang$frostc$ASTNode* $tmp680 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp681 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp678;
block19:;
// line 294
org$frostlang$frostc$ASTNode* $tmp682 = *(&local6);
frost$core$String* $tmp683 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s684, ((frost$core$Object*) $tmp682));
frost$core$String* $tmp685 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp683, &$s686);
org$frostlang$frostc$expression$Binary$Operator $tmp687 = *(&local7);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp688;
$tmp688 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp688->value = $tmp687;
frost$core$String* $tmp689 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp685, ((frost$core$Object*) $tmp688));
frost$core$String* $tmp690 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp689, &$s691);
org$frostlang$frostc$ASTNode* $tmp692 = *(&local8);
frost$core$String* $tmp693 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp690, ((frost$core$Object*) $tmp692));
frost$core$String* $tmp694 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp693, &$s695);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
org$frostlang$frostc$ASTNode* $tmp696 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp697 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp694;
block17:;
frost$core$Int64 $tmp698 = (frost$core$Int64) {6};
frost$core$Bit $tmp699 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp698);
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp701 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp702 = *$tmp701;
frost$core$Bit* $tmp703 = (frost$core$Bit*) (param0->$data + 16);
frost$core$Bit $tmp704 = *$tmp703;
*(&local9) = $tmp704;
// line 297
frost$core$Bit $tmp705 = *(&local9);
frost$core$Bit$wrapper* $tmp706;
$tmp706 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp706->value = $tmp705;
$fn708 $tmp707 = ($fn708) ((frost$core$Object*) $tmp706)->$class->vtable[0];
frost$core$String* $tmp709 = $tmp707(((frost$core$Object*) $tmp706));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
return $tmp709;
block21:;
frost$core$Int64 $tmp710 = (frost$core$Int64) {7};
frost$core$Bit $tmp711 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp710);
bool $tmp712 = $tmp711.value;
if ($tmp712) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp713 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp714 = *$tmp713;
org$frostlang$frostc$FixedArray** $tmp715 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp716 = *$tmp715;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
org$frostlang$frostc$FixedArray* $tmp717 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
*(&local10) = $tmp716;
// line 300
frost$core$MutableString* $tmp718 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp718, &$s719);
*(&local11) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
frost$core$MutableString* $tmp720 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
*(&local11) = $tmp718;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
// line 301
org$frostlang$frostc$FixedArray* $tmp721 = *(&local10);
ITable* $tmp722 = ((frost$collections$Iterable*) $tmp721)->$class->itable;
while ($tmp722->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp722 = $tmp722->next;
}
$fn724 $tmp723 = $tmp722->methods[0];
frost$collections$Iterator* $tmp725 = $tmp723(((frost$collections$Iterable*) $tmp721));
goto block24;
block24:;
ITable* $tmp726 = $tmp725->$class->itable;
while ($tmp726->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp726 = $tmp726->next;
}
$fn728 $tmp727 = $tmp726->methods[0];
frost$core$Bit $tmp729 = $tmp727($tmp725);
bool $tmp730 = $tmp729.value;
if ($tmp730) goto block26; else goto block25;
block25:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp731 = $tmp725->$class->itable;
while ($tmp731->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp731 = $tmp731->next;
}
$fn733 $tmp732 = $tmp731->methods[1];
frost$core$Object* $tmp734 = $tmp732($tmp725);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp734)));
org$frostlang$frostc$ASTNode* $tmp735 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp734);
// line 302
frost$core$MutableString* $tmp736 = *(&local11);
org$frostlang$frostc$ASTNode* $tmp737 = *(&local12);
frost$core$String* $tmp738 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp737), &$s739);
frost$core$MutableString$append$frost$core$String($tmp736, $tmp738);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
frost$core$Frost$unref$frost$core$Object$Q($tmp734);
org$frostlang$frostc$ASTNode* $tmp740 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block24;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
// line 304
frost$core$MutableString* $tmp741 = *(&local11);
frost$core$MutableString$append$frost$core$String($tmp741, &$s742);
// line 305
frost$core$MutableString* $tmp743 = *(&local11);
frost$core$String* $tmp744 = frost$core$MutableString$finish$R$frost$core$String($tmp743);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
frost$core$MutableString* $tmp745 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
*(&local11) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp746 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp744;
block23:;
frost$core$Int64 $tmp747 = (frost$core$Int64) {8};
frost$core$Bit $tmp748 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp747);
bool $tmp749 = $tmp748.value;
if ($tmp749) goto block27; else goto block28;
block27:;
org$frostlang$frostc$Position* $tmp750 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp751 = *$tmp750;
frost$core$String** $tmp752 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp753 = *$tmp752;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$String* $tmp754 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
*(&local13) = $tmp753;
// line 308
frost$core$String* $tmp755 = *(&local13);
frost$core$Bit $tmp756 = frost$core$Bit$init$builtin_bit($tmp755 != NULL);
bool $tmp757 = $tmp756.value;
if ($tmp757) goto block29; else goto block30;
block29:;
// line 309
frost$core$String* $tmp758 = *(&local13);
frost$core$String* $tmp759 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s760, $tmp758);
frost$core$String* $tmp761 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp759, &$s762);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$core$String* $tmp763 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
*(&local13) = ((frost$core$String*) NULL);
return $tmp761;
block30:;
// line 311
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s764));
frost$core$String* $tmp765 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
*(&local13) = ((frost$core$String*) NULL);
return &$s766;
block28:;
frost$core$Int64 $tmp767 = (frost$core$Int64) {9};
frost$core$Bit $tmp768 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp767);
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block31; else goto block32;
block31:;
org$frostlang$frostc$Position* $tmp770 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp771 = *$tmp770;
org$frostlang$frostc$ASTNode** $tmp772 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp773 = *$tmp772;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
org$frostlang$frostc$ASTNode* $tmp774 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
*(&local14) = $tmp773;
org$frostlang$frostc$FixedArray** $tmp775 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp776 = *$tmp775;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
org$frostlang$frostc$FixedArray* $tmp777 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
*(&local15) = $tmp776;
// line 314
org$frostlang$frostc$ASTNode* $tmp778 = *(&local14);
$fn780 $tmp779 = ($fn780) $tmp778->$class->vtable[0];
frost$core$String* $tmp781 = $tmp779($tmp778);
frost$core$String* $tmp782 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp781, &$s783);
org$frostlang$frostc$FixedArray* $tmp784 = *(&local15);
ITable* $tmp785 = ((frost$collections$CollectionView*) $tmp784)->$class->itable;
while ($tmp785->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp785 = $tmp785->next;
}
$fn787 $tmp786 = $tmp785->methods[1];
frost$core$String* $tmp788 = $tmp786(((frost$collections$CollectionView*) $tmp784));
frost$core$String* $tmp789 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp782, $tmp788);
frost$core$String* $tmp790 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp789, &$s791);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
org$frostlang$frostc$FixedArray* $tmp792 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp793 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp790;
block32:;
frost$core$Int64 $tmp794 = (frost$core$Int64) {10};
frost$core$Bit $tmp795 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp794);
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Position* $tmp797 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp798 = *$tmp797;
org$frostlang$frostc$ASTNode** $tmp799 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp800 = *$tmp799;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
org$frostlang$frostc$ASTNode* $tmp801 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
*(&local16) = $tmp800;
frost$core$String** $tmp802 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp803 = *$tmp802;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
frost$core$String* $tmp804 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
*(&local17) = $tmp803;
org$frostlang$frostc$FixedArray** $tmp805 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp806 = *$tmp805;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
org$frostlang$frostc$FixedArray* $tmp807 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
*(&local18) = $tmp806;
// line 317
frost$core$MutableString* $tmp808 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp808);
*(&local19) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
frost$core$MutableString* $tmp809 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
*(&local19) = $tmp808;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
// line 318
org$frostlang$frostc$ASTNode* $tmp810 = *(&local16);
frost$core$Bit $tmp811 = frost$core$Bit$init$builtin_bit($tmp810 != NULL);
bool $tmp812 = $tmp811.value;
if ($tmp812) goto block35; else goto block36;
block35:;
// line 319
frost$core$MutableString* $tmp813 = *(&local19);
org$frostlang$frostc$ASTNode* $tmp814 = *(&local16);
frost$core$String* $tmp815 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp814), &$s816);
frost$core$MutableString$append$frost$core$String($tmp813, $tmp815);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
goto block36;
block36:;
// line 321
frost$core$MutableString* $tmp817 = *(&local19);
frost$core$String* $tmp818 = *(&local17);
frost$core$String* $tmp819 = frost$core$String$get_asString$R$frost$core$String($tmp818);
frost$core$String* $tmp820 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp819, &$s821);
org$frostlang$frostc$FixedArray* $tmp822 = *(&local18);
ITable* $tmp823 = ((frost$collections$CollectionView*) $tmp822)->$class->itable;
while ($tmp823->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp823 = $tmp823->next;
}
$fn825 $tmp824 = $tmp823->methods[1];
frost$core$String* $tmp826 = $tmp824(((frost$collections$CollectionView*) $tmp822));
frost$core$String* $tmp827 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp820, $tmp826);
frost$core$String* $tmp828 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp827, &$s829);
frost$core$MutableString$append$frost$core$String($tmp817, $tmp828);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
// line 322
frost$core$MutableString* $tmp830 = *(&local19);
frost$core$String* $tmp831 = frost$core$MutableString$finish$R$frost$core$String($tmp830);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$MutableString* $tmp832 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
*(&local19) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp833 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp834 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp835 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp831;
block34:;
frost$core$Int64 $tmp836 = (frost$core$Int64) {11};
frost$core$Bit $tmp837 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp836);
bool $tmp838 = $tmp837.value;
if ($tmp838) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Position* $tmp839 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp840 = *$tmp839;
org$frostlang$frostc$ASTNode** $tmp841 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp842 = *$tmp841;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
org$frostlang$frostc$ASTNode* $tmp843 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
*(&local20) = $tmp842;
org$frostlang$frostc$ChoiceCase** $tmp844 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp845 = *$tmp844;
*(&local21) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
org$frostlang$frostc$ChoiceCase* $tmp846 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
*(&local21) = $tmp845;
frost$core$Int64* $tmp847 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp848 = *$tmp847;
*(&local22) = $tmp848;
// line 325
org$frostlang$frostc$ASTNode* $tmp849 = *(&local20);
$fn851 $tmp850 = ($fn851) $tmp849->$class->vtable[0];
frost$core$String* $tmp852 = $tmp850($tmp849);
frost$core$String* $tmp853 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp852, &$s854);
org$frostlang$frostc$ChoiceCase* $tmp855 = *(&local21);
frost$core$String* $tmp856 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp853, ((frost$core$Object*) $tmp855));
frost$core$String* $tmp857 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp856, &$s858);
frost$core$Int64 $tmp859 = *(&local22);
frost$core$Int64$wrapper* $tmp860;
$tmp860 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp860->value = $tmp859;
frost$core$String* $tmp861 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp857, ((frost$core$Object*) $tmp860));
frost$core$String* $tmp862 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp861, &$s863);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
org$frostlang$frostc$ChoiceCase* $tmp864 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
*(&local21) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp865 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp862;
block38:;
frost$core$Int64 $tmp866 = (frost$core$Int64) {12};
frost$core$Bit $tmp867 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp866);
bool $tmp868 = $tmp867.value;
if ($tmp868) goto block39; else goto block40;
block39:;
org$frostlang$frostc$Position* $tmp869 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp870 = *$tmp869;
org$frostlang$frostc$ASTNode** $tmp871 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp872 = *$tmp871;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
org$frostlang$frostc$ASTNode* $tmp873 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local23) = $tmp872;
org$frostlang$frostc$FixedArray** $tmp874 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp875 = *$tmp874;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
org$frostlang$frostc$FixedArray* $tmp876 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
*(&local24) = $tmp875;
org$frostlang$frostc$ClassDecl$Kind* $tmp877 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp878 = *$tmp877;
*(&local25) = $tmp878;
frost$core$String** $tmp879 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp880 = *$tmp879;
*(&local26) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
frost$core$String* $tmp881 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
*(&local26) = $tmp880;
org$frostlang$frostc$FixedArray** $tmp882 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp883 = *$tmp882;
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
org$frostlang$frostc$FixedArray* $tmp884 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
*(&local27) = $tmp883;
org$frostlang$frostc$FixedArray** $tmp885 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp886 = *$tmp885;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
org$frostlang$frostc$FixedArray* $tmp887 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
*(&local28) = $tmp886;
org$frostlang$frostc$FixedArray** $tmp888 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp889 = *$tmp888;
*(&local29) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
org$frostlang$frostc$FixedArray* $tmp890 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
*(&local29) = $tmp889;
// line 328
frost$core$MutableString* $tmp891 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp891);
*(&local30) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$MutableString* $tmp892 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
*(&local30) = $tmp891;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
// line 329
org$frostlang$frostc$ASTNode* $tmp893 = *(&local23);
frost$core$Bit $tmp894 = frost$core$Bit$init$builtin_bit($tmp893 != NULL);
bool $tmp895 = $tmp894.value;
if ($tmp895) goto block41; else goto block42;
block41:;
// line 330
frost$core$MutableString* $tmp896 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp897 = *(&local23);
frost$core$String* $tmp898 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp897), &$s899);
frost$core$MutableString$append$frost$core$String($tmp896, $tmp898);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
goto block42;
block42:;
// line 332
org$frostlang$frostc$FixedArray* $tmp900 = *(&local24);
ITable* $tmp901 = ((frost$collections$Iterable*) $tmp900)->$class->itable;
while ($tmp901->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp901 = $tmp901->next;
}
$fn903 $tmp902 = $tmp901->methods[0];
frost$collections$Iterator* $tmp904 = $tmp902(((frost$collections$Iterable*) $tmp900));
goto block43;
block43:;
ITable* $tmp905 = $tmp904->$class->itable;
while ($tmp905->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp905 = $tmp905->next;
}
$fn907 $tmp906 = $tmp905->methods[0];
frost$core$Bit $tmp908 = $tmp906($tmp904);
bool $tmp909 = $tmp908.value;
if ($tmp909) goto block45; else goto block44;
block44:;
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp910 = $tmp904->$class->itable;
while ($tmp910->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp910 = $tmp910->next;
}
$fn912 $tmp911 = $tmp910->methods[1];
frost$core$Object* $tmp913 = $tmp911($tmp904);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp913)));
org$frostlang$frostc$ASTNode* $tmp914 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
*(&local31) = ((org$frostlang$frostc$ASTNode*) $tmp913);
// line 333
frost$core$MutableString* $tmp915 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp916 = *(&local31);
frost$core$String* $tmp917 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp916), &$s918);
frost$core$MutableString$append$frost$core$String($tmp915, $tmp917);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
frost$core$Frost$unref$frost$core$Object$Q($tmp913);
org$frostlang$frostc$ASTNode* $tmp919 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block43;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
// line 335
org$frostlang$frostc$ClassDecl$Kind $tmp920 = *(&local25);
frost$core$Int64 $tmp921 = $tmp920.$rawValue;
frost$core$Int64 $tmp922 = (frost$core$Int64) {0};
frost$core$Bit $tmp923 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp921, $tmp922);
bool $tmp924 = $tmp923.value;
if ($tmp924) goto block47; else goto block48;
block47:;
// line 336
frost$core$MutableString* $tmp925 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp925, &$s926);
goto block46;
block48:;
frost$core$Int64 $tmp927 = (frost$core$Int64) {1};
frost$core$Bit $tmp928 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp921, $tmp927);
bool $tmp929 = $tmp928.value;
if ($tmp929) goto block49; else goto block50;
block49:;
// line 337
frost$core$MutableString* $tmp930 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp930, &$s931);
goto block46;
block50:;
frost$core$Int64 $tmp932 = (frost$core$Int64) {2};
frost$core$Bit $tmp933 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp921, $tmp932);
bool $tmp934 = $tmp933.value;
if ($tmp934) goto block51; else goto block46;
block51:;
// line 338
frost$core$MutableString* $tmp935 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp935, &$s936);
goto block46;
block46:;
// line 340
frost$core$MutableString* $tmp937 = *(&local30);
frost$core$String* $tmp938 = *(&local26);
frost$core$MutableString$append$frost$core$String($tmp937, $tmp938);
// line 341
org$frostlang$frostc$FixedArray* $tmp939 = *(&local27);
frost$core$Bit $tmp940 = frost$core$Bit$init$builtin_bit($tmp939 != NULL);
bool $tmp941 = $tmp940.value;
if ($tmp941) goto block52; else goto block53;
block52:;
// line 342
frost$core$MutableString* $tmp942 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp943 = *(&local27);
ITable* $tmp944 = ((frost$collections$CollectionView*) $tmp943)->$class->itable;
while ($tmp944->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp944 = $tmp944->next;
}
$fn946 $tmp945 = $tmp944->methods[1];
frost$core$String* $tmp947 = $tmp945(((frost$collections$CollectionView*) $tmp943));
frost$core$String* $tmp948 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s949, $tmp947);
frost$core$String* $tmp950 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp948, &$s951);
frost$core$MutableString$append$frost$core$String($tmp942, $tmp950);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
goto block53;
block53:;
// line 344
org$frostlang$frostc$FixedArray* $tmp952 = *(&local28);
frost$core$Bit $tmp953 = frost$core$Bit$init$builtin_bit($tmp952 != NULL);
bool $tmp954 = $tmp953.value;
if ($tmp954) goto block54; else goto block55;
block54:;
// line 345
frost$core$MutableString* $tmp955 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp956 = *(&local28);
ITable* $tmp957 = ((frost$collections$CollectionView*) $tmp956)->$class->itable;
while ($tmp957->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp957 = $tmp957->next;
}
$fn959 $tmp958 = $tmp957->methods[1];
frost$core$String* $tmp960 = $tmp958(((frost$collections$CollectionView*) $tmp956));
frost$core$String* $tmp961 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s962, $tmp960);
frost$core$String* $tmp963 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp961, &$s964);
frost$core$MutableString$append$frost$core$String($tmp955, $tmp963);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
goto block55;
block55:;
// line 347
frost$core$MutableString* $tmp965 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp965, &$s966);
// line 348
org$frostlang$frostc$FixedArray* $tmp967 = *(&local29);
ITable* $tmp968 = ((frost$collections$Iterable*) $tmp967)->$class->itable;
while ($tmp968->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp968 = $tmp968->next;
}
$fn970 $tmp969 = $tmp968->methods[0];
frost$collections$Iterator* $tmp971 = $tmp969(((frost$collections$Iterable*) $tmp967));
goto block56;
block56:;
ITable* $tmp972 = $tmp971->$class->itable;
while ($tmp972->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp972 = $tmp972->next;
}
$fn974 $tmp973 = $tmp972->methods[0];
frost$core$Bit $tmp975 = $tmp973($tmp971);
bool $tmp976 = $tmp975.value;
if ($tmp976) goto block58; else goto block57;
block57:;
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp977 = $tmp971->$class->itable;
while ($tmp977->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp977 = $tmp977->next;
}
$fn979 $tmp978 = $tmp977->methods[1];
frost$core$Object* $tmp980 = $tmp978($tmp971);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp980)));
org$frostlang$frostc$ASTNode* $tmp981 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
*(&local32) = ((org$frostlang$frostc$ASTNode*) $tmp980);
// line 349
frost$core$MutableString* $tmp982 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp983 = *(&local32);
frost$core$String* $tmp984 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp983), &$s985);
frost$core$MutableString$append$frost$core$String($tmp982, $tmp984);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
frost$core$Frost$unref$frost$core$Object$Q($tmp980);
org$frostlang$frostc$ASTNode* $tmp986 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block56;
block58:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
// line 351
frost$core$MutableString* $tmp987 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp987, &$s988);
// line 352
frost$core$MutableString* $tmp989 = *(&local30);
frost$core$String* $tmp990 = frost$core$MutableString$finish$R$frost$core$String($tmp989);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
frost$core$MutableString* $tmp991 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
*(&local30) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp992 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
*(&local29) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp993 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp994 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp995 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
*(&local26) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp996 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp997 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp990;
block40:;
frost$core$Int64 $tmp998 = (frost$core$Int64) {13};
frost$core$Bit $tmp999 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp998);
bool $tmp1000 = $tmp999.value;
if ($tmp1000) goto block59; else goto block60;
block59:;
org$frostlang$frostc$Position* $tmp1001 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1002 = *$tmp1001;
frost$core$String** $tmp1003 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1004 = *$tmp1003;
*(&local33) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
frost$core$String* $tmp1005 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
*(&local33) = $tmp1004;
// line 355
frost$core$String* $tmp1006 = *(&local33);
frost$core$Bit $tmp1007 = frost$core$Bit$init$builtin_bit($tmp1006 != NULL);
bool $tmp1008 = $tmp1007.value;
if ($tmp1008) goto block61; else goto block62;
block61:;
// line 356
frost$core$String* $tmp1009 = *(&local33);
frost$core$String* $tmp1010 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1011, $tmp1009);
frost$core$String* $tmp1012 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1010, &$s1013);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
frost$core$String* $tmp1014 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
*(&local33) = ((frost$core$String*) NULL);
return $tmp1012;
block62:;
// line 358
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1015));
frost$core$String* $tmp1016 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
*(&local33) = ((frost$core$String*) NULL);
return &$s1017;
block60:;
frost$core$Int64 $tmp1018 = (frost$core$Int64) {14};
frost$core$Bit $tmp1019 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1018);
bool $tmp1020 = $tmp1019.value;
if ($tmp1020) goto block63; else goto block64;
block63:;
org$frostlang$frostc$Position* $tmp1021 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1022 = *$tmp1021;
org$frostlang$frostc$ASTNode** $tmp1023 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1024 = *$tmp1023;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
org$frostlang$frostc$ASTNode* $tmp1025 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
*(&local34) = $tmp1024;
org$frostlang$frostc$ASTNode** $tmp1026 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1027 = *$tmp1026;
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
org$frostlang$frostc$ASTNode* $tmp1028 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
*(&local35) = $tmp1027;
// line 361
org$frostlang$frostc$ASTNode* $tmp1029 = *(&local35);
frost$core$Bit $tmp1030 = frost$core$Bit$init$builtin_bit($tmp1029 != NULL);
bool $tmp1031 = $tmp1030.value;
if ($tmp1031) goto block65; else goto block66;
block65:;
// line 362
org$frostlang$frostc$ASTNode* $tmp1032 = *(&local34);
$fn1034 $tmp1033 = ($fn1034) $tmp1032->$class->vtable[0];
frost$core$String* $tmp1035 = $tmp1033($tmp1032);
frost$core$String* $tmp1036 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1035, &$s1037);
org$frostlang$frostc$ASTNode* $tmp1038 = *(&local35);
frost$core$String* $tmp1039 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1036, ((frost$core$Object*) $tmp1038));
frost$core$String* $tmp1040 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1039, &$s1041);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
org$frostlang$frostc$ASTNode* $tmp1042 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1043 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1040;
block66:;
// line 364
org$frostlang$frostc$ASTNode* $tmp1044 = *(&local34);
$fn1046 $tmp1045 = ($fn1046) ((frost$core$Object*) $tmp1044)->$class->vtable[0];
frost$core$String* $tmp1047 = $tmp1045(((frost$core$Object*) $tmp1044));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
org$frostlang$frostc$ASTNode* $tmp1048 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1049 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1047;
block64:;
frost$core$Int64 $tmp1050 = (frost$core$Int64) {15};
frost$core$Bit $tmp1051 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1050);
bool $tmp1052 = $tmp1051.value;
if ($tmp1052) goto block67; else goto block68;
block67:;
org$frostlang$frostc$Position* $tmp1053 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1054 = *$tmp1053;
frost$core$String** $tmp1055 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1056 = *$tmp1055;
*(&local36) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
frost$core$String* $tmp1057 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
*(&local36) = $tmp1056;
org$frostlang$frostc$FixedArray** $tmp1058 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1059 = *$tmp1058;
*(&local37) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
org$frostlang$frostc$FixedArray* $tmp1060 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
*(&local37) = $tmp1059;
org$frostlang$frostc$ASTNode** $tmp1061 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1062 = *$tmp1061;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
org$frostlang$frostc$ASTNode* $tmp1063 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
*(&local38) = $tmp1062;
// line 367
frost$core$MutableString* $tmp1064 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1064);
*(&local39) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$core$MutableString* $tmp1065 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
*(&local39) = $tmp1064;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
// line 368
frost$core$String* $tmp1066 = *(&local36);
frost$core$Bit $tmp1067 = frost$core$Bit$init$builtin_bit($tmp1066 != NULL);
bool $tmp1068 = $tmp1067.value;
if ($tmp1068) goto block69; else goto block70;
block69:;
// line 369
frost$core$MutableString* $tmp1069 = *(&local39);
frost$core$String* $tmp1070 = *(&local36);
frost$core$String* $tmp1071 = frost$core$String$get_asString$R$frost$core$String($tmp1070);
frost$core$String* $tmp1072 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1071, &$s1073);
frost$core$MutableString$append$frost$core$String($tmp1069, $tmp1072);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
goto block70;
block70:;
// line 371
frost$core$MutableString* $tmp1074 = *(&local39);
frost$core$MutableString$append$frost$core$String($tmp1074, &$s1075);
// line 372
org$frostlang$frostc$FixedArray* $tmp1076 = *(&local37);
ITable* $tmp1077 = ((frost$collections$Iterable*) $tmp1076)->$class->itable;
while ($tmp1077->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1077 = $tmp1077->next;
}
$fn1079 $tmp1078 = $tmp1077->methods[0];
frost$collections$Iterator* $tmp1080 = $tmp1078(((frost$collections$Iterable*) $tmp1076));
goto block71;
block71:;
ITable* $tmp1081 = $tmp1080->$class->itable;
while ($tmp1081->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1081 = $tmp1081->next;
}
$fn1083 $tmp1082 = $tmp1081->methods[0];
frost$core$Bit $tmp1084 = $tmp1082($tmp1080);
bool $tmp1085 = $tmp1084.value;
if ($tmp1085) goto block73; else goto block72;
block72:;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1086 = $tmp1080->$class->itable;
while ($tmp1086->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1086 = $tmp1086->next;
}
$fn1088 $tmp1087 = $tmp1086->methods[1];
frost$core$Object* $tmp1089 = $tmp1087($tmp1080);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1089)));
org$frostlang$frostc$ASTNode* $tmp1090 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
*(&local40) = ((org$frostlang$frostc$ASTNode*) $tmp1089);
// line 373
frost$core$MutableString* $tmp1091 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp1092 = *(&local40);
frost$core$String* $tmp1093 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1092), &$s1094);
frost$core$MutableString$append$frost$core$String($tmp1091, $tmp1093);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
frost$core$Frost$unref$frost$core$Object$Q($tmp1089);
org$frostlang$frostc$ASTNode* $tmp1095 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block71;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
// line 375
frost$core$MutableString* $tmp1096 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp1097 = *(&local38);
frost$core$String* $tmp1098 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1099, ((frost$core$Object*) $tmp1097));
frost$core$String* $tmp1100 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1098, &$s1101);
frost$core$MutableString$append$frost$core$String($tmp1096, $tmp1100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
// line 376
frost$core$MutableString* $tmp1102 = *(&local39);
frost$core$String* $tmp1103 = frost$core$MutableString$finish$R$frost$core$String($tmp1102);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
frost$core$MutableString* $tmp1104 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
*(&local39) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1105 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1106 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
*(&local37) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1107 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
*(&local36) = ((frost$core$String*) NULL);
return $tmp1103;
block68:;
frost$core$Int64 $tmp1108 = (frost$core$Int64) {16};
frost$core$Bit $tmp1109 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1108);
bool $tmp1110 = $tmp1109.value;
if ($tmp1110) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp1111 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1112 = *$tmp1111;
org$frostlang$frostc$ASTNode** $tmp1113 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1114 = *$tmp1113;
*(&local41) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
org$frostlang$frostc$ASTNode* $tmp1115 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
*(&local41) = $tmp1114;
frost$core$String** $tmp1116 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1117 = *$tmp1116;
*(&local42) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
frost$core$String* $tmp1118 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
*(&local42) = $tmp1117;
// line 379
org$frostlang$frostc$ASTNode* $tmp1119 = *(&local41);
$fn1121 $tmp1120 = ($fn1121) $tmp1119->$class->vtable[0];
frost$core$String* $tmp1122 = $tmp1120($tmp1119);
frost$core$String* $tmp1123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1122, &$s1124);
frost$core$String* $tmp1125 = *(&local42);
frost$core$String* $tmp1126 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1123, $tmp1125);
frost$core$String* $tmp1127 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1126, &$s1128);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
frost$core$String* $tmp1129 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
*(&local42) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1130 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
*(&local41) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1127;
block75:;
frost$core$Int64 $tmp1131 = (frost$core$Int64) {17};
frost$core$Bit $tmp1132 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1131);
bool $tmp1133 = $tmp1132.value;
if ($tmp1133) goto block76; else goto block77;
block76:;
org$frostlang$frostc$Position* $tmp1134 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1135 = *$tmp1134;
org$frostlang$frostc$ASTNode** $tmp1136 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1137 = *$tmp1136;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
org$frostlang$frostc$ASTNode* $tmp1138 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
*(&local43) = $tmp1137;
frost$core$String** $tmp1139 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1140 = *$tmp1139;
*(&local44) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
frost$core$String* $tmp1141 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
*(&local44) = $tmp1140;
org$frostlang$frostc$FixedArray** $tmp1142 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1143 = *$tmp1142;
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
org$frostlang$frostc$FixedArray* $tmp1144 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
*(&local45) = $tmp1143;
// line 382
org$frostlang$frostc$ASTNode* $tmp1145 = *(&local43);
$fn1147 $tmp1146 = ($fn1147) $tmp1145->$class->vtable[0];
frost$core$String* $tmp1148 = $tmp1146($tmp1145);
frost$core$String* $tmp1149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1148, &$s1150);
frost$core$String* $tmp1151 = *(&local44);
frost$core$String* $tmp1152 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1149, $tmp1151);
frost$core$String* $tmp1153 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1152, &$s1154);
org$frostlang$frostc$FixedArray* $tmp1155 = *(&local45);
ITable* $tmp1156 = ((frost$collections$CollectionView*) $tmp1155)->$class->itable;
while ($tmp1156->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1156 = $tmp1156->next;
}
$fn1158 $tmp1157 = $tmp1156->methods[2];
frost$core$String* $tmp1159 = $tmp1157(((frost$collections$CollectionView*) $tmp1155), &$s1160);
frost$core$String* $tmp1161 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1153, $tmp1159);
frost$core$String* $tmp1162 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1161, &$s1163);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
org$frostlang$frostc$FixedArray* $tmp1164 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1165 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
*(&local44) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1166 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1162;
block77:;
frost$core$Int64 $tmp1167 = (frost$core$Int64) {18};
frost$core$Bit $tmp1168 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1167);
bool $tmp1169 = $tmp1168.value;
if ($tmp1169) goto block78; else goto block79;
block78:;
org$frostlang$frostc$Position* $tmp1170 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1171 = *$tmp1170;
org$frostlang$frostc$ASTNode** $tmp1172 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1173 = *$tmp1172;
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
org$frostlang$frostc$ASTNode* $tmp1174 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
*(&local46) = $tmp1173;
org$frostlang$frostc$FixedArray** $tmp1175 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1176 = *$tmp1175;
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
org$frostlang$frostc$FixedArray* $tmp1177 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
*(&local47) = $tmp1176;
org$frostlang$frostc$ASTNode** $tmp1178 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1179 = *$tmp1178;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
org$frostlang$frostc$ASTNode* $tmp1180 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
*(&local48) = $tmp1179;
// line 385
frost$core$MutableString* $tmp1181 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1181);
*(&local49) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
frost$core$MutableString* $tmp1182 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
*(&local49) = $tmp1181;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
// line 386
org$frostlang$frostc$ASTNode* $tmp1183 = *(&local46);
frost$core$Bit $tmp1184 = frost$core$Bit$init$builtin_bit($tmp1183 != NULL);
bool $tmp1185 = $tmp1184.value;
if ($tmp1185) goto block80; else goto block81;
block80:;
// line 387
frost$core$MutableString* $tmp1186 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1187 = *(&local46);
frost$core$String* $tmp1188 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1187), &$s1189);
frost$core$MutableString$append$frost$core$String($tmp1186, $tmp1188);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
goto block81;
block81:;
// line 389
org$frostlang$frostc$FixedArray* $tmp1190 = *(&local47);
ITable* $tmp1191 = ((frost$collections$Iterable*) $tmp1190)->$class->itable;
while ($tmp1191->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1191 = $tmp1191->next;
}
$fn1193 $tmp1192 = $tmp1191->methods[0];
frost$collections$Iterator* $tmp1194 = $tmp1192(((frost$collections$Iterable*) $tmp1190));
goto block82;
block82:;
ITable* $tmp1195 = $tmp1194->$class->itable;
while ($tmp1195->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1195 = $tmp1195->next;
}
$fn1197 $tmp1196 = $tmp1195->methods[0];
frost$core$Bit $tmp1198 = $tmp1196($tmp1194);
bool $tmp1199 = $tmp1198.value;
if ($tmp1199) goto block84; else goto block83;
block83:;
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1200 = $tmp1194->$class->itable;
while ($tmp1200->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1200 = $tmp1200->next;
}
$fn1202 $tmp1201 = $tmp1200->methods[1];
frost$core$Object* $tmp1203 = $tmp1201($tmp1194);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1203)));
org$frostlang$frostc$ASTNode* $tmp1204 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
*(&local50) = ((org$frostlang$frostc$ASTNode*) $tmp1203);
// line 390
frost$core$MutableString* $tmp1205 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1206 = *(&local50);
frost$core$String* $tmp1207 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1206), &$s1208);
frost$core$MutableString$append$frost$core$String($tmp1205, $tmp1207);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
frost$core$Frost$unref$frost$core$Object$Q($tmp1203);
org$frostlang$frostc$ASTNode* $tmp1209 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block82;
block84:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
// line 392
frost$core$MutableString* $tmp1210 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1211 = *(&local48);
frost$core$MutableString$append$frost$core$Object($tmp1210, ((frost$core$Object*) $tmp1211));
// line 393
frost$core$MutableString* $tmp1212 = *(&local49);
frost$core$String* $tmp1213 = frost$core$MutableString$finish$R$frost$core$String($tmp1212);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
frost$core$MutableString* $tmp1214 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
*(&local49) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1215 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1216 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1217 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1213;
block79:;
frost$core$Int64 $tmp1218 = (frost$core$Int64) {19};
frost$core$Bit $tmp1219 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1218);
bool $tmp1220 = $tmp1219.value;
if ($tmp1220) goto block85; else goto block86;
block85:;
org$frostlang$frostc$FixedArray** $tmp1221 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp1222 = *$tmp1221;
*(&local51) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
org$frostlang$frostc$FixedArray* $tmp1223 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
*(&local51) = $tmp1222;
// line 396
frost$core$MutableString* $tmp1224 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1224);
*(&local52) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
frost$core$MutableString* $tmp1225 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
*(&local52) = $tmp1224;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
// line 397
org$frostlang$frostc$FixedArray* $tmp1226 = *(&local51);
ITable* $tmp1227 = ((frost$collections$Iterable*) $tmp1226)->$class->itable;
while ($tmp1227->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1227 = $tmp1227->next;
}
$fn1229 $tmp1228 = $tmp1227->methods[0];
frost$collections$Iterator* $tmp1230 = $tmp1228(((frost$collections$Iterable*) $tmp1226));
goto block87;
block87:;
ITable* $tmp1231 = $tmp1230->$class->itable;
while ($tmp1231->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1231 = $tmp1231->next;
}
$fn1233 $tmp1232 = $tmp1231->methods[0];
frost$core$Bit $tmp1234 = $tmp1232($tmp1230);
bool $tmp1235 = $tmp1234.value;
if ($tmp1235) goto block89; else goto block88;
block88:;
*(&local53) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1236 = $tmp1230->$class->itable;
while ($tmp1236->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1236 = $tmp1236->next;
}
$fn1238 $tmp1237 = $tmp1236->methods[1];
frost$core$Object* $tmp1239 = $tmp1237($tmp1230);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1239)));
org$frostlang$frostc$ASTNode* $tmp1240 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
*(&local53) = ((org$frostlang$frostc$ASTNode*) $tmp1239);
// line 398
frost$core$MutableString* $tmp1241 = *(&local52);
org$frostlang$frostc$ASTNode* $tmp1242 = *(&local53);
frost$core$String* $tmp1243 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1242), &$s1244);
frost$core$MutableString$append$frost$core$String($tmp1241, $tmp1243);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
frost$core$Frost$unref$frost$core$Object$Q($tmp1239);
org$frostlang$frostc$ASTNode* $tmp1245 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
*(&local53) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block87;
block89:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
// line 400
frost$core$MutableString* $tmp1246 = *(&local52);
frost$core$String* $tmp1247 = frost$core$MutableString$finish$R$frost$core$String($tmp1246);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
frost$core$MutableString* $tmp1248 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
*(&local52) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1249 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
*(&local51) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1247;
block86:;
frost$core$Int64 $tmp1250 = (frost$core$Int64) {20};
frost$core$Bit $tmp1251 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1250);
bool $tmp1252 = $tmp1251.value;
if ($tmp1252) goto block90; else goto block91;
block90:;
org$frostlang$frostc$Position* $tmp1253 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1254 = *$tmp1253;
frost$core$String** $tmp1255 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1256 = *$tmp1255;
*(&local54) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$String* $tmp1257 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
*(&local54) = $tmp1256;
org$frostlang$frostc$ASTNode** $tmp1258 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1259 = *$tmp1258;
*(&local55) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
org$frostlang$frostc$ASTNode* $tmp1260 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
*(&local55) = $tmp1259;
org$frostlang$frostc$ASTNode** $tmp1261 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1262 = *$tmp1261;
*(&local56) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
org$frostlang$frostc$ASTNode* $tmp1263 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
*(&local56) = $tmp1262;
org$frostlang$frostc$FixedArray** $tmp1264 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1265 = *$tmp1264;
*(&local57) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
org$frostlang$frostc$FixedArray* $tmp1266 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
*(&local57) = $tmp1265;
// line 403
frost$core$MutableString* $tmp1267 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1267);
*(&local58) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
frost$core$MutableString* $tmp1268 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
*(&local58) = $tmp1267;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
// line 404
frost$core$String* $tmp1269 = *(&local54);
frost$core$Bit $tmp1270 = frost$core$Bit$init$builtin_bit($tmp1269 != NULL);
bool $tmp1271 = $tmp1270.value;
if ($tmp1271) goto block92; else goto block93;
block92:;
// line 405
frost$core$MutableString* $tmp1272 = *(&local58);
frost$core$String* $tmp1273 = *(&local54);
frost$core$String* $tmp1274 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1273, &$s1275);
frost$core$MutableString$append$frost$core$String($tmp1272, $tmp1274);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
goto block93;
block93:;
// line 407
frost$core$MutableString* $tmp1276 = *(&local58);
org$frostlang$frostc$ASTNode* $tmp1277 = *(&local55);
frost$core$String* $tmp1278 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1279, ((frost$core$Object*) $tmp1277));
frost$core$String* $tmp1280 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1278, &$s1281);
org$frostlang$frostc$ASTNode* $tmp1282 = *(&local56);
frost$core$String* $tmp1283 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1280, ((frost$core$Object*) $tmp1282));
frost$core$String* $tmp1284 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1283, &$s1285);
frost$core$MutableString$append$frost$core$String($tmp1276, $tmp1284);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
// line 408
org$frostlang$frostc$FixedArray* $tmp1286 = *(&local57);
ITable* $tmp1287 = ((frost$collections$Iterable*) $tmp1286)->$class->itable;
while ($tmp1287->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1287 = $tmp1287->next;
}
$fn1289 $tmp1288 = $tmp1287->methods[0];
frost$collections$Iterator* $tmp1290 = $tmp1288(((frost$collections$Iterable*) $tmp1286));
goto block94;
block94:;
ITable* $tmp1291 = $tmp1290->$class->itable;
while ($tmp1291->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1291 = $tmp1291->next;
}
$fn1293 $tmp1292 = $tmp1291->methods[0];
frost$core$Bit $tmp1294 = $tmp1292($tmp1290);
bool $tmp1295 = $tmp1294.value;
if ($tmp1295) goto block96; else goto block95;
block95:;
*(&local59) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1296 = $tmp1290->$class->itable;
while ($tmp1296->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1296 = $tmp1296->next;
}
$fn1298 $tmp1297 = $tmp1296->methods[1];
frost$core$Object* $tmp1299 = $tmp1297($tmp1290);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1299)));
org$frostlang$frostc$ASTNode* $tmp1300 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
*(&local59) = ((org$frostlang$frostc$ASTNode*) $tmp1299);
// line 409
frost$core$MutableString* $tmp1301 = *(&local58);
org$frostlang$frostc$ASTNode* $tmp1302 = *(&local59);
frost$core$String* $tmp1303 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1302), &$s1304);
frost$core$MutableString$append$frost$core$String($tmp1301, $tmp1303);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
frost$core$Frost$unref$frost$core$Object$Q($tmp1299);
org$frostlang$frostc$ASTNode* $tmp1305 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
*(&local59) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block94;
block96:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
// line 411
frost$core$MutableString* $tmp1306 = *(&local58);
frost$core$MutableString$append$frost$core$String($tmp1306, &$s1307);
// line 412
frost$core$MutableString* $tmp1308 = *(&local58);
frost$core$String* $tmp1309 = frost$core$MutableString$finish$R$frost$core$String($tmp1308);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
frost$core$MutableString* $tmp1310 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
*(&local58) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1311 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
*(&local57) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1312 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
*(&local56) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1313 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
*(&local55) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1314 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
*(&local54) = ((frost$core$String*) NULL);
return $tmp1309;
block91:;
frost$core$Int64 $tmp1315 = (frost$core$Int64) {21};
frost$core$Bit $tmp1316 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1315);
bool $tmp1317 = $tmp1316.value;
if ($tmp1317) goto block97; else goto block98;
block97:;
org$frostlang$frostc$Position* $tmp1318 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1319 = *$tmp1318;
frost$core$String** $tmp1320 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1321 = *$tmp1320;
*(&local60) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
frost$core$String* $tmp1322 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
*(&local60) = $tmp1321;
org$frostlang$frostc$FixedArray** $tmp1323 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1324 = *$tmp1323;
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
org$frostlang$frostc$FixedArray* $tmp1325 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
*(&local61) = $tmp1324;
// line 415
frost$core$String* $tmp1326 = *(&local60);
frost$core$String* $tmp1327 = frost$core$String$get_asString$R$frost$core$String($tmp1326);
frost$core$String* $tmp1328 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1327, &$s1329);
org$frostlang$frostc$FixedArray* $tmp1330 = *(&local61);
ITable* $tmp1331 = ((frost$collections$CollectionView*) $tmp1330)->$class->itable;
while ($tmp1331->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1331 = $tmp1331->next;
}
$fn1333 $tmp1332 = $tmp1331->methods[1];
frost$core$String* $tmp1334 = $tmp1332(((frost$collections$CollectionView*) $tmp1330));
frost$core$String* $tmp1335 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1328, $tmp1334);
frost$core$String* $tmp1336 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1335, &$s1337);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
org$frostlang$frostc$FixedArray* $tmp1338 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1339 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
*(&local60) = ((frost$core$String*) NULL);
return $tmp1336;
block98:;
frost$core$Int64 $tmp1340 = (frost$core$Int64) {22};
frost$core$Bit $tmp1341 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1340);
bool $tmp1342 = $tmp1341.value;
if ($tmp1342) goto block99; else goto block100;
block99:;
org$frostlang$frostc$Position* $tmp1343 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1344 = *$tmp1343;
frost$core$String** $tmp1345 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1346 = *$tmp1345;
*(&local62) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
frost$core$String* $tmp1347 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
*(&local62) = $tmp1346;
// line 418
frost$core$String* $tmp1348 = *(&local62);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
frost$core$String* $tmp1349 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
*(&local62) = ((frost$core$String*) NULL);
return $tmp1348;
block100:;
frost$core$Int64 $tmp1350 = (frost$core$Int64) {23};
frost$core$Bit $tmp1351 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1350);
bool $tmp1352 = $tmp1351.value;
if ($tmp1352) goto block101; else goto block102;
block101:;
org$frostlang$frostc$Position* $tmp1353 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1354 = *$tmp1353;
frost$core$String** $tmp1355 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1356 = *$tmp1355;
*(&local63) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
frost$core$String* $tmp1357 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
*(&local63) = $tmp1356;
org$frostlang$frostc$FixedArray** $tmp1358 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1359 = *$tmp1358;
*(&local64) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
org$frostlang$frostc$FixedArray* $tmp1360 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
*(&local64) = $tmp1359;
// line 421
frost$core$String* $tmp1361 = *(&local63);
frost$core$String* $tmp1362 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1363, $tmp1361);
frost$core$String* $tmp1364 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1362, &$s1365);
org$frostlang$frostc$FixedArray* $tmp1366 = *(&local64);
ITable* $tmp1367 = ((frost$collections$CollectionView*) $tmp1366)->$class->itable;
while ($tmp1367->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1367 = $tmp1367->next;
}
$fn1369 $tmp1368 = $tmp1367->methods[1];
frost$core$String* $tmp1370 = $tmp1368(((frost$collections$CollectionView*) $tmp1366));
frost$core$String* $tmp1371 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1364, $tmp1370);
frost$core$String* $tmp1372 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1371, &$s1373);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
org$frostlang$frostc$FixedArray* $tmp1374 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
*(&local64) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1375 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
*(&local63) = ((frost$core$String*) NULL);
return $tmp1372;
block102:;
frost$core$Int64 $tmp1376 = (frost$core$Int64) {24};
frost$core$Bit $tmp1377 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1376);
bool $tmp1378 = $tmp1377.value;
if ($tmp1378) goto block103; else goto block104;
block103:;
org$frostlang$frostc$Position* $tmp1379 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1380 = *$tmp1379;
org$frostlang$frostc$ASTNode** $tmp1381 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1382 = *$tmp1381;
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
org$frostlang$frostc$ASTNode* $tmp1383 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
*(&local65) = $tmp1382;
org$frostlang$frostc$FixedArray** $tmp1384 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1385 = *$tmp1384;
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
org$frostlang$frostc$FixedArray* $tmp1386 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
*(&local66) = $tmp1385;
org$frostlang$frostc$ASTNode** $tmp1387 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1388 = *$tmp1387;
*(&local67) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
org$frostlang$frostc$ASTNode* $tmp1389 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
*(&local67) = $tmp1388;
// line 424
frost$core$MutableString* $tmp1390 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$ASTNode* $tmp1391 = *(&local65);
frost$core$String* $tmp1392 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1393, ((frost$core$Object*) $tmp1391));
frost$core$String* $tmp1394 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1392, &$s1395);
frost$core$MutableString$init$frost$core$String($tmp1390, $tmp1394);
*(&local68) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
frost$core$MutableString* $tmp1396 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
*(&local68) = $tmp1390;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
// line 425
org$frostlang$frostc$FixedArray* $tmp1397 = *(&local66);
ITable* $tmp1398 = ((frost$collections$Iterable*) $tmp1397)->$class->itable;
while ($tmp1398->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1398 = $tmp1398->next;
}
$fn1400 $tmp1399 = $tmp1398->methods[0];
frost$collections$Iterator* $tmp1401 = $tmp1399(((frost$collections$Iterable*) $tmp1397));
goto block105;
block105:;
ITable* $tmp1402 = $tmp1401->$class->itable;
while ($tmp1402->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1402 = $tmp1402->next;
}
$fn1404 $tmp1403 = $tmp1402->methods[0];
frost$core$Bit $tmp1405 = $tmp1403($tmp1401);
bool $tmp1406 = $tmp1405.value;
if ($tmp1406) goto block107; else goto block106;
block106:;
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1407 = $tmp1401->$class->itable;
while ($tmp1407->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1407 = $tmp1407->next;
}
$fn1409 $tmp1408 = $tmp1407->methods[1];
frost$core$Object* $tmp1410 = $tmp1408($tmp1401);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1410)));
org$frostlang$frostc$ASTNode* $tmp1411 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
*(&local69) = ((org$frostlang$frostc$ASTNode*) $tmp1410);
// line 426
frost$core$MutableString* $tmp1412 = *(&local68);
org$frostlang$frostc$ASTNode* $tmp1413 = *(&local69);
frost$core$String* $tmp1414 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1413), &$s1415);
frost$core$MutableString$append$frost$core$String($tmp1412, $tmp1414);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
frost$core$Frost$unref$frost$core$Object$Q($tmp1410);
org$frostlang$frostc$ASTNode* $tmp1416 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block105;
block107:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
// line 428
frost$core$MutableString* $tmp1417 = *(&local68);
frost$core$MutableString$append$frost$core$String($tmp1417, &$s1418);
// line 429
org$frostlang$frostc$ASTNode* $tmp1419 = *(&local67);
frost$core$Bit $tmp1420 = frost$core$Bit$init$builtin_bit($tmp1419 != NULL);
bool $tmp1421 = $tmp1420.value;
if ($tmp1421) goto block108; else goto block109;
block108:;
// line 430
frost$core$MutableString* $tmp1422 = *(&local68);
org$frostlang$frostc$ASTNode* $tmp1423 = *(&local67);
frost$core$String* $tmp1424 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1425, ((frost$core$Object*) $tmp1423));
frost$core$String* $tmp1426 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1424, &$s1427);
frost$core$MutableString$append$frost$core$String($tmp1422, $tmp1426);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
goto block109;
block109:;
// line 432
frost$core$MutableString* $tmp1428 = *(&local68);
frost$core$String* $tmp1429 = frost$core$MutableString$finish$R$frost$core$String($tmp1428);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
frost$core$MutableString* $tmp1430 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
*(&local68) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1431 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
*(&local67) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1432 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1433 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1429;
block104:;
frost$core$Int64 $tmp1434 = (frost$core$Int64) {25};
frost$core$Bit $tmp1435 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1434);
bool $tmp1436 = $tmp1435.value;
if ($tmp1436) goto block110; else goto block111;
block110:;
org$frostlang$frostc$Position* $tmp1437 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1438 = *$tmp1437;
frost$core$UInt64* $tmp1439 = (frost$core$UInt64*) (param0->$data + 16);
frost$core$UInt64 $tmp1440 = *$tmp1439;
*(&local70) = $tmp1440;
// line 435
frost$core$UInt64 $tmp1441 = *(&local70);
frost$core$UInt64$wrapper* $tmp1442;
$tmp1442 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp1442->value = $tmp1441;
$fn1444 $tmp1443 = ($fn1444) ((frost$core$Object*) $tmp1442)->$class->vtable[0];
frost$core$String* $tmp1445 = $tmp1443(((frost$core$Object*) $tmp1442));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
return $tmp1445;
block111:;
frost$core$Int64 $tmp1446 = (frost$core$Int64) {26};
frost$core$Bit $tmp1447 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1446);
bool $tmp1448 = $tmp1447.value;
if ($tmp1448) goto block112; else goto block113;
block112:;
org$frostlang$frostc$Position* $tmp1449 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1450 = *$tmp1449;
org$frostlang$frostc$IR$Value** $tmp1451 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp1452 = *$tmp1451;
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
org$frostlang$frostc$IR$Value* $tmp1453 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
*(&local71) = $tmp1452;
// line 438
org$frostlang$frostc$IR$Value* $tmp1454 = *(&local71);
$fn1456 $tmp1455 = ($fn1456) ((frost$core$Object*) $tmp1454)->$class->vtable[0];
frost$core$String* $tmp1457 = $tmp1455(((frost$core$Object*) $tmp1454));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
org$frostlang$frostc$IR$Value* $tmp1458 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp1457;
block113:;
frost$core$Int64 $tmp1459 = (frost$core$Int64) {27};
frost$core$Bit $tmp1460 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1459);
bool $tmp1461 = $tmp1460.value;
if ($tmp1461) goto block114; else goto block115;
block114:;
org$frostlang$frostc$Position* $tmp1462 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1463 = *$tmp1462;
frost$core$String** $tmp1464 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1465 = *$tmp1464;
*(&local72) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
frost$core$String* $tmp1466 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local72) = $tmp1465;
org$frostlang$frostc$FixedArray** $tmp1467 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1468 = *$tmp1467;
*(&local73) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
org$frostlang$frostc$FixedArray* $tmp1469 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
*(&local73) = $tmp1468;
// line 441
frost$core$MutableString* $tmp1470 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1470);
*(&local74) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
frost$core$MutableString* $tmp1471 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
*(&local74) = $tmp1470;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
// line 442
frost$core$String* $tmp1472 = *(&local72);
frost$core$Bit $tmp1473 = frost$core$Bit$init$builtin_bit($tmp1472 != NULL);
bool $tmp1474 = $tmp1473.value;
if ($tmp1474) goto block116; else goto block117;
block116:;
// line 443
frost$core$MutableString* $tmp1475 = *(&local74);
frost$core$String* $tmp1476 = *(&local72);
frost$core$String* $tmp1477 = frost$core$String$get_asString$R$frost$core$String($tmp1476);
frost$core$String* $tmp1478 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1477, &$s1479);
frost$core$MutableString$append$frost$core$String($tmp1475, $tmp1478);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
goto block117;
block117:;
// line 445
frost$core$MutableString* $tmp1480 = *(&local74);
frost$core$MutableString$append$frost$core$String($tmp1480, &$s1481);
// line 446
org$frostlang$frostc$FixedArray* $tmp1482 = *(&local73);
ITable* $tmp1483 = ((frost$collections$Iterable*) $tmp1482)->$class->itable;
while ($tmp1483->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1483 = $tmp1483->next;
}
$fn1485 $tmp1484 = $tmp1483->methods[0];
frost$collections$Iterator* $tmp1486 = $tmp1484(((frost$collections$Iterable*) $tmp1482));
goto block118;
block118:;
ITable* $tmp1487 = $tmp1486->$class->itable;
while ($tmp1487->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1487 = $tmp1487->next;
}
$fn1489 $tmp1488 = $tmp1487->methods[0];
frost$core$Bit $tmp1490 = $tmp1488($tmp1486);
bool $tmp1491 = $tmp1490.value;
if ($tmp1491) goto block120; else goto block119;
block119:;
*(&local75) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1492 = $tmp1486->$class->itable;
while ($tmp1492->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1492 = $tmp1492->next;
}
$fn1494 $tmp1493 = $tmp1492->methods[1];
frost$core$Object* $tmp1495 = $tmp1493($tmp1486);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1495)));
org$frostlang$frostc$ASTNode* $tmp1496 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
*(&local75) = ((org$frostlang$frostc$ASTNode*) $tmp1495);
// line 447
frost$core$MutableString* $tmp1497 = *(&local74);
org$frostlang$frostc$ASTNode* $tmp1498 = *(&local75);
frost$core$String* $tmp1499 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1498), &$s1500);
frost$core$MutableString$append$frost$core$String($tmp1497, $tmp1499);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
frost$core$Frost$unref$frost$core$Object$Q($tmp1495);
org$frostlang$frostc$ASTNode* $tmp1501 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
*(&local75) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block118;
block120:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1486));
// line 449
frost$core$MutableString* $tmp1502 = *(&local74);
frost$core$MutableString$append$frost$core$String($tmp1502, &$s1503);
// line 450
frost$core$MutableString* $tmp1504 = *(&local74);
frost$core$String* $tmp1505 = frost$core$MutableString$finish$R$frost$core$String($tmp1504);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
frost$core$MutableString* $tmp1506 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1506));
*(&local74) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1507 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
*(&local73) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1508 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
*(&local72) = ((frost$core$String*) NULL);
return $tmp1505;
block115:;
frost$core$Int64 $tmp1509 = (frost$core$Int64) {28};
frost$core$Bit $tmp1510 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1509);
bool $tmp1511 = $tmp1510.value;
if ($tmp1511) goto block121; else goto block122;
block121:;
org$frostlang$frostc$Position* $tmp1512 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1513 = *$tmp1512;
org$frostlang$frostc$ASTNode** $tmp1514 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1515 = *$tmp1514;
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
org$frostlang$frostc$ASTNode* $tmp1516 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1516));
*(&local76) = $tmp1515;
org$frostlang$frostc$FixedArray** $tmp1517 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1518 = *$tmp1517;
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
org$frostlang$frostc$FixedArray* $tmp1519 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
*(&local77) = $tmp1518;
org$frostlang$frostc$FixedArray** $tmp1520 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1521 = *$tmp1520;
*(&local78) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
org$frostlang$frostc$FixedArray* $tmp1522 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
*(&local78) = $tmp1521;
// line 453
frost$core$MutableString* $tmp1523 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$ASTNode* $tmp1524 = *(&local76);
frost$core$String* $tmp1525 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1526, ((frost$core$Object*) $tmp1524));
frost$core$String* $tmp1527 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1525, &$s1528);
frost$core$MutableString$init$frost$core$String($tmp1523, $tmp1527);
*(&local79) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
frost$core$MutableString* $tmp1529 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
*(&local79) = $tmp1523;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
// line 454
org$frostlang$frostc$FixedArray* $tmp1530 = *(&local77);
ITable* $tmp1531 = ((frost$collections$Iterable*) $tmp1530)->$class->itable;
while ($tmp1531->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1531 = $tmp1531->next;
}
$fn1533 $tmp1532 = $tmp1531->methods[0];
frost$collections$Iterator* $tmp1534 = $tmp1532(((frost$collections$Iterable*) $tmp1530));
goto block123;
block123:;
ITable* $tmp1535 = $tmp1534->$class->itable;
while ($tmp1535->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1535 = $tmp1535->next;
}
$fn1537 $tmp1536 = $tmp1535->methods[0];
frost$core$Bit $tmp1538 = $tmp1536($tmp1534);
bool $tmp1539 = $tmp1538.value;
if ($tmp1539) goto block125; else goto block124;
block124:;
*(&local80) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1540 = $tmp1534->$class->itable;
while ($tmp1540->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1540 = $tmp1540->next;
}
$fn1542 $tmp1541 = $tmp1540->methods[1];
frost$core$Object* $tmp1543 = $tmp1541($tmp1534);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1543)));
org$frostlang$frostc$ASTNode* $tmp1544 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
*(&local80) = ((org$frostlang$frostc$ASTNode*) $tmp1543);
// line 455
frost$core$MutableString* $tmp1545 = *(&local79);
org$frostlang$frostc$ASTNode* $tmp1546 = *(&local80);
frost$core$String* $tmp1547 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1546), &$s1548);
frost$core$MutableString$append$frost$core$String($tmp1545, $tmp1547);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
frost$core$Frost$unref$frost$core$Object$Q($tmp1543);
org$frostlang$frostc$ASTNode* $tmp1549 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1549));
*(&local80) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block123;
block125:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
// line 457
org$frostlang$frostc$FixedArray* $tmp1550 = *(&local78);
frost$core$Bit $tmp1551 = frost$core$Bit$init$builtin_bit($tmp1550 != NULL);
bool $tmp1552 = $tmp1551.value;
if ($tmp1552) goto block126; else goto block127;
block126:;
// line 458
frost$core$MutableString* $tmp1553 = *(&local79);
org$frostlang$frostc$FixedArray* $tmp1554 = *(&local78);
frost$core$String* $tmp1555 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1554), &$s1556);
frost$core$MutableString$append$frost$core$String($tmp1553, $tmp1555);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
goto block127;
block127:;
// line 460
frost$core$MutableString* $tmp1557 = *(&local79);
frost$core$MutableString$append$frost$core$String($tmp1557, &$s1558);
// line 461
frost$core$MutableString* $tmp1559 = *(&local79);
frost$core$String* $tmp1560 = frost$core$MutableString$finish$R$frost$core$String($tmp1559);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
frost$core$MutableString* $tmp1561 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
*(&local79) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1562 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
*(&local78) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1563 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1564 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1560;
block122:;
frost$core$Int64 $tmp1565 = (frost$core$Int64) {29};
frost$core$Bit $tmp1566 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1565);
bool $tmp1567 = $tmp1566.value;
if ($tmp1567) goto block128; else goto block129;
block128:;
org$frostlang$frostc$Position* $tmp1568 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1569 = *$tmp1568;
org$frostlang$frostc$ASTNode** $tmp1570 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1571 = *$tmp1570;
*(&local81) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1571));
org$frostlang$frostc$ASTNode* $tmp1572 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1572));
*(&local81) = $tmp1571;
org$frostlang$frostc$FixedArray** $tmp1573 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1574 = *$tmp1573;
*(&local82) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
org$frostlang$frostc$FixedArray* $tmp1575 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
*(&local82) = $tmp1574;
org$frostlang$frostc$MethodDecl$Kind* $tmp1576 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp1577 = *$tmp1576;
*(&local83) = $tmp1577;
frost$core$String** $tmp1578 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp1579 = *$tmp1578;
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
frost$core$String* $tmp1580 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
*(&local84) = $tmp1579;
org$frostlang$frostc$FixedArray** $tmp1581 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1582 = *$tmp1581;
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
org$frostlang$frostc$FixedArray* $tmp1583 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
*(&local85) = $tmp1582;
org$frostlang$frostc$FixedArray** $tmp1584 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp1585 = *$tmp1584;
*(&local86) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
org$frostlang$frostc$FixedArray* $tmp1586 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1586));
*(&local86) = $tmp1585;
org$frostlang$frostc$ASTNode** $tmp1587 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
org$frostlang$frostc$ASTNode* $tmp1588 = *$tmp1587;
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1588));
org$frostlang$frostc$ASTNode* $tmp1589 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
*(&local87) = $tmp1588;
org$frostlang$frostc$FixedArray** $tmp1590 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp1591 = *$tmp1590;
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
org$frostlang$frostc$FixedArray* $tmp1592 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
*(&local88) = $tmp1591;
// line 465
frost$core$MutableString* $tmp1593 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1593);
*(&local89) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
frost$core$MutableString* $tmp1594 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1594));
*(&local89) = $tmp1593;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
// line 466
org$frostlang$frostc$ASTNode* $tmp1595 = *(&local81);
frost$core$Bit $tmp1596 = frost$core$Bit$init$builtin_bit($tmp1595 != NULL);
bool $tmp1597 = $tmp1596.value;
if ($tmp1597) goto block130; else goto block131;
block130:;
// line 467
frost$core$MutableString* $tmp1598 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1599 = *(&local81);
frost$core$String* $tmp1600 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1599), &$s1601);
frost$core$MutableString$append$frost$core$String($tmp1598, $tmp1600);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
goto block131;
block131:;
// line 469
org$frostlang$frostc$FixedArray* $tmp1602 = *(&local82);
ITable* $tmp1603 = ((frost$collections$Iterable*) $tmp1602)->$class->itable;
while ($tmp1603->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1603 = $tmp1603->next;
}
$fn1605 $tmp1604 = $tmp1603->methods[0];
frost$collections$Iterator* $tmp1606 = $tmp1604(((frost$collections$Iterable*) $tmp1602));
goto block132;
block132:;
ITable* $tmp1607 = $tmp1606->$class->itable;
while ($tmp1607->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1607 = $tmp1607->next;
}
$fn1609 $tmp1608 = $tmp1607->methods[0];
frost$core$Bit $tmp1610 = $tmp1608($tmp1606);
bool $tmp1611 = $tmp1610.value;
if ($tmp1611) goto block134; else goto block133;
block133:;
*(&local90) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1612 = $tmp1606->$class->itable;
while ($tmp1612->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1612 = $tmp1612->next;
}
$fn1614 $tmp1613 = $tmp1612->methods[1];
frost$core$Object* $tmp1615 = $tmp1613($tmp1606);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1615)));
org$frostlang$frostc$ASTNode* $tmp1616 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1616));
*(&local90) = ((org$frostlang$frostc$ASTNode*) $tmp1615);
// line 470
frost$core$MutableString* $tmp1617 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1618 = *(&local90);
frost$core$String* $tmp1619 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1618), &$s1620);
frost$core$MutableString$append$frost$core$String($tmp1617, $tmp1619);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1619));
frost$core$Frost$unref$frost$core$Object$Q($tmp1615);
org$frostlang$frostc$ASTNode* $tmp1621 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
*(&local90) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block132;
block134:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1606));
// line 472
org$frostlang$frostc$MethodDecl$Kind $tmp1622 = *(&local83);
frost$core$Int64 $tmp1623 = $tmp1622.$rawValue;
frost$core$Int64 $tmp1624 = (frost$core$Int64) {0};
frost$core$Bit $tmp1625 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1623, $tmp1624);
bool $tmp1626 = $tmp1625.value;
if ($tmp1626) goto block136; else goto block137;
block136:;
// line 473
frost$core$MutableString* $tmp1627 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1627, &$s1628);
goto block135;
block137:;
frost$core$Int64 $tmp1629 = (frost$core$Int64) {1};
frost$core$Bit $tmp1630 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1623, $tmp1629);
bool $tmp1631 = $tmp1630.value;
if ($tmp1631) goto block138; else goto block139;
block138:;
// line 474
frost$core$MutableString* $tmp1632 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1632, &$s1633);
goto block135;
block139:;
frost$core$Int64 $tmp1634 = (frost$core$Int64) {2};
frost$core$Bit $tmp1635 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1623, $tmp1634);
bool $tmp1636 = $tmp1635.value;
if ($tmp1636) goto block140; else goto block135;
block140:;
goto block135;
block135:;
// line 477
frost$core$MutableString* $tmp1637 = *(&local89);
frost$core$String* $tmp1638 = *(&local84);
frost$core$MutableString$append$frost$core$String($tmp1637, $tmp1638);
// line 478
org$frostlang$frostc$FixedArray* $tmp1639 = *(&local85);
frost$core$Bit $tmp1640 = frost$core$Bit$init$builtin_bit($tmp1639 != NULL);
bool $tmp1641 = $tmp1640.value;
if ($tmp1641) goto block141; else goto block142;
block141:;
// line 479
frost$core$MutableString* $tmp1642 = *(&local89);
org$frostlang$frostc$FixedArray* $tmp1643 = *(&local85);
ITable* $tmp1644 = ((frost$collections$CollectionView*) $tmp1643)->$class->itable;
while ($tmp1644->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1644 = $tmp1644->next;
}
$fn1646 $tmp1645 = $tmp1644->methods[1];
frost$core$String* $tmp1647 = $tmp1645(((frost$collections$CollectionView*) $tmp1643));
frost$core$String* $tmp1648 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1649, $tmp1647);
frost$core$String* $tmp1650 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1648, &$s1651);
frost$core$MutableString$append$frost$core$String($tmp1642, $tmp1650);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
goto block142;
block142:;
// line 481
frost$core$MutableString* $tmp1652 = *(&local89);
org$frostlang$frostc$FixedArray* $tmp1653 = *(&local86);
ITable* $tmp1654 = ((frost$collections$CollectionView*) $tmp1653)->$class->itable;
while ($tmp1654->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1654 = $tmp1654->next;
}
$fn1656 $tmp1655 = $tmp1654->methods[1];
frost$core$String* $tmp1657 = $tmp1655(((frost$collections$CollectionView*) $tmp1653));
frost$core$String* $tmp1658 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1659, $tmp1657);
frost$core$String* $tmp1660 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1658, &$s1661);
frost$core$MutableString$append$frost$core$String($tmp1652, $tmp1660);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
// line 482
org$frostlang$frostc$ASTNode* $tmp1662 = *(&local87);
frost$core$Bit $tmp1663 = frost$core$Bit$init$builtin_bit($tmp1662 != NULL);
bool $tmp1664 = $tmp1663.value;
if ($tmp1664) goto block143; else goto block144;
block143:;
// line 483
frost$core$MutableString* $tmp1665 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1666 = *(&local87);
frost$core$String* $tmp1667 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1668, ((frost$core$Object*) $tmp1666));
frost$core$String* $tmp1669 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1667, &$s1670);
frost$core$MutableString$append$frost$core$String($tmp1665, $tmp1669);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1667));
goto block144;
block144:;
// line 485
org$frostlang$frostc$FixedArray* $tmp1671 = *(&local88);
frost$core$Bit $tmp1672 = frost$core$Bit$init$builtin_bit($tmp1671 != NULL);
bool $tmp1673 = $tmp1672.value;
if ($tmp1673) goto block145; else goto block146;
block145:;
// line 486
frost$core$MutableString* $tmp1674 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1674, &$s1675);
// line 487
org$frostlang$frostc$FixedArray* $tmp1676 = *(&local88);
ITable* $tmp1677 = ((frost$collections$Iterable*) $tmp1676)->$class->itable;
while ($tmp1677->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1677 = $tmp1677->next;
}
$fn1679 $tmp1678 = $tmp1677->methods[0];
frost$collections$Iterator* $tmp1680 = $tmp1678(((frost$collections$Iterable*) $tmp1676));
goto block147;
block147:;
ITable* $tmp1681 = $tmp1680->$class->itable;
while ($tmp1681->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1681 = $tmp1681->next;
}
$fn1683 $tmp1682 = $tmp1681->methods[0];
frost$core$Bit $tmp1684 = $tmp1682($tmp1680);
bool $tmp1685 = $tmp1684.value;
if ($tmp1685) goto block149; else goto block148;
block148:;
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1686 = $tmp1680->$class->itable;
while ($tmp1686->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1686 = $tmp1686->next;
}
$fn1688 $tmp1687 = $tmp1686->methods[1];
frost$core$Object* $tmp1689 = $tmp1687($tmp1680);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1689)));
org$frostlang$frostc$ASTNode* $tmp1690 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1690));
*(&local91) = ((org$frostlang$frostc$ASTNode*) $tmp1689);
// line 488
frost$core$MutableString* $tmp1691 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1692 = *(&local91);
frost$core$String* $tmp1693 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1692), &$s1694);
frost$core$MutableString$append$frost$core$String($tmp1691, $tmp1693);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
frost$core$Frost$unref$frost$core$Object$Q($tmp1689);
org$frostlang$frostc$ASTNode* $tmp1695 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block147;
block149:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
// line 490
frost$core$MutableString* $tmp1696 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1696, &$s1697);
goto block146;
block146:;
// line 492
frost$core$MutableString* $tmp1698 = *(&local89);
frost$core$String* $tmp1699 = frost$core$MutableString$finish$R$frost$core$String($tmp1698);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1699));
frost$core$MutableString* $tmp1700 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1700));
*(&local89) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1701 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1702 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1702));
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1703 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1703));
*(&local86) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1704 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1705 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
*(&local84) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1706 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
*(&local82) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1707 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
*(&local81) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1699;
block129:;
frost$core$Int64 $tmp1708 = (frost$core$Int64) {30};
frost$core$Bit $tmp1709 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1708);
bool $tmp1710 = $tmp1709.value;
if ($tmp1710) goto block150; else goto block151;
block150:;
org$frostlang$frostc$Position* $tmp1711 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1712 = *$tmp1711;
org$frostlang$frostc$parser$Token$Kind* $tmp1713 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp1714 = *$tmp1713;
*(&local92) = $tmp1714;
org$frostlang$frostc$FixedArray** $tmp1715 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1716 = *$tmp1715;
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
org$frostlang$frostc$FixedArray* $tmp1717 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
*(&local93) = $tmp1716;
org$frostlang$frostc$ASTNode** $tmp1718 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1719 = *$tmp1718;
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
org$frostlang$frostc$ASTNode* $tmp1720 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
*(&local94) = $tmp1719;
// line 495
*(&local95) = ((frost$core$String*) NULL);
// line 496
org$frostlang$frostc$parser$Token$Kind $tmp1721 = *(&local92);
frost$core$Int64 $tmp1722 = $tmp1721.$rawValue;
frost$core$Int64 $tmp1723 = (frost$core$Int64) {94};
frost$core$Bit $tmp1724 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1722, $tmp1723);
bool $tmp1725 = $tmp1724.value;
if ($tmp1725) goto block153; else goto block154;
block153:;
// line 498
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1726));
frost$core$String* $tmp1727 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
*(&local95) = &$s1728;
goto block152;
block154:;
frost$core$Int64 $tmp1729 = (frost$core$Int64) {95};
frost$core$Bit $tmp1730 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1722, $tmp1729);
bool $tmp1731 = $tmp1730.value;
if ($tmp1731) goto block155; else goto block156;
block155:;
// line 501
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1732));
frost$core$String* $tmp1733 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
*(&local95) = &$s1734;
goto block152;
block156:;
frost$core$Int64 $tmp1735 = (frost$core$Int64) {96};
frost$core$Bit $tmp1736 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1722, $tmp1735);
bool $tmp1737 = $tmp1736.value;
if ($tmp1737) goto block157; else goto block158;
block157:;
// line 504
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1738));
frost$core$String* $tmp1739 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
*(&local95) = &$s1740;
goto block152;
block158:;
frost$core$Int64 $tmp1741 = (frost$core$Int64) {97};
frost$core$Bit $tmp1742 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1722, $tmp1741);
bool $tmp1743 = $tmp1742.value;
if ($tmp1743) goto block159; else goto block152;
block159:;
// line 507
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1744));
frost$core$String* $tmp1745 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1745));
*(&local95) = &$s1746;
goto block152;
block152:;
// line 510
org$frostlang$frostc$FixedArray* $tmp1747 = *(&local93);
ITable* $tmp1748 = ((frost$collections$CollectionView*) $tmp1747)->$class->itable;
while ($tmp1748->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1748 = $tmp1748->next;
}
$fn1750 $tmp1749 = $tmp1748->methods[1];
frost$core$String* $tmp1751 = $tmp1749(((frost$collections$CollectionView*) $tmp1747));
frost$core$String* $tmp1752 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1753, $tmp1751);
frost$core$String* $tmp1754 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1752, &$s1755);
frost$core$String* $tmp1756 = *(&local95);
frost$core$String* $tmp1757 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1754, $tmp1756);
frost$core$String* $tmp1758 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1757, &$s1759);
*(&local96) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1758));
frost$core$String* $tmp1760 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
*(&local96) = $tmp1758;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1758));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1757));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
// line 511
org$frostlang$frostc$ASTNode* $tmp1761 = *(&local94);
frost$core$Bit $tmp1762 = frost$core$Bit$init$builtin_bit($tmp1761 != NULL);
bool $tmp1763 = $tmp1762.value;
if ($tmp1763) goto block160; else goto block161;
block160:;
// line 512
frost$core$String* $tmp1764 = *(&local96);
frost$core$String* $tmp1765 = frost$core$String$get_asString$R$frost$core$String($tmp1764);
frost$core$String* $tmp1766 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1765, &$s1767);
org$frostlang$frostc$ASTNode* $tmp1768 = *(&local94);
frost$core$String* $tmp1769 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1766, ((frost$core$Object*) $tmp1768));
frost$core$String* $tmp1770 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1769, &$s1771);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1765));
frost$core$String* $tmp1772 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
*(&local96) = ((frost$core$String*) NULL);
frost$core$String* $tmp1773 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1773));
*(&local95) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1774 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1774));
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1775 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1770;
block161:;
// line 514
frost$core$String* $tmp1776 = *(&local96);
frost$core$String* $tmp1777 = frost$core$String$get_asString$R$frost$core$String($tmp1776);
frost$core$String* $tmp1778 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1777, &$s1779);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1777));
frost$core$String* $tmp1780 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1780));
*(&local96) = ((frost$core$String*) NULL);
frost$core$String* $tmp1781 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1781));
*(&local95) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1782 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1783 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1778;
block151:;
frost$core$Int64 $tmp1784 = (frost$core$Int64) {31};
frost$core$Bit $tmp1785 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1784);
bool $tmp1786 = $tmp1785.value;
if ($tmp1786) goto block162; else goto block163;
block162:;
// line 517
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1787));
return &$s1788;
block163:;
frost$core$Int64 $tmp1789 = (frost$core$Int64) {32};
frost$core$Bit $tmp1790 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1789);
bool $tmp1791 = $tmp1790.value;
if ($tmp1791) goto block164; else goto block165;
block164:;
org$frostlang$frostc$Position* $tmp1792 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1793 = *$tmp1792;
org$frostlang$frostc$ASTNode** $tmp1794 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1795 = *$tmp1794;
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1795));
org$frostlang$frostc$ASTNode* $tmp1796 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
*(&local97) = $tmp1795;
// line 520
org$frostlang$frostc$ASTNode* $tmp1797 = *(&local97);
frost$core$String* $tmp1798 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1797), &$s1799);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
org$frostlang$frostc$ASTNode* $tmp1800 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1798;
block165:;
frost$core$Int64 $tmp1801 = (frost$core$Int64) {33};
frost$core$Bit $tmp1802 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1801);
bool $tmp1803 = $tmp1802.value;
if ($tmp1803) goto block166; else goto block167;
block166:;
org$frostlang$frostc$Position* $tmp1804 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1805 = *$tmp1804;
frost$core$String** $tmp1806 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1807 = *$tmp1806;
*(&local98) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
frost$core$String* $tmp1808 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1808));
*(&local98) = $tmp1807;
// line 523
frost$core$String* $tmp1809 = *(&local98);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
frost$core$String* $tmp1810 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1810));
*(&local98) = ((frost$core$String*) NULL);
return $tmp1809;
block167:;
frost$core$Int64 $tmp1811 = (frost$core$Int64) {34};
frost$core$Bit $tmp1812 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1811);
bool $tmp1813 = $tmp1812.value;
if ($tmp1813) goto block168; else goto block169;
block168:;
org$frostlang$frostc$Position* $tmp1814 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1815 = *$tmp1814;
frost$core$String** $tmp1816 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1817 = *$tmp1816;
*(&local99) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1817));
frost$core$String* $tmp1818 = *(&local99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
*(&local99) = $tmp1817;
org$frostlang$frostc$ASTNode** $tmp1819 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1820 = *$tmp1819;
*(&local100) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1820));
org$frostlang$frostc$ASTNode* $tmp1821 = *(&local100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
*(&local100) = $tmp1820;
// line 526
frost$core$String* $tmp1822 = *(&local99);
frost$core$String* $tmp1823 = frost$core$String$get_asString$R$frost$core$String($tmp1822);
frost$core$String* $tmp1824 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1823, &$s1825);
org$frostlang$frostc$ASTNode* $tmp1826 = *(&local100);
frost$core$String* $tmp1827 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1824, ((frost$core$Object*) $tmp1826));
frost$core$String* $tmp1828 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1827, &$s1829);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
org$frostlang$frostc$ASTNode* $tmp1830 = *(&local100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1830));
*(&local100) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1831 = *(&local99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
*(&local99) = ((frost$core$String*) NULL);
return $tmp1828;
block169:;
frost$core$Int64 $tmp1832 = (frost$core$Int64) {35};
frost$core$Bit $tmp1833 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1832);
bool $tmp1834 = $tmp1833.value;
if ($tmp1834) goto block170; else goto block171;
block170:;
org$frostlang$frostc$Position* $tmp1835 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1836 = *$tmp1835;
org$frostlang$frostc$ASTNode** $tmp1837 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1838 = *$tmp1837;
*(&local101) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1838));
org$frostlang$frostc$ASTNode* $tmp1839 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
*(&local101) = $tmp1838;
frost$core$Bit* $tmp1840 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp1841 = *$tmp1840;
*(&local102) = $tmp1841;
org$frostlang$frostc$ASTNode** $tmp1842 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
org$frostlang$frostc$ASTNode* $tmp1843 = *$tmp1842;
*(&local103) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1843));
org$frostlang$frostc$ASTNode* $tmp1844 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
*(&local103) = $tmp1843;
org$frostlang$frostc$ASTNode** $tmp1845 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp1846 = *$tmp1845;
*(&local104) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
org$frostlang$frostc$ASTNode* $tmp1847 = *(&local104);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
*(&local104) = $tmp1846;
// line 529
frost$core$MutableString* $tmp1848 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1848);
*(&local105) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1848));
frost$core$MutableString* $tmp1849 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
*(&local105) = $tmp1848;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1848));
// line 530
org$frostlang$frostc$ASTNode* $tmp1850 = *(&local101);
frost$core$Bit $tmp1851 = frost$core$Bit$init$builtin_bit($tmp1850 != NULL);
bool $tmp1852 = $tmp1851.value;
if ($tmp1852) goto block172; else goto block173;
block172:;
// line 531
frost$core$MutableString* $tmp1853 = *(&local105);
org$frostlang$frostc$ASTNode* $tmp1854 = *(&local101);
frost$core$MutableString$append$frost$core$Object($tmp1853, ((frost$core$Object*) $tmp1854));
goto block173;
block173:;
// line 533
frost$core$Bit $tmp1855 = *(&local102);
bool $tmp1856 = $tmp1855.value;
if ($tmp1856) goto block174; else goto block176;
block174:;
// line 534
frost$core$MutableString* $tmp1857 = *(&local105);
frost$core$MutableString$append$frost$core$String($tmp1857, &$s1858);
goto block175;
block176:;
// line 1
// line 537
frost$core$MutableString* $tmp1859 = *(&local105);
frost$core$MutableString$append$frost$core$String($tmp1859, &$s1860);
goto block175;
block175:;
// line 539
org$frostlang$frostc$ASTNode* $tmp1861 = *(&local103);
frost$core$Bit $tmp1862 = frost$core$Bit$init$builtin_bit($tmp1861 != NULL);
bool $tmp1863 = $tmp1862.value;
if ($tmp1863) goto block177; else goto block178;
block177:;
// line 540
frost$core$MutableString* $tmp1864 = *(&local105);
org$frostlang$frostc$ASTNode* $tmp1865 = *(&local103);
frost$core$MutableString$append$frost$core$Object($tmp1864, ((frost$core$Object*) $tmp1865));
goto block178;
block178:;
// line 542
org$frostlang$frostc$ASTNode* $tmp1866 = *(&local104);
frost$core$Bit $tmp1867 = frost$core$Bit$init$builtin_bit($tmp1866 != NULL);
bool $tmp1868 = $tmp1867.value;
if ($tmp1868) goto block179; else goto block180;
block179:;
// line 543
frost$core$MutableString* $tmp1869 = *(&local105);
org$frostlang$frostc$ASTNode* $tmp1870 = *(&local104);
frost$core$String* $tmp1871 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1872, ((frost$core$Object*) $tmp1870));
frost$core$MutableString$append$frost$core$String($tmp1869, $tmp1871);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
goto block180;
block180:;
// line 545
frost$core$MutableString* $tmp1873 = *(&local105);
frost$core$String* $tmp1874 = frost$core$MutableString$finish$R$frost$core$String($tmp1873);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
frost$core$MutableString* $tmp1875 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1875));
*(&local105) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1876 = *(&local104);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
*(&local104) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1877 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1877));
*(&local103) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1878 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1878));
*(&local101) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1874;
block171:;
frost$core$Int64 $tmp1879 = (frost$core$Int64) {36};
frost$core$Bit $tmp1880 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1879);
bool $tmp1881 = $tmp1880.value;
if ($tmp1881) goto block181; else goto block182;
block181:;
org$frostlang$frostc$Position* $tmp1882 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1883 = *$tmp1882;
frost$core$Real64* $tmp1884 = (frost$core$Real64*) (param0->$data + 16);
frost$core$Real64 $tmp1885 = *$tmp1884;
*(&local106) = $tmp1885;
// line 548
frost$core$Real64 $tmp1886 = *(&local106);
frost$core$Real64$wrapper* $tmp1887;
$tmp1887 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp1887->value = $tmp1886;
$fn1889 $tmp1888 = ($fn1889) ((frost$core$Object*) $tmp1887)->$class->vtable[0];
frost$core$String* $tmp1890 = $tmp1888(((frost$core$Object*) $tmp1887));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
return $tmp1890;
block182:;
frost$core$Int64 $tmp1891 = (frost$core$Int64) {37};
frost$core$Bit $tmp1892 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1891);
bool $tmp1893 = $tmp1892.value;
if ($tmp1893) goto block183; else goto block184;
block183:;
org$frostlang$frostc$Position* $tmp1894 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1895 = *$tmp1894;
frost$core$String** $tmp1896 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1897 = *$tmp1896;
*(&local107) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
frost$core$String* $tmp1898 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1898));
*(&local107) = $tmp1897;
// line 551
frost$core$String* $tmp1899 = *(&local107);
frost$core$String* $tmp1900 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1901, $tmp1899);
frost$core$String* $tmp1902 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1900, &$s1903);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
frost$core$String* $tmp1904 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
*(&local107) = ((frost$core$String*) NULL);
return $tmp1902;
block184:;
frost$core$Int64 $tmp1905 = (frost$core$Int64) {38};
frost$core$Bit $tmp1906 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1905);
bool $tmp1907 = $tmp1906.value;
if ($tmp1907) goto block185; else goto block186;
block185:;
org$frostlang$frostc$Position* $tmp1908 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1909 = *$tmp1908;
org$frostlang$frostc$ASTNode** $tmp1910 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1911 = *$tmp1910;
*(&local108) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
org$frostlang$frostc$ASTNode* $tmp1912 = *(&local108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
*(&local108) = $tmp1911;
// line 554
org$frostlang$frostc$ASTNode* $tmp1913 = *(&local108);
frost$core$Bit $tmp1914 = frost$core$Bit$init$builtin_bit($tmp1913 != NULL);
bool $tmp1915 = $tmp1914.value;
if ($tmp1915) goto block187; else goto block188;
block187:;
// line 555
org$frostlang$frostc$ASTNode* $tmp1916 = *(&local108);
frost$core$String* $tmp1917 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1918, ((frost$core$Object*) $tmp1916));
frost$core$String* $tmp1919 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1917, &$s1920);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
org$frostlang$frostc$ASTNode* $tmp1921 = *(&local108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
*(&local108) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1919;
block188:;
// line 557
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1922));
org$frostlang$frostc$ASTNode* $tmp1923 = *(&local108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
*(&local108) = ((org$frostlang$frostc$ASTNode*) NULL);
return &$s1924;
block186:;
frost$core$Int64 $tmp1925 = (frost$core$Int64) {39};
frost$core$Bit $tmp1926 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1925);
bool $tmp1927 = $tmp1926.value;
if ($tmp1927) goto block189; else goto block190;
block189:;
// line 560
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1928));
return &$s1929;
block190:;
frost$core$Int64 $tmp1930 = (frost$core$Int64) {40};
frost$core$Bit $tmp1931 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1930);
bool $tmp1932 = $tmp1931.value;
if ($tmp1932) goto block191; else goto block192;
block191:;
org$frostlang$frostc$Position* $tmp1933 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1934 = *$tmp1933;
frost$core$String** $tmp1935 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1936 = *$tmp1935;
*(&local109) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1936));
frost$core$String* $tmp1937 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1937));
*(&local109) = $tmp1936;
// line 563
frost$core$String* $tmp1938 = *(&local109);
frost$core$String* $tmp1939 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp1938, &$s1940);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
frost$core$String* $tmp1941 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1941));
*(&local109) = ((frost$core$String*) NULL);
return $tmp1939;
block192:;
frost$core$Int64 $tmp1942 = (frost$core$Int64) {41};
frost$core$Bit $tmp1943 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1942);
bool $tmp1944 = $tmp1943.value;
if ($tmp1944) goto block193; else goto block194;
block193:;
// line 566
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1945));
return &$s1946;
block194:;
frost$core$Int64 $tmp1947 = (frost$core$Int64) {43};
frost$core$Bit $tmp1948 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1947);
bool $tmp1949 = $tmp1948.value;
if ($tmp1949) goto block195; else goto block196;
block195:;
org$frostlang$frostc$Position* $tmp1950 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1951 = *$tmp1950;
org$frostlang$frostc$FixedArray** $tmp1952 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp1953 = *$tmp1952;
*(&local110) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1953));
org$frostlang$frostc$FixedArray* $tmp1954 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1954));
*(&local110) = $tmp1953;
// line 569
org$frostlang$frostc$FixedArray* $tmp1955 = *(&local110);
ITable* $tmp1956 = ((frost$collections$CollectionView*) $tmp1955)->$class->itable;
while ($tmp1956->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1956 = $tmp1956->next;
}
$fn1958 $tmp1957 = $tmp1956->methods[1];
frost$core$String* $tmp1959 = $tmp1957(((frost$collections$CollectionView*) $tmp1955));
frost$core$String* $tmp1960 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1961, $tmp1959);
frost$core$String* $tmp1962 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1960, &$s1963);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
org$frostlang$frostc$FixedArray* $tmp1964 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1964));
*(&local110) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1962;
block196:;
frost$core$Int64 $tmp1965 = (frost$core$Int64) {44};
frost$core$Bit $tmp1966 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1965);
bool $tmp1967 = $tmp1966.value;
if ($tmp1967) goto block197; else goto block198;
block197:;
org$frostlang$frostc$Position* $tmp1968 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1969 = *$tmp1968;
org$frostlang$frostc$FixedArray** $tmp1970 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp1971 = *$tmp1970;
*(&local111) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1971));
org$frostlang$frostc$FixedArray* $tmp1972 = *(&local111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
*(&local111) = $tmp1971;
// line 572
org$frostlang$frostc$FixedArray* $tmp1973 = *(&local111);
ITable* $tmp1974 = ((frost$collections$CollectionView*) $tmp1973)->$class->itable;
while ($tmp1974->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1974 = $tmp1974->next;
}
$fn1976 $tmp1975 = $tmp1974->methods[1];
frost$core$String* $tmp1977 = $tmp1975(((frost$collections$CollectionView*) $tmp1973));
frost$core$String* $tmp1978 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1979, $tmp1977);
frost$core$String* $tmp1980 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1978, &$s1981);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
org$frostlang$frostc$FixedArray* $tmp1982 = *(&local111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
*(&local111) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1980;
block198:;
frost$core$Int64 $tmp1983 = (frost$core$Int64) {42};
frost$core$Bit $tmp1984 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp1983);
bool $tmp1985 = $tmp1984.value;
if ($tmp1985) goto block199; else goto block200;
block199:;
org$frostlang$frostc$Position* $tmp1986 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1987 = *$tmp1986;
org$frostlang$frostc$FixedArray** $tmp1988 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp1989 = *$tmp1988;
*(&local112) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1989));
org$frostlang$frostc$FixedArray* $tmp1990 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
*(&local112) = $tmp1989;
org$frostlang$frostc$ASTNode** $tmp1991 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1992 = *$tmp1991;
*(&local113) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
org$frostlang$frostc$ASTNode* $tmp1993 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
*(&local113) = $tmp1992;
org$frostlang$frostc$FixedArray** $tmp1994 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1995 = *$tmp1994;
*(&local114) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
org$frostlang$frostc$FixedArray* $tmp1996 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
*(&local114) = $tmp1995;
// line 575
frost$core$MutableString* $tmp1997 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp1997, &$s1998);
*(&local115) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1997));
frost$core$MutableString* $tmp1999 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
*(&local115) = $tmp1997;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1997));
// line 576
org$frostlang$frostc$FixedArray* $tmp2000 = *(&local112);
frost$core$MutableString* $tmp2001 = *(&local115);
frost$core$MutableMethod* $tmp2003 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp2003, ((frost$core$Int8*) frost$core$MutableString$append$frost$core$Object), ((frost$core$Object*) $tmp2001));
ITable* $tmp2004 = ((frost$collections$CollectionView*) $tmp2000)->$class->itable;
while ($tmp2004->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2004 = $tmp2004->next;
}
$fn2006 $tmp2005 = $tmp2004->methods[7];
$tmp2005(((frost$collections$CollectionView*) $tmp2000), $tmp2003);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2003));
// line 577
org$frostlang$frostc$ASTNode* $tmp2007 = *(&local113);
frost$core$Bit $tmp2008 = frost$core$Bit$init$builtin_bit($tmp2007 != NULL);
bool $tmp2009 = $tmp2008.value;
if ($tmp2009) goto block201; else goto block203;
block201:;
// line 578
frost$core$MutableString* $tmp2010 = *(&local115);
org$frostlang$frostc$ASTNode* $tmp2011 = *(&local113);
frost$core$String* $tmp2012 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2013, ((frost$core$Object*) $tmp2011));
frost$core$String* $tmp2014 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2012, &$s2015);
frost$core$MutableString$append$frost$core$String($tmp2010, $tmp2014);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2014));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
goto block202;
block203:;
// line 1
// line 581
frost$core$MutableString* $tmp2016 = *(&local115);
frost$core$MutableString$append$frost$core$String($tmp2016, &$s2017);
goto block202;
block202:;
// line 583
org$frostlang$frostc$FixedArray* $tmp2018 = *(&local114);
frost$core$MutableString* $tmp2019 = *(&local115);
frost$core$MutableMethod* $tmp2021 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp2021, ((frost$core$Int8*) frost$core$MutableString$append$frost$core$Object), ((frost$core$Object*) $tmp2019));
ITable* $tmp2022 = ((frost$collections$CollectionView*) $tmp2018)->$class->itable;
while ($tmp2022->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2022 = $tmp2022->next;
}
$fn2024 $tmp2023 = $tmp2022->methods[7];
$tmp2023(((frost$collections$CollectionView*) $tmp2018), $tmp2021);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
// line 584
frost$core$MutableString* $tmp2025 = *(&local115);
frost$core$MutableString$append$frost$core$String($tmp2025, &$s2026);
// line 585
frost$core$MutableString* $tmp2027 = *(&local115);
frost$core$String* $tmp2028 = frost$core$MutableString$finish$R$frost$core$String($tmp2027);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
frost$core$MutableString* $tmp2029 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
*(&local115) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2030 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
*(&local114) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2031 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
*(&local113) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2032 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
*(&local112) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2028;
block200:;
frost$core$Int64 $tmp2033 = (frost$core$Int64) {45};
frost$core$Bit $tmp2034 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp2033);
bool $tmp2035 = $tmp2034.value;
if ($tmp2035) goto block204; else goto block205;
block204:;
org$frostlang$frostc$Position* $tmp2036 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2037 = *$tmp2036;
frost$core$String** $tmp2038 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2039 = *$tmp2038;
*(&local116) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2039));
frost$core$String* $tmp2040 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2040));
*(&local116) = $tmp2039;
// line 588
frost$core$String* $tmp2041 = *(&local116);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2041));
frost$core$String* $tmp2042 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2042));
*(&local116) = ((frost$core$String*) NULL);
return $tmp2041;
block205:;
frost$core$Int64 $tmp2043 = (frost$core$Int64) {47};
frost$core$Bit $tmp2044 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp2043);
bool $tmp2045 = $tmp2044.value;
if ($tmp2045) goto block206; else goto block207;
block206:;
org$frostlang$frostc$Position* $tmp2046 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2047 = *$tmp2046;
frost$core$String** $tmp2048 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2049 = *$tmp2048;
*(&local117) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
frost$core$String* $tmp2050 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2050));
*(&local117) = $tmp2049;
org$frostlang$frostc$ASTNode** $tmp2051 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2052 = *$tmp2051;
*(&local118) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2052));
org$frostlang$frostc$ASTNode* $tmp2053 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2053));
*(&local118) = $tmp2052;
// line 591
org$frostlang$frostc$ASTNode* $tmp2054 = *(&local118);
frost$core$Bit $tmp2055 = frost$core$Bit$init$builtin_bit($tmp2054 != NULL);
bool $tmp2056 = $tmp2055.value;
if ($tmp2056) goto block208; else goto block209;
block208:;
// line 592
frost$core$String* $tmp2057 = *(&local117);
frost$core$String* $tmp2058 = frost$core$String$get_asString$R$frost$core$String($tmp2057);
frost$core$String* $tmp2059 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2058, &$s2060);
org$frostlang$frostc$ASTNode* $tmp2061 = *(&local118);
frost$core$String* $tmp2062 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2059, ((frost$core$Object*) $tmp2061));
frost$core$String* $tmp2063 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2062, &$s2064);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2058));
org$frostlang$frostc$ASTNode* $tmp2065 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
*(&local118) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2066 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2066));
*(&local117) = ((frost$core$String*) NULL);
return $tmp2063;
block209:;
// line 594
frost$core$String* $tmp2067 = *(&local117);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
org$frostlang$frostc$ASTNode* $tmp2068 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2068));
*(&local118) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2069 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
*(&local117) = ((frost$core$String*) NULL);
return $tmp2067;
block207:;
frost$core$Int64 $tmp2070 = (frost$core$Int64) {46};
frost$core$Bit $tmp2071 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp2070);
bool $tmp2072 = $tmp2071.value;
if ($tmp2072) goto block210; else goto block211;
block210:;
org$frostlang$frostc$Position* $tmp2073 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2074 = *$tmp2073;
org$frostlang$frostc$FixedArray** $tmp2075 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2076 = *$tmp2075;
*(&local119) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2076));
org$frostlang$frostc$FixedArray* $tmp2077 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2077));
*(&local119) = $tmp2076;
org$frostlang$frostc$ASTNode** $tmp2078 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2079 = *$tmp2078;
*(&local120) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
org$frostlang$frostc$ASTNode* $tmp2080 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2080));
*(&local120) = $tmp2079;
// line 597
org$frostlang$frostc$FixedArray* $tmp2081 = *(&local119);
ITable* $tmp2082 = ((frost$collections$CollectionView*) $tmp2081)->$class->itable;
while ($tmp2082->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2082 = $tmp2082->next;
}
$fn2084 $tmp2083 = $tmp2082->methods[1];
frost$core$String* $tmp2085 = $tmp2083(((frost$collections$CollectionView*) $tmp2081));
frost$core$String* $tmp2086 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2087, $tmp2085);
frost$core$String* $tmp2088 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2086, &$s2089);
org$frostlang$frostc$ASTNode* $tmp2090 = *(&local120);
frost$core$String* $tmp2091 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2088, ((frost$core$Object*) $tmp2090));
frost$core$String* $tmp2092 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2091, &$s2093);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2085));
org$frostlang$frostc$ASTNode* $tmp2094 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
*(&local120) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2095 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2095));
*(&local119) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2092;
block211:;
frost$core$Int64 $tmp2096 = (frost$core$Int64) {48};
frost$core$Bit $tmp2097 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp2096);
bool $tmp2098 = $tmp2097.value;
if ($tmp2098) goto block212; else goto block213;
block212:;
org$frostlang$frostc$Position* $tmp2099 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2100 = *$tmp2099;
org$frostlang$frostc$expression$Unary$Operator* $tmp2101 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 16);
org$frostlang$frostc$expression$Unary$Operator $tmp2102 = *$tmp2101;
*(&local121) = $tmp2102;
org$frostlang$frostc$ASTNode** $tmp2103 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2104 = *$tmp2103;
*(&local122) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
org$frostlang$frostc$ASTNode* $tmp2105 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
*(&local122) = $tmp2104;
// line 600
org$frostlang$frostc$expression$Unary$Operator $tmp2106 = *(&local121);
frost$core$String* $tmp2107 = org$frostlang$frostc$expression$Unary$Operator$get_asString$R$frost$core$String($tmp2106);
frost$core$String* $tmp2108 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2107, &$s2109);
org$frostlang$frostc$ASTNode* $tmp2110 = *(&local122);
frost$core$String* $tmp2111 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2108, ((frost$core$Object*) $tmp2110));
frost$core$String* $tmp2112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2111, &$s2113);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2107));
org$frostlang$frostc$ASTNode* $tmp2114 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
*(&local122) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2112;
block213:;
frost$core$Int64 $tmp2115 = (frost$core$Int64) {49};
frost$core$Bit $tmp2116 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp2115);
bool $tmp2117 = $tmp2116.value;
if ($tmp2117) goto block214; else goto block215;
block214:;
org$frostlang$frostc$Position* $tmp2118 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2119 = *$tmp2118;
org$frostlang$frostc$ASTNode** $tmp2120 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2121 = *$tmp2120;
*(&local123) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
org$frostlang$frostc$ASTNode* $tmp2122 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
*(&local123) = $tmp2121;
// line 603
org$frostlang$frostc$ASTNode* $tmp2123 = *(&local123);
frost$core$Bit $tmp2124 = frost$core$Bit$init$builtin_bit($tmp2123 != NULL);
bool $tmp2125 = $tmp2124.value;
if ($tmp2125) goto block216; else goto block217;
block216:;
// line 604
org$frostlang$frostc$ASTNode* $tmp2126 = *(&local123);
frost$core$String* $tmp2127 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2128, ((frost$core$Object*) $tmp2126));
frost$core$String* $tmp2129 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2127, &$s2130);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
org$frostlang$frostc$ASTNode* $tmp2131 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
*(&local123) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2129;
block217:;
// line 606
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2132));
org$frostlang$frostc$ASTNode* $tmp2133 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
*(&local123) = ((org$frostlang$frostc$ASTNode*) NULL);
return &$s2134;
block215:;
frost$core$Int64 $tmp2135 = (frost$core$Int64) {50};
frost$core$Bit $tmp2136 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp2135);
bool $tmp2137 = $tmp2136.value;
if ($tmp2137) goto block218; else goto block219;
block218:;
org$frostlang$frostc$Position* $tmp2138 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2139 = *$tmp2138;
org$frostlang$frostc$FixedArray** $tmp2140 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2141 = *$tmp2140;
*(&local124) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2141));
org$frostlang$frostc$FixedArray* $tmp2142 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2142));
*(&local124) = $tmp2141;
org$frostlang$frostc$ASTNode** $tmp2143 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2144 = *$tmp2143;
*(&local125) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2144));
org$frostlang$frostc$ASTNode* $tmp2145 = *(&local125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2145));
*(&local125) = $tmp2144;
// line 609
org$frostlang$frostc$FixedArray* $tmp2146 = *(&local124);
ITable* $tmp2147 = ((frost$collections$CollectionView*) $tmp2146)->$class->itable;
while ($tmp2147->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2147 = $tmp2147->next;
}
$fn2149 $tmp2148 = $tmp2147->methods[1];
frost$core$String* $tmp2150 = $tmp2148(((frost$collections$CollectionView*) $tmp2146));
frost$core$String* $tmp2151 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2152, $tmp2150);
frost$core$String* $tmp2153 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2151, &$s2154);
org$frostlang$frostc$ASTNode* $tmp2155 = *(&local125);
frost$core$String* $tmp2156 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2153, ((frost$core$Object*) $tmp2155));
frost$core$String* $tmp2157 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2156, &$s2158);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
org$frostlang$frostc$ASTNode* $tmp2159 = *(&local125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
*(&local125) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2160 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
*(&local124) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2157;
block219:;
frost$core$Int64 $tmp2161 = (frost$core$Int64) {51};
frost$core$Bit $tmp2162 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp2161);
bool $tmp2163 = $tmp2162.value;
if ($tmp2163) goto block220; else goto block221;
block220:;
org$frostlang$frostc$Position* $tmp2164 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2165 = *$tmp2164;
frost$core$String** $tmp2166 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2167 = *$tmp2166;
*(&local126) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2167));
frost$core$String* $tmp2168 = *(&local126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
*(&local126) = $tmp2167;
// line 612
frost$core$String* $tmp2169 = *(&local126);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
frost$core$String* $tmp2170 = *(&local126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
*(&local126) = ((frost$core$String*) NULL);
return $tmp2169;
block221:;
frost$core$Int64 $tmp2171 = (frost$core$Int64) {52};
frost$core$Bit $tmp2172 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp2171);
bool $tmp2173 = $tmp2172.value;
if ($tmp2173) goto block222; else goto block223;
block222:;
org$frostlang$frostc$Position* $tmp2174 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2175 = *$tmp2174;
org$frostlang$frostc$Variable$Kind* $tmp2176 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp2177 = *$tmp2176;
*(&local127) = $tmp2177;
org$frostlang$frostc$FixedArray** $tmp2178 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2179 = *$tmp2178;
*(&local128) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2179));
org$frostlang$frostc$FixedArray* $tmp2180 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2180));
*(&local128) = $tmp2179;
// line 615
frost$core$MutableString* $tmp2181 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2181);
*(&local129) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
frost$core$MutableString* $tmp2182 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
*(&local129) = $tmp2181;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
// line 616
org$frostlang$frostc$Variable$Kind $tmp2183 = *(&local127);
frost$core$Int64 $tmp2184 = $tmp2183.$rawValue;
frost$core$Int64 $tmp2185 = (frost$core$Int64) {0};
frost$core$Bit $tmp2186 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2184, $tmp2185);
bool $tmp2187 = $tmp2186.value;
if ($tmp2187) goto block225; else goto block226;
block225:;
// line 617
frost$core$MutableString* $tmp2188 = *(&local129);
frost$core$MutableString$append$frost$core$String($tmp2188, &$s2189);
goto block224;
block226:;
frost$core$Int64 $tmp2190 = (frost$core$Int64) {1};
frost$core$Bit $tmp2191 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2184, $tmp2190);
bool $tmp2192 = $tmp2191.value;
if ($tmp2192) goto block227; else goto block228;
block227:;
// line 618
frost$core$MutableString* $tmp2193 = *(&local129);
frost$core$MutableString$append$frost$core$String($tmp2193, &$s2194);
goto block224;
block228:;
frost$core$Int64 $tmp2195 = (frost$core$Int64) {2};
frost$core$Bit $tmp2196 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2184, $tmp2195);
bool $tmp2197 = $tmp2196.value;
if ($tmp2197) goto block229; else goto block230;
block229:;
// line 619
frost$core$MutableString* $tmp2198 = *(&local129);
frost$core$MutableString$append$frost$core$String($tmp2198, &$s2199);
goto block224;
block230:;
frost$core$Int64 $tmp2200 = (frost$core$Int64) {3};
frost$core$Bit $tmp2201 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2184, $tmp2200);
bool $tmp2202 = $tmp2201.value;
if ($tmp2202) goto block231; else goto block224;
block231:;
// line 620
frost$core$MutableString* $tmp2203 = *(&local129);
frost$core$MutableString$append$frost$core$String($tmp2203, &$s2204);
goto block224;
block224:;
// line 622
frost$core$MutableString* $tmp2205 = *(&local129);
org$frostlang$frostc$FixedArray* $tmp2206 = *(&local128);
ITable* $tmp2207 = ((frost$collections$CollectionView*) $tmp2206)->$class->itable;
while ($tmp2207->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2207 = $tmp2207->next;
}
$fn2209 $tmp2208 = $tmp2207->methods[1];
frost$core$String* $tmp2210 = $tmp2208(((frost$collections$CollectionView*) $tmp2206));
frost$core$MutableString$append$frost$core$String($tmp2205, $tmp2210);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2210));
// line 623
frost$core$MutableString* $tmp2211 = *(&local129);
frost$core$String* $tmp2212 = frost$core$MutableString$finish$R$frost$core$String($tmp2211);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2212));
frost$core$MutableString* $tmp2213 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2213));
*(&local129) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2214 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2214));
*(&local128) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2212;
block223:;
frost$core$Int64 $tmp2215 = (frost$core$Int64) {53};
frost$core$Bit $tmp2216 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp2215);
bool $tmp2217 = $tmp2216.value;
if ($tmp2217) goto block232; else goto block233;
block232:;
org$frostlang$frostc$Position* $tmp2218 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2219 = *$tmp2218;
org$frostlang$frostc$FixedArray** $tmp2220 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2221 = *$tmp2220;
*(&local130) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2221));
org$frostlang$frostc$FixedArray* $tmp2222 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
*(&local130) = $tmp2221;
org$frostlang$frostc$FixedArray** $tmp2223 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2224 = *$tmp2223;
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
org$frostlang$frostc$FixedArray* $tmp2225 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2225));
*(&local131) = $tmp2224;
// line 626
frost$core$MutableString* $tmp2226 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2226, &$s2227);
*(&local132) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
frost$core$MutableString* $tmp2228 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
*(&local132) = $tmp2226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
// line 627
*(&local133) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2229));
frost$core$String* $tmp2230 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
*(&local133) = &$s2231;
// line 628
org$frostlang$frostc$FixedArray* $tmp2232 = *(&local130);
ITable* $tmp2233 = ((frost$collections$Iterable*) $tmp2232)->$class->itable;
while ($tmp2233->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2233 = $tmp2233->next;
}
$fn2235 $tmp2234 = $tmp2233->methods[0];
frost$collections$Iterator* $tmp2236 = $tmp2234(((frost$collections$Iterable*) $tmp2232));
goto block234;
block234:;
ITable* $tmp2237 = $tmp2236->$class->itable;
while ($tmp2237->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2237 = $tmp2237->next;
}
$fn2239 $tmp2238 = $tmp2237->methods[0];
frost$core$Bit $tmp2240 = $tmp2238($tmp2236);
bool $tmp2241 = $tmp2240.value;
if ($tmp2241) goto block236; else goto block235;
block235:;
*(&local134) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2242 = $tmp2236->$class->itable;
while ($tmp2242->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2242 = $tmp2242->next;
}
$fn2244 $tmp2243 = $tmp2242->methods[1];
frost$core$Object* $tmp2245 = $tmp2243($tmp2236);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2245)));
org$frostlang$frostc$ASTNode* $tmp2246 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2246));
*(&local134) = ((org$frostlang$frostc$ASTNode*) $tmp2245);
// line 629
frost$core$MutableString* $tmp2247 = *(&local132);
frost$core$String* $tmp2248 = *(&local133);
frost$core$String* $tmp2249 = frost$core$String$get_asString$R$frost$core$String($tmp2248);
frost$core$String* $tmp2250 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2249, &$s2251);
org$frostlang$frostc$ASTNode* $tmp2252 = *(&local134);
frost$core$String* $tmp2253 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2250, ((frost$core$Object*) $tmp2252));
frost$core$String* $tmp2254 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2253, &$s2255);
frost$core$MutableString$append$frost$core$String($tmp2247, $tmp2254);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2249));
frost$core$Frost$unref$frost$core$Object$Q($tmp2245);
org$frostlang$frostc$ASTNode* $tmp2256 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
*(&local134) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block234;
block236:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2236));
// line 631
frost$core$MutableString* $tmp2257 = *(&local132);
frost$core$MutableString$append$frost$core$String($tmp2257, &$s2258);
// line 632
org$frostlang$frostc$FixedArray* $tmp2259 = *(&local131);
ITable* $tmp2260 = ((frost$collections$Iterable*) $tmp2259)->$class->itable;
while ($tmp2260->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2260 = $tmp2260->next;
}
$fn2262 $tmp2261 = $tmp2260->methods[0];
frost$collections$Iterator* $tmp2263 = $tmp2261(((frost$collections$Iterable*) $tmp2259));
goto block237;
block237:;
ITable* $tmp2264 = $tmp2263->$class->itable;
while ($tmp2264->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2264 = $tmp2264->next;
}
$fn2266 $tmp2265 = $tmp2264->methods[0];
frost$core$Bit $tmp2267 = $tmp2265($tmp2263);
bool $tmp2268 = $tmp2267.value;
if ($tmp2268) goto block239; else goto block238;
block238:;
*(&local135) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2269 = $tmp2263->$class->itable;
while ($tmp2269->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2269 = $tmp2269->next;
}
$fn2271 $tmp2270 = $tmp2269->methods[1];
frost$core$Object* $tmp2272 = $tmp2270($tmp2263);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2272)));
org$frostlang$frostc$ASTNode* $tmp2273 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
*(&local135) = ((org$frostlang$frostc$ASTNode*) $tmp2272);
// line 633
frost$core$MutableString* $tmp2274 = *(&local132);
org$frostlang$frostc$ASTNode* $tmp2275 = *(&local135);
frost$core$String* $tmp2276 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2277, ((frost$core$Object*) $tmp2275));
frost$core$MutableString$append$frost$core$String($tmp2274, $tmp2276);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2276));
frost$core$Frost$unref$frost$core$Object$Q($tmp2272);
org$frostlang$frostc$ASTNode* $tmp2278 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2278));
*(&local135) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block237;
block239:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2263));
// line 635
frost$core$MutableString* $tmp2279 = *(&local132);
frost$core$String* $tmp2280 = frost$core$MutableString$finish$R$frost$core$String($tmp2279);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2280));
frost$core$String* $tmp2281 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2281));
*(&local133) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2282 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2282));
*(&local132) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2283 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2283));
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2284 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2284));
*(&local130) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2280;
block233:;
frost$core$Int64 $tmp2285 = (frost$core$Int64) {54};
frost$core$Bit $tmp2286 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp551, $tmp2285);
bool $tmp2287 = $tmp2286.value;
if ($tmp2287) goto block240; else goto block241;
block240:;
org$frostlang$frostc$Position* $tmp2288 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2289 = *$tmp2288;
frost$core$String** $tmp2290 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2291 = *$tmp2290;
*(&local136) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
frost$core$String* $tmp2292 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
*(&local136) = $tmp2291;
org$frostlang$frostc$ASTNode** $tmp2293 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2294 = *$tmp2293;
*(&local137) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2294));
org$frostlang$frostc$ASTNode* $tmp2295 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
*(&local137) = $tmp2294;
org$frostlang$frostc$FixedArray** $tmp2296 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2297 = *$tmp2296;
*(&local138) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2297));
org$frostlang$frostc$FixedArray* $tmp2298 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2298));
*(&local138) = $tmp2297;
// line 638
frost$core$MutableString* $tmp2299 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2299);
*(&local139) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
frost$core$MutableString* $tmp2300 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
*(&local139) = $tmp2299;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
// line 639
frost$core$String* $tmp2301 = *(&local136);
frost$core$Bit $tmp2302 = frost$core$Bit$init$builtin_bit($tmp2301 != NULL);
bool $tmp2303 = $tmp2302.value;
if ($tmp2303) goto block242; else goto block243;
block242:;
// line 640
frost$core$MutableString* $tmp2304 = *(&local139);
frost$core$String* $tmp2305 = *(&local136);
frost$core$String* $tmp2306 = frost$core$String$get_asString$R$frost$core$String($tmp2305);
frost$core$String* $tmp2307 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2306, &$s2308);
frost$core$MutableString$append$frost$core$String($tmp2304, $tmp2307);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2306));
goto block243;
block243:;
// line 642
frost$core$MutableString* $tmp2309 = *(&local139);
org$frostlang$frostc$ASTNode* $tmp2310 = *(&local137);
frost$core$String* $tmp2311 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2312, ((frost$core$Object*) $tmp2310));
frost$core$String* $tmp2313 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2311, &$s2314);
frost$core$MutableString$append$frost$core$String($tmp2309, $tmp2313);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
// line 643
org$frostlang$frostc$FixedArray* $tmp2315 = *(&local138);
ITable* $tmp2316 = ((frost$collections$Iterable*) $tmp2315)->$class->itable;
while ($tmp2316->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2316 = $tmp2316->next;
}
$fn2318 $tmp2317 = $tmp2316->methods[0];
frost$collections$Iterator* $tmp2319 = $tmp2317(((frost$collections$Iterable*) $tmp2315));
goto block244;
block244:;
ITable* $tmp2320 = $tmp2319->$class->itable;
while ($tmp2320->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2320 = $tmp2320->next;
}
$fn2322 $tmp2321 = $tmp2320->methods[0];
frost$core$Bit $tmp2323 = $tmp2321($tmp2319);
bool $tmp2324 = $tmp2323.value;
if ($tmp2324) goto block246; else goto block245;
block245:;
*(&local140) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2325 = $tmp2319->$class->itable;
while ($tmp2325->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2325 = $tmp2325->next;
}
$fn2327 $tmp2326 = $tmp2325->methods[1];
frost$core$Object* $tmp2328 = $tmp2326($tmp2319);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2328)));
org$frostlang$frostc$ASTNode* $tmp2329 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
*(&local140) = ((org$frostlang$frostc$ASTNode*) $tmp2328);
// line 644
frost$core$MutableString* $tmp2330 = *(&local139);
org$frostlang$frostc$ASTNode* $tmp2331 = *(&local140);
frost$core$String* $tmp2332 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp2331), &$s2333);
frost$core$MutableString$append$frost$core$String($tmp2330, $tmp2332);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
frost$core$Frost$unref$frost$core$Object$Q($tmp2328);
org$frostlang$frostc$ASTNode* $tmp2334 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2334));
*(&local140) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block244;
block246:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2319));
// line 646
frost$core$MutableString* $tmp2335 = *(&local139);
frost$core$MutableString$append$frost$core$String($tmp2335, &$s2336);
// line 647
frost$core$MutableString* $tmp2337 = *(&local139);
frost$core$String* $tmp2338 = frost$core$MutableString$finish$R$frost$core$String($tmp2337);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2338));
frost$core$MutableString* $tmp2339 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2339));
*(&local139) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2340 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
*(&local138) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2341 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
*(&local137) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2342 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
*(&local136) = ((frost$core$String*) NULL);
return $tmp2338;
block241:;
// line 650
frost$core$Int64 $tmp2343 = (frost$core$Int64) {650};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2344, $tmp2343);
abort(); // unreachable
block1:;
goto block247;
block247:;

}
void org$frostlang$frostc$ASTNode$cleanup(org$frostlang$frostc$ASTNode* param0) {

org$frostlang$frostc$Position local0;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$Position local4;
org$frostlang$frostc$FixedArray* local5 = NULL;
org$frostlang$frostc$Position local6;
org$frostlang$frostc$ASTNode* local7 = NULL;
org$frostlang$frostc$ASTNode* local8 = NULL;
org$frostlang$frostc$Position local9;
org$frostlang$frostc$ASTNode* local10 = NULL;
org$frostlang$frostc$Position local11;
org$frostlang$frostc$Position local12;
org$frostlang$frostc$ASTNode* local13 = NULL;
org$frostlang$frostc$expression$Binary$Operator local14;
org$frostlang$frostc$ASTNode* local15 = NULL;
org$frostlang$frostc$Position local16;
frost$core$Bit local17;
org$frostlang$frostc$Position local18;
org$frostlang$frostc$FixedArray* local19 = NULL;
org$frostlang$frostc$Position local20;
frost$core$String* local21 = NULL;
org$frostlang$frostc$Position local22;
org$frostlang$frostc$ASTNode* local23 = NULL;
org$frostlang$frostc$FixedArray* local24 = NULL;
org$frostlang$frostc$Position local25;
org$frostlang$frostc$ASTNode* local26 = NULL;
frost$core$String* local27 = NULL;
org$frostlang$frostc$FixedArray* local28 = NULL;
org$frostlang$frostc$Position local29;
org$frostlang$frostc$ASTNode* local30 = NULL;
org$frostlang$frostc$ChoiceCase* local31 = NULL;
frost$core$Int64 local32;
org$frostlang$frostc$Position local33;
org$frostlang$frostc$ASTNode* local34 = NULL;
org$frostlang$frostc$FixedArray* local35 = NULL;
org$frostlang$frostc$ClassDecl$Kind local36;
frost$core$String* local37 = NULL;
org$frostlang$frostc$FixedArray* local38 = NULL;
org$frostlang$frostc$FixedArray* local39 = NULL;
org$frostlang$frostc$FixedArray* local40 = NULL;
org$frostlang$frostc$Position local41;
frost$core$String* local42 = NULL;
org$frostlang$frostc$Position local43;
org$frostlang$frostc$ASTNode* local44 = NULL;
org$frostlang$frostc$ASTNode* local45 = NULL;
org$frostlang$frostc$Position local46;
frost$core$String* local47 = NULL;
org$frostlang$frostc$FixedArray* local48 = NULL;
org$frostlang$frostc$ASTNode* local49 = NULL;
org$frostlang$frostc$Position local50;
org$frostlang$frostc$ASTNode* local51 = NULL;
frost$core$String* local52 = NULL;
org$frostlang$frostc$Position local53;
org$frostlang$frostc$ASTNode* local54 = NULL;
frost$core$String* local55 = NULL;
org$frostlang$frostc$FixedArray* local56 = NULL;
org$frostlang$frostc$Position local57;
org$frostlang$frostc$ASTNode* local58 = NULL;
org$frostlang$frostc$FixedArray* local59 = NULL;
org$frostlang$frostc$ASTNode* local60 = NULL;
org$frostlang$frostc$FixedArray* local61 = NULL;
org$frostlang$frostc$Position local62;
frost$core$String* local63 = NULL;
org$frostlang$frostc$ASTNode* local64 = NULL;
org$frostlang$frostc$ASTNode* local65 = NULL;
org$frostlang$frostc$FixedArray* local66 = NULL;
org$frostlang$frostc$Position local67;
frost$core$String* local68 = NULL;
org$frostlang$frostc$FixedArray* local69 = NULL;
org$frostlang$frostc$Position local70;
frost$core$String* local71 = NULL;
org$frostlang$frostc$Position local72;
frost$core$String* local73 = NULL;
org$frostlang$frostc$FixedArray* local74 = NULL;
org$frostlang$frostc$Position local75;
org$frostlang$frostc$ASTNode* local76 = NULL;
org$frostlang$frostc$FixedArray* local77 = NULL;
org$frostlang$frostc$ASTNode* local78 = NULL;
org$frostlang$frostc$Position local79;
frost$core$UInt64 local80;
org$frostlang$frostc$Position local81;
org$frostlang$frostc$IR$Value* local82 = NULL;
org$frostlang$frostc$Position local83;
frost$core$String* local84 = NULL;
org$frostlang$frostc$FixedArray* local85 = NULL;
org$frostlang$frostc$Position local86;
org$frostlang$frostc$ASTNode* local87 = NULL;
org$frostlang$frostc$FixedArray* local88 = NULL;
org$frostlang$frostc$FixedArray* local89 = NULL;
org$frostlang$frostc$Position local90;
org$frostlang$frostc$ASTNode* local91 = NULL;
org$frostlang$frostc$FixedArray* local92 = NULL;
org$frostlang$frostc$MethodDecl$Kind local93;
frost$core$String* local94 = NULL;
org$frostlang$frostc$FixedArray* local95 = NULL;
org$frostlang$frostc$FixedArray* local96 = NULL;
org$frostlang$frostc$ASTNode* local97 = NULL;
org$frostlang$frostc$FixedArray* local98 = NULL;
org$frostlang$frostc$Position local99;
org$frostlang$frostc$parser$Token$Kind local100;
org$frostlang$frostc$FixedArray* local101 = NULL;
org$frostlang$frostc$ASTNode* local102 = NULL;
org$frostlang$frostc$Position local103;
org$frostlang$frostc$Position local104;
org$frostlang$frostc$ASTNode* local105 = NULL;
org$frostlang$frostc$Position local106;
frost$core$String* local107 = NULL;
org$frostlang$frostc$Position local108;
frost$core$String* local109 = NULL;
org$frostlang$frostc$ASTNode* local110 = NULL;
org$frostlang$frostc$Position local111;
org$frostlang$frostc$ASTNode* local112 = NULL;
frost$core$Bit local113;
org$frostlang$frostc$ASTNode* local114 = NULL;
org$frostlang$frostc$ASTNode* local115 = NULL;
org$frostlang$frostc$Position local116;
frost$core$Real64 local117;
org$frostlang$frostc$Position local118;
frost$core$String* local119 = NULL;
org$frostlang$frostc$Position local120;
org$frostlang$frostc$ASTNode* local121 = NULL;
org$frostlang$frostc$Position local122;
org$frostlang$frostc$Position local123;
frost$core$String* local124 = NULL;
org$frostlang$frostc$Position local125;
org$frostlang$frostc$Position local126;
org$frostlang$frostc$FixedArray* local127 = NULL;
org$frostlang$frostc$ASTNode* local128 = NULL;
org$frostlang$frostc$FixedArray* local129 = NULL;
org$frostlang$frostc$Position local130;
org$frostlang$frostc$FixedArray* local131 = NULL;
org$frostlang$frostc$Position local132;
org$frostlang$frostc$FixedArray* local133 = NULL;
org$frostlang$frostc$Position local134;
frost$core$String* local135 = NULL;
org$frostlang$frostc$Position local136;
org$frostlang$frostc$FixedArray* local137 = NULL;
org$frostlang$frostc$ASTNode* local138 = NULL;
org$frostlang$frostc$Position local139;
frost$core$String* local140 = NULL;
org$frostlang$frostc$ASTNode* local141 = NULL;
org$frostlang$frostc$Position local142;
org$frostlang$frostc$expression$Unary$Operator local143;
org$frostlang$frostc$ASTNode* local144 = NULL;
org$frostlang$frostc$Position local145;
org$frostlang$frostc$ASTNode* local146 = NULL;
org$frostlang$frostc$Position local147;
org$frostlang$frostc$FixedArray* local148 = NULL;
org$frostlang$frostc$ASTNode* local149 = NULL;
org$frostlang$frostc$Position local150;
frost$core$String* local151 = NULL;
org$frostlang$frostc$Position local152;
org$frostlang$frostc$Variable$Kind local153;
org$frostlang$frostc$FixedArray* local154 = NULL;
org$frostlang$frostc$Position local155;
org$frostlang$frostc$FixedArray* local156 = NULL;
org$frostlang$frostc$FixedArray* local157 = NULL;
org$frostlang$frostc$Position local158;
frost$core$String* local159 = NULL;
org$frostlang$frostc$ASTNode* local160 = NULL;
org$frostlang$frostc$FixedArray* local161 = NULL;
// line 7
frost$core$Int64* $tmp2345 = &param0->$rawValue;
frost$core$Int64 $tmp2346 = *$tmp2345;
frost$core$Int64 $tmp2347 = (frost$core$Int64) {0};
frost$core$Bit $tmp2348 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2347);
bool $tmp2349 = $tmp2348.value;
if ($tmp2349) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp2350 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2351 = *$tmp2350;
*(&local0) = $tmp2351;
frost$core$String** $tmp2352 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2353 = *$tmp2352;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2353));
frost$core$String* $tmp2354 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2354));
*(&local1) = $tmp2353;
frost$core$String** $tmp2355 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2356 = *$tmp2355;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2356));
frost$core$String* $tmp2357 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2357));
*(&local2) = $tmp2356;
org$frostlang$frostc$ASTNode** $tmp2358 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2359 = *$tmp2358;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
org$frostlang$frostc$ASTNode* $tmp2360 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2360));
*(&local3) = $tmp2359;
// line 1
frost$core$String* $tmp2361 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
// line 1
frost$core$String* $tmp2362 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2362));
// line 1
org$frostlang$frostc$ASTNode* $tmp2363 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
org$frostlang$frostc$ASTNode* $tmp2364 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2365 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2365));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2366 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2366));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp2367 = (frost$core$Int64) {1};
frost$core$Bit $tmp2368 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2367);
bool $tmp2369 = $tmp2368.value;
if ($tmp2369) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp2370 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2371 = *$tmp2370;
*(&local4) = $tmp2371;
org$frostlang$frostc$FixedArray** $tmp2372 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2373 = *$tmp2372;
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2373));
org$frostlang$frostc$FixedArray* $tmp2374 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2374));
*(&local5) = $tmp2373;
// line 1
org$frostlang$frostc$FixedArray* $tmp2375 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2375));
org$frostlang$frostc$FixedArray* $tmp2376 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp2377 = (frost$core$Int64) {2};
frost$core$Bit $tmp2378 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2377);
bool $tmp2379 = $tmp2378.value;
if ($tmp2379) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp2380 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2381 = *$tmp2380;
*(&local6) = $tmp2381;
org$frostlang$frostc$ASTNode** $tmp2382 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2383 = *$tmp2382;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2383));
org$frostlang$frostc$ASTNode* $tmp2384 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
*(&local7) = $tmp2383;
org$frostlang$frostc$ASTNode** $tmp2385 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2386 = *$tmp2385;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
org$frostlang$frostc$ASTNode* $tmp2387 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2387));
*(&local8) = $tmp2386;
// line 1
org$frostlang$frostc$ASTNode* $tmp2388 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2388));
// line 1
org$frostlang$frostc$ASTNode* $tmp2389 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2389));
org$frostlang$frostc$ASTNode* $tmp2390 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2391 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2391));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp2392 = (frost$core$Int64) {3};
frost$core$Bit $tmp2393 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2392);
bool $tmp2394 = $tmp2393.value;
if ($tmp2394) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp2395 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2396 = *$tmp2395;
*(&local9) = $tmp2396;
org$frostlang$frostc$ASTNode** $tmp2397 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2398 = *$tmp2397;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
org$frostlang$frostc$ASTNode* $tmp2399 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2399));
*(&local10) = $tmp2398;
// line 1
org$frostlang$frostc$ASTNode* $tmp2400 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2400));
org$frostlang$frostc$ASTNode* $tmp2401 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2401));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp2402 = (frost$core$Int64) {4};
frost$core$Bit $tmp2403 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2402);
bool $tmp2404 = $tmp2403.value;
if ($tmp2404) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp2405 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2406 = *$tmp2405;
*(&local11) = $tmp2406;
goto block1;
block11:;
frost$core$Int64 $tmp2407 = (frost$core$Int64) {5};
frost$core$Bit $tmp2408 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2407);
bool $tmp2409 = $tmp2408.value;
if ($tmp2409) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp2410 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2411 = *$tmp2410;
*(&local12) = $tmp2411;
org$frostlang$frostc$ASTNode** $tmp2412 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2413 = *$tmp2412;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2413));
org$frostlang$frostc$ASTNode* $tmp2414 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2414));
*(&local13) = $tmp2413;
org$frostlang$frostc$expression$Binary$Operator* $tmp2415 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp2416 = *$tmp2415;
*(&local14) = $tmp2416;
org$frostlang$frostc$ASTNode** $tmp2417 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2418 = *$tmp2417;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2418));
org$frostlang$frostc$ASTNode* $tmp2419 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2419));
*(&local15) = $tmp2418;
// line 1
org$frostlang$frostc$ASTNode* $tmp2420 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
// line 1
org$frostlang$frostc$ASTNode* $tmp2421 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2421));
org$frostlang$frostc$ASTNode* $tmp2422 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2422));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2423 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2423));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp2424 = (frost$core$Int64) {6};
frost$core$Bit $tmp2425 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2424);
bool $tmp2426 = $tmp2425.value;
if ($tmp2426) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp2427 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2428 = *$tmp2427;
*(&local16) = $tmp2428;
frost$core$Bit* $tmp2429 = (frost$core$Bit*) (param0->$data + 16);
frost$core$Bit $tmp2430 = *$tmp2429;
*(&local17) = $tmp2430;
goto block1;
block15:;
frost$core$Int64 $tmp2431 = (frost$core$Int64) {7};
frost$core$Bit $tmp2432 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2431);
bool $tmp2433 = $tmp2432.value;
if ($tmp2433) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp2434 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2435 = *$tmp2434;
*(&local18) = $tmp2435;
org$frostlang$frostc$FixedArray** $tmp2436 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2437 = *$tmp2436;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2437));
org$frostlang$frostc$FixedArray* $tmp2438 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
*(&local19) = $tmp2437;
// line 1
org$frostlang$frostc$FixedArray* $tmp2439 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
org$frostlang$frostc$FixedArray* $tmp2440 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2440));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block17:;
frost$core$Int64 $tmp2441 = (frost$core$Int64) {8};
frost$core$Bit $tmp2442 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2441);
bool $tmp2443 = $tmp2442.value;
if ($tmp2443) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp2444 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2445 = *$tmp2444;
*(&local20) = $tmp2445;
frost$core$String** $tmp2446 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2447 = *$tmp2446;
*(&local21) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2447));
frost$core$String* $tmp2448 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
*(&local21) = $tmp2447;
// line 1
frost$core$String* $tmp2449 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2449));
frost$core$String* $tmp2450 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2450));
*(&local21) = ((frost$core$String*) NULL);
goto block1;
block19:;
frost$core$Int64 $tmp2451 = (frost$core$Int64) {9};
frost$core$Bit $tmp2452 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2451);
bool $tmp2453 = $tmp2452.value;
if ($tmp2453) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp2454 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2455 = *$tmp2454;
*(&local22) = $tmp2455;
org$frostlang$frostc$ASTNode** $tmp2456 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2457 = *$tmp2456;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2457));
org$frostlang$frostc$ASTNode* $tmp2458 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2458));
*(&local23) = $tmp2457;
org$frostlang$frostc$FixedArray** $tmp2459 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2460 = *$tmp2459;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2460));
org$frostlang$frostc$FixedArray* $tmp2461 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
*(&local24) = $tmp2460;
// line 1
org$frostlang$frostc$ASTNode* $tmp2462 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
// line 1
org$frostlang$frostc$FixedArray* $tmp2463 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2463));
org$frostlang$frostc$FixedArray* $tmp2464 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2465 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2465));
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block21:;
frost$core$Int64 $tmp2466 = (frost$core$Int64) {10};
frost$core$Bit $tmp2467 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2466);
bool $tmp2468 = $tmp2467.value;
if ($tmp2468) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp2469 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2470 = *$tmp2469;
*(&local25) = $tmp2470;
org$frostlang$frostc$ASTNode** $tmp2471 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2472 = *$tmp2471;
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2472));
org$frostlang$frostc$ASTNode* $tmp2473 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
*(&local26) = $tmp2472;
frost$core$String** $tmp2474 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2475 = *$tmp2474;
*(&local27) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2475));
frost$core$String* $tmp2476 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2476));
*(&local27) = $tmp2475;
org$frostlang$frostc$FixedArray** $tmp2477 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2478 = *$tmp2477;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2478));
org$frostlang$frostc$FixedArray* $tmp2479 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2479));
*(&local28) = $tmp2478;
// line 1
org$frostlang$frostc$ASTNode* $tmp2480 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2480));
// line 1
frost$core$String* $tmp2481 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2481));
// line 1
org$frostlang$frostc$FixedArray* $tmp2482 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
org$frostlang$frostc$FixedArray* $tmp2483 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2484 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2485 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2485));
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block23:;
frost$core$Int64 $tmp2486 = (frost$core$Int64) {11};
frost$core$Bit $tmp2487 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2486);
bool $tmp2488 = $tmp2487.value;
if ($tmp2488) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp2489 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2490 = *$tmp2489;
*(&local29) = $tmp2490;
org$frostlang$frostc$ASTNode** $tmp2491 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2492 = *$tmp2491;
*(&local30) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2492));
org$frostlang$frostc$ASTNode* $tmp2493 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
*(&local30) = $tmp2492;
org$frostlang$frostc$ChoiceCase** $tmp2494 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp2495 = *$tmp2494;
*(&local31) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
org$frostlang$frostc$ChoiceCase* $tmp2496 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
*(&local31) = $tmp2495;
frost$core$Int64* $tmp2497 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp2498 = *$tmp2497;
*(&local32) = $tmp2498;
// line 1
org$frostlang$frostc$ASTNode* $tmp2499 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
// line 1
org$frostlang$frostc$ChoiceCase* $tmp2500 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2500));
org$frostlang$frostc$ChoiceCase* $tmp2501 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2501));
*(&local31) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp2502 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2502));
*(&local30) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block25:;
frost$core$Int64 $tmp2503 = (frost$core$Int64) {12};
frost$core$Bit $tmp2504 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2503);
bool $tmp2505 = $tmp2504.value;
if ($tmp2505) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp2506 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2507 = *$tmp2506;
*(&local33) = $tmp2507;
org$frostlang$frostc$ASTNode** $tmp2508 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2509 = *$tmp2508;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
org$frostlang$frostc$ASTNode* $tmp2510 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2510));
*(&local34) = $tmp2509;
org$frostlang$frostc$FixedArray** $tmp2511 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2512 = *$tmp2511;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
org$frostlang$frostc$FixedArray* $tmp2513 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2513));
*(&local35) = $tmp2512;
org$frostlang$frostc$ClassDecl$Kind* $tmp2514 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp2515 = *$tmp2514;
*(&local36) = $tmp2515;
frost$core$String** $tmp2516 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp2517 = *$tmp2516;
*(&local37) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
frost$core$String* $tmp2518 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2518));
*(&local37) = $tmp2517;
org$frostlang$frostc$FixedArray** $tmp2519 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2520 = *$tmp2519;
*(&local38) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2520));
org$frostlang$frostc$FixedArray* $tmp2521 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2521));
*(&local38) = $tmp2520;
org$frostlang$frostc$FixedArray** $tmp2522 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2523 = *$tmp2522;
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
org$frostlang$frostc$FixedArray* $tmp2524 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
*(&local39) = $tmp2523;
org$frostlang$frostc$FixedArray** $tmp2525 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2526 = *$tmp2525;
*(&local40) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2526));
org$frostlang$frostc$FixedArray* $tmp2527 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
*(&local40) = $tmp2526;
// line 1
org$frostlang$frostc$ASTNode* $tmp2528 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
// line 1
org$frostlang$frostc$FixedArray* $tmp2529 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2529));
// line 1
frost$core$String* $tmp2530 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
// line 1
org$frostlang$frostc$FixedArray* $tmp2531 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
// line 1
org$frostlang$frostc$FixedArray* $tmp2532 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2532));
// line 1
org$frostlang$frostc$FixedArray* $tmp2533 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
org$frostlang$frostc$FixedArray* $tmp2534 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
*(&local40) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2535 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2536 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
*(&local38) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2537 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2537));
*(&local37) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2538 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2538));
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2539 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2539));
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block27:;
frost$core$Int64 $tmp2540 = (frost$core$Int64) {13};
frost$core$Bit $tmp2541 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2540);
bool $tmp2542 = $tmp2541.value;
if ($tmp2542) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp2543 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2544 = *$tmp2543;
*(&local41) = $tmp2544;
frost$core$String** $tmp2545 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2546 = *$tmp2545;
*(&local42) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2546));
frost$core$String* $tmp2547 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2547));
*(&local42) = $tmp2546;
// line 1
frost$core$String* $tmp2548 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2548));
frost$core$String* $tmp2549 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2549));
*(&local42) = ((frost$core$String*) NULL);
goto block1;
block29:;
frost$core$Int64 $tmp2550 = (frost$core$Int64) {14};
frost$core$Bit $tmp2551 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2550);
bool $tmp2552 = $tmp2551.value;
if ($tmp2552) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp2553 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2554 = *$tmp2553;
*(&local43) = $tmp2554;
org$frostlang$frostc$ASTNode** $tmp2555 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2556 = *$tmp2555;
*(&local44) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2556));
org$frostlang$frostc$ASTNode* $tmp2557 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2557));
*(&local44) = $tmp2556;
org$frostlang$frostc$ASTNode** $tmp2558 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2559 = *$tmp2558;
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2559));
org$frostlang$frostc$ASTNode* $tmp2560 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2560));
*(&local45) = $tmp2559;
// line 1
org$frostlang$frostc$ASTNode* $tmp2561 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
// line 1
org$frostlang$frostc$ASTNode* $tmp2562 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2562));
org$frostlang$frostc$ASTNode* $tmp2563 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2563));
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2564 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
*(&local44) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block31:;
frost$core$Int64 $tmp2565 = (frost$core$Int64) {15};
frost$core$Bit $tmp2566 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2565);
bool $tmp2567 = $tmp2566.value;
if ($tmp2567) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp2568 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2569 = *$tmp2568;
*(&local46) = $tmp2569;
frost$core$String** $tmp2570 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2571 = *$tmp2570;
*(&local47) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2571));
frost$core$String* $tmp2572 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2572));
*(&local47) = $tmp2571;
org$frostlang$frostc$FixedArray** $tmp2573 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2574 = *$tmp2573;
*(&local48) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2574));
org$frostlang$frostc$FixedArray* $tmp2575 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2575));
*(&local48) = $tmp2574;
org$frostlang$frostc$ASTNode** $tmp2576 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2577 = *$tmp2576;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2577));
org$frostlang$frostc$ASTNode* $tmp2578 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2578));
*(&local49) = $tmp2577;
// line 1
frost$core$String* $tmp2579 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2579));
// line 1
org$frostlang$frostc$FixedArray* $tmp2580 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
// line 1
org$frostlang$frostc$ASTNode* $tmp2581 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
org$frostlang$frostc$ASTNode* $tmp2582 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2582));
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2583 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2583));
*(&local48) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2584 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2584));
*(&local47) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Int64 $tmp2585 = (frost$core$Int64) {16};
frost$core$Bit $tmp2586 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2585);
bool $tmp2587 = $tmp2586.value;
if ($tmp2587) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp2588 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2589 = *$tmp2588;
*(&local50) = $tmp2589;
org$frostlang$frostc$ASTNode** $tmp2590 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2591 = *$tmp2590;
*(&local51) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2591));
org$frostlang$frostc$ASTNode* $tmp2592 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
*(&local51) = $tmp2591;
frost$core$String** $tmp2593 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2594 = *$tmp2593;
*(&local52) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2594));
frost$core$String* $tmp2595 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
*(&local52) = $tmp2594;
// line 1
org$frostlang$frostc$ASTNode* $tmp2596 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
// line 1
frost$core$String* $tmp2597 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2597));
frost$core$String* $tmp2598 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2598));
*(&local52) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2599 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2599));
*(&local51) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block35:;
frost$core$Int64 $tmp2600 = (frost$core$Int64) {17};
frost$core$Bit $tmp2601 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2600);
bool $tmp2602 = $tmp2601.value;
if ($tmp2602) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp2603 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2604 = *$tmp2603;
*(&local53) = $tmp2604;
org$frostlang$frostc$ASTNode** $tmp2605 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2606 = *$tmp2605;
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2606));
org$frostlang$frostc$ASTNode* $tmp2607 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2607));
*(&local54) = $tmp2606;
frost$core$String** $tmp2608 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2609 = *$tmp2608;
*(&local55) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2609));
frost$core$String* $tmp2610 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
*(&local55) = $tmp2609;
org$frostlang$frostc$FixedArray** $tmp2611 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2612 = *$tmp2611;
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2612));
org$frostlang$frostc$FixedArray* $tmp2613 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2613));
*(&local56) = $tmp2612;
// line 1
org$frostlang$frostc$ASTNode* $tmp2614 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2614));
// line 1
frost$core$String* $tmp2615 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
// line 1
org$frostlang$frostc$FixedArray* $tmp2616 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2616));
org$frostlang$frostc$FixedArray* $tmp2617 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2617));
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2618 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2618));
*(&local55) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2619 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2619));
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block37:;
frost$core$Int64 $tmp2620 = (frost$core$Int64) {18};
frost$core$Bit $tmp2621 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2620);
bool $tmp2622 = $tmp2621.value;
if ($tmp2622) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp2623 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2624 = *$tmp2623;
*(&local57) = $tmp2624;
org$frostlang$frostc$ASTNode** $tmp2625 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2626 = *$tmp2625;
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
org$frostlang$frostc$ASTNode* $tmp2627 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2627));
*(&local58) = $tmp2626;
org$frostlang$frostc$FixedArray** $tmp2628 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2629 = *$tmp2628;
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
org$frostlang$frostc$FixedArray* $tmp2630 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
*(&local59) = $tmp2629;
org$frostlang$frostc$ASTNode** $tmp2631 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2632 = *$tmp2631;
*(&local60) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2632));
org$frostlang$frostc$ASTNode* $tmp2633 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2633));
*(&local60) = $tmp2632;
// line 1
org$frostlang$frostc$ASTNode* $tmp2634 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2634));
// line 1
org$frostlang$frostc$FixedArray* $tmp2635 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2635));
// line 1
org$frostlang$frostc$ASTNode* $tmp2636 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2636));
org$frostlang$frostc$ASTNode* $tmp2637 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2637));
*(&local60) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2638 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2639 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2639));
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block39:;
frost$core$Int64 $tmp2640 = (frost$core$Int64) {19};
frost$core$Bit $tmp2641 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2640);
bool $tmp2642 = $tmp2641.value;
if ($tmp2642) goto block40; else goto block41;
block40:;
org$frostlang$frostc$FixedArray** $tmp2643 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp2644 = *$tmp2643;
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2644));
org$frostlang$frostc$FixedArray* $tmp2645 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2645));
*(&local61) = $tmp2644;
// line 1
org$frostlang$frostc$FixedArray* $tmp2646 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
org$frostlang$frostc$FixedArray* $tmp2647 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block41:;
frost$core$Int64 $tmp2648 = (frost$core$Int64) {20};
frost$core$Bit $tmp2649 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2648);
bool $tmp2650 = $tmp2649.value;
if ($tmp2650) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp2651 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2652 = *$tmp2651;
*(&local62) = $tmp2652;
frost$core$String** $tmp2653 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2654 = *$tmp2653;
*(&local63) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
frost$core$String* $tmp2655 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2655));
*(&local63) = $tmp2654;
org$frostlang$frostc$ASTNode** $tmp2656 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2657 = *$tmp2656;
*(&local64) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
org$frostlang$frostc$ASTNode* $tmp2658 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2658));
*(&local64) = $tmp2657;
org$frostlang$frostc$ASTNode** $tmp2659 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2660 = *$tmp2659;
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
org$frostlang$frostc$ASTNode* $tmp2661 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
*(&local65) = $tmp2660;
org$frostlang$frostc$FixedArray** $tmp2662 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp2663 = *$tmp2662;
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2663));
org$frostlang$frostc$FixedArray* $tmp2664 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
*(&local66) = $tmp2663;
// line 1
frost$core$String* $tmp2665 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2665));
// line 1
org$frostlang$frostc$ASTNode* $tmp2666 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2666));
// line 1
org$frostlang$frostc$ASTNode* $tmp2667 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2667));
// line 1
org$frostlang$frostc$FixedArray* $tmp2668 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2668));
org$frostlang$frostc$FixedArray* $tmp2669 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2669));
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2670 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2670));
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2671 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
*(&local64) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2672 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2672));
*(&local63) = ((frost$core$String*) NULL);
goto block1;
block43:;
frost$core$Int64 $tmp2673 = (frost$core$Int64) {21};
frost$core$Bit $tmp2674 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2673);
bool $tmp2675 = $tmp2674.value;
if ($tmp2675) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp2676 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2677 = *$tmp2676;
*(&local67) = $tmp2677;
frost$core$String** $tmp2678 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2679 = *$tmp2678;
*(&local68) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
frost$core$String* $tmp2680 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2680));
*(&local68) = $tmp2679;
org$frostlang$frostc$FixedArray** $tmp2681 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2682 = *$tmp2681;
*(&local69) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
org$frostlang$frostc$FixedArray* $tmp2683 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
*(&local69) = $tmp2682;
// line 1
frost$core$String* $tmp2684 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
// line 1
org$frostlang$frostc$FixedArray* $tmp2685 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2685));
org$frostlang$frostc$FixedArray* $tmp2686 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2686));
*(&local69) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2687 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2687));
*(&local68) = ((frost$core$String*) NULL);
goto block1;
block45:;
frost$core$Int64 $tmp2688 = (frost$core$Int64) {22};
frost$core$Bit $tmp2689 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2688);
bool $tmp2690 = $tmp2689.value;
if ($tmp2690) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp2691 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2692 = *$tmp2691;
*(&local70) = $tmp2692;
frost$core$String** $tmp2693 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2694 = *$tmp2693;
*(&local71) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
frost$core$String* $tmp2695 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2695));
*(&local71) = $tmp2694;
// line 1
frost$core$String* $tmp2696 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
frost$core$String* $tmp2697 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
*(&local71) = ((frost$core$String*) NULL);
goto block1;
block47:;
frost$core$Int64 $tmp2698 = (frost$core$Int64) {23};
frost$core$Bit $tmp2699 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2698);
bool $tmp2700 = $tmp2699.value;
if ($tmp2700) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp2701 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2702 = *$tmp2701;
*(&local72) = $tmp2702;
frost$core$String** $tmp2703 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2704 = *$tmp2703;
*(&local73) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
frost$core$String* $tmp2705 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
*(&local73) = $tmp2704;
org$frostlang$frostc$FixedArray** $tmp2706 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2707 = *$tmp2706;
*(&local74) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
org$frostlang$frostc$FixedArray* $tmp2708 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2708));
*(&local74) = $tmp2707;
// line 1
frost$core$String* $tmp2709 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2709));
// line 1
org$frostlang$frostc$FixedArray* $tmp2710 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
org$frostlang$frostc$FixedArray* $tmp2711 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2711));
*(&local74) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2712 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2712));
*(&local73) = ((frost$core$String*) NULL);
goto block1;
block49:;
frost$core$Int64 $tmp2713 = (frost$core$Int64) {24};
frost$core$Bit $tmp2714 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2713);
bool $tmp2715 = $tmp2714.value;
if ($tmp2715) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp2716 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2717 = *$tmp2716;
*(&local75) = $tmp2717;
org$frostlang$frostc$ASTNode** $tmp2718 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2719 = *$tmp2718;
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
org$frostlang$frostc$ASTNode* $tmp2720 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
*(&local76) = $tmp2719;
org$frostlang$frostc$FixedArray** $tmp2721 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2722 = *$tmp2721;
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2722));
org$frostlang$frostc$FixedArray* $tmp2723 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2723));
*(&local77) = $tmp2722;
org$frostlang$frostc$ASTNode** $tmp2724 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2725 = *$tmp2724;
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
org$frostlang$frostc$ASTNode* $tmp2726 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
*(&local78) = $tmp2725;
// line 1
org$frostlang$frostc$ASTNode* $tmp2727 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
// line 1
org$frostlang$frostc$FixedArray* $tmp2728 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2728));
// line 1
org$frostlang$frostc$ASTNode* $tmp2729 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
org$frostlang$frostc$ASTNode* $tmp2730 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2731 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2732 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2732));
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block51:;
frost$core$Int64 $tmp2733 = (frost$core$Int64) {25};
frost$core$Bit $tmp2734 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2733);
bool $tmp2735 = $tmp2734.value;
if ($tmp2735) goto block52; else goto block53;
block52:;
org$frostlang$frostc$Position* $tmp2736 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2737 = *$tmp2736;
*(&local79) = $tmp2737;
frost$core$UInt64* $tmp2738 = (frost$core$UInt64*) (param0->$data + 16);
frost$core$UInt64 $tmp2739 = *$tmp2738;
*(&local80) = $tmp2739;
goto block1;
block53:;
frost$core$Int64 $tmp2740 = (frost$core$Int64) {26};
frost$core$Bit $tmp2741 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2740);
bool $tmp2742 = $tmp2741.value;
if ($tmp2742) goto block54; else goto block55;
block54:;
org$frostlang$frostc$Position* $tmp2743 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2744 = *$tmp2743;
*(&local81) = $tmp2744;
org$frostlang$frostc$IR$Value** $tmp2745 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp2746 = *$tmp2745;
*(&local82) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2746));
org$frostlang$frostc$IR$Value* $tmp2747 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2747));
*(&local82) = $tmp2746;
// line 1
org$frostlang$frostc$IR$Value* $tmp2748 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2748));
org$frostlang$frostc$IR$Value* $tmp2749 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2749));
*(&local82) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block55:;
frost$core$Int64 $tmp2750 = (frost$core$Int64) {27};
frost$core$Bit $tmp2751 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2750);
bool $tmp2752 = $tmp2751.value;
if ($tmp2752) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp2753 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2754 = *$tmp2753;
*(&local83) = $tmp2754;
frost$core$String** $tmp2755 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2756 = *$tmp2755;
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2756));
frost$core$String* $tmp2757 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
*(&local84) = $tmp2756;
org$frostlang$frostc$FixedArray** $tmp2758 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2759 = *$tmp2758;
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2759));
org$frostlang$frostc$FixedArray* $tmp2760 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
*(&local85) = $tmp2759;
// line 1
frost$core$String* $tmp2761 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
// line 1
org$frostlang$frostc$FixedArray* $tmp2762 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2762));
org$frostlang$frostc$FixedArray* $tmp2763 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2763));
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2764 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2764));
*(&local84) = ((frost$core$String*) NULL);
goto block1;
block57:;
frost$core$Int64 $tmp2765 = (frost$core$Int64) {28};
frost$core$Bit $tmp2766 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2765);
bool $tmp2767 = $tmp2766.value;
if ($tmp2767) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp2768 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2769 = *$tmp2768;
*(&local86) = $tmp2769;
org$frostlang$frostc$ASTNode** $tmp2770 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2771 = *$tmp2770;
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
org$frostlang$frostc$ASTNode* $tmp2772 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2772));
*(&local87) = $tmp2771;
org$frostlang$frostc$FixedArray** $tmp2773 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2774 = *$tmp2773;
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2774));
org$frostlang$frostc$FixedArray* $tmp2775 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2775));
*(&local88) = $tmp2774;
org$frostlang$frostc$FixedArray** $tmp2776 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2777 = *$tmp2776;
*(&local89) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2777));
org$frostlang$frostc$FixedArray* $tmp2778 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2778));
*(&local89) = $tmp2777;
// line 1
org$frostlang$frostc$ASTNode* $tmp2779 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
// line 1
org$frostlang$frostc$FixedArray* $tmp2780 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
// line 1
org$frostlang$frostc$FixedArray* $tmp2781 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
org$frostlang$frostc$FixedArray* $tmp2782 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
*(&local89) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2783 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2783));
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2784 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2784));
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block59:;
frost$core$Int64 $tmp2785 = (frost$core$Int64) {29};
frost$core$Bit $tmp2786 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2785);
bool $tmp2787 = $tmp2786.value;
if ($tmp2787) goto block60; else goto block61;
block60:;
org$frostlang$frostc$Position* $tmp2788 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2789 = *$tmp2788;
*(&local90) = $tmp2789;
org$frostlang$frostc$ASTNode** $tmp2790 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2791 = *$tmp2790;
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
org$frostlang$frostc$ASTNode* $tmp2792 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2792));
*(&local91) = $tmp2791;
org$frostlang$frostc$FixedArray** $tmp2793 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2794 = *$tmp2793;
*(&local92) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2794));
org$frostlang$frostc$FixedArray* $tmp2795 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
*(&local92) = $tmp2794;
org$frostlang$frostc$MethodDecl$Kind* $tmp2796 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp2797 = *$tmp2796;
*(&local93) = $tmp2797;
frost$core$String** $tmp2798 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp2799 = *$tmp2798;
*(&local94) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2799));
frost$core$String* $tmp2800 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2800));
*(&local94) = $tmp2799;
org$frostlang$frostc$FixedArray** $tmp2801 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2802 = *$tmp2801;
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2802));
org$frostlang$frostc$FixedArray* $tmp2803 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2803));
*(&local95) = $tmp2802;
org$frostlang$frostc$FixedArray** $tmp2804 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2805 = *$tmp2804;
*(&local96) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
org$frostlang$frostc$FixedArray* $tmp2806 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
*(&local96) = $tmp2805;
org$frostlang$frostc$ASTNode** $tmp2807 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
org$frostlang$frostc$ASTNode* $tmp2808 = *$tmp2807;
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
org$frostlang$frostc$ASTNode* $tmp2809 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
*(&local97) = $tmp2808;
org$frostlang$frostc$FixedArray** $tmp2810 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2811 = *$tmp2810;
*(&local98) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
org$frostlang$frostc$FixedArray* $tmp2812 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
*(&local98) = $tmp2811;
// line 1
org$frostlang$frostc$ASTNode* $tmp2813 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
// line 1
org$frostlang$frostc$FixedArray* $tmp2814 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2814));
// line 1
frost$core$String* $tmp2815 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2815));
// line 1
org$frostlang$frostc$FixedArray* $tmp2816 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2816));
// line 1
org$frostlang$frostc$FixedArray* $tmp2817 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2817));
// line 1
org$frostlang$frostc$ASTNode* $tmp2818 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2818));
// line 1
org$frostlang$frostc$FixedArray* $tmp2819 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2819));
org$frostlang$frostc$FixedArray* $tmp2820 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2820));
*(&local98) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2821 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2822 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
*(&local96) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2823 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2824 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
*(&local94) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2825 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2825));
*(&local92) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2826 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block61:;
frost$core$Int64 $tmp2827 = (frost$core$Int64) {30};
frost$core$Bit $tmp2828 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2827);
bool $tmp2829 = $tmp2828.value;
if ($tmp2829) goto block62; else goto block63;
block62:;
org$frostlang$frostc$Position* $tmp2830 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2831 = *$tmp2830;
*(&local99) = $tmp2831;
org$frostlang$frostc$parser$Token$Kind* $tmp2832 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp2833 = *$tmp2832;
*(&local100) = $tmp2833;
org$frostlang$frostc$FixedArray** $tmp2834 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2835 = *$tmp2834;
*(&local101) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2835));
org$frostlang$frostc$FixedArray* $tmp2836 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
*(&local101) = $tmp2835;
org$frostlang$frostc$ASTNode** $tmp2837 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2838 = *$tmp2837;
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2838));
org$frostlang$frostc$ASTNode* $tmp2839 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2839));
*(&local102) = $tmp2838;
// line 1
org$frostlang$frostc$FixedArray* $tmp2840 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2840));
// line 1
org$frostlang$frostc$ASTNode* $tmp2841 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
org$frostlang$frostc$ASTNode* $tmp2842 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2843 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2843));
*(&local101) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block63:;
frost$core$Int64 $tmp2844 = (frost$core$Int64) {31};
frost$core$Bit $tmp2845 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2844);
bool $tmp2846 = $tmp2845.value;
if ($tmp2846) goto block64; else goto block65;
block64:;
org$frostlang$frostc$Position* $tmp2847 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2848 = *$tmp2847;
*(&local103) = $tmp2848;
goto block1;
block65:;
frost$core$Int64 $tmp2849 = (frost$core$Int64) {32};
frost$core$Bit $tmp2850 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2849);
bool $tmp2851 = $tmp2850.value;
if ($tmp2851) goto block66; else goto block67;
block66:;
org$frostlang$frostc$Position* $tmp2852 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2853 = *$tmp2852;
*(&local104) = $tmp2853;
org$frostlang$frostc$ASTNode** $tmp2854 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2855 = *$tmp2854;
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
org$frostlang$frostc$ASTNode* $tmp2856 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
*(&local105) = $tmp2855;
// line 1
org$frostlang$frostc$ASTNode* $tmp2857 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
org$frostlang$frostc$ASTNode* $tmp2858 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2858));
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block67:;
frost$core$Int64 $tmp2859 = (frost$core$Int64) {33};
frost$core$Bit $tmp2860 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2859);
bool $tmp2861 = $tmp2860.value;
if ($tmp2861) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Position* $tmp2862 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2863 = *$tmp2862;
*(&local106) = $tmp2863;
frost$core$String** $tmp2864 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2865 = *$tmp2864;
*(&local107) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
frost$core$String* $tmp2866 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
*(&local107) = $tmp2865;
// line 1
frost$core$String* $tmp2867 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
frost$core$String* $tmp2868 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2868));
*(&local107) = ((frost$core$String*) NULL);
goto block1;
block69:;
frost$core$Int64 $tmp2869 = (frost$core$Int64) {34};
frost$core$Bit $tmp2870 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2869);
bool $tmp2871 = $tmp2870.value;
if ($tmp2871) goto block70; else goto block71;
block70:;
org$frostlang$frostc$Position* $tmp2872 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2873 = *$tmp2872;
*(&local108) = $tmp2873;
frost$core$String** $tmp2874 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2875 = *$tmp2874;
*(&local109) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
frost$core$String* $tmp2876 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2876));
*(&local109) = $tmp2875;
org$frostlang$frostc$ASTNode** $tmp2877 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2878 = *$tmp2877;
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
org$frostlang$frostc$ASTNode* $tmp2879 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2879));
*(&local110) = $tmp2878;
// line 1
frost$core$String* $tmp2880 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2880));
// line 1
org$frostlang$frostc$ASTNode* $tmp2881 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2881));
org$frostlang$frostc$ASTNode* $tmp2882 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2883 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2883));
*(&local109) = ((frost$core$String*) NULL);
goto block1;
block71:;
frost$core$Int64 $tmp2884 = (frost$core$Int64) {35};
frost$core$Bit $tmp2885 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2884);
bool $tmp2886 = $tmp2885.value;
if ($tmp2886) goto block72; else goto block73;
block72:;
org$frostlang$frostc$Position* $tmp2887 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2888 = *$tmp2887;
*(&local111) = $tmp2888;
org$frostlang$frostc$ASTNode** $tmp2889 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2890 = *$tmp2889;
*(&local112) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2890));
org$frostlang$frostc$ASTNode* $tmp2891 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
*(&local112) = $tmp2890;
frost$core$Bit* $tmp2892 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp2893 = *$tmp2892;
*(&local113) = $tmp2893;
org$frostlang$frostc$ASTNode** $tmp2894 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
org$frostlang$frostc$ASTNode* $tmp2895 = *$tmp2894;
*(&local114) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2895));
org$frostlang$frostc$ASTNode* $tmp2896 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
*(&local114) = $tmp2895;
org$frostlang$frostc$ASTNode** $tmp2897 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp2898 = *$tmp2897;
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
org$frostlang$frostc$ASTNode* $tmp2899 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
*(&local115) = $tmp2898;
// line 1
org$frostlang$frostc$ASTNode* $tmp2900 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
// line 1
org$frostlang$frostc$ASTNode* $tmp2901 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2901));
// line 1
org$frostlang$frostc$ASTNode* $tmp2902 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
org$frostlang$frostc$ASTNode* $tmp2903 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2903));
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2904 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2904));
*(&local114) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2905 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2905));
*(&local112) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block73:;
frost$core$Int64 $tmp2906 = (frost$core$Int64) {36};
frost$core$Bit $tmp2907 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2906);
bool $tmp2908 = $tmp2907.value;
if ($tmp2908) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp2909 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2910 = *$tmp2909;
*(&local116) = $tmp2910;
frost$core$Real64* $tmp2911 = (frost$core$Real64*) (param0->$data + 16);
frost$core$Real64 $tmp2912 = *$tmp2911;
*(&local117) = $tmp2912;
goto block1;
block75:;
frost$core$Int64 $tmp2913 = (frost$core$Int64) {37};
frost$core$Bit $tmp2914 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2913);
bool $tmp2915 = $tmp2914.value;
if ($tmp2915) goto block76; else goto block77;
block76:;
org$frostlang$frostc$Position* $tmp2916 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2917 = *$tmp2916;
*(&local118) = $tmp2917;
frost$core$String** $tmp2918 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2919 = *$tmp2918;
*(&local119) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2919));
frost$core$String* $tmp2920 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2920));
*(&local119) = $tmp2919;
// line 1
frost$core$String* $tmp2921 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2921));
frost$core$String* $tmp2922 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
*(&local119) = ((frost$core$String*) NULL);
goto block1;
block77:;
frost$core$Int64 $tmp2923 = (frost$core$Int64) {38};
frost$core$Bit $tmp2924 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2923);
bool $tmp2925 = $tmp2924.value;
if ($tmp2925) goto block78; else goto block79;
block78:;
org$frostlang$frostc$Position* $tmp2926 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2927 = *$tmp2926;
*(&local120) = $tmp2927;
org$frostlang$frostc$ASTNode** $tmp2928 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2929 = *$tmp2928;
*(&local121) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
org$frostlang$frostc$ASTNode* $tmp2930 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2930));
*(&local121) = $tmp2929;
// line 1
org$frostlang$frostc$ASTNode* $tmp2931 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2931));
org$frostlang$frostc$ASTNode* $tmp2932 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2932));
*(&local121) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block79:;
frost$core$Int64 $tmp2933 = (frost$core$Int64) {39};
frost$core$Bit $tmp2934 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2933);
bool $tmp2935 = $tmp2934.value;
if ($tmp2935) goto block80; else goto block81;
block80:;
org$frostlang$frostc$Position* $tmp2936 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2937 = *$tmp2936;
*(&local122) = $tmp2937;
goto block1;
block81:;
frost$core$Int64 $tmp2938 = (frost$core$Int64) {40};
frost$core$Bit $tmp2939 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2938);
bool $tmp2940 = $tmp2939.value;
if ($tmp2940) goto block82; else goto block83;
block82:;
org$frostlang$frostc$Position* $tmp2941 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2942 = *$tmp2941;
*(&local123) = $tmp2942;
frost$core$String** $tmp2943 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2944 = *$tmp2943;
*(&local124) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
frost$core$String* $tmp2945 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
*(&local124) = $tmp2944;
// line 1
frost$core$String* $tmp2946 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2946));
frost$core$String* $tmp2947 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
*(&local124) = ((frost$core$String*) NULL);
goto block1;
block83:;
frost$core$Int64 $tmp2948 = (frost$core$Int64) {41};
frost$core$Bit $tmp2949 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2948);
bool $tmp2950 = $tmp2949.value;
if ($tmp2950) goto block84; else goto block85;
block84:;
org$frostlang$frostc$Position* $tmp2951 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2952 = *$tmp2951;
*(&local125) = $tmp2952;
goto block1;
block85:;
frost$core$Int64 $tmp2953 = (frost$core$Int64) {42};
frost$core$Bit $tmp2954 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2953);
bool $tmp2955 = $tmp2954.value;
if ($tmp2955) goto block86; else goto block87;
block86:;
org$frostlang$frostc$Position* $tmp2956 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2957 = *$tmp2956;
*(&local126) = $tmp2957;
org$frostlang$frostc$FixedArray** $tmp2958 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2959 = *$tmp2958;
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2959));
org$frostlang$frostc$FixedArray* $tmp2960 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2960));
*(&local127) = $tmp2959;
org$frostlang$frostc$ASTNode** $tmp2961 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2962 = *$tmp2961;
*(&local128) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2962));
org$frostlang$frostc$ASTNode* $tmp2963 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2963));
*(&local128) = $tmp2962;
org$frostlang$frostc$FixedArray** $tmp2964 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2965 = *$tmp2964;
*(&local129) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2965));
org$frostlang$frostc$FixedArray* $tmp2966 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2966));
*(&local129) = $tmp2965;
// line 1
org$frostlang$frostc$FixedArray* $tmp2967 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2967));
// line 1
org$frostlang$frostc$ASTNode* $tmp2968 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
// line 1
org$frostlang$frostc$FixedArray* $tmp2969 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
org$frostlang$frostc$FixedArray* $tmp2970 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
*(&local129) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2971 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
*(&local128) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2972 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2972));
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block87:;
frost$core$Int64 $tmp2973 = (frost$core$Int64) {43};
frost$core$Bit $tmp2974 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2973);
bool $tmp2975 = $tmp2974.value;
if ($tmp2975) goto block88; else goto block89;
block88:;
org$frostlang$frostc$Position* $tmp2976 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2977 = *$tmp2976;
*(&local130) = $tmp2977;
org$frostlang$frostc$FixedArray** $tmp2978 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2979 = *$tmp2978;
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2979));
org$frostlang$frostc$FixedArray* $tmp2980 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2980));
*(&local131) = $tmp2979;
// line 1
org$frostlang$frostc$FixedArray* $tmp2981 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2981));
org$frostlang$frostc$FixedArray* $tmp2982 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2982));
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block89:;
frost$core$Int64 $tmp2983 = (frost$core$Int64) {44};
frost$core$Bit $tmp2984 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2983);
bool $tmp2985 = $tmp2984.value;
if ($tmp2985) goto block90; else goto block91;
block90:;
org$frostlang$frostc$Position* $tmp2986 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2987 = *$tmp2986;
*(&local132) = $tmp2987;
org$frostlang$frostc$FixedArray** $tmp2988 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2989 = *$tmp2988;
*(&local133) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2989));
org$frostlang$frostc$FixedArray* $tmp2990 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2990));
*(&local133) = $tmp2989;
// line 1
org$frostlang$frostc$FixedArray* $tmp2991 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2991));
org$frostlang$frostc$FixedArray* $tmp2992 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
*(&local133) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block91:;
frost$core$Int64 $tmp2993 = (frost$core$Int64) {45};
frost$core$Bit $tmp2994 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp2993);
bool $tmp2995 = $tmp2994.value;
if ($tmp2995) goto block92; else goto block93;
block92:;
org$frostlang$frostc$Position* $tmp2996 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2997 = *$tmp2996;
*(&local134) = $tmp2997;
frost$core$String** $tmp2998 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2999 = *$tmp2998;
*(&local135) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
frost$core$String* $tmp3000 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3000));
*(&local135) = $tmp2999;
// line 1
frost$core$String* $tmp3001 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3001));
frost$core$String* $tmp3002 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3002));
*(&local135) = ((frost$core$String*) NULL);
goto block1;
block93:;
frost$core$Int64 $tmp3003 = (frost$core$Int64) {46};
frost$core$Bit $tmp3004 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp3003);
bool $tmp3005 = $tmp3004.value;
if ($tmp3005) goto block94; else goto block95;
block94:;
org$frostlang$frostc$Position* $tmp3006 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3007 = *$tmp3006;
*(&local136) = $tmp3007;
org$frostlang$frostc$FixedArray** $tmp3008 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3009 = *$tmp3008;
*(&local137) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3009));
org$frostlang$frostc$FixedArray* $tmp3010 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3010));
*(&local137) = $tmp3009;
org$frostlang$frostc$ASTNode** $tmp3011 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3012 = *$tmp3011;
*(&local138) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3012));
org$frostlang$frostc$ASTNode* $tmp3013 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
*(&local138) = $tmp3012;
// line 1
org$frostlang$frostc$FixedArray* $tmp3014 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3014));
// line 1
org$frostlang$frostc$ASTNode* $tmp3015 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
org$frostlang$frostc$ASTNode* $tmp3016 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3016));
*(&local138) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3017 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3017));
*(&local137) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block95:;
frost$core$Int64 $tmp3018 = (frost$core$Int64) {47};
frost$core$Bit $tmp3019 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp3018);
bool $tmp3020 = $tmp3019.value;
if ($tmp3020) goto block96; else goto block97;
block96:;
org$frostlang$frostc$Position* $tmp3021 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3022 = *$tmp3021;
*(&local139) = $tmp3022;
frost$core$String** $tmp3023 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3024 = *$tmp3023;
*(&local140) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3024));
frost$core$String* $tmp3025 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
*(&local140) = $tmp3024;
org$frostlang$frostc$ASTNode** $tmp3026 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3027 = *$tmp3026;
*(&local141) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3027));
org$frostlang$frostc$ASTNode* $tmp3028 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3028));
*(&local141) = $tmp3027;
// line 1
frost$core$String* $tmp3029 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3029));
// line 1
org$frostlang$frostc$ASTNode* $tmp3030 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3030));
org$frostlang$frostc$ASTNode* $tmp3031 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3031));
*(&local141) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3032 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3032));
*(&local140) = ((frost$core$String*) NULL);
goto block1;
block97:;
frost$core$Int64 $tmp3033 = (frost$core$Int64) {48};
frost$core$Bit $tmp3034 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp3033);
bool $tmp3035 = $tmp3034.value;
if ($tmp3035) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp3036 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3037 = *$tmp3036;
*(&local142) = $tmp3037;
org$frostlang$frostc$expression$Unary$Operator* $tmp3038 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 16);
org$frostlang$frostc$expression$Unary$Operator $tmp3039 = *$tmp3038;
*(&local143) = $tmp3039;
org$frostlang$frostc$ASTNode** $tmp3040 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3041 = *$tmp3040;
*(&local144) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
org$frostlang$frostc$ASTNode* $tmp3042 = *(&local144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3042));
*(&local144) = $tmp3041;
// line 1
org$frostlang$frostc$ASTNode* $tmp3043 = *(&local144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3043));
org$frostlang$frostc$ASTNode* $tmp3044 = *(&local144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3044));
*(&local144) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block99:;
frost$core$Int64 $tmp3045 = (frost$core$Int64) {49};
frost$core$Bit $tmp3046 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp3045);
bool $tmp3047 = $tmp3046.value;
if ($tmp3047) goto block100; else goto block101;
block100:;
org$frostlang$frostc$Position* $tmp3048 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3049 = *$tmp3048;
*(&local145) = $tmp3049;
org$frostlang$frostc$ASTNode** $tmp3050 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3051 = *$tmp3050;
*(&local146) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3051));
org$frostlang$frostc$ASTNode* $tmp3052 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3052));
*(&local146) = $tmp3051;
// line 1
org$frostlang$frostc$ASTNode* $tmp3053 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3053));
org$frostlang$frostc$ASTNode* $tmp3054 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3054));
*(&local146) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block101:;
frost$core$Int64 $tmp3055 = (frost$core$Int64) {50};
frost$core$Bit $tmp3056 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp3055);
bool $tmp3057 = $tmp3056.value;
if ($tmp3057) goto block102; else goto block103;
block102:;
org$frostlang$frostc$Position* $tmp3058 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3059 = *$tmp3058;
*(&local147) = $tmp3059;
org$frostlang$frostc$FixedArray** $tmp3060 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3061 = *$tmp3060;
*(&local148) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3061));
org$frostlang$frostc$FixedArray* $tmp3062 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3062));
*(&local148) = $tmp3061;
org$frostlang$frostc$ASTNode** $tmp3063 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3064 = *$tmp3063;
*(&local149) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3064));
org$frostlang$frostc$ASTNode* $tmp3065 = *(&local149);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3065));
*(&local149) = $tmp3064;
// line 1
org$frostlang$frostc$FixedArray* $tmp3066 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3066));
// line 1
org$frostlang$frostc$ASTNode* $tmp3067 = *(&local149);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3067));
org$frostlang$frostc$ASTNode* $tmp3068 = *(&local149);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3068));
*(&local149) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3069 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3069));
*(&local148) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block103:;
frost$core$Int64 $tmp3070 = (frost$core$Int64) {51};
frost$core$Bit $tmp3071 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp3070);
bool $tmp3072 = $tmp3071.value;
if ($tmp3072) goto block104; else goto block105;
block104:;
org$frostlang$frostc$Position* $tmp3073 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3074 = *$tmp3073;
*(&local150) = $tmp3074;
frost$core$String** $tmp3075 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3076 = *$tmp3075;
*(&local151) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3076));
frost$core$String* $tmp3077 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3077));
*(&local151) = $tmp3076;
// line 1
frost$core$String* $tmp3078 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3078));
frost$core$String* $tmp3079 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3079));
*(&local151) = ((frost$core$String*) NULL);
goto block1;
block105:;
frost$core$Int64 $tmp3080 = (frost$core$Int64) {52};
frost$core$Bit $tmp3081 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp3080);
bool $tmp3082 = $tmp3081.value;
if ($tmp3082) goto block106; else goto block107;
block106:;
org$frostlang$frostc$Position* $tmp3083 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3084 = *$tmp3083;
*(&local152) = $tmp3084;
org$frostlang$frostc$Variable$Kind* $tmp3085 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp3086 = *$tmp3085;
*(&local153) = $tmp3086;
org$frostlang$frostc$FixedArray** $tmp3087 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3088 = *$tmp3087;
*(&local154) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
org$frostlang$frostc$FixedArray* $tmp3089 = *(&local154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3089));
*(&local154) = $tmp3088;
// line 1
org$frostlang$frostc$FixedArray* $tmp3090 = *(&local154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
org$frostlang$frostc$FixedArray* $tmp3091 = *(&local154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3091));
*(&local154) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block107:;
frost$core$Int64 $tmp3092 = (frost$core$Int64) {53};
frost$core$Bit $tmp3093 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp3092);
bool $tmp3094 = $tmp3093.value;
if ($tmp3094) goto block108; else goto block109;
block108:;
org$frostlang$frostc$Position* $tmp3095 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3096 = *$tmp3095;
*(&local155) = $tmp3096;
org$frostlang$frostc$FixedArray** $tmp3097 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3098 = *$tmp3097;
*(&local156) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3098));
org$frostlang$frostc$FixedArray* $tmp3099 = *(&local156);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
*(&local156) = $tmp3098;
org$frostlang$frostc$FixedArray** $tmp3100 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3101 = *$tmp3100;
*(&local157) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
org$frostlang$frostc$FixedArray* $tmp3102 = *(&local157);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3102));
*(&local157) = $tmp3101;
// line 1
org$frostlang$frostc$FixedArray* $tmp3103 = *(&local156);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3103));
// line 1
org$frostlang$frostc$FixedArray* $tmp3104 = *(&local157);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3104));
org$frostlang$frostc$FixedArray* $tmp3105 = *(&local157);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
*(&local157) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3106 = *(&local156);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
*(&local156) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block109:;
frost$core$Int64 $tmp3107 = (frost$core$Int64) {54};
frost$core$Bit $tmp3108 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2346, $tmp3107);
bool $tmp3109 = $tmp3108.value;
if ($tmp3109) goto block110; else goto block1;
block110:;
org$frostlang$frostc$Position* $tmp3110 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3111 = *$tmp3110;
*(&local158) = $tmp3111;
frost$core$String** $tmp3112 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3113 = *$tmp3112;
*(&local159) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3113));
frost$core$String* $tmp3114 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3114));
*(&local159) = $tmp3113;
org$frostlang$frostc$ASTNode** $tmp3115 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3116 = *$tmp3115;
*(&local160) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3116));
org$frostlang$frostc$ASTNode* $tmp3117 = *(&local160);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3117));
*(&local160) = $tmp3116;
org$frostlang$frostc$FixedArray** $tmp3118 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3119 = *$tmp3118;
*(&local161) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3119));
org$frostlang$frostc$FixedArray* $tmp3120 = *(&local161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3120));
*(&local161) = $tmp3119;
// line 1
frost$core$String* $tmp3121 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
// line 1
org$frostlang$frostc$ASTNode* $tmp3122 = *(&local160);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3122));
// line 1
org$frostlang$frostc$FixedArray* $tmp3123 = *(&local161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3123));
org$frostlang$frostc$FixedArray* $tmp3124 = *(&local161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3124));
*(&local161) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3125 = *(&local160);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
*(&local160) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3126 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3126));
*(&local159) = ((frost$core$String*) NULL);
goto block1;
block1:;
// line 7
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, frost$core$String* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3127 = &param0->$rawValue;
*$tmp3127 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3128 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3128 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3129 = (frost$core$String**) (param0->$data + 16);
*$tmp3129 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3130 = (frost$core$String**) (param0->$data + 24);
*$tmp3130 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3131 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3131 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3) {

// line 7
frost$core$Int64* $tmp3132 = &param0->$rawValue;
*$tmp3132 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3133 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3133 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3134 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3134 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3135 = &param0->$rawValue;
*$tmp3135 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3136 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3136 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3137 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3137 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3138 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3138 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3) {

// line 7
frost$core$Int64* $tmp3139 = &param0->$rawValue;
*$tmp3139 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3140 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3140 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3141 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3141 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2) {

// line 7
frost$core$Int64* $tmp3142 = &param0->$rawValue;
*$tmp3142 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3143 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3143 = param2;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$expression$Binary$Operator param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3144 = &param0->$rawValue;
*$tmp3144 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3145 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3145 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3146 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3146 = param3;
// line 7
org$frostlang$frostc$expression$Binary$Operator* $tmp3147 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 24);
*$tmp3147 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3148 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3148 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$Bit param3) {

// line 7
frost$core$Int64* $tmp3149 = &param0->$rawValue;
*$tmp3149 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3150 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3150 = param2;
// line 7
frost$core$Bit* $tmp3151 = (frost$core$Bit*) (param0->$data + 16);
*$tmp3151 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// line 7
frost$core$Int64* $tmp3152 = &param0->$rawValue;
*$tmp3152 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3153 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3153 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3154 = (frost$core$String**) (param0->$data + 16);
*$tmp3154 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3155 = &param0->$rawValue;
*$tmp3155 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3156 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3156 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3157 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3157 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3158 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3158 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3159 = &param0->$rawValue;
*$tmp3159 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3160 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3160 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3161 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3161 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3162 = (frost$core$String**) (param0->$data + 24);
*$tmp3162 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3163 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3163 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ChoiceCase$frost$core$Int64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ChoiceCase* param4, frost$core$Int64 param5) {

// line 7
frost$core$Int64* $tmp3164 = &param0->$rawValue;
*$tmp3164 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3165 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3165 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3166 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3166 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ChoiceCase** $tmp3167 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
*$tmp3167 = param4;
// line 7
frost$core$Int64* $tmp3168 = (frost$core$Int64*) (param0->$data + 32);
*$tmp3168 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ClassDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$FixedArray* param9) {

// line 7
frost$core$Int64* $tmp3169 = &param0->$rawValue;
*$tmp3169 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3170 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3170 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3171 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3171 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3172 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3172 = param4;
// line 7
org$frostlang$frostc$ClassDecl$Kind* $tmp3173 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
*$tmp3173 = param5;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
frost$core$String** $tmp3174 = (frost$core$String**) (param0->$data + 40);
*$tmp3174 = param6;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$FixedArray** $tmp3175 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
*$tmp3175 = param7;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$FixedArray** $tmp3176 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
*$tmp3176 = param8;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$FixedArray** $tmp3177 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
*$tmp3177 = param9;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3178 = &param0->$rawValue;
*$tmp3178 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3179 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3179 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3180 = (frost$core$String**) (param0->$data + 16);
*$tmp3180 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3181 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3181 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3182 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3182 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4) {

// line 7
frost$core$Int64* $tmp3183 = &param0->$rawValue;
*$tmp3183 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3184 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3184 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3185 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3185 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3186 = (frost$core$String**) (param0->$data + 24);
*$tmp3186 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3187 = &param0->$rawValue;
*$tmp3187 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3188 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3188 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3189 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3189 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3190 = (frost$core$String**) (param0->$data + 24);
*$tmp3190 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3191 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3191 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3192 = &param0->$rawValue;
*$tmp3192 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3193 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3193 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3194 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3194 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3195 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3195 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3196 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3196 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$FixedArray* param2) {

// line 7
frost$core$Int64* $tmp3197 = &param0->$rawValue;
*$tmp3197 = param1;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$FixedArray** $tmp3198 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
*$tmp3198 = param2;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$FixedArray* param6) {

// line 7
frost$core$Int64* $tmp3199 = &param0->$rawValue;
*$tmp3199 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3200 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3200 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3201 = (frost$core$String**) (param0->$data + 16);
*$tmp3201 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3202 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3202 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3203 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3203 = param5;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$FixedArray** $tmp3204 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
*$tmp3204 = param6;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3205 = &param0->$rawValue;
*$tmp3205 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3206 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3206 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3207 = (frost$core$String**) (param0->$data + 16);
*$tmp3207 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3208 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3208 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// line 7
frost$core$Int64* $tmp3209 = &param0->$rawValue;
*$tmp3209 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3210 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3210 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3211 = (frost$core$String**) (param0->$data + 16);
*$tmp3211 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3212 = &param0->$rawValue;
*$tmp3212 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3213 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3213 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3214 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3214 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3215 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3215 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3216 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3216 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$UInt64 param3) {

// line 7
frost$core$Int64* $tmp3217 = &param0->$rawValue;
*$tmp3217 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3218 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3218 = param2;
// line 7
frost$core$UInt64* $tmp3219 = (frost$core$UInt64*) (param0->$data + 16);
*$tmp3219 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3) {

// line 7
frost$core$Int64* $tmp3220 = &param0->$rawValue;
*$tmp3220 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3221 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3221 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp3222 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp3222 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3223 = &param0->$rawValue;
*$tmp3223 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3224 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3224 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3225 = (frost$core$String**) (param0->$data + 16);
*$tmp3225 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3226 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3226 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3227 = &param0->$rawValue;
*$tmp3227 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3228 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3228 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3229 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3229 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3230 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3230 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3231 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3231 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$MethodDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$ASTNode* param9, org$frostlang$frostc$FixedArray* param10) {

// line 7
frost$core$Int64* $tmp3232 = &param0->$rawValue;
*$tmp3232 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3233 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3233 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3234 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3234 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3235 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3235 = param4;
// line 7
org$frostlang$frostc$MethodDecl$Kind* $tmp3236 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
*$tmp3236 = param5;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
frost$core$String** $tmp3237 = (frost$core$String**) (param0->$data + 40);
*$tmp3237 = param6;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$FixedArray** $tmp3238 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
*$tmp3238 = param7;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$FixedArray** $tmp3239 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
*$tmp3239 = param8;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$ASTNode** $tmp3240 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
*$tmp3240 = param9;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param10));
org$frostlang$frostc$FixedArray** $tmp3241 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
*$tmp3241 = param10;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$parser$Token$Kind param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3242 = &param0->$rawValue;
*$tmp3242 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3243 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3243 = param2;
// line 7
org$frostlang$frostc$parser$Token$Kind* $tmp3244 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
*$tmp3244 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3245 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3245 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3246 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3246 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3247 = &param0->$rawValue;
*$tmp3247 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3248 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3248 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3249 = (frost$core$String**) (param0->$data + 16);
*$tmp3249 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3250 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3250 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$Bit$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$Bit param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$ASTNode* param6) {

// line 7
frost$core$Int64* $tmp3251 = &param0->$rawValue;
*$tmp3251 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3252 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3252 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3253 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3253 = param3;
// line 7
frost$core$Bit* $tmp3254 = (frost$core$Bit*) (param0->$data + 24);
*$tmp3254 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3255 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
*$tmp3255 = param5;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$ASTNode** $tmp3256 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
*$tmp3256 = param6;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Real64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$Real64 param3) {

// line 7
frost$core$Int64* $tmp3257 = &param0->$rawValue;
*$tmp3257 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3258 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3258 = param2;
// line 7
frost$core$Real64* $tmp3259 = (frost$core$Real64*) (param0->$data + 16);
*$tmp3259 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3) {

// line 7
frost$core$Int64* $tmp3260 = &param0->$rawValue;
*$tmp3260 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3261 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3261 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3262 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3262 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3263 = &param0->$rawValue;
*$tmp3263 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3264 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3264 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3265 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3265 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3266 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3266 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3267 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3267 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3268 = &param0->$rawValue;
*$tmp3268 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3269 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3269 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3270 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3270 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3271 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3271 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3272 = &param0->$rawValue;
*$tmp3272 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3273 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3273 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3274 = (frost$core$String**) (param0->$data + 16);
*$tmp3274 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3275 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3275 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$expression$Unary$Operator param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3276 = &param0->$rawValue;
*$tmp3276 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3277 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3277 = param2;
// line 7
org$frostlang$frostc$expression$Unary$Operator* $tmp3278 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 16);
*$tmp3278 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3279 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3279 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$Variable$Kind param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3280 = &param0->$rawValue;
*$tmp3280 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3281 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3281 = param2;
// line 7
org$frostlang$frostc$Variable$Kind* $tmp3282 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
*$tmp3282 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3283 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3283 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3284 = &param0->$rawValue;
*$tmp3284 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3285 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3285 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3286 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3286 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3287 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3287 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3288 = &param0->$rawValue;
*$tmp3288 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3289 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3289 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3290 = (frost$core$String**) (param0->$data + 16);
*$tmp3290 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3291 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3291 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3292 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3292 = param5;
return;

}






