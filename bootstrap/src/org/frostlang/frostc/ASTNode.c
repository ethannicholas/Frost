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

typedef frost$core$String* (*$fn593)(frost$core$Object*);
typedef frost$core$Bit (*$fn669)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn674)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn710)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn726)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn730)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn735)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn782)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn789)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn827)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn853)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn905)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn909)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn914)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn948)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn961)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn972)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn976)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn981)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1036)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1048)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1081)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1085)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1090)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1123)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1149)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1160)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1195)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1199)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1204)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1231)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1235)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1240)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1291)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1295)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1300)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1335)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1371)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1402)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1406)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1411)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1446)(frost$core$Object*);
typedef frost$core$String* (*$fn1458)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1487)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1491)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1496)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1535)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1539)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1544)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1607)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1611)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1616)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1648)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1658)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1681)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1685)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1690)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1752)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1891)(frost$core$Object*);
typedef frost$core$String* (*$fn1960)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1978)(frost$collections$CollectionView*);
typedef void (*$fn2004)(frost$core$MutableString*, frost$core$Object*);
typedef void (*$fn2008)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef void (*$fn2022)(frost$core$MutableString*, frost$core$Object*);
typedef void (*$fn2026)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn2086)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2151)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2211)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2237)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2241)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2246)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2264)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2268)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2273)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2320)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2324)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2329)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 28, 5772502652536328142, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s573 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s612 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static frost$core$String $s614 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s619 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static frost$core$String $s621 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s625 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s638 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s647 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static frost$core$String $s648 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static frost$core$String $s677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s681 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s688 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s693 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s721 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static frost$core$String $s741 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s744 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s762 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static frost$core$String $s764 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s766 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static frost$core$String $s768 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static frost$core$String $s785 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s793 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s818 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s823 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s831 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s856 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s901 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s920 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s928 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static frost$core$String $s933 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static frost$core$String $s938 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static frost$core$String $s951 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s953 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s964 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s966 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s968 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s987 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s990 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1013 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static frost$core$String $s1015 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1017 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static frost$core$String $s1019 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static frost$core$String $s1039 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static frost$core$String $s1043 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1075 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1077 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static frost$core$String $s1096 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static frost$core$String $s1103 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1126 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1130 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1156 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1162 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s1281 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static frost$core$String $s1283 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static frost$core$String $s1287 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1306 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1309 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1331 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52\x5f\x47\x45\x4e\x45\x52\x49\x43\x53\x28", 20, -4089576957169252493, NULL };
static frost$core$String $s1367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1375 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x29", 2, 16504, NULL };
static frost$core$String $s1395 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static frost$core$String $s1397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1417 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static frost$core$String $s1429 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static frost$core$String $s1502 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1505 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1528 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static frost$core$String $s1530 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1550 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1558 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1560 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1603 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1622 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1630 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static frost$core$String $s1635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static frost$core$String $s1651 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1653 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1661 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1663 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1670 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1672 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1696 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1699 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1728 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s1730 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s1734 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s1736 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s1740 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s1742 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s1746 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s1748 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s1755 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1757 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1761 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1769 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1773 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1781 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x29", 2, 14282, NULL };
static frost$core$String $s1789 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s1790 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s1801 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s1827 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1831 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1860 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static frost$core$String $s1862 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s1874 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static frost$core$String $s1903 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s1905 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s1920 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s1922 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1924 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static frost$core$String $s1926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static frost$core$String $s1930 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s1931 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s1942 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s1947 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static frost$core$String $s1948 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static frost$core$String $s1963 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1965 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1981 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1983 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2000 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static frost$core$String $s2015 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x0a\x66\x61\x69\x6c\x28", 7, 240019370222988, NULL };
static frost$core$String $s2017 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b\x0a", 4, 146641607, NULL };
static frost$core$String $s2019 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x0a\x66\x61\x69\x6c\x20\x7b\x0a", 9, 2448437595644631413, NULL };
static frost$core$String $s2028 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2062 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2066 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2089 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2091 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static frost$core$String $s2095 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2111 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2130 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65\x2c\x20", 13, 4377509119645419399, NULL };
static frost$core$String $s2132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 184878482956378755, NULL };
static frost$core$String $s2136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 184878482956378755, NULL };
static frost$core$String $s2154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2156 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static frost$core$String $s2160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static frost$core$String $s2196 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static frost$core$String $s2201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static frost$core$String $s2206 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static frost$core$String $s2229 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static frost$core$String $s2231 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2233 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2260 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2279 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s2310 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2314 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static frost$core$String $s2316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s2335 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s2338 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x41\x53\x54\x4e\x6f\x64\x65\x3a\x20", 21, -8877512154781713630, NULL };
static frost$core$String $s2354 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };

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
frost$core$Bit $tmp548 = frost$core$Bit$init$builtin_bit(false);
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block112; else goto block113;
block113:;
frost$core$Int64 $tmp550 = (frost$core$Int64) {261};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s551, $tmp550);
abort(); // unreachable
block112:;
// line 262
goto block114;
block114:;
goto block114;
block115:;
goto block1;
block1:;
goto block116;
block116:;

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
// line 269
frost$core$Int64* $tmp552 = &param0->$rawValue;
frost$core$Int64 $tmp553 = *$tmp552;
frost$core$Int64 $tmp554 = (frost$core$Int64) {0};
frost$core$Bit $tmp555 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp554);
bool $tmp556 = $tmp555.value;
if ($tmp556) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp557 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp558 = *$tmp557;
frost$core$String** $tmp559 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp560 = *$tmp559;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
frost$core$String* $tmp561 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
*(&local0) = $tmp560;
frost$core$String** $tmp562 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp563 = *$tmp562;
org$frostlang$frostc$ASTNode** $tmp564 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp565 = *$tmp564;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
org$frostlang$frostc$ASTNode* $tmp566 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
*(&local1) = $tmp565;
// line 271
org$frostlang$frostc$ASTNode* $tmp567 = *(&local1);
frost$core$Bit $tmp568 = frost$core$Bit$init$builtin_bit($tmp567 != NULL);
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block4; else goto block5;
block4:;
// line 272
frost$core$String* $tmp570 = *(&local0);
frost$core$String* $tmp571 = frost$core$String$get_asString$R$frost$core$String($tmp570);
frost$core$String* $tmp572 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp571, &$s573);
org$frostlang$frostc$ASTNode* $tmp574 = *(&local1);
frost$core$String* $tmp575 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp572, ((frost$core$Object*) $tmp574));
frost$core$String* $tmp576 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp575, &$s577);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
org$frostlang$frostc$ASTNode* $tmp578 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp579 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local0) = ((frost$core$String*) NULL);
return $tmp576;
block5:;
// line 274
frost$core$String* $tmp580 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
org$frostlang$frostc$ASTNode* $tmp581 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp582 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
*(&local0) = ((frost$core$String*) NULL);
return $tmp580;
block3:;
frost$core$Int64 $tmp583 = (frost$core$Int64) {1};
frost$core$Bit $tmp584 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp583);
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp586 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp587 = *$tmp586;
org$frostlang$frostc$FixedArray** $tmp588 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp589 = *$tmp588;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
org$frostlang$frostc$FixedArray* $tmp590 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
*(&local2) = $tmp589;
// line 277
org$frostlang$frostc$FixedArray* $tmp591 = *(&local2);
$fn593 $tmp592 = ($fn593) ((frost$core$Object*) $tmp591)->$class->vtable[0];
frost$core$String* $tmp594 = $tmp592(((frost$core$Object*) $tmp591));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
org$frostlang$frostc$FixedArray* $tmp595 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp594;
block7:;
frost$core$Int64 $tmp596 = (frost$core$Int64) {2};
frost$core$Bit $tmp597 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp596);
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp599 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp600 = *$tmp599;
org$frostlang$frostc$ASTNode** $tmp601 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp602 = *$tmp601;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
org$frostlang$frostc$ASTNode* $tmp603 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
*(&local3) = $tmp602;
org$frostlang$frostc$ASTNode** $tmp604 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp605 = *$tmp604;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
org$frostlang$frostc$ASTNode* $tmp606 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local4) = $tmp605;
// line 280
org$frostlang$frostc$ASTNode* $tmp607 = *(&local4);
frost$core$Bit $tmp608 = frost$core$Bit$init$builtin_bit($tmp607 == NULL);
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block10; else goto block11;
block10:;
// line 281
org$frostlang$frostc$ASTNode* $tmp610 = *(&local3);
frost$core$String* $tmp611 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s612, ((frost$core$Object*) $tmp610));
frost$core$String* $tmp613 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp611, &$s614);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
org$frostlang$frostc$ASTNode* $tmp615 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp616 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp613;
block11:;
// line 283
org$frostlang$frostc$ASTNode* $tmp617 = *(&local3);
frost$core$String* $tmp618 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s619, ((frost$core$Object*) $tmp617));
frost$core$String* $tmp620 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp618, &$s621);
org$frostlang$frostc$ASTNode* $tmp622 = *(&local4);
frost$core$String* $tmp623 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp620, ((frost$core$Object*) $tmp622));
frost$core$String* $tmp624 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp623, &$s625);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
org$frostlang$frostc$ASTNode* $tmp626 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp627 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp624;
block9:;
frost$core$Int64 $tmp628 = (frost$core$Int64) {3};
frost$core$Bit $tmp629 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp628);
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp631 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp632 = *$tmp631;
org$frostlang$frostc$ASTNode** $tmp633 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp634 = *$tmp633;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
org$frostlang$frostc$ASTNode* $tmp635 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
*(&local5) = $tmp634;
// line 286
org$frostlang$frostc$ASTNode* $tmp636 = *(&local5);
frost$core$String* $tmp637 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s638, ((frost$core$Object*) $tmp636));
frost$core$String* $tmp639 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp637, &$s640);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
org$frostlang$frostc$ASTNode* $tmp641 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp639;
block13:;
frost$core$Int64 $tmp642 = (frost$core$Int64) {4};
frost$core$Bit $tmp643 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp642);
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp645 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp646 = *$tmp645;
// line 289
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s647));
return &$s648;
block15:;
frost$core$Int64 $tmp649 = (frost$core$Int64) {5};
frost$core$Bit $tmp650 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp649);
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp652 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp653 = *$tmp652;
org$frostlang$frostc$ASTNode** $tmp654 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp655 = *$tmp654;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
org$frostlang$frostc$ASTNode* $tmp656 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
*(&local6) = $tmp655;
org$frostlang$frostc$expression$Binary$Operator* $tmp657 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp658 = *$tmp657;
*(&local7) = $tmp658;
org$frostlang$frostc$ASTNode** $tmp659 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp660 = *$tmp659;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
org$frostlang$frostc$ASTNode* $tmp661 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
*(&local8) = $tmp660;
// line 292
org$frostlang$frostc$expression$Binary$Operator $tmp662 = *(&local7);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp663;
$tmp663 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp663->value = $tmp662;
frost$core$Int64 $tmp664 = (frost$core$Int64) {20};
org$frostlang$frostc$expression$Binary$Operator $tmp665 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp664);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp666;
$tmp666 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp666->value = $tmp665;
ITable* $tmp667 = ((frost$core$Equatable*) $tmp663)->$class->itable;
while ($tmp667->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp667 = $tmp667->next;
}
$fn669 $tmp668 = $tmp667->methods[0];
frost$core$Bit $tmp670 = $tmp668(((frost$core$Equatable*) $tmp663), ((frost$core$Equatable*) $tmp666));
bool $tmp671 = $tmp670.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp666)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp663)));
if ($tmp671) goto block18; else goto block19;
block18:;
// line 293
org$frostlang$frostc$ASTNode* $tmp672 = *(&local6);
$fn674 $tmp673 = ($fn674) $tmp672->$class->vtable[0];
frost$core$String* $tmp675 = $tmp673($tmp672);
frost$core$String* $tmp676 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp675, &$s677);
org$frostlang$frostc$ASTNode* $tmp678 = *(&local8);
frost$core$String* $tmp679 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp676, ((frost$core$Object*) $tmp678));
frost$core$String* $tmp680 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp679, &$s681);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
org$frostlang$frostc$ASTNode* $tmp682 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp683 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp680;
block19:;
// line 295
org$frostlang$frostc$ASTNode* $tmp684 = *(&local6);
frost$core$String* $tmp685 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s686, ((frost$core$Object*) $tmp684));
frost$core$String* $tmp687 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp685, &$s688);
org$frostlang$frostc$expression$Binary$Operator $tmp689 = *(&local7);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp690;
$tmp690 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp690->value = $tmp689;
frost$core$String* $tmp691 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp687, ((frost$core$Object*) $tmp690));
frost$core$String* $tmp692 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp691, &$s693);
org$frostlang$frostc$ASTNode* $tmp694 = *(&local8);
frost$core$String* $tmp695 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp692, ((frost$core$Object*) $tmp694));
frost$core$String* $tmp696 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp695, &$s697);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
org$frostlang$frostc$ASTNode* $tmp698 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp699 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp696;
block17:;
frost$core$Int64 $tmp700 = (frost$core$Int64) {6};
frost$core$Bit $tmp701 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp700);
bool $tmp702 = $tmp701.value;
if ($tmp702) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp703 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp704 = *$tmp703;
frost$core$Bit* $tmp705 = (frost$core$Bit*) (param0->$data + 16);
frost$core$Bit $tmp706 = *$tmp705;
*(&local9) = $tmp706;
// line 298
frost$core$Bit $tmp707 = *(&local9);
frost$core$Bit$wrapper* $tmp708;
$tmp708 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp708->value = $tmp707;
$fn710 $tmp709 = ($fn710) ((frost$core$Object*) $tmp708)->$class->vtable[0];
frost$core$String* $tmp711 = $tmp709(((frost$core$Object*) $tmp708));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
return $tmp711;
block21:;
frost$core$Int64 $tmp712 = (frost$core$Int64) {7};
frost$core$Bit $tmp713 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp712);
bool $tmp714 = $tmp713.value;
if ($tmp714) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp715 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp716 = *$tmp715;
org$frostlang$frostc$FixedArray** $tmp717 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp718 = *$tmp717;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
org$frostlang$frostc$FixedArray* $tmp719 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
*(&local10) = $tmp718;
// line 301
frost$core$MutableString* $tmp720 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp720, &$s721);
*(&local11) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$MutableString* $tmp722 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local11) = $tmp720;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
// line 302
org$frostlang$frostc$FixedArray* $tmp723 = *(&local10);
ITable* $tmp724 = ((frost$collections$Iterable*) $tmp723)->$class->itable;
while ($tmp724->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp724 = $tmp724->next;
}
$fn726 $tmp725 = $tmp724->methods[0];
frost$collections$Iterator* $tmp727 = $tmp725(((frost$collections$Iterable*) $tmp723));
goto block24;
block24:;
ITable* $tmp728 = $tmp727->$class->itable;
while ($tmp728->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp728 = $tmp728->next;
}
$fn730 $tmp729 = $tmp728->methods[0];
frost$core$Bit $tmp731 = $tmp729($tmp727);
bool $tmp732 = $tmp731.value;
if ($tmp732) goto block26; else goto block25;
block25:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp733 = $tmp727->$class->itable;
while ($tmp733->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp733 = $tmp733->next;
}
$fn735 $tmp734 = $tmp733->methods[1];
frost$core$Object* $tmp736 = $tmp734($tmp727);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp736)));
org$frostlang$frostc$ASTNode* $tmp737 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp736);
// line 303
frost$core$MutableString* $tmp738 = *(&local11);
org$frostlang$frostc$ASTNode* $tmp739 = *(&local12);
frost$core$String* $tmp740 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp739), &$s741);
frost$core$MutableString$append$frost$core$String($tmp738, $tmp740);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
frost$core$Frost$unref$frost$core$Object$Q($tmp736);
org$frostlang$frostc$ASTNode* $tmp742 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block24;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
// line 305
frost$core$MutableString* $tmp743 = *(&local11);
frost$core$MutableString$append$frost$core$String($tmp743, &$s744);
// line 306
frost$core$MutableString* $tmp745 = *(&local11);
frost$core$String* $tmp746 = frost$core$MutableString$finish$R$frost$core$String($tmp745);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$MutableString* $tmp747 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
*(&local11) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp748 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp746;
block23:;
frost$core$Int64 $tmp749 = (frost$core$Int64) {8};
frost$core$Bit $tmp750 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp749);
bool $tmp751 = $tmp750.value;
if ($tmp751) goto block27; else goto block28;
block27:;
org$frostlang$frostc$Position* $tmp752 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp753 = *$tmp752;
frost$core$String** $tmp754 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp755 = *$tmp754;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
frost$core$String* $tmp756 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
*(&local13) = $tmp755;
// line 309
frost$core$String* $tmp757 = *(&local13);
frost$core$Bit $tmp758 = frost$core$Bit$init$builtin_bit($tmp757 != NULL);
bool $tmp759 = $tmp758.value;
if ($tmp759) goto block29; else goto block30;
block29:;
// line 310
frost$core$String* $tmp760 = *(&local13);
frost$core$String* $tmp761 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s762, $tmp760);
frost$core$String* $tmp763 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp761, &$s764);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$core$String* $tmp765 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
*(&local13) = ((frost$core$String*) NULL);
return $tmp763;
block30:;
// line 312
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s766));
frost$core$String* $tmp767 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local13) = ((frost$core$String*) NULL);
return &$s768;
block28:;
frost$core$Int64 $tmp769 = (frost$core$Int64) {9};
frost$core$Bit $tmp770 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp769);
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block31; else goto block32;
block31:;
org$frostlang$frostc$Position* $tmp772 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp773 = *$tmp772;
org$frostlang$frostc$ASTNode** $tmp774 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp775 = *$tmp774;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
org$frostlang$frostc$ASTNode* $tmp776 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
*(&local14) = $tmp775;
org$frostlang$frostc$FixedArray** $tmp777 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp778 = *$tmp777;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
org$frostlang$frostc$FixedArray* $tmp779 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local15) = $tmp778;
// line 315
org$frostlang$frostc$ASTNode* $tmp780 = *(&local14);
$fn782 $tmp781 = ($fn782) $tmp780->$class->vtable[0];
frost$core$String* $tmp783 = $tmp781($tmp780);
frost$core$String* $tmp784 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp783, &$s785);
org$frostlang$frostc$FixedArray* $tmp786 = *(&local15);
ITable* $tmp787 = ((frost$collections$CollectionView*) $tmp786)->$class->itable;
while ($tmp787->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp787 = $tmp787->next;
}
$fn789 $tmp788 = $tmp787->methods[1];
frost$core$String* $tmp790 = $tmp788(((frost$collections$CollectionView*) $tmp786));
frost$core$String* $tmp791 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp784, $tmp790);
frost$core$String* $tmp792 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp791, &$s793);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
org$frostlang$frostc$FixedArray* $tmp794 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp795 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp792;
block32:;
frost$core$Int64 $tmp796 = (frost$core$Int64) {10};
frost$core$Bit $tmp797 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp796);
bool $tmp798 = $tmp797.value;
if ($tmp798) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Position* $tmp799 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp800 = *$tmp799;
org$frostlang$frostc$ASTNode** $tmp801 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp802 = *$tmp801;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
org$frostlang$frostc$ASTNode* $tmp803 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
*(&local16) = $tmp802;
frost$core$String** $tmp804 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp805 = *$tmp804;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
frost$core$String* $tmp806 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
*(&local17) = $tmp805;
org$frostlang$frostc$FixedArray** $tmp807 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp808 = *$tmp807;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
org$frostlang$frostc$FixedArray* $tmp809 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
*(&local18) = $tmp808;
// line 318
frost$core$MutableString* $tmp810 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp810);
*(&local19) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
frost$core$MutableString* $tmp811 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
*(&local19) = $tmp810;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
// line 319
org$frostlang$frostc$ASTNode* $tmp812 = *(&local16);
frost$core$Bit $tmp813 = frost$core$Bit$init$builtin_bit($tmp812 != NULL);
bool $tmp814 = $tmp813.value;
if ($tmp814) goto block35; else goto block36;
block35:;
// line 320
frost$core$MutableString* $tmp815 = *(&local19);
org$frostlang$frostc$ASTNode* $tmp816 = *(&local16);
frost$core$String* $tmp817 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp816), &$s818);
frost$core$MutableString$append$frost$core$String($tmp815, $tmp817);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
goto block36;
block36:;
// line 322
frost$core$MutableString* $tmp819 = *(&local19);
frost$core$String* $tmp820 = *(&local17);
frost$core$String* $tmp821 = frost$core$String$get_asString$R$frost$core$String($tmp820);
frost$core$String* $tmp822 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp821, &$s823);
org$frostlang$frostc$FixedArray* $tmp824 = *(&local18);
ITable* $tmp825 = ((frost$collections$CollectionView*) $tmp824)->$class->itable;
while ($tmp825->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp825 = $tmp825->next;
}
$fn827 $tmp826 = $tmp825->methods[1];
frost$core$String* $tmp828 = $tmp826(((frost$collections$CollectionView*) $tmp824));
frost$core$String* $tmp829 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp822, $tmp828);
frost$core$String* $tmp830 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp829, &$s831);
frost$core$MutableString$append$frost$core$String($tmp819, $tmp830);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
// line 323
frost$core$MutableString* $tmp832 = *(&local19);
frost$core$String* $tmp833 = frost$core$MutableString$finish$R$frost$core$String($tmp832);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
frost$core$MutableString* $tmp834 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local19) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp835 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp836 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp837 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp833;
block34:;
frost$core$Int64 $tmp838 = (frost$core$Int64) {11};
frost$core$Bit $tmp839 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp838);
bool $tmp840 = $tmp839.value;
if ($tmp840) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Position* $tmp841 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp842 = *$tmp841;
org$frostlang$frostc$ASTNode** $tmp843 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp844 = *$tmp843;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
org$frostlang$frostc$ASTNode* $tmp845 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
*(&local20) = $tmp844;
org$frostlang$frostc$ChoiceCase** $tmp846 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp847 = *$tmp846;
*(&local21) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
org$frostlang$frostc$ChoiceCase* $tmp848 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
*(&local21) = $tmp847;
frost$core$Int64* $tmp849 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp850 = *$tmp849;
*(&local22) = $tmp850;
// line 326
org$frostlang$frostc$ASTNode* $tmp851 = *(&local20);
$fn853 $tmp852 = ($fn853) $tmp851->$class->vtable[0];
frost$core$String* $tmp854 = $tmp852($tmp851);
frost$core$String* $tmp855 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp854, &$s856);
org$frostlang$frostc$ChoiceCase* $tmp857 = *(&local21);
frost$core$String* $tmp858 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp855, ((frost$core$Object*) $tmp857));
frost$core$String* $tmp859 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp858, &$s860);
frost$core$Int64 $tmp861 = *(&local22);
frost$core$Int64$wrapper* $tmp862;
$tmp862 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp862->value = $tmp861;
frost$core$String* $tmp863 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp859, ((frost$core$Object*) $tmp862));
frost$core$String* $tmp864 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp863, &$s865);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
org$frostlang$frostc$ChoiceCase* $tmp866 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
*(&local21) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp867 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp864;
block38:;
frost$core$Int64 $tmp868 = (frost$core$Int64) {12};
frost$core$Bit $tmp869 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp868);
bool $tmp870 = $tmp869.value;
if ($tmp870) goto block39; else goto block40;
block39:;
org$frostlang$frostc$Position* $tmp871 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp872 = *$tmp871;
org$frostlang$frostc$ASTNode** $tmp873 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp874 = *$tmp873;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
org$frostlang$frostc$ASTNode* $tmp875 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
*(&local23) = $tmp874;
org$frostlang$frostc$FixedArray** $tmp876 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp877 = *$tmp876;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
org$frostlang$frostc$FixedArray* $tmp878 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
*(&local24) = $tmp877;
org$frostlang$frostc$ClassDecl$Kind* $tmp879 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp880 = *$tmp879;
*(&local25) = $tmp880;
frost$core$String** $tmp881 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp882 = *$tmp881;
*(&local26) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
frost$core$String* $tmp883 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
*(&local26) = $tmp882;
org$frostlang$frostc$FixedArray** $tmp884 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp885 = *$tmp884;
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
org$frostlang$frostc$FixedArray* $tmp886 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
*(&local27) = $tmp885;
org$frostlang$frostc$FixedArray** $tmp887 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp888 = *$tmp887;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
org$frostlang$frostc$FixedArray* $tmp889 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
*(&local28) = $tmp888;
org$frostlang$frostc$FixedArray** $tmp890 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp891 = *$tmp890;
*(&local29) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
org$frostlang$frostc$FixedArray* $tmp892 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
*(&local29) = $tmp891;
// line 329
frost$core$MutableString* $tmp893 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp893);
*(&local30) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
frost$core$MutableString* $tmp894 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
*(&local30) = $tmp893;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
// line 330
org$frostlang$frostc$ASTNode* $tmp895 = *(&local23);
frost$core$Bit $tmp896 = frost$core$Bit$init$builtin_bit($tmp895 != NULL);
bool $tmp897 = $tmp896.value;
if ($tmp897) goto block41; else goto block42;
block41:;
// line 331
frost$core$MutableString* $tmp898 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp899 = *(&local23);
frost$core$String* $tmp900 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp899), &$s901);
frost$core$MutableString$append$frost$core$String($tmp898, $tmp900);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
goto block42;
block42:;
// line 333
org$frostlang$frostc$FixedArray* $tmp902 = *(&local24);
ITable* $tmp903 = ((frost$collections$Iterable*) $tmp902)->$class->itable;
while ($tmp903->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp903 = $tmp903->next;
}
$fn905 $tmp904 = $tmp903->methods[0];
frost$collections$Iterator* $tmp906 = $tmp904(((frost$collections$Iterable*) $tmp902));
goto block43;
block43:;
ITable* $tmp907 = $tmp906->$class->itable;
while ($tmp907->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp907 = $tmp907->next;
}
$fn909 $tmp908 = $tmp907->methods[0];
frost$core$Bit $tmp910 = $tmp908($tmp906);
bool $tmp911 = $tmp910.value;
if ($tmp911) goto block45; else goto block44;
block44:;
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp912 = $tmp906->$class->itable;
while ($tmp912->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp912 = $tmp912->next;
}
$fn914 $tmp913 = $tmp912->methods[1];
frost$core$Object* $tmp915 = $tmp913($tmp906);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp915)));
org$frostlang$frostc$ASTNode* $tmp916 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
*(&local31) = ((org$frostlang$frostc$ASTNode*) $tmp915);
// line 334
frost$core$MutableString* $tmp917 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp918 = *(&local31);
frost$core$String* $tmp919 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp918), &$s920);
frost$core$MutableString$append$frost$core$String($tmp917, $tmp919);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
frost$core$Frost$unref$frost$core$Object$Q($tmp915);
org$frostlang$frostc$ASTNode* $tmp921 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block43;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
// line 336
org$frostlang$frostc$ClassDecl$Kind $tmp922 = *(&local25);
frost$core$Int64 $tmp923 = $tmp922.$rawValue;
frost$core$Int64 $tmp924 = (frost$core$Int64) {0};
frost$core$Bit $tmp925 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp923, $tmp924);
bool $tmp926 = $tmp925.value;
if ($tmp926) goto block47; else goto block48;
block47:;
// line 337
frost$core$MutableString* $tmp927 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp927, &$s928);
goto block46;
block48:;
frost$core$Int64 $tmp929 = (frost$core$Int64) {1};
frost$core$Bit $tmp930 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp923, $tmp929);
bool $tmp931 = $tmp930.value;
if ($tmp931) goto block49; else goto block50;
block49:;
// line 338
frost$core$MutableString* $tmp932 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp932, &$s933);
goto block46;
block50:;
frost$core$Int64 $tmp934 = (frost$core$Int64) {2};
frost$core$Bit $tmp935 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp923, $tmp934);
bool $tmp936 = $tmp935.value;
if ($tmp936) goto block51; else goto block46;
block51:;
// line 339
frost$core$MutableString* $tmp937 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp937, &$s938);
goto block46;
block46:;
// line 341
frost$core$MutableString* $tmp939 = *(&local30);
frost$core$String* $tmp940 = *(&local26);
frost$core$MutableString$append$frost$core$String($tmp939, $tmp940);
// line 342
org$frostlang$frostc$FixedArray* $tmp941 = *(&local27);
frost$core$Bit $tmp942 = frost$core$Bit$init$builtin_bit($tmp941 != NULL);
bool $tmp943 = $tmp942.value;
if ($tmp943) goto block52; else goto block53;
block52:;
// line 343
frost$core$MutableString* $tmp944 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp945 = *(&local27);
ITable* $tmp946 = ((frost$collections$CollectionView*) $tmp945)->$class->itable;
while ($tmp946->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp946 = $tmp946->next;
}
$fn948 $tmp947 = $tmp946->methods[1];
frost$core$String* $tmp949 = $tmp947(((frost$collections$CollectionView*) $tmp945));
frost$core$String* $tmp950 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s951, $tmp949);
frost$core$String* $tmp952 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp950, &$s953);
frost$core$MutableString$append$frost$core$String($tmp944, $tmp952);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
goto block53;
block53:;
// line 345
org$frostlang$frostc$FixedArray* $tmp954 = *(&local28);
frost$core$Bit $tmp955 = frost$core$Bit$init$builtin_bit($tmp954 != NULL);
bool $tmp956 = $tmp955.value;
if ($tmp956) goto block54; else goto block55;
block54:;
// line 346
frost$core$MutableString* $tmp957 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp958 = *(&local28);
ITable* $tmp959 = ((frost$collections$CollectionView*) $tmp958)->$class->itable;
while ($tmp959->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp959 = $tmp959->next;
}
$fn961 $tmp960 = $tmp959->methods[1];
frost$core$String* $tmp962 = $tmp960(((frost$collections$CollectionView*) $tmp958));
frost$core$String* $tmp963 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s964, $tmp962);
frost$core$String* $tmp965 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp963, &$s966);
frost$core$MutableString$append$frost$core$String($tmp957, $tmp965);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
goto block55;
block55:;
// line 348
frost$core$MutableString* $tmp967 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp967, &$s968);
// line 349
org$frostlang$frostc$FixedArray* $tmp969 = *(&local29);
ITable* $tmp970 = ((frost$collections$Iterable*) $tmp969)->$class->itable;
while ($tmp970->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp970 = $tmp970->next;
}
$fn972 $tmp971 = $tmp970->methods[0];
frost$collections$Iterator* $tmp973 = $tmp971(((frost$collections$Iterable*) $tmp969));
goto block56;
block56:;
ITable* $tmp974 = $tmp973->$class->itable;
while ($tmp974->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp974 = $tmp974->next;
}
$fn976 $tmp975 = $tmp974->methods[0];
frost$core$Bit $tmp977 = $tmp975($tmp973);
bool $tmp978 = $tmp977.value;
if ($tmp978) goto block58; else goto block57;
block57:;
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp979 = $tmp973->$class->itable;
while ($tmp979->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp979 = $tmp979->next;
}
$fn981 $tmp980 = $tmp979->methods[1];
frost$core$Object* $tmp982 = $tmp980($tmp973);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp982)));
org$frostlang$frostc$ASTNode* $tmp983 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
*(&local32) = ((org$frostlang$frostc$ASTNode*) $tmp982);
// line 350
frost$core$MutableString* $tmp984 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp985 = *(&local32);
frost$core$String* $tmp986 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp985), &$s987);
frost$core$MutableString$append$frost$core$String($tmp984, $tmp986);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
frost$core$Frost$unref$frost$core$Object$Q($tmp982);
org$frostlang$frostc$ASTNode* $tmp988 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block56;
block58:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
// line 352
frost$core$MutableString* $tmp989 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp989, &$s990);
// line 353
frost$core$MutableString* $tmp991 = *(&local30);
frost$core$String* $tmp992 = frost$core$MutableString$finish$R$frost$core$String($tmp991);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
frost$core$MutableString* $tmp993 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
*(&local30) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp994 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
*(&local29) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp995 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp996 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp997 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
*(&local26) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp998 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp999 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp992;
block40:;
frost$core$Int64 $tmp1000 = (frost$core$Int64) {13};
frost$core$Bit $tmp1001 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1000);
bool $tmp1002 = $tmp1001.value;
if ($tmp1002) goto block59; else goto block60;
block59:;
org$frostlang$frostc$Position* $tmp1003 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1004 = *$tmp1003;
frost$core$String** $tmp1005 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1006 = *$tmp1005;
*(&local33) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
frost$core$String* $tmp1007 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
*(&local33) = $tmp1006;
// line 356
frost$core$String* $tmp1008 = *(&local33);
frost$core$Bit $tmp1009 = frost$core$Bit$init$builtin_bit($tmp1008 != NULL);
bool $tmp1010 = $tmp1009.value;
if ($tmp1010) goto block61; else goto block62;
block61:;
// line 357
frost$core$String* $tmp1011 = *(&local33);
frost$core$String* $tmp1012 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1013, $tmp1011);
frost$core$String* $tmp1014 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1012, &$s1015);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
frost$core$String* $tmp1016 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
*(&local33) = ((frost$core$String*) NULL);
return $tmp1014;
block62:;
// line 359
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1017));
frost$core$String* $tmp1018 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
*(&local33) = ((frost$core$String*) NULL);
return &$s1019;
block60:;
frost$core$Int64 $tmp1020 = (frost$core$Int64) {14};
frost$core$Bit $tmp1021 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1020);
bool $tmp1022 = $tmp1021.value;
if ($tmp1022) goto block63; else goto block64;
block63:;
org$frostlang$frostc$Position* $tmp1023 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1024 = *$tmp1023;
org$frostlang$frostc$ASTNode** $tmp1025 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1026 = *$tmp1025;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
org$frostlang$frostc$ASTNode* $tmp1027 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
*(&local34) = $tmp1026;
org$frostlang$frostc$ASTNode** $tmp1028 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1029 = *$tmp1028;
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
org$frostlang$frostc$ASTNode* $tmp1030 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
*(&local35) = $tmp1029;
// line 362
org$frostlang$frostc$ASTNode* $tmp1031 = *(&local35);
frost$core$Bit $tmp1032 = frost$core$Bit$init$builtin_bit($tmp1031 != NULL);
bool $tmp1033 = $tmp1032.value;
if ($tmp1033) goto block65; else goto block66;
block65:;
// line 363
org$frostlang$frostc$ASTNode* $tmp1034 = *(&local34);
$fn1036 $tmp1035 = ($fn1036) $tmp1034->$class->vtable[0];
frost$core$String* $tmp1037 = $tmp1035($tmp1034);
frost$core$String* $tmp1038 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1037, &$s1039);
org$frostlang$frostc$ASTNode* $tmp1040 = *(&local35);
frost$core$String* $tmp1041 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1038, ((frost$core$Object*) $tmp1040));
frost$core$String* $tmp1042 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1041, &$s1043);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
org$frostlang$frostc$ASTNode* $tmp1044 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1045 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1042;
block66:;
// line 365
org$frostlang$frostc$ASTNode* $tmp1046 = *(&local34);
$fn1048 $tmp1047 = ($fn1048) ((frost$core$Object*) $tmp1046)->$class->vtable[0];
frost$core$String* $tmp1049 = $tmp1047(((frost$core$Object*) $tmp1046));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
org$frostlang$frostc$ASTNode* $tmp1050 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1051 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1049;
block64:;
frost$core$Int64 $tmp1052 = (frost$core$Int64) {15};
frost$core$Bit $tmp1053 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1052);
bool $tmp1054 = $tmp1053.value;
if ($tmp1054) goto block67; else goto block68;
block67:;
org$frostlang$frostc$Position* $tmp1055 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1056 = *$tmp1055;
frost$core$String** $tmp1057 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1058 = *$tmp1057;
*(&local36) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
frost$core$String* $tmp1059 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
*(&local36) = $tmp1058;
org$frostlang$frostc$FixedArray** $tmp1060 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1061 = *$tmp1060;
*(&local37) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
org$frostlang$frostc$FixedArray* $tmp1062 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
*(&local37) = $tmp1061;
org$frostlang$frostc$ASTNode** $tmp1063 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1064 = *$tmp1063;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
org$frostlang$frostc$ASTNode* $tmp1065 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
*(&local38) = $tmp1064;
// line 368
frost$core$MutableString* $tmp1066 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1066);
*(&local39) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
frost$core$MutableString* $tmp1067 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
*(&local39) = $tmp1066;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
// line 369
frost$core$String* $tmp1068 = *(&local36);
frost$core$Bit $tmp1069 = frost$core$Bit$init$builtin_bit($tmp1068 != NULL);
bool $tmp1070 = $tmp1069.value;
if ($tmp1070) goto block69; else goto block70;
block69:;
// line 370
frost$core$MutableString* $tmp1071 = *(&local39);
frost$core$String* $tmp1072 = *(&local36);
frost$core$String* $tmp1073 = frost$core$String$get_asString$R$frost$core$String($tmp1072);
frost$core$String* $tmp1074 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1073, &$s1075);
frost$core$MutableString$append$frost$core$String($tmp1071, $tmp1074);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
goto block70;
block70:;
// line 372
frost$core$MutableString* $tmp1076 = *(&local39);
frost$core$MutableString$append$frost$core$String($tmp1076, &$s1077);
// line 373
org$frostlang$frostc$FixedArray* $tmp1078 = *(&local37);
ITable* $tmp1079 = ((frost$collections$Iterable*) $tmp1078)->$class->itable;
while ($tmp1079->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1079 = $tmp1079->next;
}
$fn1081 $tmp1080 = $tmp1079->methods[0];
frost$collections$Iterator* $tmp1082 = $tmp1080(((frost$collections$Iterable*) $tmp1078));
goto block71;
block71:;
ITable* $tmp1083 = $tmp1082->$class->itable;
while ($tmp1083->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1083 = $tmp1083->next;
}
$fn1085 $tmp1084 = $tmp1083->methods[0];
frost$core$Bit $tmp1086 = $tmp1084($tmp1082);
bool $tmp1087 = $tmp1086.value;
if ($tmp1087) goto block73; else goto block72;
block72:;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1088 = $tmp1082->$class->itable;
while ($tmp1088->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1088 = $tmp1088->next;
}
$fn1090 $tmp1089 = $tmp1088->methods[1];
frost$core$Object* $tmp1091 = $tmp1089($tmp1082);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1091)));
org$frostlang$frostc$ASTNode* $tmp1092 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
*(&local40) = ((org$frostlang$frostc$ASTNode*) $tmp1091);
// line 374
frost$core$MutableString* $tmp1093 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp1094 = *(&local40);
frost$core$String* $tmp1095 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1094), &$s1096);
frost$core$MutableString$append$frost$core$String($tmp1093, $tmp1095);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
frost$core$Frost$unref$frost$core$Object$Q($tmp1091);
org$frostlang$frostc$ASTNode* $tmp1097 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block71;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
// line 376
frost$core$MutableString* $tmp1098 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp1099 = *(&local38);
frost$core$String* $tmp1100 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1101, ((frost$core$Object*) $tmp1099));
frost$core$String* $tmp1102 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1100, &$s1103);
frost$core$MutableString$append$frost$core$String($tmp1098, $tmp1102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
// line 377
frost$core$MutableString* $tmp1104 = *(&local39);
frost$core$String* $tmp1105 = frost$core$MutableString$finish$R$frost$core$String($tmp1104);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
frost$core$MutableString* $tmp1106 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
*(&local39) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1107 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1108 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
*(&local37) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1109 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
*(&local36) = ((frost$core$String*) NULL);
return $tmp1105;
block68:;
frost$core$Int64 $tmp1110 = (frost$core$Int64) {16};
frost$core$Bit $tmp1111 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1110);
bool $tmp1112 = $tmp1111.value;
if ($tmp1112) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp1113 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1114 = *$tmp1113;
org$frostlang$frostc$ASTNode** $tmp1115 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1116 = *$tmp1115;
*(&local41) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
org$frostlang$frostc$ASTNode* $tmp1117 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
*(&local41) = $tmp1116;
frost$core$String** $tmp1118 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1119 = *$tmp1118;
*(&local42) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
frost$core$String* $tmp1120 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
*(&local42) = $tmp1119;
// line 380
org$frostlang$frostc$ASTNode* $tmp1121 = *(&local41);
$fn1123 $tmp1122 = ($fn1123) $tmp1121->$class->vtable[0];
frost$core$String* $tmp1124 = $tmp1122($tmp1121);
frost$core$String* $tmp1125 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1124, &$s1126);
frost$core$String* $tmp1127 = *(&local42);
frost$core$String* $tmp1128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1125, $tmp1127);
frost$core$String* $tmp1129 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1128, &$s1130);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
frost$core$String* $tmp1131 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
*(&local42) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1132 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
*(&local41) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1129;
block75:;
frost$core$Int64 $tmp1133 = (frost$core$Int64) {17};
frost$core$Bit $tmp1134 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1133);
bool $tmp1135 = $tmp1134.value;
if ($tmp1135) goto block76; else goto block77;
block76:;
org$frostlang$frostc$Position* $tmp1136 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1137 = *$tmp1136;
org$frostlang$frostc$ASTNode** $tmp1138 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1139 = *$tmp1138;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
org$frostlang$frostc$ASTNode* $tmp1140 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
*(&local43) = $tmp1139;
frost$core$String** $tmp1141 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1142 = *$tmp1141;
*(&local44) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
frost$core$String* $tmp1143 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
*(&local44) = $tmp1142;
org$frostlang$frostc$FixedArray** $tmp1144 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1145 = *$tmp1144;
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
org$frostlang$frostc$FixedArray* $tmp1146 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
*(&local45) = $tmp1145;
// line 383
org$frostlang$frostc$ASTNode* $tmp1147 = *(&local43);
$fn1149 $tmp1148 = ($fn1149) $tmp1147->$class->vtable[0];
frost$core$String* $tmp1150 = $tmp1148($tmp1147);
frost$core$String* $tmp1151 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1150, &$s1152);
frost$core$String* $tmp1153 = *(&local44);
frost$core$String* $tmp1154 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1151, $tmp1153);
frost$core$String* $tmp1155 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1154, &$s1156);
org$frostlang$frostc$FixedArray* $tmp1157 = *(&local45);
ITable* $tmp1158 = ((frost$collections$CollectionView*) $tmp1157)->$class->itable;
while ($tmp1158->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1158 = $tmp1158->next;
}
$fn1160 $tmp1159 = $tmp1158->methods[2];
frost$core$String* $tmp1161 = $tmp1159(((frost$collections$CollectionView*) $tmp1157), &$s1162);
frost$core$String* $tmp1163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1155, $tmp1161);
frost$core$String* $tmp1164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1163, &$s1165);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
org$frostlang$frostc$FixedArray* $tmp1166 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1167 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
*(&local44) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1168 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1164;
block77:;
frost$core$Int64 $tmp1169 = (frost$core$Int64) {18};
frost$core$Bit $tmp1170 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1169);
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block78; else goto block79;
block78:;
org$frostlang$frostc$Position* $tmp1172 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1173 = *$tmp1172;
org$frostlang$frostc$ASTNode** $tmp1174 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1175 = *$tmp1174;
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
org$frostlang$frostc$ASTNode* $tmp1176 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
*(&local46) = $tmp1175;
org$frostlang$frostc$FixedArray** $tmp1177 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1178 = *$tmp1177;
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
org$frostlang$frostc$FixedArray* $tmp1179 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
*(&local47) = $tmp1178;
org$frostlang$frostc$ASTNode** $tmp1180 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1181 = *$tmp1180;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
org$frostlang$frostc$ASTNode* $tmp1182 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
*(&local48) = $tmp1181;
// line 386
frost$core$MutableString* $tmp1183 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1183);
*(&local49) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
frost$core$MutableString* $tmp1184 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
*(&local49) = $tmp1183;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
// line 387
org$frostlang$frostc$ASTNode* $tmp1185 = *(&local46);
frost$core$Bit $tmp1186 = frost$core$Bit$init$builtin_bit($tmp1185 != NULL);
bool $tmp1187 = $tmp1186.value;
if ($tmp1187) goto block80; else goto block81;
block80:;
// line 388
frost$core$MutableString* $tmp1188 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1189 = *(&local46);
frost$core$String* $tmp1190 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1189), &$s1191);
frost$core$MutableString$append$frost$core$String($tmp1188, $tmp1190);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
goto block81;
block81:;
// line 390
org$frostlang$frostc$FixedArray* $tmp1192 = *(&local47);
ITable* $tmp1193 = ((frost$collections$Iterable*) $tmp1192)->$class->itable;
while ($tmp1193->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1193 = $tmp1193->next;
}
$fn1195 $tmp1194 = $tmp1193->methods[0];
frost$collections$Iterator* $tmp1196 = $tmp1194(((frost$collections$Iterable*) $tmp1192));
goto block82;
block82:;
ITable* $tmp1197 = $tmp1196->$class->itable;
while ($tmp1197->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1197 = $tmp1197->next;
}
$fn1199 $tmp1198 = $tmp1197->methods[0];
frost$core$Bit $tmp1200 = $tmp1198($tmp1196);
bool $tmp1201 = $tmp1200.value;
if ($tmp1201) goto block84; else goto block83;
block83:;
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1202 = $tmp1196->$class->itable;
while ($tmp1202->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1202 = $tmp1202->next;
}
$fn1204 $tmp1203 = $tmp1202->methods[1];
frost$core$Object* $tmp1205 = $tmp1203($tmp1196);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1205)));
org$frostlang$frostc$ASTNode* $tmp1206 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
*(&local50) = ((org$frostlang$frostc$ASTNode*) $tmp1205);
// line 391
frost$core$MutableString* $tmp1207 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1208 = *(&local50);
frost$core$String* $tmp1209 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1208), &$s1210);
frost$core$MutableString$append$frost$core$String($tmp1207, $tmp1209);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$Frost$unref$frost$core$Object$Q($tmp1205);
org$frostlang$frostc$ASTNode* $tmp1211 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block82;
block84:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
// line 393
frost$core$MutableString* $tmp1212 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1213 = *(&local48);
frost$core$MutableString$append$frost$core$Object($tmp1212, ((frost$core$Object*) $tmp1213));
// line 394
frost$core$MutableString* $tmp1214 = *(&local49);
frost$core$String* $tmp1215 = frost$core$MutableString$finish$R$frost$core$String($tmp1214);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
frost$core$MutableString* $tmp1216 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
*(&local49) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1217 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1218 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1219 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1215;
block79:;
frost$core$Int64 $tmp1220 = (frost$core$Int64) {19};
frost$core$Bit $tmp1221 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1220);
bool $tmp1222 = $tmp1221.value;
if ($tmp1222) goto block85; else goto block86;
block85:;
org$frostlang$frostc$FixedArray** $tmp1223 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp1224 = *$tmp1223;
*(&local51) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
org$frostlang$frostc$FixedArray* $tmp1225 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
*(&local51) = $tmp1224;
// line 397
frost$core$MutableString* $tmp1226 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1226);
*(&local52) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
frost$core$MutableString* $tmp1227 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
*(&local52) = $tmp1226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
// line 398
org$frostlang$frostc$FixedArray* $tmp1228 = *(&local51);
ITable* $tmp1229 = ((frost$collections$Iterable*) $tmp1228)->$class->itable;
while ($tmp1229->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1229 = $tmp1229->next;
}
$fn1231 $tmp1230 = $tmp1229->methods[0];
frost$collections$Iterator* $tmp1232 = $tmp1230(((frost$collections$Iterable*) $tmp1228));
goto block87;
block87:;
ITable* $tmp1233 = $tmp1232->$class->itable;
while ($tmp1233->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1233 = $tmp1233->next;
}
$fn1235 $tmp1234 = $tmp1233->methods[0];
frost$core$Bit $tmp1236 = $tmp1234($tmp1232);
bool $tmp1237 = $tmp1236.value;
if ($tmp1237) goto block89; else goto block88;
block88:;
*(&local53) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1238 = $tmp1232->$class->itable;
while ($tmp1238->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1238 = $tmp1238->next;
}
$fn1240 $tmp1239 = $tmp1238->methods[1];
frost$core$Object* $tmp1241 = $tmp1239($tmp1232);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1241)));
org$frostlang$frostc$ASTNode* $tmp1242 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
*(&local53) = ((org$frostlang$frostc$ASTNode*) $tmp1241);
// line 399
frost$core$MutableString* $tmp1243 = *(&local52);
org$frostlang$frostc$ASTNode* $tmp1244 = *(&local53);
frost$core$String* $tmp1245 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1244), &$s1246);
frost$core$MutableString$append$frost$core$String($tmp1243, $tmp1245);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
frost$core$Frost$unref$frost$core$Object$Q($tmp1241);
org$frostlang$frostc$ASTNode* $tmp1247 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
*(&local53) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block87;
block89:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
// line 401
frost$core$MutableString* $tmp1248 = *(&local52);
frost$core$String* $tmp1249 = frost$core$MutableString$finish$R$frost$core$String($tmp1248);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
frost$core$MutableString* $tmp1250 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
*(&local52) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1251 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
*(&local51) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1249;
block86:;
frost$core$Int64 $tmp1252 = (frost$core$Int64) {20};
frost$core$Bit $tmp1253 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1252);
bool $tmp1254 = $tmp1253.value;
if ($tmp1254) goto block90; else goto block91;
block90:;
org$frostlang$frostc$Position* $tmp1255 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1256 = *$tmp1255;
frost$core$String** $tmp1257 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1258 = *$tmp1257;
*(&local54) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
frost$core$String* $tmp1259 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
*(&local54) = $tmp1258;
org$frostlang$frostc$ASTNode** $tmp1260 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1261 = *$tmp1260;
*(&local55) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
org$frostlang$frostc$ASTNode* $tmp1262 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
*(&local55) = $tmp1261;
org$frostlang$frostc$ASTNode** $tmp1263 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1264 = *$tmp1263;
*(&local56) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
org$frostlang$frostc$ASTNode* $tmp1265 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
*(&local56) = $tmp1264;
org$frostlang$frostc$FixedArray** $tmp1266 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1267 = *$tmp1266;
*(&local57) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
org$frostlang$frostc$FixedArray* $tmp1268 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
*(&local57) = $tmp1267;
// line 404
frost$core$MutableString* $tmp1269 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1269);
*(&local58) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
frost$core$MutableString* $tmp1270 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
*(&local58) = $tmp1269;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
// line 405
frost$core$String* $tmp1271 = *(&local54);
frost$core$Bit $tmp1272 = frost$core$Bit$init$builtin_bit($tmp1271 != NULL);
bool $tmp1273 = $tmp1272.value;
if ($tmp1273) goto block92; else goto block93;
block92:;
// line 406
frost$core$MutableString* $tmp1274 = *(&local58);
frost$core$String* $tmp1275 = *(&local54);
frost$core$String* $tmp1276 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1275, &$s1277);
frost$core$MutableString$append$frost$core$String($tmp1274, $tmp1276);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
goto block93;
block93:;
// line 408
frost$core$MutableString* $tmp1278 = *(&local58);
org$frostlang$frostc$ASTNode* $tmp1279 = *(&local55);
frost$core$String* $tmp1280 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1281, ((frost$core$Object*) $tmp1279));
frost$core$String* $tmp1282 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1280, &$s1283);
org$frostlang$frostc$ASTNode* $tmp1284 = *(&local56);
frost$core$String* $tmp1285 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1282, ((frost$core$Object*) $tmp1284));
frost$core$String* $tmp1286 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1285, &$s1287);
frost$core$MutableString$append$frost$core$String($tmp1278, $tmp1286);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
// line 409
org$frostlang$frostc$FixedArray* $tmp1288 = *(&local57);
ITable* $tmp1289 = ((frost$collections$Iterable*) $tmp1288)->$class->itable;
while ($tmp1289->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1289 = $tmp1289->next;
}
$fn1291 $tmp1290 = $tmp1289->methods[0];
frost$collections$Iterator* $tmp1292 = $tmp1290(((frost$collections$Iterable*) $tmp1288));
goto block94;
block94:;
ITable* $tmp1293 = $tmp1292->$class->itable;
while ($tmp1293->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1293 = $tmp1293->next;
}
$fn1295 $tmp1294 = $tmp1293->methods[0];
frost$core$Bit $tmp1296 = $tmp1294($tmp1292);
bool $tmp1297 = $tmp1296.value;
if ($tmp1297) goto block96; else goto block95;
block95:;
*(&local59) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1298 = $tmp1292->$class->itable;
while ($tmp1298->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1298 = $tmp1298->next;
}
$fn1300 $tmp1299 = $tmp1298->methods[1];
frost$core$Object* $tmp1301 = $tmp1299($tmp1292);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1301)));
org$frostlang$frostc$ASTNode* $tmp1302 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
*(&local59) = ((org$frostlang$frostc$ASTNode*) $tmp1301);
// line 410
frost$core$MutableString* $tmp1303 = *(&local58);
org$frostlang$frostc$ASTNode* $tmp1304 = *(&local59);
frost$core$String* $tmp1305 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1304), &$s1306);
frost$core$MutableString$append$frost$core$String($tmp1303, $tmp1305);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
frost$core$Frost$unref$frost$core$Object$Q($tmp1301);
org$frostlang$frostc$ASTNode* $tmp1307 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
*(&local59) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block94;
block96:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
// line 412
frost$core$MutableString* $tmp1308 = *(&local58);
frost$core$MutableString$append$frost$core$String($tmp1308, &$s1309);
// line 413
frost$core$MutableString* $tmp1310 = *(&local58);
frost$core$String* $tmp1311 = frost$core$MutableString$finish$R$frost$core$String($tmp1310);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
frost$core$MutableString* $tmp1312 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
*(&local58) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1313 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
*(&local57) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1314 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
*(&local56) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1315 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
*(&local55) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1316 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
*(&local54) = ((frost$core$String*) NULL);
return $tmp1311;
block91:;
frost$core$Int64 $tmp1317 = (frost$core$Int64) {21};
frost$core$Bit $tmp1318 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1317);
bool $tmp1319 = $tmp1318.value;
if ($tmp1319) goto block97; else goto block98;
block97:;
org$frostlang$frostc$Position* $tmp1320 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1321 = *$tmp1320;
frost$core$String** $tmp1322 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1323 = *$tmp1322;
*(&local60) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
frost$core$String* $tmp1324 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
*(&local60) = $tmp1323;
org$frostlang$frostc$FixedArray** $tmp1325 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1326 = *$tmp1325;
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
org$frostlang$frostc$FixedArray* $tmp1327 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
*(&local61) = $tmp1326;
// line 416
frost$core$String* $tmp1328 = *(&local60);
frost$core$String* $tmp1329 = frost$core$String$get_asString$R$frost$core$String($tmp1328);
frost$core$String* $tmp1330 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1329, &$s1331);
org$frostlang$frostc$FixedArray* $tmp1332 = *(&local61);
ITable* $tmp1333 = ((frost$collections$CollectionView*) $tmp1332)->$class->itable;
while ($tmp1333->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1333 = $tmp1333->next;
}
$fn1335 $tmp1334 = $tmp1333->methods[1];
frost$core$String* $tmp1336 = $tmp1334(((frost$collections$CollectionView*) $tmp1332));
frost$core$String* $tmp1337 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1330, $tmp1336);
frost$core$String* $tmp1338 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1337, &$s1339);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
org$frostlang$frostc$FixedArray* $tmp1340 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1341 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
*(&local60) = ((frost$core$String*) NULL);
return $tmp1338;
block98:;
frost$core$Int64 $tmp1342 = (frost$core$Int64) {22};
frost$core$Bit $tmp1343 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1342);
bool $tmp1344 = $tmp1343.value;
if ($tmp1344) goto block99; else goto block100;
block99:;
org$frostlang$frostc$Position* $tmp1345 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1346 = *$tmp1345;
frost$core$String** $tmp1347 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1348 = *$tmp1347;
*(&local62) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
frost$core$String* $tmp1349 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
*(&local62) = $tmp1348;
// line 419
frost$core$String* $tmp1350 = *(&local62);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
frost$core$String* $tmp1351 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
*(&local62) = ((frost$core$String*) NULL);
return $tmp1350;
block100:;
frost$core$Int64 $tmp1352 = (frost$core$Int64) {23};
frost$core$Bit $tmp1353 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1352);
bool $tmp1354 = $tmp1353.value;
if ($tmp1354) goto block101; else goto block102;
block101:;
org$frostlang$frostc$Position* $tmp1355 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1356 = *$tmp1355;
frost$core$String** $tmp1357 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1358 = *$tmp1357;
*(&local63) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
frost$core$String* $tmp1359 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
*(&local63) = $tmp1358;
org$frostlang$frostc$FixedArray** $tmp1360 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1361 = *$tmp1360;
*(&local64) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
org$frostlang$frostc$FixedArray* $tmp1362 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
*(&local64) = $tmp1361;
// line 422
frost$core$String* $tmp1363 = *(&local63);
frost$core$String* $tmp1364 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1365, $tmp1363);
frost$core$String* $tmp1366 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1364, &$s1367);
org$frostlang$frostc$FixedArray* $tmp1368 = *(&local64);
ITable* $tmp1369 = ((frost$collections$CollectionView*) $tmp1368)->$class->itable;
while ($tmp1369->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1369 = $tmp1369->next;
}
$fn1371 $tmp1370 = $tmp1369->methods[1];
frost$core$String* $tmp1372 = $tmp1370(((frost$collections$CollectionView*) $tmp1368));
frost$core$String* $tmp1373 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1366, $tmp1372);
frost$core$String* $tmp1374 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1373, &$s1375);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
org$frostlang$frostc$FixedArray* $tmp1376 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
*(&local64) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1377 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
*(&local63) = ((frost$core$String*) NULL);
return $tmp1374;
block102:;
frost$core$Int64 $tmp1378 = (frost$core$Int64) {24};
frost$core$Bit $tmp1379 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1378);
bool $tmp1380 = $tmp1379.value;
if ($tmp1380) goto block103; else goto block104;
block103:;
org$frostlang$frostc$Position* $tmp1381 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1382 = *$tmp1381;
org$frostlang$frostc$ASTNode** $tmp1383 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1384 = *$tmp1383;
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
org$frostlang$frostc$ASTNode* $tmp1385 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
*(&local65) = $tmp1384;
org$frostlang$frostc$FixedArray** $tmp1386 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1387 = *$tmp1386;
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1387));
org$frostlang$frostc$FixedArray* $tmp1388 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
*(&local66) = $tmp1387;
org$frostlang$frostc$ASTNode** $tmp1389 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1390 = *$tmp1389;
*(&local67) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
org$frostlang$frostc$ASTNode* $tmp1391 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
*(&local67) = $tmp1390;
// line 425
frost$core$MutableString* $tmp1392 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$ASTNode* $tmp1393 = *(&local65);
frost$core$String* $tmp1394 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1395, ((frost$core$Object*) $tmp1393));
frost$core$String* $tmp1396 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1394, &$s1397);
frost$core$MutableString$init$frost$core$String($tmp1392, $tmp1396);
*(&local68) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
frost$core$MutableString* $tmp1398 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
*(&local68) = $tmp1392;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
// line 426
org$frostlang$frostc$FixedArray* $tmp1399 = *(&local66);
ITable* $tmp1400 = ((frost$collections$Iterable*) $tmp1399)->$class->itable;
while ($tmp1400->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1400 = $tmp1400->next;
}
$fn1402 $tmp1401 = $tmp1400->methods[0];
frost$collections$Iterator* $tmp1403 = $tmp1401(((frost$collections$Iterable*) $tmp1399));
goto block105;
block105:;
ITable* $tmp1404 = $tmp1403->$class->itable;
while ($tmp1404->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1404 = $tmp1404->next;
}
$fn1406 $tmp1405 = $tmp1404->methods[0];
frost$core$Bit $tmp1407 = $tmp1405($tmp1403);
bool $tmp1408 = $tmp1407.value;
if ($tmp1408) goto block107; else goto block106;
block106:;
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1409 = $tmp1403->$class->itable;
while ($tmp1409->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1409 = $tmp1409->next;
}
$fn1411 $tmp1410 = $tmp1409->methods[1];
frost$core$Object* $tmp1412 = $tmp1410($tmp1403);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1412)));
org$frostlang$frostc$ASTNode* $tmp1413 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
*(&local69) = ((org$frostlang$frostc$ASTNode*) $tmp1412);
// line 427
frost$core$MutableString* $tmp1414 = *(&local68);
org$frostlang$frostc$ASTNode* $tmp1415 = *(&local69);
frost$core$String* $tmp1416 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1415), &$s1417);
frost$core$MutableString$append$frost$core$String($tmp1414, $tmp1416);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$core$Frost$unref$frost$core$Object$Q($tmp1412);
org$frostlang$frostc$ASTNode* $tmp1418 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block105;
block107:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
// line 429
frost$core$MutableString* $tmp1419 = *(&local68);
frost$core$MutableString$append$frost$core$String($tmp1419, &$s1420);
// line 430
org$frostlang$frostc$ASTNode* $tmp1421 = *(&local67);
frost$core$Bit $tmp1422 = frost$core$Bit$init$builtin_bit($tmp1421 != NULL);
bool $tmp1423 = $tmp1422.value;
if ($tmp1423) goto block108; else goto block109;
block108:;
// line 431
frost$core$MutableString* $tmp1424 = *(&local68);
org$frostlang$frostc$ASTNode* $tmp1425 = *(&local67);
frost$core$String* $tmp1426 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1427, ((frost$core$Object*) $tmp1425));
frost$core$String* $tmp1428 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1426, &$s1429);
frost$core$MutableString$append$frost$core$String($tmp1424, $tmp1428);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
goto block109;
block109:;
// line 433
frost$core$MutableString* $tmp1430 = *(&local68);
frost$core$String* $tmp1431 = frost$core$MutableString$finish$R$frost$core$String($tmp1430);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$MutableString* $tmp1432 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
*(&local68) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1433 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
*(&local67) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1434 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1435 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1435));
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1431;
block104:;
frost$core$Int64 $tmp1436 = (frost$core$Int64) {25};
frost$core$Bit $tmp1437 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1436);
bool $tmp1438 = $tmp1437.value;
if ($tmp1438) goto block110; else goto block111;
block110:;
org$frostlang$frostc$Position* $tmp1439 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1440 = *$tmp1439;
frost$core$UInt64* $tmp1441 = (frost$core$UInt64*) (param0->$data + 16);
frost$core$UInt64 $tmp1442 = *$tmp1441;
*(&local70) = $tmp1442;
// line 436
frost$core$UInt64 $tmp1443 = *(&local70);
frost$core$UInt64$wrapper* $tmp1444;
$tmp1444 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp1444->value = $tmp1443;
$fn1446 $tmp1445 = ($fn1446) ((frost$core$Object*) $tmp1444)->$class->vtable[0];
frost$core$String* $tmp1447 = $tmp1445(((frost$core$Object*) $tmp1444));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
return $tmp1447;
block111:;
frost$core$Int64 $tmp1448 = (frost$core$Int64) {26};
frost$core$Bit $tmp1449 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1448);
bool $tmp1450 = $tmp1449.value;
if ($tmp1450) goto block112; else goto block113;
block112:;
org$frostlang$frostc$Position* $tmp1451 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1452 = *$tmp1451;
org$frostlang$frostc$IR$Value** $tmp1453 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp1454 = *$tmp1453;
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
org$frostlang$frostc$IR$Value* $tmp1455 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
*(&local71) = $tmp1454;
// line 439
org$frostlang$frostc$IR$Value* $tmp1456 = *(&local71);
$fn1458 $tmp1457 = ($fn1458) ((frost$core$Object*) $tmp1456)->$class->vtable[0];
frost$core$String* $tmp1459 = $tmp1457(((frost$core$Object*) $tmp1456));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
org$frostlang$frostc$IR$Value* $tmp1460 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp1459;
block113:;
frost$core$Int64 $tmp1461 = (frost$core$Int64) {27};
frost$core$Bit $tmp1462 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1461);
bool $tmp1463 = $tmp1462.value;
if ($tmp1463) goto block114; else goto block115;
block114:;
org$frostlang$frostc$Position* $tmp1464 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1465 = *$tmp1464;
frost$core$String** $tmp1466 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1467 = *$tmp1466;
*(&local72) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
frost$core$String* $tmp1468 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
*(&local72) = $tmp1467;
org$frostlang$frostc$FixedArray** $tmp1469 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1470 = *$tmp1469;
*(&local73) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
org$frostlang$frostc$FixedArray* $tmp1471 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
*(&local73) = $tmp1470;
// line 442
frost$core$MutableString* $tmp1472 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1472);
*(&local74) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
frost$core$MutableString* $tmp1473 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
*(&local74) = $tmp1472;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
// line 443
frost$core$String* $tmp1474 = *(&local72);
frost$core$Bit $tmp1475 = frost$core$Bit$init$builtin_bit($tmp1474 != NULL);
bool $tmp1476 = $tmp1475.value;
if ($tmp1476) goto block116; else goto block117;
block116:;
// line 444
frost$core$MutableString* $tmp1477 = *(&local74);
frost$core$String* $tmp1478 = *(&local72);
frost$core$String* $tmp1479 = frost$core$String$get_asString$R$frost$core$String($tmp1478);
frost$core$String* $tmp1480 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1479, &$s1481);
frost$core$MutableString$append$frost$core$String($tmp1477, $tmp1480);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
goto block117;
block117:;
// line 446
frost$core$MutableString* $tmp1482 = *(&local74);
frost$core$MutableString$append$frost$core$String($tmp1482, &$s1483);
// line 447
org$frostlang$frostc$FixedArray* $tmp1484 = *(&local73);
ITable* $tmp1485 = ((frost$collections$Iterable*) $tmp1484)->$class->itable;
while ($tmp1485->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1485 = $tmp1485->next;
}
$fn1487 $tmp1486 = $tmp1485->methods[0];
frost$collections$Iterator* $tmp1488 = $tmp1486(((frost$collections$Iterable*) $tmp1484));
goto block118;
block118:;
ITable* $tmp1489 = $tmp1488->$class->itable;
while ($tmp1489->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1489 = $tmp1489->next;
}
$fn1491 $tmp1490 = $tmp1489->methods[0];
frost$core$Bit $tmp1492 = $tmp1490($tmp1488);
bool $tmp1493 = $tmp1492.value;
if ($tmp1493) goto block120; else goto block119;
block119:;
*(&local75) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1494 = $tmp1488->$class->itable;
while ($tmp1494->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1494 = $tmp1494->next;
}
$fn1496 $tmp1495 = $tmp1494->methods[1];
frost$core$Object* $tmp1497 = $tmp1495($tmp1488);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1497)));
org$frostlang$frostc$ASTNode* $tmp1498 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
*(&local75) = ((org$frostlang$frostc$ASTNode*) $tmp1497);
// line 448
frost$core$MutableString* $tmp1499 = *(&local74);
org$frostlang$frostc$ASTNode* $tmp1500 = *(&local75);
frost$core$String* $tmp1501 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1500), &$s1502);
frost$core$MutableString$append$frost$core$String($tmp1499, $tmp1501);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
frost$core$Frost$unref$frost$core$Object$Q($tmp1497);
org$frostlang$frostc$ASTNode* $tmp1503 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
*(&local75) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block118;
block120:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
// line 450
frost$core$MutableString* $tmp1504 = *(&local74);
frost$core$MutableString$append$frost$core$String($tmp1504, &$s1505);
// line 451
frost$core$MutableString* $tmp1506 = *(&local74);
frost$core$String* $tmp1507 = frost$core$MutableString$finish$R$frost$core$String($tmp1506);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
frost$core$MutableString* $tmp1508 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
*(&local74) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1509 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
*(&local73) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1510 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1510));
*(&local72) = ((frost$core$String*) NULL);
return $tmp1507;
block115:;
frost$core$Int64 $tmp1511 = (frost$core$Int64) {28};
frost$core$Bit $tmp1512 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1511);
bool $tmp1513 = $tmp1512.value;
if ($tmp1513) goto block121; else goto block122;
block121:;
org$frostlang$frostc$Position* $tmp1514 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1515 = *$tmp1514;
org$frostlang$frostc$ASTNode** $tmp1516 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1517 = *$tmp1516;
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
org$frostlang$frostc$ASTNode* $tmp1518 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
*(&local76) = $tmp1517;
org$frostlang$frostc$FixedArray** $tmp1519 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1520 = *$tmp1519;
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1520));
org$frostlang$frostc$FixedArray* $tmp1521 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
*(&local77) = $tmp1520;
org$frostlang$frostc$FixedArray** $tmp1522 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1523 = *$tmp1522;
*(&local78) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
org$frostlang$frostc$FixedArray* $tmp1524 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
*(&local78) = $tmp1523;
// line 454
frost$core$MutableString* $tmp1525 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$ASTNode* $tmp1526 = *(&local76);
frost$core$String* $tmp1527 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1528, ((frost$core$Object*) $tmp1526));
frost$core$String* $tmp1529 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1527, &$s1530);
frost$core$MutableString$init$frost$core$String($tmp1525, $tmp1529);
*(&local79) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
frost$core$MutableString* $tmp1531 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
*(&local79) = $tmp1525;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
// line 455
org$frostlang$frostc$FixedArray* $tmp1532 = *(&local77);
ITable* $tmp1533 = ((frost$collections$Iterable*) $tmp1532)->$class->itable;
while ($tmp1533->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1533 = $tmp1533->next;
}
$fn1535 $tmp1534 = $tmp1533->methods[0];
frost$collections$Iterator* $tmp1536 = $tmp1534(((frost$collections$Iterable*) $tmp1532));
goto block123;
block123:;
ITable* $tmp1537 = $tmp1536->$class->itable;
while ($tmp1537->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1537 = $tmp1537->next;
}
$fn1539 $tmp1538 = $tmp1537->methods[0];
frost$core$Bit $tmp1540 = $tmp1538($tmp1536);
bool $tmp1541 = $tmp1540.value;
if ($tmp1541) goto block125; else goto block124;
block124:;
*(&local80) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1542 = $tmp1536->$class->itable;
while ($tmp1542->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1542 = $tmp1542->next;
}
$fn1544 $tmp1543 = $tmp1542->methods[1];
frost$core$Object* $tmp1545 = $tmp1543($tmp1536);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1545)));
org$frostlang$frostc$ASTNode* $tmp1546 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1546));
*(&local80) = ((org$frostlang$frostc$ASTNode*) $tmp1545);
// line 456
frost$core$MutableString* $tmp1547 = *(&local79);
org$frostlang$frostc$ASTNode* $tmp1548 = *(&local80);
frost$core$String* $tmp1549 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1548), &$s1550);
frost$core$MutableString$append$frost$core$String($tmp1547, $tmp1549);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1549));
frost$core$Frost$unref$frost$core$Object$Q($tmp1545);
org$frostlang$frostc$ASTNode* $tmp1551 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
*(&local80) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block123;
block125:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
// line 458
org$frostlang$frostc$FixedArray* $tmp1552 = *(&local78);
frost$core$Bit $tmp1553 = frost$core$Bit$init$builtin_bit($tmp1552 != NULL);
bool $tmp1554 = $tmp1553.value;
if ($tmp1554) goto block126; else goto block127;
block126:;
// line 459
frost$core$MutableString* $tmp1555 = *(&local79);
org$frostlang$frostc$FixedArray* $tmp1556 = *(&local78);
frost$core$String* $tmp1557 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1556), &$s1558);
frost$core$MutableString$append$frost$core$String($tmp1555, $tmp1557);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
goto block127;
block127:;
// line 461
frost$core$MutableString* $tmp1559 = *(&local79);
frost$core$MutableString$append$frost$core$String($tmp1559, &$s1560);
// line 462
frost$core$MutableString* $tmp1561 = *(&local79);
frost$core$String* $tmp1562 = frost$core$MutableString$finish$R$frost$core$String($tmp1561);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
frost$core$MutableString* $tmp1563 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
*(&local79) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1564 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
*(&local78) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1565 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1566 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1562;
block122:;
frost$core$Int64 $tmp1567 = (frost$core$Int64) {29};
frost$core$Bit $tmp1568 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1567);
bool $tmp1569 = $tmp1568.value;
if ($tmp1569) goto block128; else goto block129;
block128:;
org$frostlang$frostc$Position* $tmp1570 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1571 = *$tmp1570;
org$frostlang$frostc$ASTNode** $tmp1572 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1573 = *$tmp1572;
*(&local81) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1573));
org$frostlang$frostc$ASTNode* $tmp1574 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
*(&local81) = $tmp1573;
org$frostlang$frostc$FixedArray** $tmp1575 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1576 = *$tmp1575;
*(&local82) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1576));
org$frostlang$frostc$FixedArray* $tmp1577 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
*(&local82) = $tmp1576;
org$frostlang$frostc$MethodDecl$Kind* $tmp1578 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp1579 = *$tmp1578;
*(&local83) = $tmp1579;
frost$core$String** $tmp1580 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp1581 = *$tmp1580;
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1581));
frost$core$String* $tmp1582 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
*(&local84) = $tmp1581;
org$frostlang$frostc$FixedArray** $tmp1583 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1584 = *$tmp1583;
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1584));
org$frostlang$frostc$FixedArray* $tmp1585 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
*(&local85) = $tmp1584;
org$frostlang$frostc$FixedArray** $tmp1586 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp1587 = *$tmp1586;
*(&local86) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1587));
org$frostlang$frostc$FixedArray* $tmp1588 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1588));
*(&local86) = $tmp1587;
org$frostlang$frostc$ASTNode** $tmp1589 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
org$frostlang$frostc$ASTNode* $tmp1590 = *$tmp1589;
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1590));
org$frostlang$frostc$ASTNode* $tmp1591 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
*(&local87) = $tmp1590;
org$frostlang$frostc$FixedArray** $tmp1592 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp1593 = *$tmp1592;
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
org$frostlang$frostc$FixedArray* $tmp1594 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1594));
*(&local88) = $tmp1593;
// line 466
frost$core$MutableString* $tmp1595 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1595);
*(&local89) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
frost$core$MutableString* $tmp1596 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
*(&local89) = $tmp1595;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
// line 467
org$frostlang$frostc$ASTNode* $tmp1597 = *(&local81);
frost$core$Bit $tmp1598 = frost$core$Bit$init$builtin_bit($tmp1597 != NULL);
bool $tmp1599 = $tmp1598.value;
if ($tmp1599) goto block130; else goto block131;
block130:;
// line 468
frost$core$MutableString* $tmp1600 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1601 = *(&local81);
frost$core$String* $tmp1602 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1601), &$s1603);
frost$core$MutableString$append$frost$core$String($tmp1600, $tmp1602);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1602));
goto block131;
block131:;
// line 470
org$frostlang$frostc$FixedArray* $tmp1604 = *(&local82);
ITable* $tmp1605 = ((frost$collections$Iterable*) $tmp1604)->$class->itable;
while ($tmp1605->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1605 = $tmp1605->next;
}
$fn1607 $tmp1606 = $tmp1605->methods[0];
frost$collections$Iterator* $tmp1608 = $tmp1606(((frost$collections$Iterable*) $tmp1604));
goto block132;
block132:;
ITable* $tmp1609 = $tmp1608->$class->itable;
while ($tmp1609->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1609 = $tmp1609->next;
}
$fn1611 $tmp1610 = $tmp1609->methods[0];
frost$core$Bit $tmp1612 = $tmp1610($tmp1608);
bool $tmp1613 = $tmp1612.value;
if ($tmp1613) goto block134; else goto block133;
block133:;
*(&local90) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1614 = $tmp1608->$class->itable;
while ($tmp1614->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1614 = $tmp1614->next;
}
$fn1616 $tmp1615 = $tmp1614->methods[1];
frost$core$Object* $tmp1617 = $tmp1615($tmp1608);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1617)));
org$frostlang$frostc$ASTNode* $tmp1618 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
*(&local90) = ((org$frostlang$frostc$ASTNode*) $tmp1617);
// line 471
frost$core$MutableString* $tmp1619 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1620 = *(&local90);
frost$core$String* $tmp1621 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1620), &$s1622);
frost$core$MutableString$append$frost$core$String($tmp1619, $tmp1621);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
frost$core$Frost$unref$frost$core$Object$Q($tmp1617);
org$frostlang$frostc$ASTNode* $tmp1623 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
*(&local90) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block132;
block134:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
// line 473
org$frostlang$frostc$MethodDecl$Kind $tmp1624 = *(&local83);
frost$core$Int64 $tmp1625 = $tmp1624.$rawValue;
frost$core$Int64 $tmp1626 = (frost$core$Int64) {0};
frost$core$Bit $tmp1627 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1625, $tmp1626);
bool $tmp1628 = $tmp1627.value;
if ($tmp1628) goto block136; else goto block137;
block136:;
// line 474
frost$core$MutableString* $tmp1629 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1629, &$s1630);
goto block135;
block137:;
frost$core$Int64 $tmp1631 = (frost$core$Int64) {1};
frost$core$Bit $tmp1632 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1625, $tmp1631);
bool $tmp1633 = $tmp1632.value;
if ($tmp1633) goto block138; else goto block139;
block138:;
// line 475
frost$core$MutableString* $tmp1634 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1634, &$s1635);
goto block135;
block139:;
frost$core$Int64 $tmp1636 = (frost$core$Int64) {2};
frost$core$Bit $tmp1637 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1625, $tmp1636);
bool $tmp1638 = $tmp1637.value;
if ($tmp1638) goto block140; else goto block135;
block140:;
goto block135;
block135:;
// line 478
frost$core$MutableString* $tmp1639 = *(&local89);
frost$core$String* $tmp1640 = *(&local84);
frost$core$MutableString$append$frost$core$String($tmp1639, $tmp1640);
// line 479
org$frostlang$frostc$FixedArray* $tmp1641 = *(&local85);
frost$core$Bit $tmp1642 = frost$core$Bit$init$builtin_bit($tmp1641 != NULL);
bool $tmp1643 = $tmp1642.value;
if ($tmp1643) goto block141; else goto block142;
block141:;
// line 480
frost$core$MutableString* $tmp1644 = *(&local89);
org$frostlang$frostc$FixedArray* $tmp1645 = *(&local85);
ITable* $tmp1646 = ((frost$collections$CollectionView*) $tmp1645)->$class->itable;
while ($tmp1646->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1646 = $tmp1646->next;
}
$fn1648 $tmp1647 = $tmp1646->methods[1];
frost$core$String* $tmp1649 = $tmp1647(((frost$collections$CollectionView*) $tmp1645));
frost$core$String* $tmp1650 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1651, $tmp1649);
frost$core$String* $tmp1652 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1650, &$s1653);
frost$core$MutableString$append$frost$core$String($tmp1644, $tmp1652);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1649));
goto block142;
block142:;
// line 482
frost$core$MutableString* $tmp1654 = *(&local89);
org$frostlang$frostc$FixedArray* $tmp1655 = *(&local86);
ITable* $tmp1656 = ((frost$collections$CollectionView*) $tmp1655)->$class->itable;
while ($tmp1656->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1656 = $tmp1656->next;
}
$fn1658 $tmp1657 = $tmp1656->methods[1];
frost$core$String* $tmp1659 = $tmp1657(((frost$collections$CollectionView*) $tmp1655));
frost$core$String* $tmp1660 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1661, $tmp1659);
frost$core$String* $tmp1662 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1660, &$s1663);
frost$core$MutableString$append$frost$core$String($tmp1654, $tmp1662);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1659));
// line 483
org$frostlang$frostc$ASTNode* $tmp1664 = *(&local87);
frost$core$Bit $tmp1665 = frost$core$Bit$init$builtin_bit($tmp1664 != NULL);
bool $tmp1666 = $tmp1665.value;
if ($tmp1666) goto block143; else goto block144;
block143:;
// line 484
frost$core$MutableString* $tmp1667 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1668 = *(&local87);
frost$core$String* $tmp1669 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1670, ((frost$core$Object*) $tmp1668));
frost$core$String* $tmp1671 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1669, &$s1672);
frost$core$MutableString$append$frost$core$String($tmp1667, $tmp1671);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
goto block144;
block144:;
// line 486
org$frostlang$frostc$FixedArray* $tmp1673 = *(&local88);
frost$core$Bit $tmp1674 = frost$core$Bit$init$builtin_bit($tmp1673 != NULL);
bool $tmp1675 = $tmp1674.value;
if ($tmp1675) goto block145; else goto block146;
block145:;
// line 487
frost$core$MutableString* $tmp1676 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1676, &$s1677);
// line 488
org$frostlang$frostc$FixedArray* $tmp1678 = *(&local88);
ITable* $tmp1679 = ((frost$collections$Iterable*) $tmp1678)->$class->itable;
while ($tmp1679->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1679 = $tmp1679->next;
}
$fn1681 $tmp1680 = $tmp1679->methods[0];
frost$collections$Iterator* $tmp1682 = $tmp1680(((frost$collections$Iterable*) $tmp1678));
goto block147;
block147:;
ITable* $tmp1683 = $tmp1682->$class->itable;
while ($tmp1683->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1683 = $tmp1683->next;
}
$fn1685 $tmp1684 = $tmp1683->methods[0];
frost$core$Bit $tmp1686 = $tmp1684($tmp1682);
bool $tmp1687 = $tmp1686.value;
if ($tmp1687) goto block149; else goto block148;
block148:;
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1688 = $tmp1682->$class->itable;
while ($tmp1688->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1688 = $tmp1688->next;
}
$fn1690 $tmp1689 = $tmp1688->methods[1];
frost$core$Object* $tmp1691 = $tmp1689($tmp1682);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1691)));
org$frostlang$frostc$ASTNode* $tmp1692 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
*(&local91) = ((org$frostlang$frostc$ASTNode*) $tmp1691);
// line 489
frost$core$MutableString* $tmp1693 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1694 = *(&local91);
frost$core$String* $tmp1695 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1694), &$s1696);
frost$core$MutableString$append$frost$core$String($tmp1693, $tmp1695);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
frost$core$Frost$unref$frost$core$Object$Q($tmp1691);
org$frostlang$frostc$ASTNode* $tmp1697 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block147;
block149:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
// line 491
frost$core$MutableString* $tmp1698 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1698, &$s1699);
goto block146;
block146:;
// line 493
frost$core$MutableString* $tmp1700 = *(&local89);
frost$core$String* $tmp1701 = frost$core$MutableString$finish$R$frost$core$String($tmp1700);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
frost$core$MutableString* $tmp1702 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1702));
*(&local89) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1703 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1703));
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1704 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1705 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
*(&local86) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1706 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1707 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
*(&local84) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1708 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
*(&local82) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1709 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
*(&local81) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1701;
block129:;
frost$core$Int64 $tmp1710 = (frost$core$Int64) {30};
frost$core$Bit $tmp1711 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1710);
bool $tmp1712 = $tmp1711.value;
if ($tmp1712) goto block150; else goto block151;
block150:;
org$frostlang$frostc$Position* $tmp1713 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1714 = *$tmp1713;
org$frostlang$frostc$parser$Token$Kind* $tmp1715 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp1716 = *$tmp1715;
*(&local92) = $tmp1716;
org$frostlang$frostc$FixedArray** $tmp1717 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1718 = *$tmp1717;
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1718));
org$frostlang$frostc$FixedArray* $tmp1719 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
*(&local93) = $tmp1718;
org$frostlang$frostc$ASTNode** $tmp1720 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1721 = *$tmp1720;
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
org$frostlang$frostc$ASTNode* $tmp1722 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
*(&local94) = $tmp1721;
// line 496
*(&local95) = ((frost$core$String*) NULL);
// line 497
org$frostlang$frostc$parser$Token$Kind $tmp1723 = *(&local92);
frost$core$Int64 $tmp1724 = $tmp1723.$rawValue;
frost$core$Int64 $tmp1725 = (frost$core$Int64) {94};
frost$core$Bit $tmp1726 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1724, $tmp1725);
bool $tmp1727 = $tmp1726.value;
if ($tmp1727) goto block153; else goto block154;
block153:;
// line 499
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1728));
frost$core$String* $tmp1729 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
*(&local95) = &$s1730;
goto block152;
block154:;
frost$core$Int64 $tmp1731 = (frost$core$Int64) {95};
frost$core$Bit $tmp1732 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1724, $tmp1731);
bool $tmp1733 = $tmp1732.value;
if ($tmp1733) goto block155; else goto block156;
block155:;
// line 502
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1734));
frost$core$String* $tmp1735 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
*(&local95) = &$s1736;
goto block152;
block156:;
frost$core$Int64 $tmp1737 = (frost$core$Int64) {96};
frost$core$Bit $tmp1738 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1724, $tmp1737);
bool $tmp1739 = $tmp1738.value;
if ($tmp1739) goto block157; else goto block158;
block157:;
// line 505
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1740));
frost$core$String* $tmp1741 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1741));
*(&local95) = &$s1742;
goto block152;
block158:;
frost$core$Int64 $tmp1743 = (frost$core$Int64) {97};
frost$core$Bit $tmp1744 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1724, $tmp1743);
bool $tmp1745 = $tmp1744.value;
if ($tmp1745) goto block159; else goto block152;
block159:;
// line 508
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1746));
frost$core$String* $tmp1747 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
*(&local95) = &$s1748;
goto block152;
block152:;
// line 511
org$frostlang$frostc$FixedArray* $tmp1749 = *(&local93);
ITable* $tmp1750 = ((frost$collections$CollectionView*) $tmp1749)->$class->itable;
while ($tmp1750->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1750 = $tmp1750->next;
}
$fn1752 $tmp1751 = $tmp1750->methods[1];
frost$core$String* $tmp1753 = $tmp1751(((frost$collections$CollectionView*) $tmp1749));
frost$core$String* $tmp1754 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1755, $tmp1753);
frost$core$String* $tmp1756 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1754, &$s1757);
frost$core$String* $tmp1758 = *(&local95);
frost$core$String* $tmp1759 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1756, $tmp1758);
frost$core$String* $tmp1760 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1759, &$s1761);
*(&local96) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
frost$core$String* $tmp1762 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1762));
*(&local96) = $tmp1760;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1753));
// line 512
org$frostlang$frostc$ASTNode* $tmp1763 = *(&local94);
frost$core$Bit $tmp1764 = frost$core$Bit$init$builtin_bit($tmp1763 != NULL);
bool $tmp1765 = $tmp1764.value;
if ($tmp1765) goto block160; else goto block161;
block160:;
// line 513
frost$core$String* $tmp1766 = *(&local96);
frost$core$String* $tmp1767 = frost$core$String$get_asString$R$frost$core$String($tmp1766);
frost$core$String* $tmp1768 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1767, &$s1769);
org$frostlang$frostc$ASTNode* $tmp1770 = *(&local94);
frost$core$String* $tmp1771 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1768, ((frost$core$Object*) $tmp1770));
frost$core$String* $tmp1772 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1771, &$s1773);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
frost$core$String* $tmp1774 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1774));
*(&local96) = ((frost$core$String*) NULL);
frost$core$String* $tmp1775 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
*(&local95) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1776 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1777 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1777));
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1772;
block161:;
// line 515
frost$core$String* $tmp1778 = *(&local96);
frost$core$String* $tmp1779 = frost$core$String$get_asString$R$frost$core$String($tmp1778);
frost$core$String* $tmp1780 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1779, &$s1781);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1779));
frost$core$String* $tmp1782 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
*(&local96) = ((frost$core$String*) NULL);
frost$core$String* $tmp1783 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
*(&local95) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1784 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1785 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1785));
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1780;
block151:;
frost$core$Int64 $tmp1786 = (frost$core$Int64) {31};
frost$core$Bit $tmp1787 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1786);
bool $tmp1788 = $tmp1787.value;
if ($tmp1788) goto block162; else goto block163;
block162:;
// line 518
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1789));
return &$s1790;
block163:;
frost$core$Int64 $tmp1791 = (frost$core$Int64) {32};
frost$core$Bit $tmp1792 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1791);
bool $tmp1793 = $tmp1792.value;
if ($tmp1793) goto block164; else goto block165;
block164:;
org$frostlang$frostc$Position* $tmp1794 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1795 = *$tmp1794;
org$frostlang$frostc$ASTNode** $tmp1796 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1797 = *$tmp1796;
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
org$frostlang$frostc$ASTNode* $tmp1798 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
*(&local97) = $tmp1797;
// line 521
org$frostlang$frostc$ASTNode* $tmp1799 = *(&local97);
frost$core$String* $tmp1800 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1799), &$s1801);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
org$frostlang$frostc$ASTNode* $tmp1802 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1800;
block165:;
frost$core$Int64 $tmp1803 = (frost$core$Int64) {33};
frost$core$Bit $tmp1804 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1803);
bool $tmp1805 = $tmp1804.value;
if ($tmp1805) goto block166; else goto block167;
block166:;
org$frostlang$frostc$Position* $tmp1806 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1807 = *$tmp1806;
frost$core$String** $tmp1808 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1809 = *$tmp1808;
*(&local98) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
frost$core$String* $tmp1810 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1810));
*(&local98) = $tmp1809;
// line 524
frost$core$String* $tmp1811 = *(&local98);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1811));
frost$core$String* $tmp1812 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1812));
*(&local98) = ((frost$core$String*) NULL);
return $tmp1811;
block167:;
frost$core$Int64 $tmp1813 = (frost$core$Int64) {34};
frost$core$Bit $tmp1814 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1813);
bool $tmp1815 = $tmp1814.value;
if ($tmp1815) goto block168; else goto block169;
block168:;
org$frostlang$frostc$Position* $tmp1816 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1817 = *$tmp1816;
frost$core$String** $tmp1818 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1819 = *$tmp1818;
*(&local99) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
frost$core$String* $tmp1820 = *(&local99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1820));
*(&local99) = $tmp1819;
org$frostlang$frostc$ASTNode** $tmp1821 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1822 = *$tmp1821;
*(&local100) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
org$frostlang$frostc$ASTNode* $tmp1823 = *(&local100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
*(&local100) = $tmp1822;
// line 527
frost$core$String* $tmp1824 = *(&local99);
frost$core$String* $tmp1825 = frost$core$String$get_asString$R$frost$core$String($tmp1824);
frost$core$String* $tmp1826 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1825, &$s1827);
org$frostlang$frostc$ASTNode* $tmp1828 = *(&local100);
frost$core$String* $tmp1829 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1826, ((frost$core$Object*) $tmp1828));
frost$core$String* $tmp1830 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1829, &$s1831);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1825));
org$frostlang$frostc$ASTNode* $tmp1832 = *(&local100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
*(&local100) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1833 = *(&local99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1833));
*(&local99) = ((frost$core$String*) NULL);
return $tmp1830;
block169:;
frost$core$Int64 $tmp1834 = (frost$core$Int64) {35};
frost$core$Bit $tmp1835 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1834);
bool $tmp1836 = $tmp1835.value;
if ($tmp1836) goto block170; else goto block171;
block170:;
org$frostlang$frostc$Position* $tmp1837 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1838 = *$tmp1837;
org$frostlang$frostc$ASTNode** $tmp1839 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1840 = *$tmp1839;
*(&local101) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
org$frostlang$frostc$ASTNode* $tmp1841 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
*(&local101) = $tmp1840;
frost$core$Bit* $tmp1842 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp1843 = *$tmp1842;
*(&local102) = $tmp1843;
org$frostlang$frostc$ASTNode** $tmp1844 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
org$frostlang$frostc$ASTNode* $tmp1845 = *$tmp1844;
*(&local103) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
org$frostlang$frostc$ASTNode* $tmp1846 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
*(&local103) = $tmp1845;
org$frostlang$frostc$ASTNode** $tmp1847 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp1848 = *$tmp1847;
*(&local104) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1848));
org$frostlang$frostc$ASTNode* $tmp1849 = *(&local104);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
*(&local104) = $tmp1848;
// line 530
frost$core$MutableString* $tmp1850 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1850);
*(&local105) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
frost$core$MutableString* $tmp1851 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
*(&local105) = $tmp1850;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
// line 531
org$frostlang$frostc$ASTNode* $tmp1852 = *(&local101);
frost$core$Bit $tmp1853 = frost$core$Bit$init$builtin_bit($tmp1852 != NULL);
bool $tmp1854 = $tmp1853.value;
if ($tmp1854) goto block172; else goto block173;
block172:;
// line 532
frost$core$MutableString* $tmp1855 = *(&local105);
org$frostlang$frostc$ASTNode* $tmp1856 = *(&local101);
frost$core$MutableString$append$frost$core$Object($tmp1855, ((frost$core$Object*) $tmp1856));
goto block173;
block173:;
// line 534
frost$core$Bit $tmp1857 = *(&local102);
bool $tmp1858 = $tmp1857.value;
if ($tmp1858) goto block174; else goto block176;
block174:;
// line 535
frost$core$MutableString* $tmp1859 = *(&local105);
frost$core$MutableString$append$frost$core$String($tmp1859, &$s1860);
goto block175;
block176:;
// line 1
// line 538
frost$core$MutableString* $tmp1861 = *(&local105);
frost$core$MutableString$append$frost$core$String($tmp1861, &$s1862);
goto block175;
block175:;
// line 540
org$frostlang$frostc$ASTNode* $tmp1863 = *(&local103);
frost$core$Bit $tmp1864 = frost$core$Bit$init$builtin_bit($tmp1863 != NULL);
bool $tmp1865 = $tmp1864.value;
if ($tmp1865) goto block177; else goto block178;
block177:;
// line 541
frost$core$MutableString* $tmp1866 = *(&local105);
org$frostlang$frostc$ASTNode* $tmp1867 = *(&local103);
frost$core$MutableString$append$frost$core$Object($tmp1866, ((frost$core$Object*) $tmp1867));
goto block178;
block178:;
// line 543
org$frostlang$frostc$ASTNode* $tmp1868 = *(&local104);
frost$core$Bit $tmp1869 = frost$core$Bit$init$builtin_bit($tmp1868 != NULL);
bool $tmp1870 = $tmp1869.value;
if ($tmp1870) goto block179; else goto block180;
block179:;
// line 544
frost$core$MutableString* $tmp1871 = *(&local105);
org$frostlang$frostc$ASTNode* $tmp1872 = *(&local104);
frost$core$String* $tmp1873 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1874, ((frost$core$Object*) $tmp1872));
frost$core$MutableString$append$frost$core$String($tmp1871, $tmp1873);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
goto block180;
block180:;
// line 546
frost$core$MutableString* $tmp1875 = *(&local105);
frost$core$String* $tmp1876 = frost$core$MutableString$finish$R$frost$core$String($tmp1875);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
frost$core$MutableString* $tmp1877 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1877));
*(&local105) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1878 = *(&local104);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1878));
*(&local104) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1879 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
*(&local103) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1880 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
*(&local101) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1876;
block171:;
frost$core$Int64 $tmp1881 = (frost$core$Int64) {36};
frost$core$Bit $tmp1882 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1881);
bool $tmp1883 = $tmp1882.value;
if ($tmp1883) goto block181; else goto block182;
block181:;
org$frostlang$frostc$Position* $tmp1884 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1885 = *$tmp1884;
frost$core$Real64* $tmp1886 = (frost$core$Real64*) (param0->$data + 16);
frost$core$Real64 $tmp1887 = *$tmp1886;
*(&local106) = $tmp1887;
// line 549
frost$core$Real64 $tmp1888 = *(&local106);
frost$core$Real64$wrapper* $tmp1889;
$tmp1889 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp1889->value = $tmp1888;
$fn1891 $tmp1890 = ($fn1891) ((frost$core$Object*) $tmp1889)->$class->vtable[0];
frost$core$String* $tmp1892 = $tmp1890(((frost$core$Object*) $tmp1889));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1889));
return $tmp1892;
block182:;
frost$core$Int64 $tmp1893 = (frost$core$Int64) {37};
frost$core$Bit $tmp1894 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1893);
bool $tmp1895 = $tmp1894.value;
if ($tmp1895) goto block183; else goto block184;
block183:;
org$frostlang$frostc$Position* $tmp1896 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1897 = *$tmp1896;
frost$core$String** $tmp1898 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1899 = *$tmp1898;
*(&local107) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
frost$core$String* $tmp1900 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
*(&local107) = $tmp1899;
// line 552
frost$core$String* $tmp1901 = *(&local107);
frost$core$String* $tmp1902 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1903, $tmp1901);
frost$core$String* $tmp1904 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1902, &$s1905);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
frost$core$String* $tmp1906 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
*(&local107) = ((frost$core$String*) NULL);
return $tmp1904;
block184:;
frost$core$Int64 $tmp1907 = (frost$core$Int64) {38};
frost$core$Bit $tmp1908 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1907);
bool $tmp1909 = $tmp1908.value;
if ($tmp1909) goto block185; else goto block186;
block185:;
org$frostlang$frostc$Position* $tmp1910 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1911 = *$tmp1910;
org$frostlang$frostc$ASTNode** $tmp1912 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1913 = *$tmp1912;
*(&local108) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1913));
org$frostlang$frostc$ASTNode* $tmp1914 = *(&local108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
*(&local108) = $tmp1913;
// line 555
org$frostlang$frostc$ASTNode* $tmp1915 = *(&local108);
frost$core$Bit $tmp1916 = frost$core$Bit$init$builtin_bit($tmp1915 != NULL);
bool $tmp1917 = $tmp1916.value;
if ($tmp1917) goto block187; else goto block188;
block187:;
// line 556
org$frostlang$frostc$ASTNode* $tmp1918 = *(&local108);
frost$core$String* $tmp1919 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1920, ((frost$core$Object*) $tmp1918));
frost$core$String* $tmp1921 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1919, &$s1922);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
org$frostlang$frostc$ASTNode* $tmp1923 = *(&local108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
*(&local108) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1921;
block188:;
// line 558
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1924));
org$frostlang$frostc$ASTNode* $tmp1925 = *(&local108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
*(&local108) = ((org$frostlang$frostc$ASTNode*) NULL);
return &$s1926;
block186:;
frost$core$Int64 $tmp1927 = (frost$core$Int64) {39};
frost$core$Bit $tmp1928 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1927);
bool $tmp1929 = $tmp1928.value;
if ($tmp1929) goto block189; else goto block190;
block189:;
// line 561
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1930));
return &$s1931;
block190:;
frost$core$Int64 $tmp1932 = (frost$core$Int64) {40};
frost$core$Bit $tmp1933 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1932);
bool $tmp1934 = $tmp1933.value;
if ($tmp1934) goto block191; else goto block192;
block191:;
org$frostlang$frostc$Position* $tmp1935 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1936 = *$tmp1935;
frost$core$String** $tmp1937 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1938 = *$tmp1937;
*(&local109) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
frost$core$String* $tmp1939 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
*(&local109) = $tmp1938;
// line 564
frost$core$String* $tmp1940 = *(&local109);
frost$core$String* $tmp1941 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp1940, &$s1942);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1941));
frost$core$String* $tmp1943 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
*(&local109) = ((frost$core$String*) NULL);
return $tmp1941;
block192:;
frost$core$Int64 $tmp1944 = (frost$core$Int64) {41};
frost$core$Bit $tmp1945 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1944);
bool $tmp1946 = $tmp1945.value;
if ($tmp1946) goto block193; else goto block194;
block193:;
// line 567
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1947));
return &$s1948;
block194:;
frost$core$Int64 $tmp1949 = (frost$core$Int64) {43};
frost$core$Bit $tmp1950 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1949);
bool $tmp1951 = $tmp1950.value;
if ($tmp1951) goto block195; else goto block196;
block195:;
org$frostlang$frostc$Position* $tmp1952 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1953 = *$tmp1952;
org$frostlang$frostc$FixedArray** $tmp1954 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp1955 = *$tmp1954;
*(&local110) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1955));
org$frostlang$frostc$FixedArray* $tmp1956 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
*(&local110) = $tmp1955;
// line 570
org$frostlang$frostc$FixedArray* $tmp1957 = *(&local110);
ITable* $tmp1958 = ((frost$collections$CollectionView*) $tmp1957)->$class->itable;
while ($tmp1958->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1958 = $tmp1958->next;
}
$fn1960 $tmp1959 = $tmp1958->methods[1];
frost$core$String* $tmp1961 = $tmp1959(((frost$collections$CollectionView*) $tmp1957));
frost$core$String* $tmp1962 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1963, $tmp1961);
frost$core$String* $tmp1964 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1962, &$s1965);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1964));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1964));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1961));
org$frostlang$frostc$FixedArray* $tmp1966 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
*(&local110) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1964;
block196:;
frost$core$Int64 $tmp1967 = (frost$core$Int64) {44};
frost$core$Bit $tmp1968 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1967);
bool $tmp1969 = $tmp1968.value;
if ($tmp1969) goto block197; else goto block198;
block197:;
org$frostlang$frostc$Position* $tmp1970 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1971 = *$tmp1970;
org$frostlang$frostc$FixedArray** $tmp1972 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp1973 = *$tmp1972;
*(&local111) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
org$frostlang$frostc$FixedArray* $tmp1974 = *(&local111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
*(&local111) = $tmp1973;
// line 573
org$frostlang$frostc$FixedArray* $tmp1975 = *(&local111);
ITable* $tmp1976 = ((frost$collections$CollectionView*) $tmp1975)->$class->itable;
while ($tmp1976->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1976 = $tmp1976->next;
}
$fn1978 $tmp1977 = $tmp1976->methods[1];
frost$core$String* $tmp1979 = $tmp1977(((frost$collections$CollectionView*) $tmp1975));
frost$core$String* $tmp1980 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1981, $tmp1979);
frost$core$String* $tmp1982 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1980, &$s1983);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
org$frostlang$frostc$FixedArray* $tmp1984 = *(&local111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
*(&local111) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1982;
block198:;
frost$core$Int64 $tmp1985 = (frost$core$Int64) {42};
frost$core$Bit $tmp1986 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp1985);
bool $tmp1987 = $tmp1986.value;
if ($tmp1987) goto block199; else goto block200;
block199:;
org$frostlang$frostc$Position* $tmp1988 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1989 = *$tmp1988;
org$frostlang$frostc$FixedArray** $tmp1990 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp1991 = *$tmp1990;
*(&local112) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1991));
org$frostlang$frostc$FixedArray* $tmp1992 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
*(&local112) = $tmp1991;
org$frostlang$frostc$ASTNode** $tmp1993 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1994 = *$tmp1993;
*(&local113) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
org$frostlang$frostc$ASTNode* $tmp1995 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
*(&local113) = $tmp1994;
org$frostlang$frostc$FixedArray** $tmp1996 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1997 = *$tmp1996;
*(&local114) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1997));
org$frostlang$frostc$FixedArray* $tmp1998 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
*(&local114) = $tmp1997;
// line 576
frost$core$MutableString* $tmp1999 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp1999, &$s2000);
*(&local115) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
frost$core$MutableString* $tmp2001 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
*(&local115) = $tmp1999;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
// line 577
org$frostlang$frostc$FixedArray* $tmp2002 = *(&local112);
frost$core$MutableString* $tmp2003 = *(&local115);
frost$core$MutableMethod* $tmp2005 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp2005, ((frost$core$Int8*) frost$core$MutableString$append$frost$core$Object), ((frost$core$Object*) $tmp2003));
ITable* $tmp2006 = ((frost$collections$CollectionView*) $tmp2002)->$class->itable;
while ($tmp2006->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2006 = $tmp2006->next;
}
$fn2008 $tmp2007 = $tmp2006->methods[7];
$tmp2007(((frost$collections$CollectionView*) $tmp2002), $tmp2005);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
// line 578
org$frostlang$frostc$ASTNode* $tmp2009 = *(&local113);
frost$core$Bit $tmp2010 = frost$core$Bit$init$builtin_bit($tmp2009 != NULL);
bool $tmp2011 = $tmp2010.value;
if ($tmp2011) goto block201; else goto block203;
block201:;
// line 579
frost$core$MutableString* $tmp2012 = *(&local115);
org$frostlang$frostc$ASTNode* $tmp2013 = *(&local113);
frost$core$String* $tmp2014 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2015, ((frost$core$Object*) $tmp2013));
frost$core$String* $tmp2016 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2014, &$s2017);
frost$core$MutableString$append$frost$core$String($tmp2012, $tmp2016);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2014));
goto block202;
block203:;
// line 1
// line 582
frost$core$MutableString* $tmp2018 = *(&local115);
frost$core$MutableString$append$frost$core$String($tmp2018, &$s2019);
goto block202;
block202:;
// line 584
org$frostlang$frostc$FixedArray* $tmp2020 = *(&local114);
frost$core$MutableString* $tmp2021 = *(&local115);
frost$core$MutableMethod* $tmp2023 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp2023, ((frost$core$Int8*) frost$core$MutableString$append$frost$core$Object), ((frost$core$Object*) $tmp2021));
ITable* $tmp2024 = ((frost$collections$CollectionView*) $tmp2020)->$class->itable;
while ($tmp2024->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2024 = $tmp2024->next;
}
$fn2026 $tmp2025 = $tmp2024->methods[7];
$tmp2025(((frost$collections$CollectionView*) $tmp2020), $tmp2023);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2023));
// line 585
frost$core$MutableString* $tmp2027 = *(&local115);
frost$core$MutableString$append$frost$core$String($tmp2027, &$s2028);
// line 586
frost$core$MutableString* $tmp2029 = *(&local115);
frost$core$String* $tmp2030 = frost$core$MutableString$finish$R$frost$core$String($tmp2029);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
frost$core$MutableString* $tmp2031 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
*(&local115) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2032 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
*(&local114) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2033 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2033));
*(&local113) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2034 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
*(&local112) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2030;
block200:;
frost$core$Int64 $tmp2035 = (frost$core$Int64) {45};
frost$core$Bit $tmp2036 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp2035);
bool $tmp2037 = $tmp2036.value;
if ($tmp2037) goto block204; else goto block205;
block204:;
org$frostlang$frostc$Position* $tmp2038 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2039 = *$tmp2038;
frost$core$String** $tmp2040 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2041 = *$tmp2040;
*(&local116) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2041));
frost$core$String* $tmp2042 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2042));
*(&local116) = $tmp2041;
// line 589
frost$core$String* $tmp2043 = *(&local116);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
frost$core$String* $tmp2044 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2044));
*(&local116) = ((frost$core$String*) NULL);
return $tmp2043;
block205:;
frost$core$Int64 $tmp2045 = (frost$core$Int64) {47};
frost$core$Bit $tmp2046 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp2045);
bool $tmp2047 = $tmp2046.value;
if ($tmp2047) goto block206; else goto block207;
block206:;
org$frostlang$frostc$Position* $tmp2048 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2049 = *$tmp2048;
frost$core$String** $tmp2050 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2051 = *$tmp2050;
*(&local117) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2051));
frost$core$String* $tmp2052 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2052));
*(&local117) = $tmp2051;
org$frostlang$frostc$ASTNode** $tmp2053 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2054 = *$tmp2053;
*(&local118) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2054));
org$frostlang$frostc$ASTNode* $tmp2055 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
*(&local118) = $tmp2054;
// line 592
org$frostlang$frostc$ASTNode* $tmp2056 = *(&local118);
frost$core$Bit $tmp2057 = frost$core$Bit$init$builtin_bit($tmp2056 != NULL);
bool $tmp2058 = $tmp2057.value;
if ($tmp2058) goto block208; else goto block209;
block208:;
// line 593
frost$core$String* $tmp2059 = *(&local117);
frost$core$String* $tmp2060 = frost$core$String$get_asString$R$frost$core$String($tmp2059);
frost$core$String* $tmp2061 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2060, &$s2062);
org$frostlang$frostc$ASTNode* $tmp2063 = *(&local118);
frost$core$String* $tmp2064 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2061, ((frost$core$Object*) $tmp2063));
frost$core$String* $tmp2065 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2064, &$s2066);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
org$frostlang$frostc$ASTNode* $tmp2067 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
*(&local118) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2068 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2068));
*(&local117) = ((frost$core$String*) NULL);
return $tmp2065;
block209:;
// line 595
frost$core$String* $tmp2069 = *(&local117);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
org$frostlang$frostc$ASTNode* $tmp2070 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2070));
*(&local118) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2071 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2071));
*(&local117) = ((frost$core$String*) NULL);
return $tmp2069;
block207:;
frost$core$Int64 $tmp2072 = (frost$core$Int64) {46};
frost$core$Bit $tmp2073 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp2072);
bool $tmp2074 = $tmp2073.value;
if ($tmp2074) goto block210; else goto block211;
block210:;
org$frostlang$frostc$Position* $tmp2075 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2076 = *$tmp2075;
org$frostlang$frostc$FixedArray** $tmp2077 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2078 = *$tmp2077;
*(&local119) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
org$frostlang$frostc$FixedArray* $tmp2079 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
*(&local119) = $tmp2078;
org$frostlang$frostc$ASTNode** $tmp2080 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2081 = *$tmp2080;
*(&local120) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
org$frostlang$frostc$ASTNode* $tmp2082 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2082));
*(&local120) = $tmp2081;
// line 598
org$frostlang$frostc$FixedArray* $tmp2083 = *(&local119);
ITable* $tmp2084 = ((frost$collections$CollectionView*) $tmp2083)->$class->itable;
while ($tmp2084->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2084 = $tmp2084->next;
}
$fn2086 $tmp2085 = $tmp2084->methods[1];
frost$core$String* $tmp2087 = $tmp2085(((frost$collections$CollectionView*) $tmp2083));
frost$core$String* $tmp2088 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2089, $tmp2087);
frost$core$String* $tmp2090 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2088, &$s2091);
org$frostlang$frostc$ASTNode* $tmp2092 = *(&local120);
frost$core$String* $tmp2093 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2090, ((frost$core$Object*) $tmp2092));
frost$core$String* $tmp2094 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2093, &$s2095);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2087));
org$frostlang$frostc$ASTNode* $tmp2096 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
*(&local120) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2097 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
*(&local119) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2094;
block211:;
frost$core$Int64 $tmp2098 = (frost$core$Int64) {48};
frost$core$Bit $tmp2099 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp2098);
bool $tmp2100 = $tmp2099.value;
if ($tmp2100) goto block212; else goto block213;
block212:;
org$frostlang$frostc$Position* $tmp2101 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2102 = *$tmp2101;
org$frostlang$frostc$expression$Unary$Operator* $tmp2103 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 16);
org$frostlang$frostc$expression$Unary$Operator $tmp2104 = *$tmp2103;
*(&local121) = $tmp2104;
org$frostlang$frostc$ASTNode** $tmp2105 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2106 = *$tmp2105;
*(&local122) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
org$frostlang$frostc$ASTNode* $tmp2107 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2107));
*(&local122) = $tmp2106;
// line 601
org$frostlang$frostc$expression$Unary$Operator $tmp2108 = *(&local121);
frost$core$String* $tmp2109 = org$frostlang$frostc$expression$Unary$Operator$get_asString$R$frost$core$String($tmp2108);
frost$core$String* $tmp2110 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2109, &$s2111);
org$frostlang$frostc$ASTNode* $tmp2112 = *(&local122);
frost$core$String* $tmp2113 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2110, ((frost$core$Object*) $tmp2112));
frost$core$String* $tmp2114 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2113, &$s2115);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
org$frostlang$frostc$ASTNode* $tmp2116 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2116));
*(&local122) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2114;
block213:;
frost$core$Int64 $tmp2117 = (frost$core$Int64) {49};
frost$core$Bit $tmp2118 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp2117);
bool $tmp2119 = $tmp2118.value;
if ($tmp2119) goto block214; else goto block215;
block214:;
org$frostlang$frostc$Position* $tmp2120 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2121 = *$tmp2120;
org$frostlang$frostc$ASTNode** $tmp2122 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2123 = *$tmp2122;
*(&local123) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
org$frostlang$frostc$ASTNode* $tmp2124 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
*(&local123) = $tmp2123;
// line 604
org$frostlang$frostc$ASTNode* $tmp2125 = *(&local123);
frost$core$Bit $tmp2126 = frost$core$Bit$init$builtin_bit($tmp2125 != NULL);
bool $tmp2127 = $tmp2126.value;
if ($tmp2127) goto block216; else goto block217;
block216:;
// line 605
org$frostlang$frostc$ASTNode* $tmp2128 = *(&local123);
frost$core$String* $tmp2129 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2130, ((frost$core$Object*) $tmp2128));
frost$core$String* $tmp2131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2129, &$s2132);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
org$frostlang$frostc$ASTNode* $tmp2133 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
*(&local123) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2131;
block217:;
// line 607
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2134));
org$frostlang$frostc$ASTNode* $tmp2135 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2135));
*(&local123) = ((org$frostlang$frostc$ASTNode*) NULL);
return &$s2136;
block215:;
frost$core$Int64 $tmp2137 = (frost$core$Int64) {50};
frost$core$Bit $tmp2138 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp2137);
bool $tmp2139 = $tmp2138.value;
if ($tmp2139) goto block218; else goto block219;
block218:;
org$frostlang$frostc$Position* $tmp2140 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2141 = *$tmp2140;
org$frostlang$frostc$FixedArray** $tmp2142 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2143 = *$tmp2142;
*(&local124) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2143));
org$frostlang$frostc$FixedArray* $tmp2144 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2144));
*(&local124) = $tmp2143;
org$frostlang$frostc$ASTNode** $tmp2145 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2146 = *$tmp2145;
*(&local125) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2146));
org$frostlang$frostc$ASTNode* $tmp2147 = *(&local125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
*(&local125) = $tmp2146;
// line 610
org$frostlang$frostc$FixedArray* $tmp2148 = *(&local124);
ITable* $tmp2149 = ((frost$collections$CollectionView*) $tmp2148)->$class->itable;
while ($tmp2149->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2149 = $tmp2149->next;
}
$fn2151 $tmp2150 = $tmp2149->methods[1];
frost$core$String* $tmp2152 = $tmp2150(((frost$collections$CollectionView*) $tmp2148));
frost$core$String* $tmp2153 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2154, $tmp2152);
frost$core$String* $tmp2155 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2153, &$s2156);
org$frostlang$frostc$ASTNode* $tmp2157 = *(&local125);
frost$core$String* $tmp2158 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2155, ((frost$core$Object*) $tmp2157));
frost$core$String* $tmp2159 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2158, &$s2160);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
org$frostlang$frostc$ASTNode* $tmp2161 = *(&local125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2161));
*(&local125) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2162 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2162));
*(&local124) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2159;
block219:;
frost$core$Int64 $tmp2163 = (frost$core$Int64) {51};
frost$core$Bit $tmp2164 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp2163);
bool $tmp2165 = $tmp2164.value;
if ($tmp2165) goto block220; else goto block221;
block220:;
org$frostlang$frostc$Position* $tmp2166 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2167 = *$tmp2166;
frost$core$String** $tmp2168 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2169 = *$tmp2168;
*(&local126) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
frost$core$String* $tmp2170 = *(&local126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
*(&local126) = $tmp2169;
// line 613
frost$core$String* $tmp2171 = *(&local126);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2171));
frost$core$String* $tmp2172 = *(&local126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
*(&local126) = ((frost$core$String*) NULL);
return $tmp2171;
block221:;
frost$core$Int64 $tmp2173 = (frost$core$Int64) {52};
frost$core$Bit $tmp2174 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp2173);
bool $tmp2175 = $tmp2174.value;
if ($tmp2175) goto block222; else goto block223;
block222:;
org$frostlang$frostc$Position* $tmp2176 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2177 = *$tmp2176;
org$frostlang$frostc$Variable$Kind* $tmp2178 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp2179 = *$tmp2178;
*(&local127) = $tmp2179;
org$frostlang$frostc$FixedArray** $tmp2180 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2181 = *$tmp2180;
*(&local128) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
org$frostlang$frostc$FixedArray* $tmp2182 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
*(&local128) = $tmp2181;
// line 616
frost$core$MutableString* $tmp2183 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2183);
*(&local129) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2183));
frost$core$MutableString* $tmp2184 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
*(&local129) = $tmp2183;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2183));
// line 617
org$frostlang$frostc$Variable$Kind $tmp2185 = *(&local127);
frost$core$Int64 $tmp2186 = $tmp2185.$rawValue;
frost$core$Int64 $tmp2187 = (frost$core$Int64) {0};
frost$core$Bit $tmp2188 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2186, $tmp2187);
bool $tmp2189 = $tmp2188.value;
if ($tmp2189) goto block225; else goto block226;
block225:;
// line 618
frost$core$MutableString* $tmp2190 = *(&local129);
frost$core$MutableString$append$frost$core$String($tmp2190, &$s2191);
goto block224;
block226:;
frost$core$Int64 $tmp2192 = (frost$core$Int64) {1};
frost$core$Bit $tmp2193 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2186, $tmp2192);
bool $tmp2194 = $tmp2193.value;
if ($tmp2194) goto block227; else goto block228;
block227:;
// line 619
frost$core$MutableString* $tmp2195 = *(&local129);
frost$core$MutableString$append$frost$core$String($tmp2195, &$s2196);
goto block224;
block228:;
frost$core$Int64 $tmp2197 = (frost$core$Int64) {2};
frost$core$Bit $tmp2198 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2186, $tmp2197);
bool $tmp2199 = $tmp2198.value;
if ($tmp2199) goto block229; else goto block230;
block229:;
// line 620
frost$core$MutableString* $tmp2200 = *(&local129);
frost$core$MutableString$append$frost$core$String($tmp2200, &$s2201);
goto block224;
block230:;
frost$core$Int64 $tmp2202 = (frost$core$Int64) {3};
frost$core$Bit $tmp2203 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2186, $tmp2202);
bool $tmp2204 = $tmp2203.value;
if ($tmp2204) goto block231; else goto block224;
block231:;
// line 621
frost$core$MutableString* $tmp2205 = *(&local129);
frost$core$MutableString$append$frost$core$String($tmp2205, &$s2206);
goto block224;
block224:;
// line 623
frost$core$MutableString* $tmp2207 = *(&local129);
org$frostlang$frostc$FixedArray* $tmp2208 = *(&local128);
ITable* $tmp2209 = ((frost$collections$CollectionView*) $tmp2208)->$class->itable;
while ($tmp2209->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2209 = $tmp2209->next;
}
$fn2211 $tmp2210 = $tmp2209->methods[1];
frost$core$String* $tmp2212 = $tmp2210(((frost$collections$CollectionView*) $tmp2208));
frost$core$MutableString$append$frost$core$String($tmp2207, $tmp2212);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2212));
// line 624
frost$core$MutableString* $tmp2213 = *(&local129);
frost$core$String* $tmp2214 = frost$core$MutableString$finish$R$frost$core$String($tmp2213);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2214));
frost$core$MutableString* $tmp2215 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2215));
*(&local129) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2216 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
*(&local128) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2214;
block223:;
frost$core$Int64 $tmp2217 = (frost$core$Int64) {53};
frost$core$Bit $tmp2218 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp2217);
bool $tmp2219 = $tmp2218.value;
if ($tmp2219) goto block232; else goto block233;
block232:;
org$frostlang$frostc$Position* $tmp2220 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2221 = *$tmp2220;
org$frostlang$frostc$FixedArray** $tmp2222 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2223 = *$tmp2222;
*(&local130) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2223));
org$frostlang$frostc$FixedArray* $tmp2224 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
*(&local130) = $tmp2223;
org$frostlang$frostc$FixedArray** $tmp2225 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2226 = *$tmp2225;
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
org$frostlang$frostc$FixedArray* $tmp2227 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2227));
*(&local131) = $tmp2226;
// line 627
frost$core$MutableString* $tmp2228 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2228, &$s2229);
*(&local132) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
frost$core$MutableString* $tmp2230 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
*(&local132) = $tmp2228;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
// line 628
*(&local133) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2231));
frost$core$String* $tmp2232 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
*(&local133) = &$s2233;
// line 629
org$frostlang$frostc$FixedArray* $tmp2234 = *(&local130);
ITable* $tmp2235 = ((frost$collections$Iterable*) $tmp2234)->$class->itable;
while ($tmp2235->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2235 = $tmp2235->next;
}
$fn2237 $tmp2236 = $tmp2235->methods[0];
frost$collections$Iterator* $tmp2238 = $tmp2236(((frost$collections$Iterable*) $tmp2234));
goto block234;
block234:;
ITable* $tmp2239 = $tmp2238->$class->itable;
while ($tmp2239->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2239 = $tmp2239->next;
}
$fn2241 $tmp2240 = $tmp2239->methods[0];
frost$core$Bit $tmp2242 = $tmp2240($tmp2238);
bool $tmp2243 = $tmp2242.value;
if ($tmp2243) goto block236; else goto block235;
block235:;
*(&local134) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2244 = $tmp2238->$class->itable;
while ($tmp2244->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2244 = $tmp2244->next;
}
$fn2246 $tmp2245 = $tmp2244->methods[1];
frost$core$Object* $tmp2247 = $tmp2245($tmp2238);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2247)));
org$frostlang$frostc$ASTNode* $tmp2248 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
*(&local134) = ((org$frostlang$frostc$ASTNode*) $tmp2247);
// line 630
frost$core$MutableString* $tmp2249 = *(&local132);
frost$core$String* $tmp2250 = *(&local133);
frost$core$String* $tmp2251 = frost$core$String$get_asString$R$frost$core$String($tmp2250);
frost$core$String* $tmp2252 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2251, &$s2253);
org$frostlang$frostc$ASTNode* $tmp2254 = *(&local134);
frost$core$String* $tmp2255 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2252, ((frost$core$Object*) $tmp2254));
frost$core$String* $tmp2256 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2255, &$s2257);
frost$core$MutableString$append$frost$core$String($tmp2249, $tmp2256);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2251));
frost$core$Frost$unref$frost$core$Object$Q($tmp2247);
org$frostlang$frostc$ASTNode* $tmp2258 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2258));
*(&local134) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block234;
block236:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2238));
// line 632
frost$core$MutableString* $tmp2259 = *(&local132);
frost$core$MutableString$append$frost$core$String($tmp2259, &$s2260);
// line 633
org$frostlang$frostc$FixedArray* $tmp2261 = *(&local131);
ITable* $tmp2262 = ((frost$collections$Iterable*) $tmp2261)->$class->itable;
while ($tmp2262->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2262 = $tmp2262->next;
}
$fn2264 $tmp2263 = $tmp2262->methods[0];
frost$collections$Iterator* $tmp2265 = $tmp2263(((frost$collections$Iterable*) $tmp2261));
goto block237;
block237:;
ITable* $tmp2266 = $tmp2265->$class->itable;
while ($tmp2266->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2266 = $tmp2266->next;
}
$fn2268 $tmp2267 = $tmp2266->methods[0];
frost$core$Bit $tmp2269 = $tmp2267($tmp2265);
bool $tmp2270 = $tmp2269.value;
if ($tmp2270) goto block239; else goto block238;
block238:;
*(&local135) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2271 = $tmp2265->$class->itable;
while ($tmp2271->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2271 = $tmp2271->next;
}
$fn2273 $tmp2272 = $tmp2271->methods[1];
frost$core$Object* $tmp2274 = $tmp2272($tmp2265);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2274)));
org$frostlang$frostc$ASTNode* $tmp2275 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
*(&local135) = ((org$frostlang$frostc$ASTNode*) $tmp2274);
// line 634
frost$core$MutableString* $tmp2276 = *(&local132);
org$frostlang$frostc$ASTNode* $tmp2277 = *(&local135);
frost$core$String* $tmp2278 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2279, ((frost$core$Object*) $tmp2277));
frost$core$MutableString$append$frost$core$String($tmp2276, $tmp2278);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2278));
frost$core$Frost$unref$frost$core$Object$Q($tmp2274);
org$frostlang$frostc$ASTNode* $tmp2280 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2280));
*(&local135) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block237;
block239:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
// line 636
frost$core$MutableString* $tmp2281 = *(&local132);
frost$core$String* $tmp2282 = frost$core$MutableString$finish$R$frost$core$String($tmp2281);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2282));
frost$core$String* $tmp2283 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2283));
*(&local133) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2284 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2284));
*(&local132) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2285 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2285));
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2286 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2286));
*(&local130) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2282;
block233:;
frost$core$Int64 $tmp2287 = (frost$core$Int64) {54};
frost$core$Bit $tmp2288 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp553, $tmp2287);
bool $tmp2289 = $tmp2288.value;
if ($tmp2289) goto block240; else goto block241;
block240:;
org$frostlang$frostc$Position* $tmp2290 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2291 = *$tmp2290;
frost$core$String** $tmp2292 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2293 = *$tmp2292;
*(&local136) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
frost$core$String* $tmp2294 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2294));
*(&local136) = $tmp2293;
org$frostlang$frostc$ASTNode** $tmp2295 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2296 = *$tmp2295;
*(&local137) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2296));
org$frostlang$frostc$ASTNode* $tmp2297 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2297));
*(&local137) = $tmp2296;
org$frostlang$frostc$FixedArray** $tmp2298 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2299 = *$tmp2298;
*(&local138) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
org$frostlang$frostc$FixedArray* $tmp2300 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
*(&local138) = $tmp2299;
// line 639
frost$core$MutableString* $tmp2301 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2301);
*(&local139) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2301));
frost$core$MutableString* $tmp2302 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
*(&local139) = $tmp2301;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2301));
// line 640
frost$core$String* $tmp2303 = *(&local136);
frost$core$Bit $tmp2304 = frost$core$Bit$init$builtin_bit($tmp2303 != NULL);
bool $tmp2305 = $tmp2304.value;
if ($tmp2305) goto block242; else goto block243;
block242:;
// line 641
frost$core$MutableString* $tmp2306 = *(&local139);
frost$core$String* $tmp2307 = *(&local136);
frost$core$String* $tmp2308 = frost$core$String$get_asString$R$frost$core$String($tmp2307);
frost$core$String* $tmp2309 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2308, &$s2310);
frost$core$MutableString$append$frost$core$String($tmp2306, $tmp2309);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2308));
goto block243;
block243:;
// line 643
frost$core$MutableString* $tmp2311 = *(&local139);
org$frostlang$frostc$ASTNode* $tmp2312 = *(&local137);
frost$core$String* $tmp2313 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2314, ((frost$core$Object*) $tmp2312));
frost$core$String* $tmp2315 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2313, &$s2316);
frost$core$MutableString$append$frost$core$String($tmp2311, $tmp2315);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
// line 644
org$frostlang$frostc$FixedArray* $tmp2317 = *(&local138);
ITable* $tmp2318 = ((frost$collections$Iterable*) $tmp2317)->$class->itable;
while ($tmp2318->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2318 = $tmp2318->next;
}
$fn2320 $tmp2319 = $tmp2318->methods[0];
frost$collections$Iterator* $tmp2321 = $tmp2319(((frost$collections$Iterable*) $tmp2317));
goto block244;
block244:;
ITable* $tmp2322 = $tmp2321->$class->itable;
while ($tmp2322->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2322 = $tmp2322->next;
}
$fn2324 $tmp2323 = $tmp2322->methods[0];
frost$core$Bit $tmp2325 = $tmp2323($tmp2321);
bool $tmp2326 = $tmp2325.value;
if ($tmp2326) goto block246; else goto block245;
block245:;
*(&local140) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2327 = $tmp2321->$class->itable;
while ($tmp2327->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2327 = $tmp2327->next;
}
$fn2329 $tmp2328 = $tmp2327->methods[1];
frost$core$Object* $tmp2330 = $tmp2328($tmp2321);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2330)));
org$frostlang$frostc$ASTNode* $tmp2331 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2331));
*(&local140) = ((org$frostlang$frostc$ASTNode*) $tmp2330);
// line 645
frost$core$MutableString* $tmp2332 = *(&local139);
org$frostlang$frostc$ASTNode* $tmp2333 = *(&local140);
frost$core$String* $tmp2334 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp2333), &$s2335);
frost$core$MutableString$append$frost$core$String($tmp2332, $tmp2334);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2334));
frost$core$Frost$unref$frost$core$Object$Q($tmp2330);
org$frostlang$frostc$ASTNode* $tmp2336 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2336));
*(&local140) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block244;
block246:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
// line 647
frost$core$MutableString* $tmp2337 = *(&local139);
frost$core$MutableString$append$frost$core$String($tmp2337, &$s2338);
// line 648
frost$core$MutableString* $tmp2339 = *(&local139);
frost$core$String* $tmp2340 = frost$core$MutableString$finish$R$frost$core$String($tmp2339);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
frost$core$MutableString* $tmp2341 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
*(&local139) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2342 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
*(&local138) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2343 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2343));
*(&local137) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2344 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2344));
*(&local136) = ((frost$core$String*) NULL);
return $tmp2340;
block241:;
// line 651
frost$core$Bit $tmp2345 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2346 = $tmp2345.value;
if ($tmp2346) goto block247; else goto block248;
block248:;
frost$core$Int64 $tmp2347 = (frost$core$Int64) {651};
frost$core$Int64* $tmp2348 = &param0->$rawValue;
frost$core$Int64 $tmp2349 = *$tmp2348;
frost$core$Int64$wrapper* $tmp2350;
$tmp2350 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2350->value = $tmp2349;
frost$core$String* $tmp2351 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2352, ((frost$core$Object*) $tmp2350));
frost$core$String* $tmp2353 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2351, &$s2354);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2355, $tmp2347, $tmp2353);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2350));
abort(); // unreachable
block247:;
// line 652
goto block249;
block249:;
goto block249;
block250:;
goto block1;
block1:;
goto block251;
block251:;

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
frost$core$Int64* $tmp2356 = &param0->$rawValue;
frost$core$Int64 $tmp2357 = *$tmp2356;
frost$core$Int64 $tmp2358 = (frost$core$Int64) {0};
frost$core$Bit $tmp2359 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2358);
bool $tmp2360 = $tmp2359.value;
if ($tmp2360) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp2361 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2362 = *$tmp2361;
*(&local0) = $tmp2362;
frost$core$String** $tmp2363 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2364 = *$tmp2363;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
frost$core$String* $tmp2365 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2365));
*(&local1) = $tmp2364;
frost$core$String** $tmp2366 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2367 = *$tmp2366;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2367));
frost$core$String* $tmp2368 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2368));
*(&local2) = $tmp2367;
org$frostlang$frostc$ASTNode** $tmp2369 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2370 = *$tmp2369;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2370));
org$frostlang$frostc$ASTNode* $tmp2371 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2371));
*(&local3) = $tmp2370;
// line 1
frost$core$String* $tmp2372 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
// line 1
frost$core$String* $tmp2373 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2373));
// line 1
org$frostlang$frostc$ASTNode* $tmp2374 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2374));
org$frostlang$frostc$ASTNode* $tmp2375 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2375));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2376 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2377 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2377));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp2378 = (frost$core$Int64) {1};
frost$core$Bit $tmp2379 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2378);
bool $tmp2380 = $tmp2379.value;
if ($tmp2380) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp2381 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2382 = *$tmp2381;
*(&local4) = $tmp2382;
org$frostlang$frostc$FixedArray** $tmp2383 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2384 = *$tmp2383;
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
org$frostlang$frostc$FixedArray* $tmp2385 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2385));
*(&local5) = $tmp2384;
// line 1
org$frostlang$frostc$FixedArray* $tmp2386 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
org$frostlang$frostc$FixedArray* $tmp2387 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2387));
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp2388 = (frost$core$Int64) {2};
frost$core$Bit $tmp2389 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2388);
bool $tmp2390 = $tmp2389.value;
if ($tmp2390) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp2391 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2392 = *$tmp2391;
*(&local6) = $tmp2392;
org$frostlang$frostc$ASTNode** $tmp2393 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2394 = *$tmp2393;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
org$frostlang$frostc$ASTNode* $tmp2395 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2395));
*(&local7) = $tmp2394;
org$frostlang$frostc$ASTNode** $tmp2396 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2397 = *$tmp2396;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
org$frostlang$frostc$ASTNode* $tmp2398 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
*(&local8) = $tmp2397;
// line 1
org$frostlang$frostc$ASTNode* $tmp2399 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2399));
// line 1
org$frostlang$frostc$ASTNode* $tmp2400 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2400));
org$frostlang$frostc$ASTNode* $tmp2401 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2401));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2402 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp2403 = (frost$core$Int64) {3};
frost$core$Bit $tmp2404 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2403);
bool $tmp2405 = $tmp2404.value;
if ($tmp2405) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp2406 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2407 = *$tmp2406;
*(&local9) = $tmp2407;
org$frostlang$frostc$ASTNode** $tmp2408 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2409 = *$tmp2408;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
org$frostlang$frostc$ASTNode* $tmp2410 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
*(&local10) = $tmp2409;
// line 1
org$frostlang$frostc$ASTNode* $tmp2411 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
org$frostlang$frostc$ASTNode* $tmp2412 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2412));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp2413 = (frost$core$Int64) {4};
frost$core$Bit $tmp2414 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2413);
bool $tmp2415 = $tmp2414.value;
if ($tmp2415) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp2416 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2417 = *$tmp2416;
*(&local11) = $tmp2417;
goto block1;
block11:;
frost$core$Int64 $tmp2418 = (frost$core$Int64) {5};
frost$core$Bit $tmp2419 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2418);
bool $tmp2420 = $tmp2419.value;
if ($tmp2420) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp2421 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2422 = *$tmp2421;
*(&local12) = $tmp2422;
org$frostlang$frostc$ASTNode** $tmp2423 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2424 = *$tmp2423;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
org$frostlang$frostc$ASTNode* $tmp2425 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
*(&local13) = $tmp2424;
org$frostlang$frostc$expression$Binary$Operator* $tmp2426 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp2427 = *$tmp2426;
*(&local14) = $tmp2427;
org$frostlang$frostc$ASTNode** $tmp2428 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2429 = *$tmp2428;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2429));
org$frostlang$frostc$ASTNode* $tmp2430 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2430));
*(&local15) = $tmp2429;
// line 1
org$frostlang$frostc$ASTNode* $tmp2431 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2431));
// line 1
org$frostlang$frostc$ASTNode* $tmp2432 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
org$frostlang$frostc$ASTNode* $tmp2433 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2434 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2434));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp2435 = (frost$core$Int64) {6};
frost$core$Bit $tmp2436 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2435);
bool $tmp2437 = $tmp2436.value;
if ($tmp2437) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp2438 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2439 = *$tmp2438;
*(&local16) = $tmp2439;
frost$core$Bit* $tmp2440 = (frost$core$Bit*) (param0->$data + 16);
frost$core$Bit $tmp2441 = *$tmp2440;
*(&local17) = $tmp2441;
goto block1;
block15:;
frost$core$Int64 $tmp2442 = (frost$core$Int64) {7};
frost$core$Bit $tmp2443 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2442);
bool $tmp2444 = $tmp2443.value;
if ($tmp2444) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp2445 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2446 = *$tmp2445;
*(&local18) = $tmp2446;
org$frostlang$frostc$FixedArray** $tmp2447 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2448 = *$tmp2447;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
org$frostlang$frostc$FixedArray* $tmp2449 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2449));
*(&local19) = $tmp2448;
// line 1
org$frostlang$frostc$FixedArray* $tmp2450 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2450));
org$frostlang$frostc$FixedArray* $tmp2451 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2451));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block17:;
frost$core$Int64 $tmp2452 = (frost$core$Int64) {8};
frost$core$Bit $tmp2453 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2452);
bool $tmp2454 = $tmp2453.value;
if ($tmp2454) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp2455 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2456 = *$tmp2455;
*(&local20) = $tmp2456;
frost$core$String** $tmp2457 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2458 = *$tmp2457;
*(&local21) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2458));
frost$core$String* $tmp2459 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2459));
*(&local21) = $tmp2458;
// line 1
frost$core$String* $tmp2460 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2460));
frost$core$String* $tmp2461 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
*(&local21) = ((frost$core$String*) NULL);
goto block1;
block19:;
frost$core$Int64 $tmp2462 = (frost$core$Int64) {9};
frost$core$Bit $tmp2463 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2462);
bool $tmp2464 = $tmp2463.value;
if ($tmp2464) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp2465 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2466 = *$tmp2465;
*(&local22) = $tmp2466;
org$frostlang$frostc$ASTNode** $tmp2467 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2468 = *$tmp2467;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2468));
org$frostlang$frostc$ASTNode* $tmp2469 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2469));
*(&local23) = $tmp2468;
org$frostlang$frostc$FixedArray** $tmp2470 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2471 = *$tmp2470;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2471));
org$frostlang$frostc$FixedArray* $tmp2472 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2472));
*(&local24) = $tmp2471;
// line 1
org$frostlang$frostc$ASTNode* $tmp2473 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
// line 1
org$frostlang$frostc$FixedArray* $tmp2474 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2474));
org$frostlang$frostc$FixedArray* $tmp2475 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2475));
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2476 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2476));
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block21:;
frost$core$Int64 $tmp2477 = (frost$core$Int64) {10};
frost$core$Bit $tmp2478 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2477);
bool $tmp2479 = $tmp2478.value;
if ($tmp2479) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp2480 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2481 = *$tmp2480;
*(&local25) = $tmp2481;
org$frostlang$frostc$ASTNode** $tmp2482 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2483 = *$tmp2482;
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
org$frostlang$frostc$ASTNode* $tmp2484 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
*(&local26) = $tmp2483;
frost$core$String** $tmp2485 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2486 = *$tmp2485;
*(&local27) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2486));
frost$core$String* $tmp2487 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2487));
*(&local27) = $tmp2486;
org$frostlang$frostc$FixedArray** $tmp2488 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2489 = *$tmp2488;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2489));
org$frostlang$frostc$FixedArray* $tmp2490 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2490));
*(&local28) = $tmp2489;
// line 1
org$frostlang$frostc$ASTNode* $tmp2491 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2491));
// line 1
frost$core$String* $tmp2492 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2492));
// line 1
org$frostlang$frostc$FixedArray* $tmp2493 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
org$frostlang$frostc$FixedArray* $tmp2494 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2494));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2495 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2496 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block23:;
frost$core$Int64 $tmp2497 = (frost$core$Int64) {11};
frost$core$Bit $tmp2498 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2497);
bool $tmp2499 = $tmp2498.value;
if ($tmp2499) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp2500 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2501 = *$tmp2500;
*(&local29) = $tmp2501;
org$frostlang$frostc$ASTNode** $tmp2502 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2503 = *$tmp2502;
*(&local30) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2503));
org$frostlang$frostc$ASTNode* $tmp2504 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2504));
*(&local30) = $tmp2503;
org$frostlang$frostc$ChoiceCase** $tmp2505 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp2506 = *$tmp2505;
*(&local31) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2506));
org$frostlang$frostc$ChoiceCase* $tmp2507 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2507));
*(&local31) = $tmp2506;
frost$core$Int64* $tmp2508 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp2509 = *$tmp2508;
*(&local32) = $tmp2509;
// line 1
org$frostlang$frostc$ASTNode* $tmp2510 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2510));
// line 1
org$frostlang$frostc$ChoiceCase* $tmp2511 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2511));
org$frostlang$frostc$ChoiceCase* $tmp2512 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
*(&local31) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp2513 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2513));
*(&local30) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block25:;
frost$core$Int64 $tmp2514 = (frost$core$Int64) {12};
frost$core$Bit $tmp2515 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2514);
bool $tmp2516 = $tmp2515.value;
if ($tmp2516) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp2517 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2518 = *$tmp2517;
*(&local33) = $tmp2518;
org$frostlang$frostc$ASTNode** $tmp2519 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2520 = *$tmp2519;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2520));
org$frostlang$frostc$ASTNode* $tmp2521 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2521));
*(&local34) = $tmp2520;
org$frostlang$frostc$FixedArray** $tmp2522 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2523 = *$tmp2522;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
org$frostlang$frostc$FixedArray* $tmp2524 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
*(&local35) = $tmp2523;
org$frostlang$frostc$ClassDecl$Kind* $tmp2525 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp2526 = *$tmp2525;
*(&local36) = $tmp2526;
frost$core$String** $tmp2527 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp2528 = *$tmp2527;
*(&local37) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
frost$core$String* $tmp2529 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2529));
*(&local37) = $tmp2528;
org$frostlang$frostc$FixedArray** $tmp2530 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2531 = *$tmp2530;
*(&local38) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
org$frostlang$frostc$FixedArray* $tmp2532 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2532));
*(&local38) = $tmp2531;
org$frostlang$frostc$FixedArray** $tmp2533 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2534 = *$tmp2533;
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
org$frostlang$frostc$FixedArray* $tmp2535 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
*(&local39) = $tmp2534;
org$frostlang$frostc$FixedArray** $tmp2536 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2537 = *$tmp2536;
*(&local40) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2537));
org$frostlang$frostc$FixedArray* $tmp2538 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2538));
*(&local40) = $tmp2537;
// line 1
org$frostlang$frostc$ASTNode* $tmp2539 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2539));
// line 1
org$frostlang$frostc$FixedArray* $tmp2540 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2540));
// line 1
frost$core$String* $tmp2541 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2541));
// line 1
org$frostlang$frostc$FixedArray* $tmp2542 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2542));
// line 1
org$frostlang$frostc$FixedArray* $tmp2543 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2543));
// line 1
org$frostlang$frostc$FixedArray* $tmp2544 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2544));
org$frostlang$frostc$FixedArray* $tmp2545 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2545));
*(&local40) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2546 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2546));
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2547 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2547));
*(&local38) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2548 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2548));
*(&local37) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2549 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2549));
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2550 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2550));
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block27:;
frost$core$Int64 $tmp2551 = (frost$core$Int64) {13};
frost$core$Bit $tmp2552 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2551);
bool $tmp2553 = $tmp2552.value;
if ($tmp2553) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp2554 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2555 = *$tmp2554;
*(&local41) = $tmp2555;
frost$core$String** $tmp2556 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2557 = *$tmp2556;
*(&local42) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2557));
frost$core$String* $tmp2558 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2558));
*(&local42) = $tmp2557;
// line 1
frost$core$String* $tmp2559 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2559));
frost$core$String* $tmp2560 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2560));
*(&local42) = ((frost$core$String*) NULL);
goto block1;
block29:;
frost$core$Int64 $tmp2561 = (frost$core$Int64) {14};
frost$core$Bit $tmp2562 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2561);
bool $tmp2563 = $tmp2562.value;
if ($tmp2563) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp2564 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2565 = *$tmp2564;
*(&local43) = $tmp2565;
org$frostlang$frostc$ASTNode** $tmp2566 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2567 = *$tmp2566;
*(&local44) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
org$frostlang$frostc$ASTNode* $tmp2568 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
*(&local44) = $tmp2567;
org$frostlang$frostc$ASTNode** $tmp2569 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2570 = *$tmp2569;
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2570));
org$frostlang$frostc$ASTNode* $tmp2571 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2571));
*(&local45) = $tmp2570;
// line 1
org$frostlang$frostc$ASTNode* $tmp2572 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2572));
// line 1
org$frostlang$frostc$ASTNode* $tmp2573 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2573));
org$frostlang$frostc$ASTNode* $tmp2574 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2574));
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2575 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2575));
*(&local44) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block31:;
frost$core$Int64 $tmp2576 = (frost$core$Int64) {15};
frost$core$Bit $tmp2577 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2576);
bool $tmp2578 = $tmp2577.value;
if ($tmp2578) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp2579 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2580 = *$tmp2579;
*(&local46) = $tmp2580;
frost$core$String** $tmp2581 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2582 = *$tmp2581;
*(&local47) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2582));
frost$core$String* $tmp2583 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2583));
*(&local47) = $tmp2582;
org$frostlang$frostc$FixedArray** $tmp2584 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2585 = *$tmp2584;
*(&local48) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2585));
org$frostlang$frostc$FixedArray* $tmp2586 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2586));
*(&local48) = $tmp2585;
org$frostlang$frostc$ASTNode** $tmp2587 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2588 = *$tmp2587;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2588));
org$frostlang$frostc$ASTNode* $tmp2589 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2589));
*(&local49) = $tmp2588;
// line 1
frost$core$String* $tmp2590 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
// line 1
org$frostlang$frostc$FixedArray* $tmp2591 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2591));
// line 1
org$frostlang$frostc$ASTNode* $tmp2592 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
org$frostlang$frostc$ASTNode* $tmp2593 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2593));
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2594 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2594));
*(&local48) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2595 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
*(&local47) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Int64 $tmp2596 = (frost$core$Int64) {16};
frost$core$Bit $tmp2597 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2596);
bool $tmp2598 = $tmp2597.value;
if ($tmp2598) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp2599 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2600 = *$tmp2599;
*(&local50) = $tmp2600;
org$frostlang$frostc$ASTNode** $tmp2601 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2602 = *$tmp2601;
*(&local51) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
org$frostlang$frostc$ASTNode* $tmp2603 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2603));
*(&local51) = $tmp2602;
frost$core$String** $tmp2604 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2605 = *$tmp2604;
*(&local52) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2605));
frost$core$String* $tmp2606 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2606));
*(&local52) = $tmp2605;
// line 1
org$frostlang$frostc$ASTNode* $tmp2607 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2607));
// line 1
frost$core$String* $tmp2608 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2608));
frost$core$String* $tmp2609 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2609));
*(&local52) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2610 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
*(&local51) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block35:;
frost$core$Int64 $tmp2611 = (frost$core$Int64) {17};
frost$core$Bit $tmp2612 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2611);
bool $tmp2613 = $tmp2612.value;
if ($tmp2613) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp2614 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2615 = *$tmp2614;
*(&local53) = $tmp2615;
org$frostlang$frostc$ASTNode** $tmp2616 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2617 = *$tmp2616;
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2617));
org$frostlang$frostc$ASTNode* $tmp2618 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2618));
*(&local54) = $tmp2617;
frost$core$String** $tmp2619 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2620 = *$tmp2619;
*(&local55) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2620));
frost$core$String* $tmp2621 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2621));
*(&local55) = $tmp2620;
org$frostlang$frostc$FixedArray** $tmp2622 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2623 = *$tmp2622;
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
org$frostlang$frostc$FixedArray* $tmp2624 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2624));
*(&local56) = $tmp2623;
// line 1
org$frostlang$frostc$ASTNode* $tmp2625 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2625));
// line 1
frost$core$String* $tmp2626 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
// line 1
org$frostlang$frostc$FixedArray* $tmp2627 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2627));
org$frostlang$frostc$FixedArray* $tmp2628 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2629 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
*(&local55) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2630 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block37:;
frost$core$Int64 $tmp2631 = (frost$core$Int64) {18};
frost$core$Bit $tmp2632 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2631);
bool $tmp2633 = $tmp2632.value;
if ($tmp2633) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp2634 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2635 = *$tmp2634;
*(&local57) = $tmp2635;
org$frostlang$frostc$ASTNode** $tmp2636 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2637 = *$tmp2636;
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2637));
org$frostlang$frostc$ASTNode* $tmp2638 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
*(&local58) = $tmp2637;
org$frostlang$frostc$FixedArray** $tmp2639 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2640 = *$tmp2639;
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2640));
org$frostlang$frostc$FixedArray* $tmp2641 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2641));
*(&local59) = $tmp2640;
org$frostlang$frostc$ASTNode** $tmp2642 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2643 = *$tmp2642;
*(&local60) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2643));
org$frostlang$frostc$ASTNode* $tmp2644 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2644));
*(&local60) = $tmp2643;
// line 1
org$frostlang$frostc$ASTNode* $tmp2645 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2645));
// line 1
org$frostlang$frostc$FixedArray* $tmp2646 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
// line 1
org$frostlang$frostc$ASTNode* $tmp2647 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
org$frostlang$frostc$ASTNode* $tmp2648 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2648));
*(&local60) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2649 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2649));
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2650 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block39:;
frost$core$Int64 $tmp2651 = (frost$core$Int64) {19};
frost$core$Bit $tmp2652 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2651);
bool $tmp2653 = $tmp2652.value;
if ($tmp2653) goto block40; else goto block41;
block40:;
org$frostlang$frostc$FixedArray** $tmp2654 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp2655 = *$tmp2654;
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2655));
org$frostlang$frostc$FixedArray* $tmp2656 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
*(&local61) = $tmp2655;
// line 1
org$frostlang$frostc$FixedArray* $tmp2657 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
org$frostlang$frostc$FixedArray* $tmp2658 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2658));
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block41:;
frost$core$Int64 $tmp2659 = (frost$core$Int64) {20};
frost$core$Bit $tmp2660 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2659);
bool $tmp2661 = $tmp2660.value;
if ($tmp2661) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp2662 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2663 = *$tmp2662;
*(&local62) = $tmp2663;
frost$core$String** $tmp2664 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2665 = *$tmp2664;
*(&local63) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2665));
frost$core$String* $tmp2666 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2666));
*(&local63) = $tmp2665;
org$frostlang$frostc$ASTNode** $tmp2667 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2668 = *$tmp2667;
*(&local64) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2668));
org$frostlang$frostc$ASTNode* $tmp2669 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2669));
*(&local64) = $tmp2668;
org$frostlang$frostc$ASTNode** $tmp2670 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2671 = *$tmp2670;
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
org$frostlang$frostc$ASTNode* $tmp2672 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2672));
*(&local65) = $tmp2671;
org$frostlang$frostc$FixedArray** $tmp2673 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp2674 = *$tmp2673;
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2674));
org$frostlang$frostc$FixedArray* $tmp2675 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2675));
*(&local66) = $tmp2674;
// line 1
frost$core$String* $tmp2676 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2676));
// line 1
org$frostlang$frostc$ASTNode* $tmp2677 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2677));
// line 1
org$frostlang$frostc$ASTNode* $tmp2678 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
// line 1
org$frostlang$frostc$FixedArray* $tmp2679 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
org$frostlang$frostc$FixedArray* $tmp2680 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2680));
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2681 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2681));
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2682 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
*(&local64) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2683 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
*(&local63) = ((frost$core$String*) NULL);
goto block1;
block43:;
frost$core$Int64 $tmp2684 = (frost$core$Int64) {21};
frost$core$Bit $tmp2685 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2684);
bool $tmp2686 = $tmp2685.value;
if ($tmp2686) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp2687 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2688 = *$tmp2687;
*(&local67) = $tmp2688;
frost$core$String** $tmp2689 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2690 = *$tmp2689;
*(&local68) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2690));
frost$core$String* $tmp2691 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2691));
*(&local68) = $tmp2690;
org$frostlang$frostc$FixedArray** $tmp2692 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2693 = *$tmp2692;
*(&local69) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2693));
org$frostlang$frostc$FixedArray* $tmp2694 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
*(&local69) = $tmp2693;
// line 1
frost$core$String* $tmp2695 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2695));
// line 1
org$frostlang$frostc$FixedArray* $tmp2696 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
org$frostlang$frostc$FixedArray* $tmp2697 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
*(&local69) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2698 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
*(&local68) = ((frost$core$String*) NULL);
goto block1;
block45:;
frost$core$Int64 $tmp2699 = (frost$core$Int64) {22};
frost$core$Bit $tmp2700 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2699);
bool $tmp2701 = $tmp2700.value;
if ($tmp2701) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp2702 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2703 = *$tmp2702;
*(&local70) = $tmp2703;
frost$core$String** $tmp2704 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2705 = *$tmp2704;
*(&local71) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
frost$core$String* $tmp2706 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2706));
*(&local71) = $tmp2705;
// line 1
frost$core$String* $tmp2707 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
frost$core$String* $tmp2708 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2708));
*(&local71) = ((frost$core$String*) NULL);
goto block1;
block47:;
frost$core$Int64 $tmp2709 = (frost$core$Int64) {23};
frost$core$Bit $tmp2710 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2709);
bool $tmp2711 = $tmp2710.value;
if ($tmp2711) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp2712 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2713 = *$tmp2712;
*(&local72) = $tmp2713;
frost$core$String** $tmp2714 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2715 = *$tmp2714;
*(&local73) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2715));
frost$core$String* $tmp2716 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
*(&local73) = $tmp2715;
org$frostlang$frostc$FixedArray** $tmp2717 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2718 = *$tmp2717;
*(&local74) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
org$frostlang$frostc$FixedArray* $tmp2719 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
*(&local74) = $tmp2718;
// line 1
frost$core$String* $tmp2720 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
// line 1
org$frostlang$frostc$FixedArray* $tmp2721 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
org$frostlang$frostc$FixedArray* $tmp2722 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2722));
*(&local74) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2723 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2723));
*(&local73) = ((frost$core$String*) NULL);
goto block1;
block49:;
frost$core$Int64 $tmp2724 = (frost$core$Int64) {24};
frost$core$Bit $tmp2725 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2724);
bool $tmp2726 = $tmp2725.value;
if ($tmp2726) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp2727 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2728 = *$tmp2727;
*(&local75) = $tmp2728;
org$frostlang$frostc$ASTNode** $tmp2729 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2730 = *$tmp2729;
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
org$frostlang$frostc$ASTNode* $tmp2731 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
*(&local76) = $tmp2730;
org$frostlang$frostc$FixedArray** $tmp2732 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2733 = *$tmp2732;
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2733));
org$frostlang$frostc$FixedArray* $tmp2734 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2734));
*(&local77) = $tmp2733;
org$frostlang$frostc$ASTNode** $tmp2735 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2736 = *$tmp2735;
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2736));
org$frostlang$frostc$ASTNode* $tmp2737 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
*(&local78) = $tmp2736;
// line 1
org$frostlang$frostc$ASTNode* $tmp2738 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
// line 1
org$frostlang$frostc$FixedArray* $tmp2739 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2739));
// line 1
org$frostlang$frostc$ASTNode* $tmp2740 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2740));
org$frostlang$frostc$ASTNode* $tmp2741 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2741));
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2742 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2743 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2743));
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block51:;
frost$core$Int64 $tmp2744 = (frost$core$Int64) {25};
frost$core$Bit $tmp2745 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2744);
bool $tmp2746 = $tmp2745.value;
if ($tmp2746) goto block52; else goto block53;
block52:;
org$frostlang$frostc$Position* $tmp2747 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2748 = *$tmp2747;
*(&local79) = $tmp2748;
frost$core$UInt64* $tmp2749 = (frost$core$UInt64*) (param0->$data + 16);
frost$core$UInt64 $tmp2750 = *$tmp2749;
*(&local80) = $tmp2750;
goto block1;
block53:;
frost$core$Int64 $tmp2751 = (frost$core$Int64) {26};
frost$core$Bit $tmp2752 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2751);
bool $tmp2753 = $tmp2752.value;
if ($tmp2753) goto block54; else goto block55;
block54:;
org$frostlang$frostc$Position* $tmp2754 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2755 = *$tmp2754;
*(&local81) = $tmp2755;
org$frostlang$frostc$IR$Value** $tmp2756 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp2757 = *$tmp2756;
*(&local82) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
org$frostlang$frostc$IR$Value* $tmp2758 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
*(&local82) = $tmp2757;
// line 1
org$frostlang$frostc$IR$Value* $tmp2759 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2759));
org$frostlang$frostc$IR$Value* $tmp2760 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
*(&local82) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block55:;
frost$core$Int64 $tmp2761 = (frost$core$Int64) {27};
frost$core$Bit $tmp2762 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2761);
bool $tmp2763 = $tmp2762.value;
if ($tmp2763) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp2764 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2765 = *$tmp2764;
*(&local83) = $tmp2765;
frost$core$String** $tmp2766 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2767 = *$tmp2766;
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2767));
frost$core$String* $tmp2768 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2768));
*(&local84) = $tmp2767;
org$frostlang$frostc$FixedArray** $tmp2769 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2770 = *$tmp2769;
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2770));
org$frostlang$frostc$FixedArray* $tmp2771 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
*(&local85) = $tmp2770;
// line 1
frost$core$String* $tmp2772 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2772));
// line 1
org$frostlang$frostc$FixedArray* $tmp2773 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2773));
org$frostlang$frostc$FixedArray* $tmp2774 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2774));
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2775 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2775));
*(&local84) = ((frost$core$String*) NULL);
goto block1;
block57:;
frost$core$Int64 $tmp2776 = (frost$core$Int64) {28};
frost$core$Bit $tmp2777 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2776);
bool $tmp2778 = $tmp2777.value;
if ($tmp2778) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp2779 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2780 = *$tmp2779;
*(&local86) = $tmp2780;
org$frostlang$frostc$ASTNode** $tmp2781 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2782 = *$tmp2781;
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
org$frostlang$frostc$ASTNode* $tmp2783 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2783));
*(&local87) = $tmp2782;
org$frostlang$frostc$FixedArray** $tmp2784 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2785 = *$tmp2784;
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2785));
org$frostlang$frostc$FixedArray* $tmp2786 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2786));
*(&local88) = $tmp2785;
org$frostlang$frostc$FixedArray** $tmp2787 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2788 = *$tmp2787;
*(&local89) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2788));
org$frostlang$frostc$FixedArray* $tmp2789 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2789));
*(&local89) = $tmp2788;
// line 1
org$frostlang$frostc$ASTNode* $tmp2790 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
// line 1
org$frostlang$frostc$FixedArray* $tmp2791 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
// line 1
org$frostlang$frostc$FixedArray* $tmp2792 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2792));
org$frostlang$frostc$FixedArray* $tmp2793 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2793));
*(&local89) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2794 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2794));
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2795 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block59:;
frost$core$Int64 $tmp2796 = (frost$core$Int64) {29};
frost$core$Bit $tmp2797 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2796);
bool $tmp2798 = $tmp2797.value;
if ($tmp2798) goto block60; else goto block61;
block60:;
org$frostlang$frostc$Position* $tmp2799 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2800 = *$tmp2799;
*(&local90) = $tmp2800;
org$frostlang$frostc$ASTNode** $tmp2801 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2802 = *$tmp2801;
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2802));
org$frostlang$frostc$ASTNode* $tmp2803 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2803));
*(&local91) = $tmp2802;
org$frostlang$frostc$FixedArray** $tmp2804 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2805 = *$tmp2804;
*(&local92) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
org$frostlang$frostc$FixedArray* $tmp2806 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
*(&local92) = $tmp2805;
org$frostlang$frostc$MethodDecl$Kind* $tmp2807 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp2808 = *$tmp2807;
*(&local93) = $tmp2808;
frost$core$String** $tmp2809 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp2810 = *$tmp2809;
*(&local94) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2810));
frost$core$String* $tmp2811 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
*(&local94) = $tmp2810;
org$frostlang$frostc$FixedArray** $tmp2812 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2813 = *$tmp2812;
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
org$frostlang$frostc$FixedArray* $tmp2814 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2814));
*(&local95) = $tmp2813;
org$frostlang$frostc$FixedArray** $tmp2815 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2816 = *$tmp2815;
*(&local96) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2816));
org$frostlang$frostc$FixedArray* $tmp2817 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2817));
*(&local96) = $tmp2816;
org$frostlang$frostc$ASTNode** $tmp2818 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
org$frostlang$frostc$ASTNode* $tmp2819 = *$tmp2818;
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2819));
org$frostlang$frostc$ASTNode* $tmp2820 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2820));
*(&local97) = $tmp2819;
org$frostlang$frostc$FixedArray** $tmp2821 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2822 = *$tmp2821;
*(&local98) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
org$frostlang$frostc$FixedArray* $tmp2823 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
*(&local98) = $tmp2822;
// line 1
org$frostlang$frostc$ASTNode* $tmp2824 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
// line 1
org$frostlang$frostc$FixedArray* $tmp2825 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2825));
// line 1
frost$core$String* $tmp2826 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
// line 1
org$frostlang$frostc$FixedArray* $tmp2827 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
// line 1
org$frostlang$frostc$FixedArray* $tmp2828 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
// line 1
org$frostlang$frostc$ASTNode* $tmp2829 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
// line 1
org$frostlang$frostc$FixedArray* $tmp2830 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
org$frostlang$frostc$FixedArray* $tmp2831 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2831));
*(&local98) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2832 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2833 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
*(&local96) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2834 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2835 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2835));
*(&local94) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2836 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
*(&local92) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2837 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2837));
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block61:;
frost$core$Int64 $tmp2838 = (frost$core$Int64) {30};
frost$core$Bit $tmp2839 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2838);
bool $tmp2840 = $tmp2839.value;
if ($tmp2840) goto block62; else goto block63;
block62:;
org$frostlang$frostc$Position* $tmp2841 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2842 = *$tmp2841;
*(&local99) = $tmp2842;
org$frostlang$frostc$parser$Token$Kind* $tmp2843 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp2844 = *$tmp2843;
*(&local100) = $tmp2844;
org$frostlang$frostc$FixedArray** $tmp2845 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2846 = *$tmp2845;
*(&local101) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
org$frostlang$frostc$FixedArray* $tmp2847 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2847));
*(&local101) = $tmp2846;
org$frostlang$frostc$ASTNode** $tmp2848 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2849 = *$tmp2848;
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2849));
org$frostlang$frostc$ASTNode* $tmp2850 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2850));
*(&local102) = $tmp2849;
// line 1
org$frostlang$frostc$FixedArray* $tmp2851 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2851));
// line 1
org$frostlang$frostc$ASTNode* $tmp2852 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2852));
org$frostlang$frostc$ASTNode* $tmp2853 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2853));
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2854 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2854));
*(&local101) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block63:;
frost$core$Int64 $tmp2855 = (frost$core$Int64) {31};
frost$core$Bit $tmp2856 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2855);
bool $tmp2857 = $tmp2856.value;
if ($tmp2857) goto block64; else goto block65;
block64:;
org$frostlang$frostc$Position* $tmp2858 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2859 = *$tmp2858;
*(&local103) = $tmp2859;
goto block1;
block65:;
frost$core$Int64 $tmp2860 = (frost$core$Int64) {32};
frost$core$Bit $tmp2861 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2860);
bool $tmp2862 = $tmp2861.value;
if ($tmp2862) goto block66; else goto block67;
block66:;
org$frostlang$frostc$Position* $tmp2863 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2864 = *$tmp2863;
*(&local104) = $tmp2864;
org$frostlang$frostc$ASTNode** $tmp2865 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2866 = *$tmp2865;
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
org$frostlang$frostc$ASTNode* $tmp2867 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
*(&local105) = $tmp2866;
// line 1
org$frostlang$frostc$ASTNode* $tmp2868 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2868));
org$frostlang$frostc$ASTNode* $tmp2869 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block67:;
frost$core$Int64 $tmp2870 = (frost$core$Int64) {33};
frost$core$Bit $tmp2871 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2870);
bool $tmp2872 = $tmp2871.value;
if ($tmp2872) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Position* $tmp2873 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2874 = *$tmp2873;
*(&local106) = $tmp2874;
frost$core$String** $tmp2875 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2876 = *$tmp2875;
*(&local107) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2876));
frost$core$String* $tmp2877 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2877));
*(&local107) = $tmp2876;
// line 1
frost$core$String* $tmp2878 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
frost$core$String* $tmp2879 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2879));
*(&local107) = ((frost$core$String*) NULL);
goto block1;
block69:;
frost$core$Int64 $tmp2880 = (frost$core$Int64) {34};
frost$core$Bit $tmp2881 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2880);
bool $tmp2882 = $tmp2881.value;
if ($tmp2882) goto block70; else goto block71;
block70:;
org$frostlang$frostc$Position* $tmp2883 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2884 = *$tmp2883;
*(&local108) = $tmp2884;
frost$core$String** $tmp2885 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2886 = *$tmp2885;
*(&local109) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2886));
frost$core$String* $tmp2887 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2887));
*(&local109) = $tmp2886;
org$frostlang$frostc$ASTNode** $tmp2888 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2889 = *$tmp2888;
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
org$frostlang$frostc$ASTNode* $tmp2890 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2890));
*(&local110) = $tmp2889;
// line 1
frost$core$String* $tmp2891 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
// line 1
org$frostlang$frostc$ASTNode* $tmp2892 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
org$frostlang$frostc$ASTNode* $tmp2893 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2894 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
*(&local109) = ((frost$core$String*) NULL);
goto block1;
block71:;
frost$core$Int64 $tmp2895 = (frost$core$Int64) {35};
frost$core$Bit $tmp2896 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2895);
bool $tmp2897 = $tmp2896.value;
if ($tmp2897) goto block72; else goto block73;
block72:;
org$frostlang$frostc$Position* $tmp2898 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2899 = *$tmp2898;
*(&local111) = $tmp2899;
org$frostlang$frostc$ASTNode** $tmp2900 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2901 = *$tmp2900;
*(&local112) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2901));
org$frostlang$frostc$ASTNode* $tmp2902 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
*(&local112) = $tmp2901;
frost$core$Bit* $tmp2903 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp2904 = *$tmp2903;
*(&local113) = $tmp2904;
org$frostlang$frostc$ASTNode** $tmp2905 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
org$frostlang$frostc$ASTNode* $tmp2906 = *$tmp2905;
*(&local114) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2906));
org$frostlang$frostc$ASTNode* $tmp2907 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
*(&local114) = $tmp2906;
org$frostlang$frostc$ASTNode** $tmp2908 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp2909 = *$tmp2908;
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
org$frostlang$frostc$ASTNode* $tmp2910 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2910));
*(&local115) = $tmp2909;
// line 1
org$frostlang$frostc$ASTNode* $tmp2911 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
// line 1
org$frostlang$frostc$ASTNode* $tmp2912 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
// line 1
org$frostlang$frostc$ASTNode* $tmp2913 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
org$frostlang$frostc$ASTNode* $tmp2914 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2915 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
*(&local114) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2916 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
*(&local112) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block73:;
frost$core$Int64 $tmp2917 = (frost$core$Int64) {36};
frost$core$Bit $tmp2918 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2917);
bool $tmp2919 = $tmp2918.value;
if ($tmp2919) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp2920 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2921 = *$tmp2920;
*(&local116) = $tmp2921;
frost$core$Real64* $tmp2922 = (frost$core$Real64*) (param0->$data + 16);
frost$core$Real64 $tmp2923 = *$tmp2922;
*(&local117) = $tmp2923;
goto block1;
block75:;
frost$core$Int64 $tmp2924 = (frost$core$Int64) {37};
frost$core$Bit $tmp2925 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2924);
bool $tmp2926 = $tmp2925.value;
if ($tmp2926) goto block76; else goto block77;
block76:;
org$frostlang$frostc$Position* $tmp2927 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2928 = *$tmp2927;
*(&local118) = $tmp2928;
frost$core$String** $tmp2929 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2930 = *$tmp2929;
*(&local119) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2930));
frost$core$String* $tmp2931 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2931));
*(&local119) = $tmp2930;
// line 1
frost$core$String* $tmp2932 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2932));
frost$core$String* $tmp2933 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2933));
*(&local119) = ((frost$core$String*) NULL);
goto block1;
block77:;
frost$core$Int64 $tmp2934 = (frost$core$Int64) {38};
frost$core$Bit $tmp2935 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2934);
bool $tmp2936 = $tmp2935.value;
if ($tmp2936) goto block78; else goto block79;
block78:;
org$frostlang$frostc$Position* $tmp2937 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2938 = *$tmp2937;
*(&local120) = $tmp2938;
org$frostlang$frostc$ASTNode** $tmp2939 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2940 = *$tmp2939;
*(&local121) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2940));
org$frostlang$frostc$ASTNode* $tmp2941 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2941));
*(&local121) = $tmp2940;
// line 1
org$frostlang$frostc$ASTNode* $tmp2942 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2942));
org$frostlang$frostc$ASTNode* $tmp2943 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
*(&local121) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block79:;
frost$core$Int64 $tmp2944 = (frost$core$Int64) {39};
frost$core$Bit $tmp2945 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2944);
bool $tmp2946 = $tmp2945.value;
if ($tmp2946) goto block80; else goto block81;
block80:;
org$frostlang$frostc$Position* $tmp2947 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2948 = *$tmp2947;
*(&local122) = $tmp2948;
goto block1;
block81:;
frost$core$Int64 $tmp2949 = (frost$core$Int64) {40};
frost$core$Bit $tmp2950 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2949);
bool $tmp2951 = $tmp2950.value;
if ($tmp2951) goto block82; else goto block83;
block82:;
org$frostlang$frostc$Position* $tmp2952 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2953 = *$tmp2952;
*(&local123) = $tmp2953;
frost$core$String** $tmp2954 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2955 = *$tmp2954;
*(&local124) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2955));
frost$core$String* $tmp2956 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2956));
*(&local124) = $tmp2955;
// line 1
frost$core$String* $tmp2957 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2957));
frost$core$String* $tmp2958 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2958));
*(&local124) = ((frost$core$String*) NULL);
goto block1;
block83:;
frost$core$Int64 $tmp2959 = (frost$core$Int64) {41};
frost$core$Bit $tmp2960 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2959);
bool $tmp2961 = $tmp2960.value;
if ($tmp2961) goto block84; else goto block85;
block84:;
org$frostlang$frostc$Position* $tmp2962 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2963 = *$tmp2962;
*(&local125) = $tmp2963;
goto block1;
block85:;
frost$core$Int64 $tmp2964 = (frost$core$Int64) {42};
frost$core$Bit $tmp2965 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2964);
bool $tmp2966 = $tmp2965.value;
if ($tmp2966) goto block86; else goto block87;
block86:;
org$frostlang$frostc$Position* $tmp2967 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2968 = *$tmp2967;
*(&local126) = $tmp2968;
org$frostlang$frostc$FixedArray** $tmp2969 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2970 = *$tmp2969;
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
org$frostlang$frostc$FixedArray* $tmp2971 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
*(&local127) = $tmp2970;
org$frostlang$frostc$ASTNode** $tmp2972 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2973 = *$tmp2972;
*(&local128) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2973));
org$frostlang$frostc$ASTNode* $tmp2974 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2974));
*(&local128) = $tmp2973;
org$frostlang$frostc$FixedArray** $tmp2975 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2976 = *$tmp2975;
*(&local129) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2976));
org$frostlang$frostc$FixedArray* $tmp2977 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
*(&local129) = $tmp2976;
// line 1
org$frostlang$frostc$FixedArray* $tmp2978 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2978));
// line 1
org$frostlang$frostc$ASTNode* $tmp2979 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2979));
// line 1
org$frostlang$frostc$FixedArray* $tmp2980 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2980));
org$frostlang$frostc$FixedArray* $tmp2981 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2981));
*(&local129) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2982 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2982));
*(&local128) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2983 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2983));
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block87:;
frost$core$Int64 $tmp2984 = (frost$core$Int64) {43};
frost$core$Bit $tmp2985 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2984);
bool $tmp2986 = $tmp2985.value;
if ($tmp2986) goto block88; else goto block89;
block88:;
org$frostlang$frostc$Position* $tmp2987 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2988 = *$tmp2987;
*(&local130) = $tmp2988;
org$frostlang$frostc$FixedArray** $tmp2989 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2990 = *$tmp2989;
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2990));
org$frostlang$frostc$FixedArray* $tmp2991 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2991));
*(&local131) = $tmp2990;
// line 1
org$frostlang$frostc$FixedArray* $tmp2992 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
org$frostlang$frostc$FixedArray* $tmp2993 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2993));
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block89:;
frost$core$Int64 $tmp2994 = (frost$core$Int64) {44};
frost$core$Bit $tmp2995 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp2994);
bool $tmp2996 = $tmp2995.value;
if ($tmp2996) goto block90; else goto block91;
block90:;
org$frostlang$frostc$Position* $tmp2997 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2998 = *$tmp2997;
*(&local132) = $tmp2998;
org$frostlang$frostc$FixedArray** $tmp2999 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3000 = *$tmp2999;
*(&local133) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3000));
org$frostlang$frostc$FixedArray* $tmp3001 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3001));
*(&local133) = $tmp3000;
// line 1
org$frostlang$frostc$FixedArray* $tmp3002 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3002));
org$frostlang$frostc$FixedArray* $tmp3003 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3003));
*(&local133) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block91:;
frost$core$Int64 $tmp3004 = (frost$core$Int64) {45};
frost$core$Bit $tmp3005 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp3004);
bool $tmp3006 = $tmp3005.value;
if ($tmp3006) goto block92; else goto block93;
block92:;
org$frostlang$frostc$Position* $tmp3007 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3008 = *$tmp3007;
*(&local134) = $tmp3008;
frost$core$String** $tmp3009 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3010 = *$tmp3009;
*(&local135) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3010));
frost$core$String* $tmp3011 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3011));
*(&local135) = $tmp3010;
// line 1
frost$core$String* $tmp3012 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3012));
frost$core$String* $tmp3013 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
*(&local135) = ((frost$core$String*) NULL);
goto block1;
block93:;
frost$core$Int64 $tmp3014 = (frost$core$Int64) {46};
frost$core$Bit $tmp3015 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp3014);
bool $tmp3016 = $tmp3015.value;
if ($tmp3016) goto block94; else goto block95;
block94:;
org$frostlang$frostc$Position* $tmp3017 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3018 = *$tmp3017;
*(&local136) = $tmp3018;
org$frostlang$frostc$FixedArray** $tmp3019 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3020 = *$tmp3019;
*(&local137) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3020));
org$frostlang$frostc$FixedArray* $tmp3021 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3021));
*(&local137) = $tmp3020;
org$frostlang$frostc$ASTNode** $tmp3022 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3023 = *$tmp3022;
*(&local138) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3023));
org$frostlang$frostc$ASTNode* $tmp3024 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3024));
*(&local138) = $tmp3023;
// line 1
org$frostlang$frostc$FixedArray* $tmp3025 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
// line 1
org$frostlang$frostc$ASTNode* $tmp3026 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3026));
org$frostlang$frostc$ASTNode* $tmp3027 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3027));
*(&local138) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3028 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3028));
*(&local137) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block95:;
frost$core$Int64 $tmp3029 = (frost$core$Int64) {47};
frost$core$Bit $tmp3030 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp3029);
bool $tmp3031 = $tmp3030.value;
if ($tmp3031) goto block96; else goto block97;
block96:;
org$frostlang$frostc$Position* $tmp3032 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3033 = *$tmp3032;
*(&local139) = $tmp3033;
frost$core$String** $tmp3034 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3035 = *$tmp3034;
*(&local140) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3035));
frost$core$String* $tmp3036 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3036));
*(&local140) = $tmp3035;
org$frostlang$frostc$ASTNode** $tmp3037 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3038 = *$tmp3037;
*(&local141) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3038));
org$frostlang$frostc$ASTNode* $tmp3039 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3039));
*(&local141) = $tmp3038;
// line 1
frost$core$String* $tmp3040 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3040));
// line 1
org$frostlang$frostc$ASTNode* $tmp3041 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
org$frostlang$frostc$ASTNode* $tmp3042 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3042));
*(&local141) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3043 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3043));
*(&local140) = ((frost$core$String*) NULL);
goto block1;
block97:;
frost$core$Int64 $tmp3044 = (frost$core$Int64) {48};
frost$core$Bit $tmp3045 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp3044);
bool $tmp3046 = $tmp3045.value;
if ($tmp3046) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp3047 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3048 = *$tmp3047;
*(&local142) = $tmp3048;
org$frostlang$frostc$expression$Unary$Operator* $tmp3049 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 16);
org$frostlang$frostc$expression$Unary$Operator $tmp3050 = *$tmp3049;
*(&local143) = $tmp3050;
org$frostlang$frostc$ASTNode** $tmp3051 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3052 = *$tmp3051;
*(&local144) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3052));
org$frostlang$frostc$ASTNode* $tmp3053 = *(&local144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3053));
*(&local144) = $tmp3052;
// line 1
org$frostlang$frostc$ASTNode* $tmp3054 = *(&local144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3054));
org$frostlang$frostc$ASTNode* $tmp3055 = *(&local144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3055));
*(&local144) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block99:;
frost$core$Int64 $tmp3056 = (frost$core$Int64) {49};
frost$core$Bit $tmp3057 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp3056);
bool $tmp3058 = $tmp3057.value;
if ($tmp3058) goto block100; else goto block101;
block100:;
org$frostlang$frostc$Position* $tmp3059 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3060 = *$tmp3059;
*(&local145) = $tmp3060;
org$frostlang$frostc$ASTNode** $tmp3061 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3062 = *$tmp3061;
*(&local146) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3062));
org$frostlang$frostc$ASTNode* $tmp3063 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3063));
*(&local146) = $tmp3062;
// line 1
org$frostlang$frostc$ASTNode* $tmp3064 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3064));
org$frostlang$frostc$ASTNode* $tmp3065 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3065));
*(&local146) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block101:;
frost$core$Int64 $tmp3066 = (frost$core$Int64) {50};
frost$core$Bit $tmp3067 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp3066);
bool $tmp3068 = $tmp3067.value;
if ($tmp3068) goto block102; else goto block103;
block102:;
org$frostlang$frostc$Position* $tmp3069 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3070 = *$tmp3069;
*(&local147) = $tmp3070;
org$frostlang$frostc$FixedArray** $tmp3071 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3072 = *$tmp3071;
*(&local148) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3072));
org$frostlang$frostc$FixedArray* $tmp3073 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3073));
*(&local148) = $tmp3072;
org$frostlang$frostc$ASTNode** $tmp3074 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3075 = *$tmp3074;
*(&local149) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3075));
org$frostlang$frostc$ASTNode* $tmp3076 = *(&local149);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3076));
*(&local149) = $tmp3075;
// line 1
org$frostlang$frostc$FixedArray* $tmp3077 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3077));
// line 1
org$frostlang$frostc$ASTNode* $tmp3078 = *(&local149);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3078));
org$frostlang$frostc$ASTNode* $tmp3079 = *(&local149);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3079));
*(&local149) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3080 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3080));
*(&local148) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block103:;
frost$core$Int64 $tmp3081 = (frost$core$Int64) {51};
frost$core$Bit $tmp3082 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp3081);
bool $tmp3083 = $tmp3082.value;
if ($tmp3083) goto block104; else goto block105;
block104:;
org$frostlang$frostc$Position* $tmp3084 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3085 = *$tmp3084;
*(&local150) = $tmp3085;
frost$core$String** $tmp3086 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3087 = *$tmp3086;
*(&local151) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3087));
frost$core$String* $tmp3088 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
*(&local151) = $tmp3087;
// line 1
frost$core$String* $tmp3089 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3089));
frost$core$String* $tmp3090 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
*(&local151) = ((frost$core$String*) NULL);
goto block1;
block105:;
frost$core$Int64 $tmp3091 = (frost$core$Int64) {52};
frost$core$Bit $tmp3092 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp3091);
bool $tmp3093 = $tmp3092.value;
if ($tmp3093) goto block106; else goto block107;
block106:;
org$frostlang$frostc$Position* $tmp3094 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3095 = *$tmp3094;
*(&local152) = $tmp3095;
org$frostlang$frostc$Variable$Kind* $tmp3096 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp3097 = *$tmp3096;
*(&local153) = $tmp3097;
org$frostlang$frostc$FixedArray** $tmp3098 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3099 = *$tmp3098;
*(&local154) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
org$frostlang$frostc$FixedArray* $tmp3100 = *(&local154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3100));
*(&local154) = $tmp3099;
// line 1
org$frostlang$frostc$FixedArray* $tmp3101 = *(&local154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
org$frostlang$frostc$FixedArray* $tmp3102 = *(&local154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3102));
*(&local154) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block107:;
frost$core$Int64 $tmp3103 = (frost$core$Int64) {53};
frost$core$Bit $tmp3104 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp3103);
bool $tmp3105 = $tmp3104.value;
if ($tmp3105) goto block108; else goto block109;
block108:;
org$frostlang$frostc$Position* $tmp3106 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3107 = *$tmp3106;
*(&local155) = $tmp3107;
org$frostlang$frostc$FixedArray** $tmp3108 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3109 = *$tmp3108;
*(&local156) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3109));
org$frostlang$frostc$FixedArray* $tmp3110 = *(&local156);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3110));
*(&local156) = $tmp3109;
org$frostlang$frostc$FixedArray** $tmp3111 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3112 = *$tmp3111;
*(&local157) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3112));
org$frostlang$frostc$FixedArray* $tmp3113 = *(&local157);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3113));
*(&local157) = $tmp3112;
// line 1
org$frostlang$frostc$FixedArray* $tmp3114 = *(&local156);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3114));
// line 1
org$frostlang$frostc$FixedArray* $tmp3115 = *(&local157);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3115));
org$frostlang$frostc$FixedArray* $tmp3116 = *(&local157);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3116));
*(&local157) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3117 = *(&local156);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3117));
*(&local156) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block109:;
frost$core$Int64 $tmp3118 = (frost$core$Int64) {54};
frost$core$Bit $tmp3119 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2357, $tmp3118);
bool $tmp3120 = $tmp3119.value;
if ($tmp3120) goto block110; else goto block1;
block110:;
org$frostlang$frostc$Position* $tmp3121 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3122 = *$tmp3121;
*(&local158) = $tmp3122;
frost$core$String** $tmp3123 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3124 = *$tmp3123;
*(&local159) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3124));
frost$core$String* $tmp3125 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
*(&local159) = $tmp3124;
org$frostlang$frostc$ASTNode** $tmp3126 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3127 = *$tmp3126;
*(&local160) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3127));
org$frostlang$frostc$ASTNode* $tmp3128 = *(&local160);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3128));
*(&local160) = $tmp3127;
org$frostlang$frostc$FixedArray** $tmp3129 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3130 = *$tmp3129;
*(&local161) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3130));
org$frostlang$frostc$FixedArray* $tmp3131 = *(&local161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3131));
*(&local161) = $tmp3130;
// line 1
frost$core$String* $tmp3132 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3132));
// line 1
org$frostlang$frostc$ASTNode* $tmp3133 = *(&local160);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3133));
// line 1
org$frostlang$frostc$FixedArray* $tmp3134 = *(&local161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3134));
org$frostlang$frostc$FixedArray* $tmp3135 = *(&local161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3135));
*(&local161) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3136 = *(&local160);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3136));
*(&local160) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3137 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
*(&local159) = ((frost$core$String*) NULL);
goto block1;
block1:;
// line 7
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, frost$core$String* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3138 = &param0->$rawValue;
*$tmp3138 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3139 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3139 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3140 = (frost$core$String**) (param0->$data + 16);
*$tmp3140 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3141 = (frost$core$String**) (param0->$data + 24);
*$tmp3141 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3142 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3142 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3) {

// line 7
frost$core$Int64* $tmp3143 = &param0->$rawValue;
*$tmp3143 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3144 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3144 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3145 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3145 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3146 = &param0->$rawValue;
*$tmp3146 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3147 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3147 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3148 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3148 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3149 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3149 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3) {

// line 7
frost$core$Int64* $tmp3150 = &param0->$rawValue;
*$tmp3150 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3151 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3151 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3152 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3152 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2) {

// line 7
frost$core$Int64* $tmp3153 = &param0->$rawValue;
*$tmp3153 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3154 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3154 = param2;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$expression$Binary$Operator param4, org$frostlang$frostc$ASTNode* param5) {

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
org$frostlang$frostc$expression$Binary$Operator* $tmp3158 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 24);
*$tmp3158 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3159 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3159 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$Bit param3) {

// line 7
frost$core$Int64* $tmp3160 = &param0->$rawValue;
*$tmp3160 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3161 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3161 = param2;
// line 7
frost$core$Bit* $tmp3162 = (frost$core$Bit*) (param0->$data + 16);
*$tmp3162 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// line 7
frost$core$Int64* $tmp3163 = &param0->$rawValue;
*$tmp3163 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3164 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3164 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3165 = (frost$core$String**) (param0->$data + 16);
*$tmp3165 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3166 = &param0->$rawValue;
*$tmp3166 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3167 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3167 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3168 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3168 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3169 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3169 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3170 = &param0->$rawValue;
*$tmp3170 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3171 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3171 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3172 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3172 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3173 = (frost$core$String**) (param0->$data + 24);
*$tmp3173 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3174 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3174 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ChoiceCase$frost$core$Int64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ChoiceCase* param4, frost$core$Int64 param5) {

// line 7
frost$core$Int64* $tmp3175 = &param0->$rawValue;
*$tmp3175 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3176 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3176 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3177 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3177 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ChoiceCase** $tmp3178 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
*$tmp3178 = param4;
// line 7
frost$core$Int64* $tmp3179 = (frost$core$Int64*) (param0->$data + 32);
*$tmp3179 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ClassDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$FixedArray* param9) {

// line 7
frost$core$Int64* $tmp3180 = &param0->$rawValue;
*$tmp3180 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3181 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3181 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3182 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3182 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3183 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3183 = param4;
// line 7
org$frostlang$frostc$ClassDecl$Kind* $tmp3184 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
*$tmp3184 = param5;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
frost$core$String** $tmp3185 = (frost$core$String**) (param0->$data + 40);
*$tmp3185 = param6;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$FixedArray** $tmp3186 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
*$tmp3186 = param7;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$FixedArray** $tmp3187 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
*$tmp3187 = param8;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$FixedArray** $tmp3188 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
*$tmp3188 = param9;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3189 = &param0->$rawValue;
*$tmp3189 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3190 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3190 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3191 = (frost$core$String**) (param0->$data + 16);
*$tmp3191 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3192 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3192 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3193 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3193 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4) {

// line 7
frost$core$Int64* $tmp3194 = &param0->$rawValue;
*$tmp3194 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3195 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3195 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3196 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3196 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3197 = (frost$core$String**) (param0->$data + 24);
*$tmp3197 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3198 = &param0->$rawValue;
*$tmp3198 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3199 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3199 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3200 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3200 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3201 = (frost$core$String**) (param0->$data + 24);
*$tmp3201 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3202 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3202 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3203 = &param0->$rawValue;
*$tmp3203 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3204 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3204 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3205 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3205 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3206 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3206 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3207 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3207 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$FixedArray* param2) {

// line 7
frost$core$Int64* $tmp3208 = &param0->$rawValue;
*$tmp3208 = param1;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$FixedArray** $tmp3209 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
*$tmp3209 = param2;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$FixedArray* param6) {

// line 7
frost$core$Int64* $tmp3210 = &param0->$rawValue;
*$tmp3210 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3211 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3211 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3212 = (frost$core$String**) (param0->$data + 16);
*$tmp3212 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3213 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3213 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3214 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3214 = param5;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$FixedArray** $tmp3215 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
*$tmp3215 = param6;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3216 = &param0->$rawValue;
*$tmp3216 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3217 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3217 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3218 = (frost$core$String**) (param0->$data + 16);
*$tmp3218 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3219 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3219 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// line 7
frost$core$Int64* $tmp3220 = &param0->$rawValue;
*$tmp3220 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3221 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3221 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3222 = (frost$core$String**) (param0->$data + 16);
*$tmp3222 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3223 = &param0->$rawValue;
*$tmp3223 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3224 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3224 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3225 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3225 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3226 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3226 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3227 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3227 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$UInt64 param3) {

// line 7
frost$core$Int64* $tmp3228 = &param0->$rawValue;
*$tmp3228 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3229 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3229 = param2;
// line 7
frost$core$UInt64* $tmp3230 = (frost$core$UInt64*) (param0->$data + 16);
*$tmp3230 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3) {

// line 7
frost$core$Int64* $tmp3231 = &param0->$rawValue;
*$tmp3231 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3232 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3232 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp3233 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp3233 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3234 = &param0->$rawValue;
*$tmp3234 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3235 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3235 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3236 = (frost$core$String**) (param0->$data + 16);
*$tmp3236 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3237 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3237 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3238 = &param0->$rawValue;
*$tmp3238 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3239 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3239 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3240 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3240 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3241 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3241 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3242 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3242 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$MethodDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$ASTNode* param9, org$frostlang$frostc$FixedArray* param10) {

// line 7
frost$core$Int64* $tmp3243 = &param0->$rawValue;
*$tmp3243 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3244 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3244 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3245 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3245 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3246 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3246 = param4;
// line 7
org$frostlang$frostc$MethodDecl$Kind* $tmp3247 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
*$tmp3247 = param5;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
frost$core$String** $tmp3248 = (frost$core$String**) (param0->$data + 40);
*$tmp3248 = param6;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$FixedArray** $tmp3249 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
*$tmp3249 = param7;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$FixedArray** $tmp3250 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
*$tmp3250 = param8;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$ASTNode** $tmp3251 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
*$tmp3251 = param9;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param10));
org$frostlang$frostc$FixedArray** $tmp3252 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
*$tmp3252 = param10;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$parser$Token$Kind param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3253 = &param0->$rawValue;
*$tmp3253 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3254 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3254 = param2;
// line 7
org$frostlang$frostc$parser$Token$Kind* $tmp3255 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
*$tmp3255 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3256 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3256 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3257 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3257 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3258 = &param0->$rawValue;
*$tmp3258 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3259 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3259 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3260 = (frost$core$String**) (param0->$data + 16);
*$tmp3260 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3261 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3261 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$Bit$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$Bit param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$ASTNode* param6) {

// line 7
frost$core$Int64* $tmp3262 = &param0->$rawValue;
*$tmp3262 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3263 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3263 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3264 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3264 = param3;
// line 7
frost$core$Bit* $tmp3265 = (frost$core$Bit*) (param0->$data + 24);
*$tmp3265 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3266 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
*$tmp3266 = param5;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$ASTNode** $tmp3267 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
*$tmp3267 = param6;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Real64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$Real64 param3) {

// line 7
frost$core$Int64* $tmp3268 = &param0->$rawValue;
*$tmp3268 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3269 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3269 = param2;
// line 7
frost$core$Real64* $tmp3270 = (frost$core$Real64*) (param0->$data + 16);
*$tmp3270 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3) {

// line 7
frost$core$Int64* $tmp3271 = &param0->$rawValue;
*$tmp3271 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3272 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3272 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3273 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3273 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3274 = &param0->$rawValue;
*$tmp3274 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3275 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3275 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3276 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3276 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3277 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3277 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3278 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3278 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3279 = &param0->$rawValue;
*$tmp3279 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3280 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3280 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3281 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3281 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3282 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3282 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3283 = &param0->$rawValue;
*$tmp3283 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3284 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3284 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3285 = (frost$core$String**) (param0->$data + 16);
*$tmp3285 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3286 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3286 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$expression$Unary$Operator param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3287 = &param0->$rawValue;
*$tmp3287 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3288 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3288 = param2;
// line 7
org$frostlang$frostc$expression$Unary$Operator* $tmp3289 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 16);
*$tmp3289 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3290 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3290 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$Variable$Kind param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3291 = &param0->$rawValue;
*$tmp3291 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3292 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3292 = param2;
// line 7
org$frostlang$frostc$Variable$Kind* $tmp3293 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
*$tmp3293 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3294 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3294 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3295 = &param0->$rawValue;
*$tmp3295 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3296 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3296 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3297 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3297 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3298 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3298 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3299 = &param0->$rawValue;
*$tmp3299 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3300 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3300 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3301 = (frost$core$String**) (param0->$data + 16);
*$tmp3301 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3302 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3302 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3303 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3303 = param5;
return;

}






