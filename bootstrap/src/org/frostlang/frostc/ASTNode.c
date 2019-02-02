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
org$frostlang$frostc$ASTNode$class_type org$frostlang$frostc$ASTNode$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$ASTNode$get_asString$R$frost$core$String, org$frostlang$frostc$ASTNode$cleanup, org$frostlang$frostc$ASTNode$position$R$org$frostlang$frostc$Position} };

typedef frost$core$String* (*$fn599)(frost$core$Object*);
typedef frost$core$Bit (*$fn675)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn680)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn716)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn732)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn736)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn741)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn788)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn795)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn834)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn861)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn913)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn917)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn922)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn956)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn970)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn982)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn986)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn991)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1046)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1058)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1091)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1095)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1100)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1133)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1159)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1170)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1205)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1209)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1214)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1241)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1245)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1250)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1301)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1305)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1310)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1345)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn1382)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1414)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1418)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1423)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1458)(frost$core$Object*);
typedef frost$core$String* (*$fn1470)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1499)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1503)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1508)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1547)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1551)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1556)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1619)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1623)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1628)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1660)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn1671)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1695)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1699)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1704)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1766)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn1906)(frost$core$Object*);
typedef frost$core$String* (*$fn1975)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn1994)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn2013)(frost$collections$CollectionView*, frost$core$String*);
typedef void (*$fn2043)(org$frostlang$frostc$ASTNode$_Closure3*, frost$core$Object*);
typedef void (*$fn2047)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef void (*$fn2064)(org$frostlang$frostc$ASTNode$_Closure6*, frost$core$Object*);
typedef void (*$fn2068)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn2130)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn2196)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn2257)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn2284)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2288)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2293)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2311)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2315)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2320)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2367)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2371)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2376)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 28, 5772502652536328142, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s579 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s583 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s625 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static frost$core$String $s627 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s631 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static frost$core$String $s646 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s653 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static frost$core$String $s654 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static frost$core$String $s683 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s687 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, 194, NULL };
static frost$core$String $s692 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s694 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s699 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s703 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s727 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static frost$core$String $s747 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s750 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s768 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static frost$core$String $s770 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s772 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static frost$core$String $s774 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static frost$core$String $s791 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s797 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s800 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s825 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s830 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s836 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s839 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s864 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s868 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s873 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s909 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s928 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s936 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static frost$core$String $s941 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static frost$core$String $s946 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static frost$core$String $s958 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s960 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s962 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s972 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s974 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s976 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s978 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s997 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1000 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1023 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static frost$core$String $s1025 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1027 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static frost$core$String $s1029 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static frost$core$String $s1049 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static frost$core$String $s1053 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1085 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1087 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static frost$core$String $s1106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static frost$core$String $s1113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s1291 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static frost$core$String $s1293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static frost$core$String $s1297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1350 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1376 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52\x5f\x47\x45\x4e\x45\x52\x49\x43\x53\x28", 20, -4089576957169252493, NULL };
static frost$core$String $s1378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1387 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x29", 2, 16504, NULL };
static frost$core$String $s1407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static frost$core$String $s1409 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1432 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1439 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static frost$core$String $s1441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static frost$core$String $s1514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1517 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1540 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static frost$core$String $s1542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1562 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1570 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1572 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1615 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1634 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static frost$core$String $s1647 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static frost$core$String $s1662 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1664 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1666 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1673 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1675 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1677 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1684 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1686 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1691 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1710 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1713 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1742 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s1744 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s1748 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s1750 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s1754 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s1756 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s1760 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s1762 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s1768 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1770 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1772 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1776 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1784 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1788 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1796 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x29", 2, 14282, NULL };
static frost$core$String $s1804 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s1805 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s1816 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s1842 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1846 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1875 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static frost$core$String $s1877 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s1889 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static frost$core$String $s1918 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s1920 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s1935 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s1937 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1939 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static frost$core$String $s1941 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static frost$core$String $s1945 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s1946 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s1957 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s1962 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static frost$core$String $s1963 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static frost$core$String $s1977 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1979 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1981 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1996 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1998 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2000 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2015 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2017 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2019 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2036 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static frost$core$String $s2054 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x0a\x66\x61\x69\x6c\x28", 7, 240019370222988, NULL };
static frost$core$String $s2056 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x7b\x0a", 4, 146641607, NULL };
static frost$core$String $s2058 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x0a\x66\x61\x69\x6c\x20\x7b\x0a", 9, 2448437595644631413, NULL };
static frost$core$String $s2070 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static frost$core$String $s2140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65\x2c\x20", 13, 4377509119645419399, NULL };
static frost$core$String $s2177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 184878482956378755, NULL };
static frost$core$String $s2181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 184878482956378755, NULL };
static frost$core$String $s2198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static frost$core$String $s2206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static frost$core$String $s2242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static frost$core$String $s2247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static frost$core$String $s2252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static frost$core$String $s2259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2276 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static frost$core$String $s2278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2304 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s2357 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static frost$core$String $s2363 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s2382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s2385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2393 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };

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
$fn795 $tmp794 = $tmp793->methods[2];
frost$core$String* $tmp796 = $tmp794(((frost$collections$CollectionView*) $tmp792), &$s797);
frost$core$String* $tmp798 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp790, $tmp796);
frost$core$String* $tmp799 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp798, &$s800);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
org$frostlang$frostc$FixedArray* $tmp801 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp802 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp799;
block32:;
frost$core$Int64 $tmp803 = (frost$core$Int64) {10};
frost$core$Bit $tmp804 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp803);
bool $tmp805 = $tmp804.value;
if ($tmp805) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Position* $tmp806 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp807 = *$tmp806;
org$frostlang$frostc$ASTNode** $tmp808 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp809 = *$tmp808;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
org$frostlang$frostc$ASTNode* $tmp810 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
*(&local16) = $tmp809;
frost$core$String** $tmp811 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp812 = *$tmp811;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
frost$core$String* $tmp813 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
*(&local17) = $tmp812;
org$frostlang$frostc$FixedArray** $tmp814 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp815 = *$tmp814;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
org$frostlang$frostc$FixedArray* $tmp816 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
*(&local18) = $tmp815;
// line 321
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp817 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp817);
*(&local19) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
frost$core$MutableString* $tmp818 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
*(&local19) = $tmp817;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
// line 322
org$frostlang$frostc$ASTNode* $tmp819 = *(&local16);
frost$core$Bit $tmp820 = frost$core$Bit$init$builtin_bit($tmp819 != NULL);
bool $tmp821 = $tmp820.value;
if ($tmp821) goto block35; else goto block36;
block35:;
// line 323
frost$core$MutableString* $tmp822 = *(&local19);
org$frostlang$frostc$ASTNode* $tmp823 = *(&local16);
frost$core$String* $tmp824 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp823), &$s825);
frost$core$MutableString$append$frost$core$String($tmp822, $tmp824);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
goto block36;
block36:;
// line 325
frost$core$MutableString* $tmp826 = *(&local19);
frost$core$String* $tmp827 = *(&local17);
frost$core$String* $tmp828 = frost$core$String$get_asString$R$frost$core$String($tmp827);
frost$core$String* $tmp829 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp828, &$s830);
org$frostlang$frostc$FixedArray* $tmp831 = *(&local18);
ITable* $tmp832 = ((frost$collections$CollectionView*) $tmp831)->$class->itable;
while ($tmp832->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp832 = $tmp832->next;
}
$fn834 $tmp833 = $tmp832->methods[2];
frost$core$String* $tmp835 = $tmp833(((frost$collections$CollectionView*) $tmp831), &$s836);
frost$core$String* $tmp837 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp829, $tmp835);
frost$core$String* $tmp838 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp837, &$s839);
frost$core$MutableString$append$frost$core$String($tmp826, $tmp838);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
// line 326
frost$core$MutableString* $tmp840 = *(&local19);
frost$core$String* $tmp841 = frost$core$MutableString$finish$R$frost$core$String($tmp840);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
frost$core$MutableString* $tmp842 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
*(&local19) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp843 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp844 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp845 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp841;
block34:;
frost$core$Int64 $tmp846 = (frost$core$Int64) {11};
frost$core$Bit $tmp847 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp846);
bool $tmp848 = $tmp847.value;
if ($tmp848) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Position* $tmp849 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp850 = *$tmp849;
org$frostlang$frostc$ASTNode** $tmp851 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp852 = *$tmp851;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
org$frostlang$frostc$ASTNode* $tmp853 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
*(&local20) = $tmp852;
org$frostlang$frostc$ChoiceCase** $tmp854 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp855 = *$tmp854;
*(&local21) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
org$frostlang$frostc$ChoiceCase* $tmp856 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
*(&local21) = $tmp855;
frost$core$Int64* $tmp857 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp858 = *$tmp857;
*(&local22) = $tmp858;
// line 329
org$frostlang$frostc$ASTNode* $tmp859 = *(&local20);
$fn861 $tmp860 = ($fn861) $tmp859->$class->vtable[0];
frost$core$String* $tmp862 = $tmp860($tmp859);
frost$core$String* $tmp863 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp862, &$s864);
org$frostlang$frostc$ChoiceCase* $tmp865 = *(&local21);
frost$core$String* $tmp866 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp863, ((frost$core$Object*) $tmp865));
frost$core$String* $tmp867 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp866, &$s868);
frost$core$Int64 $tmp869 = *(&local22);
frost$core$Int64$wrapper* $tmp870;
$tmp870 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp870->value = $tmp869;
frost$core$String* $tmp871 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp867, ((frost$core$Object*) $tmp870));
frost$core$String* $tmp872 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp871, &$s873);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
org$frostlang$frostc$ChoiceCase* $tmp874 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
*(&local21) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp875 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp872;
block38:;
frost$core$Int64 $tmp876 = (frost$core$Int64) {12};
frost$core$Bit $tmp877 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp876);
bool $tmp878 = $tmp877.value;
if ($tmp878) goto block39; else goto block40;
block39:;
org$frostlang$frostc$Position* $tmp879 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp880 = *$tmp879;
org$frostlang$frostc$ASTNode** $tmp881 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp882 = *$tmp881;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
org$frostlang$frostc$ASTNode* $tmp883 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
*(&local23) = $tmp882;
org$frostlang$frostc$FixedArray** $tmp884 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp885 = *$tmp884;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
org$frostlang$frostc$FixedArray* $tmp886 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
*(&local24) = $tmp885;
org$frostlang$frostc$ClassDecl$Kind* $tmp887 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp888 = *$tmp887;
*(&local25) = $tmp888;
frost$core$String** $tmp889 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp890 = *$tmp889;
*(&local26) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
frost$core$String* $tmp891 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
*(&local26) = $tmp890;
org$frostlang$frostc$FixedArray** $tmp892 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp893 = *$tmp892;
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
org$frostlang$frostc$FixedArray* $tmp894 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
*(&local27) = $tmp893;
org$frostlang$frostc$FixedArray** $tmp895 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp896 = *$tmp895;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
org$frostlang$frostc$FixedArray* $tmp897 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
*(&local28) = $tmp896;
org$frostlang$frostc$FixedArray** $tmp898 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp899 = *$tmp898;
*(&local29) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
org$frostlang$frostc$FixedArray* $tmp900 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
*(&local29) = $tmp899;
// line 332
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp901 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp901);
*(&local30) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
frost$core$MutableString* $tmp902 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
*(&local30) = $tmp901;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
// line 333
org$frostlang$frostc$ASTNode* $tmp903 = *(&local23);
frost$core$Bit $tmp904 = frost$core$Bit$init$builtin_bit($tmp903 != NULL);
bool $tmp905 = $tmp904.value;
if ($tmp905) goto block41; else goto block42;
block41:;
// line 334
frost$core$MutableString* $tmp906 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp907 = *(&local23);
frost$core$String* $tmp908 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp907), &$s909);
frost$core$MutableString$append$frost$core$String($tmp906, $tmp908);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
goto block42;
block42:;
// line 336
org$frostlang$frostc$FixedArray* $tmp910 = *(&local24);
ITable* $tmp911 = ((frost$collections$Iterable*) $tmp910)->$class->itable;
while ($tmp911->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp911 = $tmp911->next;
}
$fn913 $tmp912 = $tmp911->methods[0];
frost$collections$Iterator* $tmp914 = $tmp912(((frost$collections$Iterable*) $tmp910));
goto block43;
block43:;
ITable* $tmp915 = $tmp914->$class->itable;
while ($tmp915->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp915 = $tmp915->next;
}
$fn917 $tmp916 = $tmp915->methods[0];
frost$core$Bit $tmp918 = $tmp916($tmp914);
bool $tmp919 = $tmp918.value;
if ($tmp919) goto block45; else goto block44;
block44:;
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp920 = $tmp914->$class->itable;
while ($tmp920->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp920 = $tmp920->next;
}
$fn922 $tmp921 = $tmp920->methods[1];
frost$core$Object* $tmp923 = $tmp921($tmp914);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp923)));
org$frostlang$frostc$ASTNode* $tmp924 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
*(&local31) = ((org$frostlang$frostc$ASTNode*) $tmp923);
// line 337
frost$core$MutableString* $tmp925 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp926 = *(&local31);
frost$core$String* $tmp927 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp926), &$s928);
frost$core$MutableString$append$frost$core$String($tmp925, $tmp927);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
frost$core$Frost$unref$frost$core$Object$Q($tmp923);
org$frostlang$frostc$ASTNode* $tmp929 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block43;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
// line 339
org$frostlang$frostc$ClassDecl$Kind $tmp930 = *(&local25);
frost$core$Int64 $tmp931 = $tmp930.$rawValue;
frost$core$Int64 $tmp932 = (frost$core$Int64) {0};
frost$core$Bit $tmp933 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp931, $tmp932);
bool $tmp934 = $tmp933.value;
if ($tmp934) goto block47; else goto block48;
block47:;
// line 340
frost$core$MutableString* $tmp935 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp935, &$s936);
goto block46;
block48:;
frost$core$Int64 $tmp937 = (frost$core$Int64) {1};
frost$core$Bit $tmp938 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp931, $tmp937);
bool $tmp939 = $tmp938.value;
if ($tmp939) goto block49; else goto block50;
block49:;
// line 341
frost$core$MutableString* $tmp940 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp940, &$s941);
goto block46;
block50:;
frost$core$Int64 $tmp942 = (frost$core$Int64) {2};
frost$core$Bit $tmp943 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp931, $tmp942);
bool $tmp944 = $tmp943.value;
if ($tmp944) goto block51; else goto block46;
block51:;
// line 342
frost$core$MutableString* $tmp945 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp945, &$s946);
goto block46;
block46:;
// line 344
frost$core$MutableString* $tmp947 = *(&local30);
frost$core$String* $tmp948 = *(&local26);
frost$core$MutableString$append$frost$core$String($tmp947, $tmp948);
// line 345
org$frostlang$frostc$FixedArray* $tmp949 = *(&local27);
frost$core$Bit $tmp950 = frost$core$Bit$init$builtin_bit($tmp949 != NULL);
bool $tmp951 = $tmp950.value;
if ($tmp951) goto block52; else goto block53;
block52:;
// line 346
frost$core$MutableString* $tmp952 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp953 = *(&local27);
ITable* $tmp954 = ((frost$collections$CollectionView*) $tmp953)->$class->itable;
while ($tmp954->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp954 = $tmp954->next;
}
$fn956 $tmp955 = $tmp954->methods[2];
frost$core$String* $tmp957 = $tmp955(((frost$collections$CollectionView*) $tmp953), &$s958);
frost$core$String* $tmp959 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s960, $tmp957);
frost$core$String* $tmp961 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp959, &$s962);
frost$core$MutableString$append$frost$core$String($tmp952, $tmp961);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
goto block53;
block53:;
// line 348
org$frostlang$frostc$FixedArray* $tmp963 = *(&local28);
frost$core$Bit $tmp964 = frost$core$Bit$init$builtin_bit($tmp963 != NULL);
bool $tmp965 = $tmp964.value;
if ($tmp965) goto block54; else goto block55;
block54:;
// line 349
frost$core$MutableString* $tmp966 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp967 = *(&local28);
ITable* $tmp968 = ((frost$collections$CollectionView*) $tmp967)->$class->itable;
while ($tmp968->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp968 = $tmp968->next;
}
$fn970 $tmp969 = $tmp968->methods[2];
frost$core$String* $tmp971 = $tmp969(((frost$collections$CollectionView*) $tmp967), &$s972);
frost$core$String* $tmp973 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s974, $tmp971);
frost$core$String* $tmp975 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp973, &$s976);
frost$core$MutableString$append$frost$core$String($tmp966, $tmp975);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
goto block55;
block55:;
// line 351
frost$core$MutableString* $tmp977 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp977, &$s978);
// line 352
org$frostlang$frostc$FixedArray* $tmp979 = *(&local29);
ITable* $tmp980 = ((frost$collections$Iterable*) $tmp979)->$class->itable;
while ($tmp980->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp980 = $tmp980->next;
}
$fn982 $tmp981 = $tmp980->methods[0];
frost$collections$Iterator* $tmp983 = $tmp981(((frost$collections$Iterable*) $tmp979));
goto block56;
block56:;
ITable* $tmp984 = $tmp983->$class->itable;
while ($tmp984->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp984 = $tmp984->next;
}
$fn986 $tmp985 = $tmp984->methods[0];
frost$core$Bit $tmp987 = $tmp985($tmp983);
bool $tmp988 = $tmp987.value;
if ($tmp988) goto block58; else goto block57;
block57:;
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp989 = $tmp983->$class->itable;
while ($tmp989->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp989 = $tmp989->next;
}
$fn991 $tmp990 = $tmp989->methods[1];
frost$core$Object* $tmp992 = $tmp990($tmp983);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp992)));
org$frostlang$frostc$ASTNode* $tmp993 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
*(&local32) = ((org$frostlang$frostc$ASTNode*) $tmp992);
// line 353
frost$core$MutableString* $tmp994 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp995 = *(&local32);
frost$core$String* $tmp996 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp995), &$s997);
frost$core$MutableString$append$frost$core$String($tmp994, $tmp996);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
frost$core$Frost$unref$frost$core$Object$Q($tmp992);
org$frostlang$frostc$ASTNode* $tmp998 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block56;
block58:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
// line 355
frost$core$MutableString* $tmp999 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp999, &$s1000);
// line 356
frost$core$MutableString* $tmp1001 = *(&local30);
frost$core$String* $tmp1002 = frost$core$MutableString$finish$R$frost$core$String($tmp1001);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
frost$core$MutableString* $tmp1003 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
*(&local30) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1004 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
*(&local29) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1005 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1006 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1007 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
*(&local26) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1008 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1009 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1002;
block40:;
frost$core$Int64 $tmp1010 = (frost$core$Int64) {13};
frost$core$Bit $tmp1011 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1010);
bool $tmp1012 = $tmp1011.value;
if ($tmp1012) goto block59; else goto block60;
block59:;
org$frostlang$frostc$Position* $tmp1013 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1014 = *$tmp1013;
frost$core$String** $tmp1015 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1016 = *$tmp1015;
*(&local33) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
frost$core$String* $tmp1017 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
*(&local33) = $tmp1016;
// line 359
frost$core$String* $tmp1018 = *(&local33);
frost$core$Bit $tmp1019 = frost$core$Bit$init$builtin_bit($tmp1018 != NULL);
bool $tmp1020 = $tmp1019.value;
if ($tmp1020) goto block61; else goto block62;
block61:;
// line 360
frost$core$String* $tmp1021 = *(&local33);
frost$core$String* $tmp1022 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1023, $tmp1021);
frost$core$String* $tmp1024 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1022, &$s1025);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
frost$core$String* $tmp1026 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
*(&local33) = ((frost$core$String*) NULL);
return $tmp1024;
block62:;
// line 362
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1027));
frost$core$String* $tmp1028 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
*(&local33) = ((frost$core$String*) NULL);
return &$s1029;
block60:;
frost$core$Int64 $tmp1030 = (frost$core$Int64) {14};
frost$core$Bit $tmp1031 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1030);
bool $tmp1032 = $tmp1031.value;
if ($tmp1032) goto block63; else goto block64;
block63:;
org$frostlang$frostc$Position* $tmp1033 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1034 = *$tmp1033;
org$frostlang$frostc$ASTNode** $tmp1035 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1036 = *$tmp1035;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
org$frostlang$frostc$ASTNode* $tmp1037 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
*(&local34) = $tmp1036;
org$frostlang$frostc$ASTNode** $tmp1038 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1039 = *$tmp1038;
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
org$frostlang$frostc$ASTNode* $tmp1040 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
*(&local35) = $tmp1039;
// line 365
org$frostlang$frostc$ASTNode* $tmp1041 = *(&local35);
frost$core$Bit $tmp1042 = frost$core$Bit$init$builtin_bit($tmp1041 != NULL);
bool $tmp1043 = $tmp1042.value;
if ($tmp1043) goto block65; else goto block66;
block65:;
// line 366
org$frostlang$frostc$ASTNode* $tmp1044 = *(&local34);
$fn1046 $tmp1045 = ($fn1046) $tmp1044->$class->vtable[0];
frost$core$String* $tmp1047 = $tmp1045($tmp1044);
frost$core$String* $tmp1048 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1047, &$s1049);
org$frostlang$frostc$ASTNode* $tmp1050 = *(&local35);
frost$core$String* $tmp1051 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1048, ((frost$core$Object*) $tmp1050));
frost$core$String* $tmp1052 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1051, &$s1053);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
org$frostlang$frostc$ASTNode* $tmp1054 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1055 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1052;
block66:;
// line 368
org$frostlang$frostc$ASTNode* $tmp1056 = *(&local34);
$fn1058 $tmp1057 = ($fn1058) ((frost$core$Object*) $tmp1056)->$class->vtable[0];
frost$core$String* $tmp1059 = $tmp1057(((frost$core$Object*) $tmp1056));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
org$frostlang$frostc$ASTNode* $tmp1060 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1061 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1059;
block64:;
frost$core$Int64 $tmp1062 = (frost$core$Int64) {15};
frost$core$Bit $tmp1063 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1062);
bool $tmp1064 = $tmp1063.value;
if ($tmp1064) goto block67; else goto block68;
block67:;
org$frostlang$frostc$Position* $tmp1065 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1066 = *$tmp1065;
frost$core$String** $tmp1067 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1068 = *$tmp1067;
*(&local36) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
frost$core$String* $tmp1069 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
*(&local36) = $tmp1068;
org$frostlang$frostc$FixedArray** $tmp1070 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1071 = *$tmp1070;
*(&local37) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
org$frostlang$frostc$FixedArray* $tmp1072 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
*(&local37) = $tmp1071;
org$frostlang$frostc$ASTNode** $tmp1073 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1074 = *$tmp1073;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
org$frostlang$frostc$ASTNode* $tmp1075 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
*(&local38) = $tmp1074;
// line 371
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1076 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1076);
*(&local39) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
frost$core$MutableString* $tmp1077 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
*(&local39) = $tmp1076;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
// line 372
frost$core$String* $tmp1078 = *(&local36);
frost$core$Bit $tmp1079 = frost$core$Bit$init$builtin_bit($tmp1078 != NULL);
bool $tmp1080 = $tmp1079.value;
if ($tmp1080) goto block69; else goto block70;
block69:;
// line 373
frost$core$MutableString* $tmp1081 = *(&local39);
frost$core$String* $tmp1082 = *(&local36);
frost$core$String* $tmp1083 = frost$core$String$get_asString$R$frost$core$String($tmp1082);
frost$core$String* $tmp1084 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1083, &$s1085);
frost$core$MutableString$append$frost$core$String($tmp1081, $tmp1084);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
goto block70;
block70:;
// line 375
frost$core$MutableString* $tmp1086 = *(&local39);
frost$core$MutableString$append$frost$core$String($tmp1086, &$s1087);
// line 376
org$frostlang$frostc$FixedArray* $tmp1088 = *(&local37);
ITable* $tmp1089 = ((frost$collections$Iterable*) $tmp1088)->$class->itable;
while ($tmp1089->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1089 = $tmp1089->next;
}
$fn1091 $tmp1090 = $tmp1089->methods[0];
frost$collections$Iterator* $tmp1092 = $tmp1090(((frost$collections$Iterable*) $tmp1088));
goto block71;
block71:;
ITable* $tmp1093 = $tmp1092->$class->itable;
while ($tmp1093->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1093 = $tmp1093->next;
}
$fn1095 $tmp1094 = $tmp1093->methods[0];
frost$core$Bit $tmp1096 = $tmp1094($tmp1092);
bool $tmp1097 = $tmp1096.value;
if ($tmp1097) goto block73; else goto block72;
block72:;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1098 = $tmp1092->$class->itable;
while ($tmp1098->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1098 = $tmp1098->next;
}
$fn1100 $tmp1099 = $tmp1098->methods[1];
frost$core$Object* $tmp1101 = $tmp1099($tmp1092);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1101)));
org$frostlang$frostc$ASTNode* $tmp1102 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
*(&local40) = ((org$frostlang$frostc$ASTNode*) $tmp1101);
// line 377
frost$core$MutableString* $tmp1103 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp1104 = *(&local40);
frost$core$String* $tmp1105 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1104), &$s1106);
frost$core$MutableString$append$frost$core$String($tmp1103, $tmp1105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
frost$core$Frost$unref$frost$core$Object$Q($tmp1101);
org$frostlang$frostc$ASTNode* $tmp1107 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block71;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
// line 379
frost$core$MutableString* $tmp1108 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp1109 = *(&local38);
frost$core$String* $tmp1110 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1111, ((frost$core$Object*) $tmp1109));
frost$core$String* $tmp1112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1110, &$s1113);
frost$core$MutableString$append$frost$core$String($tmp1108, $tmp1112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
// line 380
frost$core$MutableString* $tmp1114 = *(&local39);
frost$core$String* $tmp1115 = frost$core$MutableString$finish$R$frost$core$String($tmp1114);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
frost$core$MutableString* $tmp1116 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
*(&local39) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1117 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1118 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
*(&local37) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1119 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
*(&local36) = ((frost$core$String*) NULL);
return $tmp1115;
block68:;
frost$core$Int64 $tmp1120 = (frost$core$Int64) {16};
frost$core$Bit $tmp1121 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1120);
bool $tmp1122 = $tmp1121.value;
if ($tmp1122) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp1123 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1124 = *$tmp1123;
org$frostlang$frostc$ASTNode** $tmp1125 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1126 = *$tmp1125;
*(&local41) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
org$frostlang$frostc$ASTNode* $tmp1127 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
*(&local41) = $tmp1126;
frost$core$String** $tmp1128 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1129 = *$tmp1128;
*(&local42) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
frost$core$String* $tmp1130 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
*(&local42) = $tmp1129;
// line 383
org$frostlang$frostc$ASTNode* $tmp1131 = *(&local41);
$fn1133 $tmp1132 = ($fn1133) $tmp1131->$class->vtable[0];
frost$core$String* $tmp1134 = $tmp1132($tmp1131);
frost$core$String* $tmp1135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1134, &$s1136);
frost$core$String* $tmp1137 = *(&local42);
frost$core$String* $tmp1138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1135, $tmp1137);
frost$core$String* $tmp1139 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1138, &$s1140);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
frost$core$String* $tmp1141 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
*(&local42) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1142 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
*(&local41) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1139;
block75:;
frost$core$Int64 $tmp1143 = (frost$core$Int64) {17};
frost$core$Bit $tmp1144 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1143);
bool $tmp1145 = $tmp1144.value;
if ($tmp1145) goto block76; else goto block77;
block76:;
org$frostlang$frostc$Position* $tmp1146 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1147 = *$tmp1146;
org$frostlang$frostc$ASTNode** $tmp1148 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1149 = *$tmp1148;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
org$frostlang$frostc$ASTNode* $tmp1150 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
*(&local43) = $tmp1149;
frost$core$String** $tmp1151 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1152 = *$tmp1151;
*(&local44) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
frost$core$String* $tmp1153 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
*(&local44) = $tmp1152;
org$frostlang$frostc$FixedArray** $tmp1154 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1155 = *$tmp1154;
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
org$frostlang$frostc$FixedArray* $tmp1156 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
*(&local45) = $tmp1155;
// line 386
org$frostlang$frostc$ASTNode* $tmp1157 = *(&local43);
$fn1159 $tmp1158 = ($fn1159) $tmp1157->$class->vtable[0];
frost$core$String* $tmp1160 = $tmp1158($tmp1157);
frost$core$String* $tmp1161 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1160, &$s1162);
frost$core$String* $tmp1163 = *(&local44);
frost$core$String* $tmp1164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1161, $tmp1163);
frost$core$String* $tmp1165 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1164, &$s1166);
org$frostlang$frostc$FixedArray* $tmp1167 = *(&local45);
ITable* $tmp1168 = ((frost$collections$CollectionView*) $tmp1167)->$class->itable;
while ($tmp1168->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1168 = $tmp1168->next;
}
$fn1170 $tmp1169 = $tmp1168->methods[2];
frost$core$String* $tmp1171 = $tmp1169(((frost$collections$CollectionView*) $tmp1167), &$s1172);
frost$core$String* $tmp1173 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1165, $tmp1171);
frost$core$String* $tmp1174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1173, &$s1175);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
org$frostlang$frostc$FixedArray* $tmp1176 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1177 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
*(&local44) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1178 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1174;
block77:;
frost$core$Int64 $tmp1179 = (frost$core$Int64) {18};
frost$core$Bit $tmp1180 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1179);
bool $tmp1181 = $tmp1180.value;
if ($tmp1181) goto block78; else goto block79;
block78:;
org$frostlang$frostc$Position* $tmp1182 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1183 = *$tmp1182;
org$frostlang$frostc$ASTNode** $tmp1184 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1185 = *$tmp1184;
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
org$frostlang$frostc$ASTNode* $tmp1186 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
*(&local46) = $tmp1185;
org$frostlang$frostc$FixedArray** $tmp1187 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1188 = *$tmp1187;
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
org$frostlang$frostc$FixedArray* $tmp1189 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
*(&local47) = $tmp1188;
org$frostlang$frostc$ASTNode** $tmp1190 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1191 = *$tmp1190;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
org$frostlang$frostc$ASTNode* $tmp1192 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
*(&local48) = $tmp1191;
// line 389
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1193 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1193);
*(&local49) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
frost$core$MutableString* $tmp1194 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
*(&local49) = $tmp1193;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
// line 390
org$frostlang$frostc$ASTNode* $tmp1195 = *(&local46);
frost$core$Bit $tmp1196 = frost$core$Bit$init$builtin_bit($tmp1195 != NULL);
bool $tmp1197 = $tmp1196.value;
if ($tmp1197) goto block80; else goto block81;
block80:;
// line 391
frost$core$MutableString* $tmp1198 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1199 = *(&local46);
frost$core$String* $tmp1200 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1199), &$s1201);
frost$core$MutableString$append$frost$core$String($tmp1198, $tmp1200);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
goto block81;
block81:;
// line 393
org$frostlang$frostc$FixedArray* $tmp1202 = *(&local47);
ITable* $tmp1203 = ((frost$collections$Iterable*) $tmp1202)->$class->itable;
while ($tmp1203->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1203 = $tmp1203->next;
}
$fn1205 $tmp1204 = $tmp1203->methods[0];
frost$collections$Iterator* $tmp1206 = $tmp1204(((frost$collections$Iterable*) $tmp1202));
goto block82;
block82:;
ITable* $tmp1207 = $tmp1206->$class->itable;
while ($tmp1207->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1207 = $tmp1207->next;
}
$fn1209 $tmp1208 = $tmp1207->methods[0];
frost$core$Bit $tmp1210 = $tmp1208($tmp1206);
bool $tmp1211 = $tmp1210.value;
if ($tmp1211) goto block84; else goto block83;
block83:;
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1212 = $tmp1206->$class->itable;
while ($tmp1212->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1212 = $tmp1212->next;
}
$fn1214 $tmp1213 = $tmp1212->methods[1];
frost$core$Object* $tmp1215 = $tmp1213($tmp1206);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1215)));
org$frostlang$frostc$ASTNode* $tmp1216 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
*(&local50) = ((org$frostlang$frostc$ASTNode*) $tmp1215);
// line 394
frost$core$MutableString* $tmp1217 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1218 = *(&local50);
frost$core$String* $tmp1219 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1218), &$s1220);
frost$core$MutableString$append$frost$core$String($tmp1217, $tmp1219);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
frost$core$Frost$unref$frost$core$Object$Q($tmp1215);
org$frostlang$frostc$ASTNode* $tmp1221 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block82;
block84:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
// line 396
frost$core$MutableString* $tmp1222 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1223 = *(&local48);
frost$core$MutableString$append$frost$core$Object($tmp1222, ((frost$core$Object*) $tmp1223));
// line 397
frost$core$MutableString* $tmp1224 = *(&local49);
frost$core$String* $tmp1225 = frost$core$MutableString$finish$R$frost$core$String($tmp1224);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
frost$core$MutableString* $tmp1226 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
*(&local49) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1227 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1228 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1229 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1225;
block79:;
frost$core$Int64 $tmp1230 = (frost$core$Int64) {19};
frost$core$Bit $tmp1231 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1230);
bool $tmp1232 = $tmp1231.value;
if ($tmp1232) goto block85; else goto block86;
block85:;
org$frostlang$frostc$FixedArray** $tmp1233 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp1234 = *$tmp1233;
*(&local51) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
org$frostlang$frostc$FixedArray* $tmp1235 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
*(&local51) = $tmp1234;
// line 400
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1236 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1236);
*(&local52) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
frost$core$MutableString* $tmp1237 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
*(&local52) = $tmp1236;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
// line 401
org$frostlang$frostc$FixedArray* $tmp1238 = *(&local51);
ITable* $tmp1239 = ((frost$collections$Iterable*) $tmp1238)->$class->itable;
while ($tmp1239->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1239 = $tmp1239->next;
}
$fn1241 $tmp1240 = $tmp1239->methods[0];
frost$collections$Iterator* $tmp1242 = $tmp1240(((frost$collections$Iterable*) $tmp1238));
goto block87;
block87:;
ITable* $tmp1243 = $tmp1242->$class->itable;
while ($tmp1243->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1243 = $tmp1243->next;
}
$fn1245 $tmp1244 = $tmp1243->methods[0];
frost$core$Bit $tmp1246 = $tmp1244($tmp1242);
bool $tmp1247 = $tmp1246.value;
if ($tmp1247) goto block89; else goto block88;
block88:;
*(&local53) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1248 = $tmp1242->$class->itable;
while ($tmp1248->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1248 = $tmp1248->next;
}
$fn1250 $tmp1249 = $tmp1248->methods[1];
frost$core$Object* $tmp1251 = $tmp1249($tmp1242);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1251)));
org$frostlang$frostc$ASTNode* $tmp1252 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
*(&local53) = ((org$frostlang$frostc$ASTNode*) $tmp1251);
// line 402
frost$core$MutableString* $tmp1253 = *(&local52);
org$frostlang$frostc$ASTNode* $tmp1254 = *(&local53);
frost$core$String* $tmp1255 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1254), &$s1256);
frost$core$MutableString$append$frost$core$String($tmp1253, $tmp1255);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
frost$core$Frost$unref$frost$core$Object$Q($tmp1251);
org$frostlang$frostc$ASTNode* $tmp1257 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
*(&local53) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block87;
block89:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
// line 404
frost$core$MutableString* $tmp1258 = *(&local52);
frost$core$String* $tmp1259 = frost$core$MutableString$finish$R$frost$core$String($tmp1258);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
frost$core$MutableString* $tmp1260 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
*(&local52) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1261 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
*(&local51) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1259;
block86:;
frost$core$Int64 $tmp1262 = (frost$core$Int64) {20};
frost$core$Bit $tmp1263 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1262);
bool $tmp1264 = $tmp1263.value;
if ($tmp1264) goto block90; else goto block91;
block90:;
org$frostlang$frostc$Position* $tmp1265 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1266 = *$tmp1265;
frost$core$String** $tmp1267 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1268 = *$tmp1267;
*(&local54) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
frost$core$String* $tmp1269 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
*(&local54) = $tmp1268;
org$frostlang$frostc$ASTNode** $tmp1270 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1271 = *$tmp1270;
*(&local55) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
org$frostlang$frostc$ASTNode* $tmp1272 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
*(&local55) = $tmp1271;
org$frostlang$frostc$ASTNode** $tmp1273 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1274 = *$tmp1273;
*(&local56) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
org$frostlang$frostc$ASTNode* $tmp1275 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
*(&local56) = $tmp1274;
org$frostlang$frostc$FixedArray** $tmp1276 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1277 = *$tmp1276;
*(&local57) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
org$frostlang$frostc$FixedArray* $tmp1278 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
*(&local57) = $tmp1277;
// line 407
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1279 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1279);
*(&local58) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
frost$core$MutableString* $tmp1280 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
*(&local58) = $tmp1279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
// line 408
frost$core$String* $tmp1281 = *(&local54);
frost$core$Bit $tmp1282 = frost$core$Bit$init$builtin_bit($tmp1281 != NULL);
bool $tmp1283 = $tmp1282.value;
if ($tmp1283) goto block92; else goto block93;
block92:;
// line 409
frost$core$MutableString* $tmp1284 = *(&local58);
frost$core$String* $tmp1285 = *(&local54);
frost$core$String* $tmp1286 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1285, &$s1287);
frost$core$MutableString$append$frost$core$String($tmp1284, $tmp1286);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
goto block93;
block93:;
// line 411
frost$core$MutableString* $tmp1288 = *(&local58);
org$frostlang$frostc$ASTNode* $tmp1289 = *(&local55);
frost$core$String* $tmp1290 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1291, ((frost$core$Object*) $tmp1289));
frost$core$String* $tmp1292 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1290, &$s1293);
org$frostlang$frostc$ASTNode* $tmp1294 = *(&local56);
frost$core$String* $tmp1295 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1292, ((frost$core$Object*) $tmp1294));
frost$core$String* $tmp1296 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1295, &$s1297);
frost$core$MutableString$append$frost$core$String($tmp1288, $tmp1296);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
// line 412
org$frostlang$frostc$FixedArray* $tmp1298 = *(&local57);
ITable* $tmp1299 = ((frost$collections$Iterable*) $tmp1298)->$class->itable;
while ($tmp1299->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1299 = $tmp1299->next;
}
$fn1301 $tmp1300 = $tmp1299->methods[0];
frost$collections$Iterator* $tmp1302 = $tmp1300(((frost$collections$Iterable*) $tmp1298));
goto block94;
block94:;
ITable* $tmp1303 = $tmp1302->$class->itable;
while ($tmp1303->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1303 = $tmp1303->next;
}
$fn1305 $tmp1304 = $tmp1303->methods[0];
frost$core$Bit $tmp1306 = $tmp1304($tmp1302);
bool $tmp1307 = $tmp1306.value;
if ($tmp1307) goto block96; else goto block95;
block95:;
*(&local59) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1308 = $tmp1302->$class->itable;
while ($tmp1308->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1308 = $tmp1308->next;
}
$fn1310 $tmp1309 = $tmp1308->methods[1];
frost$core$Object* $tmp1311 = $tmp1309($tmp1302);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1311)));
org$frostlang$frostc$ASTNode* $tmp1312 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
*(&local59) = ((org$frostlang$frostc$ASTNode*) $tmp1311);
// line 413
frost$core$MutableString* $tmp1313 = *(&local58);
org$frostlang$frostc$ASTNode* $tmp1314 = *(&local59);
frost$core$String* $tmp1315 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1314), &$s1316);
frost$core$MutableString$append$frost$core$String($tmp1313, $tmp1315);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
frost$core$Frost$unref$frost$core$Object$Q($tmp1311);
org$frostlang$frostc$ASTNode* $tmp1317 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
*(&local59) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block94;
block96:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
// line 415
frost$core$MutableString* $tmp1318 = *(&local58);
frost$core$MutableString$append$frost$core$String($tmp1318, &$s1319);
// line 416
frost$core$MutableString* $tmp1320 = *(&local58);
frost$core$String* $tmp1321 = frost$core$MutableString$finish$R$frost$core$String($tmp1320);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
frost$core$MutableString* $tmp1322 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
*(&local58) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1323 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
*(&local57) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1324 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
*(&local56) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1325 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
*(&local55) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1326 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
*(&local54) = ((frost$core$String*) NULL);
return $tmp1321;
block91:;
frost$core$Int64 $tmp1327 = (frost$core$Int64) {21};
frost$core$Bit $tmp1328 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1327);
bool $tmp1329 = $tmp1328.value;
if ($tmp1329) goto block97; else goto block98;
block97:;
org$frostlang$frostc$Position* $tmp1330 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1331 = *$tmp1330;
frost$core$String** $tmp1332 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1333 = *$tmp1332;
*(&local60) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
frost$core$String* $tmp1334 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
*(&local60) = $tmp1333;
org$frostlang$frostc$FixedArray** $tmp1335 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1336 = *$tmp1335;
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
org$frostlang$frostc$FixedArray* $tmp1337 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local61) = $tmp1336;
// line 419
frost$core$String* $tmp1338 = *(&local60);
frost$core$String* $tmp1339 = frost$core$String$get_asString$R$frost$core$String($tmp1338);
frost$core$String* $tmp1340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1339, &$s1341);
org$frostlang$frostc$FixedArray* $tmp1342 = *(&local61);
ITable* $tmp1343 = ((frost$collections$CollectionView*) $tmp1342)->$class->itable;
while ($tmp1343->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1343 = $tmp1343->next;
}
$fn1345 $tmp1344 = $tmp1343->methods[2];
frost$core$String* $tmp1346 = $tmp1344(((frost$collections$CollectionView*) $tmp1342), &$s1347);
frost$core$String* $tmp1348 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1340, $tmp1346);
frost$core$String* $tmp1349 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1348, &$s1350);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
org$frostlang$frostc$FixedArray* $tmp1351 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1352 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
*(&local60) = ((frost$core$String*) NULL);
return $tmp1349;
block98:;
frost$core$Int64 $tmp1353 = (frost$core$Int64) {22};
frost$core$Bit $tmp1354 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1353);
bool $tmp1355 = $tmp1354.value;
if ($tmp1355) goto block99; else goto block100;
block99:;
org$frostlang$frostc$Position* $tmp1356 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1357 = *$tmp1356;
frost$core$String** $tmp1358 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1359 = *$tmp1358;
*(&local62) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
frost$core$String* $tmp1360 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
*(&local62) = $tmp1359;
// line 422
frost$core$String* $tmp1361 = *(&local62);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
frost$core$String* $tmp1362 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
*(&local62) = ((frost$core$String*) NULL);
return $tmp1361;
block100:;
frost$core$Int64 $tmp1363 = (frost$core$Int64) {23};
frost$core$Bit $tmp1364 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1363);
bool $tmp1365 = $tmp1364.value;
if ($tmp1365) goto block101; else goto block102;
block101:;
org$frostlang$frostc$Position* $tmp1366 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1367 = *$tmp1366;
frost$core$String** $tmp1368 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1369 = *$tmp1368;
*(&local63) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
frost$core$String* $tmp1370 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
*(&local63) = $tmp1369;
org$frostlang$frostc$FixedArray** $tmp1371 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1372 = *$tmp1371;
*(&local64) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
org$frostlang$frostc$FixedArray* $tmp1373 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
*(&local64) = $tmp1372;
// line 425
frost$core$String* $tmp1374 = *(&local63);
frost$core$String* $tmp1375 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1376, $tmp1374);
frost$core$String* $tmp1377 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1375, &$s1378);
org$frostlang$frostc$FixedArray* $tmp1379 = *(&local64);
ITable* $tmp1380 = ((frost$collections$CollectionView*) $tmp1379)->$class->itable;
while ($tmp1380->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1380 = $tmp1380->next;
}
$fn1382 $tmp1381 = $tmp1380->methods[2];
frost$core$String* $tmp1383 = $tmp1381(((frost$collections$CollectionView*) $tmp1379), &$s1384);
frost$core$String* $tmp1385 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1377, $tmp1383);
frost$core$String* $tmp1386 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1385, &$s1387);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
org$frostlang$frostc$FixedArray* $tmp1388 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
*(&local64) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1389 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
*(&local63) = ((frost$core$String*) NULL);
return $tmp1386;
block102:;
frost$core$Int64 $tmp1390 = (frost$core$Int64) {24};
frost$core$Bit $tmp1391 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1390);
bool $tmp1392 = $tmp1391.value;
if ($tmp1392) goto block103; else goto block104;
block103:;
org$frostlang$frostc$Position* $tmp1393 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1394 = *$tmp1393;
org$frostlang$frostc$ASTNode** $tmp1395 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1396 = *$tmp1395;
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
org$frostlang$frostc$ASTNode* $tmp1397 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
*(&local65) = $tmp1396;
org$frostlang$frostc$FixedArray** $tmp1398 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1399 = *$tmp1398;
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
org$frostlang$frostc$FixedArray* $tmp1400 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
*(&local66) = $tmp1399;
org$frostlang$frostc$ASTNode** $tmp1401 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1402 = *$tmp1401;
*(&local67) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
org$frostlang$frostc$ASTNode* $tmp1403 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
*(&local67) = $tmp1402;
// line 428
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1404 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$ASTNode* $tmp1405 = *(&local65);
frost$core$String* $tmp1406 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1407, ((frost$core$Object*) $tmp1405));
frost$core$String* $tmp1408 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1406, &$s1409);
frost$core$MutableString$init$frost$core$String($tmp1404, $tmp1408);
*(&local68) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
frost$core$MutableString* $tmp1410 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
*(&local68) = $tmp1404;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
// line 429
org$frostlang$frostc$FixedArray* $tmp1411 = *(&local66);
ITable* $tmp1412 = ((frost$collections$Iterable*) $tmp1411)->$class->itable;
while ($tmp1412->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1412 = $tmp1412->next;
}
$fn1414 $tmp1413 = $tmp1412->methods[0];
frost$collections$Iterator* $tmp1415 = $tmp1413(((frost$collections$Iterable*) $tmp1411));
goto block105;
block105:;
ITable* $tmp1416 = $tmp1415->$class->itable;
while ($tmp1416->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1416 = $tmp1416->next;
}
$fn1418 $tmp1417 = $tmp1416->methods[0];
frost$core$Bit $tmp1419 = $tmp1417($tmp1415);
bool $tmp1420 = $tmp1419.value;
if ($tmp1420) goto block107; else goto block106;
block106:;
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1421 = $tmp1415->$class->itable;
while ($tmp1421->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1421 = $tmp1421->next;
}
$fn1423 $tmp1422 = $tmp1421->methods[1];
frost$core$Object* $tmp1424 = $tmp1422($tmp1415);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1424)));
org$frostlang$frostc$ASTNode* $tmp1425 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
*(&local69) = ((org$frostlang$frostc$ASTNode*) $tmp1424);
// line 430
frost$core$MutableString* $tmp1426 = *(&local68);
org$frostlang$frostc$ASTNode* $tmp1427 = *(&local69);
frost$core$String* $tmp1428 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1427), &$s1429);
frost$core$MutableString$append$frost$core$String($tmp1426, $tmp1428);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
frost$core$Frost$unref$frost$core$Object$Q($tmp1424);
org$frostlang$frostc$ASTNode* $tmp1430 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block105;
block107:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
// line 432
frost$core$MutableString* $tmp1431 = *(&local68);
frost$core$MutableString$append$frost$core$String($tmp1431, &$s1432);
// line 433
org$frostlang$frostc$ASTNode* $tmp1433 = *(&local67);
frost$core$Bit $tmp1434 = frost$core$Bit$init$builtin_bit($tmp1433 != NULL);
bool $tmp1435 = $tmp1434.value;
if ($tmp1435) goto block108; else goto block109;
block108:;
// line 434
frost$core$MutableString* $tmp1436 = *(&local68);
org$frostlang$frostc$ASTNode* $tmp1437 = *(&local67);
frost$core$String* $tmp1438 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1439, ((frost$core$Object*) $tmp1437));
frost$core$String* $tmp1440 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1438, &$s1441);
frost$core$MutableString$append$frost$core$String($tmp1436, $tmp1440);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
goto block109;
block109:;
// line 436
frost$core$MutableString* $tmp1442 = *(&local68);
frost$core$String* $tmp1443 = frost$core$MutableString$finish$R$frost$core$String($tmp1442);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
frost$core$MutableString* $tmp1444 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
*(&local68) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1445 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
*(&local67) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1446 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1447 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1443;
block104:;
frost$core$Int64 $tmp1448 = (frost$core$Int64) {25};
frost$core$Bit $tmp1449 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1448);
bool $tmp1450 = $tmp1449.value;
if ($tmp1450) goto block110; else goto block111;
block110:;
org$frostlang$frostc$Position* $tmp1451 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1452 = *$tmp1451;
frost$core$UInt64* $tmp1453 = (frost$core$UInt64*) (param0->$data + 16);
frost$core$UInt64 $tmp1454 = *$tmp1453;
*(&local70) = $tmp1454;
// line 439
frost$core$UInt64 $tmp1455 = *(&local70);
frost$core$UInt64$wrapper* $tmp1456;
$tmp1456 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp1456->value = $tmp1455;
$fn1458 $tmp1457 = ($fn1458) ((frost$core$Object*) $tmp1456)->$class->vtable[0];
frost$core$String* $tmp1459 = $tmp1457(((frost$core$Object*) $tmp1456));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
return $tmp1459;
block111:;
frost$core$Int64 $tmp1460 = (frost$core$Int64) {26};
frost$core$Bit $tmp1461 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1460);
bool $tmp1462 = $tmp1461.value;
if ($tmp1462) goto block112; else goto block113;
block112:;
org$frostlang$frostc$Position* $tmp1463 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1464 = *$tmp1463;
org$frostlang$frostc$IR$Value** $tmp1465 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp1466 = *$tmp1465;
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
org$frostlang$frostc$IR$Value* $tmp1467 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
*(&local71) = $tmp1466;
// line 442
org$frostlang$frostc$IR$Value* $tmp1468 = *(&local71);
$fn1470 $tmp1469 = ($fn1470) ((frost$core$Object*) $tmp1468)->$class->vtable[0];
frost$core$String* $tmp1471 = $tmp1469(((frost$core$Object*) $tmp1468));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
org$frostlang$frostc$IR$Value* $tmp1472 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp1471;
block113:;
frost$core$Int64 $tmp1473 = (frost$core$Int64) {27};
frost$core$Bit $tmp1474 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1473);
bool $tmp1475 = $tmp1474.value;
if ($tmp1475) goto block114; else goto block115;
block114:;
org$frostlang$frostc$Position* $tmp1476 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1477 = *$tmp1476;
frost$core$String** $tmp1478 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1479 = *$tmp1478;
*(&local72) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
frost$core$String* $tmp1480 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
*(&local72) = $tmp1479;
org$frostlang$frostc$FixedArray** $tmp1481 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1482 = *$tmp1481;
*(&local73) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
org$frostlang$frostc$FixedArray* $tmp1483 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
*(&local73) = $tmp1482;
// line 445
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1484 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1484);
*(&local74) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
frost$core$MutableString* $tmp1485 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1485));
*(&local74) = $tmp1484;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
// line 446
frost$core$String* $tmp1486 = *(&local72);
frost$core$Bit $tmp1487 = frost$core$Bit$init$builtin_bit($tmp1486 != NULL);
bool $tmp1488 = $tmp1487.value;
if ($tmp1488) goto block116; else goto block117;
block116:;
// line 447
frost$core$MutableString* $tmp1489 = *(&local74);
frost$core$String* $tmp1490 = *(&local72);
frost$core$String* $tmp1491 = frost$core$String$get_asString$R$frost$core$String($tmp1490);
frost$core$String* $tmp1492 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1491, &$s1493);
frost$core$MutableString$append$frost$core$String($tmp1489, $tmp1492);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
goto block117;
block117:;
// line 449
frost$core$MutableString* $tmp1494 = *(&local74);
frost$core$MutableString$append$frost$core$String($tmp1494, &$s1495);
// line 450
org$frostlang$frostc$FixedArray* $tmp1496 = *(&local73);
ITable* $tmp1497 = ((frost$collections$Iterable*) $tmp1496)->$class->itable;
while ($tmp1497->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1497 = $tmp1497->next;
}
$fn1499 $tmp1498 = $tmp1497->methods[0];
frost$collections$Iterator* $tmp1500 = $tmp1498(((frost$collections$Iterable*) $tmp1496));
goto block118;
block118:;
ITable* $tmp1501 = $tmp1500->$class->itable;
while ($tmp1501->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1501 = $tmp1501->next;
}
$fn1503 $tmp1502 = $tmp1501->methods[0];
frost$core$Bit $tmp1504 = $tmp1502($tmp1500);
bool $tmp1505 = $tmp1504.value;
if ($tmp1505) goto block120; else goto block119;
block119:;
*(&local75) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1506 = $tmp1500->$class->itable;
while ($tmp1506->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1506 = $tmp1506->next;
}
$fn1508 $tmp1507 = $tmp1506->methods[1];
frost$core$Object* $tmp1509 = $tmp1507($tmp1500);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1509)));
org$frostlang$frostc$ASTNode* $tmp1510 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1510));
*(&local75) = ((org$frostlang$frostc$ASTNode*) $tmp1509);
// line 451
frost$core$MutableString* $tmp1511 = *(&local74);
org$frostlang$frostc$ASTNode* $tmp1512 = *(&local75);
frost$core$String* $tmp1513 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1512), &$s1514);
frost$core$MutableString$append$frost$core$String($tmp1511, $tmp1513);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
frost$core$Frost$unref$frost$core$Object$Q($tmp1509);
org$frostlang$frostc$ASTNode* $tmp1515 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
*(&local75) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block118;
block120:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
// line 453
frost$core$MutableString* $tmp1516 = *(&local74);
frost$core$MutableString$append$frost$core$String($tmp1516, &$s1517);
// line 454
frost$core$MutableString* $tmp1518 = *(&local74);
frost$core$String* $tmp1519 = frost$core$MutableString$finish$R$frost$core$String($tmp1518);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
frost$core$MutableString* $tmp1520 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1520));
*(&local74) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1521 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
*(&local73) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1522 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
*(&local72) = ((frost$core$String*) NULL);
return $tmp1519;
block115:;
frost$core$Int64 $tmp1523 = (frost$core$Int64) {28};
frost$core$Bit $tmp1524 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1523);
bool $tmp1525 = $tmp1524.value;
if ($tmp1525) goto block121; else goto block122;
block121:;
org$frostlang$frostc$Position* $tmp1526 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1527 = *$tmp1526;
org$frostlang$frostc$ASTNode** $tmp1528 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1529 = *$tmp1528;
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
org$frostlang$frostc$ASTNode* $tmp1530 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
*(&local76) = $tmp1529;
org$frostlang$frostc$FixedArray** $tmp1531 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1532 = *$tmp1531;
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
org$frostlang$frostc$FixedArray* $tmp1533 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
*(&local77) = $tmp1532;
org$frostlang$frostc$FixedArray** $tmp1534 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1535 = *$tmp1534;
*(&local78) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
org$frostlang$frostc$FixedArray* $tmp1536 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
*(&local78) = $tmp1535;
// line 457
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1537 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$ASTNode* $tmp1538 = *(&local76);
frost$core$String* $tmp1539 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1540, ((frost$core$Object*) $tmp1538));
frost$core$String* $tmp1541 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1539, &$s1542);
frost$core$MutableString$init$frost$core$String($tmp1537, $tmp1541);
*(&local79) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
frost$core$MutableString* $tmp1543 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1543));
*(&local79) = $tmp1537;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1541));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
// line 458
org$frostlang$frostc$FixedArray* $tmp1544 = *(&local77);
ITable* $tmp1545 = ((frost$collections$Iterable*) $tmp1544)->$class->itable;
while ($tmp1545->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1545 = $tmp1545->next;
}
$fn1547 $tmp1546 = $tmp1545->methods[0];
frost$collections$Iterator* $tmp1548 = $tmp1546(((frost$collections$Iterable*) $tmp1544));
goto block123;
block123:;
ITable* $tmp1549 = $tmp1548->$class->itable;
while ($tmp1549->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1549 = $tmp1549->next;
}
$fn1551 $tmp1550 = $tmp1549->methods[0];
frost$core$Bit $tmp1552 = $tmp1550($tmp1548);
bool $tmp1553 = $tmp1552.value;
if ($tmp1553) goto block125; else goto block124;
block124:;
*(&local80) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1554 = $tmp1548->$class->itable;
while ($tmp1554->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1554 = $tmp1554->next;
}
$fn1556 $tmp1555 = $tmp1554->methods[1];
frost$core$Object* $tmp1557 = $tmp1555($tmp1548);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1557)));
org$frostlang$frostc$ASTNode* $tmp1558 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1558));
*(&local80) = ((org$frostlang$frostc$ASTNode*) $tmp1557);
// line 459
frost$core$MutableString* $tmp1559 = *(&local79);
org$frostlang$frostc$ASTNode* $tmp1560 = *(&local80);
frost$core$String* $tmp1561 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1560), &$s1562);
frost$core$MutableString$append$frost$core$String($tmp1559, $tmp1561);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
frost$core$Frost$unref$frost$core$Object$Q($tmp1557);
org$frostlang$frostc$ASTNode* $tmp1563 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
*(&local80) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block123;
block125:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1548));
// line 461
org$frostlang$frostc$FixedArray* $tmp1564 = *(&local78);
frost$core$Bit $tmp1565 = frost$core$Bit$init$builtin_bit($tmp1564 != NULL);
bool $tmp1566 = $tmp1565.value;
if ($tmp1566) goto block126; else goto block127;
block126:;
// line 462
frost$core$MutableString* $tmp1567 = *(&local79);
org$frostlang$frostc$FixedArray* $tmp1568 = *(&local78);
frost$core$String* $tmp1569 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1568), &$s1570);
frost$core$MutableString$append$frost$core$String($tmp1567, $tmp1569);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
goto block127;
block127:;
// line 464
frost$core$MutableString* $tmp1571 = *(&local79);
frost$core$MutableString$append$frost$core$String($tmp1571, &$s1572);
// line 465
frost$core$MutableString* $tmp1573 = *(&local79);
frost$core$String* $tmp1574 = frost$core$MutableString$finish$R$frost$core$String($tmp1573);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
frost$core$MutableString* $tmp1575 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
*(&local79) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1576 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1576));
*(&local78) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1577 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1578 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1574;
block122:;
frost$core$Int64 $tmp1579 = (frost$core$Int64) {29};
frost$core$Bit $tmp1580 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1579);
bool $tmp1581 = $tmp1580.value;
if ($tmp1581) goto block128; else goto block129;
block128:;
org$frostlang$frostc$Position* $tmp1582 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1583 = *$tmp1582;
org$frostlang$frostc$ASTNode** $tmp1584 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1585 = *$tmp1584;
*(&local81) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
org$frostlang$frostc$ASTNode* $tmp1586 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1586));
*(&local81) = $tmp1585;
org$frostlang$frostc$FixedArray** $tmp1587 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1588 = *$tmp1587;
*(&local82) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1588));
org$frostlang$frostc$FixedArray* $tmp1589 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
*(&local82) = $tmp1588;
org$frostlang$frostc$MethodDecl$Kind* $tmp1590 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp1591 = *$tmp1590;
*(&local83) = $tmp1591;
frost$core$String** $tmp1592 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp1593 = *$tmp1592;
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
frost$core$String* $tmp1594 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1594));
*(&local84) = $tmp1593;
org$frostlang$frostc$FixedArray** $tmp1595 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1596 = *$tmp1595;
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
org$frostlang$frostc$FixedArray* $tmp1597 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
*(&local85) = $tmp1596;
org$frostlang$frostc$FixedArray** $tmp1598 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp1599 = *$tmp1598;
*(&local86) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1599));
org$frostlang$frostc$FixedArray* $tmp1600 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
*(&local86) = $tmp1599;
org$frostlang$frostc$ASTNode** $tmp1601 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
org$frostlang$frostc$ASTNode* $tmp1602 = *$tmp1601;
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1602));
org$frostlang$frostc$ASTNode* $tmp1603 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
*(&local87) = $tmp1602;
org$frostlang$frostc$FixedArray** $tmp1604 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp1605 = *$tmp1604;
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
org$frostlang$frostc$FixedArray* $tmp1606 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1606));
*(&local88) = $tmp1605;
// line 469
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1607 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1607);
*(&local89) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
frost$core$MutableString* $tmp1608 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
*(&local89) = $tmp1607;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
// line 470
org$frostlang$frostc$ASTNode* $tmp1609 = *(&local81);
frost$core$Bit $tmp1610 = frost$core$Bit$init$builtin_bit($tmp1609 != NULL);
bool $tmp1611 = $tmp1610.value;
if ($tmp1611) goto block130; else goto block131;
block130:;
// line 471
frost$core$MutableString* $tmp1612 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1613 = *(&local81);
frost$core$String* $tmp1614 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1613), &$s1615);
frost$core$MutableString$append$frost$core$String($tmp1612, $tmp1614);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
goto block131;
block131:;
// line 473
org$frostlang$frostc$FixedArray* $tmp1616 = *(&local82);
ITable* $tmp1617 = ((frost$collections$Iterable*) $tmp1616)->$class->itable;
while ($tmp1617->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1617 = $tmp1617->next;
}
$fn1619 $tmp1618 = $tmp1617->methods[0];
frost$collections$Iterator* $tmp1620 = $tmp1618(((frost$collections$Iterable*) $tmp1616));
goto block132;
block132:;
ITable* $tmp1621 = $tmp1620->$class->itable;
while ($tmp1621->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1621 = $tmp1621->next;
}
$fn1623 $tmp1622 = $tmp1621->methods[0];
frost$core$Bit $tmp1624 = $tmp1622($tmp1620);
bool $tmp1625 = $tmp1624.value;
if ($tmp1625) goto block134; else goto block133;
block133:;
*(&local90) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1626 = $tmp1620->$class->itable;
while ($tmp1626->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1626 = $tmp1626->next;
}
$fn1628 $tmp1627 = $tmp1626->methods[1];
frost$core$Object* $tmp1629 = $tmp1627($tmp1620);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1629)));
org$frostlang$frostc$ASTNode* $tmp1630 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1630));
*(&local90) = ((org$frostlang$frostc$ASTNode*) $tmp1629);
// line 474
frost$core$MutableString* $tmp1631 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1632 = *(&local90);
frost$core$String* $tmp1633 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1632), &$s1634);
frost$core$MutableString$append$frost$core$String($tmp1631, $tmp1633);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
frost$core$Frost$unref$frost$core$Object$Q($tmp1629);
org$frostlang$frostc$ASTNode* $tmp1635 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
*(&local90) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block132;
block134:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
// line 476
org$frostlang$frostc$MethodDecl$Kind $tmp1636 = *(&local83);
frost$core$Int64 $tmp1637 = $tmp1636.$rawValue;
frost$core$Int64 $tmp1638 = (frost$core$Int64) {0};
frost$core$Bit $tmp1639 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1637, $tmp1638);
bool $tmp1640 = $tmp1639.value;
if ($tmp1640) goto block136; else goto block137;
block136:;
// line 477
frost$core$MutableString* $tmp1641 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1641, &$s1642);
goto block135;
block137:;
frost$core$Int64 $tmp1643 = (frost$core$Int64) {1};
frost$core$Bit $tmp1644 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1637, $tmp1643);
bool $tmp1645 = $tmp1644.value;
if ($tmp1645) goto block138; else goto block139;
block138:;
// line 478
frost$core$MutableString* $tmp1646 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1646, &$s1647);
goto block135;
block139:;
frost$core$Int64 $tmp1648 = (frost$core$Int64) {2};
frost$core$Bit $tmp1649 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1637, $tmp1648);
bool $tmp1650 = $tmp1649.value;
if ($tmp1650) goto block140; else goto block135;
block140:;
goto block135;
block135:;
// line 481
frost$core$MutableString* $tmp1651 = *(&local89);
frost$core$String* $tmp1652 = *(&local84);
frost$core$MutableString$append$frost$core$String($tmp1651, $tmp1652);
// line 482
org$frostlang$frostc$FixedArray* $tmp1653 = *(&local85);
frost$core$Bit $tmp1654 = frost$core$Bit$init$builtin_bit($tmp1653 != NULL);
bool $tmp1655 = $tmp1654.value;
if ($tmp1655) goto block141; else goto block142;
block141:;
// line 483
frost$core$MutableString* $tmp1656 = *(&local89);
org$frostlang$frostc$FixedArray* $tmp1657 = *(&local85);
ITable* $tmp1658 = ((frost$collections$CollectionView*) $tmp1657)->$class->itable;
while ($tmp1658->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1658 = $tmp1658->next;
}
$fn1660 $tmp1659 = $tmp1658->methods[2];
frost$core$String* $tmp1661 = $tmp1659(((frost$collections$CollectionView*) $tmp1657), &$s1662);
frost$core$String* $tmp1663 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1664, $tmp1661);
frost$core$String* $tmp1665 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1663, &$s1666);
frost$core$MutableString$append$frost$core$String($tmp1656, $tmp1665);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1661));
goto block142;
block142:;
// line 485
frost$core$MutableString* $tmp1667 = *(&local89);
org$frostlang$frostc$FixedArray* $tmp1668 = *(&local86);
ITable* $tmp1669 = ((frost$collections$CollectionView*) $tmp1668)->$class->itable;
while ($tmp1669->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1669 = $tmp1669->next;
}
$fn1671 $tmp1670 = $tmp1669->methods[2];
frost$core$String* $tmp1672 = $tmp1670(((frost$collections$CollectionView*) $tmp1668), &$s1673);
frost$core$String* $tmp1674 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1675, $tmp1672);
frost$core$String* $tmp1676 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1674, &$s1677);
frost$core$MutableString$append$frost$core$String($tmp1667, $tmp1676);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
// line 486
org$frostlang$frostc$ASTNode* $tmp1678 = *(&local87);
frost$core$Bit $tmp1679 = frost$core$Bit$init$builtin_bit($tmp1678 != NULL);
bool $tmp1680 = $tmp1679.value;
if ($tmp1680) goto block143; else goto block144;
block143:;
// line 487
frost$core$MutableString* $tmp1681 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1682 = *(&local87);
frost$core$String* $tmp1683 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1684, ((frost$core$Object*) $tmp1682));
frost$core$String* $tmp1685 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1683, &$s1686);
frost$core$MutableString$append$frost$core$String($tmp1681, $tmp1685);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1683));
goto block144;
block144:;
// line 489
org$frostlang$frostc$FixedArray* $tmp1687 = *(&local88);
frost$core$Bit $tmp1688 = frost$core$Bit$init$builtin_bit($tmp1687 != NULL);
bool $tmp1689 = $tmp1688.value;
if ($tmp1689) goto block145; else goto block146;
block145:;
// line 490
frost$core$MutableString* $tmp1690 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1690, &$s1691);
// line 491
org$frostlang$frostc$FixedArray* $tmp1692 = *(&local88);
ITable* $tmp1693 = ((frost$collections$Iterable*) $tmp1692)->$class->itable;
while ($tmp1693->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1693 = $tmp1693->next;
}
$fn1695 $tmp1694 = $tmp1693->methods[0];
frost$collections$Iterator* $tmp1696 = $tmp1694(((frost$collections$Iterable*) $tmp1692));
goto block147;
block147:;
ITable* $tmp1697 = $tmp1696->$class->itable;
while ($tmp1697->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1697 = $tmp1697->next;
}
$fn1699 $tmp1698 = $tmp1697->methods[0];
frost$core$Bit $tmp1700 = $tmp1698($tmp1696);
bool $tmp1701 = $tmp1700.value;
if ($tmp1701) goto block149; else goto block148;
block148:;
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1702 = $tmp1696->$class->itable;
while ($tmp1702->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1702 = $tmp1702->next;
}
$fn1704 $tmp1703 = $tmp1702->methods[1];
frost$core$Object* $tmp1705 = $tmp1703($tmp1696);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1705)));
org$frostlang$frostc$ASTNode* $tmp1706 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
*(&local91) = ((org$frostlang$frostc$ASTNode*) $tmp1705);
// line 492
frost$core$MutableString* $tmp1707 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1708 = *(&local91);
frost$core$String* $tmp1709 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1708), &$s1710);
frost$core$MutableString$append$frost$core$String($tmp1707, $tmp1709);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
frost$core$Frost$unref$frost$core$Object$Q($tmp1705);
org$frostlang$frostc$ASTNode* $tmp1711 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1711));
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block147;
block149:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
// line 494
frost$core$MutableString* $tmp1712 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1712, &$s1713);
goto block146;
block146:;
// line 496
frost$core$MutableString* $tmp1714 = *(&local89);
frost$core$String* $tmp1715 = frost$core$MutableString$finish$R$frost$core$String($tmp1714);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
frost$core$MutableString* $tmp1716 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
*(&local89) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1717 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1718 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1718));
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1719 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
*(&local86) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1720 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1721 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
*(&local84) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1722 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
*(&local82) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1723 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
*(&local81) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1715;
block129:;
frost$core$Int64 $tmp1724 = (frost$core$Int64) {30};
frost$core$Bit $tmp1725 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1724);
bool $tmp1726 = $tmp1725.value;
if ($tmp1726) goto block150; else goto block151;
block150:;
org$frostlang$frostc$Position* $tmp1727 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1728 = *$tmp1727;
org$frostlang$frostc$parser$Token$Kind* $tmp1729 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp1730 = *$tmp1729;
*(&local92) = $tmp1730;
org$frostlang$frostc$FixedArray** $tmp1731 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1732 = *$tmp1731;
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
org$frostlang$frostc$FixedArray* $tmp1733 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
*(&local93) = $tmp1732;
org$frostlang$frostc$ASTNode** $tmp1734 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1735 = *$tmp1734;
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
org$frostlang$frostc$ASTNode* $tmp1736 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
*(&local94) = $tmp1735;
// line 499
*(&local95) = ((frost$core$String*) NULL);
// line 500
org$frostlang$frostc$parser$Token$Kind $tmp1737 = *(&local92);
frost$core$Int64 $tmp1738 = $tmp1737.$rawValue;
frost$core$Int64 $tmp1739 = (frost$core$Int64) {94};
frost$core$Bit $tmp1740 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1738, $tmp1739);
bool $tmp1741 = $tmp1740.value;
if ($tmp1741) goto block153; else goto block154;
block153:;
// line 502
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1742));
frost$core$String* $tmp1743 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1743));
*(&local95) = &$s1744;
goto block152;
block154:;
frost$core$Int64 $tmp1745 = (frost$core$Int64) {95};
frost$core$Bit $tmp1746 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1738, $tmp1745);
bool $tmp1747 = $tmp1746.value;
if ($tmp1747) goto block155; else goto block156;
block155:;
// line 505
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1748));
frost$core$String* $tmp1749 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1749));
*(&local95) = &$s1750;
goto block152;
block156:;
frost$core$Int64 $tmp1751 = (frost$core$Int64) {96};
frost$core$Bit $tmp1752 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1738, $tmp1751);
bool $tmp1753 = $tmp1752.value;
if ($tmp1753) goto block157; else goto block158;
block157:;
// line 508
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1754));
frost$core$String* $tmp1755 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
*(&local95) = &$s1756;
goto block152;
block158:;
frost$core$Int64 $tmp1757 = (frost$core$Int64) {97};
frost$core$Bit $tmp1758 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1738, $tmp1757);
bool $tmp1759 = $tmp1758.value;
if ($tmp1759) goto block159; else goto block152;
block159:;
// line 511
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1760));
frost$core$String* $tmp1761 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
*(&local95) = &$s1762;
goto block152;
block152:;
// line 514
org$frostlang$frostc$FixedArray* $tmp1763 = *(&local93);
ITable* $tmp1764 = ((frost$collections$CollectionView*) $tmp1763)->$class->itable;
while ($tmp1764->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1764 = $tmp1764->next;
}
$fn1766 $tmp1765 = $tmp1764->methods[2];
frost$core$String* $tmp1767 = $tmp1765(((frost$collections$CollectionView*) $tmp1763), &$s1768);
frost$core$String* $tmp1769 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1770, $tmp1767);
frost$core$String* $tmp1771 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1769, &$s1772);
frost$core$String* $tmp1773 = *(&local95);
frost$core$String* $tmp1774 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1771, $tmp1773);
frost$core$String* $tmp1775 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1774, &$s1776);
*(&local96) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
frost$core$String* $tmp1777 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1777));
*(&local96) = $tmp1775;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
// line 515
org$frostlang$frostc$ASTNode* $tmp1778 = *(&local94);
frost$core$Bit $tmp1779 = frost$core$Bit$init$builtin_bit($tmp1778 != NULL);
bool $tmp1780 = $tmp1779.value;
if ($tmp1780) goto block160; else goto block161;
block160:;
// line 516
frost$core$String* $tmp1781 = *(&local96);
frost$core$String* $tmp1782 = frost$core$String$get_asString$R$frost$core$String($tmp1781);
frost$core$String* $tmp1783 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1782, &$s1784);
org$frostlang$frostc$ASTNode* $tmp1785 = *(&local94);
frost$core$String* $tmp1786 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1783, ((frost$core$Object*) $tmp1785));
frost$core$String* $tmp1787 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1786, &$s1788);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
frost$core$String* $tmp1789 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
*(&local96) = ((frost$core$String*) NULL);
frost$core$String* $tmp1790 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1790));
*(&local95) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1791 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1791));
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1792 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1787;
block161:;
// line 518
frost$core$String* $tmp1793 = *(&local96);
frost$core$String* $tmp1794 = frost$core$String$get_asString$R$frost$core$String($tmp1793);
frost$core$String* $tmp1795 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1794, &$s1796);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1794));
frost$core$String* $tmp1797 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
*(&local96) = ((frost$core$String*) NULL);
frost$core$String* $tmp1798 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
*(&local95) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1799 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1799));
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1800 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1795;
block151:;
frost$core$Int64 $tmp1801 = (frost$core$Int64) {31};
frost$core$Bit $tmp1802 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1801);
bool $tmp1803 = $tmp1802.value;
if ($tmp1803) goto block162; else goto block163;
block162:;
// line 521
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1804));
return &$s1805;
block163:;
frost$core$Int64 $tmp1806 = (frost$core$Int64) {32};
frost$core$Bit $tmp1807 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1806);
bool $tmp1808 = $tmp1807.value;
if ($tmp1808) goto block164; else goto block165;
block164:;
org$frostlang$frostc$Position* $tmp1809 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1810 = *$tmp1809;
org$frostlang$frostc$ASTNode** $tmp1811 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1812 = *$tmp1811;
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1812));
org$frostlang$frostc$ASTNode* $tmp1813 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1813));
*(&local97) = $tmp1812;
// line 524
org$frostlang$frostc$ASTNode* $tmp1814 = *(&local97);
frost$core$String* $tmp1815 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1814), &$s1816);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
org$frostlang$frostc$ASTNode* $tmp1817 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1817));
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1815;
block165:;
frost$core$Int64 $tmp1818 = (frost$core$Int64) {33};
frost$core$Bit $tmp1819 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1818);
bool $tmp1820 = $tmp1819.value;
if ($tmp1820) goto block166; else goto block167;
block166:;
org$frostlang$frostc$Position* $tmp1821 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1822 = *$tmp1821;
frost$core$String** $tmp1823 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1824 = *$tmp1823;
*(&local98) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1824));
frost$core$String* $tmp1825 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1825));
*(&local98) = $tmp1824;
// line 527
frost$core$String* $tmp1826 = *(&local98);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
frost$core$String* $tmp1827 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
*(&local98) = ((frost$core$String*) NULL);
return $tmp1826;
block167:;
frost$core$Int64 $tmp1828 = (frost$core$Int64) {34};
frost$core$Bit $tmp1829 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1828);
bool $tmp1830 = $tmp1829.value;
if ($tmp1830) goto block168; else goto block169;
block168:;
org$frostlang$frostc$Position* $tmp1831 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1832 = *$tmp1831;
frost$core$String** $tmp1833 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1834 = *$tmp1833;
*(&local99) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
frost$core$String* $tmp1835 = *(&local99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
*(&local99) = $tmp1834;
org$frostlang$frostc$ASTNode** $tmp1836 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1837 = *$tmp1836;
*(&local100) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1837));
org$frostlang$frostc$ASTNode* $tmp1838 = *(&local100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1838));
*(&local100) = $tmp1837;
// line 530
frost$core$String* $tmp1839 = *(&local99);
frost$core$String* $tmp1840 = frost$core$String$get_asString$R$frost$core$String($tmp1839);
frost$core$String* $tmp1841 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1840, &$s1842);
org$frostlang$frostc$ASTNode* $tmp1843 = *(&local100);
frost$core$String* $tmp1844 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1841, ((frost$core$Object*) $tmp1843));
frost$core$String* $tmp1845 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1844, &$s1846);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
org$frostlang$frostc$ASTNode* $tmp1847 = *(&local100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
*(&local100) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1848 = *(&local99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1848));
*(&local99) = ((frost$core$String*) NULL);
return $tmp1845;
block169:;
frost$core$Int64 $tmp1849 = (frost$core$Int64) {35};
frost$core$Bit $tmp1850 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1849);
bool $tmp1851 = $tmp1850.value;
if ($tmp1851) goto block170; else goto block171;
block170:;
org$frostlang$frostc$Position* $tmp1852 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1853 = *$tmp1852;
org$frostlang$frostc$ASTNode** $tmp1854 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1855 = *$tmp1854;
*(&local101) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1855));
org$frostlang$frostc$ASTNode* $tmp1856 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
*(&local101) = $tmp1855;
frost$core$Bit* $tmp1857 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp1858 = *$tmp1857;
*(&local102) = $tmp1858;
org$frostlang$frostc$ASTNode** $tmp1859 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
org$frostlang$frostc$ASTNode* $tmp1860 = *$tmp1859;
*(&local103) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
org$frostlang$frostc$ASTNode* $tmp1861 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
*(&local103) = $tmp1860;
org$frostlang$frostc$ASTNode** $tmp1862 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp1863 = *$tmp1862;
*(&local104) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
org$frostlang$frostc$ASTNode* $tmp1864 = *(&local104);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
*(&local104) = $tmp1863;
// line 533
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1865 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1865);
*(&local105) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
frost$core$MutableString* $tmp1866 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
*(&local105) = $tmp1865;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
// line 534
org$frostlang$frostc$ASTNode* $tmp1867 = *(&local101);
frost$core$Bit $tmp1868 = frost$core$Bit$init$builtin_bit($tmp1867 != NULL);
bool $tmp1869 = $tmp1868.value;
if ($tmp1869) goto block172; else goto block173;
block172:;
// line 535
frost$core$MutableString* $tmp1870 = *(&local105);
org$frostlang$frostc$ASTNode* $tmp1871 = *(&local101);
frost$core$MutableString$append$frost$core$Object($tmp1870, ((frost$core$Object*) $tmp1871));
goto block173;
block173:;
// line 537
frost$core$Bit $tmp1872 = *(&local102);
bool $tmp1873 = $tmp1872.value;
if ($tmp1873) goto block174; else goto block176;
block174:;
// line 538
frost$core$MutableString* $tmp1874 = *(&local105);
frost$core$MutableString$append$frost$core$String($tmp1874, &$s1875);
goto block175;
block176:;
// line 1
// line 541
frost$core$MutableString* $tmp1876 = *(&local105);
frost$core$MutableString$append$frost$core$String($tmp1876, &$s1877);
goto block175;
block175:;
// line 543
org$frostlang$frostc$ASTNode* $tmp1878 = *(&local103);
frost$core$Bit $tmp1879 = frost$core$Bit$init$builtin_bit($tmp1878 != NULL);
bool $tmp1880 = $tmp1879.value;
if ($tmp1880) goto block177; else goto block178;
block177:;
// line 544
frost$core$MutableString* $tmp1881 = *(&local105);
org$frostlang$frostc$ASTNode* $tmp1882 = *(&local103);
frost$core$MutableString$append$frost$core$Object($tmp1881, ((frost$core$Object*) $tmp1882));
goto block178;
block178:;
// line 546
org$frostlang$frostc$ASTNode* $tmp1883 = *(&local104);
frost$core$Bit $tmp1884 = frost$core$Bit$init$builtin_bit($tmp1883 != NULL);
bool $tmp1885 = $tmp1884.value;
if ($tmp1885) goto block179; else goto block180;
block179:;
// line 547
frost$core$MutableString* $tmp1886 = *(&local105);
org$frostlang$frostc$ASTNode* $tmp1887 = *(&local104);
frost$core$String* $tmp1888 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1889, ((frost$core$Object*) $tmp1887));
frost$core$MutableString$append$frost$core$String($tmp1886, $tmp1888);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1888));
goto block180;
block180:;
// line 549
frost$core$MutableString* $tmp1890 = *(&local105);
frost$core$String* $tmp1891 = frost$core$MutableString$finish$R$frost$core$String($tmp1890);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
frost$core$MutableString* $tmp1892 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
*(&local105) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1893 = *(&local104);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
*(&local104) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1894 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1894));
*(&local103) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1895 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
*(&local101) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1891;
block171:;
frost$core$Int64 $tmp1896 = (frost$core$Int64) {36};
frost$core$Bit $tmp1897 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1896);
bool $tmp1898 = $tmp1897.value;
if ($tmp1898) goto block181; else goto block182;
block181:;
org$frostlang$frostc$Position* $tmp1899 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1900 = *$tmp1899;
frost$core$Real64* $tmp1901 = (frost$core$Real64*) (param0->$data + 16);
frost$core$Real64 $tmp1902 = *$tmp1901;
*(&local106) = $tmp1902;
// line 552
frost$core$Real64 $tmp1903 = *(&local106);
frost$core$Real64$wrapper* $tmp1904;
$tmp1904 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp1904->value = $tmp1903;
$fn1906 $tmp1905 = ($fn1906) ((frost$core$Object*) $tmp1904)->$class->vtable[0];
frost$core$String* $tmp1907 = $tmp1905(((frost$core$Object*) $tmp1904));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
return $tmp1907;
block182:;
frost$core$Int64 $tmp1908 = (frost$core$Int64) {37};
frost$core$Bit $tmp1909 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1908);
bool $tmp1910 = $tmp1909.value;
if ($tmp1910) goto block183; else goto block184;
block183:;
org$frostlang$frostc$Position* $tmp1911 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1912 = *$tmp1911;
frost$core$String** $tmp1913 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1914 = *$tmp1913;
*(&local107) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
frost$core$String* $tmp1915 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
*(&local107) = $tmp1914;
// line 555
frost$core$String* $tmp1916 = *(&local107);
frost$core$String* $tmp1917 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1918, $tmp1916);
frost$core$String* $tmp1919 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1917, &$s1920);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
frost$core$String* $tmp1921 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
*(&local107) = ((frost$core$String*) NULL);
return $tmp1919;
block184:;
frost$core$Int64 $tmp1922 = (frost$core$Int64) {38};
frost$core$Bit $tmp1923 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1922);
bool $tmp1924 = $tmp1923.value;
if ($tmp1924) goto block185; else goto block186;
block185:;
org$frostlang$frostc$Position* $tmp1925 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1926 = *$tmp1925;
org$frostlang$frostc$ASTNode** $tmp1927 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1928 = *$tmp1927;
*(&local108) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
org$frostlang$frostc$ASTNode* $tmp1929 = *(&local108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
*(&local108) = $tmp1928;
// line 558
org$frostlang$frostc$ASTNode* $tmp1930 = *(&local108);
frost$core$Bit $tmp1931 = frost$core$Bit$init$builtin_bit($tmp1930 != NULL);
bool $tmp1932 = $tmp1931.value;
if ($tmp1932) goto block187; else goto block188;
block187:;
// line 559
org$frostlang$frostc$ASTNode* $tmp1933 = *(&local108);
frost$core$String* $tmp1934 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1935, ((frost$core$Object*) $tmp1933));
frost$core$String* $tmp1936 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1934, &$s1937);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1936));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1936));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1934));
org$frostlang$frostc$ASTNode* $tmp1938 = *(&local108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
*(&local108) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1936;
block188:;
// line 561
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1939));
org$frostlang$frostc$ASTNode* $tmp1940 = *(&local108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1940));
*(&local108) = ((org$frostlang$frostc$ASTNode*) NULL);
return &$s1941;
block186:;
frost$core$Int64 $tmp1942 = (frost$core$Int64) {39};
frost$core$Bit $tmp1943 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1942);
bool $tmp1944 = $tmp1943.value;
if ($tmp1944) goto block189; else goto block190;
block189:;
// line 564
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1945));
return &$s1946;
block190:;
frost$core$Int64 $tmp1947 = (frost$core$Int64) {40};
frost$core$Bit $tmp1948 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1947);
bool $tmp1949 = $tmp1948.value;
if ($tmp1949) goto block191; else goto block192;
block191:;
org$frostlang$frostc$Position* $tmp1950 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1951 = *$tmp1950;
frost$core$String** $tmp1952 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1953 = *$tmp1952;
*(&local109) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1953));
frost$core$String* $tmp1954 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1954));
*(&local109) = $tmp1953;
// line 567
frost$core$String* $tmp1955 = *(&local109);
frost$core$String* $tmp1956 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp1955, &$s1957);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
frost$core$String* $tmp1958 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1958));
*(&local109) = ((frost$core$String*) NULL);
return $tmp1956;
block192:;
frost$core$Int64 $tmp1959 = (frost$core$Int64) {41};
frost$core$Bit $tmp1960 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1959);
bool $tmp1961 = $tmp1960.value;
if ($tmp1961) goto block193; else goto block194;
block193:;
// line 570
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1962));
return &$s1963;
block194:;
frost$core$Int64 $tmp1964 = (frost$core$Int64) {43};
frost$core$Bit $tmp1965 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1964);
bool $tmp1966 = $tmp1965.value;
if ($tmp1966) goto block195; else goto block196;
block195:;
org$frostlang$frostc$Position* $tmp1967 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1968 = *$tmp1967;
org$frostlang$frostc$FixedArray** $tmp1969 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp1970 = *$tmp1969;
*(&local110) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
org$frostlang$frostc$FixedArray* $tmp1971 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1971));
*(&local110) = $tmp1970;
// line 573
org$frostlang$frostc$FixedArray* $tmp1972 = *(&local110);
ITable* $tmp1973 = ((frost$collections$CollectionView*) $tmp1972)->$class->itable;
while ($tmp1973->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1973 = $tmp1973->next;
}
$fn1975 $tmp1974 = $tmp1973->methods[2];
frost$core$String* $tmp1976 = $tmp1974(((frost$collections$CollectionView*) $tmp1972), &$s1977);
frost$core$String* $tmp1978 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1979, $tmp1976);
frost$core$String* $tmp1980 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1978, &$s1981);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
org$frostlang$frostc$FixedArray* $tmp1982 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
*(&local110) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1980;
block196:;
frost$core$Int64 $tmp1983 = (frost$core$Int64) {44};
frost$core$Bit $tmp1984 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp1983);
bool $tmp1985 = $tmp1984.value;
if ($tmp1985) goto block197; else goto block198;
block197:;
org$frostlang$frostc$Position* $tmp1986 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1987 = *$tmp1986;
org$frostlang$frostc$FixedArray** $tmp1988 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp1989 = *$tmp1988;
*(&local111) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1989));
org$frostlang$frostc$FixedArray* $tmp1990 = *(&local111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
*(&local111) = $tmp1989;
// line 576
org$frostlang$frostc$FixedArray* $tmp1991 = *(&local111);
ITable* $tmp1992 = ((frost$collections$CollectionView*) $tmp1991)->$class->itable;
while ($tmp1992->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1992 = $tmp1992->next;
}
$fn1994 $tmp1993 = $tmp1992->methods[2];
frost$core$String* $tmp1995 = $tmp1993(((frost$collections$CollectionView*) $tmp1991), &$s1996);
frost$core$String* $tmp1997 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1998, $tmp1995);
frost$core$String* $tmp1999 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1997, &$s2000);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1997));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
org$frostlang$frostc$FixedArray* $tmp2001 = *(&local111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
*(&local111) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1999;
block198:;
frost$core$Int64 $tmp2002 = (frost$core$Int64) {45};
frost$core$Bit $tmp2003 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2002);
bool $tmp2004 = $tmp2003.value;
if ($tmp2004) goto block199; else goto block200;
block199:;
org$frostlang$frostc$Position* $tmp2005 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2006 = *$tmp2005;
org$frostlang$frostc$FixedArray** $tmp2007 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2008 = *$tmp2007;
*(&local112) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
org$frostlang$frostc$FixedArray* $tmp2009 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
*(&local112) = $tmp2008;
// line 579
org$frostlang$frostc$FixedArray* $tmp2010 = *(&local112);
ITable* $tmp2011 = ((frost$collections$CollectionView*) $tmp2010)->$class->itable;
while ($tmp2011->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2011 = $tmp2011->next;
}
$fn2013 $tmp2012 = $tmp2011->methods[2];
frost$core$String* $tmp2014 = $tmp2012(((frost$collections$CollectionView*) $tmp2010), &$s2015);
frost$core$String* $tmp2016 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2017, $tmp2014);
frost$core$String* $tmp2018 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2016, &$s2019);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2014));
org$frostlang$frostc$FixedArray* $tmp2020 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2020));
*(&local112) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2018;
block200:;
frost$core$Int64 $tmp2021 = (frost$core$Int64) {42};
frost$core$Bit $tmp2022 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2021);
bool $tmp2023 = $tmp2022.value;
if ($tmp2023) goto block201; else goto block202;
block201:;
org$frostlang$frostc$Position* $tmp2024 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2025 = *$tmp2024;
org$frostlang$frostc$FixedArray** $tmp2026 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2027 = *$tmp2026;
*(&local113) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2027));
org$frostlang$frostc$FixedArray* $tmp2028 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
*(&local113) = $tmp2027;
org$frostlang$frostc$ASTNode** $tmp2029 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2030 = *$tmp2029;
*(&local114) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
org$frostlang$frostc$ASTNode* $tmp2031 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
*(&local114) = $tmp2030;
org$frostlang$frostc$FixedArray** $tmp2032 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2033 = *$tmp2032;
*(&local115) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2033));
org$frostlang$frostc$FixedArray* $tmp2034 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
*(&local115) = $tmp2033;
// line 582
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2035 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2035, &$s2036);
*(&local116) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
frost$core$MutableString* $tmp2037 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2037));
*(&local116) = $tmp2035;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
// line 583
org$frostlang$frostc$FixedArray* $tmp2038 = *(&local113);
frost$core$MutableString* $tmp2039 = *(&local116);
*(&local117) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2039));
frost$core$MutableString* $tmp2040 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2040));
*(&local117) = $tmp2039;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$ASTNode$_Closure3));
org$frostlang$frostc$ASTNode$_Closure3* $tmp2041 = (org$frostlang$frostc$ASTNode$_Closure3*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ASTNode$_Closure3$class);
frost$core$MutableString* $tmp2042 = *(&local117);
org$frostlang$frostc$ASTNode$_Closure3$init$frost$core$MutableString($tmp2041, $tmp2042);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2044 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp2044, ((frost$core$Int8*) org$frostlang$frostc$ASTNode$_Closure3$$anonymous2$frost$core$Object), ((frost$core$Object*) $tmp2041));
ITable* $tmp2045 = ((frost$collections$CollectionView*) $tmp2038)->$class->itable;
while ($tmp2045->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2045 = $tmp2045->next;
}
$fn2047 $tmp2046 = $tmp2045->methods[7];
$tmp2046(((frost$collections$CollectionView*) $tmp2038), $tmp2044);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2041));
// line 584
org$frostlang$frostc$ASTNode* $tmp2048 = *(&local114);
frost$core$Bit $tmp2049 = frost$core$Bit$init$builtin_bit($tmp2048 != NULL);
bool $tmp2050 = $tmp2049.value;
if ($tmp2050) goto block203; else goto block205;
block203:;
// line 585
frost$core$MutableString* $tmp2051 = *(&local116);
org$frostlang$frostc$ASTNode* $tmp2052 = *(&local114);
frost$core$String* $tmp2053 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2054, ((frost$core$Object*) $tmp2052));
frost$core$String* $tmp2055 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2053, &$s2056);
frost$core$MutableString$append$frost$core$String($tmp2051, $tmp2055);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2053));
goto block204;
block205:;
// line 1
// line 588
frost$core$MutableString* $tmp2057 = *(&local116);
frost$core$MutableString$append$frost$core$String($tmp2057, &$s2058);
goto block204;
block204:;
// line 590
org$frostlang$frostc$FixedArray* $tmp2059 = *(&local115);
frost$core$MutableString* $tmp2060 = *(&local116);
*(&local118) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
frost$core$MutableString* $tmp2061 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
*(&local118) = $tmp2060;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$ASTNode$_Closure6));
org$frostlang$frostc$ASTNode$_Closure6* $tmp2062 = (org$frostlang$frostc$ASTNode$_Closure6*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ASTNode$_Closure6$class);
frost$core$MutableString* $tmp2063 = *(&local118);
org$frostlang$frostc$ASTNode$_Closure6$init$frost$core$MutableString($tmp2062, $tmp2063);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp2065 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp2065, ((frost$core$Int8*) org$frostlang$frostc$ASTNode$_Closure6$$anonymous5$frost$core$Object), ((frost$core$Object*) $tmp2062));
ITable* $tmp2066 = ((frost$collections$CollectionView*) $tmp2059)->$class->itable;
while ($tmp2066->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2066 = $tmp2066->next;
}
$fn2068 $tmp2067 = $tmp2066->methods[7];
$tmp2067(((frost$collections$CollectionView*) $tmp2059), $tmp2065);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
// line 591
frost$core$MutableString* $tmp2069 = *(&local116);
frost$core$MutableString$append$frost$core$String($tmp2069, &$s2070);
// line 592
frost$core$MutableString* $tmp2071 = *(&local116);
frost$core$String* $tmp2072 = frost$core$MutableString$finish$R$frost$core$String($tmp2071);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
frost$core$MutableString* $tmp2073 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2073));
*(&local118) = ((frost$core$MutableString*) NULL);
frost$core$MutableString* $tmp2074 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2074));
*(&local117) = ((frost$core$MutableString*) NULL);
frost$core$MutableString* $tmp2075 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
*(&local116) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2076 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2076));
*(&local115) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2077 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2077));
*(&local114) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2078 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
*(&local113) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2072;
block202:;
frost$core$Int64 $tmp2079 = (frost$core$Int64) {46};
frost$core$Bit $tmp2080 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2079);
bool $tmp2081 = $tmp2080.value;
if ($tmp2081) goto block206; else goto block207;
block206:;
org$frostlang$frostc$Position* $tmp2082 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2083 = *$tmp2082;
frost$core$String** $tmp2084 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2085 = *$tmp2084;
*(&local119) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2085));
frost$core$String* $tmp2086 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
*(&local119) = $tmp2085;
// line 595
frost$core$String* $tmp2087 = *(&local119);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2087));
frost$core$String* $tmp2088 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
*(&local119) = ((frost$core$String*) NULL);
return $tmp2087;
block207:;
frost$core$Int64 $tmp2089 = (frost$core$Int64) {48};
frost$core$Bit $tmp2090 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2089);
bool $tmp2091 = $tmp2090.value;
if ($tmp2091) goto block208; else goto block209;
block208:;
org$frostlang$frostc$Position* $tmp2092 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2093 = *$tmp2092;
frost$core$String** $tmp2094 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2095 = *$tmp2094;
*(&local120) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2095));
frost$core$String* $tmp2096 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
*(&local120) = $tmp2095;
org$frostlang$frostc$ASTNode** $tmp2097 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2098 = *$tmp2097;
*(&local121) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
org$frostlang$frostc$ASTNode* $tmp2099 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
*(&local121) = $tmp2098;
// line 598
org$frostlang$frostc$ASTNode* $tmp2100 = *(&local121);
frost$core$Bit $tmp2101 = frost$core$Bit$init$builtin_bit($tmp2100 != NULL);
bool $tmp2102 = $tmp2101.value;
if ($tmp2102) goto block210; else goto block211;
block210:;
// line 599
frost$core$String* $tmp2103 = *(&local120);
frost$core$String* $tmp2104 = frost$core$String$get_asString$R$frost$core$String($tmp2103);
frost$core$String* $tmp2105 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2104, &$s2106);
org$frostlang$frostc$ASTNode* $tmp2107 = *(&local121);
frost$core$String* $tmp2108 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2105, ((frost$core$Object*) $tmp2107));
frost$core$String* $tmp2109 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2108, &$s2110);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
org$frostlang$frostc$ASTNode* $tmp2111 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
*(&local121) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2112 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
*(&local120) = ((frost$core$String*) NULL);
return $tmp2109;
block211:;
// line 601
frost$core$String* $tmp2113 = *(&local120);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
org$frostlang$frostc$ASTNode* $tmp2114 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
*(&local121) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2115 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
*(&local120) = ((frost$core$String*) NULL);
return $tmp2113;
block209:;
frost$core$Int64 $tmp2116 = (frost$core$Int64) {47};
frost$core$Bit $tmp2117 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2116);
bool $tmp2118 = $tmp2117.value;
if ($tmp2118) goto block212; else goto block213;
block212:;
org$frostlang$frostc$Position* $tmp2119 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2120 = *$tmp2119;
org$frostlang$frostc$FixedArray** $tmp2121 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2122 = *$tmp2121;
*(&local122) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
org$frostlang$frostc$FixedArray* $tmp2123 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
*(&local122) = $tmp2122;
org$frostlang$frostc$ASTNode** $tmp2124 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2125 = *$tmp2124;
*(&local123) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
org$frostlang$frostc$ASTNode* $tmp2126 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
*(&local123) = $tmp2125;
// line 604
org$frostlang$frostc$FixedArray* $tmp2127 = *(&local122);
ITable* $tmp2128 = ((frost$collections$CollectionView*) $tmp2127)->$class->itable;
while ($tmp2128->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2128 = $tmp2128->next;
}
$fn2130 $tmp2129 = $tmp2128->methods[2];
frost$core$String* $tmp2131 = $tmp2129(((frost$collections$CollectionView*) $tmp2127), &$s2132);
frost$core$String* $tmp2133 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2134, $tmp2131);
frost$core$String* $tmp2135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2133, &$s2136);
org$frostlang$frostc$ASTNode* $tmp2137 = *(&local123);
frost$core$String* $tmp2138 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2135, ((frost$core$Object*) $tmp2137));
frost$core$String* $tmp2139 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2138, &$s2140);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
org$frostlang$frostc$ASTNode* $tmp2141 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2141));
*(&local123) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2142 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2142));
*(&local122) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2139;
block213:;
frost$core$Int64 $tmp2143 = (frost$core$Int64) {49};
frost$core$Bit $tmp2144 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2143);
bool $tmp2145 = $tmp2144.value;
if ($tmp2145) goto block214; else goto block215;
block214:;
org$frostlang$frostc$Position* $tmp2146 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2147 = *$tmp2146;
org$frostlang$frostc$expression$Unary$Operator* $tmp2148 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 16);
org$frostlang$frostc$expression$Unary$Operator $tmp2149 = *$tmp2148;
*(&local124) = $tmp2149;
org$frostlang$frostc$ASTNode** $tmp2150 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2151 = *$tmp2150;
*(&local125) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2151));
org$frostlang$frostc$ASTNode* $tmp2152 = *(&local125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
*(&local125) = $tmp2151;
// line 607
org$frostlang$frostc$expression$Unary$Operator $tmp2153 = *(&local124);
frost$core$String* $tmp2154 = org$frostlang$frostc$expression$Unary$Operator$get_asString$R$frost$core$String($tmp2153);
frost$core$String* $tmp2155 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2154, &$s2156);
org$frostlang$frostc$ASTNode* $tmp2157 = *(&local125);
frost$core$String* $tmp2158 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2155, ((frost$core$Object*) $tmp2157));
frost$core$String* $tmp2159 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2158, &$s2160);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
org$frostlang$frostc$ASTNode* $tmp2161 = *(&local125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2161));
*(&local125) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2159;
block215:;
frost$core$Int64 $tmp2162 = (frost$core$Int64) {50};
frost$core$Bit $tmp2163 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2162);
bool $tmp2164 = $tmp2163.value;
if ($tmp2164) goto block216; else goto block217;
block216:;
org$frostlang$frostc$Position* $tmp2165 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2166 = *$tmp2165;
org$frostlang$frostc$ASTNode** $tmp2167 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2168 = *$tmp2167;
*(&local126) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
org$frostlang$frostc$ASTNode* $tmp2169 = *(&local126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
*(&local126) = $tmp2168;
// line 610
org$frostlang$frostc$ASTNode* $tmp2170 = *(&local126);
frost$core$Bit $tmp2171 = frost$core$Bit$init$builtin_bit($tmp2170 != NULL);
bool $tmp2172 = $tmp2171.value;
if ($tmp2172) goto block218; else goto block219;
block218:;
// line 611
org$frostlang$frostc$ASTNode* $tmp2173 = *(&local126);
frost$core$String* $tmp2174 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2175, ((frost$core$Object*) $tmp2173));
frost$core$String* $tmp2176 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2174, &$s2177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2174));
org$frostlang$frostc$ASTNode* $tmp2178 = *(&local126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2178));
*(&local126) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2176;
block219:;
// line 613
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2179));
org$frostlang$frostc$ASTNode* $tmp2180 = *(&local126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2180));
*(&local126) = ((org$frostlang$frostc$ASTNode*) NULL);
return &$s2181;
block217:;
frost$core$Int64 $tmp2182 = (frost$core$Int64) {51};
frost$core$Bit $tmp2183 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2182);
bool $tmp2184 = $tmp2183.value;
if ($tmp2184) goto block220; else goto block221;
block220:;
org$frostlang$frostc$Position* $tmp2185 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2186 = *$tmp2185;
org$frostlang$frostc$FixedArray** $tmp2187 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2188 = *$tmp2187;
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
org$frostlang$frostc$FixedArray* $tmp2189 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
*(&local127) = $tmp2188;
org$frostlang$frostc$ASTNode** $tmp2190 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2191 = *$tmp2190;
*(&local128) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
org$frostlang$frostc$ASTNode* $tmp2192 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2192));
*(&local128) = $tmp2191;
// line 616
org$frostlang$frostc$FixedArray* $tmp2193 = *(&local127);
ITable* $tmp2194 = ((frost$collections$CollectionView*) $tmp2193)->$class->itable;
while ($tmp2194->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2194 = $tmp2194->next;
}
$fn2196 $tmp2195 = $tmp2194->methods[2];
frost$core$String* $tmp2197 = $tmp2195(((frost$collections$CollectionView*) $tmp2193), &$s2198);
frost$core$String* $tmp2199 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2200, $tmp2197);
frost$core$String* $tmp2201 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2199, &$s2202);
org$frostlang$frostc$ASTNode* $tmp2203 = *(&local128);
frost$core$String* $tmp2204 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2201, ((frost$core$Object*) $tmp2203));
frost$core$String* $tmp2205 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2204, &$s2206);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
org$frostlang$frostc$ASTNode* $tmp2207 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2207));
*(&local128) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2208 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2205;
block221:;
frost$core$Int64 $tmp2209 = (frost$core$Int64) {52};
frost$core$Bit $tmp2210 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2209);
bool $tmp2211 = $tmp2210.value;
if ($tmp2211) goto block222; else goto block223;
block222:;
org$frostlang$frostc$Position* $tmp2212 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2213 = *$tmp2212;
frost$core$String** $tmp2214 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2215 = *$tmp2214;
*(&local129) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2215));
frost$core$String* $tmp2216 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
*(&local129) = $tmp2215;
// line 619
frost$core$String* $tmp2217 = *(&local129);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
frost$core$String* $tmp2218 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
*(&local129) = ((frost$core$String*) NULL);
return $tmp2217;
block223:;
frost$core$Int64 $tmp2219 = (frost$core$Int64) {53};
frost$core$Bit $tmp2220 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2219);
bool $tmp2221 = $tmp2220.value;
if ($tmp2221) goto block224; else goto block225;
block224:;
org$frostlang$frostc$Position* $tmp2222 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2223 = *$tmp2222;
org$frostlang$frostc$Variable$Kind* $tmp2224 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp2225 = *$tmp2224;
*(&local130) = $tmp2225;
org$frostlang$frostc$FixedArray** $tmp2226 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2227 = *$tmp2226;
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2227));
org$frostlang$frostc$FixedArray* $tmp2228 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
*(&local131) = $tmp2227;
// line 622
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2229 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2229);
*(&local132) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
frost$core$MutableString* $tmp2230 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
*(&local132) = $tmp2229;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
// line 623
org$frostlang$frostc$Variable$Kind $tmp2231 = *(&local130);
frost$core$Int64 $tmp2232 = $tmp2231.$rawValue;
frost$core$Int64 $tmp2233 = (frost$core$Int64) {0};
frost$core$Bit $tmp2234 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2232, $tmp2233);
bool $tmp2235 = $tmp2234.value;
if ($tmp2235) goto block227; else goto block228;
block227:;
// line 624
frost$core$MutableString* $tmp2236 = *(&local132);
frost$core$MutableString$append$frost$core$String($tmp2236, &$s2237);
goto block226;
block228:;
frost$core$Int64 $tmp2238 = (frost$core$Int64) {1};
frost$core$Bit $tmp2239 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2232, $tmp2238);
bool $tmp2240 = $tmp2239.value;
if ($tmp2240) goto block229; else goto block230;
block229:;
// line 625
frost$core$MutableString* $tmp2241 = *(&local132);
frost$core$MutableString$append$frost$core$String($tmp2241, &$s2242);
goto block226;
block230:;
frost$core$Int64 $tmp2243 = (frost$core$Int64) {2};
frost$core$Bit $tmp2244 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2232, $tmp2243);
bool $tmp2245 = $tmp2244.value;
if ($tmp2245) goto block231; else goto block232;
block231:;
// line 626
frost$core$MutableString* $tmp2246 = *(&local132);
frost$core$MutableString$append$frost$core$String($tmp2246, &$s2247);
goto block226;
block232:;
frost$core$Int64 $tmp2248 = (frost$core$Int64) {3};
frost$core$Bit $tmp2249 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2232, $tmp2248);
bool $tmp2250 = $tmp2249.value;
if ($tmp2250) goto block233; else goto block226;
block233:;
// line 627
frost$core$MutableString* $tmp2251 = *(&local132);
frost$core$MutableString$append$frost$core$String($tmp2251, &$s2252);
goto block226;
block226:;
// line 629
frost$core$MutableString* $tmp2253 = *(&local132);
org$frostlang$frostc$FixedArray* $tmp2254 = *(&local131);
ITable* $tmp2255 = ((frost$collections$CollectionView*) $tmp2254)->$class->itable;
while ($tmp2255->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2255 = $tmp2255->next;
}
$fn2257 $tmp2256 = $tmp2255->methods[2];
frost$core$String* $tmp2258 = $tmp2256(((frost$collections$CollectionView*) $tmp2254), &$s2259);
frost$core$MutableString$append$frost$core$String($tmp2253, $tmp2258);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2258));
// line 630
frost$core$MutableString* $tmp2260 = *(&local132);
frost$core$String* $tmp2261 = frost$core$MutableString$finish$R$frost$core$String($tmp2260);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2261));
frost$core$MutableString* $tmp2262 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2262));
*(&local132) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2263 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2263));
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2261;
block225:;
frost$core$Int64 $tmp2264 = (frost$core$Int64) {54};
frost$core$Bit $tmp2265 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2264);
bool $tmp2266 = $tmp2265.value;
if ($tmp2266) goto block234; else goto block235;
block234:;
org$frostlang$frostc$Position* $tmp2267 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2268 = *$tmp2267;
org$frostlang$frostc$FixedArray** $tmp2269 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2270 = *$tmp2269;
*(&local133) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
org$frostlang$frostc$FixedArray* $tmp2271 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
*(&local133) = $tmp2270;
org$frostlang$frostc$FixedArray** $tmp2272 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2273 = *$tmp2272;
*(&local134) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
org$frostlang$frostc$FixedArray* $tmp2274 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2274));
*(&local134) = $tmp2273;
// line 633
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2275 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2275, &$s2276);
*(&local135) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
frost$core$MutableString* $tmp2277 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
*(&local135) = $tmp2275;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
// line 634
*(&local136) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2278));
frost$core$String* $tmp2279 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2279));
*(&local136) = &$s2280;
// line 635
org$frostlang$frostc$FixedArray* $tmp2281 = *(&local133);
ITable* $tmp2282 = ((frost$collections$Iterable*) $tmp2281)->$class->itable;
while ($tmp2282->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2282 = $tmp2282->next;
}
$fn2284 $tmp2283 = $tmp2282->methods[0];
frost$collections$Iterator* $tmp2285 = $tmp2283(((frost$collections$Iterable*) $tmp2281));
goto block236;
block236:;
ITable* $tmp2286 = $tmp2285->$class->itable;
while ($tmp2286->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2286 = $tmp2286->next;
}
$fn2288 $tmp2287 = $tmp2286->methods[0];
frost$core$Bit $tmp2289 = $tmp2287($tmp2285);
bool $tmp2290 = $tmp2289.value;
if ($tmp2290) goto block238; else goto block237;
block237:;
*(&local137) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2291 = $tmp2285->$class->itable;
while ($tmp2291->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2291 = $tmp2291->next;
}
$fn2293 $tmp2292 = $tmp2291->methods[1];
frost$core$Object* $tmp2294 = $tmp2292($tmp2285);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2294)));
org$frostlang$frostc$ASTNode* $tmp2295 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
*(&local137) = ((org$frostlang$frostc$ASTNode*) $tmp2294);
// line 636
frost$core$MutableString* $tmp2296 = *(&local135);
frost$core$String* $tmp2297 = *(&local136);
frost$core$String* $tmp2298 = frost$core$String$get_asString$R$frost$core$String($tmp2297);
frost$core$String* $tmp2299 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2298, &$s2300);
org$frostlang$frostc$ASTNode* $tmp2301 = *(&local137);
frost$core$String* $tmp2302 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2299, ((frost$core$Object*) $tmp2301));
frost$core$String* $tmp2303 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2302, &$s2304);
frost$core$MutableString$append$frost$core$String($tmp2296, $tmp2303);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2298));
frost$core$Frost$unref$frost$core$Object$Q($tmp2294);
org$frostlang$frostc$ASTNode* $tmp2305 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
*(&local137) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block236;
block238:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2285));
// line 638
frost$core$MutableString* $tmp2306 = *(&local135);
frost$core$MutableString$append$frost$core$String($tmp2306, &$s2307);
// line 639
org$frostlang$frostc$FixedArray* $tmp2308 = *(&local134);
ITable* $tmp2309 = ((frost$collections$Iterable*) $tmp2308)->$class->itable;
while ($tmp2309->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2309 = $tmp2309->next;
}
$fn2311 $tmp2310 = $tmp2309->methods[0];
frost$collections$Iterator* $tmp2312 = $tmp2310(((frost$collections$Iterable*) $tmp2308));
goto block239;
block239:;
ITable* $tmp2313 = $tmp2312->$class->itable;
while ($tmp2313->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2313 = $tmp2313->next;
}
$fn2315 $tmp2314 = $tmp2313->methods[0];
frost$core$Bit $tmp2316 = $tmp2314($tmp2312);
bool $tmp2317 = $tmp2316.value;
if ($tmp2317) goto block241; else goto block240;
block240:;
*(&local138) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2318 = $tmp2312->$class->itable;
while ($tmp2318->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2318 = $tmp2318->next;
}
$fn2320 $tmp2319 = $tmp2318->methods[1];
frost$core$Object* $tmp2321 = $tmp2319($tmp2312);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2321)));
org$frostlang$frostc$ASTNode* $tmp2322 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
*(&local138) = ((org$frostlang$frostc$ASTNode*) $tmp2321);
// line 640
frost$core$MutableString* $tmp2323 = *(&local135);
org$frostlang$frostc$ASTNode* $tmp2324 = *(&local138);
frost$core$String* $tmp2325 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2326, ((frost$core$Object*) $tmp2324));
frost$core$MutableString$append$frost$core$String($tmp2323, $tmp2325);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2325));
frost$core$Frost$unref$frost$core$Object$Q($tmp2321);
org$frostlang$frostc$ASTNode* $tmp2327 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2327));
*(&local138) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block239;
block241:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2312));
// line 642
frost$core$MutableString* $tmp2328 = *(&local135);
frost$core$String* $tmp2329 = frost$core$MutableString$finish$R$frost$core$String($tmp2328);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
frost$core$String* $tmp2330 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
*(&local136) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2331 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2331));
*(&local135) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2332 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
*(&local134) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2333 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2333));
*(&local133) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2329;
block235:;
frost$core$Int64 $tmp2334 = (frost$core$Int64) {55};
frost$core$Bit $tmp2335 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp559, $tmp2334);
bool $tmp2336 = $tmp2335.value;
if ($tmp2336) goto block242; else goto block243;
block242:;
org$frostlang$frostc$Position* $tmp2337 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2338 = *$tmp2337;
frost$core$String** $tmp2339 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2340 = *$tmp2339;
*(&local139) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
frost$core$String* $tmp2341 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
*(&local139) = $tmp2340;
org$frostlang$frostc$ASTNode** $tmp2342 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2343 = *$tmp2342;
*(&local140) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2343));
org$frostlang$frostc$ASTNode* $tmp2344 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2344));
*(&local140) = $tmp2343;
org$frostlang$frostc$FixedArray** $tmp2345 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2346 = *$tmp2345;
*(&local141) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2346));
org$frostlang$frostc$FixedArray* $tmp2347 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2347));
*(&local141) = $tmp2346;
// line 645
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2348 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2348);
*(&local142) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2348));
frost$core$MutableString* $tmp2349 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2349));
*(&local142) = $tmp2348;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2348));
// line 646
frost$core$String* $tmp2350 = *(&local139);
frost$core$Bit $tmp2351 = frost$core$Bit$init$builtin_bit($tmp2350 != NULL);
bool $tmp2352 = $tmp2351.value;
if ($tmp2352) goto block244; else goto block245;
block244:;
// line 647
frost$core$MutableString* $tmp2353 = *(&local142);
frost$core$String* $tmp2354 = *(&local139);
frost$core$String* $tmp2355 = frost$core$String$get_asString$R$frost$core$String($tmp2354);
frost$core$String* $tmp2356 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2355, &$s2357);
frost$core$MutableString$append$frost$core$String($tmp2353, $tmp2356);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2355));
goto block245;
block245:;
// line 649
frost$core$MutableString* $tmp2358 = *(&local142);
org$frostlang$frostc$ASTNode* $tmp2359 = *(&local140);
frost$core$String* $tmp2360 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2361, ((frost$core$Object*) $tmp2359));
frost$core$String* $tmp2362 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2360, &$s2363);
frost$core$MutableString$append$frost$core$String($tmp2358, $tmp2362);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2362));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2360));
// line 650
org$frostlang$frostc$FixedArray* $tmp2364 = *(&local141);
ITable* $tmp2365 = ((frost$collections$Iterable*) $tmp2364)->$class->itable;
while ($tmp2365->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2365 = $tmp2365->next;
}
$fn2367 $tmp2366 = $tmp2365->methods[0];
frost$collections$Iterator* $tmp2368 = $tmp2366(((frost$collections$Iterable*) $tmp2364));
goto block246;
block246:;
ITable* $tmp2369 = $tmp2368->$class->itable;
while ($tmp2369->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2369 = $tmp2369->next;
}
$fn2371 $tmp2370 = $tmp2369->methods[0];
frost$core$Bit $tmp2372 = $tmp2370($tmp2368);
bool $tmp2373 = $tmp2372.value;
if ($tmp2373) goto block248; else goto block247;
block247:;
*(&local143) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2374 = $tmp2368->$class->itable;
while ($tmp2374->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2374 = $tmp2374->next;
}
$fn2376 $tmp2375 = $tmp2374->methods[1];
frost$core$Object* $tmp2377 = $tmp2375($tmp2368);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2377)));
org$frostlang$frostc$ASTNode* $tmp2378 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2378));
*(&local143) = ((org$frostlang$frostc$ASTNode*) $tmp2377);
// line 651
frost$core$MutableString* $tmp2379 = *(&local142);
org$frostlang$frostc$ASTNode* $tmp2380 = *(&local143);
frost$core$String* $tmp2381 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp2380), &$s2382);
frost$core$MutableString$append$frost$core$String($tmp2379, $tmp2381);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2381));
frost$core$Frost$unref$frost$core$Object$Q($tmp2377);
org$frostlang$frostc$ASTNode* $tmp2383 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2383));
*(&local143) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block246;
block248:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2368));
// line 653
frost$core$MutableString* $tmp2384 = *(&local142);
frost$core$MutableString$append$frost$core$String($tmp2384, &$s2385);
// line 654
frost$core$MutableString* $tmp2386 = *(&local142);
frost$core$String* $tmp2387 = frost$core$MutableString$finish$R$frost$core$String($tmp2386);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2387));
frost$core$MutableString* $tmp2388 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2388));
*(&local142) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2389 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2389));
*(&local141) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2390 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
*(&local140) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2391 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2391));
*(&local139) = ((frost$core$String*) NULL);
return $tmp2387;
block243:;
// line 657
frost$core$Int64 $tmp2392 = (frost$core$Int64) {657};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2393, $tmp2392);
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
frost$core$Int64* $tmp2394 = &param0->$rawValue;
frost$core$Int64 $tmp2395 = *$tmp2394;
frost$core$Int64 $tmp2396 = (frost$core$Int64) {0};
frost$core$Bit $tmp2397 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2396);
bool $tmp2398 = $tmp2397.value;
if ($tmp2398) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp2399 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2400 = *$tmp2399;
*(&local0) = $tmp2400;
frost$core$String** $tmp2401 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2402 = *$tmp2401;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
frost$core$String* $tmp2403 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2403));
*(&local1) = $tmp2402;
frost$core$String** $tmp2404 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2405 = *$tmp2404;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2405));
frost$core$String* $tmp2406 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2406));
*(&local2) = $tmp2405;
org$frostlang$frostc$ASTNode** $tmp2407 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2408 = *$tmp2407;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2408));
org$frostlang$frostc$ASTNode* $tmp2409 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
*(&local3) = $tmp2408;
// line 1
frost$core$String* $tmp2410 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
// line 1
frost$core$String* $tmp2411 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
// line 1
org$frostlang$frostc$ASTNode* $tmp2412 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2412));
org$frostlang$frostc$ASTNode* $tmp2413 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2413));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2414 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2414));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2415 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2415));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp2416 = (frost$core$Int64) {1};
frost$core$Bit $tmp2417 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2416);
bool $tmp2418 = $tmp2417.value;
if ($tmp2418) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp2419 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2420 = *$tmp2419;
*(&local4) = $tmp2420;
org$frostlang$frostc$FixedArray** $tmp2421 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2422 = *$tmp2421;
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2422));
org$frostlang$frostc$FixedArray* $tmp2423 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2423));
*(&local5) = $tmp2422;
// line 1
org$frostlang$frostc$FixedArray* $tmp2424 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
org$frostlang$frostc$FixedArray* $tmp2425 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp2426 = (frost$core$Int64) {2};
frost$core$Bit $tmp2427 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2426);
bool $tmp2428 = $tmp2427.value;
if ($tmp2428) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp2429 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2430 = *$tmp2429;
*(&local6) = $tmp2430;
org$frostlang$frostc$ASTNode** $tmp2431 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2432 = *$tmp2431;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
org$frostlang$frostc$ASTNode* $tmp2433 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
*(&local7) = $tmp2432;
org$frostlang$frostc$ASTNode** $tmp2434 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2435 = *$tmp2434;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
org$frostlang$frostc$ASTNode* $tmp2436 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2436));
*(&local8) = $tmp2435;
// line 1
org$frostlang$frostc$ASTNode* $tmp2437 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2437));
// line 1
org$frostlang$frostc$ASTNode* $tmp2438 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
org$frostlang$frostc$ASTNode* $tmp2439 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2440 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2440));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp2441 = (frost$core$Int64) {3};
frost$core$Bit $tmp2442 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2441);
bool $tmp2443 = $tmp2442.value;
if ($tmp2443) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp2444 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2445 = *$tmp2444;
*(&local9) = $tmp2445;
org$frostlang$frostc$ASTNode** $tmp2446 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2447 = *$tmp2446;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2447));
org$frostlang$frostc$ASTNode* $tmp2448 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
*(&local10) = $tmp2447;
// line 1
org$frostlang$frostc$ASTNode* $tmp2449 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2449));
org$frostlang$frostc$ASTNode* $tmp2450 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2450));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp2451 = (frost$core$Int64) {4};
frost$core$Bit $tmp2452 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2451);
bool $tmp2453 = $tmp2452.value;
if ($tmp2453) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp2454 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2455 = *$tmp2454;
*(&local11) = $tmp2455;
goto block1;
block11:;
frost$core$Int64 $tmp2456 = (frost$core$Int64) {5};
frost$core$Bit $tmp2457 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2456);
bool $tmp2458 = $tmp2457.value;
if ($tmp2458) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp2459 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2460 = *$tmp2459;
*(&local12) = $tmp2460;
org$frostlang$frostc$ASTNode** $tmp2461 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2462 = *$tmp2461;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
org$frostlang$frostc$ASTNode* $tmp2463 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2463));
*(&local13) = $tmp2462;
org$frostlang$frostc$expression$Binary$Operator* $tmp2464 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp2465 = *$tmp2464;
*(&local14) = $tmp2465;
org$frostlang$frostc$ASTNode** $tmp2466 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2467 = *$tmp2466;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2467));
org$frostlang$frostc$ASTNode* $tmp2468 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2468));
*(&local15) = $tmp2467;
// line 1
org$frostlang$frostc$ASTNode* $tmp2469 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2469));
// line 1
org$frostlang$frostc$ASTNode* $tmp2470 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2470));
org$frostlang$frostc$ASTNode* $tmp2471 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2471));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2472 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2472));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp2473 = (frost$core$Int64) {6};
frost$core$Bit $tmp2474 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2473);
bool $tmp2475 = $tmp2474.value;
if ($tmp2475) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp2476 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2477 = *$tmp2476;
*(&local16) = $tmp2477;
frost$core$Bit* $tmp2478 = (frost$core$Bit*) (param0->$data + 16);
frost$core$Bit $tmp2479 = *$tmp2478;
*(&local17) = $tmp2479;
goto block1;
block15:;
frost$core$Int64 $tmp2480 = (frost$core$Int64) {7};
frost$core$Bit $tmp2481 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2480);
bool $tmp2482 = $tmp2481.value;
if ($tmp2482) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp2483 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2484 = *$tmp2483;
*(&local18) = $tmp2484;
org$frostlang$frostc$FixedArray** $tmp2485 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2486 = *$tmp2485;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2486));
org$frostlang$frostc$FixedArray* $tmp2487 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2487));
*(&local19) = $tmp2486;
// line 1
org$frostlang$frostc$FixedArray* $tmp2488 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2488));
org$frostlang$frostc$FixedArray* $tmp2489 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2489));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block17:;
frost$core$Int64 $tmp2490 = (frost$core$Int64) {8};
frost$core$Bit $tmp2491 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2490);
bool $tmp2492 = $tmp2491.value;
if ($tmp2492) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp2493 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2494 = *$tmp2493;
*(&local20) = $tmp2494;
frost$core$String** $tmp2495 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2496 = *$tmp2495;
*(&local21) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
frost$core$String* $tmp2497 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
*(&local21) = $tmp2496;
// line 1
frost$core$String* $tmp2498 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
frost$core$String* $tmp2499 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
*(&local21) = ((frost$core$String*) NULL);
goto block1;
block19:;
frost$core$Int64 $tmp2500 = (frost$core$Int64) {9};
frost$core$Bit $tmp2501 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2500);
bool $tmp2502 = $tmp2501.value;
if ($tmp2502) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp2503 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2504 = *$tmp2503;
*(&local22) = $tmp2504;
org$frostlang$frostc$ASTNode** $tmp2505 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2506 = *$tmp2505;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2506));
org$frostlang$frostc$ASTNode* $tmp2507 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2507));
*(&local23) = $tmp2506;
org$frostlang$frostc$FixedArray** $tmp2508 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2509 = *$tmp2508;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
org$frostlang$frostc$FixedArray* $tmp2510 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2510));
*(&local24) = $tmp2509;
// line 1
org$frostlang$frostc$ASTNode* $tmp2511 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2511));
// line 1
org$frostlang$frostc$FixedArray* $tmp2512 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
org$frostlang$frostc$FixedArray* $tmp2513 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2513));
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2514 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block21:;
frost$core$Int64 $tmp2515 = (frost$core$Int64) {10};
frost$core$Bit $tmp2516 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2515);
bool $tmp2517 = $tmp2516.value;
if ($tmp2517) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp2518 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2519 = *$tmp2518;
*(&local25) = $tmp2519;
org$frostlang$frostc$ASTNode** $tmp2520 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2521 = *$tmp2520;
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2521));
org$frostlang$frostc$ASTNode* $tmp2522 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2522));
*(&local26) = $tmp2521;
frost$core$String** $tmp2523 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2524 = *$tmp2523;
*(&local27) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
frost$core$String* $tmp2525 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2525));
*(&local27) = $tmp2524;
org$frostlang$frostc$FixedArray** $tmp2526 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2527 = *$tmp2526;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
org$frostlang$frostc$FixedArray* $tmp2528 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
*(&local28) = $tmp2527;
// line 1
org$frostlang$frostc$ASTNode* $tmp2529 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2529));
// line 1
frost$core$String* $tmp2530 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
// line 1
org$frostlang$frostc$FixedArray* $tmp2531 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
org$frostlang$frostc$FixedArray* $tmp2532 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2532));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2533 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2534 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block23:;
frost$core$Int64 $tmp2535 = (frost$core$Int64) {11};
frost$core$Bit $tmp2536 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2535);
bool $tmp2537 = $tmp2536.value;
if ($tmp2537) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp2538 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2539 = *$tmp2538;
*(&local29) = $tmp2539;
org$frostlang$frostc$ASTNode** $tmp2540 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2541 = *$tmp2540;
*(&local30) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2541));
org$frostlang$frostc$ASTNode* $tmp2542 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2542));
*(&local30) = $tmp2541;
org$frostlang$frostc$ChoiceCase** $tmp2543 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp2544 = *$tmp2543;
*(&local31) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2544));
org$frostlang$frostc$ChoiceCase* $tmp2545 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2545));
*(&local31) = $tmp2544;
frost$core$Int64* $tmp2546 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp2547 = *$tmp2546;
*(&local32) = $tmp2547;
// line 1
org$frostlang$frostc$ASTNode* $tmp2548 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2548));
// line 1
org$frostlang$frostc$ChoiceCase* $tmp2549 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2549));
org$frostlang$frostc$ChoiceCase* $tmp2550 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2550));
*(&local31) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp2551 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2551));
*(&local30) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block25:;
frost$core$Int64 $tmp2552 = (frost$core$Int64) {12};
frost$core$Bit $tmp2553 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2552);
bool $tmp2554 = $tmp2553.value;
if ($tmp2554) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp2555 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2556 = *$tmp2555;
*(&local33) = $tmp2556;
org$frostlang$frostc$ASTNode** $tmp2557 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2558 = *$tmp2557;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2558));
org$frostlang$frostc$ASTNode* $tmp2559 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2559));
*(&local34) = $tmp2558;
org$frostlang$frostc$FixedArray** $tmp2560 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2561 = *$tmp2560;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
org$frostlang$frostc$FixedArray* $tmp2562 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2562));
*(&local35) = $tmp2561;
org$frostlang$frostc$ClassDecl$Kind* $tmp2563 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp2564 = *$tmp2563;
*(&local36) = $tmp2564;
frost$core$String** $tmp2565 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp2566 = *$tmp2565;
*(&local37) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2566));
frost$core$String* $tmp2567 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
*(&local37) = $tmp2566;
org$frostlang$frostc$FixedArray** $tmp2568 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2569 = *$tmp2568;
*(&local38) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2569));
org$frostlang$frostc$FixedArray* $tmp2570 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2570));
*(&local38) = $tmp2569;
org$frostlang$frostc$FixedArray** $tmp2571 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2572 = *$tmp2571;
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2572));
org$frostlang$frostc$FixedArray* $tmp2573 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2573));
*(&local39) = $tmp2572;
org$frostlang$frostc$FixedArray** $tmp2574 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2575 = *$tmp2574;
*(&local40) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2575));
org$frostlang$frostc$FixedArray* $tmp2576 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2576));
*(&local40) = $tmp2575;
// line 1
org$frostlang$frostc$ASTNode* $tmp2577 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2577));
// line 1
org$frostlang$frostc$FixedArray* $tmp2578 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2578));
// line 1
frost$core$String* $tmp2579 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2579));
// line 1
org$frostlang$frostc$FixedArray* $tmp2580 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
// line 1
org$frostlang$frostc$FixedArray* $tmp2581 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
// line 1
org$frostlang$frostc$FixedArray* $tmp2582 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2582));
org$frostlang$frostc$FixedArray* $tmp2583 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2583));
*(&local40) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2584 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2584));
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2585 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2585));
*(&local38) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2586 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2586));
*(&local37) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2587 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2587));
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2588 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2588));
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block27:;
frost$core$Int64 $tmp2589 = (frost$core$Int64) {13};
frost$core$Bit $tmp2590 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2589);
bool $tmp2591 = $tmp2590.value;
if ($tmp2591) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp2592 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2593 = *$tmp2592;
*(&local41) = $tmp2593;
frost$core$String** $tmp2594 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2595 = *$tmp2594;
*(&local42) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
frost$core$String* $tmp2596 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
*(&local42) = $tmp2595;
// line 1
frost$core$String* $tmp2597 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2597));
frost$core$String* $tmp2598 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2598));
*(&local42) = ((frost$core$String*) NULL);
goto block1;
block29:;
frost$core$Int64 $tmp2599 = (frost$core$Int64) {14};
frost$core$Bit $tmp2600 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2599);
bool $tmp2601 = $tmp2600.value;
if ($tmp2601) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp2602 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2603 = *$tmp2602;
*(&local43) = $tmp2603;
org$frostlang$frostc$ASTNode** $tmp2604 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2605 = *$tmp2604;
*(&local44) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2605));
org$frostlang$frostc$ASTNode* $tmp2606 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2606));
*(&local44) = $tmp2605;
org$frostlang$frostc$ASTNode** $tmp2607 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2608 = *$tmp2607;
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2608));
org$frostlang$frostc$ASTNode* $tmp2609 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2609));
*(&local45) = $tmp2608;
// line 1
org$frostlang$frostc$ASTNode* $tmp2610 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
// line 1
org$frostlang$frostc$ASTNode* $tmp2611 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2611));
org$frostlang$frostc$ASTNode* $tmp2612 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2612));
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2613 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2613));
*(&local44) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block31:;
frost$core$Int64 $tmp2614 = (frost$core$Int64) {15};
frost$core$Bit $tmp2615 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2614);
bool $tmp2616 = $tmp2615.value;
if ($tmp2616) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp2617 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2618 = *$tmp2617;
*(&local46) = $tmp2618;
frost$core$String** $tmp2619 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2620 = *$tmp2619;
*(&local47) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2620));
frost$core$String* $tmp2621 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2621));
*(&local47) = $tmp2620;
org$frostlang$frostc$FixedArray** $tmp2622 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2623 = *$tmp2622;
*(&local48) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
org$frostlang$frostc$FixedArray* $tmp2624 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2624));
*(&local48) = $tmp2623;
org$frostlang$frostc$ASTNode** $tmp2625 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2626 = *$tmp2625;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
org$frostlang$frostc$ASTNode* $tmp2627 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2627));
*(&local49) = $tmp2626;
// line 1
frost$core$String* $tmp2628 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
// line 1
org$frostlang$frostc$FixedArray* $tmp2629 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
// line 1
org$frostlang$frostc$ASTNode* $tmp2630 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
org$frostlang$frostc$ASTNode* $tmp2631 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2631));
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2632 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2632));
*(&local48) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2633 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2633));
*(&local47) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Int64 $tmp2634 = (frost$core$Int64) {16};
frost$core$Bit $tmp2635 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2634);
bool $tmp2636 = $tmp2635.value;
if ($tmp2636) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp2637 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2638 = *$tmp2637;
*(&local50) = $tmp2638;
org$frostlang$frostc$ASTNode** $tmp2639 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2640 = *$tmp2639;
*(&local51) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2640));
org$frostlang$frostc$ASTNode* $tmp2641 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2641));
*(&local51) = $tmp2640;
frost$core$String** $tmp2642 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2643 = *$tmp2642;
*(&local52) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2643));
frost$core$String* $tmp2644 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2644));
*(&local52) = $tmp2643;
// line 1
org$frostlang$frostc$ASTNode* $tmp2645 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2645));
// line 1
frost$core$String* $tmp2646 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
frost$core$String* $tmp2647 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
*(&local52) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2648 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2648));
*(&local51) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block35:;
frost$core$Int64 $tmp2649 = (frost$core$Int64) {17};
frost$core$Bit $tmp2650 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2649);
bool $tmp2651 = $tmp2650.value;
if ($tmp2651) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp2652 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2653 = *$tmp2652;
*(&local53) = $tmp2653;
org$frostlang$frostc$ASTNode** $tmp2654 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2655 = *$tmp2654;
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2655));
org$frostlang$frostc$ASTNode* $tmp2656 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
*(&local54) = $tmp2655;
frost$core$String** $tmp2657 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2658 = *$tmp2657;
*(&local55) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2658));
frost$core$String* $tmp2659 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
*(&local55) = $tmp2658;
org$frostlang$frostc$FixedArray** $tmp2660 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2661 = *$tmp2660;
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
org$frostlang$frostc$FixedArray* $tmp2662 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2662));
*(&local56) = $tmp2661;
// line 1
org$frostlang$frostc$ASTNode* $tmp2663 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2663));
// line 1
frost$core$String* $tmp2664 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
// line 1
org$frostlang$frostc$FixedArray* $tmp2665 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2665));
org$frostlang$frostc$FixedArray* $tmp2666 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2666));
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2667 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2667));
*(&local55) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2668 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2668));
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block37:;
frost$core$Int64 $tmp2669 = (frost$core$Int64) {18};
frost$core$Bit $tmp2670 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2669);
bool $tmp2671 = $tmp2670.value;
if ($tmp2671) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp2672 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2673 = *$tmp2672;
*(&local57) = $tmp2673;
org$frostlang$frostc$ASTNode** $tmp2674 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2675 = *$tmp2674;
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2675));
org$frostlang$frostc$ASTNode* $tmp2676 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2676));
*(&local58) = $tmp2675;
org$frostlang$frostc$FixedArray** $tmp2677 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2678 = *$tmp2677;
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
org$frostlang$frostc$FixedArray* $tmp2679 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
*(&local59) = $tmp2678;
org$frostlang$frostc$ASTNode** $tmp2680 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2681 = *$tmp2680;
*(&local60) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2681));
org$frostlang$frostc$ASTNode* $tmp2682 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
*(&local60) = $tmp2681;
// line 1
org$frostlang$frostc$ASTNode* $tmp2683 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
// line 1
org$frostlang$frostc$FixedArray* $tmp2684 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
// line 1
org$frostlang$frostc$ASTNode* $tmp2685 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2685));
org$frostlang$frostc$ASTNode* $tmp2686 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2686));
*(&local60) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2687 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2687));
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2688 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block39:;
frost$core$Int64 $tmp2689 = (frost$core$Int64) {19};
frost$core$Bit $tmp2690 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2689);
bool $tmp2691 = $tmp2690.value;
if ($tmp2691) goto block40; else goto block41;
block40:;
org$frostlang$frostc$FixedArray** $tmp2692 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp2693 = *$tmp2692;
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2693));
org$frostlang$frostc$FixedArray* $tmp2694 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
*(&local61) = $tmp2693;
// line 1
org$frostlang$frostc$FixedArray* $tmp2695 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2695));
org$frostlang$frostc$FixedArray* $tmp2696 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block41:;
frost$core$Int64 $tmp2697 = (frost$core$Int64) {20};
frost$core$Bit $tmp2698 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2697);
bool $tmp2699 = $tmp2698.value;
if ($tmp2699) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp2700 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2701 = *$tmp2700;
*(&local62) = $tmp2701;
frost$core$String** $tmp2702 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2703 = *$tmp2702;
*(&local63) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
frost$core$String* $tmp2704 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
*(&local63) = $tmp2703;
org$frostlang$frostc$ASTNode** $tmp2705 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2706 = *$tmp2705;
*(&local64) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2706));
org$frostlang$frostc$ASTNode* $tmp2707 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
*(&local64) = $tmp2706;
org$frostlang$frostc$ASTNode** $tmp2708 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2709 = *$tmp2708;
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2709));
org$frostlang$frostc$ASTNode* $tmp2710 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
*(&local65) = $tmp2709;
org$frostlang$frostc$FixedArray** $tmp2711 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp2712 = *$tmp2711;
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2712));
org$frostlang$frostc$FixedArray* $tmp2713 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2713));
*(&local66) = $tmp2712;
// line 1
frost$core$String* $tmp2714 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2714));
// line 1
org$frostlang$frostc$ASTNode* $tmp2715 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2715));
// line 1
org$frostlang$frostc$ASTNode* $tmp2716 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
// line 1
org$frostlang$frostc$FixedArray* $tmp2717 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
org$frostlang$frostc$FixedArray* $tmp2718 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2719 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2720 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
*(&local64) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2721 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
*(&local63) = ((frost$core$String*) NULL);
goto block1;
block43:;
frost$core$Int64 $tmp2722 = (frost$core$Int64) {21};
frost$core$Bit $tmp2723 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2722);
bool $tmp2724 = $tmp2723.value;
if ($tmp2724) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp2725 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2726 = *$tmp2725;
*(&local67) = $tmp2726;
frost$core$String** $tmp2727 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2728 = *$tmp2727;
*(&local68) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2728));
frost$core$String* $tmp2729 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
*(&local68) = $tmp2728;
org$frostlang$frostc$FixedArray** $tmp2730 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2731 = *$tmp2730;
*(&local69) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
org$frostlang$frostc$FixedArray* $tmp2732 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2732));
*(&local69) = $tmp2731;
// line 1
frost$core$String* $tmp2733 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2733));
// line 1
org$frostlang$frostc$FixedArray* $tmp2734 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2734));
org$frostlang$frostc$FixedArray* $tmp2735 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2735));
*(&local69) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2736 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2736));
*(&local68) = ((frost$core$String*) NULL);
goto block1;
block45:;
frost$core$Int64 $tmp2737 = (frost$core$Int64) {22};
frost$core$Bit $tmp2738 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2737);
bool $tmp2739 = $tmp2738.value;
if ($tmp2739) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp2740 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2741 = *$tmp2740;
*(&local70) = $tmp2741;
frost$core$String** $tmp2742 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2743 = *$tmp2742;
*(&local71) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2743));
frost$core$String* $tmp2744 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2744));
*(&local71) = $tmp2743;
// line 1
frost$core$String* $tmp2745 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
frost$core$String* $tmp2746 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2746));
*(&local71) = ((frost$core$String*) NULL);
goto block1;
block47:;
frost$core$Int64 $tmp2747 = (frost$core$Int64) {23};
frost$core$Bit $tmp2748 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2747);
bool $tmp2749 = $tmp2748.value;
if ($tmp2749) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp2750 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2751 = *$tmp2750;
*(&local72) = $tmp2751;
frost$core$String** $tmp2752 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2753 = *$tmp2752;
*(&local73) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2753));
frost$core$String* $tmp2754 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2754));
*(&local73) = $tmp2753;
org$frostlang$frostc$FixedArray** $tmp2755 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2756 = *$tmp2755;
*(&local74) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2756));
org$frostlang$frostc$FixedArray* $tmp2757 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
*(&local74) = $tmp2756;
// line 1
frost$core$String* $tmp2758 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
// line 1
org$frostlang$frostc$FixedArray* $tmp2759 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2759));
org$frostlang$frostc$FixedArray* $tmp2760 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
*(&local74) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2761 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
*(&local73) = ((frost$core$String*) NULL);
goto block1;
block49:;
frost$core$Int64 $tmp2762 = (frost$core$Int64) {24};
frost$core$Bit $tmp2763 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2762);
bool $tmp2764 = $tmp2763.value;
if ($tmp2764) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp2765 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2766 = *$tmp2765;
*(&local75) = $tmp2766;
org$frostlang$frostc$ASTNode** $tmp2767 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2768 = *$tmp2767;
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2768));
org$frostlang$frostc$ASTNode* $tmp2769 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2769));
*(&local76) = $tmp2768;
org$frostlang$frostc$FixedArray** $tmp2770 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2771 = *$tmp2770;
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
org$frostlang$frostc$FixedArray* $tmp2772 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2772));
*(&local77) = $tmp2771;
org$frostlang$frostc$ASTNode** $tmp2773 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2774 = *$tmp2773;
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2774));
org$frostlang$frostc$ASTNode* $tmp2775 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2775));
*(&local78) = $tmp2774;
// line 1
org$frostlang$frostc$ASTNode* $tmp2776 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2776));
// line 1
org$frostlang$frostc$FixedArray* $tmp2777 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2777));
// line 1
org$frostlang$frostc$ASTNode* $tmp2778 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2778));
org$frostlang$frostc$ASTNode* $tmp2779 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2780 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2781 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block51:;
frost$core$Int64 $tmp2782 = (frost$core$Int64) {25};
frost$core$Bit $tmp2783 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2782);
bool $tmp2784 = $tmp2783.value;
if ($tmp2784) goto block52; else goto block53;
block52:;
org$frostlang$frostc$Position* $tmp2785 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2786 = *$tmp2785;
*(&local79) = $tmp2786;
frost$core$UInt64* $tmp2787 = (frost$core$UInt64*) (param0->$data + 16);
frost$core$UInt64 $tmp2788 = *$tmp2787;
*(&local80) = $tmp2788;
goto block1;
block53:;
frost$core$Int64 $tmp2789 = (frost$core$Int64) {26};
frost$core$Bit $tmp2790 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2789);
bool $tmp2791 = $tmp2790.value;
if ($tmp2791) goto block54; else goto block55;
block54:;
org$frostlang$frostc$Position* $tmp2792 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2793 = *$tmp2792;
*(&local81) = $tmp2793;
org$frostlang$frostc$IR$Value** $tmp2794 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp2795 = *$tmp2794;
*(&local82) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
org$frostlang$frostc$IR$Value* $tmp2796 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
*(&local82) = $tmp2795;
// line 1
org$frostlang$frostc$IR$Value* $tmp2797 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
org$frostlang$frostc$IR$Value* $tmp2798 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2798));
*(&local82) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block55:;
frost$core$Int64 $tmp2799 = (frost$core$Int64) {27};
frost$core$Bit $tmp2800 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2799);
bool $tmp2801 = $tmp2800.value;
if ($tmp2801) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp2802 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2803 = *$tmp2802;
*(&local83) = $tmp2803;
frost$core$String** $tmp2804 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2805 = *$tmp2804;
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
frost$core$String* $tmp2806 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
*(&local84) = $tmp2805;
org$frostlang$frostc$FixedArray** $tmp2807 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2808 = *$tmp2807;
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
org$frostlang$frostc$FixedArray* $tmp2809 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
*(&local85) = $tmp2808;
// line 1
frost$core$String* $tmp2810 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2810));
// line 1
org$frostlang$frostc$FixedArray* $tmp2811 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
org$frostlang$frostc$FixedArray* $tmp2812 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2813 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
*(&local84) = ((frost$core$String*) NULL);
goto block1;
block57:;
frost$core$Int64 $tmp2814 = (frost$core$Int64) {28};
frost$core$Bit $tmp2815 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2814);
bool $tmp2816 = $tmp2815.value;
if ($tmp2816) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp2817 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2818 = *$tmp2817;
*(&local86) = $tmp2818;
org$frostlang$frostc$ASTNode** $tmp2819 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2820 = *$tmp2819;
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2820));
org$frostlang$frostc$ASTNode* $tmp2821 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
*(&local87) = $tmp2820;
org$frostlang$frostc$FixedArray** $tmp2822 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2823 = *$tmp2822;
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
org$frostlang$frostc$FixedArray* $tmp2824 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
*(&local88) = $tmp2823;
org$frostlang$frostc$FixedArray** $tmp2825 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2826 = *$tmp2825;
*(&local89) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
org$frostlang$frostc$FixedArray* $tmp2827 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
*(&local89) = $tmp2826;
// line 1
org$frostlang$frostc$ASTNode* $tmp2828 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
// line 1
org$frostlang$frostc$FixedArray* $tmp2829 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
// line 1
org$frostlang$frostc$FixedArray* $tmp2830 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
org$frostlang$frostc$FixedArray* $tmp2831 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2831));
*(&local89) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2832 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2833 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block59:;
frost$core$Int64 $tmp2834 = (frost$core$Int64) {29};
frost$core$Bit $tmp2835 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2834);
bool $tmp2836 = $tmp2835.value;
if ($tmp2836) goto block60; else goto block61;
block60:;
org$frostlang$frostc$Position* $tmp2837 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2838 = *$tmp2837;
*(&local90) = $tmp2838;
org$frostlang$frostc$ASTNode** $tmp2839 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2840 = *$tmp2839;
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2840));
org$frostlang$frostc$ASTNode* $tmp2841 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
*(&local91) = $tmp2840;
org$frostlang$frostc$FixedArray** $tmp2842 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2843 = *$tmp2842;
*(&local92) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2843));
org$frostlang$frostc$FixedArray* $tmp2844 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2844));
*(&local92) = $tmp2843;
org$frostlang$frostc$MethodDecl$Kind* $tmp2845 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp2846 = *$tmp2845;
*(&local93) = $tmp2846;
frost$core$String** $tmp2847 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp2848 = *$tmp2847;
*(&local94) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2848));
frost$core$String* $tmp2849 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2849));
*(&local94) = $tmp2848;
org$frostlang$frostc$FixedArray** $tmp2850 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2851 = *$tmp2850;
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2851));
org$frostlang$frostc$FixedArray* $tmp2852 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2852));
*(&local95) = $tmp2851;
org$frostlang$frostc$FixedArray** $tmp2853 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2854 = *$tmp2853;
*(&local96) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2854));
org$frostlang$frostc$FixedArray* $tmp2855 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
*(&local96) = $tmp2854;
org$frostlang$frostc$ASTNode** $tmp2856 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
org$frostlang$frostc$ASTNode* $tmp2857 = *$tmp2856;
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
org$frostlang$frostc$ASTNode* $tmp2858 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2858));
*(&local97) = $tmp2857;
org$frostlang$frostc$FixedArray** $tmp2859 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2860 = *$tmp2859;
*(&local98) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2860));
org$frostlang$frostc$FixedArray* $tmp2861 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2861));
*(&local98) = $tmp2860;
// line 1
org$frostlang$frostc$ASTNode* $tmp2862 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2862));
// line 1
org$frostlang$frostc$FixedArray* $tmp2863 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2863));
// line 1
frost$core$String* $tmp2864 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2864));
// line 1
org$frostlang$frostc$FixedArray* $tmp2865 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
// line 1
org$frostlang$frostc$FixedArray* $tmp2866 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
// line 1
org$frostlang$frostc$ASTNode* $tmp2867 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
// line 1
org$frostlang$frostc$FixedArray* $tmp2868 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2868));
org$frostlang$frostc$FixedArray* $tmp2869 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
*(&local98) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2870 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2870));
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2871 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2871));
*(&local96) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2872 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2872));
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2873 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2873));
*(&local94) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2874 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
*(&local92) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2875 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block61:;
frost$core$Int64 $tmp2876 = (frost$core$Int64) {30};
frost$core$Bit $tmp2877 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2876);
bool $tmp2878 = $tmp2877.value;
if ($tmp2878) goto block62; else goto block63;
block62:;
org$frostlang$frostc$Position* $tmp2879 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2880 = *$tmp2879;
*(&local99) = $tmp2880;
org$frostlang$frostc$parser$Token$Kind* $tmp2881 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp2882 = *$tmp2881;
*(&local100) = $tmp2882;
org$frostlang$frostc$FixedArray** $tmp2883 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2884 = *$tmp2883;
*(&local101) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2884));
org$frostlang$frostc$FixedArray* $tmp2885 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2885));
*(&local101) = $tmp2884;
org$frostlang$frostc$ASTNode** $tmp2886 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2887 = *$tmp2886;
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2887));
org$frostlang$frostc$ASTNode* $tmp2888 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2888));
*(&local102) = $tmp2887;
// line 1
org$frostlang$frostc$FixedArray* $tmp2889 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
// line 1
org$frostlang$frostc$ASTNode* $tmp2890 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2890));
org$frostlang$frostc$ASTNode* $tmp2891 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2892 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
*(&local101) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block63:;
frost$core$Int64 $tmp2893 = (frost$core$Int64) {31};
frost$core$Bit $tmp2894 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2893);
bool $tmp2895 = $tmp2894.value;
if ($tmp2895) goto block64; else goto block65;
block64:;
org$frostlang$frostc$Position* $tmp2896 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2897 = *$tmp2896;
*(&local103) = $tmp2897;
goto block1;
block65:;
frost$core$Int64 $tmp2898 = (frost$core$Int64) {32};
frost$core$Bit $tmp2899 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2898);
bool $tmp2900 = $tmp2899.value;
if ($tmp2900) goto block66; else goto block67;
block66:;
org$frostlang$frostc$Position* $tmp2901 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2902 = *$tmp2901;
*(&local104) = $tmp2902;
org$frostlang$frostc$ASTNode** $tmp2903 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2904 = *$tmp2903;
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2904));
org$frostlang$frostc$ASTNode* $tmp2905 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2905));
*(&local105) = $tmp2904;
// line 1
org$frostlang$frostc$ASTNode* $tmp2906 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2906));
org$frostlang$frostc$ASTNode* $tmp2907 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block67:;
frost$core$Int64 $tmp2908 = (frost$core$Int64) {33};
frost$core$Bit $tmp2909 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2908);
bool $tmp2910 = $tmp2909.value;
if ($tmp2910) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Position* $tmp2911 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2912 = *$tmp2911;
*(&local106) = $tmp2912;
frost$core$String** $tmp2913 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2914 = *$tmp2913;
*(&local107) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
frost$core$String* $tmp2915 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
*(&local107) = $tmp2914;
// line 1
frost$core$String* $tmp2916 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
frost$core$String* $tmp2917 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2917));
*(&local107) = ((frost$core$String*) NULL);
goto block1;
block69:;
frost$core$Int64 $tmp2918 = (frost$core$Int64) {34};
frost$core$Bit $tmp2919 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2918);
bool $tmp2920 = $tmp2919.value;
if ($tmp2920) goto block70; else goto block71;
block70:;
org$frostlang$frostc$Position* $tmp2921 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2922 = *$tmp2921;
*(&local108) = $tmp2922;
frost$core$String** $tmp2923 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2924 = *$tmp2923;
*(&local109) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2924));
frost$core$String* $tmp2925 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
*(&local109) = $tmp2924;
org$frostlang$frostc$ASTNode** $tmp2926 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2927 = *$tmp2926;
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2927));
org$frostlang$frostc$ASTNode* $tmp2928 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2928));
*(&local110) = $tmp2927;
// line 1
frost$core$String* $tmp2929 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
// line 1
org$frostlang$frostc$ASTNode* $tmp2930 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2930));
org$frostlang$frostc$ASTNode* $tmp2931 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2931));
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2932 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2932));
*(&local109) = ((frost$core$String*) NULL);
goto block1;
block71:;
frost$core$Int64 $tmp2933 = (frost$core$Int64) {35};
frost$core$Bit $tmp2934 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2933);
bool $tmp2935 = $tmp2934.value;
if ($tmp2935) goto block72; else goto block73;
block72:;
org$frostlang$frostc$Position* $tmp2936 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2937 = *$tmp2936;
*(&local111) = $tmp2937;
org$frostlang$frostc$ASTNode** $tmp2938 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2939 = *$tmp2938;
*(&local112) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2939));
org$frostlang$frostc$ASTNode* $tmp2940 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2940));
*(&local112) = $tmp2939;
frost$core$Bit* $tmp2941 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp2942 = *$tmp2941;
*(&local113) = $tmp2942;
org$frostlang$frostc$ASTNode** $tmp2943 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
org$frostlang$frostc$ASTNode* $tmp2944 = *$tmp2943;
*(&local114) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
org$frostlang$frostc$ASTNode* $tmp2945 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
*(&local114) = $tmp2944;
org$frostlang$frostc$ASTNode** $tmp2946 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp2947 = *$tmp2946;
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
org$frostlang$frostc$ASTNode* $tmp2948 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
*(&local115) = $tmp2947;
// line 1
org$frostlang$frostc$ASTNode* $tmp2949 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
// line 1
org$frostlang$frostc$ASTNode* $tmp2950 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2950));
// line 1
org$frostlang$frostc$ASTNode* $tmp2951 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2951));
org$frostlang$frostc$ASTNode* $tmp2952 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2952));
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2953 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2953));
*(&local114) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2954 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
*(&local112) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block73:;
frost$core$Int64 $tmp2955 = (frost$core$Int64) {36};
frost$core$Bit $tmp2956 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2955);
bool $tmp2957 = $tmp2956.value;
if ($tmp2957) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp2958 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2959 = *$tmp2958;
*(&local116) = $tmp2959;
frost$core$Real64* $tmp2960 = (frost$core$Real64*) (param0->$data + 16);
frost$core$Real64 $tmp2961 = *$tmp2960;
*(&local117) = $tmp2961;
goto block1;
block75:;
frost$core$Int64 $tmp2962 = (frost$core$Int64) {37};
frost$core$Bit $tmp2963 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2962);
bool $tmp2964 = $tmp2963.value;
if ($tmp2964) goto block76; else goto block77;
block76:;
org$frostlang$frostc$Position* $tmp2965 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2966 = *$tmp2965;
*(&local118) = $tmp2966;
frost$core$String** $tmp2967 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2968 = *$tmp2967;
*(&local119) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
frost$core$String* $tmp2969 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
*(&local119) = $tmp2968;
// line 1
frost$core$String* $tmp2970 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
frost$core$String* $tmp2971 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
*(&local119) = ((frost$core$String*) NULL);
goto block1;
block77:;
frost$core$Int64 $tmp2972 = (frost$core$Int64) {38};
frost$core$Bit $tmp2973 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2972);
bool $tmp2974 = $tmp2973.value;
if ($tmp2974) goto block78; else goto block79;
block78:;
org$frostlang$frostc$Position* $tmp2975 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2976 = *$tmp2975;
*(&local120) = $tmp2976;
org$frostlang$frostc$ASTNode** $tmp2977 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2978 = *$tmp2977;
*(&local121) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2978));
org$frostlang$frostc$ASTNode* $tmp2979 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2979));
*(&local121) = $tmp2978;
// line 1
org$frostlang$frostc$ASTNode* $tmp2980 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2980));
org$frostlang$frostc$ASTNode* $tmp2981 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2981));
*(&local121) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block79:;
frost$core$Int64 $tmp2982 = (frost$core$Int64) {39};
frost$core$Bit $tmp2983 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2982);
bool $tmp2984 = $tmp2983.value;
if ($tmp2984) goto block80; else goto block81;
block80:;
org$frostlang$frostc$Position* $tmp2985 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2986 = *$tmp2985;
*(&local122) = $tmp2986;
goto block1;
block81:;
frost$core$Int64 $tmp2987 = (frost$core$Int64) {40};
frost$core$Bit $tmp2988 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2987);
bool $tmp2989 = $tmp2988.value;
if ($tmp2989) goto block82; else goto block83;
block82:;
org$frostlang$frostc$Position* $tmp2990 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2991 = *$tmp2990;
*(&local123) = $tmp2991;
frost$core$String** $tmp2992 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2993 = *$tmp2992;
*(&local124) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2993));
frost$core$String* $tmp2994 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2994));
*(&local124) = $tmp2993;
// line 1
frost$core$String* $tmp2995 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2995));
frost$core$String* $tmp2996 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2996));
*(&local124) = ((frost$core$String*) NULL);
goto block1;
block83:;
frost$core$Int64 $tmp2997 = (frost$core$Int64) {41};
frost$core$Bit $tmp2998 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp2997);
bool $tmp2999 = $tmp2998.value;
if ($tmp2999) goto block84; else goto block85;
block84:;
org$frostlang$frostc$Position* $tmp3000 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3001 = *$tmp3000;
*(&local125) = $tmp3001;
goto block1;
block85:;
frost$core$Int64 $tmp3002 = (frost$core$Int64) {42};
frost$core$Bit $tmp3003 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp3002);
bool $tmp3004 = $tmp3003.value;
if ($tmp3004) goto block86; else goto block87;
block86:;
org$frostlang$frostc$Position* $tmp3005 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3006 = *$tmp3005;
*(&local126) = $tmp3006;
org$frostlang$frostc$FixedArray** $tmp3007 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3008 = *$tmp3007;
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3008));
org$frostlang$frostc$FixedArray* $tmp3009 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3009));
*(&local127) = $tmp3008;
org$frostlang$frostc$ASTNode** $tmp3010 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3011 = *$tmp3010;
*(&local128) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3011));
org$frostlang$frostc$ASTNode* $tmp3012 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3012));
*(&local128) = $tmp3011;
org$frostlang$frostc$FixedArray** $tmp3013 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3014 = *$tmp3013;
*(&local129) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3014));
org$frostlang$frostc$FixedArray* $tmp3015 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
*(&local129) = $tmp3014;
// line 1
org$frostlang$frostc$FixedArray* $tmp3016 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3016));
// line 1
org$frostlang$frostc$ASTNode* $tmp3017 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3017));
// line 1
org$frostlang$frostc$FixedArray* $tmp3018 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3018));
org$frostlang$frostc$FixedArray* $tmp3019 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3019));
*(&local129) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3020 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3020));
*(&local128) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3021 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3021));
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block87:;
frost$core$Int64 $tmp3022 = (frost$core$Int64) {43};
frost$core$Bit $tmp3023 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp3022);
bool $tmp3024 = $tmp3023.value;
if ($tmp3024) goto block88; else goto block89;
block88:;
org$frostlang$frostc$Position* $tmp3025 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3026 = *$tmp3025;
*(&local130) = $tmp3026;
org$frostlang$frostc$FixedArray** $tmp3027 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3028 = *$tmp3027;
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3028));
org$frostlang$frostc$FixedArray* $tmp3029 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3029));
*(&local131) = $tmp3028;
// line 1
org$frostlang$frostc$FixedArray* $tmp3030 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3030));
org$frostlang$frostc$FixedArray* $tmp3031 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3031));
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block89:;
frost$core$Int64 $tmp3032 = (frost$core$Int64) {44};
frost$core$Bit $tmp3033 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp3032);
bool $tmp3034 = $tmp3033.value;
if ($tmp3034) goto block90; else goto block91;
block90:;
org$frostlang$frostc$Position* $tmp3035 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3036 = *$tmp3035;
*(&local132) = $tmp3036;
org$frostlang$frostc$FixedArray** $tmp3037 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3038 = *$tmp3037;
*(&local133) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3038));
org$frostlang$frostc$FixedArray* $tmp3039 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3039));
*(&local133) = $tmp3038;
// line 1
org$frostlang$frostc$FixedArray* $tmp3040 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3040));
org$frostlang$frostc$FixedArray* $tmp3041 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
*(&local133) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block91:;
frost$core$Int64 $tmp3042 = (frost$core$Int64) {45};
frost$core$Bit $tmp3043 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp3042);
bool $tmp3044 = $tmp3043.value;
if ($tmp3044) goto block92; else goto block93;
block92:;
org$frostlang$frostc$Position* $tmp3045 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3046 = *$tmp3045;
*(&local134) = $tmp3046;
org$frostlang$frostc$FixedArray** $tmp3047 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3048 = *$tmp3047;
*(&local135) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3048));
org$frostlang$frostc$FixedArray* $tmp3049 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3049));
*(&local135) = $tmp3048;
// line 1
org$frostlang$frostc$FixedArray* $tmp3050 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3050));
org$frostlang$frostc$FixedArray* $tmp3051 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3051));
*(&local135) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block93:;
frost$core$Int64 $tmp3052 = (frost$core$Int64) {46};
frost$core$Bit $tmp3053 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp3052);
bool $tmp3054 = $tmp3053.value;
if ($tmp3054) goto block94; else goto block95;
block94:;
org$frostlang$frostc$Position* $tmp3055 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3056 = *$tmp3055;
*(&local136) = $tmp3056;
frost$core$String** $tmp3057 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3058 = *$tmp3057;
*(&local137) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3058));
frost$core$String* $tmp3059 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3059));
*(&local137) = $tmp3058;
// line 1
frost$core$String* $tmp3060 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3060));
frost$core$String* $tmp3061 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3061));
*(&local137) = ((frost$core$String*) NULL);
goto block1;
block95:;
frost$core$Int64 $tmp3062 = (frost$core$Int64) {47};
frost$core$Bit $tmp3063 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp3062);
bool $tmp3064 = $tmp3063.value;
if ($tmp3064) goto block96; else goto block97;
block96:;
org$frostlang$frostc$Position* $tmp3065 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3066 = *$tmp3065;
*(&local138) = $tmp3066;
org$frostlang$frostc$FixedArray** $tmp3067 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3068 = *$tmp3067;
*(&local139) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3068));
org$frostlang$frostc$FixedArray* $tmp3069 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3069));
*(&local139) = $tmp3068;
org$frostlang$frostc$ASTNode** $tmp3070 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3071 = *$tmp3070;
*(&local140) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3071));
org$frostlang$frostc$ASTNode* $tmp3072 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3072));
*(&local140) = $tmp3071;
// line 1
org$frostlang$frostc$FixedArray* $tmp3073 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3073));
// line 1
org$frostlang$frostc$ASTNode* $tmp3074 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3074));
org$frostlang$frostc$ASTNode* $tmp3075 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3075));
*(&local140) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3076 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3076));
*(&local139) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block97:;
frost$core$Int64 $tmp3077 = (frost$core$Int64) {48};
frost$core$Bit $tmp3078 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp3077);
bool $tmp3079 = $tmp3078.value;
if ($tmp3079) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp3080 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3081 = *$tmp3080;
*(&local141) = $tmp3081;
frost$core$String** $tmp3082 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3083 = *$tmp3082;
*(&local142) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3083));
frost$core$String* $tmp3084 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3084));
*(&local142) = $tmp3083;
org$frostlang$frostc$ASTNode** $tmp3085 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3086 = *$tmp3085;
*(&local143) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3086));
org$frostlang$frostc$ASTNode* $tmp3087 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3087));
*(&local143) = $tmp3086;
// line 1
frost$core$String* $tmp3088 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
// line 1
org$frostlang$frostc$ASTNode* $tmp3089 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3089));
org$frostlang$frostc$ASTNode* $tmp3090 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
*(&local143) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3091 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3091));
*(&local142) = ((frost$core$String*) NULL);
goto block1;
block99:;
frost$core$Int64 $tmp3092 = (frost$core$Int64) {49};
frost$core$Bit $tmp3093 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp3092);
bool $tmp3094 = $tmp3093.value;
if ($tmp3094) goto block100; else goto block101;
block100:;
org$frostlang$frostc$Position* $tmp3095 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3096 = *$tmp3095;
*(&local144) = $tmp3096;
org$frostlang$frostc$expression$Unary$Operator* $tmp3097 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 16);
org$frostlang$frostc$expression$Unary$Operator $tmp3098 = *$tmp3097;
*(&local145) = $tmp3098;
org$frostlang$frostc$ASTNode** $tmp3099 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3100 = *$tmp3099;
*(&local146) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3100));
org$frostlang$frostc$ASTNode* $tmp3101 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
*(&local146) = $tmp3100;
// line 1
org$frostlang$frostc$ASTNode* $tmp3102 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3102));
org$frostlang$frostc$ASTNode* $tmp3103 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3103));
*(&local146) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block101:;
frost$core$Int64 $tmp3104 = (frost$core$Int64) {50};
frost$core$Bit $tmp3105 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp3104);
bool $tmp3106 = $tmp3105.value;
if ($tmp3106) goto block102; else goto block103;
block102:;
org$frostlang$frostc$Position* $tmp3107 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3108 = *$tmp3107;
*(&local147) = $tmp3108;
org$frostlang$frostc$ASTNode** $tmp3109 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3110 = *$tmp3109;
*(&local148) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3110));
org$frostlang$frostc$ASTNode* $tmp3111 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3111));
*(&local148) = $tmp3110;
// line 1
org$frostlang$frostc$ASTNode* $tmp3112 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3112));
org$frostlang$frostc$ASTNode* $tmp3113 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3113));
*(&local148) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block103:;
frost$core$Int64 $tmp3114 = (frost$core$Int64) {51};
frost$core$Bit $tmp3115 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp3114);
bool $tmp3116 = $tmp3115.value;
if ($tmp3116) goto block104; else goto block105;
block104:;
org$frostlang$frostc$Position* $tmp3117 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3118 = *$tmp3117;
*(&local149) = $tmp3118;
org$frostlang$frostc$FixedArray** $tmp3119 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3120 = *$tmp3119;
*(&local150) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3120));
org$frostlang$frostc$FixedArray* $tmp3121 = *(&local150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
*(&local150) = $tmp3120;
org$frostlang$frostc$ASTNode** $tmp3122 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3123 = *$tmp3122;
*(&local151) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3123));
org$frostlang$frostc$ASTNode* $tmp3124 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3124));
*(&local151) = $tmp3123;
// line 1
org$frostlang$frostc$FixedArray* $tmp3125 = *(&local150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
// line 1
org$frostlang$frostc$ASTNode* $tmp3126 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3126));
org$frostlang$frostc$ASTNode* $tmp3127 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3127));
*(&local151) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3128 = *(&local150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3128));
*(&local150) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block105:;
frost$core$Int64 $tmp3129 = (frost$core$Int64) {52};
frost$core$Bit $tmp3130 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp3129);
bool $tmp3131 = $tmp3130.value;
if ($tmp3131) goto block106; else goto block107;
block106:;
org$frostlang$frostc$Position* $tmp3132 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3133 = *$tmp3132;
*(&local152) = $tmp3133;
frost$core$String** $tmp3134 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3135 = *$tmp3134;
*(&local153) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3135));
frost$core$String* $tmp3136 = *(&local153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3136));
*(&local153) = $tmp3135;
// line 1
frost$core$String* $tmp3137 = *(&local153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
frost$core$String* $tmp3138 = *(&local153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3138));
*(&local153) = ((frost$core$String*) NULL);
goto block1;
block107:;
frost$core$Int64 $tmp3139 = (frost$core$Int64) {53};
frost$core$Bit $tmp3140 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp3139);
bool $tmp3141 = $tmp3140.value;
if ($tmp3141) goto block108; else goto block109;
block108:;
org$frostlang$frostc$Position* $tmp3142 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3143 = *$tmp3142;
*(&local154) = $tmp3143;
org$frostlang$frostc$Variable$Kind* $tmp3144 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp3145 = *$tmp3144;
*(&local155) = $tmp3145;
org$frostlang$frostc$FixedArray** $tmp3146 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3147 = *$tmp3146;
*(&local156) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3147));
org$frostlang$frostc$FixedArray* $tmp3148 = *(&local156);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3148));
*(&local156) = $tmp3147;
// line 1
org$frostlang$frostc$FixedArray* $tmp3149 = *(&local156);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3149));
org$frostlang$frostc$FixedArray* $tmp3150 = *(&local156);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3150));
*(&local156) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block109:;
frost$core$Int64 $tmp3151 = (frost$core$Int64) {54};
frost$core$Bit $tmp3152 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp3151);
bool $tmp3153 = $tmp3152.value;
if ($tmp3153) goto block110; else goto block111;
block110:;
org$frostlang$frostc$Position* $tmp3154 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3155 = *$tmp3154;
*(&local157) = $tmp3155;
org$frostlang$frostc$FixedArray** $tmp3156 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3157 = *$tmp3156;
*(&local158) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3157));
org$frostlang$frostc$FixedArray* $tmp3158 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3158));
*(&local158) = $tmp3157;
org$frostlang$frostc$FixedArray** $tmp3159 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3160 = *$tmp3159;
*(&local159) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3160));
org$frostlang$frostc$FixedArray* $tmp3161 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3161));
*(&local159) = $tmp3160;
// line 1
org$frostlang$frostc$FixedArray* $tmp3162 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3162));
// line 1
org$frostlang$frostc$FixedArray* $tmp3163 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3163));
org$frostlang$frostc$FixedArray* $tmp3164 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3164));
*(&local159) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3165 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3165));
*(&local158) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block111:;
frost$core$Int64 $tmp3166 = (frost$core$Int64) {55};
frost$core$Bit $tmp3167 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2395, $tmp3166);
bool $tmp3168 = $tmp3167.value;
if ($tmp3168) goto block112; else goto block1;
block112:;
org$frostlang$frostc$Position* $tmp3169 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3170 = *$tmp3169;
*(&local160) = $tmp3170;
frost$core$String** $tmp3171 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3172 = *$tmp3171;
*(&local161) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3172));
frost$core$String* $tmp3173 = *(&local161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3173));
*(&local161) = $tmp3172;
org$frostlang$frostc$ASTNode** $tmp3174 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3175 = *$tmp3174;
*(&local162) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3175));
org$frostlang$frostc$ASTNode* $tmp3176 = *(&local162);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3176));
*(&local162) = $tmp3175;
org$frostlang$frostc$FixedArray** $tmp3177 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3178 = *$tmp3177;
*(&local163) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3178));
org$frostlang$frostc$FixedArray* $tmp3179 = *(&local163);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3179));
*(&local163) = $tmp3178;
// line 1
frost$core$String* $tmp3180 = *(&local161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3180));
// line 1
org$frostlang$frostc$ASTNode* $tmp3181 = *(&local162);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3181));
// line 1
org$frostlang$frostc$FixedArray* $tmp3182 = *(&local163);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3182));
org$frostlang$frostc$FixedArray* $tmp3183 = *(&local163);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3183));
*(&local163) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3184 = *(&local162);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3184));
*(&local162) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3185 = *(&local161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
*(&local161) = ((frost$core$String*) NULL);
goto block1;
block1:;
// line 7
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, frost$core$String* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3186 = &param0->$rawValue;
*$tmp3186 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3187 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3187 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3188 = (frost$core$String**) (param0->$data + 16);
*$tmp3188 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3189 = (frost$core$String**) (param0->$data + 24);
*$tmp3189 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3190 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3190 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3) {

// line 7
frost$core$Int64* $tmp3191 = &param0->$rawValue;
*$tmp3191 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3192 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3192 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3193 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3193 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ASTNode* param4) {

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
org$frostlang$frostc$ASTNode** $tmp3197 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3197 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3) {

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
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2) {

// line 7
frost$core$Int64* $tmp3201 = &param0->$rawValue;
*$tmp3201 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3202 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3202 = param2;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$expression$Binary$Operator param4, org$frostlang$frostc$ASTNode* param5) {

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
org$frostlang$frostc$expression$Binary$Operator* $tmp3206 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 24);
*$tmp3206 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3207 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3207 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$Bit param3) {

// line 7
frost$core$Int64* $tmp3208 = &param0->$rawValue;
*$tmp3208 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3209 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3209 = param2;
// line 7
frost$core$Bit* $tmp3210 = (frost$core$Bit*) (param0->$data + 16);
*$tmp3210 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// line 7
frost$core$Int64* $tmp3211 = &param0->$rawValue;
*$tmp3211 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3212 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3212 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3213 = (frost$core$String**) (param0->$data + 16);
*$tmp3213 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3214 = &param0->$rawValue;
*$tmp3214 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3215 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3215 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3216 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3216 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3217 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3217 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3218 = &param0->$rawValue;
*$tmp3218 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3219 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3219 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3220 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3220 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3221 = (frost$core$String**) (param0->$data + 24);
*$tmp3221 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3222 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3222 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ChoiceCase$frost$core$Int64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ChoiceCase* param4, frost$core$Int64 param5) {

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
org$frostlang$frostc$ChoiceCase** $tmp3226 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
*$tmp3226 = param4;
// line 7
frost$core$Int64* $tmp3227 = (frost$core$Int64*) (param0->$data + 32);
*$tmp3227 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ClassDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$FixedArray* param9) {

// line 7
frost$core$Int64* $tmp3228 = &param0->$rawValue;
*$tmp3228 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3229 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3229 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3230 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3230 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3231 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3231 = param4;
// line 7
org$frostlang$frostc$ClassDecl$Kind* $tmp3232 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
*$tmp3232 = param5;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
frost$core$String** $tmp3233 = (frost$core$String**) (param0->$data + 40);
*$tmp3233 = param6;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$FixedArray** $tmp3234 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
*$tmp3234 = param7;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$FixedArray** $tmp3235 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
*$tmp3235 = param8;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$FixedArray** $tmp3236 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
*$tmp3236 = param9;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3237 = &param0->$rawValue;
*$tmp3237 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3238 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3238 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3239 = (frost$core$String**) (param0->$data + 16);
*$tmp3239 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3240 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3240 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3241 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3241 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4) {

// line 7
frost$core$Int64* $tmp3242 = &param0->$rawValue;
*$tmp3242 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3243 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3243 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3244 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3244 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3245 = (frost$core$String**) (param0->$data + 24);
*$tmp3245 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3246 = &param0->$rawValue;
*$tmp3246 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3247 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3247 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3248 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3248 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3249 = (frost$core$String**) (param0->$data + 24);
*$tmp3249 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3250 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3250 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

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
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3254 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3254 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3255 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3255 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$FixedArray* param2) {

// line 7
frost$core$Int64* $tmp3256 = &param0->$rawValue;
*$tmp3256 = param1;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$FixedArray** $tmp3257 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
*$tmp3257 = param2;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$FixedArray* param6) {

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
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3262 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3262 = param5;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$FixedArray** $tmp3263 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
*$tmp3263 = param6;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3264 = &param0->$rawValue;
*$tmp3264 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3265 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3265 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3266 = (frost$core$String**) (param0->$data + 16);
*$tmp3266 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3267 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3267 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// line 7
frost$core$Int64* $tmp3268 = &param0->$rawValue;
*$tmp3268 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3269 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3269 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3270 = (frost$core$String**) (param0->$data + 16);
*$tmp3270 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

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
org$frostlang$frostc$ASTNode** $tmp3275 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3275 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$UInt64 param3) {

// line 7
frost$core$Int64* $tmp3276 = &param0->$rawValue;
*$tmp3276 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3277 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3277 = param2;
// line 7
frost$core$UInt64* $tmp3278 = (frost$core$UInt64*) (param0->$data + 16);
*$tmp3278 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3) {

// line 7
frost$core$Int64* $tmp3279 = &param0->$rawValue;
*$tmp3279 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3280 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3280 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp3281 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp3281 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3282 = &param0->$rawValue;
*$tmp3282 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3283 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3283 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3284 = (frost$core$String**) (param0->$data + 16);
*$tmp3284 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3285 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3285 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3286 = &param0->$rawValue;
*$tmp3286 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3287 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3287 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3288 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3288 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3289 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3289 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3290 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3290 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$MethodDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$ASTNode* param9, org$frostlang$frostc$FixedArray* param10) {

// line 7
frost$core$Int64* $tmp3291 = &param0->$rawValue;
*$tmp3291 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3292 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3292 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3293 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3293 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3294 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3294 = param4;
// line 7
org$frostlang$frostc$MethodDecl$Kind* $tmp3295 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
*$tmp3295 = param5;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
frost$core$String** $tmp3296 = (frost$core$String**) (param0->$data + 40);
*$tmp3296 = param6;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$FixedArray** $tmp3297 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
*$tmp3297 = param7;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$FixedArray** $tmp3298 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
*$tmp3298 = param8;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$ASTNode** $tmp3299 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
*$tmp3299 = param9;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param10));
org$frostlang$frostc$FixedArray** $tmp3300 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
*$tmp3300 = param10;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$parser$Token$Kind param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3301 = &param0->$rawValue;
*$tmp3301 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3302 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3302 = param2;
// line 7
org$frostlang$frostc$parser$Token$Kind* $tmp3303 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
*$tmp3303 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3304 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3304 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3305 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3305 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3306 = &param0->$rawValue;
*$tmp3306 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3307 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3307 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3308 = (frost$core$String**) (param0->$data + 16);
*$tmp3308 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3309 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3309 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$Bit$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$Bit param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$ASTNode* param6) {

// line 7
frost$core$Int64* $tmp3310 = &param0->$rawValue;
*$tmp3310 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3311 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3311 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3312 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3312 = param3;
// line 7
frost$core$Bit* $tmp3313 = (frost$core$Bit*) (param0->$data + 24);
*$tmp3313 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3314 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
*$tmp3314 = param5;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$ASTNode** $tmp3315 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
*$tmp3315 = param6;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Real64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$Real64 param3) {

// line 7
frost$core$Int64* $tmp3316 = &param0->$rawValue;
*$tmp3316 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3317 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3317 = param2;
// line 7
frost$core$Real64* $tmp3318 = (frost$core$Real64*) (param0->$data + 16);
*$tmp3318 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3) {

// line 7
frost$core$Int64* $tmp3319 = &param0->$rawValue;
*$tmp3319 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3320 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3320 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3321 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3321 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3322 = &param0->$rawValue;
*$tmp3322 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3323 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3323 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3324 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3324 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3325 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3325 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3326 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3326 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3327 = &param0->$rawValue;
*$tmp3327 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3328 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3328 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3329 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3329 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3330 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3330 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3331 = &param0->$rawValue;
*$tmp3331 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3332 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3332 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3333 = (frost$core$String**) (param0->$data + 16);
*$tmp3333 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3334 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3334 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$expression$Unary$Operator param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3335 = &param0->$rawValue;
*$tmp3335 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3336 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3336 = param2;
// line 7
org$frostlang$frostc$expression$Unary$Operator* $tmp3337 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 16);
*$tmp3337 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3338 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3338 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$Variable$Kind param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3339 = &param0->$rawValue;
*$tmp3339 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3340 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3340 = param2;
// line 7
org$frostlang$frostc$Variable$Kind* $tmp3341 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
*$tmp3341 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3342 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3342 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3343 = &param0->$rawValue;
*$tmp3343 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3344 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3344 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3345 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3345 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3346 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3346 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3347 = &param0->$rawValue;
*$tmp3347 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3348 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3348 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3349 = (frost$core$String**) (param0->$data + 16);
*$tmp3349 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3350 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3350 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3351 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3351 = param5;
return;

}

