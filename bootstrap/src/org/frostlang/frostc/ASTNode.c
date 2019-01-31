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
#include "org/frostlang/frostc/ASTNode/_Closure3.h"
#include "frost/core/MutableMethod.h"
#include "org/frostlang/frostc/ASTNode/_Closure6.h"


static frost$core$String $s1;
org$frostlang$frostc$ASTNode$class_type org$frostlang$frostc$ASTNode$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$ASTNode$get_asString$R$frost$core$String, org$frostlang$frostc$ASTNode$cleanup, org$frostlang$frostc$ASTNode$position$R$org$frostlang$frostc$Position} };

typedef frost$core$String* (*$fn599)(frost$core$Object*);
typedef frost$core$Bit (*$fn675)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn680)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn716)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn732)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn736)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn741)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn788)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn795)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn833)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn859)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn911)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn915)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn920)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn954)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn967)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn978)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn982)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn987)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1042)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1054)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1087)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1091)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1096)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1129)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1155)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1166)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1201)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1205)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1210)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1237)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1241)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1246)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1297)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1301)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1306)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1341)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1377)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1408)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1412)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1417)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1452)(frost$core$Object*);
typedef frost$core$String* (*$fn1464)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1493)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1497)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1502)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1541)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1545)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1550)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1613)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1617)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1622)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1654)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1664)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1687)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1691)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1696)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1758)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1897)(frost$core$Object*);
typedef frost$core$String* (*$fn1966)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1984)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2002)(frost$collections$CollectionView*);
typedef void (*$fn2031)(org$frostlang$frostc$ASTNode$_Closure3*, frost$core$Object*);
typedef void (*$fn2035)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef void (*$fn2052)(org$frostlang$frostc$ASTNode$_Closure6*, frost$core$Object*);
typedef void (*$fn2056)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn2118)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2183)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2243)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2269)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2273)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2278)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2296)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2300)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2305)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2352)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2356)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2361)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 28, 5772502652536328142, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s579 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s583 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s625 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static frost$core$String $s627 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s631 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static frost$core$String $s646 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s653 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static frost$core$String $s654 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static frost$core$String $s683 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s687 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };
static frost$core$String $s692 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s694 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s699 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s703 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s727 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static frost$core$String $s747 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s750 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s768 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static frost$core$String $s770 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s772 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static frost$core$String $s774 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static frost$core$String $s791 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s799 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s824 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s829 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s837 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s862 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s866 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s871 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s907 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s934 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static frost$core$String $s939 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static frost$core$String $s944 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static frost$core$String $s957 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s959 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s970 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s972 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s974 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s993 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s996 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1019 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static frost$core$String $s1021 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1023 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static frost$core$String $s1025 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static frost$core$String $s1045 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static frost$core$String $s1049 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1081 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1083 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static frost$core$String $s1102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1107 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static frost$core$String $s1109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1162 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1197 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1283 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s1287 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static frost$core$String $s1289 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static frost$core$String $s1293 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1312 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1345 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52\x5f\x47\x45\x4e\x45\x52\x49\x43\x53\x28", 20, -4089576957169252493, NULL };
static frost$core$String $s1373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x29", 2, 16504, NULL };
static frost$core$String $s1401 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static frost$core$String $s1403 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1426 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1433 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static frost$core$String $s1435 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1489 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static frost$core$String $s1508 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1511 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1534 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static frost$core$String $s1536 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1556 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1564 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1566 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1628 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1636 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static frost$core$String $s1641 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static frost$core$String $s1657 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1659 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1667 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1669 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1676 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1678 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1683 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1702 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1705 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1734 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s1736 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s1740 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s1742 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s1746 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s1748 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s1752 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s1754 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s1761 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1763 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1767 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1775 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1779 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1787 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x29", 2, 14282, NULL };
static frost$core$String $s1795 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s1796 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s1807 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s1833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1837 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1866 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static frost$core$String $s1868 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s1880 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static frost$core$String $s1909 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s1911 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s1926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s1928 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1930 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static frost$core$String $s1932 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static frost$core$String $s1936 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s1937 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s1948 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s1953 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static frost$core$String $s1954 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static frost$core$String $s1969 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1971 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1987 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1989 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2005 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2007 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2024 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static frost$core$String $s2042 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x0a\x66\x61\x69\x6c\x28", 7, 240019370222988, NULL };
static frost$core$String $s2044 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b\x0a", 4, 146641607, NULL };
static frost$core$String $s2046 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x0a\x66\x61\x69\x6c\x20\x7b\x0a", 9, 2448437595644631413, NULL };
static frost$core$String $s2058 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2094 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2098 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static frost$core$String $s2127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2147 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2162 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65\x2c\x20", 13, 4377509119645419399, NULL };
static frost$core$String $s2164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 184878482956378755, NULL };
static frost$core$String $s2168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 184878482956378755, NULL };
static frost$core$String $s2186 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2188 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static frost$core$String $s2192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2223 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static frost$core$String $s2228 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static frost$core$String $s2233 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static frost$core$String $s2238 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static frost$core$String $s2261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static frost$core$String $s2263 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2285 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2289 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s2342 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static frost$core$String $s2348 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s2367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s2370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2378 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };

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
org$frostlang$frostc$Position local54;
// line 95
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
// line 97
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
// line 100
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
// line 103
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
// line 106
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
// line 109
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
// line 112
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
// line 115
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
// line 118
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
// line 121
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
// line 124
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
// line 127
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
// line 130
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
// line 133
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
// line 136
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
// line 139
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
// line 142
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
// line 145
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
// line 148
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
// line 151
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
// line 154
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
// line 157
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
// line 160
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
// line 163
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
// line 166
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
// line 169
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
// line 172
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
// line 175
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
// line 178
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
// line 181
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
// line 184
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
// line 187
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
// line 190
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
// line 193
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
// line 196
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
// line 199
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
// line 202
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
// line 205
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
// line 208
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
// line 211
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
// line 214
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
// line 217
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
// line 220
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
// line 223
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
// line 226
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
org$frostlang$frostc$FixedArray** $tmp445 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp446 = *$tmp445;
// line 229
org$frostlang$frostc$Position $tmp447 = *(&local43);
return $tmp447;
block91:;
frost$core$Int64 $tmp448 = (frost$core$Int64) {46};
frost$core$Bit $tmp449 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp448);
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block92; else goto block93;
block92:;
org$frostlang$frostc$Position* $tmp451 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp452 = *$tmp451;
*(&local44) = $tmp452;
frost$core$String** $tmp453 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp454 = *$tmp453;
// line 232
org$frostlang$frostc$Position $tmp455 = *(&local44);
return $tmp455;
block93:;
frost$core$Int64 $tmp456 = (frost$core$Int64) {48};
frost$core$Bit $tmp457 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp456);
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block94; else goto block95;
block94:;
org$frostlang$frostc$Position* $tmp459 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp460 = *$tmp459;
*(&local45) = $tmp460;
frost$core$String** $tmp461 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp462 = *$tmp461;
org$frostlang$frostc$ASTNode** $tmp463 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp464 = *$tmp463;
// line 235
org$frostlang$frostc$Position $tmp465 = *(&local45);
return $tmp465;
block95:;
frost$core$Int64 $tmp466 = (frost$core$Int64) {47};
frost$core$Bit $tmp467 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp466);
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block96; else goto block97;
block96:;
org$frostlang$frostc$Position* $tmp469 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp470 = *$tmp469;
*(&local46) = $tmp470;
org$frostlang$frostc$FixedArray** $tmp471 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp472 = *$tmp471;
org$frostlang$frostc$ASTNode** $tmp473 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp474 = *$tmp473;
// line 238
org$frostlang$frostc$Position $tmp475 = *(&local46);
return $tmp475;
block97:;
frost$core$Int64 $tmp476 = (frost$core$Int64) {49};
frost$core$Bit $tmp477 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp476);
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp479 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp480 = *$tmp479;
*(&local47) = $tmp480;
org$frostlang$frostc$expression$Unary$Operator* $tmp481 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 16);
org$frostlang$frostc$expression$Unary$Operator $tmp482 = *$tmp481;
org$frostlang$frostc$ASTNode** $tmp483 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp484 = *$tmp483;
// line 241
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
org$frostlang$frostc$ASTNode** $tmp491 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp492 = *$tmp491;
// line 244
org$frostlang$frostc$Position $tmp493 = *(&local48);
return $tmp493;
block101:;
frost$core$Int64 $tmp494 = (frost$core$Int64) {51};
frost$core$Bit $tmp495 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp494);
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block102; else goto block103;
block102:;
org$frostlang$frostc$Position* $tmp497 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp498 = *$tmp497;
*(&local49) = $tmp498;
org$frostlang$frostc$FixedArray** $tmp499 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp500 = *$tmp499;
org$frostlang$frostc$ASTNode** $tmp501 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp502 = *$tmp501;
// line 247
org$frostlang$frostc$Position $tmp503 = *(&local49);
return $tmp503;
block103:;
frost$core$Int64 $tmp504 = (frost$core$Int64) {52};
frost$core$Bit $tmp505 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp504);
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block104; else goto block105;
block104:;
org$frostlang$frostc$Position* $tmp507 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp508 = *$tmp507;
*(&local50) = $tmp508;
frost$core$String** $tmp509 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp510 = *$tmp509;
// line 250
org$frostlang$frostc$Position $tmp511 = *(&local50);
return $tmp511;
block105:;
frost$core$Int64 $tmp512 = (frost$core$Int64) {42};
frost$core$Bit $tmp513 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp512);
bool $tmp514 = $tmp513.value;
if ($tmp514) goto block106; else goto block107;
block106:;
org$frostlang$frostc$Position* $tmp515 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp516 = *$tmp515;
*(&local51) = $tmp516;
org$frostlang$frostc$FixedArray** $tmp517 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp518 = *$tmp517;
org$frostlang$frostc$ASTNode** $tmp519 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp520 = *$tmp519;
org$frostlang$frostc$FixedArray** $tmp521 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp522 = *$tmp521;
// line 253
org$frostlang$frostc$Position $tmp523 = *(&local51);
return $tmp523;
block107:;
frost$core$Int64 $tmp524 = (frost$core$Int64) {53};
frost$core$Bit $tmp525 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp524);
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block108; else goto block109;
block108:;
org$frostlang$frostc$Position* $tmp527 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp528 = *$tmp527;
*(&local52) = $tmp528;
org$frostlang$frostc$Variable$Kind* $tmp529 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp530 = *$tmp529;
org$frostlang$frostc$FixedArray** $tmp531 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp532 = *$tmp531;
// line 256
org$frostlang$frostc$Position $tmp533 = *(&local52);
return $tmp533;
block109:;
frost$core$Int64 $tmp534 = (frost$core$Int64) {54};
frost$core$Bit $tmp535 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp534);
bool $tmp536 = $tmp535.value;
if ($tmp536) goto block110; else goto block111;
block110:;
org$frostlang$frostc$Position* $tmp537 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp538 = *$tmp537;
*(&local53) = $tmp538;
org$frostlang$frostc$FixedArray** $tmp539 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp540 = *$tmp539;
org$frostlang$frostc$FixedArray** $tmp541 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp542 = *$tmp541;
// line 259
org$frostlang$frostc$Position $tmp543 = *(&local53);
return $tmp543;
block111:;
frost$core$Int64 $tmp544 = (frost$core$Int64) {55};
frost$core$Bit $tmp545 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp544);
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block112; else goto block113;
block112:;
org$frostlang$frostc$Position* $tmp547 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp548 = *$tmp547;
*(&local54) = $tmp548;
frost$core$String** $tmp549 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp550 = *$tmp549;
org$frostlang$frostc$ASTNode** $tmp551 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp552 = *$tmp551;
org$frostlang$frostc$FixedArray** $tmp553 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp554 = *$tmp553;
// line 262
org$frostlang$frostc$Position $tmp555 = *(&local54);
return $tmp555;
block113:;
// line 265
frost$core$Int64 $tmp556 = (frost$core$Int64) {265};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s557, $tmp556);
abort(); // unreachable
block1:;
goto block114;
block114:;

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
org$frostlang$frostc$FixedArray* local113 = NULL;
org$frostlang$frostc$ASTNode* local114 = NULL;
org$frostlang$frostc$FixedArray* local115 = NULL;
frost$core$MutableString* local116 = NULL;
frost$core$MutableString* local117 = NULL;
frost$core$MutableString* local118 = NULL;
frost$core$String* local119 = NULL;
frost$core$String* local120 = NULL;
org$frostlang$frostc$ASTNode* local121 = NULL;
org$frostlang$frostc$FixedArray* local122 = NULL;
org$frostlang$frostc$ASTNode* local123 = NULL;
org$frostlang$frostc$expression$Unary$Operator local124;
org$frostlang$frostc$ASTNode* local125 = NULL;
org$frostlang$frostc$ASTNode* local126 = NULL;
org$frostlang$frostc$FixedArray* local127 = NULL;
org$frostlang$frostc$ASTNode* local128 = NULL;
frost$core$String* local129 = NULL;
org$frostlang$frostc$Variable$Kind local130;
org$frostlang$frostc$FixedArray* local131 = NULL;
frost$core$MutableString* local132 = NULL;
org$frostlang$frostc$FixedArray* local133 = NULL;
org$frostlang$frostc$FixedArray* local134 = NULL;
frost$core$MutableString* local135 = NULL;
frost$core$String* local136 = NULL;
org$frostlang$frostc$ASTNode* local137 = NULL;
org$frostlang$frostc$ASTNode* local138 = NULL;
frost$core$String* local139 = NULL;
org$frostlang$frostc$ASTNode* local140 = NULL;
org$frostlang$frostc$FixedArray* local141 = NULL;
frost$core$MutableString* local142 = NULL;
org$frostlang$frostc$ASTNode* local143 = NULL;
// line 272
frost$core$Int64* $tmp558 = &param0->$rawValue;
frost$core$Int64 $tmp559 = *$tmp558;
frost$core$Int64 $tmp560 = (frost$core$Int64) {0};
frost$core$Bit $tmp561 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp560);
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp563 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp564 = *$tmp563;
frost$core$String** $tmp565 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp566 = *$tmp565;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
frost$core$String* $tmp567 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local0) = $tmp566;
frost$core$String** $tmp568 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp569 = *$tmp568;
org$frostlang$frostc$ASTNode** $tmp570 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp571 = *$tmp570;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
org$frostlang$frostc$ASTNode* $tmp572 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
*(&local1) = $tmp571;
// line 274
org$frostlang$frostc$ASTNode* $tmp573 = *(&local1);
frost$core$Bit $tmp574 = frost$core$Bit$init$builtin_bit($tmp573 != NULL);
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block4; else goto block5;
block4:;
// line 275
frost$core$String* $tmp576 = *(&local0);
frost$core$String* $tmp577 = frost$core$String$get_asString$R$frost$core$String($tmp576);
frost$core$String* $tmp578 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp577, &$s579);
org$frostlang$frostc$ASTNode* $tmp580 = *(&local1);
frost$core$String* $tmp581 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp578, ((frost$core$Object*) $tmp580));
frost$core$String* $tmp582 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp581, &$s583);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
org$frostlang$frostc$ASTNode* $tmp584 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp585 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
*(&local0) = ((frost$core$String*) NULL);
return $tmp582;
block5:;
// line 277
frost$core$String* $tmp586 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
org$frostlang$frostc$ASTNode* $tmp587 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp588 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
*(&local0) = ((frost$core$String*) NULL);
return $tmp586;
block3:;
frost$core$Int64 $tmp589 = (frost$core$Int64) {1};
frost$core$Bit $tmp590 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp589);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp592 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp593 = *$tmp592;
org$frostlang$frostc$FixedArray** $tmp594 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp595 = *$tmp594;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
org$frostlang$frostc$FixedArray* $tmp596 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
*(&local2) = $tmp595;
// line 280
org$frostlang$frostc$FixedArray* $tmp597 = *(&local2);
$fn599 $tmp598 = ($fn599) ((frost$core$Object*) $tmp597)->$class->vtable[0];
frost$core$String* $tmp600 = $tmp598(((frost$core$Object*) $tmp597));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
org$frostlang$frostc$FixedArray* $tmp601 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp600;
block7:;
frost$core$Int64 $tmp602 = (frost$core$Int64) {2};
frost$core$Bit $tmp603 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp602);
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp605 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp606 = *$tmp605;
org$frostlang$frostc$ASTNode** $tmp607 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp608 = *$tmp607;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
org$frostlang$frostc$ASTNode* $tmp609 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
*(&local3) = $tmp608;
org$frostlang$frostc$ASTNode** $tmp610 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp611 = *$tmp610;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
org$frostlang$frostc$ASTNode* $tmp612 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local4) = $tmp611;
// line 283
org$frostlang$frostc$ASTNode* $tmp613 = *(&local4);
frost$core$Bit $tmp614 = frost$core$Bit$init$builtin_bit($tmp613 == NULL);
bool $tmp615 = $tmp614.value;
if ($tmp615) goto block10; else goto block11;
block10:;
// line 284
org$frostlang$frostc$ASTNode* $tmp616 = *(&local3);
frost$core$String* $tmp617 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s618, ((frost$core$Object*) $tmp616));
frost$core$String* $tmp619 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp617, &$s620);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
org$frostlang$frostc$ASTNode* $tmp621 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp622 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp619;
block11:;
// line 286
org$frostlang$frostc$ASTNode* $tmp623 = *(&local3);
frost$core$String* $tmp624 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s625, ((frost$core$Object*) $tmp623));
frost$core$String* $tmp626 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp624, &$s627);
org$frostlang$frostc$ASTNode* $tmp628 = *(&local4);
frost$core$String* $tmp629 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp626, ((frost$core$Object*) $tmp628));
frost$core$String* $tmp630 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp629, &$s631);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
org$frostlang$frostc$ASTNode* $tmp632 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp633 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp630;
block9:;
frost$core$Int64 $tmp634 = (frost$core$Int64) {3};
frost$core$Bit $tmp635 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp634);
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp637 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp638 = *$tmp637;
org$frostlang$frostc$ASTNode** $tmp639 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp640 = *$tmp639;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
org$frostlang$frostc$ASTNode* $tmp641 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
*(&local5) = $tmp640;
// line 289
org$frostlang$frostc$ASTNode* $tmp642 = *(&local5);
frost$core$String* $tmp643 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s644, ((frost$core$Object*) $tmp642));
frost$core$String* $tmp645 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp643, &$s646);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
org$frostlang$frostc$ASTNode* $tmp647 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp645;
block13:;
frost$core$Int64 $tmp648 = (frost$core$Int64) {4};
frost$core$Bit $tmp649 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp648);
bool $tmp650 = $tmp649.value;
if ($tmp650) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp651 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp652 = *$tmp651;
// line 292
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s653));
return &$s654;
block15:;
frost$core$Int64 $tmp655 = (frost$core$Int64) {5};
frost$core$Bit $tmp656 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp655);
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp658 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp659 = *$tmp658;
org$frostlang$frostc$ASTNode** $tmp660 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp661 = *$tmp660;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
org$frostlang$frostc$ASTNode* $tmp662 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
*(&local6) = $tmp661;
org$frostlang$frostc$expression$Binary$Operator* $tmp663 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp664 = *$tmp663;
*(&local7) = $tmp664;
org$frostlang$frostc$ASTNode** $tmp665 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp666 = *$tmp665;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
org$frostlang$frostc$ASTNode* $tmp667 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
*(&local8) = $tmp666;
// line 295
org$frostlang$frostc$expression$Binary$Operator $tmp668 = *(&local7);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp669;
$tmp669 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp669->value = $tmp668;
frost$core$Int64 $tmp670 = (frost$core$Int64) {20};
org$frostlang$frostc$expression$Binary$Operator $tmp671 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp670);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp672;
$tmp672 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp672->value = $tmp671;
ITable* $tmp673 = ((frost$core$Equatable*) $tmp669)->$class->itable;
while ($tmp673->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp673 = $tmp673->next;
}
$fn675 $tmp674 = $tmp673->methods[0];
frost$core$Bit $tmp676 = $tmp674(((frost$core$Equatable*) $tmp669), ((frost$core$Equatable*) $tmp672));
bool $tmp677 = $tmp676.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp672)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp669)));
if ($tmp677) goto block18; else goto block19;
block18:;
// line 296
org$frostlang$frostc$ASTNode* $tmp678 = *(&local6);
$fn680 $tmp679 = ($fn680) $tmp678->$class->vtable[0];
frost$core$String* $tmp681 = $tmp679($tmp678);
frost$core$String* $tmp682 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp681, &$s683);
org$frostlang$frostc$ASTNode* $tmp684 = *(&local8);
frost$core$String* $tmp685 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp682, ((frost$core$Object*) $tmp684));
frost$core$String* $tmp686 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp685, &$s687);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
org$frostlang$frostc$ASTNode* $tmp688 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp689 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp686;
block19:;
// line 298
org$frostlang$frostc$ASTNode* $tmp690 = *(&local6);
frost$core$String* $tmp691 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s692, ((frost$core$Object*) $tmp690));
frost$core$String* $tmp693 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp691, &$s694);
org$frostlang$frostc$expression$Binary$Operator $tmp695 = *(&local7);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp696;
$tmp696 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp696->value = $tmp695;
frost$core$String* $tmp697 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp693, ((frost$core$Object*) $tmp696));
frost$core$String* $tmp698 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp697, &$s699);
org$frostlang$frostc$ASTNode* $tmp700 = *(&local8);
frost$core$String* $tmp701 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp698, ((frost$core$Object*) $tmp700));
frost$core$String* $tmp702 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp701, &$s703);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
org$frostlang$frostc$ASTNode* $tmp704 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp705 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp702;
block17:;
frost$core$Int64 $tmp706 = (frost$core$Int64) {6};
frost$core$Bit $tmp707 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp706);
bool $tmp708 = $tmp707.value;
if ($tmp708) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp709 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp710 = *$tmp709;
frost$core$Bit* $tmp711 = (frost$core$Bit*) (param0->$data + 16);
frost$core$Bit $tmp712 = *$tmp711;
*(&local9) = $tmp712;
// line 301
frost$core$Bit $tmp713 = *(&local9);
frost$core$Bit$wrapper* $tmp714;
$tmp714 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp714->value = $tmp713;
$fn716 $tmp715 = ($fn716) ((frost$core$Object*) $tmp714)->$class->vtable[0];
frost$core$String* $tmp717 = $tmp715(((frost$core$Object*) $tmp714));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
return $tmp717;
block21:;
frost$core$Int64 $tmp718 = (frost$core$Int64) {7};
frost$core$Bit $tmp719 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp718);
bool $tmp720 = $tmp719.value;
if ($tmp720) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp721 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp722 = *$tmp721;
org$frostlang$frostc$FixedArray** $tmp723 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp724 = *$tmp723;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
org$frostlang$frostc$FixedArray* $tmp725 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
*(&local10) = $tmp724;
// line 304
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp726 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp726, &$s727);
*(&local11) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
frost$core$MutableString* $tmp728 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
*(&local11) = $tmp726;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
// line 305
org$frostlang$frostc$FixedArray* $tmp729 = *(&local10);
ITable* $tmp730 = ((frost$collections$Iterable*) $tmp729)->$class->itable;
while ($tmp730->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp730 = $tmp730->next;
}
$fn732 $tmp731 = $tmp730->methods[0];
frost$collections$Iterator* $tmp733 = $tmp731(((frost$collections$Iterable*) $tmp729));
goto block24;
block24:;
ITable* $tmp734 = $tmp733->$class->itable;
while ($tmp734->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp734 = $tmp734->next;
}
$fn736 $tmp735 = $tmp734->methods[0];
frost$core$Bit $tmp737 = $tmp735($tmp733);
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block26; else goto block25;
block25:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp739 = $tmp733->$class->itable;
while ($tmp739->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp739 = $tmp739->next;
}
$fn741 $tmp740 = $tmp739->methods[1];
frost$core$Object* $tmp742 = $tmp740($tmp733);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp742)));
org$frostlang$frostc$ASTNode* $tmp743 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp742);
// line 306
frost$core$MutableString* $tmp744 = *(&local11);
org$frostlang$frostc$ASTNode* $tmp745 = *(&local12);
frost$core$String* $tmp746 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp745), &$s747);
frost$core$MutableString$append$frost$core$String($tmp744, $tmp746);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$Frost$unref$frost$core$Object$Q($tmp742);
org$frostlang$frostc$ASTNode* $tmp748 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block24;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
// line 308
frost$core$MutableString* $tmp749 = *(&local11);
frost$core$MutableString$append$frost$core$String($tmp749, &$s750);
// line 309
frost$core$MutableString* $tmp751 = *(&local11);
frost$core$String* $tmp752 = frost$core$MutableString$finish$R$frost$core$String($tmp751);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
frost$core$MutableString* $tmp753 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local11) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp754 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp752;
block23:;
frost$core$Int64 $tmp755 = (frost$core$Int64) {8};
frost$core$Bit $tmp756 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp755);
bool $tmp757 = $tmp756.value;
if ($tmp757) goto block27; else goto block28;
block27:;
org$frostlang$frostc$Position* $tmp758 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp759 = *$tmp758;
frost$core$String** $tmp760 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp761 = *$tmp760;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$core$String* $tmp762 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
*(&local13) = $tmp761;
// line 312
frost$core$String* $tmp763 = *(&local13);
frost$core$Bit $tmp764 = frost$core$Bit$init$builtin_bit($tmp763 != NULL);
bool $tmp765 = $tmp764.value;
if ($tmp765) goto block29; else goto block30;
block29:;
// line 313
frost$core$String* $tmp766 = *(&local13);
frost$core$String* $tmp767 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s768, $tmp766);
frost$core$String* $tmp769 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp767, &$s770);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
frost$core$String* $tmp771 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
*(&local13) = ((frost$core$String*) NULL);
return $tmp769;
block30:;
// line 315
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s772));
frost$core$String* $tmp773 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
*(&local13) = ((frost$core$String*) NULL);
return &$s774;
block28:;
frost$core$Int64 $tmp775 = (frost$core$Int64) {9};
frost$core$Bit $tmp776 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp775);
bool $tmp777 = $tmp776.value;
if ($tmp777) goto block31; else goto block32;
block31:;
org$frostlang$frostc$Position* $tmp778 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp779 = *$tmp778;
org$frostlang$frostc$ASTNode** $tmp780 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp781 = *$tmp780;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
org$frostlang$frostc$ASTNode* $tmp782 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
*(&local14) = $tmp781;
org$frostlang$frostc$FixedArray** $tmp783 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp784 = *$tmp783;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
org$frostlang$frostc$FixedArray* $tmp785 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
*(&local15) = $tmp784;
// line 318
org$frostlang$frostc$ASTNode* $tmp786 = *(&local14);
$fn788 $tmp787 = ($fn788) $tmp786->$class->vtable[0];
frost$core$String* $tmp789 = $tmp787($tmp786);
frost$core$String* $tmp790 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp789, &$s791);
org$frostlang$frostc$FixedArray* $tmp792 = *(&local15);
ITable* $tmp793 = ((frost$collections$CollectionView*) $tmp792)->$class->itable;
while ($tmp793->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp793 = $tmp793->next;
}
$fn795 $tmp794 = $tmp793->methods[1];
frost$core$String* $tmp796 = $tmp794(((frost$collections$CollectionView*) $tmp792));
frost$core$String* $tmp797 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp790, $tmp796);
frost$core$String* $tmp798 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp797, &$s799);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
org$frostlang$frostc$FixedArray* $tmp800 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp801 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp798;
block32:;
frost$core$Int64 $tmp802 = (frost$core$Int64) {10};
frost$core$Bit $tmp803 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp802);
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Position* $tmp805 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp806 = *$tmp805;
org$frostlang$frostc$ASTNode** $tmp807 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp808 = *$tmp807;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
org$frostlang$frostc$ASTNode* $tmp809 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
*(&local16) = $tmp808;
frost$core$String** $tmp810 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp811 = *$tmp810;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
frost$core$String* $tmp812 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
*(&local17) = $tmp811;
org$frostlang$frostc$FixedArray** $tmp813 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp814 = *$tmp813;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
org$frostlang$frostc$FixedArray* $tmp815 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
*(&local18) = $tmp814;
// line 321
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp816 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp816);
*(&local19) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
frost$core$MutableString* $tmp817 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local19) = $tmp816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
// line 322
org$frostlang$frostc$ASTNode* $tmp818 = *(&local16);
frost$core$Bit $tmp819 = frost$core$Bit$init$builtin_bit($tmp818 != NULL);
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block35; else goto block36;
block35:;
// line 323
frost$core$MutableString* $tmp821 = *(&local19);
org$frostlang$frostc$ASTNode* $tmp822 = *(&local16);
frost$core$String* $tmp823 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp822), &$s824);
frost$core$MutableString$append$frost$core$String($tmp821, $tmp823);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
goto block36;
block36:;
// line 325
frost$core$MutableString* $tmp825 = *(&local19);
frost$core$String* $tmp826 = *(&local17);
frost$core$String* $tmp827 = frost$core$String$get_asString$R$frost$core$String($tmp826);
frost$core$String* $tmp828 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp827, &$s829);
org$frostlang$frostc$FixedArray* $tmp830 = *(&local18);
ITable* $tmp831 = ((frost$collections$CollectionView*) $tmp830)->$class->itable;
while ($tmp831->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp831 = $tmp831->next;
}
$fn833 $tmp832 = $tmp831->methods[1];
frost$core$String* $tmp834 = $tmp832(((frost$collections$CollectionView*) $tmp830));
frost$core$String* $tmp835 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp828, $tmp834);
frost$core$String* $tmp836 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp835, &$s837);
frost$core$MutableString$append$frost$core$String($tmp825, $tmp836);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
// line 326
frost$core$MutableString* $tmp838 = *(&local19);
frost$core$String* $tmp839 = frost$core$MutableString$finish$R$frost$core$String($tmp838);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$MutableString* $tmp840 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
*(&local19) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp841 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp842 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp843 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp839;
block34:;
frost$core$Int64 $tmp844 = (frost$core$Int64) {11};
frost$core$Bit $tmp845 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp844);
bool $tmp846 = $tmp845.value;
if ($tmp846) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Position* $tmp847 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp848 = *$tmp847;
org$frostlang$frostc$ASTNode** $tmp849 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp850 = *$tmp849;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
org$frostlang$frostc$ASTNode* $tmp851 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
*(&local20) = $tmp850;
org$frostlang$frostc$ChoiceCase** $tmp852 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp853 = *$tmp852;
*(&local21) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
org$frostlang$frostc$ChoiceCase* $tmp854 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
*(&local21) = $tmp853;
frost$core$Int64* $tmp855 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp856 = *$tmp855;
*(&local22) = $tmp856;
// line 329
org$frostlang$frostc$ASTNode* $tmp857 = *(&local20);
$fn859 $tmp858 = ($fn859) $tmp857->$class->vtable[0];
frost$core$String* $tmp860 = $tmp858($tmp857);
frost$core$String* $tmp861 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp860, &$s862);
org$frostlang$frostc$ChoiceCase* $tmp863 = *(&local21);
frost$core$String* $tmp864 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp861, ((frost$core$Object*) $tmp863));
frost$core$String* $tmp865 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp864, &$s866);
frost$core$Int64 $tmp867 = *(&local22);
frost$core$Int64$wrapper* $tmp868;
$tmp868 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp868->value = $tmp867;
frost$core$String* $tmp869 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp865, ((frost$core$Object*) $tmp868));
frost$core$String* $tmp870 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp869, &$s871);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
org$frostlang$frostc$ChoiceCase* $tmp872 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local21) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp873 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp870;
block38:;
frost$core$Int64 $tmp874 = (frost$core$Int64) {12};
frost$core$Bit $tmp875 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp874);
bool $tmp876 = $tmp875.value;
if ($tmp876) goto block39; else goto block40;
block39:;
org$frostlang$frostc$Position* $tmp877 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp878 = *$tmp877;
org$frostlang$frostc$ASTNode** $tmp879 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp880 = *$tmp879;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
org$frostlang$frostc$ASTNode* $tmp881 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
*(&local23) = $tmp880;
org$frostlang$frostc$FixedArray** $tmp882 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp883 = *$tmp882;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
org$frostlang$frostc$FixedArray* $tmp884 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
*(&local24) = $tmp883;
org$frostlang$frostc$ClassDecl$Kind* $tmp885 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp886 = *$tmp885;
*(&local25) = $tmp886;
frost$core$String** $tmp887 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp888 = *$tmp887;
*(&local26) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
frost$core$String* $tmp889 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
*(&local26) = $tmp888;
org$frostlang$frostc$FixedArray** $tmp890 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp891 = *$tmp890;
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
org$frostlang$frostc$FixedArray* $tmp892 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
*(&local27) = $tmp891;
org$frostlang$frostc$FixedArray** $tmp893 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp894 = *$tmp893;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
org$frostlang$frostc$FixedArray* $tmp895 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
*(&local28) = $tmp894;
org$frostlang$frostc$FixedArray** $tmp896 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp897 = *$tmp896;
*(&local29) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
org$frostlang$frostc$FixedArray* $tmp898 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
*(&local29) = $tmp897;
// line 332
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp899 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp899);
*(&local30) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
frost$core$MutableString* $tmp900 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
*(&local30) = $tmp899;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
// line 333
org$frostlang$frostc$ASTNode* $tmp901 = *(&local23);
frost$core$Bit $tmp902 = frost$core$Bit$init$builtin_bit($tmp901 != NULL);
bool $tmp903 = $tmp902.value;
if ($tmp903) goto block41; else goto block42;
block41:;
// line 334
frost$core$MutableString* $tmp904 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp905 = *(&local23);
frost$core$String* $tmp906 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp905), &$s907);
frost$core$MutableString$append$frost$core$String($tmp904, $tmp906);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
goto block42;
block42:;
// line 336
org$frostlang$frostc$FixedArray* $tmp908 = *(&local24);
ITable* $tmp909 = ((frost$collections$Iterable*) $tmp908)->$class->itable;
while ($tmp909->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp909 = $tmp909->next;
}
$fn911 $tmp910 = $tmp909->methods[0];
frost$collections$Iterator* $tmp912 = $tmp910(((frost$collections$Iterable*) $tmp908));
goto block43;
block43:;
ITable* $tmp913 = $tmp912->$class->itable;
while ($tmp913->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp913 = $tmp913->next;
}
$fn915 $tmp914 = $tmp913->methods[0];
frost$core$Bit $tmp916 = $tmp914($tmp912);
bool $tmp917 = $tmp916.value;
if ($tmp917) goto block45; else goto block44;
block44:;
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp918 = $tmp912->$class->itable;
while ($tmp918->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp918 = $tmp918->next;
}
$fn920 $tmp919 = $tmp918->methods[1];
frost$core$Object* $tmp921 = $tmp919($tmp912);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp921)));
org$frostlang$frostc$ASTNode* $tmp922 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
*(&local31) = ((org$frostlang$frostc$ASTNode*) $tmp921);
// line 337
frost$core$MutableString* $tmp923 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp924 = *(&local31);
frost$core$String* $tmp925 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp924), &$s926);
frost$core$MutableString$append$frost$core$String($tmp923, $tmp925);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
frost$core$Frost$unref$frost$core$Object$Q($tmp921);
org$frostlang$frostc$ASTNode* $tmp927 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block43;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
// line 339
org$frostlang$frostc$ClassDecl$Kind $tmp928 = *(&local25);
frost$core$Int64 $tmp929 = $tmp928.$rawValue;
frost$core$Int64 $tmp930 = (frost$core$Int64) {0};
frost$core$Bit $tmp931 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp929, $tmp930);
bool $tmp932 = $tmp931.value;
if ($tmp932) goto block47; else goto block48;
block47:;
// line 340
frost$core$MutableString* $tmp933 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp933, &$s934);
goto block46;
block48:;
frost$core$Int64 $tmp935 = (frost$core$Int64) {1};
frost$core$Bit $tmp936 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp929, $tmp935);
bool $tmp937 = $tmp936.value;
if ($tmp937) goto block49; else goto block50;
block49:;
// line 341
frost$core$MutableString* $tmp938 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp938, &$s939);
goto block46;
block50:;
frost$core$Int64 $tmp940 = (frost$core$Int64) {2};
frost$core$Bit $tmp941 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp929, $tmp940);
bool $tmp942 = $tmp941.value;
if ($tmp942) goto block51; else goto block46;
block51:;
// line 342
frost$core$MutableString* $tmp943 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp943, &$s944);
goto block46;
block46:;
// line 344
frost$core$MutableString* $tmp945 = *(&local30);
frost$core$String* $tmp946 = *(&local26);
frost$core$MutableString$append$frost$core$String($tmp945, $tmp946);
// line 345
org$frostlang$frostc$FixedArray* $tmp947 = *(&local27);
frost$core$Bit $tmp948 = frost$core$Bit$init$builtin_bit($tmp947 != NULL);
bool $tmp949 = $tmp948.value;
if ($tmp949) goto block52; else goto block53;
block52:;
// line 346
frost$core$MutableString* $tmp950 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp951 = *(&local27);
ITable* $tmp952 = ((frost$collections$CollectionView*) $tmp951)->$class->itable;
while ($tmp952->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp952 = $tmp952->next;
}
$fn954 $tmp953 = $tmp952->methods[1];
frost$core$String* $tmp955 = $tmp953(((frost$collections$CollectionView*) $tmp951));
frost$core$String* $tmp956 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s957, $tmp955);
frost$core$String* $tmp958 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp956, &$s959);
frost$core$MutableString$append$frost$core$String($tmp950, $tmp958);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
goto block53;
block53:;
// line 348
org$frostlang$frostc$FixedArray* $tmp960 = *(&local28);
frost$core$Bit $tmp961 = frost$core$Bit$init$builtin_bit($tmp960 != NULL);
bool $tmp962 = $tmp961.value;
if ($tmp962) goto block54; else goto block55;
block54:;
// line 349
frost$core$MutableString* $tmp963 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp964 = *(&local28);
ITable* $tmp965 = ((frost$collections$CollectionView*) $tmp964)->$class->itable;
while ($tmp965->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp965 = $tmp965->next;
}
$fn967 $tmp966 = $tmp965->methods[1];
frost$core$String* $tmp968 = $tmp966(((frost$collections$CollectionView*) $tmp964));
frost$core$String* $tmp969 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s970, $tmp968);
frost$core$String* $tmp971 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp969, &$s972);
frost$core$MutableString$append$frost$core$String($tmp963, $tmp971);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
goto block55;
block55:;
// line 351
frost$core$MutableString* $tmp973 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp973, &$s974);
// line 352
org$frostlang$frostc$FixedArray* $tmp975 = *(&local29);
ITable* $tmp976 = ((frost$collections$Iterable*) $tmp975)->$class->itable;
while ($tmp976->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp976 = $tmp976->next;
}
$fn978 $tmp977 = $tmp976->methods[0];
frost$collections$Iterator* $tmp979 = $tmp977(((frost$collections$Iterable*) $tmp975));
goto block56;
block56:;
ITable* $tmp980 = $tmp979->$class->itable;
while ($tmp980->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp980 = $tmp980->next;
}
$fn982 $tmp981 = $tmp980->methods[0];
frost$core$Bit $tmp983 = $tmp981($tmp979);
bool $tmp984 = $tmp983.value;
if ($tmp984) goto block58; else goto block57;
block57:;
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp985 = $tmp979->$class->itable;
while ($tmp985->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp985 = $tmp985->next;
}
$fn987 $tmp986 = $tmp985->methods[1];
frost$core$Object* $tmp988 = $tmp986($tmp979);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp988)));
org$frostlang$frostc$ASTNode* $tmp989 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
*(&local32) = ((org$frostlang$frostc$ASTNode*) $tmp988);
// line 353
frost$core$MutableString* $tmp990 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp991 = *(&local32);
frost$core$String* $tmp992 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp991), &$s993);
frost$core$MutableString$append$frost$core$String($tmp990, $tmp992);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
frost$core$Frost$unref$frost$core$Object$Q($tmp988);
org$frostlang$frostc$ASTNode* $tmp994 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block56;
block58:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
// line 355
frost$core$MutableString* $tmp995 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp995, &$s996);
// line 356
frost$core$MutableString* $tmp997 = *(&local30);
frost$core$String* $tmp998 = frost$core$MutableString$finish$R$frost$core$String($tmp997);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
frost$core$MutableString* $tmp999 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
*(&local30) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1000 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
*(&local29) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1001 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1002 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1003 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
*(&local26) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1004 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1005 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp998;
block40:;
frost$core$Int64 $tmp1006 = (frost$core$Int64) {13};
frost$core$Bit $tmp1007 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1006);
bool $tmp1008 = $tmp1007.value;
if ($tmp1008) goto block59; else goto block60;
block59:;
org$frostlang$frostc$Position* $tmp1009 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1010 = *$tmp1009;
frost$core$String** $tmp1011 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1012 = *$tmp1011;
*(&local33) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
frost$core$String* $tmp1013 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
*(&local33) = $tmp1012;
// line 359
frost$core$String* $tmp1014 = *(&local33);
frost$core$Bit $tmp1015 = frost$core$Bit$init$builtin_bit($tmp1014 != NULL);
bool $tmp1016 = $tmp1015.value;
if ($tmp1016) goto block61; else goto block62;
block61:;
// line 360
frost$core$String* $tmp1017 = *(&local33);
frost$core$String* $tmp1018 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1019, $tmp1017);
frost$core$String* $tmp1020 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1018, &$s1021);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
frost$core$String* $tmp1022 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
*(&local33) = ((frost$core$String*) NULL);
return $tmp1020;
block62:;
// line 362
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1023));
frost$core$String* $tmp1024 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
*(&local33) = ((frost$core$String*) NULL);
return &$s1025;
block60:;
frost$core$Int64 $tmp1026 = (frost$core$Int64) {14};
frost$core$Bit $tmp1027 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1026);
bool $tmp1028 = $tmp1027.value;
if ($tmp1028) goto block63; else goto block64;
block63:;
org$frostlang$frostc$Position* $tmp1029 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1030 = *$tmp1029;
org$frostlang$frostc$ASTNode** $tmp1031 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1032 = *$tmp1031;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
org$frostlang$frostc$ASTNode* $tmp1033 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
*(&local34) = $tmp1032;
org$frostlang$frostc$ASTNode** $tmp1034 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1035 = *$tmp1034;
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
org$frostlang$frostc$ASTNode* $tmp1036 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
*(&local35) = $tmp1035;
// line 365
org$frostlang$frostc$ASTNode* $tmp1037 = *(&local35);
frost$core$Bit $tmp1038 = frost$core$Bit$init$builtin_bit($tmp1037 != NULL);
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block65; else goto block66;
block65:;
// line 366
org$frostlang$frostc$ASTNode* $tmp1040 = *(&local34);
$fn1042 $tmp1041 = ($fn1042) $tmp1040->$class->vtable[0];
frost$core$String* $tmp1043 = $tmp1041($tmp1040);
frost$core$String* $tmp1044 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1043, &$s1045);
org$frostlang$frostc$ASTNode* $tmp1046 = *(&local35);
frost$core$String* $tmp1047 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1044, ((frost$core$Object*) $tmp1046));
frost$core$String* $tmp1048 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1047, &$s1049);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
org$frostlang$frostc$ASTNode* $tmp1050 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1051 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1048;
block66:;
// line 368
org$frostlang$frostc$ASTNode* $tmp1052 = *(&local34);
$fn1054 $tmp1053 = ($fn1054) ((frost$core$Object*) $tmp1052)->$class->vtable[0];
frost$core$String* $tmp1055 = $tmp1053(((frost$core$Object*) $tmp1052));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
org$frostlang$frostc$ASTNode* $tmp1056 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1057 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1055;
block64:;
frost$core$Int64 $tmp1058 = (frost$core$Int64) {15};
frost$core$Bit $tmp1059 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1058);
bool $tmp1060 = $tmp1059.value;
if ($tmp1060) goto block67; else goto block68;
block67:;
org$frostlang$frostc$Position* $tmp1061 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1062 = *$tmp1061;
frost$core$String** $tmp1063 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1064 = *$tmp1063;
*(&local36) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$core$String* $tmp1065 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
*(&local36) = $tmp1064;
org$frostlang$frostc$FixedArray** $tmp1066 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1067 = *$tmp1066;
*(&local37) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
org$frostlang$frostc$FixedArray* $tmp1068 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
*(&local37) = $tmp1067;
org$frostlang$frostc$ASTNode** $tmp1069 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1070 = *$tmp1069;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
org$frostlang$frostc$ASTNode* $tmp1071 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
*(&local38) = $tmp1070;
// line 371
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1072 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1072);
*(&local39) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
frost$core$MutableString* $tmp1073 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
*(&local39) = $tmp1072;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
// line 372
frost$core$String* $tmp1074 = *(&local36);
frost$core$Bit $tmp1075 = frost$core$Bit$init$builtin_bit($tmp1074 != NULL);
bool $tmp1076 = $tmp1075.value;
if ($tmp1076) goto block69; else goto block70;
block69:;
// line 373
frost$core$MutableString* $tmp1077 = *(&local39);
frost$core$String* $tmp1078 = *(&local36);
frost$core$String* $tmp1079 = frost$core$String$get_asString$R$frost$core$String($tmp1078);
frost$core$String* $tmp1080 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1079, &$s1081);
frost$core$MutableString$append$frost$core$String($tmp1077, $tmp1080);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
goto block70;
block70:;
// line 375
frost$core$MutableString* $tmp1082 = *(&local39);
frost$core$MutableString$append$frost$core$String($tmp1082, &$s1083);
// line 376
org$frostlang$frostc$FixedArray* $tmp1084 = *(&local37);
ITable* $tmp1085 = ((frost$collections$Iterable*) $tmp1084)->$class->itable;
while ($tmp1085->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1085 = $tmp1085->next;
}
$fn1087 $tmp1086 = $tmp1085->methods[0];
frost$collections$Iterator* $tmp1088 = $tmp1086(((frost$collections$Iterable*) $tmp1084));
goto block71;
block71:;
ITable* $tmp1089 = $tmp1088->$class->itable;
while ($tmp1089->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1089 = $tmp1089->next;
}
$fn1091 $tmp1090 = $tmp1089->methods[0];
frost$core$Bit $tmp1092 = $tmp1090($tmp1088);
bool $tmp1093 = $tmp1092.value;
if ($tmp1093) goto block73; else goto block72;
block72:;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1094 = $tmp1088->$class->itable;
while ($tmp1094->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1094 = $tmp1094->next;
}
$fn1096 $tmp1095 = $tmp1094->methods[1];
frost$core$Object* $tmp1097 = $tmp1095($tmp1088);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1097)));
org$frostlang$frostc$ASTNode* $tmp1098 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
*(&local40) = ((org$frostlang$frostc$ASTNode*) $tmp1097);
// line 377
frost$core$MutableString* $tmp1099 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp1100 = *(&local40);
frost$core$String* $tmp1101 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1100), &$s1102);
frost$core$MutableString$append$frost$core$String($tmp1099, $tmp1101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
frost$core$Frost$unref$frost$core$Object$Q($tmp1097);
org$frostlang$frostc$ASTNode* $tmp1103 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block71;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
// line 379
frost$core$MutableString* $tmp1104 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp1105 = *(&local38);
frost$core$String* $tmp1106 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1107, ((frost$core$Object*) $tmp1105));
frost$core$String* $tmp1108 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1106, &$s1109);
frost$core$MutableString$append$frost$core$String($tmp1104, $tmp1108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
// line 380
frost$core$MutableString* $tmp1110 = *(&local39);
frost$core$String* $tmp1111 = frost$core$MutableString$finish$R$frost$core$String($tmp1110);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1111));
frost$core$MutableString* $tmp1112 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
*(&local39) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1113 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1114 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
*(&local37) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1115 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
*(&local36) = ((frost$core$String*) NULL);
return $tmp1111;
block68:;
frost$core$Int64 $tmp1116 = (frost$core$Int64) {16};
frost$core$Bit $tmp1117 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1116);
bool $tmp1118 = $tmp1117.value;
if ($tmp1118) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp1119 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1120 = *$tmp1119;
org$frostlang$frostc$ASTNode** $tmp1121 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1122 = *$tmp1121;
*(&local41) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
org$frostlang$frostc$ASTNode* $tmp1123 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
*(&local41) = $tmp1122;
frost$core$String** $tmp1124 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1125 = *$tmp1124;
*(&local42) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
frost$core$String* $tmp1126 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
*(&local42) = $tmp1125;
// line 383
org$frostlang$frostc$ASTNode* $tmp1127 = *(&local41);
$fn1129 $tmp1128 = ($fn1129) $tmp1127->$class->vtable[0];
frost$core$String* $tmp1130 = $tmp1128($tmp1127);
frost$core$String* $tmp1131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1130, &$s1132);
frost$core$String* $tmp1133 = *(&local42);
frost$core$String* $tmp1134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1131, $tmp1133);
frost$core$String* $tmp1135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1134, &$s1136);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
frost$core$String* $tmp1137 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
*(&local42) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1138 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
*(&local41) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1135;
block75:;
frost$core$Int64 $tmp1139 = (frost$core$Int64) {17};
frost$core$Bit $tmp1140 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1139);
bool $tmp1141 = $tmp1140.value;
if ($tmp1141) goto block76; else goto block77;
block76:;
org$frostlang$frostc$Position* $tmp1142 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1143 = *$tmp1142;
org$frostlang$frostc$ASTNode** $tmp1144 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1145 = *$tmp1144;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
org$frostlang$frostc$ASTNode* $tmp1146 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
*(&local43) = $tmp1145;
frost$core$String** $tmp1147 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1148 = *$tmp1147;
*(&local44) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
frost$core$String* $tmp1149 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
*(&local44) = $tmp1148;
org$frostlang$frostc$FixedArray** $tmp1150 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1151 = *$tmp1150;
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
org$frostlang$frostc$FixedArray* $tmp1152 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
*(&local45) = $tmp1151;
// line 386
org$frostlang$frostc$ASTNode* $tmp1153 = *(&local43);
$fn1155 $tmp1154 = ($fn1155) $tmp1153->$class->vtable[0];
frost$core$String* $tmp1156 = $tmp1154($tmp1153);
frost$core$String* $tmp1157 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1156, &$s1158);
frost$core$String* $tmp1159 = *(&local44);
frost$core$String* $tmp1160 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1157, $tmp1159);
frost$core$String* $tmp1161 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1160, &$s1162);
org$frostlang$frostc$FixedArray* $tmp1163 = *(&local45);
ITable* $tmp1164 = ((frost$collections$CollectionView*) $tmp1163)->$class->itable;
while ($tmp1164->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1164 = $tmp1164->next;
}
$fn1166 $tmp1165 = $tmp1164->methods[2];
frost$core$String* $tmp1167 = $tmp1165(((frost$collections$CollectionView*) $tmp1163), &$s1168);
frost$core$String* $tmp1169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1161, $tmp1167);
frost$core$String* $tmp1170 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1169, &$s1171);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
org$frostlang$frostc$FixedArray* $tmp1172 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1173 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
*(&local44) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1174 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1170;
block77:;
frost$core$Int64 $tmp1175 = (frost$core$Int64) {18};
frost$core$Bit $tmp1176 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1175);
bool $tmp1177 = $tmp1176.value;
if ($tmp1177) goto block78; else goto block79;
block78:;
org$frostlang$frostc$Position* $tmp1178 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1179 = *$tmp1178;
org$frostlang$frostc$ASTNode** $tmp1180 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1181 = *$tmp1180;
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
org$frostlang$frostc$ASTNode* $tmp1182 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
*(&local46) = $tmp1181;
org$frostlang$frostc$FixedArray** $tmp1183 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1184 = *$tmp1183;
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
org$frostlang$frostc$FixedArray* $tmp1185 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
*(&local47) = $tmp1184;
org$frostlang$frostc$ASTNode** $tmp1186 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1187 = *$tmp1186;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
org$frostlang$frostc$ASTNode* $tmp1188 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
*(&local48) = $tmp1187;
// line 389
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1189 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1189);
*(&local49) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
frost$core$MutableString* $tmp1190 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
*(&local49) = $tmp1189;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
// line 390
org$frostlang$frostc$ASTNode* $tmp1191 = *(&local46);
frost$core$Bit $tmp1192 = frost$core$Bit$init$builtin_bit($tmp1191 != NULL);
bool $tmp1193 = $tmp1192.value;
if ($tmp1193) goto block80; else goto block81;
block80:;
// line 391
frost$core$MutableString* $tmp1194 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1195 = *(&local46);
frost$core$String* $tmp1196 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1195), &$s1197);
frost$core$MutableString$append$frost$core$String($tmp1194, $tmp1196);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
goto block81;
block81:;
// line 393
org$frostlang$frostc$FixedArray* $tmp1198 = *(&local47);
ITable* $tmp1199 = ((frost$collections$Iterable*) $tmp1198)->$class->itable;
while ($tmp1199->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1199 = $tmp1199->next;
}
$fn1201 $tmp1200 = $tmp1199->methods[0];
frost$collections$Iterator* $tmp1202 = $tmp1200(((frost$collections$Iterable*) $tmp1198));
goto block82;
block82:;
ITable* $tmp1203 = $tmp1202->$class->itable;
while ($tmp1203->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1203 = $tmp1203->next;
}
$fn1205 $tmp1204 = $tmp1203->methods[0];
frost$core$Bit $tmp1206 = $tmp1204($tmp1202);
bool $tmp1207 = $tmp1206.value;
if ($tmp1207) goto block84; else goto block83;
block83:;
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1208 = $tmp1202->$class->itable;
while ($tmp1208->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1208 = $tmp1208->next;
}
$fn1210 $tmp1209 = $tmp1208->methods[1];
frost$core$Object* $tmp1211 = $tmp1209($tmp1202);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1211)));
org$frostlang$frostc$ASTNode* $tmp1212 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
*(&local50) = ((org$frostlang$frostc$ASTNode*) $tmp1211);
// line 394
frost$core$MutableString* $tmp1213 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1214 = *(&local50);
frost$core$String* $tmp1215 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1214), &$s1216);
frost$core$MutableString$append$frost$core$String($tmp1213, $tmp1215);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
frost$core$Frost$unref$frost$core$Object$Q($tmp1211);
org$frostlang$frostc$ASTNode* $tmp1217 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block82;
block84:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
// line 396
frost$core$MutableString* $tmp1218 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1219 = *(&local48);
frost$core$MutableString$append$frost$core$Object($tmp1218, ((frost$core$Object*) $tmp1219));
// line 397
frost$core$MutableString* $tmp1220 = *(&local49);
frost$core$String* $tmp1221 = frost$core$MutableString$finish$R$frost$core$String($tmp1220);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
frost$core$MutableString* $tmp1222 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
*(&local49) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1223 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1224 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1225 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1221;
block79:;
frost$core$Int64 $tmp1226 = (frost$core$Int64) {19};
frost$core$Bit $tmp1227 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1226);
bool $tmp1228 = $tmp1227.value;
if ($tmp1228) goto block85; else goto block86;
block85:;
org$frostlang$frostc$FixedArray** $tmp1229 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp1230 = *$tmp1229;
*(&local51) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
org$frostlang$frostc$FixedArray* $tmp1231 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
*(&local51) = $tmp1230;
// line 400
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1232 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1232);
*(&local52) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
frost$core$MutableString* $tmp1233 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
*(&local52) = $tmp1232;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
// line 401
org$frostlang$frostc$FixedArray* $tmp1234 = *(&local51);
ITable* $tmp1235 = ((frost$collections$Iterable*) $tmp1234)->$class->itable;
while ($tmp1235->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1235 = $tmp1235->next;
}
$fn1237 $tmp1236 = $tmp1235->methods[0];
frost$collections$Iterator* $tmp1238 = $tmp1236(((frost$collections$Iterable*) $tmp1234));
goto block87;
block87:;
ITable* $tmp1239 = $tmp1238->$class->itable;
while ($tmp1239->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1239 = $tmp1239->next;
}
$fn1241 $tmp1240 = $tmp1239->methods[0];
frost$core$Bit $tmp1242 = $tmp1240($tmp1238);
bool $tmp1243 = $tmp1242.value;
if ($tmp1243) goto block89; else goto block88;
block88:;
*(&local53) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1244 = $tmp1238->$class->itable;
while ($tmp1244->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1244 = $tmp1244->next;
}
$fn1246 $tmp1245 = $tmp1244->methods[1];
frost$core$Object* $tmp1247 = $tmp1245($tmp1238);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1247)));
org$frostlang$frostc$ASTNode* $tmp1248 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
*(&local53) = ((org$frostlang$frostc$ASTNode*) $tmp1247);
// line 402
frost$core$MutableString* $tmp1249 = *(&local52);
org$frostlang$frostc$ASTNode* $tmp1250 = *(&local53);
frost$core$String* $tmp1251 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1250), &$s1252);
frost$core$MutableString$append$frost$core$String($tmp1249, $tmp1251);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
frost$core$Frost$unref$frost$core$Object$Q($tmp1247);
org$frostlang$frostc$ASTNode* $tmp1253 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
*(&local53) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block87;
block89:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
// line 404
frost$core$MutableString* $tmp1254 = *(&local52);
frost$core$String* $tmp1255 = frost$core$MutableString$finish$R$frost$core$String($tmp1254);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
frost$core$MutableString* $tmp1256 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
*(&local52) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1257 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
*(&local51) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1255;
block86:;
frost$core$Int64 $tmp1258 = (frost$core$Int64) {20};
frost$core$Bit $tmp1259 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1258);
bool $tmp1260 = $tmp1259.value;
if ($tmp1260) goto block90; else goto block91;
block90:;
org$frostlang$frostc$Position* $tmp1261 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1262 = *$tmp1261;
frost$core$String** $tmp1263 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1264 = *$tmp1263;
*(&local54) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
frost$core$String* $tmp1265 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
*(&local54) = $tmp1264;
org$frostlang$frostc$ASTNode** $tmp1266 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1267 = *$tmp1266;
*(&local55) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
org$frostlang$frostc$ASTNode* $tmp1268 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
*(&local55) = $tmp1267;
org$frostlang$frostc$ASTNode** $tmp1269 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1270 = *$tmp1269;
*(&local56) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
org$frostlang$frostc$ASTNode* $tmp1271 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
*(&local56) = $tmp1270;
org$frostlang$frostc$FixedArray** $tmp1272 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1273 = *$tmp1272;
*(&local57) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
org$frostlang$frostc$FixedArray* $tmp1274 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
*(&local57) = $tmp1273;
// line 407
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1275 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1275);
*(&local58) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
frost$core$MutableString* $tmp1276 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
*(&local58) = $tmp1275;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
// line 408
frost$core$String* $tmp1277 = *(&local54);
frost$core$Bit $tmp1278 = frost$core$Bit$init$builtin_bit($tmp1277 != NULL);
bool $tmp1279 = $tmp1278.value;
if ($tmp1279) goto block92; else goto block93;
block92:;
// line 409
frost$core$MutableString* $tmp1280 = *(&local58);
frost$core$String* $tmp1281 = *(&local54);
frost$core$String* $tmp1282 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1281, &$s1283);
frost$core$MutableString$append$frost$core$String($tmp1280, $tmp1282);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
goto block93;
block93:;
// line 411
frost$core$MutableString* $tmp1284 = *(&local58);
org$frostlang$frostc$ASTNode* $tmp1285 = *(&local55);
frost$core$String* $tmp1286 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1287, ((frost$core$Object*) $tmp1285));
frost$core$String* $tmp1288 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1286, &$s1289);
org$frostlang$frostc$ASTNode* $tmp1290 = *(&local56);
frost$core$String* $tmp1291 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1288, ((frost$core$Object*) $tmp1290));
frost$core$String* $tmp1292 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1291, &$s1293);
frost$core$MutableString$append$frost$core$String($tmp1284, $tmp1292);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
// line 412
org$frostlang$frostc$FixedArray* $tmp1294 = *(&local57);
ITable* $tmp1295 = ((frost$collections$Iterable*) $tmp1294)->$class->itable;
while ($tmp1295->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1295 = $tmp1295->next;
}
$fn1297 $tmp1296 = $tmp1295->methods[0];
frost$collections$Iterator* $tmp1298 = $tmp1296(((frost$collections$Iterable*) $tmp1294));
goto block94;
block94:;
ITable* $tmp1299 = $tmp1298->$class->itable;
while ($tmp1299->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1299 = $tmp1299->next;
}
$fn1301 $tmp1300 = $tmp1299->methods[0];
frost$core$Bit $tmp1302 = $tmp1300($tmp1298);
bool $tmp1303 = $tmp1302.value;
if ($tmp1303) goto block96; else goto block95;
block95:;
*(&local59) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1304 = $tmp1298->$class->itable;
while ($tmp1304->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1304 = $tmp1304->next;
}
$fn1306 $tmp1305 = $tmp1304->methods[1];
frost$core$Object* $tmp1307 = $tmp1305($tmp1298);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1307)));
org$frostlang$frostc$ASTNode* $tmp1308 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
*(&local59) = ((org$frostlang$frostc$ASTNode*) $tmp1307);
// line 413
frost$core$MutableString* $tmp1309 = *(&local58);
org$frostlang$frostc$ASTNode* $tmp1310 = *(&local59);
frost$core$String* $tmp1311 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1310), &$s1312);
frost$core$MutableString$append$frost$core$String($tmp1309, $tmp1311);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
frost$core$Frost$unref$frost$core$Object$Q($tmp1307);
org$frostlang$frostc$ASTNode* $tmp1313 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
*(&local59) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block94;
block96:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
// line 415
frost$core$MutableString* $tmp1314 = *(&local58);
frost$core$MutableString$append$frost$core$String($tmp1314, &$s1315);
// line 416
frost$core$MutableString* $tmp1316 = *(&local58);
frost$core$String* $tmp1317 = frost$core$MutableString$finish$R$frost$core$String($tmp1316);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
frost$core$MutableString* $tmp1318 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
*(&local58) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1319 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
*(&local57) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1320 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
*(&local56) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1321 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
*(&local55) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1322 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
*(&local54) = ((frost$core$String*) NULL);
return $tmp1317;
block91:;
frost$core$Int64 $tmp1323 = (frost$core$Int64) {21};
frost$core$Bit $tmp1324 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1323);
bool $tmp1325 = $tmp1324.value;
if ($tmp1325) goto block97; else goto block98;
block97:;
org$frostlang$frostc$Position* $tmp1326 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1327 = *$tmp1326;
frost$core$String** $tmp1328 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1329 = *$tmp1328;
*(&local60) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
frost$core$String* $tmp1330 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
*(&local60) = $tmp1329;
org$frostlang$frostc$FixedArray** $tmp1331 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1332 = *$tmp1331;
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
org$frostlang$frostc$FixedArray* $tmp1333 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
*(&local61) = $tmp1332;
// line 419
frost$core$String* $tmp1334 = *(&local60);
frost$core$String* $tmp1335 = frost$core$String$get_asString$R$frost$core$String($tmp1334);
frost$core$String* $tmp1336 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1335, &$s1337);
org$frostlang$frostc$FixedArray* $tmp1338 = *(&local61);
ITable* $tmp1339 = ((frost$collections$CollectionView*) $tmp1338)->$class->itable;
while ($tmp1339->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1339 = $tmp1339->next;
}
$fn1341 $tmp1340 = $tmp1339->methods[1];
frost$core$String* $tmp1342 = $tmp1340(((frost$collections$CollectionView*) $tmp1338));
frost$core$String* $tmp1343 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1336, $tmp1342);
frost$core$String* $tmp1344 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1343, &$s1345);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
org$frostlang$frostc$FixedArray* $tmp1346 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1347 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
*(&local60) = ((frost$core$String*) NULL);
return $tmp1344;
block98:;
frost$core$Int64 $tmp1348 = (frost$core$Int64) {22};
frost$core$Bit $tmp1349 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1348);
bool $tmp1350 = $tmp1349.value;
if ($tmp1350) goto block99; else goto block100;
block99:;
org$frostlang$frostc$Position* $tmp1351 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1352 = *$tmp1351;
frost$core$String** $tmp1353 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1354 = *$tmp1353;
*(&local62) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
frost$core$String* $tmp1355 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
*(&local62) = $tmp1354;
// line 422
frost$core$String* $tmp1356 = *(&local62);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
frost$core$String* $tmp1357 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
*(&local62) = ((frost$core$String*) NULL);
return $tmp1356;
block100:;
frost$core$Int64 $tmp1358 = (frost$core$Int64) {23};
frost$core$Bit $tmp1359 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1358);
bool $tmp1360 = $tmp1359.value;
if ($tmp1360) goto block101; else goto block102;
block101:;
org$frostlang$frostc$Position* $tmp1361 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1362 = *$tmp1361;
frost$core$String** $tmp1363 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1364 = *$tmp1363;
*(&local63) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
frost$core$String* $tmp1365 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
*(&local63) = $tmp1364;
org$frostlang$frostc$FixedArray** $tmp1366 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1367 = *$tmp1366;
*(&local64) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
org$frostlang$frostc$FixedArray* $tmp1368 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
*(&local64) = $tmp1367;
// line 425
frost$core$String* $tmp1369 = *(&local63);
frost$core$String* $tmp1370 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1371, $tmp1369);
frost$core$String* $tmp1372 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1370, &$s1373);
org$frostlang$frostc$FixedArray* $tmp1374 = *(&local64);
ITable* $tmp1375 = ((frost$collections$CollectionView*) $tmp1374)->$class->itable;
while ($tmp1375->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1375 = $tmp1375->next;
}
$fn1377 $tmp1376 = $tmp1375->methods[1];
frost$core$String* $tmp1378 = $tmp1376(((frost$collections$CollectionView*) $tmp1374));
frost$core$String* $tmp1379 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1372, $tmp1378);
frost$core$String* $tmp1380 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1379, &$s1381);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
org$frostlang$frostc$FixedArray* $tmp1382 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
*(&local64) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1383 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
*(&local63) = ((frost$core$String*) NULL);
return $tmp1380;
block102:;
frost$core$Int64 $tmp1384 = (frost$core$Int64) {24};
frost$core$Bit $tmp1385 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1384);
bool $tmp1386 = $tmp1385.value;
if ($tmp1386) goto block103; else goto block104;
block103:;
org$frostlang$frostc$Position* $tmp1387 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1388 = *$tmp1387;
org$frostlang$frostc$ASTNode** $tmp1389 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1390 = *$tmp1389;
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
org$frostlang$frostc$ASTNode* $tmp1391 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
*(&local65) = $tmp1390;
org$frostlang$frostc$FixedArray** $tmp1392 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1393 = *$tmp1392;
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
org$frostlang$frostc$FixedArray* $tmp1394 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
*(&local66) = $tmp1393;
org$frostlang$frostc$ASTNode** $tmp1395 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1396 = *$tmp1395;
*(&local67) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
org$frostlang$frostc$ASTNode* $tmp1397 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
*(&local67) = $tmp1396;
// line 428
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1398 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$ASTNode* $tmp1399 = *(&local65);
frost$core$String* $tmp1400 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1401, ((frost$core$Object*) $tmp1399));
frost$core$String* $tmp1402 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1400, &$s1403);
frost$core$MutableString$init$frost$core$String($tmp1398, $tmp1402);
*(&local68) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
frost$core$MutableString* $tmp1404 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
*(&local68) = $tmp1398;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
// line 429
org$frostlang$frostc$FixedArray* $tmp1405 = *(&local66);
ITable* $tmp1406 = ((frost$collections$Iterable*) $tmp1405)->$class->itable;
while ($tmp1406->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1406 = $tmp1406->next;
}
$fn1408 $tmp1407 = $tmp1406->methods[0];
frost$collections$Iterator* $tmp1409 = $tmp1407(((frost$collections$Iterable*) $tmp1405));
goto block105;
block105:;
ITable* $tmp1410 = $tmp1409->$class->itable;
while ($tmp1410->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1410 = $tmp1410->next;
}
$fn1412 $tmp1411 = $tmp1410->methods[0];
frost$core$Bit $tmp1413 = $tmp1411($tmp1409);
bool $tmp1414 = $tmp1413.value;
if ($tmp1414) goto block107; else goto block106;
block106:;
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1415 = $tmp1409->$class->itable;
while ($tmp1415->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1415 = $tmp1415->next;
}
$fn1417 $tmp1416 = $tmp1415->methods[1];
frost$core$Object* $tmp1418 = $tmp1416($tmp1409);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1418)));
org$frostlang$frostc$ASTNode* $tmp1419 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
*(&local69) = ((org$frostlang$frostc$ASTNode*) $tmp1418);
// line 430
frost$core$MutableString* $tmp1420 = *(&local68);
org$frostlang$frostc$ASTNode* $tmp1421 = *(&local69);
frost$core$String* $tmp1422 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1421), &$s1423);
frost$core$MutableString$append$frost$core$String($tmp1420, $tmp1422);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
frost$core$Frost$unref$frost$core$Object$Q($tmp1418);
org$frostlang$frostc$ASTNode* $tmp1424 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block105;
block107:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
// line 432
frost$core$MutableString* $tmp1425 = *(&local68);
frost$core$MutableString$append$frost$core$String($tmp1425, &$s1426);
// line 433
org$frostlang$frostc$ASTNode* $tmp1427 = *(&local67);
frost$core$Bit $tmp1428 = frost$core$Bit$init$builtin_bit($tmp1427 != NULL);
bool $tmp1429 = $tmp1428.value;
if ($tmp1429) goto block108; else goto block109;
block108:;
// line 434
frost$core$MutableString* $tmp1430 = *(&local68);
org$frostlang$frostc$ASTNode* $tmp1431 = *(&local67);
frost$core$String* $tmp1432 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1433, ((frost$core$Object*) $tmp1431));
frost$core$String* $tmp1434 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1432, &$s1435);
frost$core$MutableString$append$frost$core$String($tmp1430, $tmp1434);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
goto block109;
block109:;
// line 436
frost$core$MutableString* $tmp1436 = *(&local68);
frost$core$String* $tmp1437 = frost$core$MutableString$finish$R$frost$core$String($tmp1436);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
frost$core$MutableString* $tmp1438 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
*(&local68) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1439 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
*(&local67) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1440 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1441 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1437;
block104:;
frost$core$Int64 $tmp1442 = (frost$core$Int64) {25};
frost$core$Bit $tmp1443 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1442);
bool $tmp1444 = $tmp1443.value;
if ($tmp1444) goto block110; else goto block111;
block110:;
org$frostlang$frostc$Position* $tmp1445 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1446 = *$tmp1445;
frost$core$UInt64* $tmp1447 = (frost$core$UInt64*) (param0->$data + 16);
frost$core$UInt64 $tmp1448 = *$tmp1447;
*(&local70) = $tmp1448;
// line 439
frost$core$UInt64 $tmp1449 = *(&local70);
frost$core$UInt64$wrapper* $tmp1450;
$tmp1450 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp1450->value = $tmp1449;
$fn1452 $tmp1451 = ($fn1452) ((frost$core$Object*) $tmp1450)->$class->vtable[0];
frost$core$String* $tmp1453 = $tmp1451(((frost$core$Object*) $tmp1450));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
return $tmp1453;
block111:;
frost$core$Int64 $tmp1454 = (frost$core$Int64) {26};
frost$core$Bit $tmp1455 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1454);
bool $tmp1456 = $tmp1455.value;
if ($tmp1456) goto block112; else goto block113;
block112:;
org$frostlang$frostc$Position* $tmp1457 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1458 = *$tmp1457;
org$frostlang$frostc$IR$Value** $tmp1459 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp1460 = *$tmp1459;
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
org$frostlang$frostc$IR$Value* $tmp1461 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
*(&local71) = $tmp1460;
// line 442
org$frostlang$frostc$IR$Value* $tmp1462 = *(&local71);
$fn1464 $tmp1463 = ($fn1464) ((frost$core$Object*) $tmp1462)->$class->vtable[0];
frost$core$String* $tmp1465 = $tmp1463(((frost$core$Object*) $tmp1462));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
org$frostlang$frostc$IR$Value* $tmp1466 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp1465;
block113:;
frost$core$Int64 $tmp1467 = (frost$core$Int64) {27};
frost$core$Bit $tmp1468 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1467);
bool $tmp1469 = $tmp1468.value;
if ($tmp1469) goto block114; else goto block115;
block114:;
org$frostlang$frostc$Position* $tmp1470 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1471 = *$tmp1470;
frost$core$String** $tmp1472 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1473 = *$tmp1472;
*(&local72) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
frost$core$String* $tmp1474 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
*(&local72) = $tmp1473;
org$frostlang$frostc$FixedArray** $tmp1475 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1476 = *$tmp1475;
*(&local73) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
org$frostlang$frostc$FixedArray* $tmp1477 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
*(&local73) = $tmp1476;
// line 445
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1478 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1478);
*(&local74) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
frost$core$MutableString* $tmp1479 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
*(&local74) = $tmp1478;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
// line 446
frost$core$String* $tmp1480 = *(&local72);
frost$core$Bit $tmp1481 = frost$core$Bit$init$builtin_bit($tmp1480 != NULL);
bool $tmp1482 = $tmp1481.value;
if ($tmp1482) goto block116; else goto block117;
block116:;
// line 447
frost$core$MutableString* $tmp1483 = *(&local74);
frost$core$String* $tmp1484 = *(&local72);
frost$core$String* $tmp1485 = frost$core$String$get_asString$R$frost$core$String($tmp1484);
frost$core$String* $tmp1486 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1485, &$s1487);
frost$core$MutableString$append$frost$core$String($tmp1483, $tmp1486);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1485));
goto block117;
block117:;
// line 449
frost$core$MutableString* $tmp1488 = *(&local74);
frost$core$MutableString$append$frost$core$String($tmp1488, &$s1489);
// line 450
org$frostlang$frostc$FixedArray* $tmp1490 = *(&local73);
ITable* $tmp1491 = ((frost$collections$Iterable*) $tmp1490)->$class->itable;
while ($tmp1491->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1491 = $tmp1491->next;
}
$fn1493 $tmp1492 = $tmp1491->methods[0];
frost$collections$Iterator* $tmp1494 = $tmp1492(((frost$collections$Iterable*) $tmp1490));
goto block118;
block118:;
ITable* $tmp1495 = $tmp1494->$class->itable;
while ($tmp1495->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1495 = $tmp1495->next;
}
$fn1497 $tmp1496 = $tmp1495->methods[0];
frost$core$Bit $tmp1498 = $tmp1496($tmp1494);
bool $tmp1499 = $tmp1498.value;
if ($tmp1499) goto block120; else goto block119;
block119:;
*(&local75) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1500 = $tmp1494->$class->itable;
while ($tmp1500->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1500 = $tmp1500->next;
}
$fn1502 $tmp1501 = $tmp1500->methods[1];
frost$core$Object* $tmp1503 = $tmp1501($tmp1494);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1503)));
org$frostlang$frostc$ASTNode* $tmp1504 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
*(&local75) = ((org$frostlang$frostc$ASTNode*) $tmp1503);
// line 451
frost$core$MutableString* $tmp1505 = *(&local74);
org$frostlang$frostc$ASTNode* $tmp1506 = *(&local75);
frost$core$String* $tmp1507 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1506), &$s1508);
frost$core$MutableString$append$frost$core$String($tmp1505, $tmp1507);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
frost$core$Frost$unref$frost$core$Object$Q($tmp1503);
org$frostlang$frostc$ASTNode* $tmp1509 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
*(&local75) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block118;
block120:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
// line 453
frost$core$MutableString* $tmp1510 = *(&local74);
frost$core$MutableString$append$frost$core$String($tmp1510, &$s1511);
// line 454
frost$core$MutableString* $tmp1512 = *(&local74);
frost$core$String* $tmp1513 = frost$core$MutableString$finish$R$frost$core$String($tmp1512);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
frost$core$MutableString* $tmp1514 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1514));
*(&local74) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1515 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
*(&local73) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1516 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1516));
*(&local72) = ((frost$core$String*) NULL);
return $tmp1513;
block115:;
frost$core$Int64 $tmp1517 = (frost$core$Int64) {28};
frost$core$Bit $tmp1518 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1517);
bool $tmp1519 = $tmp1518.value;
if ($tmp1519) goto block121; else goto block122;
block121:;
org$frostlang$frostc$Position* $tmp1520 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1521 = *$tmp1520;
org$frostlang$frostc$ASTNode** $tmp1522 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1523 = *$tmp1522;
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
org$frostlang$frostc$ASTNode* $tmp1524 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
*(&local76) = $tmp1523;
org$frostlang$frostc$FixedArray** $tmp1525 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1526 = *$tmp1525;
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
org$frostlang$frostc$FixedArray* $tmp1527 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
*(&local77) = $tmp1526;
org$frostlang$frostc$FixedArray** $tmp1528 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1529 = *$tmp1528;
*(&local78) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
org$frostlang$frostc$FixedArray* $tmp1530 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
*(&local78) = $tmp1529;
// line 457
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1531 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$ASTNode* $tmp1532 = *(&local76);
frost$core$String* $tmp1533 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1534, ((frost$core$Object*) $tmp1532));
frost$core$String* $tmp1535 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1533, &$s1536);
frost$core$MutableString$init$frost$core$String($tmp1531, $tmp1535);
*(&local79) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
frost$core$MutableString* $tmp1537 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
*(&local79) = $tmp1531;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
// line 458
org$frostlang$frostc$FixedArray* $tmp1538 = *(&local77);
ITable* $tmp1539 = ((frost$collections$Iterable*) $tmp1538)->$class->itable;
while ($tmp1539->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1539 = $tmp1539->next;
}
$fn1541 $tmp1540 = $tmp1539->methods[0];
frost$collections$Iterator* $tmp1542 = $tmp1540(((frost$collections$Iterable*) $tmp1538));
goto block123;
block123:;
ITable* $tmp1543 = $tmp1542->$class->itable;
while ($tmp1543->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1543 = $tmp1543->next;
}
$fn1545 $tmp1544 = $tmp1543->methods[0];
frost$core$Bit $tmp1546 = $tmp1544($tmp1542);
bool $tmp1547 = $tmp1546.value;
if ($tmp1547) goto block125; else goto block124;
block124:;
*(&local80) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1548 = $tmp1542->$class->itable;
while ($tmp1548->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1548 = $tmp1548->next;
}
$fn1550 $tmp1549 = $tmp1548->methods[1];
frost$core$Object* $tmp1551 = $tmp1549($tmp1542);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1551)));
org$frostlang$frostc$ASTNode* $tmp1552 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
*(&local80) = ((org$frostlang$frostc$ASTNode*) $tmp1551);
// line 459
frost$core$MutableString* $tmp1553 = *(&local79);
org$frostlang$frostc$ASTNode* $tmp1554 = *(&local80);
frost$core$String* $tmp1555 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1554), &$s1556);
frost$core$MutableString$append$frost$core$String($tmp1553, $tmp1555);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
frost$core$Frost$unref$frost$core$Object$Q($tmp1551);
org$frostlang$frostc$ASTNode* $tmp1557 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
*(&local80) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block123;
block125:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1542));
// line 461
org$frostlang$frostc$FixedArray* $tmp1558 = *(&local78);
frost$core$Bit $tmp1559 = frost$core$Bit$init$builtin_bit($tmp1558 != NULL);
bool $tmp1560 = $tmp1559.value;
if ($tmp1560) goto block126; else goto block127;
block126:;
// line 462
frost$core$MutableString* $tmp1561 = *(&local79);
org$frostlang$frostc$FixedArray* $tmp1562 = *(&local78);
frost$core$String* $tmp1563 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1562), &$s1564);
frost$core$MutableString$append$frost$core$String($tmp1561, $tmp1563);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
goto block127;
block127:;
// line 464
frost$core$MutableString* $tmp1565 = *(&local79);
frost$core$MutableString$append$frost$core$String($tmp1565, &$s1566);
// line 465
frost$core$MutableString* $tmp1567 = *(&local79);
frost$core$String* $tmp1568 = frost$core$MutableString$finish$R$frost$core$String($tmp1567);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
frost$core$MutableString* $tmp1569 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
*(&local79) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1570 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1570));
*(&local78) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1571 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1571));
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1572 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1572));
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1568;
block122:;
frost$core$Int64 $tmp1573 = (frost$core$Int64) {29};
frost$core$Bit $tmp1574 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1573);
bool $tmp1575 = $tmp1574.value;
if ($tmp1575) goto block128; else goto block129;
block128:;
org$frostlang$frostc$Position* $tmp1576 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1577 = *$tmp1576;
org$frostlang$frostc$ASTNode** $tmp1578 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1579 = *$tmp1578;
*(&local81) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
org$frostlang$frostc$ASTNode* $tmp1580 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
*(&local81) = $tmp1579;
org$frostlang$frostc$FixedArray** $tmp1581 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1582 = *$tmp1581;
*(&local82) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
org$frostlang$frostc$FixedArray* $tmp1583 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
*(&local82) = $tmp1582;
org$frostlang$frostc$MethodDecl$Kind* $tmp1584 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp1585 = *$tmp1584;
*(&local83) = $tmp1585;
frost$core$String** $tmp1586 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp1587 = *$tmp1586;
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1587));
frost$core$String* $tmp1588 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1588));
*(&local84) = $tmp1587;
org$frostlang$frostc$FixedArray** $tmp1589 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1590 = *$tmp1589;
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1590));
org$frostlang$frostc$FixedArray* $tmp1591 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
*(&local85) = $tmp1590;
org$frostlang$frostc$FixedArray** $tmp1592 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp1593 = *$tmp1592;
*(&local86) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
org$frostlang$frostc$FixedArray* $tmp1594 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1594));
*(&local86) = $tmp1593;
org$frostlang$frostc$ASTNode** $tmp1595 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
org$frostlang$frostc$ASTNode* $tmp1596 = *$tmp1595;
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
org$frostlang$frostc$ASTNode* $tmp1597 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
*(&local87) = $tmp1596;
org$frostlang$frostc$FixedArray** $tmp1598 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp1599 = *$tmp1598;
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1599));
org$frostlang$frostc$FixedArray* $tmp1600 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
*(&local88) = $tmp1599;
// line 469
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1601 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1601);
*(&local89) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
frost$core$MutableString* $tmp1602 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1602));
*(&local89) = $tmp1601;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
// line 470
org$frostlang$frostc$ASTNode* $tmp1603 = *(&local81);
frost$core$Bit $tmp1604 = frost$core$Bit$init$builtin_bit($tmp1603 != NULL);
bool $tmp1605 = $tmp1604.value;
if ($tmp1605) goto block130; else goto block131;
block130:;
// line 471
frost$core$MutableString* $tmp1606 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1607 = *(&local81);
frost$core$String* $tmp1608 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1607), &$s1609);
frost$core$MutableString$append$frost$core$String($tmp1606, $tmp1608);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
goto block131;
block131:;
// line 473
org$frostlang$frostc$FixedArray* $tmp1610 = *(&local82);
ITable* $tmp1611 = ((frost$collections$Iterable*) $tmp1610)->$class->itable;
while ($tmp1611->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1611 = $tmp1611->next;
}
$fn1613 $tmp1612 = $tmp1611->methods[0];
frost$collections$Iterator* $tmp1614 = $tmp1612(((frost$collections$Iterable*) $tmp1610));
goto block132;
block132:;
ITable* $tmp1615 = $tmp1614->$class->itable;
while ($tmp1615->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1615 = $tmp1615->next;
}
$fn1617 $tmp1616 = $tmp1615->methods[0];
frost$core$Bit $tmp1618 = $tmp1616($tmp1614);
bool $tmp1619 = $tmp1618.value;
if ($tmp1619) goto block134; else goto block133;
block133:;
*(&local90) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1620 = $tmp1614->$class->itable;
while ($tmp1620->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1620 = $tmp1620->next;
}
$fn1622 $tmp1621 = $tmp1620->methods[1];
frost$core$Object* $tmp1623 = $tmp1621($tmp1614);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1623)));
org$frostlang$frostc$ASTNode* $tmp1624 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
*(&local90) = ((org$frostlang$frostc$ASTNode*) $tmp1623);
// line 474
frost$core$MutableString* $tmp1625 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1626 = *(&local90);
frost$core$String* $tmp1627 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1626), &$s1628);
frost$core$MutableString$append$frost$core$String($tmp1625, $tmp1627);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
frost$core$Frost$unref$frost$core$Object$Q($tmp1623);
org$frostlang$frostc$ASTNode* $tmp1629 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
*(&local90) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block132;
block134:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
// line 476
org$frostlang$frostc$MethodDecl$Kind $tmp1630 = *(&local83);
frost$core$Int64 $tmp1631 = $tmp1630.$rawValue;
frost$core$Int64 $tmp1632 = (frost$core$Int64) {0};
frost$core$Bit $tmp1633 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1631, $tmp1632);
bool $tmp1634 = $tmp1633.value;
if ($tmp1634) goto block136; else goto block137;
block136:;
// line 477
frost$core$MutableString* $tmp1635 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1635, &$s1636);
goto block135;
block137:;
frost$core$Int64 $tmp1637 = (frost$core$Int64) {1};
frost$core$Bit $tmp1638 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1631, $tmp1637);
bool $tmp1639 = $tmp1638.value;
if ($tmp1639) goto block138; else goto block139;
block138:;
// line 478
frost$core$MutableString* $tmp1640 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1640, &$s1641);
goto block135;
block139:;
frost$core$Int64 $tmp1642 = (frost$core$Int64) {2};
frost$core$Bit $tmp1643 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1631, $tmp1642);
bool $tmp1644 = $tmp1643.value;
if ($tmp1644) goto block140; else goto block135;
block140:;
goto block135;
block135:;
// line 481
frost$core$MutableString* $tmp1645 = *(&local89);
frost$core$String* $tmp1646 = *(&local84);
frost$core$MutableString$append$frost$core$String($tmp1645, $tmp1646);
// line 482
org$frostlang$frostc$FixedArray* $tmp1647 = *(&local85);
frost$core$Bit $tmp1648 = frost$core$Bit$init$builtin_bit($tmp1647 != NULL);
bool $tmp1649 = $tmp1648.value;
if ($tmp1649) goto block141; else goto block142;
block141:;
// line 483
frost$core$MutableString* $tmp1650 = *(&local89);
org$frostlang$frostc$FixedArray* $tmp1651 = *(&local85);
ITable* $tmp1652 = ((frost$collections$CollectionView*) $tmp1651)->$class->itable;
while ($tmp1652->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1652 = $tmp1652->next;
}
$fn1654 $tmp1653 = $tmp1652->methods[1];
frost$core$String* $tmp1655 = $tmp1653(((frost$collections$CollectionView*) $tmp1651));
frost$core$String* $tmp1656 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1657, $tmp1655);
frost$core$String* $tmp1658 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1656, &$s1659);
frost$core$MutableString$append$frost$core$String($tmp1650, $tmp1658);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1655));
goto block142;
block142:;
// line 485
frost$core$MutableString* $tmp1660 = *(&local89);
org$frostlang$frostc$FixedArray* $tmp1661 = *(&local86);
ITable* $tmp1662 = ((frost$collections$CollectionView*) $tmp1661)->$class->itable;
while ($tmp1662->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1662 = $tmp1662->next;
}
$fn1664 $tmp1663 = $tmp1662->methods[1];
frost$core$String* $tmp1665 = $tmp1663(((frost$collections$CollectionView*) $tmp1661));
frost$core$String* $tmp1666 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1667, $tmp1665);
frost$core$String* $tmp1668 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1666, &$s1669);
frost$core$MutableString$append$frost$core$String($tmp1660, $tmp1668);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
// line 486
org$frostlang$frostc$ASTNode* $tmp1670 = *(&local87);
frost$core$Bit $tmp1671 = frost$core$Bit$init$builtin_bit($tmp1670 != NULL);
bool $tmp1672 = $tmp1671.value;
if ($tmp1672) goto block143; else goto block144;
block143:;
// line 487
frost$core$MutableString* $tmp1673 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1674 = *(&local87);
frost$core$String* $tmp1675 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1676, ((frost$core$Object*) $tmp1674));
frost$core$String* $tmp1677 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1675, &$s1678);
frost$core$MutableString$append$frost$core$String($tmp1673, $tmp1677);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
goto block144;
block144:;
// line 489
org$frostlang$frostc$FixedArray* $tmp1679 = *(&local88);
frost$core$Bit $tmp1680 = frost$core$Bit$init$builtin_bit($tmp1679 != NULL);
bool $tmp1681 = $tmp1680.value;
if ($tmp1681) goto block145; else goto block146;
block145:;
// line 490
frost$core$MutableString* $tmp1682 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1682, &$s1683);
// line 491
org$frostlang$frostc$FixedArray* $tmp1684 = *(&local88);
ITable* $tmp1685 = ((frost$collections$Iterable*) $tmp1684)->$class->itable;
while ($tmp1685->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1685 = $tmp1685->next;
}
$fn1687 $tmp1686 = $tmp1685->methods[0];
frost$collections$Iterator* $tmp1688 = $tmp1686(((frost$collections$Iterable*) $tmp1684));
goto block147;
block147:;
ITable* $tmp1689 = $tmp1688->$class->itable;
while ($tmp1689->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1689 = $tmp1689->next;
}
$fn1691 $tmp1690 = $tmp1689->methods[0];
frost$core$Bit $tmp1692 = $tmp1690($tmp1688);
bool $tmp1693 = $tmp1692.value;
if ($tmp1693) goto block149; else goto block148;
block148:;
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1694 = $tmp1688->$class->itable;
while ($tmp1694->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1694 = $tmp1694->next;
}
$fn1696 $tmp1695 = $tmp1694->methods[1];
frost$core$Object* $tmp1697 = $tmp1695($tmp1688);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1697)));
org$frostlang$frostc$ASTNode* $tmp1698 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1698));
*(&local91) = ((org$frostlang$frostc$ASTNode*) $tmp1697);
// line 492
frost$core$MutableString* $tmp1699 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1700 = *(&local91);
frost$core$String* $tmp1701 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1700), &$s1702);
frost$core$MutableString$append$frost$core$String($tmp1699, $tmp1701);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
frost$core$Frost$unref$frost$core$Object$Q($tmp1697);
org$frostlang$frostc$ASTNode* $tmp1703 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1703));
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block147;
block149:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
// line 494
frost$core$MutableString* $tmp1704 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1704, &$s1705);
goto block146;
block146:;
// line 496
frost$core$MutableString* $tmp1706 = *(&local89);
frost$core$String* $tmp1707 = frost$core$MutableString$finish$R$frost$core$String($tmp1706);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
frost$core$MutableString* $tmp1708 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
*(&local89) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1709 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1710 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1711 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1711));
*(&local86) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1712 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1712));
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1713 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
*(&local84) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1714 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
*(&local82) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1715 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
*(&local81) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1707;
block129:;
frost$core$Int64 $tmp1716 = (frost$core$Int64) {30};
frost$core$Bit $tmp1717 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1716);
bool $tmp1718 = $tmp1717.value;
if ($tmp1718) goto block150; else goto block151;
block150:;
org$frostlang$frostc$Position* $tmp1719 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1720 = *$tmp1719;
org$frostlang$frostc$parser$Token$Kind* $tmp1721 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp1722 = *$tmp1721;
*(&local92) = $tmp1722;
org$frostlang$frostc$FixedArray** $tmp1723 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1724 = *$tmp1723;
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
org$frostlang$frostc$FixedArray* $tmp1725 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
*(&local93) = $tmp1724;
org$frostlang$frostc$ASTNode** $tmp1726 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1727 = *$tmp1726;
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
org$frostlang$frostc$ASTNode* $tmp1728 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
*(&local94) = $tmp1727;
// line 499
*(&local95) = ((frost$core$String*) NULL);
// line 500
org$frostlang$frostc$parser$Token$Kind $tmp1729 = *(&local92);
frost$core$Int64 $tmp1730 = $tmp1729.$rawValue;
frost$core$Int64 $tmp1731 = (frost$core$Int64) {94};
frost$core$Bit $tmp1732 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1730, $tmp1731);
bool $tmp1733 = $tmp1732.value;
if ($tmp1733) goto block153; else goto block154;
block153:;
// line 502
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1734));
frost$core$String* $tmp1735 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
*(&local95) = &$s1736;
goto block152;
block154:;
frost$core$Int64 $tmp1737 = (frost$core$Int64) {95};
frost$core$Bit $tmp1738 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1730, $tmp1737);
bool $tmp1739 = $tmp1738.value;
if ($tmp1739) goto block155; else goto block156;
block155:;
// line 505
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1740));
frost$core$String* $tmp1741 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1741));
*(&local95) = &$s1742;
goto block152;
block156:;
frost$core$Int64 $tmp1743 = (frost$core$Int64) {96};
frost$core$Bit $tmp1744 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1730, $tmp1743);
bool $tmp1745 = $tmp1744.value;
if ($tmp1745) goto block157; else goto block158;
block157:;
// line 508
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1746));
frost$core$String* $tmp1747 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
*(&local95) = &$s1748;
goto block152;
block158:;
frost$core$Int64 $tmp1749 = (frost$core$Int64) {97};
frost$core$Bit $tmp1750 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1730, $tmp1749);
bool $tmp1751 = $tmp1750.value;
if ($tmp1751) goto block159; else goto block152;
block159:;
// line 511
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1752));
frost$core$String* $tmp1753 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1753));
*(&local95) = &$s1754;
goto block152;
block152:;
// line 514
org$frostlang$frostc$FixedArray* $tmp1755 = *(&local93);
ITable* $tmp1756 = ((frost$collections$CollectionView*) $tmp1755)->$class->itable;
while ($tmp1756->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1756 = $tmp1756->next;
}
$fn1758 $tmp1757 = $tmp1756->methods[1];
frost$core$String* $tmp1759 = $tmp1757(((frost$collections$CollectionView*) $tmp1755));
frost$core$String* $tmp1760 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1761, $tmp1759);
frost$core$String* $tmp1762 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1760, &$s1763);
frost$core$String* $tmp1764 = *(&local95);
frost$core$String* $tmp1765 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1762, $tmp1764);
frost$core$String* $tmp1766 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1765, &$s1767);
*(&local96) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1766));
frost$core$String* $tmp1768 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
*(&local96) = $tmp1766;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1762));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
// line 515
org$frostlang$frostc$ASTNode* $tmp1769 = *(&local94);
frost$core$Bit $tmp1770 = frost$core$Bit$init$builtin_bit($tmp1769 != NULL);
bool $tmp1771 = $tmp1770.value;
if ($tmp1771) goto block160; else goto block161;
block160:;
// line 516
frost$core$String* $tmp1772 = *(&local96);
frost$core$String* $tmp1773 = frost$core$String$get_asString$R$frost$core$String($tmp1772);
frost$core$String* $tmp1774 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1773, &$s1775);
org$frostlang$frostc$ASTNode* $tmp1776 = *(&local94);
frost$core$String* $tmp1777 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1774, ((frost$core$Object*) $tmp1776));
frost$core$String* $tmp1778 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1777, &$s1779);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1773));
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
block161:;
// line 518
frost$core$String* $tmp1784 = *(&local96);
frost$core$String* $tmp1785 = frost$core$String$get_asString$R$frost$core$String($tmp1784);
frost$core$String* $tmp1786 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1785, &$s1787);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1785));
frost$core$String* $tmp1788 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
*(&local96) = ((frost$core$String*) NULL);
frost$core$String* $tmp1789 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
*(&local95) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1790 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1790));
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1791 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1791));
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1786;
block151:;
frost$core$Int64 $tmp1792 = (frost$core$Int64) {31};
frost$core$Bit $tmp1793 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1792);
bool $tmp1794 = $tmp1793.value;
if ($tmp1794) goto block162; else goto block163;
block162:;
// line 521
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1795));
return &$s1796;
block163:;
frost$core$Int64 $tmp1797 = (frost$core$Int64) {32};
frost$core$Bit $tmp1798 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1797);
bool $tmp1799 = $tmp1798.value;
if ($tmp1799) goto block164; else goto block165;
block164:;
org$frostlang$frostc$Position* $tmp1800 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1801 = *$tmp1800;
org$frostlang$frostc$ASTNode** $tmp1802 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1803 = *$tmp1802;
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
org$frostlang$frostc$ASTNode* $tmp1804 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1804));
*(&local97) = $tmp1803;
// line 524
org$frostlang$frostc$ASTNode* $tmp1805 = *(&local97);
frost$core$String* $tmp1806 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1805), &$s1807);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
org$frostlang$frostc$ASTNode* $tmp1808 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1808));
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1806;
block165:;
frost$core$Int64 $tmp1809 = (frost$core$Int64) {33};
frost$core$Bit $tmp1810 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1809);
bool $tmp1811 = $tmp1810.value;
if ($tmp1811) goto block166; else goto block167;
block166:;
org$frostlang$frostc$Position* $tmp1812 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1813 = *$tmp1812;
frost$core$String** $tmp1814 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1815 = *$tmp1814;
*(&local98) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
frost$core$String* $tmp1816 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
*(&local98) = $tmp1815;
// line 527
frost$core$String* $tmp1817 = *(&local98);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1817));
frost$core$String* $tmp1818 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
*(&local98) = ((frost$core$String*) NULL);
return $tmp1817;
block167:;
frost$core$Int64 $tmp1819 = (frost$core$Int64) {34};
frost$core$Bit $tmp1820 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1819);
bool $tmp1821 = $tmp1820.value;
if ($tmp1821) goto block168; else goto block169;
block168:;
org$frostlang$frostc$Position* $tmp1822 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1823 = *$tmp1822;
frost$core$String** $tmp1824 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1825 = *$tmp1824;
*(&local99) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1825));
frost$core$String* $tmp1826 = *(&local99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
*(&local99) = $tmp1825;
org$frostlang$frostc$ASTNode** $tmp1827 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1828 = *$tmp1827;
*(&local100) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
org$frostlang$frostc$ASTNode* $tmp1829 = *(&local100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
*(&local100) = $tmp1828;
// line 530
frost$core$String* $tmp1830 = *(&local99);
frost$core$String* $tmp1831 = frost$core$String$get_asString$R$frost$core$String($tmp1830);
frost$core$String* $tmp1832 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1831, &$s1833);
org$frostlang$frostc$ASTNode* $tmp1834 = *(&local100);
frost$core$String* $tmp1835 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1832, ((frost$core$Object*) $tmp1834));
frost$core$String* $tmp1836 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1835, &$s1837);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
org$frostlang$frostc$ASTNode* $tmp1838 = *(&local100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1838));
*(&local100) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1839 = *(&local99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
*(&local99) = ((frost$core$String*) NULL);
return $tmp1836;
block169:;
frost$core$Int64 $tmp1840 = (frost$core$Int64) {35};
frost$core$Bit $tmp1841 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1840);
bool $tmp1842 = $tmp1841.value;
if ($tmp1842) goto block170; else goto block171;
block170:;
org$frostlang$frostc$Position* $tmp1843 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1844 = *$tmp1843;
org$frostlang$frostc$ASTNode** $tmp1845 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1846 = *$tmp1845;
*(&local101) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
org$frostlang$frostc$ASTNode* $tmp1847 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
*(&local101) = $tmp1846;
frost$core$Bit* $tmp1848 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp1849 = *$tmp1848;
*(&local102) = $tmp1849;
org$frostlang$frostc$ASTNode** $tmp1850 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
org$frostlang$frostc$ASTNode* $tmp1851 = *$tmp1850;
*(&local103) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
org$frostlang$frostc$ASTNode* $tmp1852 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
*(&local103) = $tmp1851;
org$frostlang$frostc$ASTNode** $tmp1853 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp1854 = *$tmp1853;
*(&local104) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
org$frostlang$frostc$ASTNode* $tmp1855 = *(&local104);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1855));
*(&local104) = $tmp1854;
// line 533
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1856 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1856);
*(&local105) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
frost$core$MutableString* $tmp1857 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
*(&local105) = $tmp1856;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
// line 534
org$frostlang$frostc$ASTNode* $tmp1858 = *(&local101);
frost$core$Bit $tmp1859 = frost$core$Bit$init$builtin_bit($tmp1858 != NULL);
bool $tmp1860 = $tmp1859.value;
if ($tmp1860) goto block172; else goto block173;
block172:;
// line 535
frost$core$MutableString* $tmp1861 = *(&local105);
org$frostlang$frostc$ASTNode* $tmp1862 = *(&local101);
frost$core$MutableString$append$frost$core$Object($tmp1861, ((frost$core$Object*) $tmp1862));
goto block173;
block173:;
// line 537
frost$core$Bit $tmp1863 = *(&local102);
bool $tmp1864 = $tmp1863.value;
if ($tmp1864) goto block174; else goto block176;
block174:;
// line 538
frost$core$MutableString* $tmp1865 = *(&local105);
frost$core$MutableString$append$frost$core$String($tmp1865, &$s1866);
goto block175;
block176:;
// line 1
// line 541
frost$core$MutableString* $tmp1867 = *(&local105);
frost$core$MutableString$append$frost$core$String($tmp1867, &$s1868);
goto block175;
block175:;
// line 543
org$frostlang$frostc$ASTNode* $tmp1869 = *(&local103);
frost$core$Bit $tmp1870 = frost$core$Bit$init$builtin_bit($tmp1869 != NULL);
bool $tmp1871 = $tmp1870.value;
if ($tmp1871) goto block177; else goto block178;
block177:;
// line 544
frost$core$MutableString* $tmp1872 = *(&local105);
org$frostlang$frostc$ASTNode* $tmp1873 = *(&local103);
frost$core$MutableString$append$frost$core$Object($tmp1872, ((frost$core$Object*) $tmp1873));
goto block178;
block178:;
// line 546
org$frostlang$frostc$ASTNode* $tmp1874 = *(&local104);
frost$core$Bit $tmp1875 = frost$core$Bit$init$builtin_bit($tmp1874 != NULL);
bool $tmp1876 = $tmp1875.value;
if ($tmp1876) goto block179; else goto block180;
block179:;
// line 547
frost$core$MutableString* $tmp1877 = *(&local105);
org$frostlang$frostc$ASTNode* $tmp1878 = *(&local104);
frost$core$String* $tmp1879 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1880, ((frost$core$Object*) $tmp1878));
frost$core$MutableString$append$frost$core$String($tmp1877, $tmp1879);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
goto block180;
block180:;
// line 549
frost$core$MutableString* $tmp1881 = *(&local105);
frost$core$String* $tmp1882 = frost$core$MutableString$finish$R$frost$core$String($tmp1881);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
frost$core$MutableString* $tmp1883 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
*(&local105) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1884 = *(&local104);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1884));
*(&local104) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1885 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1885));
*(&local103) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1886 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
*(&local101) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1882;
block171:;
frost$core$Int64 $tmp1887 = (frost$core$Int64) {36};
frost$core$Bit $tmp1888 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1887);
bool $tmp1889 = $tmp1888.value;
if ($tmp1889) goto block181; else goto block182;
block181:;
org$frostlang$frostc$Position* $tmp1890 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1891 = *$tmp1890;
frost$core$Real64* $tmp1892 = (frost$core$Real64*) (param0->$data + 16);
frost$core$Real64 $tmp1893 = *$tmp1892;
*(&local106) = $tmp1893;
// line 552
frost$core$Real64 $tmp1894 = *(&local106);
frost$core$Real64$wrapper* $tmp1895;
$tmp1895 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp1895->value = $tmp1894;
$fn1897 $tmp1896 = ($fn1897) ((frost$core$Object*) $tmp1895)->$class->vtable[0];
frost$core$String* $tmp1898 = $tmp1896(((frost$core$Object*) $tmp1895));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
return $tmp1898;
block182:;
frost$core$Int64 $tmp1899 = (frost$core$Int64) {37};
frost$core$Bit $tmp1900 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1899);
bool $tmp1901 = $tmp1900.value;
if ($tmp1901) goto block183; else goto block184;
block183:;
org$frostlang$frostc$Position* $tmp1902 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1903 = *$tmp1902;
frost$core$String** $tmp1904 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1905 = *$tmp1904;
*(&local107) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
frost$core$String* $tmp1906 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
*(&local107) = $tmp1905;
// line 555
frost$core$String* $tmp1907 = *(&local107);
frost$core$String* $tmp1908 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1909, $tmp1907);
frost$core$String* $tmp1910 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1908, &$s1911);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
frost$core$String* $tmp1912 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
*(&local107) = ((frost$core$String*) NULL);
return $tmp1910;
block184:;
frost$core$Int64 $tmp1913 = (frost$core$Int64) {38};
frost$core$Bit $tmp1914 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1913);
bool $tmp1915 = $tmp1914.value;
if ($tmp1915) goto block185; else goto block186;
block185:;
org$frostlang$frostc$Position* $tmp1916 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1917 = *$tmp1916;
org$frostlang$frostc$ASTNode** $tmp1918 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1919 = *$tmp1918;
*(&local108) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
org$frostlang$frostc$ASTNode* $tmp1920 = *(&local108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1920));
*(&local108) = $tmp1919;
// line 558
org$frostlang$frostc$ASTNode* $tmp1921 = *(&local108);
frost$core$Bit $tmp1922 = frost$core$Bit$init$builtin_bit($tmp1921 != NULL);
bool $tmp1923 = $tmp1922.value;
if ($tmp1923) goto block187; else goto block188;
block187:;
// line 559
org$frostlang$frostc$ASTNode* $tmp1924 = *(&local108);
frost$core$String* $tmp1925 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1926, ((frost$core$Object*) $tmp1924));
frost$core$String* $tmp1927 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1925, &$s1928);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
org$frostlang$frostc$ASTNode* $tmp1929 = *(&local108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
*(&local108) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1927;
block188:;
// line 561
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1930));
org$frostlang$frostc$ASTNode* $tmp1931 = *(&local108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
*(&local108) = ((org$frostlang$frostc$ASTNode*) NULL);
return &$s1932;
block186:;
frost$core$Int64 $tmp1933 = (frost$core$Int64) {39};
frost$core$Bit $tmp1934 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1933);
bool $tmp1935 = $tmp1934.value;
if ($tmp1935) goto block189; else goto block190;
block189:;
// line 564
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1936));
return &$s1937;
block190:;
frost$core$Int64 $tmp1938 = (frost$core$Int64) {40};
frost$core$Bit $tmp1939 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1938);
bool $tmp1940 = $tmp1939.value;
if ($tmp1940) goto block191; else goto block192;
block191:;
org$frostlang$frostc$Position* $tmp1941 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1942 = *$tmp1941;
frost$core$String** $tmp1943 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1944 = *$tmp1943;
*(&local109) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
frost$core$String* $tmp1945 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1945));
*(&local109) = $tmp1944;
// line 567
frost$core$String* $tmp1946 = *(&local109);
frost$core$String* $tmp1947 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp1946, &$s1948);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1947));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1947));
frost$core$String* $tmp1949 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
*(&local109) = ((frost$core$String*) NULL);
return $tmp1947;
block192:;
frost$core$Int64 $tmp1950 = (frost$core$Int64) {41};
frost$core$Bit $tmp1951 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1950);
bool $tmp1952 = $tmp1951.value;
if ($tmp1952) goto block193; else goto block194;
block193:;
// line 570
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1953));
return &$s1954;
block194:;
frost$core$Int64 $tmp1955 = (frost$core$Int64) {43};
frost$core$Bit $tmp1956 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1955);
bool $tmp1957 = $tmp1956.value;
if ($tmp1957) goto block195; else goto block196;
block195:;
org$frostlang$frostc$Position* $tmp1958 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1959 = *$tmp1958;
org$frostlang$frostc$FixedArray** $tmp1960 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp1961 = *$tmp1960;
*(&local110) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1961));
org$frostlang$frostc$FixedArray* $tmp1962 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
*(&local110) = $tmp1961;
// line 573
org$frostlang$frostc$FixedArray* $tmp1963 = *(&local110);
ITable* $tmp1964 = ((frost$collections$CollectionView*) $tmp1963)->$class->itable;
while ($tmp1964->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1964 = $tmp1964->next;
}
$fn1966 $tmp1965 = $tmp1964->methods[1];
frost$core$String* $tmp1967 = $tmp1965(((frost$collections$CollectionView*) $tmp1963));
frost$core$String* $tmp1968 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1969, $tmp1967);
frost$core$String* $tmp1970 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1968, &$s1971);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1967));
org$frostlang$frostc$FixedArray* $tmp1972 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
*(&local110) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1970;
block196:;
frost$core$Int64 $tmp1973 = (frost$core$Int64) {44};
frost$core$Bit $tmp1974 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1973);
bool $tmp1975 = $tmp1974.value;
if ($tmp1975) goto block197; else goto block198;
block197:;
org$frostlang$frostc$Position* $tmp1976 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1977 = *$tmp1976;
org$frostlang$frostc$FixedArray** $tmp1978 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp1979 = *$tmp1978;
*(&local111) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
org$frostlang$frostc$FixedArray* $tmp1980 = *(&local111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
*(&local111) = $tmp1979;
// line 576
org$frostlang$frostc$FixedArray* $tmp1981 = *(&local111);
ITable* $tmp1982 = ((frost$collections$CollectionView*) $tmp1981)->$class->itable;
while ($tmp1982->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1982 = $tmp1982->next;
}
$fn1984 $tmp1983 = $tmp1982->methods[1];
frost$core$String* $tmp1985 = $tmp1983(((frost$collections$CollectionView*) $tmp1981));
frost$core$String* $tmp1986 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1987, $tmp1985);
frost$core$String* $tmp1988 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1986, &$s1989);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1988));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1988));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
org$frostlang$frostc$FixedArray* $tmp1990 = *(&local111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
*(&local111) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1988;
block198:;
frost$core$Int64 $tmp1991 = (frost$core$Int64) {45};
frost$core$Bit $tmp1992 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1991);
bool $tmp1993 = $tmp1992.value;
if ($tmp1993) goto block199; else goto block200;
block199:;
org$frostlang$frostc$Position* $tmp1994 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1995 = *$tmp1994;
org$frostlang$frostc$FixedArray** $tmp1996 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp1997 = *$tmp1996;
*(&local112) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1997));
org$frostlang$frostc$FixedArray* $tmp1998 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
*(&local112) = $tmp1997;
// line 579
org$frostlang$frostc$FixedArray* $tmp1999 = *(&local112);
ITable* $tmp2000 = ((frost$collections$CollectionView*) $tmp1999)->$class->itable;
while ($tmp2000->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2000 = $tmp2000->next;
}
$fn2002 $tmp2001 = $tmp2000->methods[1];
frost$core$String* $tmp2003 = $tmp2001(((frost$collections$CollectionView*) $tmp1999));
frost$core$String* $tmp2004 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2005, $tmp2003);
frost$core$String* $tmp2006 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2004, &$s2007);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2006));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2006));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2004));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2003));
org$frostlang$frostc$FixedArray* $tmp2008 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
*(&local112) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2006;
block200:;
frost$core$Int64 $tmp2009 = (frost$core$Int64) {42};
frost$core$Bit $tmp2010 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2009);
bool $tmp2011 = $tmp2010.value;
if ($tmp2011) goto block201; else goto block202;
block201:;
org$frostlang$frostc$Position* $tmp2012 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2013 = *$tmp2012;
org$frostlang$frostc$FixedArray** $tmp2014 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2015 = *$tmp2014;
*(&local113) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2015));
org$frostlang$frostc$FixedArray* $tmp2016 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2016));
*(&local113) = $tmp2015;
org$frostlang$frostc$ASTNode** $tmp2017 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2018 = *$tmp2017;
*(&local114) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2018));
org$frostlang$frostc$ASTNode* $tmp2019 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
*(&local114) = $tmp2018;
org$frostlang$frostc$FixedArray** $tmp2020 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2021 = *$tmp2020;
*(&local115) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
org$frostlang$frostc$FixedArray* $tmp2022 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
*(&local115) = $tmp2021;
// line 582
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2023 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2023, &$s2024);
*(&local116) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2023));
frost$core$MutableString* $tmp2025 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2025));
*(&local116) = $tmp2023;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2023));
// line 583
org$frostlang$frostc$FixedArray* $tmp2026 = *(&local113);
frost$core$MutableString* $tmp2027 = *(&local116);
*(&local117) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2027));
frost$core$MutableString* $tmp2028 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
*(&local117) = $tmp2027;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$ASTNode$_Closure3));
org$frostlang$frostc$ASTNode$_Closure3* $tmp2029 = (org$frostlang$frostc$ASTNode$_Closure3*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ASTNode$_Closure3$class);
frost$core$MutableString* $tmp2030 = *(&local117);
org$frostlang$frostc$ASTNode$_Closure3$init$frost$core$MutableString($tmp2029, $tmp2030);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2032 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp2032, ((frost$core$Int8*) org$frostlang$frostc$ASTNode$_Closure3$$anonymous2$frost$core$Object), ((frost$core$Object*) $tmp2029));
ITable* $tmp2033 = ((frost$collections$CollectionView*) $tmp2026)->$class->itable;
while ($tmp2033->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2033 = $tmp2033->next;
}
$fn2035 $tmp2034 = $tmp2033->methods[7];
$tmp2034(((frost$collections$CollectionView*) $tmp2026), $tmp2032);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
// line 584
org$frostlang$frostc$ASTNode* $tmp2036 = *(&local114);
frost$core$Bit $tmp2037 = frost$core$Bit$init$builtin_bit($tmp2036 != NULL);
bool $tmp2038 = $tmp2037.value;
if ($tmp2038) goto block203; else goto block205;
block203:;
// line 585
frost$core$MutableString* $tmp2039 = *(&local116);
org$frostlang$frostc$ASTNode* $tmp2040 = *(&local114);
frost$core$String* $tmp2041 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2042, ((frost$core$Object*) $tmp2040));
frost$core$String* $tmp2043 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2041, &$s2044);
frost$core$MutableString$append$frost$core$String($tmp2039, $tmp2043);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2041));
goto block204;
block205:;
// line 1
// line 588
frost$core$MutableString* $tmp2045 = *(&local116);
frost$core$MutableString$append$frost$core$String($tmp2045, &$s2046);
goto block204;
block204:;
// line 590
org$frostlang$frostc$FixedArray* $tmp2047 = *(&local115);
frost$core$MutableString* $tmp2048 = *(&local116);
*(&local118) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2048));
frost$core$MutableString* $tmp2049 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
*(&local118) = $tmp2048;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$ASTNode$_Closure6));
org$frostlang$frostc$ASTNode$_Closure6* $tmp2050 = (org$frostlang$frostc$ASTNode$_Closure6*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ASTNode$_Closure6$class);
frost$core$MutableString* $tmp2051 = *(&local118);
org$frostlang$frostc$ASTNode$_Closure6$init$frost$core$MutableString($tmp2050, $tmp2051);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2053 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp2053, ((frost$core$Int8*) org$frostlang$frostc$ASTNode$_Closure6$$anonymous5$frost$core$Object), ((frost$core$Object*) $tmp2050));
ITable* $tmp2054 = ((frost$collections$CollectionView*) $tmp2047)->$class->itable;
while ($tmp2054->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2054 = $tmp2054->next;
}
$fn2056 $tmp2055 = $tmp2054->methods[7];
$tmp2055(((frost$collections$CollectionView*) $tmp2047), $tmp2053);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2050));
// line 591
frost$core$MutableString* $tmp2057 = *(&local116);
frost$core$MutableString$append$frost$core$String($tmp2057, &$s2058);
// line 592
frost$core$MutableString* $tmp2059 = *(&local116);
frost$core$String* $tmp2060 = frost$core$MutableString$finish$R$frost$core$String($tmp2059);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
frost$core$MutableString* $tmp2061 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
*(&local118) = ((frost$core$MutableString*) NULL);
frost$core$MutableString* $tmp2062 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
*(&local117) = ((frost$core$MutableString*) NULL);
frost$core$MutableString* $tmp2063 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
*(&local116) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2064 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
*(&local115) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2065 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
*(&local114) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2066 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2066));
*(&local113) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2060;
block202:;
frost$core$Int64 $tmp2067 = (frost$core$Int64) {46};
frost$core$Bit $tmp2068 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2067);
bool $tmp2069 = $tmp2068.value;
if ($tmp2069) goto block206; else goto block207;
block206:;
org$frostlang$frostc$Position* $tmp2070 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2071 = *$tmp2070;
frost$core$String** $tmp2072 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2073 = *$tmp2072;
*(&local119) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2073));
frost$core$String* $tmp2074 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2074));
*(&local119) = $tmp2073;
// line 595
frost$core$String* $tmp2075 = *(&local119);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
frost$core$String* $tmp2076 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2076));
*(&local119) = ((frost$core$String*) NULL);
return $tmp2075;
block207:;
frost$core$Int64 $tmp2077 = (frost$core$Int64) {48};
frost$core$Bit $tmp2078 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2077);
bool $tmp2079 = $tmp2078.value;
if ($tmp2079) goto block208; else goto block209;
block208:;
org$frostlang$frostc$Position* $tmp2080 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2081 = *$tmp2080;
frost$core$String** $tmp2082 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2083 = *$tmp2082;
*(&local120) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
frost$core$String* $tmp2084 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
*(&local120) = $tmp2083;
org$frostlang$frostc$ASTNode** $tmp2085 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2086 = *$tmp2085;
*(&local121) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
org$frostlang$frostc$ASTNode* $tmp2087 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2087));
*(&local121) = $tmp2086;
// line 598
org$frostlang$frostc$ASTNode* $tmp2088 = *(&local121);
frost$core$Bit $tmp2089 = frost$core$Bit$init$builtin_bit($tmp2088 != NULL);
bool $tmp2090 = $tmp2089.value;
if ($tmp2090) goto block210; else goto block211;
block210:;
// line 599
frost$core$String* $tmp2091 = *(&local120);
frost$core$String* $tmp2092 = frost$core$String$get_asString$R$frost$core$String($tmp2091);
frost$core$String* $tmp2093 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2092, &$s2094);
org$frostlang$frostc$ASTNode* $tmp2095 = *(&local121);
frost$core$String* $tmp2096 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2093, ((frost$core$Object*) $tmp2095));
frost$core$String* $tmp2097 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2096, &$s2098);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
org$frostlang$frostc$ASTNode* $tmp2099 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
*(&local121) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2100 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2100));
*(&local120) = ((frost$core$String*) NULL);
return $tmp2097;
block211:;
// line 601
frost$core$String* $tmp2101 = *(&local120);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2101));
org$frostlang$frostc$ASTNode* $tmp2102 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2102));
*(&local121) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2103 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2103));
*(&local120) = ((frost$core$String*) NULL);
return $tmp2101;
block209:;
frost$core$Int64 $tmp2104 = (frost$core$Int64) {47};
frost$core$Bit $tmp2105 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2104);
bool $tmp2106 = $tmp2105.value;
if ($tmp2106) goto block212; else goto block213;
block212:;
org$frostlang$frostc$Position* $tmp2107 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2108 = *$tmp2107;
org$frostlang$frostc$FixedArray** $tmp2109 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2110 = *$tmp2109;
*(&local122) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
org$frostlang$frostc$FixedArray* $tmp2111 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
*(&local122) = $tmp2110;
org$frostlang$frostc$ASTNode** $tmp2112 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2113 = *$tmp2112;
*(&local123) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
org$frostlang$frostc$ASTNode* $tmp2114 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
*(&local123) = $tmp2113;
// line 604
org$frostlang$frostc$FixedArray* $tmp2115 = *(&local122);
ITable* $tmp2116 = ((frost$collections$CollectionView*) $tmp2115)->$class->itable;
while ($tmp2116->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2116 = $tmp2116->next;
}
$fn2118 $tmp2117 = $tmp2116->methods[1];
frost$core$String* $tmp2119 = $tmp2117(((frost$collections$CollectionView*) $tmp2115));
frost$core$String* $tmp2120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2121, $tmp2119);
frost$core$String* $tmp2122 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2120, &$s2123);
org$frostlang$frostc$ASTNode* $tmp2124 = *(&local123);
frost$core$String* $tmp2125 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2122, ((frost$core$Object*) $tmp2124));
frost$core$String* $tmp2126 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2125, &$s2127);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
org$frostlang$frostc$ASTNode* $tmp2128 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
*(&local123) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2129 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
*(&local122) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2126;
block213:;
frost$core$Int64 $tmp2130 = (frost$core$Int64) {49};
frost$core$Bit $tmp2131 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2130);
bool $tmp2132 = $tmp2131.value;
if ($tmp2132) goto block214; else goto block215;
block214:;
org$frostlang$frostc$Position* $tmp2133 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2134 = *$tmp2133;
org$frostlang$frostc$expression$Unary$Operator* $tmp2135 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 16);
org$frostlang$frostc$expression$Unary$Operator $tmp2136 = *$tmp2135;
*(&local124) = $tmp2136;
org$frostlang$frostc$ASTNode** $tmp2137 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2138 = *$tmp2137;
*(&local125) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
org$frostlang$frostc$ASTNode* $tmp2139 = *(&local125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
*(&local125) = $tmp2138;
// line 607
org$frostlang$frostc$expression$Unary$Operator $tmp2140 = *(&local124);
frost$core$String* $tmp2141 = org$frostlang$frostc$expression$Unary$Operator$get_asString$R$frost$core$String($tmp2140);
frost$core$String* $tmp2142 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2141, &$s2143);
org$frostlang$frostc$ASTNode* $tmp2144 = *(&local125);
frost$core$String* $tmp2145 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2142, ((frost$core$Object*) $tmp2144));
frost$core$String* $tmp2146 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2145, &$s2147);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2141));
org$frostlang$frostc$ASTNode* $tmp2148 = *(&local125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2148));
*(&local125) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2146;
block215:;
frost$core$Int64 $tmp2149 = (frost$core$Int64) {50};
frost$core$Bit $tmp2150 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2149);
bool $tmp2151 = $tmp2150.value;
if ($tmp2151) goto block216; else goto block217;
block216:;
org$frostlang$frostc$Position* $tmp2152 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2153 = *$tmp2152;
org$frostlang$frostc$ASTNode** $tmp2154 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2155 = *$tmp2154;
*(&local126) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
org$frostlang$frostc$ASTNode* $tmp2156 = *(&local126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
*(&local126) = $tmp2155;
// line 610
org$frostlang$frostc$ASTNode* $tmp2157 = *(&local126);
frost$core$Bit $tmp2158 = frost$core$Bit$init$builtin_bit($tmp2157 != NULL);
bool $tmp2159 = $tmp2158.value;
if ($tmp2159) goto block218; else goto block219;
block218:;
// line 611
org$frostlang$frostc$ASTNode* $tmp2160 = *(&local126);
frost$core$String* $tmp2161 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2162, ((frost$core$Object*) $tmp2160));
frost$core$String* $tmp2163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2161, &$s2164);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2161));
org$frostlang$frostc$ASTNode* $tmp2165 = *(&local126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2165));
*(&local126) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2163;
block219:;
// line 613
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2166));
org$frostlang$frostc$ASTNode* $tmp2167 = *(&local126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2167));
*(&local126) = ((org$frostlang$frostc$ASTNode*) NULL);
return &$s2168;
block217:;
frost$core$Int64 $tmp2169 = (frost$core$Int64) {51};
frost$core$Bit $tmp2170 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2169);
bool $tmp2171 = $tmp2170.value;
if ($tmp2171) goto block220; else goto block221;
block220:;
org$frostlang$frostc$Position* $tmp2172 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2173 = *$tmp2172;
org$frostlang$frostc$FixedArray** $tmp2174 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2175 = *$tmp2174;
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2175));
org$frostlang$frostc$FixedArray* $tmp2176 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2176));
*(&local127) = $tmp2175;
org$frostlang$frostc$ASTNode** $tmp2177 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2178 = *$tmp2177;
*(&local128) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2178));
org$frostlang$frostc$ASTNode* $tmp2179 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2179));
*(&local128) = $tmp2178;
// line 616
org$frostlang$frostc$FixedArray* $tmp2180 = *(&local127);
ITable* $tmp2181 = ((frost$collections$CollectionView*) $tmp2180)->$class->itable;
while ($tmp2181->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2181 = $tmp2181->next;
}
$fn2183 $tmp2182 = $tmp2181->methods[1];
frost$core$String* $tmp2184 = $tmp2182(((frost$collections$CollectionView*) $tmp2180));
frost$core$String* $tmp2185 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2186, $tmp2184);
frost$core$String* $tmp2187 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2185, &$s2188);
org$frostlang$frostc$ASTNode* $tmp2189 = *(&local128);
frost$core$String* $tmp2190 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2187, ((frost$core$Object*) $tmp2189));
frost$core$String* $tmp2191 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2190, &$s2192);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
org$frostlang$frostc$ASTNode* $tmp2193 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2193));
*(&local128) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2194 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2191;
block221:;
frost$core$Int64 $tmp2195 = (frost$core$Int64) {52};
frost$core$Bit $tmp2196 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2195);
bool $tmp2197 = $tmp2196.value;
if ($tmp2197) goto block222; else goto block223;
block222:;
org$frostlang$frostc$Position* $tmp2198 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2199 = *$tmp2198;
frost$core$String** $tmp2200 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2201 = *$tmp2200;
*(&local129) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2201));
frost$core$String* $tmp2202 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2202));
*(&local129) = $tmp2201;
// line 619
frost$core$String* $tmp2203 = *(&local129);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2203));
frost$core$String* $tmp2204 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2204));
*(&local129) = ((frost$core$String*) NULL);
return $tmp2203;
block223:;
frost$core$Int64 $tmp2205 = (frost$core$Int64) {53};
frost$core$Bit $tmp2206 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2205);
bool $tmp2207 = $tmp2206.value;
if ($tmp2207) goto block224; else goto block225;
block224:;
org$frostlang$frostc$Position* $tmp2208 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2209 = *$tmp2208;
org$frostlang$frostc$Variable$Kind* $tmp2210 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp2211 = *$tmp2210;
*(&local130) = $tmp2211;
org$frostlang$frostc$FixedArray** $tmp2212 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2213 = *$tmp2212;
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2213));
org$frostlang$frostc$FixedArray* $tmp2214 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2214));
*(&local131) = $tmp2213;
// line 622
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2215 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2215);
*(&local132) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2215));
frost$core$MutableString* $tmp2216 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
*(&local132) = $tmp2215;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2215));
// line 623
org$frostlang$frostc$Variable$Kind $tmp2217 = *(&local130);
frost$core$Int64 $tmp2218 = $tmp2217.$rawValue;
frost$core$Int64 $tmp2219 = (frost$core$Int64) {0};
frost$core$Bit $tmp2220 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2218, $tmp2219);
bool $tmp2221 = $tmp2220.value;
if ($tmp2221) goto block227; else goto block228;
block227:;
// line 624
frost$core$MutableString* $tmp2222 = *(&local132);
frost$core$MutableString$append$frost$core$String($tmp2222, &$s2223);
goto block226;
block228:;
frost$core$Int64 $tmp2224 = (frost$core$Int64) {1};
frost$core$Bit $tmp2225 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2218, $tmp2224);
bool $tmp2226 = $tmp2225.value;
if ($tmp2226) goto block229; else goto block230;
block229:;
// line 625
frost$core$MutableString* $tmp2227 = *(&local132);
frost$core$MutableString$append$frost$core$String($tmp2227, &$s2228);
goto block226;
block230:;
frost$core$Int64 $tmp2229 = (frost$core$Int64) {2};
frost$core$Bit $tmp2230 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2218, $tmp2229);
bool $tmp2231 = $tmp2230.value;
if ($tmp2231) goto block231; else goto block232;
block231:;
// line 626
frost$core$MutableString* $tmp2232 = *(&local132);
frost$core$MutableString$append$frost$core$String($tmp2232, &$s2233);
goto block226;
block232:;
frost$core$Int64 $tmp2234 = (frost$core$Int64) {3};
frost$core$Bit $tmp2235 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2218, $tmp2234);
bool $tmp2236 = $tmp2235.value;
if ($tmp2236) goto block233; else goto block226;
block233:;
// line 627
frost$core$MutableString* $tmp2237 = *(&local132);
frost$core$MutableString$append$frost$core$String($tmp2237, &$s2238);
goto block226;
block226:;
// line 629
frost$core$MutableString* $tmp2239 = *(&local132);
org$frostlang$frostc$FixedArray* $tmp2240 = *(&local131);
ITable* $tmp2241 = ((frost$collections$CollectionView*) $tmp2240)->$class->itable;
while ($tmp2241->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2241 = $tmp2241->next;
}
$fn2243 $tmp2242 = $tmp2241->methods[1];
frost$core$String* $tmp2244 = $tmp2242(((frost$collections$CollectionView*) $tmp2240));
frost$core$MutableString$append$frost$core$String($tmp2239, $tmp2244);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
// line 630
frost$core$MutableString* $tmp2245 = *(&local132);
frost$core$String* $tmp2246 = frost$core$MutableString$finish$R$frost$core$String($tmp2245);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2246));
frost$core$MutableString* $tmp2247 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
*(&local132) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2248 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2246;
block225:;
frost$core$Int64 $tmp2249 = (frost$core$Int64) {54};
frost$core$Bit $tmp2250 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2249);
bool $tmp2251 = $tmp2250.value;
if ($tmp2251) goto block234; else goto block235;
block234:;
org$frostlang$frostc$Position* $tmp2252 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2253 = *$tmp2252;
org$frostlang$frostc$FixedArray** $tmp2254 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2255 = *$tmp2254;
*(&local133) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2255));
org$frostlang$frostc$FixedArray* $tmp2256 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
*(&local133) = $tmp2255;
org$frostlang$frostc$FixedArray** $tmp2257 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2258 = *$tmp2257;
*(&local134) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2258));
org$frostlang$frostc$FixedArray* $tmp2259 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2259));
*(&local134) = $tmp2258;
// line 633
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2260 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2260, &$s2261);
*(&local135) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
frost$core$MutableString* $tmp2262 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2262));
*(&local135) = $tmp2260;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
// line 634
*(&local136) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2263));
frost$core$String* $tmp2264 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2264));
*(&local136) = &$s2265;
// line 635
org$frostlang$frostc$FixedArray* $tmp2266 = *(&local133);
ITable* $tmp2267 = ((frost$collections$Iterable*) $tmp2266)->$class->itable;
while ($tmp2267->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2267 = $tmp2267->next;
}
$fn2269 $tmp2268 = $tmp2267->methods[0];
frost$collections$Iterator* $tmp2270 = $tmp2268(((frost$collections$Iterable*) $tmp2266));
goto block236;
block236:;
ITable* $tmp2271 = $tmp2270->$class->itable;
while ($tmp2271->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2271 = $tmp2271->next;
}
$fn2273 $tmp2272 = $tmp2271->methods[0];
frost$core$Bit $tmp2274 = $tmp2272($tmp2270);
bool $tmp2275 = $tmp2274.value;
if ($tmp2275) goto block238; else goto block237;
block237:;
*(&local137) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2276 = $tmp2270->$class->itable;
while ($tmp2276->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2276 = $tmp2276->next;
}
$fn2278 $tmp2277 = $tmp2276->methods[1];
frost$core$Object* $tmp2279 = $tmp2277($tmp2270);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2279)));
org$frostlang$frostc$ASTNode* $tmp2280 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2280));
*(&local137) = ((org$frostlang$frostc$ASTNode*) $tmp2279);
// line 636
frost$core$MutableString* $tmp2281 = *(&local135);
frost$core$String* $tmp2282 = *(&local136);
frost$core$String* $tmp2283 = frost$core$String$get_asString$R$frost$core$String($tmp2282);
frost$core$String* $tmp2284 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2283, &$s2285);
org$frostlang$frostc$ASTNode* $tmp2286 = *(&local137);
frost$core$String* $tmp2287 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2284, ((frost$core$Object*) $tmp2286));
frost$core$String* $tmp2288 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2287, &$s2289);
frost$core$MutableString$append$frost$core$String($tmp2281, $tmp2288);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2283));
frost$core$Frost$unref$frost$core$Object$Q($tmp2279);
org$frostlang$frostc$ASTNode* $tmp2290 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
*(&local137) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block236;
block238:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
// line 638
frost$core$MutableString* $tmp2291 = *(&local135);
frost$core$MutableString$append$frost$core$String($tmp2291, &$s2292);
// line 639
org$frostlang$frostc$FixedArray* $tmp2293 = *(&local134);
ITable* $tmp2294 = ((frost$collections$Iterable*) $tmp2293)->$class->itable;
while ($tmp2294->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2294 = $tmp2294->next;
}
$fn2296 $tmp2295 = $tmp2294->methods[0];
frost$collections$Iterator* $tmp2297 = $tmp2295(((frost$collections$Iterable*) $tmp2293));
goto block239;
block239:;
ITable* $tmp2298 = $tmp2297->$class->itable;
while ($tmp2298->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2298 = $tmp2298->next;
}
$fn2300 $tmp2299 = $tmp2298->methods[0];
frost$core$Bit $tmp2301 = $tmp2299($tmp2297);
bool $tmp2302 = $tmp2301.value;
if ($tmp2302) goto block241; else goto block240;
block240:;
*(&local138) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2303 = $tmp2297->$class->itable;
while ($tmp2303->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2303 = $tmp2303->next;
}
$fn2305 $tmp2304 = $tmp2303->methods[1];
frost$core$Object* $tmp2306 = $tmp2304($tmp2297);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2306)));
org$frostlang$frostc$ASTNode* $tmp2307 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2307));
*(&local138) = ((org$frostlang$frostc$ASTNode*) $tmp2306);
// line 640
frost$core$MutableString* $tmp2308 = *(&local135);
org$frostlang$frostc$ASTNode* $tmp2309 = *(&local138);
frost$core$String* $tmp2310 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2311, ((frost$core$Object*) $tmp2309));
frost$core$MutableString$append$frost$core$String($tmp2308, $tmp2310);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2310));
frost$core$Frost$unref$frost$core$Object$Q($tmp2306);
org$frostlang$frostc$ASTNode* $tmp2312 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2312));
*(&local138) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block239;
block241:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2297));
// line 642
frost$core$MutableString* $tmp2313 = *(&local135);
frost$core$String* $tmp2314 = frost$core$MutableString$finish$R$frost$core$String($tmp2313);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2314));
frost$core$String* $tmp2315 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
*(&local136) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2316 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
*(&local135) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2317 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
*(&local134) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2318 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2318));
*(&local133) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2314;
block235:;
frost$core$Int64 $tmp2319 = (frost$core$Int64) {55};
frost$core$Bit $tmp2320 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2319);
bool $tmp2321 = $tmp2320.value;
if ($tmp2321) goto block242; else goto block243;
block242:;
org$frostlang$frostc$Position* $tmp2322 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2323 = *$tmp2322;
frost$core$String** $tmp2324 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2325 = *$tmp2324;
*(&local139) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2325));
frost$core$String* $tmp2326 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
*(&local139) = $tmp2325;
org$frostlang$frostc$ASTNode** $tmp2327 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2328 = *$tmp2327;
*(&local140) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2328));
org$frostlang$frostc$ASTNode* $tmp2329 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
*(&local140) = $tmp2328;
org$frostlang$frostc$FixedArray** $tmp2330 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2331 = *$tmp2330;
*(&local141) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2331));
org$frostlang$frostc$FixedArray* $tmp2332 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
*(&local141) = $tmp2331;
// line 645
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2333 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2333);
*(&local142) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2333));
frost$core$MutableString* $tmp2334 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2334));
*(&local142) = $tmp2333;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2333));
// line 646
frost$core$String* $tmp2335 = *(&local139);
frost$core$Bit $tmp2336 = frost$core$Bit$init$builtin_bit($tmp2335 != NULL);
bool $tmp2337 = $tmp2336.value;
if ($tmp2337) goto block244; else goto block245;
block244:;
// line 647
frost$core$MutableString* $tmp2338 = *(&local142);
frost$core$String* $tmp2339 = *(&local139);
frost$core$String* $tmp2340 = frost$core$String$get_asString$R$frost$core$String($tmp2339);
frost$core$String* $tmp2341 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2340, &$s2342);
frost$core$MutableString$append$frost$core$String($tmp2338, $tmp2341);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
goto block245;
block245:;
// line 649
frost$core$MutableString* $tmp2343 = *(&local142);
org$frostlang$frostc$ASTNode* $tmp2344 = *(&local140);
frost$core$String* $tmp2345 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2346, ((frost$core$Object*) $tmp2344));
frost$core$String* $tmp2347 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2345, &$s2348);
frost$core$MutableString$append$frost$core$String($tmp2343, $tmp2347);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2345));
// line 650
org$frostlang$frostc$FixedArray* $tmp2349 = *(&local141);
ITable* $tmp2350 = ((frost$collections$Iterable*) $tmp2349)->$class->itable;
while ($tmp2350->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2350 = $tmp2350->next;
}
$fn2352 $tmp2351 = $tmp2350->methods[0];
frost$collections$Iterator* $tmp2353 = $tmp2351(((frost$collections$Iterable*) $tmp2349));
goto block246;
block246:;
ITable* $tmp2354 = $tmp2353->$class->itable;
while ($tmp2354->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2354 = $tmp2354->next;
}
$fn2356 $tmp2355 = $tmp2354->methods[0];
frost$core$Bit $tmp2357 = $tmp2355($tmp2353);
bool $tmp2358 = $tmp2357.value;
if ($tmp2358) goto block248; else goto block247;
block247:;
*(&local143) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2359 = $tmp2353->$class->itable;
while ($tmp2359->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2359 = $tmp2359->next;
}
$fn2361 $tmp2360 = $tmp2359->methods[1];
frost$core$Object* $tmp2362 = $tmp2360($tmp2353);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2362)));
org$frostlang$frostc$ASTNode* $tmp2363 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
*(&local143) = ((org$frostlang$frostc$ASTNode*) $tmp2362);
// line 651
frost$core$MutableString* $tmp2364 = *(&local142);
org$frostlang$frostc$ASTNode* $tmp2365 = *(&local143);
frost$core$String* $tmp2366 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp2365), &$s2367);
frost$core$MutableString$append$frost$core$String($tmp2364, $tmp2366);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2366));
frost$core$Frost$unref$frost$core$Object$Q($tmp2362);
org$frostlang$frostc$ASTNode* $tmp2368 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2368));
*(&local143) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block246;
block248:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2353));
// line 653
frost$core$MutableString* $tmp2369 = *(&local142);
frost$core$MutableString$append$frost$core$String($tmp2369, &$s2370);
// line 654
frost$core$MutableString* $tmp2371 = *(&local142);
frost$core$String* $tmp2372 = frost$core$MutableString$finish$R$frost$core$String($tmp2371);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
frost$core$MutableString* $tmp2373 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2373));
*(&local142) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2374 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2374));
*(&local141) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2375 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2375));
*(&local140) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2376 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
*(&local139) = ((frost$core$String*) NULL);
return $tmp2372;
block243:;
// line 657
frost$core$Int64 $tmp2377 = (frost$core$Int64) {657};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2378, $tmp2377);
abort(); // unreachable
block1:;
goto block249;
block249:;

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
org$frostlang$frostc$FixedArray* local135 = NULL;
org$frostlang$frostc$Position local136;
frost$core$String* local137 = NULL;
org$frostlang$frostc$Position local138;
org$frostlang$frostc$FixedArray* local139 = NULL;
org$frostlang$frostc$ASTNode* local140 = NULL;
org$frostlang$frostc$Position local141;
frost$core$String* local142 = NULL;
org$frostlang$frostc$ASTNode* local143 = NULL;
org$frostlang$frostc$Position local144;
org$frostlang$frostc$expression$Unary$Operator local145;
org$frostlang$frostc$ASTNode* local146 = NULL;
org$frostlang$frostc$Position local147;
org$frostlang$frostc$ASTNode* local148 = NULL;
org$frostlang$frostc$Position local149;
org$frostlang$frostc$FixedArray* local150 = NULL;
org$frostlang$frostc$ASTNode* local151 = NULL;
org$frostlang$frostc$Position local152;
frost$core$String* local153 = NULL;
org$frostlang$frostc$Position local154;
org$frostlang$frostc$Variable$Kind local155;
org$frostlang$frostc$FixedArray* local156 = NULL;
org$frostlang$frostc$Position local157;
org$frostlang$frostc$FixedArray* local158 = NULL;
org$frostlang$frostc$FixedArray* local159 = NULL;
org$frostlang$frostc$Position local160;
frost$core$String* local161 = NULL;
org$frostlang$frostc$ASTNode* local162 = NULL;
org$frostlang$frostc$FixedArray* local163 = NULL;
// line 7
frost$core$Int64* $tmp2379 = &param0->$rawValue;
frost$core$Int64 $tmp2380 = *$tmp2379;
frost$core$Int64 $tmp2381 = (frost$core$Int64) {0};
frost$core$Bit $tmp2382 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2381);
bool $tmp2383 = $tmp2382.value;
if ($tmp2383) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp2384 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2385 = *$tmp2384;
*(&local0) = $tmp2385;
frost$core$String** $tmp2386 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2387 = *$tmp2386;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2387));
frost$core$String* $tmp2388 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2388));
*(&local1) = $tmp2387;
frost$core$String** $tmp2389 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2390 = *$tmp2389;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
frost$core$String* $tmp2391 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2391));
*(&local2) = $tmp2390;
org$frostlang$frostc$ASTNode** $tmp2392 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2393 = *$tmp2392;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2393));
org$frostlang$frostc$ASTNode* $tmp2394 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
*(&local3) = $tmp2393;
// line 1
frost$core$String* $tmp2395 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2395));
// line 1
frost$core$String* $tmp2396 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
// line 1
org$frostlang$frostc$ASTNode* $tmp2397 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
org$frostlang$frostc$ASTNode* $tmp2398 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2399 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2399));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2400 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2400));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp2401 = (frost$core$Int64) {1};
frost$core$Bit $tmp2402 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2401);
bool $tmp2403 = $tmp2402.value;
if ($tmp2403) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp2404 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2405 = *$tmp2404;
*(&local4) = $tmp2405;
org$frostlang$frostc$FixedArray** $tmp2406 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2407 = *$tmp2406;
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2407));
org$frostlang$frostc$FixedArray* $tmp2408 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2408));
*(&local5) = $tmp2407;
// line 1
org$frostlang$frostc$FixedArray* $tmp2409 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
org$frostlang$frostc$FixedArray* $tmp2410 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp2411 = (frost$core$Int64) {2};
frost$core$Bit $tmp2412 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2411);
bool $tmp2413 = $tmp2412.value;
if ($tmp2413) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp2414 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2415 = *$tmp2414;
*(&local6) = $tmp2415;
org$frostlang$frostc$ASTNode** $tmp2416 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2417 = *$tmp2416;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2417));
org$frostlang$frostc$ASTNode* $tmp2418 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2418));
*(&local7) = $tmp2417;
org$frostlang$frostc$ASTNode** $tmp2419 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2420 = *$tmp2419;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
org$frostlang$frostc$ASTNode* $tmp2421 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2421));
*(&local8) = $tmp2420;
// line 1
org$frostlang$frostc$ASTNode* $tmp2422 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2422));
// line 1
org$frostlang$frostc$ASTNode* $tmp2423 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2423));
org$frostlang$frostc$ASTNode* $tmp2424 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2425 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp2426 = (frost$core$Int64) {3};
frost$core$Bit $tmp2427 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2426);
bool $tmp2428 = $tmp2427.value;
if ($tmp2428) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp2429 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2430 = *$tmp2429;
*(&local9) = $tmp2430;
org$frostlang$frostc$ASTNode** $tmp2431 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2432 = *$tmp2431;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
org$frostlang$frostc$ASTNode* $tmp2433 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
*(&local10) = $tmp2432;
// line 1
org$frostlang$frostc$ASTNode* $tmp2434 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2434));
org$frostlang$frostc$ASTNode* $tmp2435 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp2436 = (frost$core$Int64) {4};
frost$core$Bit $tmp2437 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2436);
bool $tmp2438 = $tmp2437.value;
if ($tmp2438) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp2439 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2440 = *$tmp2439;
*(&local11) = $tmp2440;
goto block1;
block11:;
frost$core$Int64 $tmp2441 = (frost$core$Int64) {5};
frost$core$Bit $tmp2442 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2441);
bool $tmp2443 = $tmp2442.value;
if ($tmp2443) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp2444 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2445 = *$tmp2444;
*(&local12) = $tmp2445;
org$frostlang$frostc$ASTNode** $tmp2446 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2447 = *$tmp2446;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2447));
org$frostlang$frostc$ASTNode* $tmp2448 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
*(&local13) = $tmp2447;
org$frostlang$frostc$expression$Binary$Operator* $tmp2449 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp2450 = *$tmp2449;
*(&local14) = $tmp2450;
org$frostlang$frostc$ASTNode** $tmp2451 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2452 = *$tmp2451;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2452));
org$frostlang$frostc$ASTNode* $tmp2453 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2453));
*(&local15) = $tmp2452;
// line 1
org$frostlang$frostc$ASTNode* $tmp2454 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2454));
// line 1
org$frostlang$frostc$ASTNode* $tmp2455 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
org$frostlang$frostc$ASTNode* $tmp2456 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2456));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2457 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2457));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp2458 = (frost$core$Int64) {6};
frost$core$Bit $tmp2459 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2458);
bool $tmp2460 = $tmp2459.value;
if ($tmp2460) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp2461 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2462 = *$tmp2461;
*(&local16) = $tmp2462;
frost$core$Bit* $tmp2463 = (frost$core$Bit*) (param0->$data + 16);
frost$core$Bit $tmp2464 = *$tmp2463;
*(&local17) = $tmp2464;
goto block1;
block15:;
frost$core$Int64 $tmp2465 = (frost$core$Int64) {7};
frost$core$Bit $tmp2466 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2465);
bool $tmp2467 = $tmp2466.value;
if ($tmp2467) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp2468 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2469 = *$tmp2468;
*(&local18) = $tmp2469;
org$frostlang$frostc$FixedArray** $tmp2470 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2471 = *$tmp2470;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2471));
org$frostlang$frostc$FixedArray* $tmp2472 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2472));
*(&local19) = $tmp2471;
// line 1
org$frostlang$frostc$FixedArray* $tmp2473 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
org$frostlang$frostc$FixedArray* $tmp2474 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2474));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block17:;
frost$core$Int64 $tmp2475 = (frost$core$Int64) {8};
frost$core$Bit $tmp2476 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2475);
bool $tmp2477 = $tmp2476.value;
if ($tmp2477) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp2478 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2479 = *$tmp2478;
*(&local20) = $tmp2479;
frost$core$String** $tmp2480 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2481 = *$tmp2480;
*(&local21) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2481));
frost$core$String* $tmp2482 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
*(&local21) = $tmp2481;
// line 1
frost$core$String* $tmp2483 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
frost$core$String* $tmp2484 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
*(&local21) = ((frost$core$String*) NULL);
goto block1;
block19:;
frost$core$Int64 $tmp2485 = (frost$core$Int64) {9};
frost$core$Bit $tmp2486 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2485);
bool $tmp2487 = $tmp2486.value;
if ($tmp2487) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp2488 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2489 = *$tmp2488;
*(&local22) = $tmp2489;
org$frostlang$frostc$ASTNode** $tmp2490 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2491 = *$tmp2490;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2491));
org$frostlang$frostc$ASTNode* $tmp2492 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2492));
*(&local23) = $tmp2491;
org$frostlang$frostc$FixedArray** $tmp2493 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2494 = *$tmp2493;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2494));
org$frostlang$frostc$FixedArray* $tmp2495 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
*(&local24) = $tmp2494;
// line 1
org$frostlang$frostc$ASTNode* $tmp2496 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
// line 1
org$frostlang$frostc$FixedArray* $tmp2497 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
org$frostlang$frostc$FixedArray* $tmp2498 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2499 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block21:;
frost$core$Int64 $tmp2500 = (frost$core$Int64) {10};
frost$core$Bit $tmp2501 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2500);
bool $tmp2502 = $tmp2501.value;
if ($tmp2502) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp2503 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2504 = *$tmp2503;
*(&local25) = $tmp2504;
org$frostlang$frostc$ASTNode** $tmp2505 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2506 = *$tmp2505;
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2506));
org$frostlang$frostc$ASTNode* $tmp2507 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2507));
*(&local26) = $tmp2506;
frost$core$String** $tmp2508 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2509 = *$tmp2508;
*(&local27) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
frost$core$String* $tmp2510 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2510));
*(&local27) = $tmp2509;
org$frostlang$frostc$FixedArray** $tmp2511 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2512 = *$tmp2511;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
org$frostlang$frostc$FixedArray* $tmp2513 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2513));
*(&local28) = $tmp2512;
// line 1
org$frostlang$frostc$ASTNode* $tmp2514 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
// line 1
frost$core$String* $tmp2515 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2515));
// line 1
org$frostlang$frostc$FixedArray* $tmp2516 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2516));
org$frostlang$frostc$FixedArray* $tmp2517 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2518 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2518));
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2519 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block23:;
frost$core$Int64 $tmp2520 = (frost$core$Int64) {11};
frost$core$Bit $tmp2521 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2520);
bool $tmp2522 = $tmp2521.value;
if ($tmp2522) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp2523 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2524 = *$tmp2523;
*(&local29) = $tmp2524;
org$frostlang$frostc$ASTNode** $tmp2525 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2526 = *$tmp2525;
*(&local30) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2526));
org$frostlang$frostc$ASTNode* $tmp2527 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
*(&local30) = $tmp2526;
org$frostlang$frostc$ChoiceCase** $tmp2528 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp2529 = *$tmp2528;
*(&local31) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2529));
org$frostlang$frostc$ChoiceCase* $tmp2530 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
*(&local31) = $tmp2529;
frost$core$Int64* $tmp2531 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp2532 = *$tmp2531;
*(&local32) = $tmp2532;
// line 1
org$frostlang$frostc$ASTNode* $tmp2533 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
// line 1
org$frostlang$frostc$ChoiceCase* $tmp2534 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
org$frostlang$frostc$ChoiceCase* $tmp2535 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
*(&local31) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp2536 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
*(&local30) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block25:;
frost$core$Int64 $tmp2537 = (frost$core$Int64) {12};
frost$core$Bit $tmp2538 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2537);
bool $tmp2539 = $tmp2538.value;
if ($tmp2539) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp2540 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2541 = *$tmp2540;
*(&local33) = $tmp2541;
org$frostlang$frostc$ASTNode** $tmp2542 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2543 = *$tmp2542;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2543));
org$frostlang$frostc$ASTNode* $tmp2544 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2544));
*(&local34) = $tmp2543;
org$frostlang$frostc$FixedArray** $tmp2545 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2546 = *$tmp2545;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2546));
org$frostlang$frostc$FixedArray* $tmp2547 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2547));
*(&local35) = $tmp2546;
org$frostlang$frostc$ClassDecl$Kind* $tmp2548 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp2549 = *$tmp2548;
*(&local36) = $tmp2549;
frost$core$String** $tmp2550 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp2551 = *$tmp2550;
*(&local37) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2551));
frost$core$String* $tmp2552 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2552));
*(&local37) = $tmp2551;
org$frostlang$frostc$FixedArray** $tmp2553 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2554 = *$tmp2553;
*(&local38) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2554));
org$frostlang$frostc$FixedArray* $tmp2555 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2555));
*(&local38) = $tmp2554;
org$frostlang$frostc$FixedArray** $tmp2556 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2557 = *$tmp2556;
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2557));
org$frostlang$frostc$FixedArray* $tmp2558 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2558));
*(&local39) = $tmp2557;
org$frostlang$frostc$FixedArray** $tmp2559 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2560 = *$tmp2559;
*(&local40) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2560));
org$frostlang$frostc$FixedArray* $tmp2561 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
*(&local40) = $tmp2560;
// line 1
org$frostlang$frostc$ASTNode* $tmp2562 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2562));
// line 1
org$frostlang$frostc$FixedArray* $tmp2563 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2563));
// line 1
frost$core$String* $tmp2564 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
// line 1
org$frostlang$frostc$FixedArray* $tmp2565 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2565));
// line 1
org$frostlang$frostc$FixedArray* $tmp2566 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2566));
// line 1
org$frostlang$frostc$FixedArray* $tmp2567 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
org$frostlang$frostc$FixedArray* $tmp2568 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
*(&local40) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2569 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2569));
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2570 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2570));
*(&local38) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2571 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2571));
*(&local37) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2572 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2572));
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2573 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2573));
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block27:;
frost$core$Int64 $tmp2574 = (frost$core$Int64) {13};
frost$core$Bit $tmp2575 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2574);
bool $tmp2576 = $tmp2575.value;
if ($tmp2576) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp2577 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2578 = *$tmp2577;
*(&local41) = $tmp2578;
frost$core$String** $tmp2579 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2580 = *$tmp2579;
*(&local42) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
frost$core$String* $tmp2581 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
*(&local42) = $tmp2580;
// line 1
frost$core$String* $tmp2582 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2582));
frost$core$String* $tmp2583 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2583));
*(&local42) = ((frost$core$String*) NULL);
goto block1;
block29:;
frost$core$Int64 $tmp2584 = (frost$core$Int64) {14};
frost$core$Bit $tmp2585 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2584);
bool $tmp2586 = $tmp2585.value;
if ($tmp2586) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp2587 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2588 = *$tmp2587;
*(&local43) = $tmp2588;
org$frostlang$frostc$ASTNode** $tmp2589 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2590 = *$tmp2589;
*(&local44) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
org$frostlang$frostc$ASTNode* $tmp2591 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2591));
*(&local44) = $tmp2590;
org$frostlang$frostc$ASTNode** $tmp2592 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2593 = *$tmp2592;
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2593));
org$frostlang$frostc$ASTNode* $tmp2594 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2594));
*(&local45) = $tmp2593;
// line 1
org$frostlang$frostc$ASTNode* $tmp2595 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
// line 1
org$frostlang$frostc$ASTNode* $tmp2596 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
org$frostlang$frostc$ASTNode* $tmp2597 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2597));
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2598 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2598));
*(&local44) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block31:;
frost$core$Int64 $tmp2599 = (frost$core$Int64) {15};
frost$core$Bit $tmp2600 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2599);
bool $tmp2601 = $tmp2600.value;
if ($tmp2601) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp2602 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2603 = *$tmp2602;
*(&local46) = $tmp2603;
frost$core$String** $tmp2604 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2605 = *$tmp2604;
*(&local47) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2605));
frost$core$String* $tmp2606 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2606));
*(&local47) = $tmp2605;
org$frostlang$frostc$FixedArray** $tmp2607 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2608 = *$tmp2607;
*(&local48) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2608));
org$frostlang$frostc$FixedArray* $tmp2609 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2609));
*(&local48) = $tmp2608;
org$frostlang$frostc$ASTNode** $tmp2610 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2611 = *$tmp2610;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2611));
org$frostlang$frostc$ASTNode* $tmp2612 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2612));
*(&local49) = $tmp2611;
// line 1
frost$core$String* $tmp2613 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2613));
// line 1
org$frostlang$frostc$FixedArray* $tmp2614 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2614));
// line 1
org$frostlang$frostc$ASTNode* $tmp2615 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
org$frostlang$frostc$ASTNode* $tmp2616 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2616));
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2617 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2617));
*(&local48) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2618 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2618));
*(&local47) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Int64 $tmp2619 = (frost$core$Int64) {16};
frost$core$Bit $tmp2620 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2619);
bool $tmp2621 = $tmp2620.value;
if ($tmp2621) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp2622 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2623 = *$tmp2622;
*(&local50) = $tmp2623;
org$frostlang$frostc$ASTNode** $tmp2624 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2625 = *$tmp2624;
*(&local51) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2625));
org$frostlang$frostc$ASTNode* $tmp2626 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
*(&local51) = $tmp2625;
frost$core$String** $tmp2627 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2628 = *$tmp2627;
*(&local52) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
frost$core$String* $tmp2629 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
*(&local52) = $tmp2628;
// line 1
org$frostlang$frostc$ASTNode* $tmp2630 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
// line 1
frost$core$String* $tmp2631 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2631));
frost$core$String* $tmp2632 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2632));
*(&local52) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2633 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2633));
*(&local51) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block35:;
frost$core$Int64 $tmp2634 = (frost$core$Int64) {17};
frost$core$Bit $tmp2635 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2634);
bool $tmp2636 = $tmp2635.value;
if ($tmp2636) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp2637 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2638 = *$tmp2637;
*(&local53) = $tmp2638;
org$frostlang$frostc$ASTNode** $tmp2639 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2640 = *$tmp2639;
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2640));
org$frostlang$frostc$ASTNode* $tmp2641 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2641));
*(&local54) = $tmp2640;
frost$core$String** $tmp2642 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2643 = *$tmp2642;
*(&local55) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2643));
frost$core$String* $tmp2644 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2644));
*(&local55) = $tmp2643;
org$frostlang$frostc$FixedArray** $tmp2645 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2646 = *$tmp2645;
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
org$frostlang$frostc$FixedArray* $tmp2647 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
*(&local56) = $tmp2646;
// line 1
org$frostlang$frostc$ASTNode* $tmp2648 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2648));
// line 1
frost$core$String* $tmp2649 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2649));
// line 1
org$frostlang$frostc$FixedArray* $tmp2650 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
org$frostlang$frostc$FixedArray* $tmp2651 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2651));
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2652 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2652));
*(&local55) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2653 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2653));
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block37:;
frost$core$Int64 $tmp2654 = (frost$core$Int64) {18};
frost$core$Bit $tmp2655 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2654);
bool $tmp2656 = $tmp2655.value;
if ($tmp2656) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp2657 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2658 = *$tmp2657;
*(&local57) = $tmp2658;
org$frostlang$frostc$ASTNode** $tmp2659 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2660 = *$tmp2659;
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
org$frostlang$frostc$ASTNode* $tmp2661 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
*(&local58) = $tmp2660;
org$frostlang$frostc$FixedArray** $tmp2662 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2663 = *$tmp2662;
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2663));
org$frostlang$frostc$FixedArray* $tmp2664 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
*(&local59) = $tmp2663;
org$frostlang$frostc$ASTNode** $tmp2665 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2666 = *$tmp2665;
*(&local60) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2666));
org$frostlang$frostc$ASTNode* $tmp2667 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2667));
*(&local60) = $tmp2666;
// line 1
org$frostlang$frostc$ASTNode* $tmp2668 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2668));
// line 1
org$frostlang$frostc$FixedArray* $tmp2669 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2669));
// line 1
org$frostlang$frostc$ASTNode* $tmp2670 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2670));
org$frostlang$frostc$ASTNode* $tmp2671 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
*(&local60) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2672 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2672));
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2673 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2673));
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block39:;
frost$core$Int64 $tmp2674 = (frost$core$Int64) {19};
frost$core$Bit $tmp2675 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2674);
bool $tmp2676 = $tmp2675.value;
if ($tmp2676) goto block40; else goto block41;
block40:;
org$frostlang$frostc$FixedArray** $tmp2677 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp2678 = *$tmp2677;
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
org$frostlang$frostc$FixedArray* $tmp2679 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
*(&local61) = $tmp2678;
// line 1
org$frostlang$frostc$FixedArray* $tmp2680 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2680));
org$frostlang$frostc$FixedArray* $tmp2681 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2681));
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block41:;
frost$core$Int64 $tmp2682 = (frost$core$Int64) {20};
frost$core$Bit $tmp2683 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2682);
bool $tmp2684 = $tmp2683.value;
if ($tmp2684) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp2685 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2686 = *$tmp2685;
*(&local62) = $tmp2686;
frost$core$String** $tmp2687 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2688 = *$tmp2687;
*(&local63) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
frost$core$String* $tmp2689 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2689));
*(&local63) = $tmp2688;
org$frostlang$frostc$ASTNode** $tmp2690 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2691 = *$tmp2690;
*(&local64) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2691));
org$frostlang$frostc$ASTNode* $tmp2692 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2692));
*(&local64) = $tmp2691;
org$frostlang$frostc$ASTNode** $tmp2693 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2694 = *$tmp2693;
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
org$frostlang$frostc$ASTNode* $tmp2695 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2695));
*(&local65) = $tmp2694;
org$frostlang$frostc$FixedArray** $tmp2696 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp2697 = *$tmp2696;
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
org$frostlang$frostc$FixedArray* $tmp2698 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
*(&local66) = $tmp2697;
// line 1
frost$core$String* $tmp2699 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2699));
// line 1
org$frostlang$frostc$ASTNode* $tmp2700 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2700));
// line 1
org$frostlang$frostc$ASTNode* $tmp2701 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2701));
// line 1
org$frostlang$frostc$FixedArray* $tmp2702 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
org$frostlang$frostc$FixedArray* $tmp2703 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2704 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2705 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
*(&local64) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2706 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2706));
*(&local63) = ((frost$core$String*) NULL);
goto block1;
block43:;
frost$core$Int64 $tmp2707 = (frost$core$Int64) {21};
frost$core$Bit $tmp2708 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2707);
bool $tmp2709 = $tmp2708.value;
if ($tmp2709) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp2710 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2711 = *$tmp2710;
*(&local67) = $tmp2711;
frost$core$String** $tmp2712 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2713 = *$tmp2712;
*(&local68) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2713));
frost$core$String* $tmp2714 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2714));
*(&local68) = $tmp2713;
org$frostlang$frostc$FixedArray** $tmp2715 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2716 = *$tmp2715;
*(&local69) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
org$frostlang$frostc$FixedArray* $tmp2717 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
*(&local69) = $tmp2716;
// line 1
frost$core$String* $tmp2718 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
// line 1
org$frostlang$frostc$FixedArray* $tmp2719 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
org$frostlang$frostc$FixedArray* $tmp2720 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
*(&local69) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2721 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
*(&local68) = ((frost$core$String*) NULL);
goto block1;
block45:;
frost$core$Int64 $tmp2722 = (frost$core$Int64) {22};
frost$core$Bit $tmp2723 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2722);
bool $tmp2724 = $tmp2723.value;
if ($tmp2724) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp2725 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2726 = *$tmp2725;
*(&local70) = $tmp2726;
frost$core$String** $tmp2727 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2728 = *$tmp2727;
*(&local71) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2728));
frost$core$String* $tmp2729 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
*(&local71) = $tmp2728;
// line 1
frost$core$String* $tmp2730 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
frost$core$String* $tmp2731 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
*(&local71) = ((frost$core$String*) NULL);
goto block1;
block47:;
frost$core$Int64 $tmp2732 = (frost$core$Int64) {23};
frost$core$Bit $tmp2733 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2732);
bool $tmp2734 = $tmp2733.value;
if ($tmp2734) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp2735 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2736 = *$tmp2735;
*(&local72) = $tmp2736;
frost$core$String** $tmp2737 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2738 = *$tmp2737;
*(&local73) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
frost$core$String* $tmp2739 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2739));
*(&local73) = $tmp2738;
org$frostlang$frostc$FixedArray** $tmp2740 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2741 = *$tmp2740;
*(&local74) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2741));
org$frostlang$frostc$FixedArray* $tmp2742 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
*(&local74) = $tmp2741;
// line 1
frost$core$String* $tmp2743 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2743));
// line 1
org$frostlang$frostc$FixedArray* $tmp2744 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2744));
org$frostlang$frostc$FixedArray* $tmp2745 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
*(&local74) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2746 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2746));
*(&local73) = ((frost$core$String*) NULL);
goto block1;
block49:;
frost$core$Int64 $tmp2747 = (frost$core$Int64) {24};
frost$core$Bit $tmp2748 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2747);
bool $tmp2749 = $tmp2748.value;
if ($tmp2749) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp2750 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2751 = *$tmp2750;
*(&local75) = $tmp2751;
org$frostlang$frostc$ASTNode** $tmp2752 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2753 = *$tmp2752;
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2753));
org$frostlang$frostc$ASTNode* $tmp2754 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2754));
*(&local76) = $tmp2753;
org$frostlang$frostc$FixedArray** $tmp2755 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2756 = *$tmp2755;
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2756));
org$frostlang$frostc$FixedArray* $tmp2757 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
*(&local77) = $tmp2756;
org$frostlang$frostc$ASTNode** $tmp2758 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2759 = *$tmp2758;
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2759));
org$frostlang$frostc$ASTNode* $tmp2760 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
*(&local78) = $tmp2759;
// line 1
org$frostlang$frostc$ASTNode* $tmp2761 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
// line 1
org$frostlang$frostc$FixedArray* $tmp2762 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2762));
// line 1
org$frostlang$frostc$ASTNode* $tmp2763 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2763));
org$frostlang$frostc$ASTNode* $tmp2764 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2764));
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2765 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2765));
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2766 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2766));
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block51:;
frost$core$Int64 $tmp2767 = (frost$core$Int64) {25};
frost$core$Bit $tmp2768 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2767);
bool $tmp2769 = $tmp2768.value;
if ($tmp2769) goto block52; else goto block53;
block52:;
org$frostlang$frostc$Position* $tmp2770 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2771 = *$tmp2770;
*(&local79) = $tmp2771;
frost$core$UInt64* $tmp2772 = (frost$core$UInt64*) (param0->$data + 16);
frost$core$UInt64 $tmp2773 = *$tmp2772;
*(&local80) = $tmp2773;
goto block1;
block53:;
frost$core$Int64 $tmp2774 = (frost$core$Int64) {26};
frost$core$Bit $tmp2775 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2774);
bool $tmp2776 = $tmp2775.value;
if ($tmp2776) goto block54; else goto block55;
block54:;
org$frostlang$frostc$Position* $tmp2777 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2778 = *$tmp2777;
*(&local81) = $tmp2778;
org$frostlang$frostc$IR$Value** $tmp2779 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp2780 = *$tmp2779;
*(&local82) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
org$frostlang$frostc$IR$Value* $tmp2781 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
*(&local82) = $tmp2780;
// line 1
org$frostlang$frostc$IR$Value* $tmp2782 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
org$frostlang$frostc$IR$Value* $tmp2783 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2783));
*(&local82) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block55:;
frost$core$Int64 $tmp2784 = (frost$core$Int64) {27};
frost$core$Bit $tmp2785 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2784);
bool $tmp2786 = $tmp2785.value;
if ($tmp2786) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp2787 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2788 = *$tmp2787;
*(&local83) = $tmp2788;
frost$core$String** $tmp2789 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2790 = *$tmp2789;
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
frost$core$String* $tmp2791 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
*(&local84) = $tmp2790;
org$frostlang$frostc$FixedArray** $tmp2792 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2793 = *$tmp2792;
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2793));
org$frostlang$frostc$FixedArray* $tmp2794 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2794));
*(&local85) = $tmp2793;
// line 1
frost$core$String* $tmp2795 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
// line 1
org$frostlang$frostc$FixedArray* $tmp2796 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
org$frostlang$frostc$FixedArray* $tmp2797 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2798 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2798));
*(&local84) = ((frost$core$String*) NULL);
goto block1;
block57:;
frost$core$Int64 $tmp2799 = (frost$core$Int64) {28};
frost$core$Bit $tmp2800 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2799);
bool $tmp2801 = $tmp2800.value;
if ($tmp2801) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp2802 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2803 = *$tmp2802;
*(&local86) = $tmp2803;
org$frostlang$frostc$ASTNode** $tmp2804 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2805 = *$tmp2804;
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
org$frostlang$frostc$ASTNode* $tmp2806 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
*(&local87) = $tmp2805;
org$frostlang$frostc$FixedArray** $tmp2807 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2808 = *$tmp2807;
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
org$frostlang$frostc$FixedArray* $tmp2809 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
*(&local88) = $tmp2808;
org$frostlang$frostc$FixedArray** $tmp2810 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2811 = *$tmp2810;
*(&local89) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
org$frostlang$frostc$FixedArray* $tmp2812 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
*(&local89) = $tmp2811;
// line 1
org$frostlang$frostc$ASTNode* $tmp2813 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
// line 1
org$frostlang$frostc$FixedArray* $tmp2814 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2814));
// line 1
org$frostlang$frostc$FixedArray* $tmp2815 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2815));
org$frostlang$frostc$FixedArray* $tmp2816 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2816));
*(&local89) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2817 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2817));
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2818 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2818));
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block59:;
frost$core$Int64 $tmp2819 = (frost$core$Int64) {29};
frost$core$Bit $tmp2820 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2819);
bool $tmp2821 = $tmp2820.value;
if ($tmp2821) goto block60; else goto block61;
block60:;
org$frostlang$frostc$Position* $tmp2822 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2823 = *$tmp2822;
*(&local90) = $tmp2823;
org$frostlang$frostc$ASTNode** $tmp2824 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2825 = *$tmp2824;
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2825));
org$frostlang$frostc$ASTNode* $tmp2826 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
*(&local91) = $tmp2825;
org$frostlang$frostc$FixedArray** $tmp2827 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2828 = *$tmp2827;
*(&local92) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
org$frostlang$frostc$FixedArray* $tmp2829 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
*(&local92) = $tmp2828;
org$frostlang$frostc$MethodDecl$Kind* $tmp2830 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp2831 = *$tmp2830;
*(&local93) = $tmp2831;
frost$core$String** $tmp2832 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp2833 = *$tmp2832;
*(&local94) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
frost$core$String* $tmp2834 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
*(&local94) = $tmp2833;
org$frostlang$frostc$FixedArray** $tmp2835 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2836 = *$tmp2835;
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
org$frostlang$frostc$FixedArray* $tmp2837 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2837));
*(&local95) = $tmp2836;
org$frostlang$frostc$FixedArray** $tmp2838 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2839 = *$tmp2838;
*(&local96) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2839));
org$frostlang$frostc$FixedArray* $tmp2840 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2840));
*(&local96) = $tmp2839;
org$frostlang$frostc$ASTNode** $tmp2841 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
org$frostlang$frostc$ASTNode* $tmp2842 = *$tmp2841;
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
org$frostlang$frostc$ASTNode* $tmp2843 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2843));
*(&local97) = $tmp2842;
org$frostlang$frostc$FixedArray** $tmp2844 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2845 = *$tmp2844;
*(&local98) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2845));
org$frostlang$frostc$FixedArray* $tmp2846 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
*(&local98) = $tmp2845;
// line 1
org$frostlang$frostc$ASTNode* $tmp2847 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2847));
// line 1
org$frostlang$frostc$FixedArray* $tmp2848 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2848));
// line 1
frost$core$String* $tmp2849 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2849));
// line 1
org$frostlang$frostc$FixedArray* $tmp2850 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2850));
// line 1
org$frostlang$frostc$FixedArray* $tmp2851 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2851));
// line 1
org$frostlang$frostc$ASTNode* $tmp2852 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2852));
// line 1
org$frostlang$frostc$FixedArray* $tmp2853 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2853));
org$frostlang$frostc$FixedArray* $tmp2854 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2854));
*(&local98) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2855 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2856 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
*(&local96) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2857 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2858 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2858));
*(&local94) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2859 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
*(&local92) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2860 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2860));
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block61:;
frost$core$Int64 $tmp2861 = (frost$core$Int64) {30};
frost$core$Bit $tmp2862 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2861);
bool $tmp2863 = $tmp2862.value;
if ($tmp2863) goto block62; else goto block63;
block62:;
org$frostlang$frostc$Position* $tmp2864 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2865 = *$tmp2864;
*(&local99) = $tmp2865;
org$frostlang$frostc$parser$Token$Kind* $tmp2866 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp2867 = *$tmp2866;
*(&local100) = $tmp2867;
org$frostlang$frostc$FixedArray** $tmp2868 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2869 = *$tmp2868;
*(&local101) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
org$frostlang$frostc$FixedArray* $tmp2870 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2870));
*(&local101) = $tmp2869;
org$frostlang$frostc$ASTNode** $tmp2871 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2872 = *$tmp2871;
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2872));
org$frostlang$frostc$ASTNode* $tmp2873 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2873));
*(&local102) = $tmp2872;
// line 1
org$frostlang$frostc$FixedArray* $tmp2874 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
// line 1
org$frostlang$frostc$ASTNode* $tmp2875 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
org$frostlang$frostc$ASTNode* $tmp2876 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2876));
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2877 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2877));
*(&local101) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block63:;
frost$core$Int64 $tmp2878 = (frost$core$Int64) {31};
frost$core$Bit $tmp2879 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2878);
bool $tmp2880 = $tmp2879.value;
if ($tmp2880) goto block64; else goto block65;
block64:;
org$frostlang$frostc$Position* $tmp2881 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2882 = *$tmp2881;
*(&local103) = $tmp2882;
goto block1;
block65:;
frost$core$Int64 $tmp2883 = (frost$core$Int64) {32};
frost$core$Bit $tmp2884 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2883);
bool $tmp2885 = $tmp2884.value;
if ($tmp2885) goto block66; else goto block67;
block66:;
org$frostlang$frostc$Position* $tmp2886 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2887 = *$tmp2886;
*(&local104) = $tmp2887;
org$frostlang$frostc$ASTNode** $tmp2888 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2889 = *$tmp2888;
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
org$frostlang$frostc$ASTNode* $tmp2890 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2890));
*(&local105) = $tmp2889;
// line 1
org$frostlang$frostc$ASTNode* $tmp2891 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
org$frostlang$frostc$ASTNode* $tmp2892 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block67:;
frost$core$Int64 $tmp2893 = (frost$core$Int64) {33};
frost$core$Bit $tmp2894 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2893);
bool $tmp2895 = $tmp2894.value;
if ($tmp2895) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Position* $tmp2896 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2897 = *$tmp2896;
*(&local106) = $tmp2897;
frost$core$String** $tmp2898 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2899 = *$tmp2898;
*(&local107) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
frost$core$String* $tmp2900 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
*(&local107) = $tmp2899;
// line 1
frost$core$String* $tmp2901 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2901));
frost$core$String* $tmp2902 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
*(&local107) = ((frost$core$String*) NULL);
goto block1;
block69:;
frost$core$Int64 $tmp2903 = (frost$core$Int64) {34};
frost$core$Bit $tmp2904 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2903);
bool $tmp2905 = $tmp2904.value;
if ($tmp2905) goto block70; else goto block71;
block70:;
org$frostlang$frostc$Position* $tmp2906 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2907 = *$tmp2906;
*(&local108) = $tmp2907;
frost$core$String** $tmp2908 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2909 = *$tmp2908;
*(&local109) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
frost$core$String* $tmp2910 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2910));
*(&local109) = $tmp2909;
org$frostlang$frostc$ASTNode** $tmp2911 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2912 = *$tmp2911;
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
org$frostlang$frostc$ASTNode* $tmp2913 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
*(&local110) = $tmp2912;
// line 1
frost$core$String* $tmp2914 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
// line 1
org$frostlang$frostc$ASTNode* $tmp2915 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
org$frostlang$frostc$ASTNode* $tmp2916 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2917 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2917));
*(&local109) = ((frost$core$String*) NULL);
goto block1;
block71:;
frost$core$Int64 $tmp2918 = (frost$core$Int64) {35};
frost$core$Bit $tmp2919 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2918);
bool $tmp2920 = $tmp2919.value;
if ($tmp2920) goto block72; else goto block73;
block72:;
org$frostlang$frostc$Position* $tmp2921 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2922 = *$tmp2921;
*(&local111) = $tmp2922;
org$frostlang$frostc$ASTNode** $tmp2923 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2924 = *$tmp2923;
*(&local112) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2924));
org$frostlang$frostc$ASTNode* $tmp2925 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
*(&local112) = $tmp2924;
frost$core$Bit* $tmp2926 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp2927 = *$tmp2926;
*(&local113) = $tmp2927;
org$frostlang$frostc$ASTNode** $tmp2928 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
org$frostlang$frostc$ASTNode* $tmp2929 = *$tmp2928;
*(&local114) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
org$frostlang$frostc$ASTNode* $tmp2930 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2930));
*(&local114) = $tmp2929;
org$frostlang$frostc$ASTNode** $tmp2931 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp2932 = *$tmp2931;
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2932));
org$frostlang$frostc$ASTNode* $tmp2933 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2933));
*(&local115) = $tmp2932;
// line 1
org$frostlang$frostc$ASTNode* $tmp2934 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2934));
// line 1
org$frostlang$frostc$ASTNode* $tmp2935 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2935));
// line 1
org$frostlang$frostc$ASTNode* $tmp2936 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2936));
org$frostlang$frostc$ASTNode* $tmp2937 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2937));
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2938 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2938));
*(&local114) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2939 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2939));
*(&local112) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block73:;
frost$core$Int64 $tmp2940 = (frost$core$Int64) {36};
frost$core$Bit $tmp2941 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2940);
bool $tmp2942 = $tmp2941.value;
if ($tmp2942) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp2943 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2944 = *$tmp2943;
*(&local116) = $tmp2944;
frost$core$Real64* $tmp2945 = (frost$core$Real64*) (param0->$data + 16);
frost$core$Real64 $tmp2946 = *$tmp2945;
*(&local117) = $tmp2946;
goto block1;
block75:;
frost$core$Int64 $tmp2947 = (frost$core$Int64) {37};
frost$core$Bit $tmp2948 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2947);
bool $tmp2949 = $tmp2948.value;
if ($tmp2949) goto block76; else goto block77;
block76:;
org$frostlang$frostc$Position* $tmp2950 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2951 = *$tmp2950;
*(&local118) = $tmp2951;
frost$core$String** $tmp2952 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2953 = *$tmp2952;
*(&local119) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2953));
frost$core$String* $tmp2954 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
*(&local119) = $tmp2953;
// line 1
frost$core$String* $tmp2955 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2955));
frost$core$String* $tmp2956 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2956));
*(&local119) = ((frost$core$String*) NULL);
goto block1;
block77:;
frost$core$Int64 $tmp2957 = (frost$core$Int64) {38};
frost$core$Bit $tmp2958 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2957);
bool $tmp2959 = $tmp2958.value;
if ($tmp2959) goto block78; else goto block79;
block78:;
org$frostlang$frostc$Position* $tmp2960 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2961 = *$tmp2960;
*(&local120) = $tmp2961;
org$frostlang$frostc$ASTNode** $tmp2962 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2963 = *$tmp2962;
*(&local121) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2963));
org$frostlang$frostc$ASTNode* $tmp2964 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2964));
*(&local121) = $tmp2963;
// line 1
org$frostlang$frostc$ASTNode* $tmp2965 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2965));
org$frostlang$frostc$ASTNode* $tmp2966 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2966));
*(&local121) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block79:;
frost$core$Int64 $tmp2967 = (frost$core$Int64) {39};
frost$core$Bit $tmp2968 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2967);
bool $tmp2969 = $tmp2968.value;
if ($tmp2969) goto block80; else goto block81;
block80:;
org$frostlang$frostc$Position* $tmp2970 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2971 = *$tmp2970;
*(&local122) = $tmp2971;
goto block1;
block81:;
frost$core$Int64 $tmp2972 = (frost$core$Int64) {40};
frost$core$Bit $tmp2973 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2972);
bool $tmp2974 = $tmp2973.value;
if ($tmp2974) goto block82; else goto block83;
block82:;
org$frostlang$frostc$Position* $tmp2975 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2976 = *$tmp2975;
*(&local123) = $tmp2976;
frost$core$String** $tmp2977 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2978 = *$tmp2977;
*(&local124) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2978));
frost$core$String* $tmp2979 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2979));
*(&local124) = $tmp2978;
// line 1
frost$core$String* $tmp2980 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2980));
frost$core$String* $tmp2981 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2981));
*(&local124) = ((frost$core$String*) NULL);
goto block1;
block83:;
frost$core$Int64 $tmp2982 = (frost$core$Int64) {41};
frost$core$Bit $tmp2983 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2982);
bool $tmp2984 = $tmp2983.value;
if ($tmp2984) goto block84; else goto block85;
block84:;
org$frostlang$frostc$Position* $tmp2985 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2986 = *$tmp2985;
*(&local125) = $tmp2986;
goto block1;
block85:;
frost$core$Int64 $tmp2987 = (frost$core$Int64) {42};
frost$core$Bit $tmp2988 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp2987);
bool $tmp2989 = $tmp2988.value;
if ($tmp2989) goto block86; else goto block87;
block86:;
org$frostlang$frostc$Position* $tmp2990 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2991 = *$tmp2990;
*(&local126) = $tmp2991;
org$frostlang$frostc$FixedArray** $tmp2992 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2993 = *$tmp2992;
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2993));
org$frostlang$frostc$FixedArray* $tmp2994 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2994));
*(&local127) = $tmp2993;
org$frostlang$frostc$ASTNode** $tmp2995 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2996 = *$tmp2995;
*(&local128) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2996));
org$frostlang$frostc$ASTNode* $tmp2997 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2997));
*(&local128) = $tmp2996;
org$frostlang$frostc$FixedArray** $tmp2998 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2999 = *$tmp2998;
*(&local129) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
org$frostlang$frostc$FixedArray* $tmp3000 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3000));
*(&local129) = $tmp2999;
// line 1
org$frostlang$frostc$FixedArray* $tmp3001 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3001));
// line 1
org$frostlang$frostc$ASTNode* $tmp3002 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3002));
// line 1
org$frostlang$frostc$FixedArray* $tmp3003 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3003));
org$frostlang$frostc$FixedArray* $tmp3004 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3004));
*(&local129) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3005 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3005));
*(&local128) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3006 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3006));
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block87:;
frost$core$Int64 $tmp3007 = (frost$core$Int64) {43};
frost$core$Bit $tmp3008 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp3007);
bool $tmp3009 = $tmp3008.value;
if ($tmp3009) goto block88; else goto block89;
block88:;
org$frostlang$frostc$Position* $tmp3010 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3011 = *$tmp3010;
*(&local130) = $tmp3011;
org$frostlang$frostc$FixedArray** $tmp3012 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3013 = *$tmp3012;
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
org$frostlang$frostc$FixedArray* $tmp3014 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3014));
*(&local131) = $tmp3013;
// line 1
org$frostlang$frostc$FixedArray* $tmp3015 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
org$frostlang$frostc$FixedArray* $tmp3016 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3016));
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block89:;
frost$core$Int64 $tmp3017 = (frost$core$Int64) {44};
frost$core$Bit $tmp3018 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp3017);
bool $tmp3019 = $tmp3018.value;
if ($tmp3019) goto block90; else goto block91;
block90:;
org$frostlang$frostc$Position* $tmp3020 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3021 = *$tmp3020;
*(&local132) = $tmp3021;
org$frostlang$frostc$FixedArray** $tmp3022 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3023 = *$tmp3022;
*(&local133) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3023));
org$frostlang$frostc$FixedArray* $tmp3024 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3024));
*(&local133) = $tmp3023;
// line 1
org$frostlang$frostc$FixedArray* $tmp3025 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
org$frostlang$frostc$FixedArray* $tmp3026 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3026));
*(&local133) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block91:;
frost$core$Int64 $tmp3027 = (frost$core$Int64) {45};
frost$core$Bit $tmp3028 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp3027);
bool $tmp3029 = $tmp3028.value;
if ($tmp3029) goto block92; else goto block93;
block92:;
org$frostlang$frostc$Position* $tmp3030 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3031 = *$tmp3030;
*(&local134) = $tmp3031;
org$frostlang$frostc$FixedArray** $tmp3032 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3033 = *$tmp3032;
*(&local135) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3033));
org$frostlang$frostc$FixedArray* $tmp3034 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3034));
*(&local135) = $tmp3033;
// line 1
org$frostlang$frostc$FixedArray* $tmp3035 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3035));
org$frostlang$frostc$FixedArray* $tmp3036 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3036));
*(&local135) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block93:;
frost$core$Int64 $tmp3037 = (frost$core$Int64) {46};
frost$core$Bit $tmp3038 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp3037);
bool $tmp3039 = $tmp3038.value;
if ($tmp3039) goto block94; else goto block95;
block94:;
org$frostlang$frostc$Position* $tmp3040 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3041 = *$tmp3040;
*(&local136) = $tmp3041;
frost$core$String** $tmp3042 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3043 = *$tmp3042;
*(&local137) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3043));
frost$core$String* $tmp3044 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3044));
*(&local137) = $tmp3043;
// line 1
frost$core$String* $tmp3045 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3045));
frost$core$String* $tmp3046 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3046));
*(&local137) = ((frost$core$String*) NULL);
goto block1;
block95:;
frost$core$Int64 $tmp3047 = (frost$core$Int64) {47};
frost$core$Bit $tmp3048 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp3047);
bool $tmp3049 = $tmp3048.value;
if ($tmp3049) goto block96; else goto block97;
block96:;
org$frostlang$frostc$Position* $tmp3050 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3051 = *$tmp3050;
*(&local138) = $tmp3051;
org$frostlang$frostc$FixedArray** $tmp3052 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3053 = *$tmp3052;
*(&local139) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3053));
org$frostlang$frostc$FixedArray* $tmp3054 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3054));
*(&local139) = $tmp3053;
org$frostlang$frostc$ASTNode** $tmp3055 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3056 = *$tmp3055;
*(&local140) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3056));
org$frostlang$frostc$ASTNode* $tmp3057 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3057));
*(&local140) = $tmp3056;
// line 1
org$frostlang$frostc$FixedArray* $tmp3058 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3058));
// line 1
org$frostlang$frostc$ASTNode* $tmp3059 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3059));
org$frostlang$frostc$ASTNode* $tmp3060 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3060));
*(&local140) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3061 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3061));
*(&local139) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block97:;
frost$core$Int64 $tmp3062 = (frost$core$Int64) {48};
frost$core$Bit $tmp3063 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp3062);
bool $tmp3064 = $tmp3063.value;
if ($tmp3064) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp3065 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3066 = *$tmp3065;
*(&local141) = $tmp3066;
frost$core$String** $tmp3067 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3068 = *$tmp3067;
*(&local142) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3068));
frost$core$String* $tmp3069 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3069));
*(&local142) = $tmp3068;
org$frostlang$frostc$ASTNode** $tmp3070 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3071 = *$tmp3070;
*(&local143) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3071));
org$frostlang$frostc$ASTNode* $tmp3072 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3072));
*(&local143) = $tmp3071;
// line 1
frost$core$String* $tmp3073 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3073));
// line 1
org$frostlang$frostc$ASTNode* $tmp3074 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3074));
org$frostlang$frostc$ASTNode* $tmp3075 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3075));
*(&local143) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3076 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3076));
*(&local142) = ((frost$core$String*) NULL);
goto block1;
block99:;
frost$core$Int64 $tmp3077 = (frost$core$Int64) {49};
frost$core$Bit $tmp3078 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp3077);
bool $tmp3079 = $tmp3078.value;
if ($tmp3079) goto block100; else goto block101;
block100:;
org$frostlang$frostc$Position* $tmp3080 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3081 = *$tmp3080;
*(&local144) = $tmp3081;
org$frostlang$frostc$expression$Unary$Operator* $tmp3082 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 16);
org$frostlang$frostc$expression$Unary$Operator $tmp3083 = *$tmp3082;
*(&local145) = $tmp3083;
org$frostlang$frostc$ASTNode** $tmp3084 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3085 = *$tmp3084;
*(&local146) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3085));
org$frostlang$frostc$ASTNode* $tmp3086 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3086));
*(&local146) = $tmp3085;
// line 1
org$frostlang$frostc$ASTNode* $tmp3087 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3087));
org$frostlang$frostc$ASTNode* $tmp3088 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
*(&local146) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block101:;
frost$core$Int64 $tmp3089 = (frost$core$Int64) {50};
frost$core$Bit $tmp3090 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp3089);
bool $tmp3091 = $tmp3090.value;
if ($tmp3091) goto block102; else goto block103;
block102:;
org$frostlang$frostc$Position* $tmp3092 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3093 = *$tmp3092;
*(&local147) = $tmp3093;
org$frostlang$frostc$ASTNode** $tmp3094 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3095 = *$tmp3094;
*(&local148) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3095));
org$frostlang$frostc$ASTNode* $tmp3096 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3096));
*(&local148) = $tmp3095;
// line 1
org$frostlang$frostc$ASTNode* $tmp3097 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3097));
org$frostlang$frostc$ASTNode* $tmp3098 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3098));
*(&local148) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block103:;
frost$core$Int64 $tmp3099 = (frost$core$Int64) {51};
frost$core$Bit $tmp3100 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp3099);
bool $tmp3101 = $tmp3100.value;
if ($tmp3101) goto block104; else goto block105;
block104:;
org$frostlang$frostc$Position* $tmp3102 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3103 = *$tmp3102;
*(&local149) = $tmp3103;
org$frostlang$frostc$FixedArray** $tmp3104 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3105 = *$tmp3104;
*(&local150) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
org$frostlang$frostc$FixedArray* $tmp3106 = *(&local150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
*(&local150) = $tmp3105;
org$frostlang$frostc$ASTNode** $tmp3107 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3108 = *$tmp3107;
*(&local151) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3108));
org$frostlang$frostc$ASTNode* $tmp3109 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3109));
*(&local151) = $tmp3108;
// line 1
org$frostlang$frostc$FixedArray* $tmp3110 = *(&local150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3110));
// line 1
org$frostlang$frostc$ASTNode* $tmp3111 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3111));
org$frostlang$frostc$ASTNode* $tmp3112 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3112));
*(&local151) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3113 = *(&local150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3113));
*(&local150) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block105:;
frost$core$Int64 $tmp3114 = (frost$core$Int64) {52};
frost$core$Bit $tmp3115 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp3114);
bool $tmp3116 = $tmp3115.value;
if ($tmp3116) goto block106; else goto block107;
block106:;
org$frostlang$frostc$Position* $tmp3117 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3118 = *$tmp3117;
*(&local152) = $tmp3118;
frost$core$String** $tmp3119 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3120 = *$tmp3119;
*(&local153) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3120));
frost$core$String* $tmp3121 = *(&local153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
*(&local153) = $tmp3120;
// line 1
frost$core$String* $tmp3122 = *(&local153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3122));
frost$core$String* $tmp3123 = *(&local153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3123));
*(&local153) = ((frost$core$String*) NULL);
goto block1;
block107:;
frost$core$Int64 $tmp3124 = (frost$core$Int64) {53};
frost$core$Bit $tmp3125 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp3124);
bool $tmp3126 = $tmp3125.value;
if ($tmp3126) goto block108; else goto block109;
block108:;
org$frostlang$frostc$Position* $tmp3127 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3128 = *$tmp3127;
*(&local154) = $tmp3128;
org$frostlang$frostc$Variable$Kind* $tmp3129 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp3130 = *$tmp3129;
*(&local155) = $tmp3130;
org$frostlang$frostc$FixedArray** $tmp3131 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3132 = *$tmp3131;
*(&local156) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3132));
org$frostlang$frostc$FixedArray* $tmp3133 = *(&local156);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3133));
*(&local156) = $tmp3132;
// line 1
org$frostlang$frostc$FixedArray* $tmp3134 = *(&local156);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3134));
org$frostlang$frostc$FixedArray* $tmp3135 = *(&local156);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3135));
*(&local156) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block109:;
frost$core$Int64 $tmp3136 = (frost$core$Int64) {54};
frost$core$Bit $tmp3137 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp3136);
bool $tmp3138 = $tmp3137.value;
if ($tmp3138) goto block110; else goto block111;
block110:;
org$frostlang$frostc$Position* $tmp3139 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3140 = *$tmp3139;
*(&local157) = $tmp3140;
org$frostlang$frostc$FixedArray** $tmp3141 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3142 = *$tmp3141;
*(&local158) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3142));
org$frostlang$frostc$FixedArray* $tmp3143 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3143));
*(&local158) = $tmp3142;
org$frostlang$frostc$FixedArray** $tmp3144 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3145 = *$tmp3144;
*(&local159) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3145));
org$frostlang$frostc$FixedArray* $tmp3146 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3146));
*(&local159) = $tmp3145;
// line 1
org$frostlang$frostc$FixedArray* $tmp3147 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3147));
// line 1
org$frostlang$frostc$FixedArray* $tmp3148 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3148));
org$frostlang$frostc$FixedArray* $tmp3149 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3149));
*(&local159) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3150 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3150));
*(&local158) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block111:;
frost$core$Int64 $tmp3151 = (frost$core$Int64) {55};
frost$core$Bit $tmp3152 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2380, $tmp3151);
bool $tmp3153 = $tmp3152.value;
if ($tmp3153) goto block112; else goto block1;
block112:;
org$frostlang$frostc$Position* $tmp3154 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3155 = *$tmp3154;
*(&local160) = $tmp3155;
frost$core$String** $tmp3156 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3157 = *$tmp3156;
*(&local161) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3157));
frost$core$String* $tmp3158 = *(&local161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3158));
*(&local161) = $tmp3157;
org$frostlang$frostc$ASTNode** $tmp3159 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3160 = *$tmp3159;
*(&local162) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3160));
org$frostlang$frostc$ASTNode* $tmp3161 = *(&local162);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3161));
*(&local162) = $tmp3160;
org$frostlang$frostc$FixedArray** $tmp3162 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3163 = *$tmp3162;
*(&local163) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3163));
org$frostlang$frostc$FixedArray* $tmp3164 = *(&local163);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3164));
*(&local163) = $tmp3163;
// line 1
frost$core$String* $tmp3165 = *(&local161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3165));
// line 1
org$frostlang$frostc$ASTNode* $tmp3166 = *(&local162);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3166));
// line 1
org$frostlang$frostc$FixedArray* $tmp3167 = *(&local163);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3167));
org$frostlang$frostc$FixedArray* $tmp3168 = *(&local163);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3168));
*(&local163) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3169 = *(&local162);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3169));
*(&local162) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3170 = *(&local161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3170));
*(&local161) = ((frost$core$String*) NULL);
goto block1;
block1:;
// line 7
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, frost$core$String* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3171 = &param0->$rawValue;
*$tmp3171 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3172 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3172 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3173 = (frost$core$String**) (param0->$data + 16);
*$tmp3173 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3174 = (frost$core$String**) (param0->$data + 24);
*$tmp3174 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3175 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3175 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3) {

// line 7
frost$core$Int64* $tmp3176 = &param0->$rawValue;
*$tmp3176 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3177 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3177 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3178 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3178 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3179 = &param0->$rawValue;
*$tmp3179 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3180 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3180 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3181 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3181 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3182 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3182 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3) {

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
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2) {

// line 7
frost$core$Int64* $tmp3186 = &param0->$rawValue;
*$tmp3186 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3187 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3187 = param2;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$expression$Binary$Operator param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3188 = &param0->$rawValue;
*$tmp3188 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3189 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3189 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3190 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3190 = param3;
// line 7
org$frostlang$frostc$expression$Binary$Operator* $tmp3191 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 24);
*$tmp3191 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3192 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3192 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$Bit param3) {

// line 7
frost$core$Int64* $tmp3193 = &param0->$rawValue;
*$tmp3193 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3194 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3194 = param2;
// line 7
frost$core$Bit* $tmp3195 = (frost$core$Bit*) (param0->$data + 16);
*$tmp3195 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// line 7
frost$core$Int64* $tmp3196 = &param0->$rawValue;
*$tmp3196 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3197 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3197 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3198 = (frost$core$String**) (param0->$data + 16);
*$tmp3198 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3199 = &param0->$rawValue;
*$tmp3199 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3200 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3200 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3201 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3201 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3202 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3202 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

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
frost$core$String** $tmp3206 = (frost$core$String**) (param0->$data + 24);
*$tmp3206 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3207 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3207 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ChoiceCase$frost$core$Int64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ChoiceCase* param4, frost$core$Int64 param5) {

// line 7
frost$core$Int64* $tmp3208 = &param0->$rawValue;
*$tmp3208 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3209 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3209 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3210 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3210 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ChoiceCase** $tmp3211 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
*$tmp3211 = param4;
// line 7
frost$core$Int64* $tmp3212 = (frost$core$Int64*) (param0->$data + 32);
*$tmp3212 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ClassDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$FixedArray* param9) {

// line 7
frost$core$Int64* $tmp3213 = &param0->$rawValue;
*$tmp3213 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3214 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3214 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3215 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3215 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3216 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3216 = param4;
// line 7
org$frostlang$frostc$ClassDecl$Kind* $tmp3217 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
*$tmp3217 = param5;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
frost$core$String** $tmp3218 = (frost$core$String**) (param0->$data + 40);
*$tmp3218 = param6;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$FixedArray** $tmp3219 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
*$tmp3219 = param7;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$FixedArray** $tmp3220 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
*$tmp3220 = param8;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$FixedArray** $tmp3221 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
*$tmp3221 = param9;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3222 = &param0->$rawValue;
*$tmp3222 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3223 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3223 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3224 = (frost$core$String**) (param0->$data + 16);
*$tmp3224 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3225 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3225 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3226 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3226 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4) {

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
frost$core$String** $tmp3230 = (frost$core$String**) (param0->$data + 24);
*$tmp3230 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3231 = &param0->$rawValue;
*$tmp3231 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3232 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3232 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3233 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3233 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3234 = (frost$core$String**) (param0->$data + 24);
*$tmp3234 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3235 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3235 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3236 = &param0->$rawValue;
*$tmp3236 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3237 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3237 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3238 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3238 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3239 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3239 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3240 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3240 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$FixedArray* param2) {

// line 7
frost$core$Int64* $tmp3241 = &param0->$rawValue;
*$tmp3241 = param1;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$FixedArray** $tmp3242 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
*$tmp3242 = param2;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$FixedArray* param6) {

// line 7
frost$core$Int64* $tmp3243 = &param0->$rawValue;
*$tmp3243 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3244 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3244 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3245 = (frost$core$String**) (param0->$data + 16);
*$tmp3245 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3246 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3246 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3247 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3247 = param5;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$FixedArray** $tmp3248 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
*$tmp3248 = param6;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3249 = &param0->$rawValue;
*$tmp3249 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3250 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3250 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3251 = (frost$core$String**) (param0->$data + 16);
*$tmp3251 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3252 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3252 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// line 7
frost$core$Int64* $tmp3253 = &param0->$rawValue;
*$tmp3253 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3254 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3254 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3255 = (frost$core$String**) (param0->$data + 16);
*$tmp3255 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3256 = &param0->$rawValue;
*$tmp3256 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3257 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3257 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3258 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3258 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3259 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3259 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3260 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3260 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$UInt64 param3) {

// line 7
frost$core$Int64* $tmp3261 = &param0->$rawValue;
*$tmp3261 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3262 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3262 = param2;
// line 7
frost$core$UInt64* $tmp3263 = (frost$core$UInt64*) (param0->$data + 16);
*$tmp3263 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3) {

// line 7
frost$core$Int64* $tmp3264 = &param0->$rawValue;
*$tmp3264 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3265 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3265 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp3266 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp3266 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3267 = &param0->$rawValue;
*$tmp3267 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3268 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3268 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3269 = (frost$core$String**) (param0->$data + 16);
*$tmp3269 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3270 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3270 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$FixedArray* param5) {

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
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3274 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3274 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3275 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3275 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$MethodDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$ASTNode* param9, org$frostlang$frostc$FixedArray* param10) {

// line 7
frost$core$Int64* $tmp3276 = &param0->$rawValue;
*$tmp3276 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3277 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3277 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3278 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3278 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3279 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3279 = param4;
// line 7
org$frostlang$frostc$MethodDecl$Kind* $tmp3280 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
*$tmp3280 = param5;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
frost$core$String** $tmp3281 = (frost$core$String**) (param0->$data + 40);
*$tmp3281 = param6;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$FixedArray** $tmp3282 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
*$tmp3282 = param7;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$FixedArray** $tmp3283 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
*$tmp3283 = param8;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$ASTNode** $tmp3284 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
*$tmp3284 = param9;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param10));
org$frostlang$frostc$FixedArray** $tmp3285 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
*$tmp3285 = param10;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$parser$Token$Kind param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3286 = &param0->$rawValue;
*$tmp3286 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3287 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3287 = param2;
// line 7
org$frostlang$frostc$parser$Token$Kind* $tmp3288 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
*$tmp3288 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3289 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3289 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3290 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3290 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3291 = &param0->$rawValue;
*$tmp3291 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3292 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3292 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3293 = (frost$core$String**) (param0->$data + 16);
*$tmp3293 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3294 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3294 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$Bit$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$Bit param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$ASTNode* param6) {

// line 7
frost$core$Int64* $tmp3295 = &param0->$rawValue;
*$tmp3295 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3296 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3296 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3297 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3297 = param3;
// line 7
frost$core$Bit* $tmp3298 = (frost$core$Bit*) (param0->$data + 24);
*$tmp3298 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3299 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
*$tmp3299 = param5;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$ASTNode** $tmp3300 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
*$tmp3300 = param6;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Real64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$Real64 param3) {

// line 7
frost$core$Int64* $tmp3301 = &param0->$rawValue;
*$tmp3301 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3302 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3302 = param2;
// line 7
frost$core$Real64* $tmp3303 = (frost$core$Real64*) (param0->$data + 16);
*$tmp3303 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3) {

// line 7
frost$core$Int64* $tmp3304 = &param0->$rawValue;
*$tmp3304 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3305 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3305 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3306 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3306 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3307 = &param0->$rawValue;
*$tmp3307 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3308 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3308 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3309 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3309 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3310 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3310 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3311 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3311 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3312 = &param0->$rawValue;
*$tmp3312 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3313 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3313 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3314 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3314 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3315 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3315 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3316 = &param0->$rawValue;
*$tmp3316 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3317 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3317 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3318 = (frost$core$String**) (param0->$data + 16);
*$tmp3318 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3319 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3319 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$expression$Unary$Operator param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3320 = &param0->$rawValue;
*$tmp3320 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3321 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3321 = param2;
// line 7
org$frostlang$frostc$expression$Unary$Operator* $tmp3322 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 16);
*$tmp3322 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3323 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3323 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$Variable$Kind param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3324 = &param0->$rawValue;
*$tmp3324 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3325 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3325 = param2;
// line 7
org$frostlang$frostc$Variable$Kind* $tmp3326 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
*$tmp3326 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3327 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3327 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3328 = &param0->$rawValue;
*$tmp3328 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3329 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3329 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3330 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3330 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3331 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3331 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3332 = &param0->$rawValue;
*$tmp3332 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3333 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3333 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3334 = (frost$core$String**) (param0->$data + 16);
*$tmp3334 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3335 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3335 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3336 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3336 = param5;
return;

}

