#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "org/frostlang/frostc/ClassDecl/Kind.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/core/Real64.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionView.h"


static frost$core$String $s1;
org$frostlang$frostc$ASTNode$class_type org$frostlang$frostc$ASTNode$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$ASTNode$convert$R$frost$core$String, org$frostlang$frostc$ASTNode$cleanup, org$frostlang$frostc$ASTNode$position$R$org$frostlang$frostc$Position} };

typedef frost$collections$Iterator* (*$fn694)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn698)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn703)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn755)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn762)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn810)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn836)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn893)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn897)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn902)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn941)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn959)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn970)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn974)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn979)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1039)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1056)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn1094)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1098)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1103)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1136)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1162)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1173)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1213)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1217)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1222)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1249)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1253)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1258)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1314)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1318)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1323)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1358)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1394)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1425)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1429)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1434)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1483)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn1517)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1521)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1526)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1565)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1569)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1574)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1647)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1651)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1656)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1693)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1703)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1736)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1740)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1745)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1807)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2056)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2074)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2137)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2163)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2223)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2249)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2253)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2258)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2276)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2280)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2285)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2337)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2341)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2346)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 28, 5772502652536328142, NULL };
static frost$core$String $s531 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s536 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x6f\x73\x69\x74\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 103, -4613450259074448913, NULL };
static frost$core$String $s558 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s563 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s564 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s567 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s607 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static frost$core$String $s609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s614 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s615 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s631 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static frost$core$String $s657 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s659 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s664 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s668 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static frost$core$String $s709 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s712 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s732 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s733 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s735 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static frost$core$String $s737 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s739 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static frost$core$String $s741 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static frost$core$String $s758 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s766 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s793 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s794 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s796 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s807 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, -5998790560547262156, NULL };
static frost$core$String $s814 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s839 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s843 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s848 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s886 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s887 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s889 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s908 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s916 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static frost$core$String $s921 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static frost$core$String $s926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static frost$core$String $s937 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s938 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, -5998790560547262156, NULL };
static frost$core$String $s944 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s946 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s955 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s956 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, -5998790560547262156, NULL };
static frost$core$String $s962 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s964 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s966 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s985 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s988 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1013 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1014 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s1016 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static frost$core$String $s1018 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1020 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static frost$core$String $s1022 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static frost$core$String $s1042 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static frost$core$String $s1047 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1048 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1051 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1084 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1085 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s1088 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1090 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static frost$core$String $s1109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static frost$core$String $s1116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1169 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1206 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1207 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1228 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1264 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1297 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s1300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s1304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static frost$core$String $s1306 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static frost$core$String $s1310 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1329 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1354 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1362 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1388 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52\x5f\x47\x45\x4e\x45\x52\x49\x43\x53\x28", 20, -4089576957169252493, NULL };
static frost$core$String $s1390 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x29", 2, 16504, NULL };
static frost$core$String $s1418 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static frost$core$String $s1420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1443 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1452 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1453 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static frost$core$String $s1457 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1507 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1508 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s1511 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1513 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static frost$core$String $s1532 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1535 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1558 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static frost$core$String $s1560 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1580 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1590 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1591 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 117, 3362627311464111926, NULL };
static frost$core$String $s1593 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1595 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1640 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1641 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1643 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1662 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1670 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static frost$core$String $s1675 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static frost$core$String $s1689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1690 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, -5998790560547262156, NULL };
static frost$core$String $s1696 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1698 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1706 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1708 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1717 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1718 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1720 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1722 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1727 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1732 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1733 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 8545549524367827092, NULL };
static frost$core$String $s1751 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1754 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1783 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s1785 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s1789 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s1791 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s1795 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s1797 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s1801 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s1803 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s1810 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1812 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1816 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1824 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1829 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1830 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x29", 2, 14282, NULL };
static frost$core$String $s1849 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s1850 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s1861 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s1887 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1891 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1907 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1911 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1939 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1940 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1944 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static frost$core$String $s1946 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s1955 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1956 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1965 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1966 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1968 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static frost$core$String $s1994 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s1996 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2013 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2014 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s2016 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s2018 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2020 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static frost$core$String $s2022 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static frost$core$String $s2026 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s2027 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s2038 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s2043 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static frost$core$String $s2044 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static frost$core$String $s2059 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2061 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2077 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2079 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s2117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static frost$core$String $s2146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static frost$core$String $s2172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static frost$core$String $s2208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static frost$core$String $s2213 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static frost$core$String $s2218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static frost$core$String $s2241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static frost$core$String $s2243 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2272 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2291 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s2323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2324 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s2327 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2331 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static frost$core$String $s2333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s2352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s2355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x41\x53\x54\x4e\x6f\x64\x65\x3a\x20", 21, -8877512154781713630, NULL };
static frost$core$String $s2371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2376 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 90, -6340975878994496307, NULL };

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
// line 90
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
// line 92
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
// line 95
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
// line 98
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
// line 101
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
// line 104
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
org$frostlang$frostc$parser$Token$Kind* $tmp55 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp56 = *$tmp55;
org$frostlang$frostc$ASTNode** $tmp57 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp58 = *$tmp57;
// line 107
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
// line 110
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
// line 113
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
// line 116
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
// line 119
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
// line 122
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
// line 125
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
// line 128
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
// line 131
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
// line 134
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
// line 137
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
// line 140
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
// line 143
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
// line 146
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
// line 149
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
// line 152
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
// line 155
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
// line 158
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
// line 161
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
// line 164
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
// line 167
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
// line 170
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
// line 173
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
// line 176
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
// line 179
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
// line 182
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
// line 185
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
// line 188
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
// line 191
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
// line 194
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
org$frostlang$frostc$parser$Token$Kind* $tmp371 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp372 = *$tmp371;
org$frostlang$frostc$ASTNode** $tmp373 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp374 = *$tmp373;
// line 197
org$frostlang$frostc$Position $tmp375 = *(&local34);
return $tmp375;
block73:;
frost$core$Int64 $tmp376 = (frost$core$Int64) {36};
frost$core$Bit $tmp377 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp376);
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp379 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp380 = *$tmp379;
*(&local35) = $tmp380;
org$frostlang$frostc$ASTNode** $tmp381 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp382 = *$tmp381;
frost$core$Bit* $tmp383 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp384 = *$tmp383;
org$frostlang$frostc$ASTNode** $tmp385 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
org$frostlang$frostc$ASTNode* $tmp386 = *$tmp385;
org$frostlang$frostc$ASTNode** $tmp387 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp388 = *$tmp387;
// line 200
org$frostlang$frostc$Position $tmp389 = *(&local35);
return $tmp389;
block75:;
frost$core$Int64 $tmp390 = (frost$core$Int64) {37};
frost$core$Bit $tmp391 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp390);
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block76; else goto block77;
block76:;
org$frostlang$frostc$Position* $tmp393 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp394 = *$tmp393;
*(&local36) = $tmp394;
frost$core$Real64* $tmp395 = (frost$core$Real64*) (param0->$data + 16);
frost$core$Real64 $tmp396 = *$tmp395;
// line 203
org$frostlang$frostc$Position $tmp397 = *(&local36);
return $tmp397;
block77:;
frost$core$Int64 $tmp398 = (frost$core$Int64) {38};
frost$core$Bit $tmp399 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp398);
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block78; else goto block79;
block78:;
org$frostlang$frostc$Position* $tmp401 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp402 = *$tmp401;
*(&local37) = $tmp402;
frost$core$String** $tmp403 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp404 = *$tmp403;
// line 206
org$frostlang$frostc$Position $tmp405 = *(&local37);
return $tmp405;
block79:;
frost$core$Int64 $tmp406 = (frost$core$Int64) {39};
frost$core$Bit $tmp407 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp406);
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block80; else goto block81;
block80:;
org$frostlang$frostc$Position* $tmp409 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp410 = *$tmp409;
*(&local38) = $tmp410;
org$frostlang$frostc$ASTNode** $tmp411 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp412 = *$tmp411;
// line 209
org$frostlang$frostc$Position $tmp413 = *(&local38);
return $tmp413;
block81:;
frost$core$Int64 $tmp414 = (frost$core$Int64) {40};
frost$core$Bit $tmp415 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp414);
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block82; else goto block83;
block82:;
org$frostlang$frostc$Position* $tmp417 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp418 = *$tmp417;
*(&local39) = $tmp418;
// line 212
org$frostlang$frostc$Position $tmp419 = *(&local39);
return $tmp419;
block83:;
frost$core$Int64 $tmp420 = (frost$core$Int64) {41};
frost$core$Bit $tmp421 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp420);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block84; else goto block85;
block84:;
org$frostlang$frostc$Position* $tmp423 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp424 = *$tmp423;
*(&local40) = $tmp424;
frost$core$String** $tmp425 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp426 = *$tmp425;
// line 215
org$frostlang$frostc$Position $tmp427 = *(&local40);
return $tmp427;
block85:;
frost$core$Int64 $tmp428 = (frost$core$Int64) {42};
frost$core$Bit $tmp429 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp428);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block86; else goto block87;
block86:;
org$frostlang$frostc$Position* $tmp431 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp432 = *$tmp431;
*(&local41) = $tmp432;
// line 218
org$frostlang$frostc$Position $tmp433 = *(&local41);
return $tmp433;
block87:;
frost$core$Int64 $tmp434 = (frost$core$Int64) {43};
frost$core$Bit $tmp435 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp434);
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block88; else goto block89;
block88:;
org$frostlang$frostc$Position* $tmp437 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp438 = *$tmp437;
*(&local42) = $tmp438;
org$frostlang$frostc$FixedArray** $tmp439 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp440 = *$tmp439;
// line 221
org$frostlang$frostc$Position $tmp441 = *(&local42);
return $tmp441;
block89:;
frost$core$Int64 $tmp442 = (frost$core$Int64) {44};
frost$core$Bit $tmp443 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp442);
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block90; else goto block91;
block90:;
org$frostlang$frostc$Position* $tmp445 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp446 = *$tmp445;
*(&local43) = $tmp446;
org$frostlang$frostc$FixedArray** $tmp447 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp448 = *$tmp447;
// line 224
org$frostlang$frostc$Position $tmp449 = *(&local43);
return $tmp449;
block91:;
frost$core$Int64 $tmp450 = (frost$core$Int64) {45};
frost$core$Bit $tmp451 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp450);
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block92; else goto block93;
block92:;
org$frostlang$frostc$Position* $tmp453 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp454 = *$tmp453;
*(&local44) = $tmp454;
frost$core$String** $tmp455 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp456 = *$tmp455;
// line 227
org$frostlang$frostc$Position $tmp457 = *(&local44);
return $tmp457;
block93:;
frost$core$Int64 $tmp458 = (frost$core$Int64) {47};
frost$core$Bit $tmp459 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp458);
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block94; else goto block95;
block94:;
org$frostlang$frostc$Position* $tmp461 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp462 = *$tmp461;
*(&local45) = $tmp462;
frost$core$String** $tmp463 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp464 = *$tmp463;
org$frostlang$frostc$ASTNode** $tmp465 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp466 = *$tmp465;
// line 230
org$frostlang$frostc$Position $tmp467 = *(&local45);
return $tmp467;
block95:;
frost$core$Int64 $tmp468 = (frost$core$Int64) {46};
frost$core$Bit $tmp469 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp468);
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block96; else goto block97;
block96:;
org$frostlang$frostc$Position* $tmp471 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp472 = *$tmp471;
*(&local46) = $tmp472;
org$frostlang$frostc$FixedArray** $tmp473 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp474 = *$tmp473;
org$frostlang$frostc$ASTNode** $tmp475 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp476 = *$tmp475;
// line 233
org$frostlang$frostc$Position $tmp477 = *(&local46);
return $tmp477;
block97:;
frost$core$Int64 $tmp478 = (frost$core$Int64) {48};
frost$core$Bit $tmp479 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp478);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp481 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp482 = *$tmp481;
*(&local47) = $tmp482;
org$frostlang$frostc$FixedArray** $tmp483 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp484 = *$tmp483;
org$frostlang$frostc$ASTNode** $tmp485 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp486 = *$tmp485;
// line 236
org$frostlang$frostc$Position $tmp487 = *(&local47);
return $tmp487;
block99:;
frost$core$Int64 $tmp488 = (frost$core$Int64) {49};
frost$core$Bit $tmp489 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp488);
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block100; else goto block101;
block100:;
org$frostlang$frostc$Position* $tmp491 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp492 = *$tmp491;
*(&local48) = $tmp492;
frost$core$String** $tmp493 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp494 = *$tmp493;
// line 239
org$frostlang$frostc$Position $tmp495 = *(&local48);
return $tmp495;
block101:;
frost$core$Int64 $tmp496 = (frost$core$Int64) {50};
frost$core$Bit $tmp497 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp496);
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block102; else goto block103;
block102:;
org$frostlang$frostc$Position* $tmp499 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp500 = *$tmp499;
*(&local49) = $tmp500;
org$frostlang$frostc$Variable$Kind* $tmp501 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp502 = *$tmp501;
org$frostlang$frostc$FixedArray** $tmp503 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp504 = *$tmp503;
// line 242
org$frostlang$frostc$Position $tmp505 = *(&local49);
return $tmp505;
block103:;
frost$core$Int64 $tmp506 = (frost$core$Int64) {51};
frost$core$Bit $tmp507 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp506);
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block104; else goto block105;
block104:;
org$frostlang$frostc$Position* $tmp509 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp510 = *$tmp509;
*(&local50) = $tmp510;
org$frostlang$frostc$FixedArray** $tmp511 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp512 = *$tmp511;
org$frostlang$frostc$FixedArray** $tmp513 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp514 = *$tmp513;
// line 245
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
frost$core$String** $tmp521 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp522 = *$tmp521;
org$frostlang$frostc$ASTNode** $tmp523 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp524 = *$tmp523;
org$frostlang$frostc$FixedArray** $tmp525 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp526 = *$tmp525;
// line 248
org$frostlang$frostc$Position $tmp527 = *(&local51);
return $tmp527;
block107:;
// line 251
frost$core$Bit $tmp528 = frost$core$Bit$init$builtin_bit(false);
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block108; else goto block109;
block109:;
frost$core$Int64 $tmp530 = (frost$core$Int64) {251};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s531, $tmp530);
abort(); // unreachable
block108:;
goto block1;
block1:;
frost$core$Bit $tmp532 = frost$core$Bit$init$builtin_bit(false);
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block110; else goto block111;
block111:;
frost$core$Int64 $tmp534 = (frost$core$Int64) {89};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s535, $tmp534, &$s536);
abort(); // unreachable
block110:;
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$ASTNode$convert$R$frost$core$String(org$frostlang$frostc$ASTNode* param0) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
org$frostlang$frostc$parser$Token$Kind local7;
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
org$frostlang$frostc$parser$Token$Kind local101;
org$frostlang$frostc$ASTNode* local102 = NULL;
org$frostlang$frostc$ASTNode* local103 = NULL;
frost$core$Bit local104;
org$frostlang$frostc$ASTNode* local105 = NULL;
org$frostlang$frostc$ASTNode* local106 = NULL;
frost$core$MutableString* local107 = NULL;
frost$core$Real64 local108;
frost$core$String* local109 = NULL;
org$frostlang$frostc$ASTNode* local110 = NULL;
frost$core$String* local111 = NULL;
org$frostlang$frostc$FixedArray* local112 = NULL;
org$frostlang$frostc$FixedArray* local113 = NULL;
frost$core$String* local114 = NULL;
frost$core$String* local115 = NULL;
org$frostlang$frostc$ASTNode* local116 = NULL;
org$frostlang$frostc$FixedArray* local117 = NULL;
org$frostlang$frostc$ASTNode* local118 = NULL;
org$frostlang$frostc$FixedArray* local119 = NULL;
org$frostlang$frostc$ASTNode* local120 = NULL;
frost$core$String* local121 = NULL;
org$frostlang$frostc$Variable$Kind local122;
org$frostlang$frostc$FixedArray* local123 = NULL;
frost$core$MutableString* local124 = NULL;
org$frostlang$frostc$FixedArray* local125 = NULL;
org$frostlang$frostc$FixedArray* local126 = NULL;
frost$core$MutableString* local127 = NULL;
frost$core$String* local128 = NULL;
org$frostlang$frostc$ASTNode* local129 = NULL;
org$frostlang$frostc$ASTNode* local130 = NULL;
frost$core$String* local131 = NULL;
org$frostlang$frostc$ASTNode* local132 = NULL;
org$frostlang$frostc$FixedArray* local133 = NULL;
frost$core$MutableString* local134 = NULL;
org$frostlang$frostc$ASTNode* local135 = NULL;
// line 258
frost$core$Int64* $tmp537 = &param0->$rawValue;
frost$core$Int64 $tmp538 = *$tmp537;
frost$core$Int64 $tmp539 = (frost$core$Int64) {0};
frost$core$Bit $tmp540 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp539);
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp542 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp543 = *$tmp542;
frost$core$String** $tmp544 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp545 = *$tmp544;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
frost$core$String* $tmp546 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
*(&local0) = $tmp545;
frost$core$String** $tmp547 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp548 = *$tmp547;
org$frostlang$frostc$ASTNode** $tmp549 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp550 = *$tmp549;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
org$frostlang$frostc$ASTNode* $tmp551 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
*(&local1) = $tmp550;
// line 260
org$frostlang$frostc$ASTNode* $tmp552 = *(&local1);
frost$core$Bit $tmp553 = frost$core$Bit$init$builtin_bit($tmp552 != NULL);
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block4; else goto block5;
block4:;
// line 261
frost$core$String* $tmp555 = *(&local0);
frost$core$String* $tmp556 = frost$core$String$convert$R$frost$core$String($tmp555);
frost$core$String* $tmp557 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp556, &$s558);
org$frostlang$frostc$ASTNode* $tmp559 = *(&local1);
frost$core$Bit $tmp560 = frost$core$Bit$init$builtin_bit($tmp559 != NULL);
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp562 = (frost$core$Int64) {261};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s563, $tmp562, &$s564);
abort(); // unreachable
block6:;
frost$core$String* $tmp565 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp557, ((frost$core$Object*) $tmp559));
frost$core$String* $tmp566 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp565, &$s567);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
// unreffing REF($49:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
// unreffing REF($48:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
// unreffing REF($38:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
// unreffing REF($37:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp568 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
// unreffing expr
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp569 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return $tmp566;
block5:;
// line 263
frost$core$String* $tmp570 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
org$frostlang$frostc$ASTNode* $tmp571 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
// unreffing expr
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp572 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return $tmp570;
block3:;
frost$core$Int64 $tmp573 = (frost$core$Int64) {1};
frost$core$Bit $tmp574 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp573);
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp576 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp577 = *$tmp576;
org$frostlang$frostc$FixedArray** $tmp578 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp579 = *$tmp578;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
org$frostlang$frostc$FixedArray* $tmp580 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
*(&local2) = $tmp579;
// line 266
org$frostlang$frostc$FixedArray* $tmp581 = *(&local2);
frost$core$String* $tmp582 = org$frostlang$frostc$FixedArray$convert$R$frost$core$String($tmp581);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
// unreffing REF($108:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp583 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
// unreffing elements
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp582;
block9:;
frost$core$Int64 $tmp584 = (frost$core$Int64) {2};
frost$core$Bit $tmp585 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp584);
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp587 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp588 = *$tmp587;
org$frostlang$frostc$ASTNode** $tmp589 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp590 = *$tmp589;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
org$frostlang$frostc$ASTNode* $tmp591 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local3) = $tmp590;
org$frostlang$frostc$ASTNode** $tmp592 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp593 = *$tmp592;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
org$frostlang$frostc$ASTNode* $tmp594 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
*(&local4) = $tmp593;
// line 269
org$frostlang$frostc$ASTNode* $tmp595 = *(&local4);
frost$core$Bit $tmp596 = frost$core$Bit$init$builtin_bit($tmp595 == NULL);
bool $tmp597 = $tmp596.value;
if ($tmp597) goto block12; else goto block13;
block12:;
// line 270
org$frostlang$frostc$ASTNode* $tmp598 = *(&local3);
frost$core$String* $tmp599 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s600, ((frost$core$Object*) $tmp598));
frost$core$String* $tmp601 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp599, &$s602);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
// unreffing REF($154:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
// unreffing REF($153:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp603 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
// unreffing msg
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp604 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
// unreffing test
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp601;
block13:;
// line 272
org$frostlang$frostc$ASTNode* $tmp605 = *(&local3);
frost$core$String* $tmp606 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s607, ((frost$core$Object*) $tmp605));
frost$core$String* $tmp608 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp606, &$s609);
org$frostlang$frostc$ASTNode* $tmp610 = *(&local4);
frost$core$Bit $tmp611 = frost$core$Bit$init$builtin_bit($tmp610 != NULL);
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp613 = (frost$core$Int64) {272};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s614, $tmp613, &$s615);
abort(); // unreachable
block14:;
frost$core$String* $tmp616 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp608, ((frost$core$Object*) $tmp610));
frost$core$String* $tmp617 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp616, &$s618);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
// unreffing REF($189:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
// unreffing REF($188:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
// unreffing REF($178:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
// unreffing REF($177:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp619 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
// unreffing msg
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp620 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
// unreffing test
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp617;
block11:;
frost$core$Int64 $tmp621 = (frost$core$Int64) {3};
frost$core$Bit $tmp622 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp621);
bool $tmp623 = $tmp622.value;
if ($tmp623) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp624 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp625 = *$tmp624;
org$frostlang$frostc$ASTNode** $tmp626 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp627 = *$tmp626;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
org$frostlang$frostc$ASTNode* $tmp628 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
*(&local5) = $tmp627;
// line 275
org$frostlang$frostc$ASTNode* $tmp629 = *(&local5);
frost$core$String* $tmp630 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s631, ((frost$core$Object*) $tmp629));
frost$core$String* $tmp632 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp630, &$s633);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
// unreffing REF($234:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
// unreffing REF($233:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp634 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
// unreffing expr
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp632;
block17:;
frost$core$Int64 $tmp635 = (frost$core$Int64) {4};
frost$core$Bit $tmp636 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp635);
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp638 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp639 = *$tmp638;
// line 278
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s640));
return &$s641;
block19:;
frost$core$Int64 $tmp642 = (frost$core$Int64) {5};
frost$core$Bit $tmp643 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp642);
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp645 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp646 = *$tmp645;
org$frostlang$frostc$ASTNode** $tmp647 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp648 = *$tmp647;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
org$frostlang$frostc$ASTNode* $tmp649 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local6) = $tmp648;
org$frostlang$frostc$parser$Token$Kind* $tmp650 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp651 = *$tmp650;
*(&local7) = $tmp651;
org$frostlang$frostc$ASTNode** $tmp652 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp653 = *$tmp652;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
org$frostlang$frostc$ASTNode* $tmp654 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
*(&local8) = $tmp653;
// line 281
org$frostlang$frostc$ASTNode* $tmp655 = *(&local6);
frost$core$String* $tmp656 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s657, ((frost$core$Object*) $tmp655));
frost$core$String* $tmp658 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp656, &$s659);
org$frostlang$frostc$parser$Token$Kind $tmp660 = *(&local7);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp661;
$tmp661 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp661->value = $tmp660;
frost$core$String* $tmp662 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp658, ((frost$core$Object*) $tmp661));
frost$core$String* $tmp663 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp662, &$s664);
org$frostlang$frostc$ASTNode* $tmp665 = *(&local8);
frost$core$String* $tmp666 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp663, ((frost$core$Object*) $tmp665));
frost$core$String* $tmp667 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp666, &$s668);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
// unreffing REF($298:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
// unreffing REF($297:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
// unreffing REF($294:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// unreffing REF($293:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
// unreffing REF($292:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
// unreffing REF($290:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
// unreffing REF($289:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp669 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
// unreffing right
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp670 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
// unreffing left
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp667;
block21:;
frost$core$Int64 $tmp671 = (frost$core$Int64) {6};
frost$core$Bit $tmp672 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp671);
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp674 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp675 = *$tmp674;
frost$core$Bit* $tmp676 = (frost$core$Bit*) (param0->$data + 16);
frost$core$Bit $tmp677 = *$tmp676;
*(&local9) = $tmp677;
// line 284
frost$core$Bit $tmp678 = *(&local9);
frost$core$String* $tmp679 = frost$core$Bit$convert$R$frost$core$String($tmp678);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
// unreffing REF($344:frost.core.String)
return $tmp679;
block23:;
frost$core$Int64 $tmp680 = (frost$core$Int64) {7};
frost$core$Bit $tmp681 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp680);
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp683 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp684 = *$tmp683;
org$frostlang$frostc$FixedArray** $tmp685 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp686 = *$tmp685;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
org$frostlang$frostc$FixedArray* $tmp687 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
*(&local10) = $tmp686;
// line 287
frost$core$MutableString* $tmp688 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp688, &$s689);
*(&local11) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
frost$core$MutableString* $tmp690 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
*(&local11) = $tmp688;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
// unreffing REF($367:frost.core.MutableString)
// line 288
org$frostlang$frostc$FixedArray* $tmp691 = *(&local10);
ITable* $tmp692 = ((frost$collections$Iterable*) $tmp691)->$class->itable;
while ($tmp692->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp692 = $tmp692->next;
}
$fn694 $tmp693 = $tmp692->methods[0];
frost$collections$Iterator* $tmp695 = $tmp693(((frost$collections$Iterable*) $tmp691));
goto block26;
block26:;
ITable* $tmp696 = $tmp695->$class->itable;
while ($tmp696->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp696 = $tmp696->next;
}
$fn698 $tmp697 = $tmp696->methods[0];
frost$core$Bit $tmp699 = $tmp697($tmp695);
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block28; else goto block27;
block27:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp701 = $tmp695->$class->itable;
while ($tmp701->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp701 = $tmp701->next;
}
$fn703 $tmp702 = $tmp701->methods[1];
frost$core$Object* $tmp704 = $tmp702($tmp695);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp704)));
org$frostlang$frostc$ASTNode* $tmp705 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp704);
// line 289
frost$core$MutableString* $tmp706 = *(&local11);
org$frostlang$frostc$ASTNode* $tmp707 = *(&local12);
frost$core$String* $tmp708 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp707), &$s709);
frost$core$MutableString$append$frost$core$String($tmp706, $tmp708);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
// unreffing REF($407:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp704);
// unreffing REF($395:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp710 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
// unreffing s
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
// unreffing REF($384:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 291
frost$core$MutableString* $tmp711 = *(&local11);
frost$core$MutableString$append$frost$core$String($tmp711, &$s712);
// line 292
frost$core$MutableString* $tmp713 = *(&local11);
frost$core$String* $tmp714 = frost$core$MutableString$finish$R$frost$core$String($tmp713);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
// unreffing REF($429:frost.core.String)
frost$core$MutableString* $tmp715 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
// unreffing result
*(&local11) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp716 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
// unreffing statements
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp714;
block25:;
frost$core$Int64 $tmp717 = (frost$core$Int64) {8};
frost$core$Bit $tmp718 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp717);
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Position* $tmp720 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp721 = *$tmp720;
frost$core$String** $tmp722 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp723 = *$tmp722;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
frost$core$String* $tmp724 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local13) = $tmp723;
// line 295
frost$core$String* $tmp725 = *(&local13);
frost$core$Bit $tmp726 = frost$core$Bit$init$builtin_bit($tmp725 != NULL);
bool $tmp727 = $tmp726.value;
if ($tmp727) goto block31; else goto block32;
block31:;
// line 296
frost$core$String* $tmp728 = *(&local13);
frost$core$Bit $tmp729 = frost$core$Bit$init$builtin_bit($tmp728 != NULL);
bool $tmp730 = $tmp729.value;
if ($tmp730) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp731 = (frost$core$Int64) {296};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s732, $tmp731, &$s733);
abort(); // unreachable
block33:;
frost$core$String* $tmp734 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s735, $tmp728);
frost$core$String* $tmp736 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp734, &$s737);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
// unreffing REF($478:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
// unreffing REF($477:frost.core.String)
frost$core$String* $tmp738 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
// unreffing label
*(&local13) = ((frost$core$String*) NULL);
return $tmp736;
block32:;
// line 298
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s739));
frost$core$String* $tmp740 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
// unreffing label
*(&local13) = ((frost$core$String*) NULL);
return &$s741;
block30:;
frost$core$Int64 $tmp742 = (frost$core$Int64) {9};
frost$core$Bit $tmp743 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp742);
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block35; else goto block36;
block35:;
org$frostlang$frostc$Position* $tmp745 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp746 = *$tmp745;
org$frostlang$frostc$ASTNode** $tmp747 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp748 = *$tmp747;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
org$frostlang$frostc$ASTNode* $tmp749 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local14) = $tmp748;
org$frostlang$frostc$FixedArray** $tmp750 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp751 = *$tmp750;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
org$frostlang$frostc$FixedArray* $tmp752 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local15) = $tmp751;
// line 301
org$frostlang$frostc$ASTNode* $tmp753 = *(&local14);
$fn755 $tmp754 = ($fn755) $tmp753->$class->vtable[0];
frost$core$String* $tmp756 = $tmp754($tmp753);
frost$core$String* $tmp757 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp756, &$s758);
org$frostlang$frostc$FixedArray* $tmp759 = *(&local15);
ITable* $tmp760 = ((frost$collections$CollectionView*) $tmp759)->$class->itable;
while ($tmp760->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp760 = $tmp760->next;
}
$fn762 $tmp761 = $tmp760->methods[1];
frost$core$String* $tmp763 = $tmp761(((frost$collections$CollectionView*) $tmp759));
frost$core$String* $tmp764 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp757, $tmp763);
frost$core$String* $tmp765 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp764, &$s766);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
// unreffing REF($536:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
// unreffing REF($535:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
// unreffing REF($534:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
// unreffing REF($530:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
// unreffing REF($529:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp767 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
// unreffing args
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp768 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
// unreffing target
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp765;
block36:;
frost$core$Int64 $tmp769 = (frost$core$Int64) {10};
frost$core$Bit $tmp770 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp769);
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Position* $tmp772 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp773 = *$tmp772;
org$frostlang$frostc$ASTNode** $tmp774 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp775 = *$tmp774;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
org$frostlang$frostc$ASTNode* $tmp776 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
*(&local16) = $tmp775;
frost$core$String** $tmp777 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp778 = *$tmp777;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$core$String* $tmp779 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local17) = $tmp778;
org$frostlang$frostc$FixedArray** $tmp780 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp781 = *$tmp780;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
org$frostlang$frostc$FixedArray* $tmp782 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
*(&local18) = $tmp781;
// line 304
frost$core$MutableString* $tmp783 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp783);
*(&local19) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
frost$core$MutableString* $tmp784 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
*(&local19) = $tmp783;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
// unreffing REF($599:frost.core.MutableString)
// line 305
org$frostlang$frostc$ASTNode* $tmp785 = *(&local16);
frost$core$Bit $tmp786 = frost$core$Bit$init$builtin_bit($tmp785 != NULL);
bool $tmp787 = $tmp786.value;
if ($tmp787) goto block39; else goto block40;
block39:;
// line 306
frost$core$MutableString* $tmp788 = *(&local19);
org$frostlang$frostc$ASTNode* $tmp789 = *(&local16);
frost$core$Bit $tmp790 = frost$core$Bit$init$builtin_bit($tmp789 != NULL);
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp792 = (frost$core$Int64) {306};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s793, $tmp792, &$s794);
abort(); // unreachable
block41:;
frost$core$String* $tmp795 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp789), &$s796);
frost$core$MutableString$append$frost$core$String($tmp788, $tmp795);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
// unreffing REF($628:frost.core.String)
goto block40;
block40:;
// line 308
frost$core$MutableString* $tmp797 = *(&local19);
frost$core$String* $tmp798 = *(&local17);
frost$core$String* $tmp799 = frost$core$String$convert$R$frost$core$String($tmp798);
frost$core$String* $tmp800 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp799, &$s801);
org$frostlang$frostc$FixedArray* $tmp802 = *(&local18);
frost$core$Bit $tmp803 = frost$core$Bit$init$builtin_bit($tmp802 != NULL);
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp805 = (frost$core$Int64) {308};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s806, $tmp805, &$s807);
abort(); // unreachable
block43:;
ITable* $tmp808 = ((frost$collections$CollectionView*) $tmp802)->$class->itable;
while ($tmp808->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp808 = $tmp808->next;
}
$fn810 $tmp809 = $tmp808->methods[1];
frost$core$String* $tmp811 = $tmp809(((frost$collections$CollectionView*) $tmp802));
frost$core$String* $tmp812 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp800, $tmp811);
frost$core$String* $tmp813 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp812, &$s814);
frost$core$MutableString$append$frost$core$String($tmp797, $tmp813);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
// unreffing REF($651:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
// unreffing REF($650:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
// unreffing REF($649:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
// unreffing REF($638:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
// unreffing REF($637:frost.core.String)
// line 309
frost$core$MutableString* $tmp815 = *(&local19);
frost$core$String* $tmp816 = frost$core$MutableString$finish$R$frost$core$String($tmp815);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
// unreffing REF($670:frost.core.String)
frost$core$MutableString* $tmp817 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
// unreffing result
*(&local19) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp818 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
// unreffing fields
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp819 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
// unreffing name
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp820 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
// unreffing dc
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp816;
block38:;
frost$core$Int64 $tmp821 = (frost$core$Int64) {11};
frost$core$Bit $tmp822 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp821);
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block45; else goto block46;
block45:;
org$frostlang$frostc$Position* $tmp824 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp825 = *$tmp824;
org$frostlang$frostc$ASTNode** $tmp826 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp827 = *$tmp826;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
org$frostlang$frostc$ASTNode* $tmp828 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
*(&local20) = $tmp827;
org$frostlang$frostc$ChoiceCase** $tmp829 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp830 = *$tmp829;
*(&local21) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
org$frostlang$frostc$ChoiceCase* $tmp831 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
*(&local21) = $tmp830;
frost$core$Int64* $tmp832 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp833 = *$tmp832;
*(&local22) = $tmp833;
// line 312
org$frostlang$frostc$ASTNode* $tmp834 = *(&local20);
$fn836 $tmp835 = ($fn836) $tmp834->$class->vtable[0];
frost$core$String* $tmp837 = $tmp835($tmp834);
frost$core$String* $tmp838 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp837, &$s839);
org$frostlang$frostc$ChoiceCase* $tmp840 = *(&local21);
frost$core$String* $tmp841 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp838, ((frost$core$Object*) $tmp840));
frost$core$String* $tmp842 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp841, &$s843);
frost$core$Int64 $tmp844 = *(&local22);
frost$core$Int64$wrapper* $tmp845;
$tmp845 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp845->value = $tmp844;
frost$core$String* $tmp846 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp842, ((frost$core$Object*) $tmp845));
frost$core$String* $tmp847 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp846, &$s848);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
// unreffing REF($736:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
// unreffing REF($735:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
// unreffing REF($734:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
// unreffing REF($732:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
// unreffing REF($731:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
// unreffing REF($728:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
// unreffing REF($727:frost.core.String)
org$frostlang$frostc$ChoiceCase* $tmp849 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
// unreffing ce
*(&local21) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp850 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
// unreffing base
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp847;
block46:;
frost$core$Int64 $tmp851 = (frost$core$Int64) {12};
frost$core$Bit $tmp852 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp851);
bool $tmp853 = $tmp852.value;
if ($tmp853) goto block47; else goto block48;
block47:;
org$frostlang$frostc$Position* $tmp854 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp855 = *$tmp854;
org$frostlang$frostc$ASTNode** $tmp856 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp857 = *$tmp856;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
org$frostlang$frostc$ASTNode* $tmp858 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
*(&local23) = $tmp857;
org$frostlang$frostc$FixedArray** $tmp859 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp860 = *$tmp859;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
org$frostlang$frostc$FixedArray* $tmp861 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
*(&local24) = $tmp860;
org$frostlang$frostc$ClassDecl$Kind* $tmp862 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp863 = *$tmp862;
*(&local25) = $tmp863;
frost$core$String** $tmp864 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp865 = *$tmp864;
*(&local26) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
frost$core$String* $tmp866 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
*(&local26) = $tmp865;
org$frostlang$frostc$FixedArray** $tmp867 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp868 = *$tmp867;
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
org$frostlang$frostc$FixedArray* $tmp869 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
*(&local27) = $tmp868;
org$frostlang$frostc$FixedArray** $tmp870 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp871 = *$tmp870;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
org$frostlang$frostc$FixedArray* $tmp872 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local28) = $tmp871;
org$frostlang$frostc$FixedArray** $tmp873 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp874 = *$tmp873;
*(&local29) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
org$frostlang$frostc$FixedArray* $tmp875 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
*(&local29) = $tmp874;
// line 315
frost$core$MutableString* $tmp876 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp876);
*(&local30) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
frost$core$MutableString* $tmp877 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
*(&local30) = $tmp876;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
// unreffing REF($835:frost.core.MutableString)
// line 316
org$frostlang$frostc$ASTNode* $tmp878 = *(&local23);
frost$core$Bit $tmp879 = frost$core$Bit$init$builtin_bit($tmp878 != NULL);
bool $tmp880 = $tmp879.value;
if ($tmp880) goto block49; else goto block50;
block49:;
// line 317
frost$core$MutableString* $tmp881 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp882 = *(&local23);
frost$core$Bit $tmp883 = frost$core$Bit$init$builtin_bit($tmp882 != NULL);
bool $tmp884 = $tmp883.value;
if ($tmp884) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp885 = (frost$core$Int64) {317};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s886, $tmp885, &$s887);
abort(); // unreachable
block51:;
frost$core$String* $tmp888 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp882), &$s889);
frost$core$MutableString$append$frost$core$String($tmp881, $tmp888);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
// unreffing REF($864:frost.core.String)
goto block50;
block50:;
// line 319
org$frostlang$frostc$FixedArray* $tmp890 = *(&local24);
ITable* $tmp891 = ((frost$collections$Iterable*) $tmp890)->$class->itable;
while ($tmp891->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp891 = $tmp891->next;
}
$fn893 $tmp892 = $tmp891->methods[0];
frost$collections$Iterator* $tmp894 = $tmp892(((frost$collections$Iterable*) $tmp890));
goto block53;
block53:;
ITable* $tmp895 = $tmp894->$class->itable;
while ($tmp895->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp895 = $tmp895->next;
}
$fn897 $tmp896 = $tmp895->methods[0];
frost$core$Bit $tmp898 = $tmp896($tmp894);
bool $tmp899 = $tmp898.value;
if ($tmp899) goto block55; else goto block54;
block54:;
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp900 = $tmp894->$class->itable;
while ($tmp900->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp900 = $tmp900->next;
}
$fn902 $tmp901 = $tmp900->methods[1];
frost$core$Object* $tmp903 = $tmp901($tmp894);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp903)));
org$frostlang$frostc$ASTNode* $tmp904 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
*(&local31) = ((org$frostlang$frostc$ASTNode*) $tmp903);
// line 320
frost$core$MutableString* $tmp905 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp906 = *(&local31);
frost$core$String* $tmp907 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp906), &$s908);
frost$core$MutableString$append$frost$core$String($tmp905, $tmp907);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
// unreffing REF($898:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp903);
// unreffing REF($886:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp909 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
// unreffing a
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block53;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
// unreffing REF($875:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 322
org$frostlang$frostc$ClassDecl$Kind $tmp910 = *(&local25);
frost$core$Int64 $tmp911 = $tmp910.$rawValue;
frost$core$Int64 $tmp912 = (frost$core$Int64) {0};
frost$core$Bit $tmp913 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp911, $tmp912);
bool $tmp914 = $tmp913.value;
if ($tmp914) goto block57; else goto block58;
block57:;
// line 323
frost$core$MutableString* $tmp915 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp915, &$s916);
goto block56;
block58:;
frost$core$Int64 $tmp917 = (frost$core$Int64) {1};
frost$core$Bit $tmp918 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp911, $tmp917);
bool $tmp919 = $tmp918.value;
if ($tmp919) goto block59; else goto block60;
block59:;
// line 324
frost$core$MutableString* $tmp920 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp920, &$s921);
goto block56;
block60:;
frost$core$Int64 $tmp922 = (frost$core$Int64) {2};
frost$core$Bit $tmp923 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp911, $tmp922);
bool $tmp924 = $tmp923.value;
if ($tmp924) goto block61; else goto block56;
block61:;
// line 325
frost$core$MutableString* $tmp925 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp925, &$s926);
goto block56;
block56:;
// line 327
frost$core$MutableString* $tmp927 = *(&local30);
frost$core$String* $tmp928 = *(&local26);
frost$core$MutableString$append$frost$core$String($tmp927, $tmp928);
// line 328
org$frostlang$frostc$FixedArray* $tmp929 = *(&local27);
frost$core$Bit $tmp930 = frost$core$Bit$init$builtin_bit($tmp929 != NULL);
bool $tmp931 = $tmp930.value;
if ($tmp931) goto block62; else goto block63;
block62:;
// line 329
frost$core$MutableString* $tmp932 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp933 = *(&local27);
frost$core$Bit $tmp934 = frost$core$Bit$init$builtin_bit($tmp933 != NULL);
bool $tmp935 = $tmp934.value;
if ($tmp935) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp936 = (frost$core$Int64) {329};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s937, $tmp936, &$s938);
abort(); // unreachable
block64:;
ITable* $tmp939 = ((frost$collections$CollectionView*) $tmp933)->$class->itable;
while ($tmp939->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp939 = $tmp939->next;
}
$fn941 $tmp940 = $tmp939->methods[1];
frost$core$String* $tmp942 = $tmp940(((frost$collections$CollectionView*) $tmp933));
frost$core$String* $tmp943 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s944, $tmp942);
frost$core$String* $tmp945 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp943, &$s946);
frost$core$MutableString$append$frost$core$String($tmp932, $tmp945);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
// unreffing REF($966:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
// unreffing REF($965:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
// unreffing REF($964:frost.core.String)
goto block63;
block63:;
// line 331
org$frostlang$frostc$FixedArray* $tmp947 = *(&local28);
frost$core$Bit $tmp948 = frost$core$Bit$init$builtin_bit($tmp947 != NULL);
bool $tmp949 = $tmp948.value;
if ($tmp949) goto block66; else goto block67;
block66:;
// line 332
frost$core$MutableString* $tmp950 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp951 = *(&local28);
frost$core$Bit $tmp952 = frost$core$Bit$init$builtin_bit($tmp951 != NULL);
bool $tmp953 = $tmp952.value;
if ($tmp953) goto block68; else goto block69;
block69:;
frost$core$Int64 $tmp954 = (frost$core$Int64) {332};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s955, $tmp954, &$s956);
abort(); // unreachable
block68:;
ITable* $tmp957 = ((frost$collections$CollectionView*) $tmp951)->$class->itable;
while ($tmp957->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp957 = $tmp957->next;
}
$fn959 $tmp958 = $tmp957->methods[1];
frost$core$String* $tmp960 = $tmp958(((frost$collections$CollectionView*) $tmp951));
frost$core$String* $tmp961 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s962, $tmp960);
frost$core$String* $tmp963 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp961, &$s964);
frost$core$MutableString$append$frost$core$String($tmp950, $tmp963);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
// unreffing REF($998:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
// unreffing REF($997:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
// unreffing REF($996:frost.core.String)
goto block67;
block67:;
// line 334
frost$core$MutableString* $tmp965 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp965, &$s966);
// line 335
org$frostlang$frostc$FixedArray* $tmp967 = *(&local29);
ITable* $tmp968 = ((frost$collections$Iterable*) $tmp967)->$class->itable;
while ($tmp968->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp968 = $tmp968->next;
}
$fn970 $tmp969 = $tmp968->methods[0];
frost$collections$Iterator* $tmp971 = $tmp969(((frost$collections$Iterable*) $tmp967));
goto block70;
block70:;
ITable* $tmp972 = $tmp971->$class->itable;
while ($tmp972->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp972 = $tmp972->next;
}
$fn974 $tmp973 = $tmp972->methods[0];
frost$core$Bit $tmp975 = $tmp973($tmp971);
bool $tmp976 = $tmp975.value;
if ($tmp976) goto block72; else goto block71;
block71:;
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
// line 336
frost$core$MutableString* $tmp982 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp983 = *(&local32);
frost$core$String* $tmp984 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp983), &$s985);
frost$core$MutableString$append$frost$core$String($tmp982, $tmp984);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
// unreffing REF($1041:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp980);
// unreffing REF($1029:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp986 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
// unreffing m
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block70;
block72:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
// unreffing REF($1018:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 338
frost$core$MutableString* $tmp987 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp987, &$s988);
// line 339
frost$core$MutableString* $tmp989 = *(&local30);
frost$core$String* $tmp990 = frost$core$MutableString$finish$R$frost$core$String($tmp989);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
// unreffing REF($1063:frost.core.String)
frost$core$MutableString* $tmp991 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
// unreffing result
*(&local30) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp992 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
// unreffing members
*(&local29) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp993 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
// unreffing supertypes
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp994 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
// unreffing generics
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp995 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
// unreffing name
*(&local26) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp996 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
// unreffing annotations
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp997 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
// unreffing dc
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp990;
block48:;
frost$core$Int64 $tmp998 = (frost$core$Int64) {13};
frost$core$Bit $tmp999 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp998);
bool $tmp1000 = $tmp999.value;
if ($tmp1000) goto block73; else goto block74;
block73:;
org$frostlang$frostc$Position* $tmp1001 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1002 = *$tmp1001;
frost$core$String** $tmp1003 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1004 = *$tmp1003;
*(&local33) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
frost$core$String* $tmp1005 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
*(&local33) = $tmp1004;
// line 342
frost$core$String* $tmp1006 = *(&local33);
frost$core$Bit $tmp1007 = frost$core$Bit$init$builtin_bit($tmp1006 != NULL);
bool $tmp1008 = $tmp1007.value;
if ($tmp1008) goto block75; else goto block76;
block75:;
// line 343
frost$core$String* $tmp1009 = *(&local33);
frost$core$Bit $tmp1010 = frost$core$Bit$init$builtin_bit($tmp1009 != NULL);
bool $tmp1011 = $tmp1010.value;
if ($tmp1011) goto block77; else goto block78;
block78:;
frost$core$Int64 $tmp1012 = (frost$core$Int64) {343};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1013, $tmp1012, &$s1014);
abort(); // unreachable
block77:;
frost$core$String* $tmp1015 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1016, $tmp1009);
frost$core$String* $tmp1017 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1015, &$s1018);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
// unreffing REF($1137:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
// unreffing REF($1136:frost.core.String)
frost$core$String* $tmp1019 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
// unreffing label
*(&local33) = ((frost$core$String*) NULL);
return $tmp1017;
block76:;
// line 345
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1020));
frost$core$String* $tmp1021 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
// unreffing label
*(&local33) = ((frost$core$String*) NULL);
return &$s1022;
block74:;
frost$core$Int64 $tmp1023 = (frost$core$Int64) {14};
frost$core$Bit $tmp1024 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1023);
bool $tmp1025 = $tmp1024.value;
if ($tmp1025) goto block79; else goto block80;
block79:;
org$frostlang$frostc$Position* $tmp1026 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1027 = *$tmp1026;
org$frostlang$frostc$ASTNode** $tmp1028 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1029 = *$tmp1028;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
org$frostlang$frostc$ASTNode* $tmp1030 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
*(&local34) = $tmp1029;
org$frostlang$frostc$ASTNode** $tmp1031 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1032 = *$tmp1031;
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
org$frostlang$frostc$ASTNode* $tmp1033 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
*(&local35) = $tmp1032;
// line 348
org$frostlang$frostc$ASTNode* $tmp1034 = *(&local35);
frost$core$Bit $tmp1035 = frost$core$Bit$init$builtin_bit($tmp1034 != NULL);
bool $tmp1036 = $tmp1035.value;
if ($tmp1036) goto block81; else goto block82;
block81:;
// line 349
org$frostlang$frostc$ASTNode* $tmp1037 = *(&local34);
$fn1039 $tmp1038 = ($fn1039) $tmp1037->$class->vtable[0];
frost$core$String* $tmp1040 = $tmp1038($tmp1037);
frost$core$String* $tmp1041 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1040, &$s1042);
org$frostlang$frostc$ASTNode* $tmp1043 = *(&local35);
frost$core$Bit $tmp1044 = frost$core$Bit$init$builtin_bit($tmp1043 != NULL);
bool $tmp1045 = $tmp1044.value;
if ($tmp1045) goto block83; else goto block84;
block84:;
frost$core$Int64 $tmp1046 = (frost$core$Int64) {349};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1047, $tmp1046, &$s1048);
abort(); // unreachable
block83:;
frost$core$String* $tmp1049 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1041, ((frost$core$Object*) $tmp1043));
frost$core$String* $tmp1050 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1049, &$s1051);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
// unreffing REF($1206:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
// unreffing REF($1205:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
// unreffing REF($1195:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
// unreffing REF($1194:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1052 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
// unreffing value
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1053 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
// unreffing target
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1050;
block82:;
// line 351
org$frostlang$frostc$ASTNode* $tmp1054 = *(&local34);
$fn1056 $tmp1055 = ($fn1056) $tmp1054->$class->vtable[0];
frost$core$String* $tmp1057 = $tmp1055($tmp1054);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
// unreffing REF($1235:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1058 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
// unreffing value
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1059 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
// unreffing target
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1057;
block80:;
frost$core$Int64 $tmp1060 = (frost$core$Int64) {15};
frost$core$Bit $tmp1061 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1060);
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block85; else goto block86;
block85:;
org$frostlang$frostc$Position* $tmp1063 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1064 = *$tmp1063;
frost$core$String** $tmp1065 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1066 = *$tmp1065;
*(&local36) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
frost$core$String* $tmp1067 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
*(&local36) = $tmp1066;
org$frostlang$frostc$FixedArray** $tmp1068 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1069 = *$tmp1068;
*(&local37) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
org$frostlang$frostc$FixedArray* $tmp1070 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
*(&local37) = $tmp1069;
org$frostlang$frostc$ASTNode** $tmp1071 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1072 = *$tmp1071;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
org$frostlang$frostc$ASTNode* $tmp1073 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
*(&local38) = $tmp1072;
// line 354
frost$core$MutableString* $tmp1074 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1074);
*(&local39) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
frost$core$MutableString* $tmp1075 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
*(&local39) = $tmp1074;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
// unreffing REF($1286:frost.core.MutableString)
// line 355
frost$core$String* $tmp1076 = *(&local36);
frost$core$Bit $tmp1077 = frost$core$Bit$init$builtin_bit($tmp1076 != NULL);
bool $tmp1078 = $tmp1077.value;
if ($tmp1078) goto block87; else goto block88;
block87:;
// line 356
frost$core$MutableString* $tmp1079 = *(&local39);
frost$core$String* $tmp1080 = *(&local36);
frost$core$Bit $tmp1081 = frost$core$Bit$init$builtin_bit($tmp1080 != NULL);
bool $tmp1082 = $tmp1081.value;
if ($tmp1082) goto block89; else goto block90;
block90:;
frost$core$Int64 $tmp1083 = (frost$core$Int64) {356};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1084, $tmp1083, &$s1085);
abort(); // unreachable
block89:;
frost$core$String* $tmp1086 = frost$core$String$convert$R$frost$core$String($tmp1080);
frost$core$String* $tmp1087 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1086, &$s1088);
frost$core$MutableString$append$frost$core$String($tmp1079, $tmp1087);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
// unreffing REF($1316:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
// unreffing REF($1315:frost.core.String)
goto block88;
block88:;
// line 358
frost$core$MutableString* $tmp1089 = *(&local39);
frost$core$MutableString$append$frost$core$String($tmp1089, &$s1090);
// line 359
org$frostlang$frostc$FixedArray* $tmp1091 = *(&local37);
ITable* $tmp1092 = ((frost$collections$Iterable*) $tmp1091)->$class->itable;
while ($tmp1092->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1092 = $tmp1092->next;
}
$fn1094 $tmp1093 = $tmp1092->methods[0];
frost$collections$Iterator* $tmp1095 = $tmp1093(((frost$collections$Iterable*) $tmp1091));
goto block91;
block91:;
ITable* $tmp1096 = $tmp1095->$class->itable;
while ($tmp1096->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1096 = $tmp1096->next;
}
$fn1098 $tmp1097 = $tmp1096->methods[0];
frost$core$Bit $tmp1099 = $tmp1097($tmp1095);
bool $tmp1100 = $tmp1099.value;
if ($tmp1100) goto block93; else goto block92;
block92:;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1101 = $tmp1095->$class->itable;
while ($tmp1101->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1101 = $tmp1101->next;
}
$fn1103 $tmp1102 = $tmp1101->methods[1];
frost$core$Object* $tmp1104 = $tmp1102($tmp1095);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1104)));
org$frostlang$frostc$ASTNode* $tmp1105 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
*(&local40) = ((org$frostlang$frostc$ASTNode*) $tmp1104);
// line 360
frost$core$MutableString* $tmp1106 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp1107 = *(&local40);
frost$core$String* $tmp1108 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1107), &$s1109);
frost$core$MutableString$append$frost$core$String($tmp1106, $tmp1108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
// unreffing REF($1356:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1104);
// unreffing REF($1344:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1110 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
// unreffing s
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block91;
block93:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
// unreffing REF($1333:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 362
frost$core$MutableString* $tmp1111 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp1112 = *(&local38);
frost$core$String* $tmp1113 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1114, ((frost$core$Object*) $tmp1112));
frost$core$String* $tmp1115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1113, &$s1116);
frost$core$MutableString$append$frost$core$String($tmp1111, $tmp1115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
// unreffing REF($1378:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
// unreffing REF($1377:frost.core.String)
// line 363
frost$core$MutableString* $tmp1117 = *(&local39);
frost$core$String* $tmp1118 = frost$core$MutableString$finish$R$frost$core$String($tmp1117);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
// unreffing REF($1388:frost.core.String)
frost$core$MutableString* $tmp1119 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
// unreffing result
*(&local39) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1120 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
// unreffing test
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1121 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
// unreffing statements
*(&local37) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1122 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
// unreffing label
*(&local36) = ((frost$core$String*) NULL);
return $tmp1118;
block86:;
frost$core$Int64 $tmp1123 = (frost$core$Int64) {16};
frost$core$Bit $tmp1124 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1123);
bool $tmp1125 = $tmp1124.value;
if ($tmp1125) goto block94; else goto block95;
block94:;
org$frostlang$frostc$Position* $tmp1126 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1127 = *$tmp1126;
org$frostlang$frostc$ASTNode** $tmp1128 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1129 = *$tmp1128;
*(&local41) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
org$frostlang$frostc$ASTNode* $tmp1130 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
*(&local41) = $tmp1129;
frost$core$String** $tmp1131 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1132 = *$tmp1131;
*(&local42) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
frost$core$String* $tmp1133 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
*(&local42) = $tmp1132;
// line 366
org$frostlang$frostc$ASTNode* $tmp1134 = *(&local41);
$fn1136 $tmp1135 = ($fn1136) $tmp1134->$class->vtable[0];
frost$core$String* $tmp1137 = $tmp1135($tmp1134);
frost$core$String* $tmp1138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1137, &$s1139);
frost$core$String* $tmp1140 = *(&local42);
frost$core$String* $tmp1141 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1138, $tmp1140);
frost$core$String* $tmp1142 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1141, &$s1143);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
// unreffing REF($1446:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
// unreffing REF($1445:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
// unreffing REF($1443:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
// unreffing REF($1442:frost.core.String)
frost$core$String* $tmp1144 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
// unreffing field
*(&local42) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1145 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
// unreffing base
*(&local41) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1142;
block95:;
frost$core$Int64 $tmp1146 = (frost$core$Int64) {17};
frost$core$Bit $tmp1147 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1146);
bool $tmp1148 = $tmp1147.value;
if ($tmp1148) goto block96; else goto block97;
block96:;
org$frostlang$frostc$Position* $tmp1149 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1150 = *$tmp1149;
org$frostlang$frostc$ASTNode** $tmp1151 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1152 = *$tmp1151;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
org$frostlang$frostc$ASTNode* $tmp1153 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
*(&local43) = $tmp1152;
frost$core$String** $tmp1154 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1155 = *$tmp1154;
*(&local44) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
frost$core$String* $tmp1156 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
*(&local44) = $tmp1155;
org$frostlang$frostc$FixedArray** $tmp1157 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1158 = *$tmp1157;
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
org$frostlang$frostc$FixedArray* $tmp1159 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
*(&local45) = $tmp1158;
// line 369
org$frostlang$frostc$ASTNode* $tmp1160 = *(&local43);
$fn1162 $tmp1161 = ($fn1162) $tmp1160->$class->vtable[0];
frost$core$String* $tmp1163 = $tmp1161($tmp1160);
frost$core$String* $tmp1164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1163, &$s1165);
frost$core$String* $tmp1166 = *(&local44);
frost$core$String* $tmp1167 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1164, $tmp1166);
frost$core$String* $tmp1168 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1167, &$s1169);
org$frostlang$frostc$FixedArray* $tmp1170 = *(&local45);
ITable* $tmp1171 = ((frost$collections$CollectionView*) $tmp1170)->$class->itable;
while ($tmp1171->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1171 = $tmp1171->next;
}
$fn1173 $tmp1172 = $tmp1171->methods[2];
frost$core$String* $tmp1174 = $tmp1172(((frost$collections$CollectionView*) $tmp1170), &$s1175);
frost$core$String* $tmp1176 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1168, $tmp1174);
frost$core$String* $tmp1177 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1176, &$s1178);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
// unreffing REF($1518:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
// unreffing REF($1517:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
// unreffing REF($1516:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
// unreffing REF($1512:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
// unreffing REF($1511:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
// unreffing REF($1509:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
// unreffing REF($1508:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp1179 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
// unreffing types
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1180 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
// unreffing field
*(&local44) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1181 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
// unreffing base
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1177;
block97:;
frost$core$Int64 $tmp1182 = (frost$core$Int64) {18};
frost$core$Bit $tmp1183 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1182);
bool $tmp1184 = $tmp1183.value;
if ($tmp1184) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp1185 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1186 = *$tmp1185;
org$frostlang$frostc$ASTNode** $tmp1187 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1188 = *$tmp1187;
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
org$frostlang$frostc$ASTNode* $tmp1189 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
*(&local46) = $tmp1188;
org$frostlang$frostc$FixedArray** $tmp1190 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1191 = *$tmp1190;
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
org$frostlang$frostc$FixedArray* $tmp1192 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
*(&local47) = $tmp1191;
org$frostlang$frostc$ASTNode** $tmp1193 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1194 = *$tmp1193;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
org$frostlang$frostc$ASTNode* $tmp1195 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
*(&local48) = $tmp1194;
// line 372
frost$core$MutableString* $tmp1196 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1196);
*(&local49) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
frost$core$MutableString* $tmp1197 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
*(&local49) = $tmp1196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
// unreffing REF($1592:frost.core.MutableString)
// line 373
org$frostlang$frostc$ASTNode* $tmp1198 = *(&local46);
frost$core$Bit $tmp1199 = frost$core$Bit$init$builtin_bit($tmp1198 != NULL);
bool $tmp1200 = $tmp1199.value;
if ($tmp1200) goto block100; else goto block101;
block100:;
// line 374
frost$core$MutableString* $tmp1201 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1202 = *(&local46);
frost$core$Bit $tmp1203 = frost$core$Bit$init$builtin_bit($tmp1202 != NULL);
bool $tmp1204 = $tmp1203.value;
if ($tmp1204) goto block102; else goto block103;
block103:;
frost$core$Int64 $tmp1205 = (frost$core$Int64) {374};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1206, $tmp1205, &$s1207);
abort(); // unreachable
block102:;
frost$core$String* $tmp1208 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1202), &$s1209);
frost$core$MutableString$append$frost$core$String($tmp1201, $tmp1208);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
// unreffing REF($1621:frost.core.String)
goto block101;
block101:;
// line 376
org$frostlang$frostc$FixedArray* $tmp1210 = *(&local47);
ITable* $tmp1211 = ((frost$collections$Iterable*) $tmp1210)->$class->itable;
while ($tmp1211->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1211 = $tmp1211->next;
}
$fn1213 $tmp1212 = $tmp1211->methods[0];
frost$collections$Iterator* $tmp1214 = $tmp1212(((frost$collections$Iterable*) $tmp1210));
goto block104;
block104:;
ITable* $tmp1215 = $tmp1214->$class->itable;
while ($tmp1215->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1215 = $tmp1215->next;
}
$fn1217 $tmp1216 = $tmp1215->methods[0];
frost$core$Bit $tmp1218 = $tmp1216($tmp1214);
bool $tmp1219 = $tmp1218.value;
if ($tmp1219) goto block106; else goto block105;
block105:;
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1220 = $tmp1214->$class->itable;
while ($tmp1220->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1220 = $tmp1220->next;
}
$fn1222 $tmp1221 = $tmp1220->methods[1];
frost$core$Object* $tmp1223 = $tmp1221($tmp1214);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1223)));
org$frostlang$frostc$ASTNode* $tmp1224 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
*(&local50) = ((org$frostlang$frostc$ASTNode*) $tmp1223);
// line 377
frost$core$MutableString* $tmp1225 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1226 = *(&local50);
frost$core$String* $tmp1227 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1226), &$s1228);
frost$core$MutableString$append$frost$core$String($tmp1225, $tmp1227);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
// unreffing REF($1655:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1223);
// unreffing REF($1643:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1229 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
// unreffing a
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block104;
block106:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
// unreffing REF($1632:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 379
frost$core$MutableString* $tmp1230 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1231 = *(&local48);
frost$core$MutableString$append$frost$core$Object($tmp1230, ((frost$core$Object*) $tmp1231));
// line 380
frost$core$MutableString* $tmp1232 = *(&local49);
frost$core$String* $tmp1233 = frost$core$MutableString$finish$R$frost$core$String($tmp1232);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
// unreffing REF($1679:frost.core.String)
frost$core$MutableString* $tmp1234 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
// unreffing result
*(&local49) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1235 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
// unreffing decl
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1236 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
// unreffing annotations
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1237 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
// unreffing dc
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1233;
block99:;
frost$core$Int64 $tmp1238 = (frost$core$Int64) {19};
frost$core$Bit $tmp1239 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1238);
bool $tmp1240 = $tmp1239.value;
if ($tmp1240) goto block107; else goto block108;
block107:;
org$frostlang$frostc$FixedArray** $tmp1241 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp1242 = *$tmp1241;
*(&local51) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
org$frostlang$frostc$FixedArray* $tmp1243 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
*(&local51) = $tmp1242;
// line 383
frost$core$MutableString* $tmp1244 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1244);
*(&local52) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
frost$core$MutableString* $tmp1245 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
*(&local52) = $tmp1244;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
// unreffing REF($1720:frost.core.MutableString)
// line 384
org$frostlang$frostc$FixedArray* $tmp1246 = *(&local51);
ITable* $tmp1247 = ((frost$collections$Iterable*) $tmp1246)->$class->itable;
while ($tmp1247->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1247 = $tmp1247->next;
}
$fn1249 $tmp1248 = $tmp1247->methods[0];
frost$collections$Iterator* $tmp1250 = $tmp1248(((frost$collections$Iterable*) $tmp1246));
goto block109;
block109:;
ITable* $tmp1251 = $tmp1250->$class->itable;
while ($tmp1251->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1251 = $tmp1251->next;
}
$fn1253 $tmp1252 = $tmp1251->methods[0];
frost$core$Bit $tmp1254 = $tmp1252($tmp1250);
bool $tmp1255 = $tmp1254.value;
if ($tmp1255) goto block111; else goto block110;
block110:;
*(&local53) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1256 = $tmp1250->$class->itable;
while ($tmp1256->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1256 = $tmp1256->next;
}
$fn1258 $tmp1257 = $tmp1256->methods[1];
frost$core$Object* $tmp1259 = $tmp1257($tmp1250);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1259)));
org$frostlang$frostc$ASTNode* $tmp1260 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
*(&local53) = ((org$frostlang$frostc$ASTNode*) $tmp1259);
// line 385
frost$core$MutableString* $tmp1261 = *(&local52);
org$frostlang$frostc$ASTNode* $tmp1262 = *(&local53);
frost$core$String* $tmp1263 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1262), &$s1264);
frost$core$MutableString$append$frost$core$String($tmp1261, $tmp1263);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
// unreffing REF($1760:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1259);
// unreffing REF($1748:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1265 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
// unreffing e
*(&local53) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block109;
block111:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
// unreffing REF($1737:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 387
frost$core$MutableString* $tmp1266 = *(&local52);
frost$core$String* $tmp1267 = frost$core$MutableString$finish$R$frost$core$String($tmp1266);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
// unreffing REF($1779:frost.core.String)
frost$core$MutableString* $tmp1268 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
// unreffing result
*(&local52) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1269 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
// unreffing entries
*(&local51) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1267;
block108:;
frost$core$Int64 $tmp1270 = (frost$core$Int64) {20};
frost$core$Bit $tmp1271 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1270);
bool $tmp1272 = $tmp1271.value;
if ($tmp1272) goto block112; else goto block113;
block112:;
org$frostlang$frostc$Position* $tmp1273 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1274 = *$tmp1273;
frost$core$String** $tmp1275 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1276 = *$tmp1275;
*(&local54) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
frost$core$String* $tmp1277 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
*(&local54) = $tmp1276;
org$frostlang$frostc$ASTNode** $tmp1278 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1279 = *$tmp1278;
*(&local55) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
org$frostlang$frostc$ASTNode* $tmp1280 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
*(&local55) = $tmp1279;
org$frostlang$frostc$ASTNode** $tmp1281 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1282 = *$tmp1281;
*(&local56) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
org$frostlang$frostc$ASTNode* $tmp1283 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
*(&local56) = $tmp1282;
org$frostlang$frostc$FixedArray** $tmp1284 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1285 = *$tmp1284;
*(&local57) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
org$frostlang$frostc$FixedArray* $tmp1286 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
*(&local57) = $tmp1285;
// line 390
frost$core$MutableString* $tmp1287 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1287);
*(&local58) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
frost$core$MutableString* $tmp1288 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
*(&local58) = $tmp1287;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
// unreffing REF($1839:frost.core.MutableString)
// line 391
frost$core$String* $tmp1289 = *(&local54);
frost$core$Bit $tmp1290 = frost$core$Bit$init$builtin_bit($tmp1289 != NULL);
bool $tmp1291 = $tmp1290.value;
if ($tmp1291) goto block114; else goto block115;
block114:;
// line 392
frost$core$MutableString* $tmp1292 = *(&local58);
frost$core$String* $tmp1293 = *(&local54);
frost$core$Bit $tmp1294 = frost$core$Bit$init$builtin_bit($tmp1293 != NULL);
bool $tmp1295 = $tmp1294.value;
if ($tmp1295) goto block116; else goto block117;
block117:;
frost$core$Int64 $tmp1296 = (frost$core$Int64) {392};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1297, $tmp1296, &$s1298);
abort(); // unreachable
block116:;
frost$core$String* $tmp1299 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1293, &$s1300);
frost$core$MutableString$append$frost$core$String($tmp1292, $tmp1299);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
// unreffing REF($1868:frost.core.String)
goto block115;
block115:;
// line 394
frost$core$MutableString* $tmp1301 = *(&local58);
org$frostlang$frostc$ASTNode* $tmp1302 = *(&local55);
frost$core$String* $tmp1303 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1304, ((frost$core$Object*) $tmp1302));
frost$core$String* $tmp1305 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1303, &$s1306);
org$frostlang$frostc$ASTNode* $tmp1307 = *(&local56);
frost$core$String* $tmp1308 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1305, ((frost$core$Object*) $tmp1307));
frost$core$String* $tmp1309 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1308, &$s1310);
frost$core$MutableString$append$frost$core$String($tmp1301, $tmp1309);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
// unreffing REF($1883:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
// unreffing REF($1882:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
// unreffing REF($1879:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
// unreffing REF($1878:frost.core.String)
// line 395
org$frostlang$frostc$FixedArray* $tmp1311 = *(&local57);
ITable* $tmp1312 = ((frost$collections$Iterable*) $tmp1311)->$class->itable;
while ($tmp1312->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1312 = $tmp1312->next;
}
$fn1314 $tmp1313 = $tmp1312->methods[0];
frost$collections$Iterator* $tmp1315 = $tmp1313(((frost$collections$Iterable*) $tmp1311));
goto block118;
block118:;
ITable* $tmp1316 = $tmp1315->$class->itable;
while ($tmp1316->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1316 = $tmp1316->next;
}
$fn1318 $tmp1317 = $tmp1316->methods[0];
frost$core$Bit $tmp1319 = $tmp1317($tmp1315);
bool $tmp1320 = $tmp1319.value;
if ($tmp1320) goto block120; else goto block119;
block119:;
*(&local59) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1321 = $tmp1315->$class->itable;
while ($tmp1321->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1321 = $tmp1321->next;
}
$fn1323 $tmp1322 = $tmp1321->methods[1];
frost$core$Object* $tmp1324 = $tmp1322($tmp1315);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1324)));
org$frostlang$frostc$ASTNode* $tmp1325 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
*(&local59) = ((org$frostlang$frostc$ASTNode*) $tmp1324);
// line 396
frost$core$MutableString* $tmp1326 = *(&local58);
org$frostlang$frostc$ASTNode* $tmp1327 = *(&local59);
frost$core$String* $tmp1328 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1327), &$s1329);
frost$core$MutableString$append$frost$core$String($tmp1326, $tmp1328);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
// unreffing REF($1925:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1324);
// unreffing REF($1913:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1330 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
// unreffing s
*(&local59) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block118;
block120:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
// unreffing REF($1902:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 398
frost$core$MutableString* $tmp1331 = *(&local58);
frost$core$MutableString$append$frost$core$String($tmp1331, &$s1332);
// line 399
frost$core$MutableString* $tmp1333 = *(&local58);
frost$core$String* $tmp1334 = frost$core$MutableString$finish$R$frost$core$String($tmp1333);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
// unreffing REF($1947:frost.core.String)
frost$core$MutableString* $tmp1335 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
// unreffing result
*(&local58) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1336 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
// unreffing statements
*(&local57) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1337 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
// unreffing list
*(&local56) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1338 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
// unreffing target
*(&local55) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1339 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
// unreffing label
*(&local54) = ((frost$core$String*) NULL);
return $tmp1334;
block113:;
frost$core$Int64 $tmp1340 = (frost$core$Int64) {21};
frost$core$Bit $tmp1341 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1340);
bool $tmp1342 = $tmp1341.value;
if ($tmp1342) goto block121; else goto block122;
block121:;
org$frostlang$frostc$Position* $tmp1343 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1344 = *$tmp1343;
frost$core$String** $tmp1345 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1346 = *$tmp1345;
*(&local60) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
frost$core$String* $tmp1347 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
*(&local60) = $tmp1346;
org$frostlang$frostc$FixedArray** $tmp1348 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1349 = *$tmp1348;
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
org$frostlang$frostc$FixedArray* $tmp1350 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
*(&local61) = $tmp1349;
// line 402
frost$core$String* $tmp1351 = *(&local60);
frost$core$String* $tmp1352 = frost$core$String$convert$R$frost$core$String($tmp1351);
frost$core$String* $tmp1353 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1352, &$s1354);
org$frostlang$frostc$FixedArray* $tmp1355 = *(&local61);
ITable* $tmp1356 = ((frost$collections$CollectionView*) $tmp1355)->$class->itable;
while ($tmp1356->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1356 = $tmp1356->next;
}
$fn1358 $tmp1357 = $tmp1356->methods[1];
frost$core$String* $tmp1359 = $tmp1357(((frost$collections$CollectionView*) $tmp1355));
frost$core$String* $tmp1360 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1353, $tmp1359);
frost$core$String* $tmp1361 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1360, &$s1362);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
// unreffing REF($2012:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
// unreffing REF($2011:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
// unreffing REF($2010:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
// unreffing REF($2006:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
// unreffing REF($2005:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp1363 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
// unreffing subtypes
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1364 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
// unreffing name
*(&local60) = ((frost$core$String*) NULL);
return $tmp1361;
block122:;
frost$core$Int64 $tmp1365 = (frost$core$Int64) {22};
frost$core$Bit $tmp1366 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1365);
bool $tmp1367 = $tmp1366.value;
if ($tmp1367) goto block123; else goto block124;
block123:;
org$frostlang$frostc$Position* $tmp1368 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1369 = *$tmp1368;
frost$core$String** $tmp1370 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1371 = *$tmp1370;
*(&local62) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
frost$core$String* $tmp1372 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
*(&local62) = $tmp1371;
// line 405
frost$core$String* $tmp1373 = *(&local62);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
frost$core$String* $tmp1374 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
// unreffing name
*(&local62) = ((frost$core$String*) NULL);
return $tmp1373;
block124:;
frost$core$Int64 $tmp1375 = (frost$core$Int64) {23};
frost$core$Bit $tmp1376 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1375);
bool $tmp1377 = $tmp1376.value;
if ($tmp1377) goto block125; else goto block126;
block125:;
org$frostlang$frostc$Position* $tmp1378 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1379 = *$tmp1378;
frost$core$String** $tmp1380 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1381 = *$tmp1380;
*(&local63) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1381));
frost$core$String* $tmp1382 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
*(&local63) = $tmp1381;
org$frostlang$frostc$FixedArray** $tmp1383 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1384 = *$tmp1383;
*(&local64) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
org$frostlang$frostc$FixedArray* $tmp1385 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
*(&local64) = $tmp1384;
// line 408
frost$core$String* $tmp1386 = *(&local63);
frost$core$String* $tmp1387 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1388, $tmp1386);
frost$core$String* $tmp1389 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1387, &$s1390);
org$frostlang$frostc$FixedArray* $tmp1391 = *(&local64);
ITable* $tmp1392 = ((frost$collections$CollectionView*) $tmp1391)->$class->itable;
while ($tmp1392->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1392 = $tmp1392->next;
}
$fn1394 $tmp1393 = $tmp1392->methods[1];
frost$core$String* $tmp1395 = $tmp1393(((frost$collections$CollectionView*) $tmp1391));
frost$core$String* $tmp1396 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1389, $tmp1395);
frost$core$String* $tmp1397 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1396, &$s1398);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
// unreffing REF($2099:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
// unreffing REF($2098:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
// unreffing REF($2097:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
// unreffing REF($2093:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1387));
// unreffing REF($2092:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp1399 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
// unreffing types
*(&local64) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1400 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
// unreffing name
*(&local63) = ((frost$core$String*) NULL);
return $tmp1397;
block126:;
frost$core$Int64 $tmp1401 = (frost$core$Int64) {24};
frost$core$Bit $tmp1402 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1401);
bool $tmp1403 = $tmp1402.value;
if ($tmp1403) goto block127; else goto block128;
block127:;
org$frostlang$frostc$Position* $tmp1404 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1405 = *$tmp1404;
org$frostlang$frostc$ASTNode** $tmp1406 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1407 = *$tmp1406;
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
org$frostlang$frostc$ASTNode* $tmp1408 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
*(&local65) = $tmp1407;
org$frostlang$frostc$FixedArray** $tmp1409 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1410 = *$tmp1409;
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
org$frostlang$frostc$FixedArray* $tmp1411 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
*(&local66) = $tmp1410;
org$frostlang$frostc$ASTNode** $tmp1412 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1413 = *$tmp1412;
*(&local67) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
org$frostlang$frostc$ASTNode* $tmp1414 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
*(&local67) = $tmp1413;
// line 411
frost$core$MutableString* $tmp1415 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$ASTNode* $tmp1416 = *(&local65);
frost$core$String* $tmp1417 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1418, ((frost$core$Object*) $tmp1416));
frost$core$String* $tmp1419 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1417, &$s1420);
frost$core$MutableString$init$frost$core$String($tmp1415, $tmp1419);
*(&local68) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
frost$core$MutableString* $tmp1421 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
*(&local68) = $tmp1415;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
// unreffing REF($2166:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
// unreffing REF($2165:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
// unreffing REF($2162:frost.core.MutableString)
// line 412
org$frostlang$frostc$FixedArray* $tmp1422 = *(&local66);
ITable* $tmp1423 = ((frost$collections$Iterable*) $tmp1422)->$class->itable;
while ($tmp1423->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1423 = $tmp1423->next;
}
$fn1425 $tmp1424 = $tmp1423->methods[0];
frost$collections$Iterator* $tmp1426 = $tmp1424(((frost$collections$Iterable*) $tmp1422));
goto block129;
block129:;
ITable* $tmp1427 = $tmp1426->$class->itable;
while ($tmp1427->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1427 = $tmp1427->next;
}
$fn1429 $tmp1428 = $tmp1427->methods[0];
frost$core$Bit $tmp1430 = $tmp1428($tmp1426);
bool $tmp1431 = $tmp1430.value;
if ($tmp1431) goto block131; else goto block130;
block130:;
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1432 = $tmp1426->$class->itable;
while ($tmp1432->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1432 = $tmp1432->next;
}
$fn1434 $tmp1433 = $tmp1432->methods[1];
frost$core$Object* $tmp1435 = $tmp1433($tmp1426);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1435)));
org$frostlang$frostc$ASTNode* $tmp1436 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
*(&local69) = ((org$frostlang$frostc$ASTNode*) $tmp1435);
// line 413
frost$core$MutableString* $tmp1437 = *(&local68);
org$frostlang$frostc$ASTNode* $tmp1438 = *(&local69);
frost$core$String* $tmp1439 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1438), &$s1440);
frost$core$MutableString$append$frost$core$String($tmp1437, $tmp1439);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
// unreffing REF($2212:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1435);
// unreffing REF($2200:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1441 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
// unreffing s
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block129;
block131:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
// unreffing REF($2189:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 415
frost$core$MutableString* $tmp1442 = *(&local68);
frost$core$MutableString$append$frost$core$String($tmp1442, &$s1443);
// line 416
org$frostlang$frostc$ASTNode* $tmp1444 = *(&local67);
frost$core$Bit $tmp1445 = frost$core$Bit$init$builtin_bit($tmp1444 != NULL);
bool $tmp1446 = $tmp1445.value;
if ($tmp1446) goto block132; else goto block133;
block132:;
// line 417
frost$core$MutableString* $tmp1447 = *(&local68);
org$frostlang$frostc$ASTNode* $tmp1448 = *(&local67);
frost$core$Bit $tmp1449 = frost$core$Bit$init$builtin_bit($tmp1448 != NULL);
bool $tmp1450 = $tmp1449.value;
if ($tmp1450) goto block134; else goto block135;
block135:;
frost$core$Int64 $tmp1451 = (frost$core$Int64) {417};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1452, $tmp1451, &$s1453);
abort(); // unreachable
block134:;
frost$core$String* $tmp1454 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1455, ((frost$core$Object*) $tmp1448));
frost$core$String* $tmp1456 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1454, &$s1457);
frost$core$MutableString$append$frost$core$String($tmp1447, $tmp1456);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
// unreffing REF($2250:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
// unreffing REF($2249:frost.core.String)
goto block133;
block133:;
// line 419
frost$core$MutableString* $tmp1458 = *(&local68);
frost$core$String* $tmp1459 = frost$core$MutableString$finish$R$frost$core$String($tmp1458);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
// unreffing REF($2261:frost.core.String)
frost$core$MutableString* $tmp1460 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
// unreffing result
*(&local68) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1461 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
// unreffing ifFalse
*(&local67) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1462 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
// unreffing ifTrue
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1463 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
// unreffing test
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1459;
block128:;
frost$core$Int64 $tmp1464 = (frost$core$Int64) {25};
frost$core$Bit $tmp1465 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1464);
bool $tmp1466 = $tmp1465.value;
if ($tmp1466) goto block136; else goto block137;
block136:;
org$frostlang$frostc$Position* $tmp1467 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1468 = *$tmp1467;
frost$core$UInt64* $tmp1469 = (frost$core$UInt64*) (param0->$data + 16);
frost$core$UInt64 $tmp1470 = *$tmp1469;
*(&local70) = $tmp1470;
// line 422
frost$core$UInt64 $tmp1471 = *(&local70);
frost$core$String* $tmp1472 = frost$core$UInt64$convert$R$frost$core$String($tmp1471);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
// unreffing REF($2299:frost.core.String)
return $tmp1472;
block137:;
frost$core$Int64 $tmp1473 = (frost$core$Int64) {26};
frost$core$Bit $tmp1474 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1473);
bool $tmp1475 = $tmp1474.value;
if ($tmp1475) goto block138; else goto block139;
block138:;
org$frostlang$frostc$Position* $tmp1476 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1477 = *$tmp1476;
org$frostlang$frostc$IR$Value** $tmp1478 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp1479 = *$tmp1478;
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
org$frostlang$frostc$IR$Value* $tmp1480 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
*(&local71) = $tmp1479;
// line 425
org$frostlang$frostc$IR$Value* $tmp1481 = *(&local71);
$fn1483 $tmp1482 = ($fn1483) $tmp1481->$class->vtable[0];
frost$core$String* $tmp1484 = $tmp1482($tmp1481);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
// unreffing REF($2324:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp1485 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1485));
// unreffing value
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp1484;
block139:;
frost$core$Int64 $tmp1486 = (frost$core$Int64) {27};
frost$core$Bit $tmp1487 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1486);
bool $tmp1488 = $tmp1487.value;
if ($tmp1488) goto block140; else goto block141;
block140:;
org$frostlang$frostc$Position* $tmp1489 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1490 = *$tmp1489;
frost$core$String** $tmp1491 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1492 = *$tmp1491;
*(&local72) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
frost$core$String* $tmp1493 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
*(&local72) = $tmp1492;
org$frostlang$frostc$FixedArray** $tmp1494 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1495 = *$tmp1494;
*(&local73) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
org$frostlang$frostc$FixedArray* $tmp1496 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
*(&local73) = $tmp1495;
// line 428
frost$core$MutableString* $tmp1497 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1497);
*(&local74) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
frost$core$MutableString* $tmp1498 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
*(&local74) = $tmp1497;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
// unreffing REF($2361:frost.core.MutableString)
// line 429
frost$core$String* $tmp1499 = *(&local72);
frost$core$Bit $tmp1500 = frost$core$Bit$init$builtin_bit($tmp1499 != NULL);
bool $tmp1501 = $tmp1500.value;
if ($tmp1501) goto block142; else goto block143;
block142:;
// line 430
frost$core$MutableString* $tmp1502 = *(&local74);
frost$core$String* $tmp1503 = *(&local72);
frost$core$Bit $tmp1504 = frost$core$Bit$init$builtin_bit($tmp1503 != NULL);
bool $tmp1505 = $tmp1504.value;
if ($tmp1505) goto block144; else goto block145;
block145:;
frost$core$Int64 $tmp1506 = (frost$core$Int64) {430};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1507, $tmp1506, &$s1508);
abort(); // unreachable
block144:;
frost$core$String* $tmp1509 = frost$core$String$convert$R$frost$core$String($tmp1503);
frost$core$String* $tmp1510 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1509, &$s1511);
frost$core$MutableString$append$frost$core$String($tmp1502, $tmp1510);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1510));
// unreffing REF($2391:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
// unreffing REF($2390:frost.core.String)
goto block143;
block143:;
// line 432
frost$core$MutableString* $tmp1512 = *(&local74);
frost$core$MutableString$append$frost$core$String($tmp1512, &$s1513);
// line 433
org$frostlang$frostc$FixedArray* $tmp1514 = *(&local73);
ITable* $tmp1515 = ((frost$collections$Iterable*) $tmp1514)->$class->itable;
while ($tmp1515->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1515 = $tmp1515->next;
}
$fn1517 $tmp1516 = $tmp1515->methods[0];
frost$collections$Iterator* $tmp1518 = $tmp1516(((frost$collections$Iterable*) $tmp1514));
goto block146;
block146:;
ITable* $tmp1519 = $tmp1518->$class->itable;
while ($tmp1519->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1519 = $tmp1519->next;
}
$fn1521 $tmp1520 = $tmp1519->methods[0];
frost$core$Bit $tmp1522 = $tmp1520($tmp1518);
bool $tmp1523 = $tmp1522.value;
if ($tmp1523) goto block148; else goto block147;
block147:;
*(&local75) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1524 = $tmp1518->$class->itable;
while ($tmp1524->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1524 = $tmp1524->next;
}
$fn1526 $tmp1525 = $tmp1524->methods[1];
frost$core$Object* $tmp1527 = $tmp1525($tmp1518);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1527)));
org$frostlang$frostc$ASTNode* $tmp1528 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1528));
*(&local75) = ((org$frostlang$frostc$ASTNode*) $tmp1527);
// line 434
frost$core$MutableString* $tmp1529 = *(&local74);
org$frostlang$frostc$ASTNode* $tmp1530 = *(&local75);
frost$core$String* $tmp1531 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1530), &$s1532);
frost$core$MutableString$append$frost$core$String($tmp1529, $tmp1531);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
// unreffing REF($2431:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1527);
// unreffing REF($2419:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1533 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
// unreffing s
*(&local75) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block146;
block148:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
// unreffing REF($2408:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 436
frost$core$MutableString* $tmp1534 = *(&local74);
frost$core$MutableString$append$frost$core$String($tmp1534, &$s1535);
// line 437
frost$core$MutableString* $tmp1536 = *(&local74);
frost$core$String* $tmp1537 = frost$core$MutableString$finish$R$frost$core$String($tmp1536);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
// unreffing REF($2453:frost.core.String)
frost$core$MutableString* $tmp1538 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1538));
// unreffing result
*(&local74) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1539 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
// unreffing statements
*(&local73) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1540 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1540));
// unreffing label
*(&local72) = ((frost$core$String*) NULL);
return $tmp1537;
block141:;
frost$core$Int64 $tmp1541 = (frost$core$Int64) {28};
frost$core$Bit $tmp1542 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1541);
bool $tmp1543 = $tmp1542.value;
if ($tmp1543) goto block149; else goto block150;
block149:;
org$frostlang$frostc$Position* $tmp1544 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1545 = *$tmp1544;
org$frostlang$frostc$ASTNode** $tmp1546 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1547 = *$tmp1546;
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
org$frostlang$frostc$ASTNode* $tmp1548 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1548));
*(&local76) = $tmp1547;
org$frostlang$frostc$FixedArray** $tmp1549 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1550 = *$tmp1549;
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1550));
org$frostlang$frostc$FixedArray* $tmp1551 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
*(&local77) = $tmp1550;
org$frostlang$frostc$FixedArray** $tmp1552 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1553 = *$tmp1552;
*(&local78) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1553));
org$frostlang$frostc$FixedArray* $tmp1554 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
*(&local78) = $tmp1553;
// line 440
frost$core$MutableString* $tmp1555 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$ASTNode* $tmp1556 = *(&local76);
frost$core$String* $tmp1557 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1558, ((frost$core$Object*) $tmp1556));
frost$core$String* $tmp1559 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1557, &$s1560);
frost$core$MutableString$init$frost$core$String($tmp1555, $tmp1559);
*(&local79) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
frost$core$MutableString* $tmp1561 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
*(&local79) = $tmp1555;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
// unreffing REF($2513:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
// unreffing REF($2512:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
// unreffing REF($2509:frost.core.MutableString)
// line 441
org$frostlang$frostc$FixedArray* $tmp1562 = *(&local77);
ITable* $tmp1563 = ((frost$collections$Iterable*) $tmp1562)->$class->itable;
while ($tmp1563->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1563 = $tmp1563->next;
}
$fn1565 $tmp1564 = $tmp1563->methods[0];
frost$collections$Iterator* $tmp1566 = $tmp1564(((frost$collections$Iterable*) $tmp1562));
goto block151;
block151:;
ITable* $tmp1567 = $tmp1566->$class->itable;
while ($tmp1567->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1567 = $tmp1567->next;
}
$fn1569 $tmp1568 = $tmp1567->methods[0];
frost$core$Bit $tmp1570 = $tmp1568($tmp1566);
bool $tmp1571 = $tmp1570.value;
if ($tmp1571) goto block153; else goto block152;
block152:;
*(&local80) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1572 = $tmp1566->$class->itable;
while ($tmp1572->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1572 = $tmp1572->next;
}
$fn1574 $tmp1573 = $tmp1572->methods[1];
frost$core$Object* $tmp1575 = $tmp1573($tmp1566);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1575)));
org$frostlang$frostc$ASTNode* $tmp1576 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1576));
*(&local80) = ((org$frostlang$frostc$ASTNode*) $tmp1575);
// line 442
frost$core$MutableString* $tmp1577 = *(&local79);
org$frostlang$frostc$ASTNode* $tmp1578 = *(&local80);
frost$core$String* $tmp1579 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1578), &$s1580);
frost$core$MutableString$append$frost$core$String($tmp1577, $tmp1579);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
// unreffing REF($2559:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1575);
// unreffing REF($2547:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1581 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1581));
// unreffing w
*(&local80) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block151;
block153:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
// unreffing REF($2536:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 444
org$frostlang$frostc$FixedArray* $tmp1582 = *(&local78);
frost$core$Bit $tmp1583 = frost$core$Bit$init$builtin_bit($tmp1582 != NULL);
bool $tmp1584 = $tmp1583.value;
if ($tmp1584) goto block154; else goto block155;
block154:;
// line 445
frost$core$MutableString* $tmp1585 = *(&local79);
org$frostlang$frostc$FixedArray* $tmp1586 = *(&local78);
frost$core$Bit $tmp1587 = frost$core$Bit$init$builtin_bit($tmp1586 != NULL);
bool $tmp1588 = $tmp1587.value;
if ($tmp1588) goto block156; else goto block157;
block157:;
frost$core$Int64 $tmp1589 = (frost$core$Int64) {445};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1590, $tmp1589, &$s1591);
abort(); // unreachable
block156:;
frost$core$String* $tmp1592 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1586), &$s1593);
frost$core$MutableString$append$frost$core$String($tmp1585, $tmp1592);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
// unreffing REF($2593:frost.core.String)
goto block155;
block155:;
// line 447
frost$core$MutableString* $tmp1594 = *(&local79);
frost$core$MutableString$append$frost$core$String($tmp1594, &$s1595);
// line 448
frost$core$MutableString* $tmp1596 = *(&local79);
frost$core$String* $tmp1597 = frost$core$MutableString$finish$R$frost$core$String($tmp1596);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
// unreffing REF($2604:frost.core.String)
frost$core$MutableString* $tmp1598 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
// unreffing result
*(&local79) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1599 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1599));
// unreffing other
*(&local78) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1600 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
// unreffing whens
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1601 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
// unreffing value
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1597;
block150:;
frost$core$Int64 $tmp1602 = (frost$core$Int64) {29};
frost$core$Bit $tmp1603 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1602);
bool $tmp1604 = $tmp1603.value;
if ($tmp1604) goto block158; else goto block159;
block158:;
org$frostlang$frostc$Position* $tmp1605 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1606 = *$tmp1605;
org$frostlang$frostc$ASTNode** $tmp1607 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1608 = *$tmp1607;
*(&local81) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
org$frostlang$frostc$ASTNode* $tmp1609 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1609));
*(&local81) = $tmp1608;
org$frostlang$frostc$FixedArray** $tmp1610 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1611 = *$tmp1610;
*(&local82) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
org$frostlang$frostc$FixedArray* $tmp1612 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
*(&local82) = $tmp1611;
org$frostlang$frostc$MethodDecl$Kind* $tmp1613 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp1614 = *$tmp1613;
*(&local83) = $tmp1614;
frost$core$String** $tmp1615 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp1616 = *$tmp1615;
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1616));
frost$core$String* $tmp1617 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
*(&local84) = $tmp1616;
org$frostlang$frostc$FixedArray** $tmp1618 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1619 = *$tmp1618;
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1619));
org$frostlang$frostc$FixedArray* $tmp1620 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
*(&local85) = $tmp1619;
org$frostlang$frostc$FixedArray** $tmp1621 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp1622 = *$tmp1621;
*(&local86) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1622));
org$frostlang$frostc$FixedArray* $tmp1623 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
*(&local86) = $tmp1622;
org$frostlang$frostc$ASTNode** $tmp1624 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
org$frostlang$frostc$ASTNode* $tmp1625 = *$tmp1624;
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
org$frostlang$frostc$ASTNode* $tmp1626 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
*(&local87) = $tmp1625;
org$frostlang$frostc$FixedArray** $tmp1627 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp1628 = *$tmp1627;
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1628));
org$frostlang$frostc$FixedArray* $tmp1629 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
*(&local88) = $tmp1628;
// line 452
frost$core$MutableString* $tmp1630 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1630);
*(&local89) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1630));
frost$core$MutableString* $tmp1631 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1631));
*(&local89) = $tmp1630;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1630));
// unreffing REF($2704:frost.core.MutableString)
// line 453
org$frostlang$frostc$ASTNode* $tmp1632 = *(&local81);
frost$core$Bit $tmp1633 = frost$core$Bit$init$builtin_bit($tmp1632 != NULL);
bool $tmp1634 = $tmp1633.value;
if ($tmp1634) goto block160; else goto block161;
block160:;
// line 454
frost$core$MutableString* $tmp1635 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1636 = *(&local81);
frost$core$Bit $tmp1637 = frost$core$Bit$init$builtin_bit($tmp1636 != NULL);
bool $tmp1638 = $tmp1637.value;
if ($tmp1638) goto block162; else goto block163;
block163:;
frost$core$Int64 $tmp1639 = (frost$core$Int64) {454};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1640, $tmp1639, &$s1641);
abort(); // unreachable
block162:;
frost$core$String* $tmp1642 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1636), &$s1643);
frost$core$MutableString$append$frost$core$String($tmp1635, $tmp1642);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
// unreffing REF($2733:frost.core.String)
goto block161;
block161:;
// line 456
org$frostlang$frostc$FixedArray* $tmp1644 = *(&local82);
ITable* $tmp1645 = ((frost$collections$Iterable*) $tmp1644)->$class->itable;
while ($tmp1645->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1645 = $tmp1645->next;
}
$fn1647 $tmp1646 = $tmp1645->methods[0];
frost$collections$Iterator* $tmp1648 = $tmp1646(((frost$collections$Iterable*) $tmp1644));
goto block164;
block164:;
ITable* $tmp1649 = $tmp1648->$class->itable;
while ($tmp1649->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1649 = $tmp1649->next;
}
$fn1651 $tmp1650 = $tmp1649->methods[0];
frost$core$Bit $tmp1652 = $tmp1650($tmp1648);
bool $tmp1653 = $tmp1652.value;
if ($tmp1653) goto block166; else goto block165;
block165:;
*(&local90) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1654 = $tmp1648->$class->itable;
while ($tmp1654->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1654 = $tmp1654->next;
}
$fn1656 $tmp1655 = $tmp1654->methods[1];
frost$core$Object* $tmp1657 = $tmp1655($tmp1648);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1657)));
org$frostlang$frostc$ASTNode* $tmp1658 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
*(&local90) = ((org$frostlang$frostc$ASTNode*) $tmp1657);
// line 457
frost$core$MutableString* $tmp1659 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1660 = *(&local90);
frost$core$String* $tmp1661 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1660), &$s1662);
frost$core$MutableString$append$frost$core$String($tmp1659, $tmp1661);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1661));
// unreffing REF($2767:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1657);
// unreffing REF($2755:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1663 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
// unreffing a
*(&local90) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block164;
block166:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
// unreffing REF($2744:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 459
org$frostlang$frostc$MethodDecl$Kind $tmp1664 = *(&local83);
frost$core$Int64 $tmp1665 = $tmp1664.$rawValue;
frost$core$Int64 $tmp1666 = (frost$core$Int64) {0};
frost$core$Bit $tmp1667 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1665, $tmp1666);
bool $tmp1668 = $tmp1667.value;
if ($tmp1668) goto block168; else goto block169;
block168:;
// line 460
frost$core$MutableString* $tmp1669 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1669, &$s1670);
goto block167;
block169:;
frost$core$Int64 $tmp1671 = (frost$core$Int64) {1};
frost$core$Bit $tmp1672 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1665, $tmp1671);
bool $tmp1673 = $tmp1672.value;
if ($tmp1673) goto block170; else goto block171;
block170:;
// line 461
frost$core$MutableString* $tmp1674 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1674, &$s1675);
goto block167;
block171:;
frost$core$Int64 $tmp1676 = (frost$core$Int64) {2};
frost$core$Bit $tmp1677 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1665, $tmp1676);
bool $tmp1678 = $tmp1677.value;
if ($tmp1678) goto block172; else goto block167;
block172:;
goto block167;
block167:;
// line 464
frost$core$MutableString* $tmp1679 = *(&local89);
frost$core$String* $tmp1680 = *(&local84);
frost$core$MutableString$append$frost$core$String($tmp1679, $tmp1680);
// line 465
org$frostlang$frostc$FixedArray* $tmp1681 = *(&local85);
frost$core$Bit $tmp1682 = frost$core$Bit$init$builtin_bit($tmp1681 != NULL);
bool $tmp1683 = $tmp1682.value;
if ($tmp1683) goto block173; else goto block174;
block173:;
// line 466
frost$core$MutableString* $tmp1684 = *(&local89);
org$frostlang$frostc$FixedArray* $tmp1685 = *(&local85);
frost$core$Bit $tmp1686 = frost$core$Bit$init$builtin_bit($tmp1685 != NULL);
bool $tmp1687 = $tmp1686.value;
if ($tmp1687) goto block175; else goto block176;
block176:;
frost$core$Int64 $tmp1688 = (frost$core$Int64) {466};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1689, $tmp1688, &$s1690);
abort(); // unreachable
block175:;
ITable* $tmp1691 = ((frost$collections$CollectionView*) $tmp1685)->$class->itable;
while ($tmp1691->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1691 = $tmp1691->next;
}
$fn1693 $tmp1692 = $tmp1691->methods[1];
frost$core$String* $tmp1694 = $tmp1692(((frost$collections$CollectionView*) $tmp1685));
frost$core$String* $tmp1695 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1696, $tmp1694);
frost$core$String* $tmp1697 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1695, &$s1698);
frost$core$MutableString$append$frost$core$String($tmp1684, $tmp1697);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
// unreffing REF($2832:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
// unreffing REF($2831:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1694));
// unreffing REF($2830:frost.core.String)
goto block174;
block174:;
// line 468
frost$core$MutableString* $tmp1699 = *(&local89);
org$frostlang$frostc$FixedArray* $tmp1700 = *(&local86);
ITable* $tmp1701 = ((frost$collections$CollectionView*) $tmp1700)->$class->itable;
while ($tmp1701->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1701 = $tmp1701->next;
}
$fn1703 $tmp1702 = $tmp1701->methods[1];
frost$core$String* $tmp1704 = $tmp1702(((frost$collections$CollectionView*) $tmp1700));
frost$core$String* $tmp1705 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1706, $tmp1704);
frost$core$String* $tmp1707 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1705, &$s1708);
frost$core$MutableString$append$frost$core$String($tmp1699, $tmp1707);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
// unreffing REF($2851:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
// unreffing REF($2850:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
// unreffing REF($2849:frost.core.String)
// line 469
org$frostlang$frostc$ASTNode* $tmp1709 = *(&local87);
frost$core$Bit $tmp1710 = frost$core$Bit$init$builtin_bit($tmp1709 != NULL);
bool $tmp1711 = $tmp1710.value;
if ($tmp1711) goto block177; else goto block178;
block177:;
// line 470
frost$core$MutableString* $tmp1712 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1713 = *(&local87);
frost$core$Bit $tmp1714 = frost$core$Bit$init$builtin_bit($tmp1713 != NULL);
bool $tmp1715 = $tmp1714.value;
if ($tmp1715) goto block179; else goto block180;
block180:;
frost$core$Int64 $tmp1716 = (frost$core$Int64) {470};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1717, $tmp1716, &$s1718);
abort(); // unreachable
block179:;
frost$core$String* $tmp1719 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1720, ((frost$core$Object*) $tmp1713));
frost$core$String* $tmp1721 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1719, &$s1722);
frost$core$MutableString$append$frost$core$String($tmp1712, $tmp1721);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
// unreffing REF($2880:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
// unreffing REF($2879:frost.core.String)
goto block178;
block178:;
// line 472
org$frostlang$frostc$FixedArray* $tmp1723 = *(&local88);
frost$core$Bit $tmp1724 = frost$core$Bit$init$builtin_bit($tmp1723 != NULL);
bool $tmp1725 = $tmp1724.value;
if ($tmp1725) goto block181; else goto block182;
block181:;
// line 473
frost$core$MutableString* $tmp1726 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1726, &$s1727);
// line 474
org$frostlang$frostc$FixedArray* $tmp1728 = *(&local88);
frost$core$Bit $tmp1729 = frost$core$Bit$init$builtin_bit($tmp1728 != NULL);
bool $tmp1730 = $tmp1729.value;
if ($tmp1730) goto block183; else goto block184;
block184:;
frost$core$Int64 $tmp1731 = (frost$core$Int64) {474};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1732, $tmp1731, &$s1733);
abort(); // unreachable
block183:;
ITable* $tmp1734 = ((frost$collections$Iterable*) $tmp1728)->$class->itable;
while ($tmp1734->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1734 = $tmp1734->next;
}
$fn1736 $tmp1735 = $tmp1734->methods[0];
frost$collections$Iterator* $tmp1737 = $tmp1735(((frost$collections$Iterable*) $tmp1728));
goto block185;
block185:;
ITable* $tmp1738 = $tmp1737->$class->itable;
while ($tmp1738->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1738 = $tmp1738->next;
}
$fn1740 $tmp1739 = $tmp1738->methods[0];
frost$core$Bit $tmp1741 = $tmp1739($tmp1737);
bool $tmp1742 = $tmp1741.value;
if ($tmp1742) goto block187; else goto block186;
block186:;
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1743 = $tmp1737->$class->itable;
while ($tmp1743->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1743 = $tmp1743->next;
}
$fn1745 $tmp1744 = $tmp1743->methods[1];
frost$core$Object* $tmp1746 = $tmp1744($tmp1737);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1746)));
org$frostlang$frostc$ASTNode* $tmp1747 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
*(&local91) = ((org$frostlang$frostc$ASTNode*) $tmp1746);
// line 475
frost$core$MutableString* $tmp1748 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1749 = *(&local91);
frost$core$String* $tmp1750 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1749), &$s1751);
frost$core$MutableString$append$frost$core$String($tmp1748, $tmp1750);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
// unreffing REF($2933:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1746);
// unreffing REF($2921:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1752 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
// unreffing s
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block185;
block187:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
// unreffing REF($2910:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 477
frost$core$MutableString* $tmp1753 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1753, &$s1754);
goto block182;
block182:;
// line 479
frost$core$MutableString* $tmp1755 = *(&local89);
frost$core$String* $tmp1756 = frost$core$MutableString$finish$R$frost$core$String($tmp1755);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1756));
// unreffing REF($2956:frost.core.String)
frost$core$MutableString* $tmp1757 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1757));
// unreffing result
*(&local89) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1758 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1758));
// unreffing statements
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1759 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
// unreffing returnType
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1760 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
// unreffing parameters
*(&local86) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1761 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
// unreffing generics
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1762 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1762));
// unreffing name
*(&local84) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1763 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1763));
// unreffing annotations
*(&local82) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1764 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1764));
// unreffing dc
*(&local81) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1756;
block159:;
frost$core$Int64 $tmp1765 = (frost$core$Int64) {30};
frost$core$Bit $tmp1766 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1765);
bool $tmp1767 = $tmp1766.value;
if ($tmp1767) goto block188; else goto block189;
block188:;
org$frostlang$frostc$Position* $tmp1768 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1769 = *$tmp1768;
org$frostlang$frostc$parser$Token$Kind* $tmp1770 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp1771 = *$tmp1770;
*(&local92) = $tmp1771;
org$frostlang$frostc$FixedArray** $tmp1772 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1773 = *$tmp1772;
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1773));
org$frostlang$frostc$FixedArray* $tmp1774 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1774));
*(&local93) = $tmp1773;
org$frostlang$frostc$ASTNode** $tmp1775 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1776 = *$tmp1775;
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
org$frostlang$frostc$ASTNode* $tmp1777 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1777));
*(&local94) = $tmp1776;
// line 482
*(&local95) = ((frost$core$String*) NULL);
// line 483
org$frostlang$frostc$parser$Token$Kind $tmp1778 = *(&local92);
frost$core$Int64 $tmp1779 = $tmp1778.$rawValue;
frost$core$Int64 $tmp1780 = (frost$core$Int64) {91};
frost$core$Bit $tmp1781 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1779, $tmp1780);
bool $tmp1782 = $tmp1781.value;
if ($tmp1782) goto block191; else goto block192;
block191:;
// line 485
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1783));
frost$core$String* $tmp1784 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
*(&local95) = &$s1785;
goto block190;
block192:;
frost$core$Int64 $tmp1786 = (frost$core$Int64) {92};
frost$core$Bit $tmp1787 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1779, $tmp1786);
bool $tmp1788 = $tmp1787.value;
if ($tmp1788) goto block193; else goto block194;
block193:;
// line 488
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1789));
frost$core$String* $tmp1790 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1790));
*(&local95) = &$s1791;
goto block190;
block194:;
frost$core$Int64 $tmp1792 = (frost$core$Int64) {93};
frost$core$Bit $tmp1793 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1779, $tmp1792);
bool $tmp1794 = $tmp1793.value;
if ($tmp1794) goto block195; else goto block196;
block195:;
// line 491
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1795));
frost$core$String* $tmp1796 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
*(&local95) = &$s1797;
goto block190;
block196:;
frost$core$Int64 $tmp1798 = (frost$core$Int64) {94};
frost$core$Bit $tmp1799 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1779, $tmp1798);
bool $tmp1800 = $tmp1799.value;
if ($tmp1800) goto block197; else goto block190;
block197:;
// line 494
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1801));
frost$core$String* $tmp1802 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
*(&local95) = &$s1803;
goto block190;
block190:;
// line 497
org$frostlang$frostc$FixedArray* $tmp1804 = *(&local93);
ITable* $tmp1805 = ((frost$collections$CollectionView*) $tmp1804)->$class->itable;
while ($tmp1805->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1805 = $tmp1805->next;
}
$fn1807 $tmp1806 = $tmp1805->methods[1];
frost$core$String* $tmp1808 = $tmp1806(((frost$collections$CollectionView*) $tmp1804));
frost$core$String* $tmp1809 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1810, $tmp1808);
frost$core$String* $tmp1811 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1809, &$s1812);
frost$core$String* $tmp1813 = *(&local95);
frost$core$String* $tmp1814 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1811, $tmp1813);
frost$core$String* $tmp1815 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1814, &$s1816);
*(&local96) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
frost$core$String* $tmp1817 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1817));
*(&local96) = $tmp1815;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
// unreffing REF($3092:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
// unreffing REF($3091:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1811));
// unreffing REF($3089:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
// unreffing REF($3088:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1808));
// unreffing REF($3087:frost.core.String)
// line 498
org$frostlang$frostc$ASTNode* $tmp1818 = *(&local94);
frost$core$Bit $tmp1819 = frost$core$Bit$init$builtin_bit($tmp1818 != NULL);
bool $tmp1820 = $tmp1819.value;
if ($tmp1820) goto block198; else goto block199;
block198:;
// line 499
frost$core$String* $tmp1821 = *(&local96);
frost$core$String* $tmp1822 = frost$core$String$convert$R$frost$core$String($tmp1821);
frost$core$String* $tmp1823 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1822, &$s1824);
org$frostlang$frostc$ASTNode* $tmp1825 = *(&local94);
frost$core$Bit $tmp1826 = frost$core$Bit$init$builtin_bit($tmp1825 != NULL);
bool $tmp1827 = $tmp1826.value;
if ($tmp1827) goto block200; else goto block201;
block201:;
frost$core$Int64 $tmp1828 = (frost$core$Int64) {499};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1829, $tmp1828, &$s1830);
abort(); // unreachable
block200:;
frost$core$String* $tmp1831 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1823, ((frost$core$Object*) $tmp1825));
frost$core$String* $tmp1832 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1831, &$s1833);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
// unreffing REF($3135:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
// unreffing REF($3134:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
// unreffing REF($3124:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
// unreffing REF($3123:frost.core.String)
frost$core$String* $tmp1834 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
// unreffing partial
*(&local96) = ((frost$core$String*) NULL);
frost$core$String* $tmp1835 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
// unreffing yield
*(&local95) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1836 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1836));
// unreffing returnType
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1837 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1837));
// unreffing paramTypes
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1832;
block199:;
// line 501
frost$core$String* $tmp1838 = *(&local96);
frost$core$String* $tmp1839 = frost$core$String$convert$R$frost$core$String($tmp1838);
frost$core$String* $tmp1840 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1839, &$s1841);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
// unreffing REF($3174:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
// unreffing REF($3173:frost.core.String)
frost$core$String* $tmp1842 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
// unreffing partial
*(&local96) = ((frost$core$String*) NULL);
frost$core$String* $tmp1843 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1843));
// unreffing yield
*(&local95) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1844 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
// unreffing returnType
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1845 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
// unreffing paramTypes
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1840;
block189:;
frost$core$Int64 $tmp1846 = (frost$core$Int64) {31};
frost$core$Bit $tmp1847 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1846);
bool $tmp1848 = $tmp1847.value;
if ($tmp1848) goto block202; else goto block203;
block202:;
// line 504
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1849));
return &$s1850;
block203:;
frost$core$Int64 $tmp1851 = (frost$core$Int64) {32};
frost$core$Bit $tmp1852 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1851);
bool $tmp1853 = $tmp1852.value;
if ($tmp1853) goto block204; else goto block205;
block204:;
org$frostlang$frostc$Position* $tmp1854 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1855 = *$tmp1854;
org$frostlang$frostc$ASTNode** $tmp1856 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1857 = *$tmp1856;
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
org$frostlang$frostc$ASTNode* $tmp1858 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
*(&local97) = $tmp1857;
// line 507
org$frostlang$frostc$ASTNode* $tmp1859 = *(&local97);
frost$core$String* $tmp1860 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1859), &$s1861);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
// unreffing REF($3230:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1862 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
// unreffing base
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1860;
block205:;
frost$core$Int64 $tmp1863 = (frost$core$Int64) {33};
frost$core$Bit $tmp1864 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1863);
bool $tmp1865 = $tmp1864.value;
if ($tmp1865) goto block206; else goto block207;
block206:;
org$frostlang$frostc$Position* $tmp1866 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1867 = *$tmp1866;
frost$core$String** $tmp1868 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1869 = *$tmp1868;
*(&local98) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
frost$core$String* $tmp1870 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
*(&local98) = $tmp1869;
// line 510
frost$core$String* $tmp1871 = *(&local98);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
frost$core$String* $tmp1872 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
// unreffing name
*(&local98) = ((frost$core$String*) NULL);
return $tmp1871;
block207:;
frost$core$Int64 $tmp1873 = (frost$core$Int64) {34};
frost$core$Bit $tmp1874 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1873);
bool $tmp1875 = $tmp1874.value;
if ($tmp1875) goto block208; else goto block209;
block208:;
org$frostlang$frostc$Position* $tmp1876 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1877 = *$tmp1876;
frost$core$String** $tmp1878 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1879 = *$tmp1878;
*(&local99) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
frost$core$String* $tmp1880 = *(&local99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
*(&local99) = $tmp1879;
org$frostlang$frostc$ASTNode** $tmp1881 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1882 = *$tmp1881;
*(&local100) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
org$frostlang$frostc$ASTNode* $tmp1883 = *(&local100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
*(&local100) = $tmp1882;
// line 513
frost$core$String* $tmp1884 = *(&local99);
frost$core$String* $tmp1885 = frost$core$String$convert$R$frost$core$String($tmp1884);
frost$core$String* $tmp1886 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1885, &$s1887);
org$frostlang$frostc$ASTNode* $tmp1888 = *(&local100);
frost$core$String* $tmp1889 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1886, ((frost$core$Object*) $tmp1888));
frost$core$String* $tmp1890 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1889, &$s1891);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
// unreffing REF($3298:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1889));
// unreffing REF($3297:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
// unreffing REF($3294:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1885));
// unreffing REF($3293:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1892 = *(&local100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
// unreffing type
*(&local100) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1893 = *(&local99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
// unreffing name
*(&local99) = ((frost$core$String*) NULL);
return $tmp1890;
block209:;
frost$core$Int64 $tmp1894 = (frost$core$Int64) {35};
frost$core$Bit $tmp1895 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1894);
bool $tmp1896 = $tmp1895.value;
if ($tmp1896) goto block210; else goto block211;
block210:;
org$frostlang$frostc$Position* $tmp1897 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1898 = *$tmp1897;
org$frostlang$frostc$parser$Token$Kind* $tmp1899 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp1900 = *$tmp1899;
*(&local101) = $tmp1900;
org$frostlang$frostc$ASTNode** $tmp1901 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1902 = *$tmp1901;
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
org$frostlang$frostc$ASTNode* $tmp1903 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
*(&local102) = $tmp1902;
// line 516
org$frostlang$frostc$parser$Token$Kind $tmp1904 = *(&local101);
frost$core$String* $tmp1905 = org$frostlang$frostc$parser$Token$Kind$convert$R$frost$core$String($tmp1904);
frost$core$String* $tmp1906 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1905, &$s1907);
org$frostlang$frostc$ASTNode* $tmp1908 = *(&local102);
frost$core$String* $tmp1909 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1906, ((frost$core$Object*) $tmp1908));
frost$core$String* $tmp1910 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1909, &$s1911);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
// unreffing REF($3349:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1909));
// unreffing REF($3348:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
// unreffing REF($3345:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
// unreffing REF($3344:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1912 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
// unreffing base
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1910;
block211:;
frost$core$Int64 $tmp1913 = (frost$core$Int64) {36};
frost$core$Bit $tmp1914 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1913);
bool $tmp1915 = $tmp1914.value;
if ($tmp1915) goto block212; else goto block213;
block212:;
org$frostlang$frostc$Position* $tmp1916 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1917 = *$tmp1916;
org$frostlang$frostc$ASTNode** $tmp1918 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1919 = *$tmp1918;
*(&local103) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
org$frostlang$frostc$ASTNode* $tmp1920 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1920));
*(&local103) = $tmp1919;
frost$core$Bit* $tmp1921 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp1922 = *$tmp1921;
*(&local104) = $tmp1922;
org$frostlang$frostc$ASTNode** $tmp1923 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
org$frostlang$frostc$ASTNode* $tmp1924 = *$tmp1923;
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
org$frostlang$frostc$ASTNode* $tmp1925 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
*(&local105) = $tmp1924;
org$frostlang$frostc$ASTNode** $tmp1926 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp1927 = *$tmp1926;
*(&local106) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1927));
org$frostlang$frostc$ASTNode* $tmp1928 = *(&local106);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
*(&local106) = $tmp1927;
// line 519
frost$core$MutableString* $tmp1929 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1929);
*(&local107) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
frost$core$MutableString* $tmp1930 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1930));
*(&local107) = $tmp1929;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
// unreffing REF($3407:frost.core.MutableString)
// line 520
org$frostlang$frostc$ASTNode* $tmp1931 = *(&local103);
frost$core$Bit $tmp1932 = frost$core$Bit$init$builtin_bit($tmp1931 != NULL);
bool $tmp1933 = $tmp1932.value;
if ($tmp1933) goto block214; else goto block215;
block214:;
// line 521
frost$core$MutableString* $tmp1934 = *(&local107);
org$frostlang$frostc$ASTNode* $tmp1935 = *(&local103);
frost$core$Bit $tmp1936 = frost$core$Bit$init$builtin_bit($tmp1935 != NULL);
bool $tmp1937 = $tmp1936.value;
if ($tmp1937) goto block216; else goto block217;
block217:;
frost$core$Int64 $tmp1938 = (frost$core$Int64) {521};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1939, $tmp1938, &$s1940);
abort(); // unreachable
block216:;
frost$core$MutableString$append$frost$core$Object($tmp1934, ((frost$core$Object*) $tmp1935));
goto block215;
block215:;
// line 523
frost$core$Bit $tmp1941 = *(&local104);
bool $tmp1942 = $tmp1941.value;
if ($tmp1942) goto block218; else goto block220;
block218:;
// line 524
frost$core$MutableString* $tmp1943 = *(&local107);
frost$core$MutableString$append$frost$core$String($tmp1943, &$s1944);
goto block219;
block220:;
// line 1
// line 527
frost$core$MutableString* $tmp1945 = *(&local107);
frost$core$MutableString$append$frost$core$String($tmp1945, &$s1946);
goto block219;
block219:;
// line 529
org$frostlang$frostc$ASTNode* $tmp1947 = *(&local105);
frost$core$Bit $tmp1948 = frost$core$Bit$init$builtin_bit($tmp1947 != NULL);
bool $tmp1949 = $tmp1948.value;
if ($tmp1949) goto block221; else goto block222;
block221:;
// line 530
frost$core$MutableString* $tmp1950 = *(&local107);
org$frostlang$frostc$ASTNode* $tmp1951 = *(&local105);
frost$core$Bit $tmp1952 = frost$core$Bit$init$builtin_bit($tmp1951 != NULL);
bool $tmp1953 = $tmp1952.value;
if ($tmp1953) goto block223; else goto block224;
block224:;
frost$core$Int64 $tmp1954 = (frost$core$Int64) {530};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1955, $tmp1954, &$s1956);
abort(); // unreachable
block223:;
frost$core$MutableString$append$frost$core$Object($tmp1950, ((frost$core$Object*) $tmp1951));
goto block222;
block222:;
// line 532
org$frostlang$frostc$ASTNode* $tmp1957 = *(&local106);
frost$core$Bit $tmp1958 = frost$core$Bit$init$builtin_bit($tmp1957 != NULL);
bool $tmp1959 = $tmp1958.value;
if ($tmp1959) goto block225; else goto block226;
block225:;
// line 533
frost$core$MutableString* $tmp1960 = *(&local107);
org$frostlang$frostc$ASTNode* $tmp1961 = *(&local106);
frost$core$Bit $tmp1962 = frost$core$Bit$init$builtin_bit($tmp1961 != NULL);
bool $tmp1963 = $tmp1962.value;
if ($tmp1963) goto block227; else goto block228;
block228:;
frost$core$Int64 $tmp1964 = (frost$core$Int64) {533};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1965, $tmp1964, &$s1966);
abort(); // unreachable
block227:;
frost$core$String* $tmp1967 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1968, ((frost$core$Object*) $tmp1961));
frost$core$MutableString$append$frost$core$String($tmp1960, $tmp1967);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1967));
// unreffing REF($3487:frost.core.String)
goto block226;
block226:;
// line 535
frost$core$MutableString* $tmp1969 = *(&local107);
frost$core$String* $tmp1970 = frost$core$MutableString$finish$R$frost$core$String($tmp1969);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
// unreffing REF($3495:frost.core.String)
frost$core$MutableString* $tmp1971 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1971));
// unreffing result
*(&local107) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1972 = *(&local106);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
// unreffing step
*(&local106) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1973 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
// unreffing end
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1974 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
// unreffing start
*(&local103) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1970;
block213:;
frost$core$Int64 $tmp1975 = (frost$core$Int64) {37};
frost$core$Bit $tmp1976 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1975);
bool $tmp1977 = $tmp1976.value;
if ($tmp1977) goto block229; else goto block230;
block229:;
org$frostlang$frostc$Position* $tmp1978 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1979 = *$tmp1978;
frost$core$Real64* $tmp1980 = (frost$core$Real64*) (param0->$data + 16);
frost$core$Real64 $tmp1981 = *$tmp1980;
*(&local108) = $tmp1981;
// line 538
frost$core$Real64 $tmp1982 = *(&local108);
frost$core$String* $tmp1983 = frost$core$Real64$convert$R$frost$core$String($tmp1982);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
// unreffing REF($3533:frost.core.String)
return $tmp1983;
block230:;
frost$core$Int64 $tmp1984 = (frost$core$Int64) {38};
frost$core$Bit $tmp1985 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1984);
bool $tmp1986 = $tmp1985.value;
if ($tmp1986) goto block231; else goto block232;
block231:;
org$frostlang$frostc$Position* $tmp1987 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1988 = *$tmp1987;
frost$core$String** $tmp1989 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1990 = *$tmp1989;
*(&local109) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
frost$core$String* $tmp1991 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1991));
*(&local109) = $tmp1990;
// line 541
frost$core$String* $tmp1992 = *(&local109);
frost$core$String* $tmp1993 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1994, $tmp1992);
frost$core$String* $tmp1995 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1993, &$s1996);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
// unreffing REF($3558:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
// unreffing REF($3557:frost.core.String)
frost$core$String* $tmp1997 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1997));
// unreffing src
*(&local109) = ((frost$core$String*) NULL);
return $tmp1995;
block232:;
frost$core$Int64 $tmp1998 = (frost$core$Int64) {39};
frost$core$Bit $tmp1999 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp1998);
bool $tmp2000 = $tmp1999.value;
if ($tmp2000) goto block233; else goto block234;
block233:;
org$frostlang$frostc$Position* $tmp2001 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2002 = *$tmp2001;
org$frostlang$frostc$ASTNode** $tmp2003 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2004 = *$tmp2003;
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2004));
org$frostlang$frostc$ASTNode* $tmp2005 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
*(&local110) = $tmp2004;
// line 544
org$frostlang$frostc$ASTNode* $tmp2006 = *(&local110);
frost$core$Bit $tmp2007 = frost$core$Bit$init$builtin_bit($tmp2006 != NULL);
bool $tmp2008 = $tmp2007.value;
if ($tmp2008) goto block235; else goto block236;
block235:;
// line 545
org$frostlang$frostc$ASTNode* $tmp2009 = *(&local110);
frost$core$Bit $tmp2010 = frost$core$Bit$init$builtin_bit($tmp2009 != NULL);
bool $tmp2011 = $tmp2010.value;
if ($tmp2011) goto block237; else goto block238;
block238:;
frost$core$Int64 $tmp2012 = (frost$core$Int64) {545};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2013, $tmp2012, &$s2014);
abort(); // unreachable
block237:;
frost$core$String* $tmp2015 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2016, ((frost$core$Object*) $tmp2009));
frost$core$String* $tmp2017 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2015, &$s2018);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2017));
// unreffing REF($3605:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2015));
// unreffing REF($3604:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp2019 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
// unreffing value
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2017;
block236:;
// line 547
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2020));
org$frostlang$frostc$ASTNode* $tmp2021 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
// unreffing value
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
return &$s2022;
block234:;
frost$core$Int64 $tmp2023 = (frost$core$Int64) {40};
frost$core$Bit $tmp2024 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp2023);
bool $tmp2025 = $tmp2024.value;
if ($tmp2025) goto block239; else goto block240;
block239:;
// line 550
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2026));
return &$s2027;
block240:;
frost$core$Int64 $tmp2028 = (frost$core$Int64) {41};
frost$core$Bit $tmp2029 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp2028);
bool $tmp2030 = $tmp2029.value;
if ($tmp2030) goto block241; else goto block242;
block241:;
org$frostlang$frostc$Position* $tmp2031 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2032 = *$tmp2031;
frost$core$String** $tmp2033 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2034 = *$tmp2033;
*(&local111) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
frost$core$String* $tmp2035 = *(&local111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
*(&local111) = $tmp2034;
// line 553
frost$core$String* $tmp2036 = *(&local111);
frost$core$String* $tmp2037 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp2036, &$s2038);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2037));
// unreffing REF($3654:frost.core.String)
frost$core$String* $tmp2039 = *(&local111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2039));
// unreffing str
*(&local111) = ((frost$core$String*) NULL);
return $tmp2037;
block242:;
frost$core$Int64 $tmp2040 = (frost$core$Int64) {42};
frost$core$Bit $tmp2041 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp2040);
bool $tmp2042 = $tmp2041.value;
if ($tmp2042) goto block243; else goto block244;
block243:;
// line 556
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2043));
return &$s2044;
block244:;
frost$core$Int64 $tmp2045 = (frost$core$Int64) {43};
frost$core$Bit $tmp2046 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp2045);
bool $tmp2047 = $tmp2046.value;
if ($tmp2047) goto block245; else goto block246;
block245:;
org$frostlang$frostc$Position* $tmp2048 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2049 = *$tmp2048;
org$frostlang$frostc$FixedArray** $tmp2050 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2051 = *$tmp2050;
*(&local112) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2051));
org$frostlang$frostc$FixedArray* $tmp2052 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2052));
*(&local112) = $tmp2051;
// line 559
org$frostlang$frostc$FixedArray* $tmp2053 = *(&local112);
ITable* $tmp2054 = ((frost$collections$CollectionView*) $tmp2053)->$class->itable;
while ($tmp2054->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2054 = $tmp2054->next;
}
$fn2056 $tmp2055 = $tmp2054->methods[1];
frost$core$String* $tmp2057 = $tmp2055(((frost$collections$CollectionView*) $tmp2053));
frost$core$String* $tmp2058 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2059, $tmp2057);
frost$core$String* $tmp2060 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2058, &$s2061);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
// unreffing REF($3695:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2058));
// unreffing REF($3694:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
// unreffing REF($3693:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp2062 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
// unreffing arguments
*(&local112) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2060;
block246:;
frost$core$Int64 $tmp2063 = (frost$core$Int64) {44};
frost$core$Bit $tmp2064 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp2063);
bool $tmp2065 = $tmp2064.value;
if ($tmp2065) goto block247; else goto block248;
block247:;
org$frostlang$frostc$Position* $tmp2066 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2067 = *$tmp2066;
org$frostlang$frostc$FixedArray** $tmp2068 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2069 = *$tmp2068;
*(&local113) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
org$frostlang$frostc$FixedArray* $tmp2070 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2070));
*(&local113) = $tmp2069;
// line 562
org$frostlang$frostc$FixedArray* $tmp2071 = *(&local113);
ITable* $tmp2072 = ((frost$collections$CollectionView*) $tmp2071)->$class->itable;
while ($tmp2072->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2072 = $tmp2072->next;
}
$fn2074 $tmp2073 = $tmp2072->methods[1];
frost$core$String* $tmp2075 = $tmp2073(((frost$collections$CollectionView*) $tmp2071));
frost$core$String* $tmp2076 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2077, $tmp2075);
frost$core$String* $tmp2078 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2076, &$s2079);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
// unreffing REF($3734:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2076));
// unreffing REF($3733:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
// unreffing REF($3732:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp2080 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2080));
// unreffing parameters
*(&local113) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2078;
block248:;
frost$core$Int64 $tmp2081 = (frost$core$Int64) {45};
frost$core$Bit $tmp2082 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp2081);
bool $tmp2083 = $tmp2082.value;
if ($tmp2083) goto block249; else goto block250;
block249:;
org$frostlang$frostc$Position* $tmp2084 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2085 = *$tmp2084;
frost$core$String** $tmp2086 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2087 = *$tmp2086;
*(&local114) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2087));
frost$core$String* $tmp2088 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
*(&local114) = $tmp2087;
// line 565
frost$core$String* $tmp2089 = *(&local114);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2089));
frost$core$String* $tmp2090 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
// unreffing name
*(&local114) = ((frost$core$String*) NULL);
return $tmp2089;
block250:;
frost$core$Int64 $tmp2091 = (frost$core$Int64) {47};
frost$core$Bit $tmp2092 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp2091);
bool $tmp2093 = $tmp2092.value;
if ($tmp2093) goto block251; else goto block252;
block251:;
org$frostlang$frostc$Position* $tmp2094 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2095 = *$tmp2094;
frost$core$String** $tmp2096 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2097 = *$tmp2096;
*(&local115) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
frost$core$String* $tmp2098 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
*(&local115) = $tmp2097;
org$frostlang$frostc$ASTNode** $tmp2099 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2100 = *$tmp2099;
*(&local116) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2100));
org$frostlang$frostc$ASTNode* $tmp2101 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2101));
*(&local116) = $tmp2100;
// line 568
org$frostlang$frostc$ASTNode* $tmp2102 = *(&local116);
frost$core$Bit $tmp2103 = frost$core$Bit$init$builtin_bit($tmp2102 != NULL);
bool $tmp2104 = $tmp2103.value;
if ($tmp2104) goto block253; else goto block254;
block253:;
// line 569
frost$core$String* $tmp2105 = *(&local115);
frost$core$String* $tmp2106 = frost$core$String$convert$R$frost$core$String($tmp2105);
frost$core$String* $tmp2107 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2106, &$s2108);
org$frostlang$frostc$ASTNode* $tmp2109 = *(&local116);
frost$core$Bit $tmp2110 = frost$core$Bit$init$builtin_bit($tmp2109 != NULL);
bool $tmp2111 = $tmp2110.value;
if ($tmp2111) goto block255; else goto block256;
block256:;
frost$core$Int64 $tmp2112 = (frost$core$Int64) {569};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2113, $tmp2112, &$s2114);
abort(); // unreachable
block255:;
frost$core$String* $tmp2115 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2107, ((frost$core$Object*) $tmp2109));
frost$core$String* $tmp2116 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2115, &$s2117);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2116));
// unreffing REF($3821:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
// unreffing REF($3820:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2107));
// unreffing REF($3810:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
// unreffing REF($3809:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp2118 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
// unreffing type
*(&local116) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2119 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
// unreffing name
*(&local115) = ((frost$core$String*) NULL);
return $tmp2116;
block254:;
// line 571
frost$core$String* $tmp2120 = *(&local115);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
org$frostlang$frostc$ASTNode* $tmp2121 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
// unreffing type
*(&local116) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2122 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
// unreffing name
*(&local115) = ((frost$core$String*) NULL);
return $tmp2120;
block252:;
frost$core$Int64 $tmp2123 = (frost$core$Int64) {46};
frost$core$Bit $tmp2124 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp2123);
bool $tmp2125 = $tmp2124.value;
if ($tmp2125) goto block257; else goto block258;
block257:;
org$frostlang$frostc$Position* $tmp2126 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2127 = *$tmp2126;
org$frostlang$frostc$FixedArray** $tmp2128 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2129 = *$tmp2128;
*(&local117) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
org$frostlang$frostc$FixedArray* $tmp2130 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
*(&local117) = $tmp2129;
org$frostlang$frostc$ASTNode** $tmp2131 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2132 = *$tmp2131;
*(&local118) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
org$frostlang$frostc$ASTNode* $tmp2133 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
*(&local118) = $tmp2132;
// line 574
org$frostlang$frostc$FixedArray* $tmp2134 = *(&local117);
ITable* $tmp2135 = ((frost$collections$CollectionView*) $tmp2134)->$class->itable;
while ($tmp2135->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2135 = $tmp2135->next;
}
$fn2137 $tmp2136 = $tmp2135->methods[1];
frost$core$String* $tmp2138 = $tmp2136(((frost$collections$CollectionView*) $tmp2134));
frost$core$String* $tmp2139 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2140, $tmp2138);
frost$core$String* $tmp2141 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2139, &$s2142);
org$frostlang$frostc$ASTNode* $tmp2143 = *(&local118);
frost$core$String* $tmp2144 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2141, ((frost$core$Object*) $tmp2143));
frost$core$String* $tmp2145 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2144, &$s2146);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2145));
// unreffing REF($3896:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2144));
// unreffing REF($3895:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2141));
// unreffing REF($3892:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
// unreffing REF($3891:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
// unreffing REF($3890:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp2147 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
// unreffing body
*(&local118) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2148 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2148));
// unreffing parameters
*(&local117) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2145;
block258:;
frost$core$Int64 $tmp2149 = (frost$core$Int64) {48};
frost$core$Bit $tmp2150 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp2149);
bool $tmp2151 = $tmp2150.value;
if ($tmp2151) goto block259; else goto block260;
block259:;
org$frostlang$frostc$Position* $tmp2152 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2153 = *$tmp2152;
org$frostlang$frostc$FixedArray** $tmp2154 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2155 = *$tmp2154;
*(&local119) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
org$frostlang$frostc$FixedArray* $tmp2156 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
*(&local119) = $tmp2155;
org$frostlang$frostc$ASTNode** $tmp2157 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2158 = *$tmp2157;
*(&local120) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
org$frostlang$frostc$ASTNode* $tmp2159 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
*(&local120) = $tmp2158;
// line 577
org$frostlang$frostc$FixedArray* $tmp2160 = *(&local119);
ITable* $tmp2161 = ((frost$collections$CollectionView*) $tmp2160)->$class->itable;
while ($tmp2161->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2161 = $tmp2161->next;
}
$fn2163 $tmp2162 = $tmp2161->methods[1];
frost$core$String* $tmp2164 = $tmp2162(((frost$collections$CollectionView*) $tmp2160));
frost$core$String* $tmp2165 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2166, $tmp2164);
frost$core$String* $tmp2167 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2165, &$s2168);
org$frostlang$frostc$ASTNode* $tmp2169 = *(&local120);
frost$core$String* $tmp2170 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2167, ((frost$core$Object*) $tmp2169));
frost$core$String* $tmp2171 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2170, &$s2172);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2171));
// unreffing REF($3959:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
// unreffing REF($3958:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2167));
// unreffing REF($3955:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2165));
// unreffing REF($3954:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
// unreffing REF($3953:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp2173 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2173));
// unreffing body
*(&local120) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2174 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2174));
// unreffing parameters
*(&local119) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2171;
block260:;
frost$core$Int64 $tmp2175 = (frost$core$Int64) {49};
frost$core$Bit $tmp2176 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp2175);
bool $tmp2177 = $tmp2176.value;
if ($tmp2177) goto block261; else goto block262;
block261:;
org$frostlang$frostc$Position* $tmp2178 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2179 = *$tmp2178;
frost$core$String** $tmp2180 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2181 = *$tmp2180;
*(&local121) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
frost$core$String* $tmp2182 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
*(&local121) = $tmp2181;
// line 580
frost$core$String* $tmp2183 = *(&local121);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2183));
frost$core$String* $tmp2184 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
// unreffing name
*(&local121) = ((frost$core$String*) NULL);
return $tmp2183;
block262:;
frost$core$Int64 $tmp2185 = (frost$core$Int64) {50};
frost$core$Bit $tmp2186 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp2185);
bool $tmp2187 = $tmp2186.value;
if ($tmp2187) goto block263; else goto block264;
block263:;
org$frostlang$frostc$Position* $tmp2188 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2189 = *$tmp2188;
org$frostlang$frostc$Variable$Kind* $tmp2190 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp2191 = *$tmp2190;
*(&local122) = $tmp2191;
org$frostlang$frostc$FixedArray** $tmp2192 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2193 = *$tmp2192;
*(&local123) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2193));
org$frostlang$frostc$FixedArray* $tmp2194 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
*(&local123) = $tmp2193;
// line 583
frost$core$MutableString* $tmp2195 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2195);
*(&local124) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
frost$core$MutableString* $tmp2196 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
*(&local124) = $tmp2195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
// unreffing REF($4032:frost.core.MutableString)
// line 584
org$frostlang$frostc$Variable$Kind $tmp2197 = *(&local122);
frost$core$Int64 $tmp2198 = $tmp2197.$rawValue;
frost$core$Int64 $tmp2199 = (frost$core$Int64) {0};
frost$core$Bit $tmp2200 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2198, $tmp2199);
bool $tmp2201 = $tmp2200.value;
if ($tmp2201) goto block266; else goto block267;
block266:;
// line 585
frost$core$MutableString* $tmp2202 = *(&local124);
frost$core$MutableString$append$frost$core$String($tmp2202, &$s2203);
goto block265;
block267:;
frost$core$Int64 $tmp2204 = (frost$core$Int64) {1};
frost$core$Bit $tmp2205 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2198, $tmp2204);
bool $tmp2206 = $tmp2205.value;
if ($tmp2206) goto block268; else goto block269;
block268:;
// line 586
frost$core$MutableString* $tmp2207 = *(&local124);
frost$core$MutableString$append$frost$core$String($tmp2207, &$s2208);
goto block265;
block269:;
frost$core$Int64 $tmp2209 = (frost$core$Int64) {2};
frost$core$Bit $tmp2210 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2198, $tmp2209);
bool $tmp2211 = $tmp2210.value;
if ($tmp2211) goto block270; else goto block271;
block270:;
// line 587
frost$core$MutableString* $tmp2212 = *(&local124);
frost$core$MutableString$append$frost$core$String($tmp2212, &$s2213);
goto block265;
block271:;
frost$core$Int64 $tmp2214 = (frost$core$Int64) {3};
frost$core$Bit $tmp2215 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2198, $tmp2214);
bool $tmp2216 = $tmp2215.value;
if ($tmp2216) goto block272; else goto block265;
block272:;
// line 588
frost$core$MutableString* $tmp2217 = *(&local124);
frost$core$MutableString$append$frost$core$String($tmp2217, &$s2218);
goto block265;
block265:;
// line 590
frost$core$MutableString* $tmp2219 = *(&local124);
org$frostlang$frostc$FixedArray* $tmp2220 = *(&local123);
ITable* $tmp2221 = ((frost$collections$CollectionView*) $tmp2220)->$class->itable;
while ($tmp2221->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2221 = $tmp2221->next;
}
$fn2223 $tmp2222 = $tmp2221->methods[1];
frost$core$String* $tmp2224 = $tmp2222(((frost$collections$CollectionView*) $tmp2220));
frost$core$MutableString$append$frost$core$String($tmp2219, $tmp2224);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
// unreffing REF($4084:frost.core.String)
// line 591
frost$core$MutableString* $tmp2225 = *(&local124);
frost$core$String* $tmp2226 = frost$core$MutableString$finish$R$frost$core$String($tmp2225);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
// unreffing REF($4091:frost.core.String)
frost$core$MutableString* $tmp2227 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2227));
// unreffing result
*(&local124) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2228 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
// unreffing decls
*(&local123) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2226;
block264:;
frost$core$Int64 $tmp2229 = (frost$core$Int64) {51};
frost$core$Bit $tmp2230 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp2229);
bool $tmp2231 = $tmp2230.value;
if ($tmp2231) goto block273; else goto block274;
block273:;
org$frostlang$frostc$Position* $tmp2232 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2233 = *$tmp2232;
org$frostlang$frostc$FixedArray** $tmp2234 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2235 = *$tmp2234;
*(&local125) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2235));
org$frostlang$frostc$FixedArray* $tmp2236 = *(&local125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2236));
*(&local125) = $tmp2235;
org$frostlang$frostc$FixedArray** $tmp2237 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2238 = *$tmp2237;
*(&local126) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2238));
org$frostlang$frostc$FixedArray* $tmp2239 = *(&local126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
*(&local126) = $tmp2238;
// line 594
frost$core$MutableString* $tmp2240 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2240, &$s2241);
*(&local127) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
frost$core$MutableString* $tmp2242 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2242));
*(&local127) = $tmp2240;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
// unreffing REF($4133:frost.core.MutableString)
// line 595
*(&local128) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2243));
frost$core$String* $tmp2244 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
*(&local128) = &$s2245;
// line 596
org$frostlang$frostc$FixedArray* $tmp2246 = *(&local125);
ITable* $tmp2247 = ((frost$collections$Iterable*) $tmp2246)->$class->itable;
while ($tmp2247->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2247 = $tmp2247->next;
}
$fn2249 $tmp2248 = $tmp2247->methods[0];
frost$collections$Iterator* $tmp2250 = $tmp2248(((frost$collections$Iterable*) $tmp2246));
goto block275;
block275:;
ITable* $tmp2251 = $tmp2250->$class->itable;
while ($tmp2251->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2251 = $tmp2251->next;
}
$fn2253 $tmp2252 = $tmp2251->methods[0];
frost$core$Bit $tmp2254 = $tmp2252($tmp2250);
bool $tmp2255 = $tmp2254.value;
if ($tmp2255) goto block277; else goto block276;
block276:;
*(&local129) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2256 = $tmp2250->$class->itable;
while ($tmp2256->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2256 = $tmp2256->next;
}
$fn2258 $tmp2257 = $tmp2256->methods[1];
frost$core$Object* $tmp2259 = $tmp2257($tmp2250);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2259)));
org$frostlang$frostc$ASTNode* $tmp2260 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
*(&local129) = ((org$frostlang$frostc$ASTNode*) $tmp2259);
// line 597
frost$core$MutableString* $tmp2261 = *(&local127);
frost$core$String* $tmp2262 = *(&local128);
frost$core$String* $tmp2263 = frost$core$String$convert$R$frost$core$String($tmp2262);
frost$core$String* $tmp2264 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2263, &$s2265);
org$frostlang$frostc$ASTNode* $tmp2266 = *(&local129);
frost$core$String* $tmp2267 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2264, ((frost$core$Object*) $tmp2266));
frost$core$String* $tmp2268 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2267, &$s2269);
frost$core$MutableString$append$frost$core$String($tmp2261, $tmp2268);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2268));
// unreffing REF($4185:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
// unreffing REF($4184:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2264));
// unreffing REF($4181:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2263));
// unreffing REF($4180:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2259);
// unreffing REF($4169:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2270 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
// unreffing t
*(&local129) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block275;
block277:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2250));
// unreffing REF($4158:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 599
frost$core$MutableString* $tmp2271 = *(&local127);
frost$core$MutableString$append$frost$core$String($tmp2271, &$s2272);
// line 600
org$frostlang$frostc$FixedArray* $tmp2273 = *(&local126);
ITable* $tmp2274 = ((frost$collections$Iterable*) $tmp2273)->$class->itable;
while ($tmp2274->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2274 = $tmp2274->next;
}
$fn2276 $tmp2275 = $tmp2274->methods[0];
frost$collections$Iterator* $tmp2277 = $tmp2275(((frost$collections$Iterable*) $tmp2273));
goto block278;
block278:;
ITable* $tmp2278 = $tmp2277->$class->itable;
while ($tmp2278->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2278 = $tmp2278->next;
}
$fn2280 $tmp2279 = $tmp2278->methods[0];
frost$core$Bit $tmp2281 = $tmp2279($tmp2277);
bool $tmp2282 = $tmp2281.value;
if ($tmp2282) goto block280; else goto block279;
block279:;
*(&local130) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2283 = $tmp2277->$class->itable;
while ($tmp2283->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2283 = $tmp2283->next;
}
$fn2285 $tmp2284 = $tmp2283->methods[1];
frost$core$Object* $tmp2286 = $tmp2284($tmp2277);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2286)));
org$frostlang$frostc$ASTNode* $tmp2287 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
*(&local130) = ((org$frostlang$frostc$ASTNode*) $tmp2286);
// line 601
frost$core$MutableString* $tmp2288 = *(&local127);
org$frostlang$frostc$ASTNode* $tmp2289 = *(&local130);
frost$core$String* $tmp2290 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2291, ((frost$core$Object*) $tmp2289));
frost$core$MutableString$append$frost$core$String($tmp2288, $tmp2290);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
// unreffing REF($4242:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2286);
// unreffing REF($4230:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2292 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
// unreffing s
*(&local130) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block278;
block280:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
// unreffing REF($4219:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 603
frost$core$MutableString* $tmp2293 = *(&local127);
frost$core$String* $tmp2294 = frost$core$MutableString$finish$R$frost$core$String($tmp2293);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2294));
// unreffing REF($4261:frost.core.String)
frost$core$String* $tmp2295 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
// unreffing separator
*(&local128) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2296 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2296));
// unreffing result
*(&local127) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2297 = *(&local126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2297));
// unreffing statements
*(&local126) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2298 = *(&local125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2298));
// unreffing tests
*(&local125) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2294;
block274:;
frost$core$Int64 $tmp2299 = (frost$core$Int64) {52};
frost$core$Bit $tmp2300 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp2299);
bool $tmp2301 = $tmp2300.value;
if ($tmp2301) goto block281; else goto block282;
block281:;
org$frostlang$frostc$Position* $tmp2302 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2303 = *$tmp2302;
frost$core$String** $tmp2304 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2305 = *$tmp2304;
*(&local131) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
frost$core$String* $tmp2306 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2306));
*(&local131) = $tmp2305;
org$frostlang$frostc$ASTNode** $tmp2307 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2308 = *$tmp2307;
*(&local132) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2308));
org$frostlang$frostc$ASTNode* $tmp2309 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
*(&local132) = $tmp2308;
org$frostlang$frostc$FixedArray** $tmp2310 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2311 = *$tmp2310;
*(&local133) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
org$frostlang$frostc$FixedArray* $tmp2312 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2312));
*(&local133) = $tmp2311;
// line 606
frost$core$MutableString* $tmp2313 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2313);
*(&local134) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
frost$core$MutableString* $tmp2314 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2314));
*(&local134) = $tmp2313;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
// unreffing REF($4322:frost.core.MutableString)
// line 607
frost$core$String* $tmp2315 = *(&local131);
frost$core$Bit $tmp2316 = frost$core$Bit$init$builtin_bit($tmp2315 != NULL);
bool $tmp2317 = $tmp2316.value;
if ($tmp2317) goto block283; else goto block284;
block283:;
// line 608
frost$core$MutableString* $tmp2318 = *(&local134);
frost$core$String* $tmp2319 = *(&local131);
frost$core$Bit $tmp2320 = frost$core$Bit$init$builtin_bit($tmp2319 != NULL);
bool $tmp2321 = $tmp2320.value;
if ($tmp2321) goto block285; else goto block286;
block286:;
frost$core$Int64 $tmp2322 = (frost$core$Int64) {608};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2323, $tmp2322, &$s2324);
abort(); // unreachable
block285:;
frost$core$String* $tmp2325 = frost$core$String$convert$R$frost$core$String($tmp2319);
frost$core$String* $tmp2326 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2325, &$s2327);
frost$core$MutableString$append$frost$core$String($tmp2318, $tmp2326);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
// unreffing REF($4352:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2325));
// unreffing REF($4351:frost.core.String)
goto block284;
block284:;
// line 610
frost$core$MutableString* $tmp2328 = *(&local134);
org$frostlang$frostc$ASTNode* $tmp2329 = *(&local132);
frost$core$String* $tmp2330 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2331, ((frost$core$Object*) $tmp2329));
frost$core$String* $tmp2332 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2330, &$s2333);
frost$core$MutableString$append$frost$core$String($tmp2328, $tmp2332);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
// unreffing REF($4366:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
// unreffing REF($4365:frost.core.String)
// line 611
org$frostlang$frostc$FixedArray* $tmp2334 = *(&local133);
ITable* $tmp2335 = ((frost$collections$Iterable*) $tmp2334)->$class->itable;
while ($tmp2335->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2335 = $tmp2335->next;
}
$fn2337 $tmp2336 = $tmp2335->methods[0];
frost$collections$Iterator* $tmp2338 = $tmp2336(((frost$collections$Iterable*) $tmp2334));
goto block287;
block287:;
ITable* $tmp2339 = $tmp2338->$class->itable;
while ($tmp2339->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2339 = $tmp2339->next;
}
$fn2341 $tmp2340 = $tmp2339->methods[0];
frost$core$Bit $tmp2342 = $tmp2340($tmp2338);
bool $tmp2343 = $tmp2342.value;
if ($tmp2343) goto block289; else goto block288;
block288:;
*(&local135) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2344 = $tmp2338->$class->itable;
while ($tmp2344->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2344 = $tmp2344->next;
}
$fn2346 $tmp2345 = $tmp2344->methods[1];
frost$core$Object* $tmp2347 = $tmp2345($tmp2338);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2347)));
org$frostlang$frostc$ASTNode* $tmp2348 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2348));
*(&local135) = ((org$frostlang$frostc$ASTNode*) $tmp2347);
// line 612
frost$core$MutableString* $tmp2349 = *(&local134);
org$frostlang$frostc$ASTNode* $tmp2350 = *(&local135);
frost$core$String* $tmp2351 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp2350), &$s2352);
frost$core$MutableString$append$frost$core$String($tmp2349, $tmp2351);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2351));
// unreffing REF($4402:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2347);
// unreffing REF($4390:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2353 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2353));
// unreffing s
*(&local135) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block287;
block289:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2338));
// unreffing REF($4379:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 614
frost$core$MutableString* $tmp2354 = *(&local134);
frost$core$MutableString$append$frost$core$String($tmp2354, &$s2355);
// line 615
frost$core$MutableString* $tmp2356 = *(&local134);
frost$core$String* $tmp2357 = frost$core$MutableString$finish$R$frost$core$String($tmp2356);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2357));
// unreffing REF($4424:frost.core.String)
frost$core$MutableString* $tmp2358 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2358));
// unreffing result
*(&local134) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2359 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
// unreffing statements
*(&local133) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2360 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2360));
// unreffing test
*(&local132) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2361 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
// unreffing label
*(&local131) = ((frost$core$String*) NULL);
return $tmp2357;
block282:;
// line 618
frost$core$Bit $tmp2362 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2363 = $tmp2362.value;
if ($tmp2363) goto block290; else goto block291;
block291:;
frost$core$Int64 $tmp2364 = (frost$core$Int64) {618};
frost$core$Int64* $tmp2365 = &param0->$rawValue;
frost$core$Int64 $tmp2366 = *$tmp2365;
frost$core$Int64$wrapper* $tmp2367;
$tmp2367 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2367->value = $tmp2366;
frost$core$String* $tmp2368 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2369, ((frost$core$Object*) $tmp2367));
frost$core$String* $tmp2370 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2368, &$s2371);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2372, $tmp2364, $tmp2370);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2370));
// unreffing REF($4460:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2368));
// unreffing REF($4459:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2367));
// unreffing REF($4458:frost.core.Object)
abort(); // unreachable
block290:;
goto block1;
block1:;
frost$core$Bit $tmp2373 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2374 = $tmp2373.value;
if ($tmp2374) goto block292; else goto block293;
block293:;
frost$core$Int64 $tmp2375 = (frost$core$Int64) {257};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2376, $tmp2375, &$s2377);
abort(); // unreachable
block292:;
abort(); // unreachable

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
org$frostlang$frostc$parser$Token$Kind local14;
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
org$frostlang$frostc$parser$Token$Kind local112;
org$frostlang$frostc$ASTNode* local113 = NULL;
org$frostlang$frostc$Position local114;
org$frostlang$frostc$ASTNode* local115 = NULL;
frost$core$Bit local116;
org$frostlang$frostc$ASTNode* local117 = NULL;
org$frostlang$frostc$ASTNode* local118 = NULL;
org$frostlang$frostc$Position local119;
frost$core$Real64 local120;
org$frostlang$frostc$Position local121;
frost$core$String* local122 = NULL;
org$frostlang$frostc$Position local123;
org$frostlang$frostc$ASTNode* local124 = NULL;
org$frostlang$frostc$Position local125;
org$frostlang$frostc$Position local126;
frost$core$String* local127 = NULL;
org$frostlang$frostc$Position local128;
org$frostlang$frostc$Position local129;
org$frostlang$frostc$FixedArray* local130 = NULL;
org$frostlang$frostc$Position local131;
org$frostlang$frostc$FixedArray* local132 = NULL;
org$frostlang$frostc$Position local133;
frost$core$String* local134 = NULL;
org$frostlang$frostc$Position local135;
org$frostlang$frostc$FixedArray* local136 = NULL;
org$frostlang$frostc$ASTNode* local137 = NULL;
org$frostlang$frostc$Position local138;
frost$core$String* local139 = NULL;
org$frostlang$frostc$ASTNode* local140 = NULL;
org$frostlang$frostc$Position local141;
org$frostlang$frostc$FixedArray* local142 = NULL;
org$frostlang$frostc$ASTNode* local143 = NULL;
org$frostlang$frostc$Position local144;
frost$core$String* local145 = NULL;
org$frostlang$frostc$Position local146;
org$frostlang$frostc$Variable$Kind local147;
org$frostlang$frostc$FixedArray* local148 = NULL;
org$frostlang$frostc$Position local149;
org$frostlang$frostc$FixedArray* local150 = NULL;
org$frostlang$frostc$FixedArray* local151 = NULL;
org$frostlang$frostc$Position local152;
frost$core$String* local153 = NULL;
org$frostlang$frostc$ASTNode* local154 = NULL;
org$frostlang$frostc$FixedArray* local155 = NULL;
// line 6
frost$core$Int64* $tmp2378 = &param0->$rawValue;
frost$core$Int64 $tmp2379 = *$tmp2378;
frost$core$Int64 $tmp2380 = (frost$core$Int64) {0};
frost$core$Bit $tmp2381 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2380);
bool $tmp2382 = $tmp2381.value;
if ($tmp2382) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp2383 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2384 = *$tmp2383;
*(&local0) = $tmp2384;
frost$core$String** $tmp2385 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2386 = *$tmp2385;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
frost$core$String* $tmp2387 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2387));
*(&local1) = $tmp2386;
frost$core$String** $tmp2388 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2389 = *$tmp2388;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2389));
frost$core$String* $tmp2390 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
*(&local2) = $tmp2389;
org$frostlang$frostc$ASTNode** $tmp2391 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2392 = *$tmp2391;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
org$frostlang$frostc$ASTNode* $tmp2393 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2393));
*(&local3) = $tmp2392;
// line 1
frost$core$String* $tmp2394 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
// line 1
frost$core$String* $tmp2395 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2395));
// line 1
org$frostlang$frostc$ASTNode* $tmp2396 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
org$frostlang$frostc$ASTNode* $tmp2397 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
// unreffing _f3
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2398 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
// unreffing _f2
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2399 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2399));
// unreffing _f1
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp2400 = (frost$core$Int64) {1};
frost$core$Bit $tmp2401 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2400);
bool $tmp2402 = $tmp2401.value;
if ($tmp2402) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp2403 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2404 = *$tmp2403;
*(&local4) = $tmp2404;
org$frostlang$frostc$FixedArray** $tmp2405 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2406 = *$tmp2405;
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2406));
org$frostlang$frostc$FixedArray* $tmp2407 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2407));
*(&local5) = $tmp2406;
// line 1
org$frostlang$frostc$FixedArray* $tmp2408 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2408));
org$frostlang$frostc$FixedArray* $tmp2409 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
// unreffing _f1
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp2410 = (frost$core$Int64) {2};
frost$core$Bit $tmp2411 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2410);
bool $tmp2412 = $tmp2411.value;
if ($tmp2412) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp2413 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2414 = *$tmp2413;
*(&local6) = $tmp2414;
org$frostlang$frostc$ASTNode** $tmp2415 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2416 = *$tmp2415;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2416));
org$frostlang$frostc$ASTNode* $tmp2417 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2417));
*(&local7) = $tmp2416;
org$frostlang$frostc$ASTNode** $tmp2418 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2419 = *$tmp2418;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2419));
org$frostlang$frostc$ASTNode* $tmp2420 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
*(&local8) = $tmp2419;
// line 1
org$frostlang$frostc$ASTNode* $tmp2421 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2421));
// line 1
org$frostlang$frostc$ASTNode* $tmp2422 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2422));
org$frostlang$frostc$ASTNode* $tmp2423 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2423));
// unreffing _f2
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2424 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
// unreffing _f1
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp2425 = (frost$core$Int64) {3};
frost$core$Bit $tmp2426 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2425);
bool $tmp2427 = $tmp2426.value;
if ($tmp2427) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp2428 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2429 = *$tmp2428;
*(&local9) = $tmp2429;
org$frostlang$frostc$ASTNode** $tmp2430 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2431 = *$tmp2430;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2431));
org$frostlang$frostc$ASTNode* $tmp2432 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
*(&local10) = $tmp2431;
// line 1
org$frostlang$frostc$ASTNode* $tmp2433 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
org$frostlang$frostc$ASTNode* $tmp2434 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2434));
// unreffing _f1
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp2435 = (frost$core$Int64) {4};
frost$core$Bit $tmp2436 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2435);
bool $tmp2437 = $tmp2436.value;
if ($tmp2437) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp2438 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2439 = *$tmp2438;
*(&local11) = $tmp2439;
goto block1;
block11:;
frost$core$Int64 $tmp2440 = (frost$core$Int64) {5};
frost$core$Bit $tmp2441 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2440);
bool $tmp2442 = $tmp2441.value;
if ($tmp2442) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp2443 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2444 = *$tmp2443;
*(&local12) = $tmp2444;
org$frostlang$frostc$ASTNode** $tmp2445 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2446 = *$tmp2445;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2446));
org$frostlang$frostc$ASTNode* $tmp2447 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2447));
*(&local13) = $tmp2446;
org$frostlang$frostc$parser$Token$Kind* $tmp2448 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp2449 = *$tmp2448;
*(&local14) = $tmp2449;
org$frostlang$frostc$ASTNode** $tmp2450 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2451 = *$tmp2450;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2451));
org$frostlang$frostc$ASTNode* $tmp2452 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2452));
*(&local15) = $tmp2451;
// line 1
org$frostlang$frostc$ASTNode* $tmp2453 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2453));
// line 1
org$frostlang$frostc$ASTNode* $tmp2454 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2454));
org$frostlang$frostc$ASTNode* $tmp2455 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
// unreffing _f3
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2456 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2456));
// unreffing _f1
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp2457 = (frost$core$Int64) {6};
frost$core$Bit $tmp2458 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2457);
bool $tmp2459 = $tmp2458.value;
if ($tmp2459) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp2460 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2461 = *$tmp2460;
*(&local16) = $tmp2461;
frost$core$Bit* $tmp2462 = (frost$core$Bit*) (param0->$data + 16);
frost$core$Bit $tmp2463 = *$tmp2462;
*(&local17) = $tmp2463;
goto block1;
block15:;
frost$core$Int64 $tmp2464 = (frost$core$Int64) {7};
frost$core$Bit $tmp2465 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2464);
bool $tmp2466 = $tmp2465.value;
if ($tmp2466) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp2467 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2468 = *$tmp2467;
*(&local18) = $tmp2468;
org$frostlang$frostc$FixedArray** $tmp2469 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2470 = *$tmp2469;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2470));
org$frostlang$frostc$FixedArray* $tmp2471 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2471));
*(&local19) = $tmp2470;
// line 1
org$frostlang$frostc$FixedArray* $tmp2472 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2472));
org$frostlang$frostc$FixedArray* $tmp2473 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
// unreffing _f1
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block17:;
frost$core$Int64 $tmp2474 = (frost$core$Int64) {8};
frost$core$Bit $tmp2475 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2474);
bool $tmp2476 = $tmp2475.value;
if ($tmp2476) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp2477 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2478 = *$tmp2477;
*(&local20) = $tmp2478;
frost$core$String** $tmp2479 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2480 = *$tmp2479;
*(&local21) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2480));
frost$core$String* $tmp2481 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2481));
*(&local21) = $tmp2480;
// line 1
frost$core$String* $tmp2482 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
frost$core$String* $tmp2483 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
// unreffing _f1
*(&local21) = ((frost$core$String*) NULL);
goto block1;
block19:;
frost$core$Int64 $tmp2484 = (frost$core$Int64) {9};
frost$core$Bit $tmp2485 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2484);
bool $tmp2486 = $tmp2485.value;
if ($tmp2486) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp2487 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2488 = *$tmp2487;
*(&local22) = $tmp2488;
org$frostlang$frostc$ASTNode** $tmp2489 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2490 = *$tmp2489;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2490));
org$frostlang$frostc$ASTNode* $tmp2491 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2491));
*(&local23) = $tmp2490;
org$frostlang$frostc$FixedArray** $tmp2492 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2493 = *$tmp2492;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
org$frostlang$frostc$FixedArray* $tmp2494 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2494));
*(&local24) = $tmp2493;
// line 1
org$frostlang$frostc$ASTNode* $tmp2495 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
// line 1
org$frostlang$frostc$FixedArray* $tmp2496 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
org$frostlang$frostc$FixedArray* $tmp2497 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
// unreffing _f2
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2498 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
// unreffing _f1
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block21:;
frost$core$Int64 $tmp2499 = (frost$core$Int64) {10};
frost$core$Bit $tmp2500 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2499);
bool $tmp2501 = $tmp2500.value;
if ($tmp2501) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp2502 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2503 = *$tmp2502;
*(&local25) = $tmp2503;
org$frostlang$frostc$ASTNode** $tmp2504 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2505 = *$tmp2504;
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2505));
org$frostlang$frostc$ASTNode* $tmp2506 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2506));
*(&local26) = $tmp2505;
frost$core$String** $tmp2507 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2508 = *$tmp2507;
*(&local27) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
frost$core$String* $tmp2509 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
*(&local27) = $tmp2508;
org$frostlang$frostc$FixedArray** $tmp2510 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2511 = *$tmp2510;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2511));
org$frostlang$frostc$FixedArray* $tmp2512 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
*(&local28) = $tmp2511;
// line 1
org$frostlang$frostc$ASTNode* $tmp2513 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2513));
// line 1
frost$core$String* $tmp2514 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
// line 1
org$frostlang$frostc$FixedArray* $tmp2515 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2515));
org$frostlang$frostc$FixedArray* $tmp2516 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2516));
// unreffing _f3
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2517 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
// unreffing _f2
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2518 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2518));
// unreffing _f1
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block23:;
frost$core$Int64 $tmp2519 = (frost$core$Int64) {11};
frost$core$Bit $tmp2520 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2519);
bool $tmp2521 = $tmp2520.value;
if ($tmp2521) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp2522 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2523 = *$tmp2522;
*(&local29) = $tmp2523;
org$frostlang$frostc$ASTNode** $tmp2524 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2525 = *$tmp2524;
*(&local30) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2525));
org$frostlang$frostc$ASTNode* $tmp2526 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2526));
*(&local30) = $tmp2525;
org$frostlang$frostc$ChoiceCase** $tmp2527 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp2528 = *$tmp2527;
*(&local31) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
org$frostlang$frostc$ChoiceCase* $tmp2529 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2529));
*(&local31) = $tmp2528;
frost$core$Int64* $tmp2530 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp2531 = *$tmp2530;
*(&local32) = $tmp2531;
// line 1
org$frostlang$frostc$ASTNode* $tmp2532 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2532));
// line 1
org$frostlang$frostc$ChoiceCase* $tmp2533 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
org$frostlang$frostc$ChoiceCase* $tmp2534 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
// unreffing _f2
*(&local31) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp2535 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
// unreffing _f1
*(&local30) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block25:;
frost$core$Int64 $tmp2536 = (frost$core$Int64) {12};
frost$core$Bit $tmp2537 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2536);
bool $tmp2538 = $tmp2537.value;
if ($tmp2538) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp2539 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2540 = *$tmp2539;
*(&local33) = $tmp2540;
org$frostlang$frostc$ASTNode** $tmp2541 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2542 = *$tmp2541;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2542));
org$frostlang$frostc$ASTNode* $tmp2543 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2543));
*(&local34) = $tmp2542;
org$frostlang$frostc$FixedArray** $tmp2544 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2545 = *$tmp2544;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2545));
org$frostlang$frostc$FixedArray* $tmp2546 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2546));
*(&local35) = $tmp2545;
org$frostlang$frostc$ClassDecl$Kind* $tmp2547 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp2548 = *$tmp2547;
*(&local36) = $tmp2548;
frost$core$String** $tmp2549 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp2550 = *$tmp2549;
*(&local37) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2550));
frost$core$String* $tmp2551 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2551));
*(&local37) = $tmp2550;
org$frostlang$frostc$FixedArray** $tmp2552 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2553 = *$tmp2552;
*(&local38) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2553));
org$frostlang$frostc$FixedArray* $tmp2554 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2554));
*(&local38) = $tmp2553;
org$frostlang$frostc$FixedArray** $tmp2555 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2556 = *$tmp2555;
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2556));
org$frostlang$frostc$FixedArray* $tmp2557 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2557));
*(&local39) = $tmp2556;
org$frostlang$frostc$FixedArray** $tmp2558 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2559 = *$tmp2558;
*(&local40) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2559));
org$frostlang$frostc$FixedArray* $tmp2560 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2560));
*(&local40) = $tmp2559;
// line 1
org$frostlang$frostc$ASTNode* $tmp2561 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
// line 1
org$frostlang$frostc$FixedArray* $tmp2562 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2562));
// line 1
frost$core$String* $tmp2563 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2563));
// line 1
org$frostlang$frostc$FixedArray* $tmp2564 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
// line 1
org$frostlang$frostc$FixedArray* $tmp2565 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2565));
// line 1
org$frostlang$frostc$FixedArray* $tmp2566 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2566));
org$frostlang$frostc$FixedArray* $tmp2567 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
// unreffing _f7
*(&local40) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2568 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
// unreffing _f6
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2569 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2569));
// unreffing _f5
*(&local38) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2570 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2570));
// unreffing _f4
*(&local37) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2571 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2571));
// unreffing _f2
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2572 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2572));
// unreffing _f1
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block27:;
frost$core$Int64 $tmp2573 = (frost$core$Int64) {13};
frost$core$Bit $tmp2574 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2573);
bool $tmp2575 = $tmp2574.value;
if ($tmp2575) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp2576 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2577 = *$tmp2576;
*(&local41) = $tmp2577;
frost$core$String** $tmp2578 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2579 = *$tmp2578;
*(&local42) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2579));
frost$core$String* $tmp2580 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
*(&local42) = $tmp2579;
// line 1
frost$core$String* $tmp2581 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
frost$core$String* $tmp2582 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2582));
// unreffing _f1
*(&local42) = ((frost$core$String*) NULL);
goto block1;
block29:;
frost$core$Int64 $tmp2583 = (frost$core$Int64) {14};
frost$core$Bit $tmp2584 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2583);
bool $tmp2585 = $tmp2584.value;
if ($tmp2585) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp2586 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2587 = *$tmp2586;
*(&local43) = $tmp2587;
org$frostlang$frostc$ASTNode** $tmp2588 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2589 = *$tmp2588;
*(&local44) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2589));
org$frostlang$frostc$ASTNode* $tmp2590 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
*(&local44) = $tmp2589;
org$frostlang$frostc$ASTNode** $tmp2591 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2592 = *$tmp2591;
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
org$frostlang$frostc$ASTNode* $tmp2593 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2593));
*(&local45) = $tmp2592;
// line 1
org$frostlang$frostc$ASTNode* $tmp2594 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2594));
// line 1
org$frostlang$frostc$ASTNode* $tmp2595 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
org$frostlang$frostc$ASTNode* $tmp2596 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
// unreffing _f2
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2597 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2597));
// unreffing _f1
*(&local44) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block31:;
frost$core$Int64 $tmp2598 = (frost$core$Int64) {15};
frost$core$Bit $tmp2599 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2598);
bool $tmp2600 = $tmp2599.value;
if ($tmp2600) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp2601 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2602 = *$tmp2601;
*(&local46) = $tmp2602;
frost$core$String** $tmp2603 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2604 = *$tmp2603;
*(&local47) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2604));
frost$core$String* $tmp2605 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2605));
*(&local47) = $tmp2604;
org$frostlang$frostc$FixedArray** $tmp2606 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2607 = *$tmp2606;
*(&local48) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2607));
org$frostlang$frostc$FixedArray* $tmp2608 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2608));
*(&local48) = $tmp2607;
org$frostlang$frostc$ASTNode** $tmp2609 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2610 = *$tmp2609;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
org$frostlang$frostc$ASTNode* $tmp2611 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2611));
*(&local49) = $tmp2610;
// line 1
frost$core$String* $tmp2612 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2612));
// line 1
org$frostlang$frostc$FixedArray* $tmp2613 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2613));
// line 1
org$frostlang$frostc$ASTNode* $tmp2614 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2614));
org$frostlang$frostc$ASTNode* $tmp2615 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
// unreffing _f3
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2616 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2616));
// unreffing _f2
*(&local48) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2617 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2617));
// unreffing _f1
*(&local47) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Int64 $tmp2618 = (frost$core$Int64) {16};
frost$core$Bit $tmp2619 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2618);
bool $tmp2620 = $tmp2619.value;
if ($tmp2620) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp2621 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2622 = *$tmp2621;
*(&local50) = $tmp2622;
org$frostlang$frostc$ASTNode** $tmp2623 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2624 = *$tmp2623;
*(&local51) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2624));
org$frostlang$frostc$ASTNode* $tmp2625 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2625));
*(&local51) = $tmp2624;
frost$core$String** $tmp2626 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2627 = *$tmp2626;
*(&local52) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2627));
frost$core$String* $tmp2628 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
*(&local52) = $tmp2627;
// line 1
org$frostlang$frostc$ASTNode* $tmp2629 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
// line 1
frost$core$String* $tmp2630 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
frost$core$String* $tmp2631 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2631));
// unreffing _f2
*(&local52) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2632 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2632));
// unreffing _f1
*(&local51) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block35:;
frost$core$Int64 $tmp2633 = (frost$core$Int64) {17};
frost$core$Bit $tmp2634 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2633);
bool $tmp2635 = $tmp2634.value;
if ($tmp2635) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp2636 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2637 = *$tmp2636;
*(&local53) = $tmp2637;
org$frostlang$frostc$ASTNode** $tmp2638 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2639 = *$tmp2638;
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2639));
org$frostlang$frostc$ASTNode* $tmp2640 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2640));
*(&local54) = $tmp2639;
frost$core$String** $tmp2641 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2642 = *$tmp2641;
*(&local55) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2642));
frost$core$String* $tmp2643 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2643));
*(&local55) = $tmp2642;
org$frostlang$frostc$FixedArray** $tmp2644 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2645 = *$tmp2644;
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2645));
org$frostlang$frostc$FixedArray* $tmp2646 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
*(&local56) = $tmp2645;
// line 1
org$frostlang$frostc$ASTNode* $tmp2647 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
// line 1
frost$core$String* $tmp2648 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2648));
// line 1
org$frostlang$frostc$FixedArray* $tmp2649 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2649));
org$frostlang$frostc$FixedArray* $tmp2650 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
// unreffing _f3
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2651 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2651));
// unreffing _f2
*(&local55) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2652 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2652));
// unreffing _f1
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block37:;
frost$core$Int64 $tmp2653 = (frost$core$Int64) {18};
frost$core$Bit $tmp2654 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2653);
bool $tmp2655 = $tmp2654.value;
if ($tmp2655) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp2656 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2657 = *$tmp2656;
*(&local57) = $tmp2657;
org$frostlang$frostc$ASTNode** $tmp2658 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2659 = *$tmp2658;
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
org$frostlang$frostc$ASTNode* $tmp2660 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
*(&local58) = $tmp2659;
org$frostlang$frostc$FixedArray** $tmp2661 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2662 = *$tmp2661;
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2662));
org$frostlang$frostc$FixedArray* $tmp2663 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2663));
*(&local59) = $tmp2662;
org$frostlang$frostc$ASTNode** $tmp2664 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2665 = *$tmp2664;
*(&local60) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2665));
org$frostlang$frostc$ASTNode* $tmp2666 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2666));
*(&local60) = $tmp2665;
// line 1
org$frostlang$frostc$ASTNode* $tmp2667 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2667));
// line 1
org$frostlang$frostc$FixedArray* $tmp2668 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2668));
// line 1
org$frostlang$frostc$ASTNode* $tmp2669 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2669));
org$frostlang$frostc$ASTNode* $tmp2670 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2670));
// unreffing _f3
*(&local60) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2671 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
// unreffing _f2
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2672 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2672));
// unreffing _f1
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block39:;
frost$core$Int64 $tmp2673 = (frost$core$Int64) {19};
frost$core$Bit $tmp2674 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2673);
bool $tmp2675 = $tmp2674.value;
if ($tmp2675) goto block40; else goto block41;
block40:;
org$frostlang$frostc$FixedArray** $tmp2676 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp2677 = *$tmp2676;
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2677));
org$frostlang$frostc$FixedArray* $tmp2678 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
*(&local61) = $tmp2677;
// line 1
org$frostlang$frostc$FixedArray* $tmp2679 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
org$frostlang$frostc$FixedArray* $tmp2680 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2680));
// unreffing _f0
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block41:;
frost$core$Int64 $tmp2681 = (frost$core$Int64) {20};
frost$core$Bit $tmp2682 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2681);
bool $tmp2683 = $tmp2682.value;
if ($tmp2683) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp2684 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2685 = *$tmp2684;
*(&local62) = $tmp2685;
frost$core$String** $tmp2686 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2687 = *$tmp2686;
*(&local63) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2687));
frost$core$String* $tmp2688 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
*(&local63) = $tmp2687;
org$frostlang$frostc$ASTNode** $tmp2689 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2690 = *$tmp2689;
*(&local64) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2690));
org$frostlang$frostc$ASTNode* $tmp2691 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2691));
*(&local64) = $tmp2690;
org$frostlang$frostc$ASTNode** $tmp2692 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2693 = *$tmp2692;
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2693));
org$frostlang$frostc$ASTNode* $tmp2694 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
*(&local65) = $tmp2693;
org$frostlang$frostc$FixedArray** $tmp2695 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp2696 = *$tmp2695;
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
org$frostlang$frostc$FixedArray* $tmp2697 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
*(&local66) = $tmp2696;
// line 1
frost$core$String* $tmp2698 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
// line 1
org$frostlang$frostc$ASTNode* $tmp2699 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2699));
// line 1
org$frostlang$frostc$ASTNode* $tmp2700 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2700));
// line 1
org$frostlang$frostc$FixedArray* $tmp2701 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2701));
org$frostlang$frostc$FixedArray* $tmp2702 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
// unreffing _f4
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2703 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
// unreffing _f3
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2704 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
// unreffing _f2
*(&local64) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2705 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
// unreffing _f1
*(&local63) = ((frost$core$String*) NULL);
goto block1;
block43:;
frost$core$Int64 $tmp2706 = (frost$core$Int64) {21};
frost$core$Bit $tmp2707 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2706);
bool $tmp2708 = $tmp2707.value;
if ($tmp2708) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp2709 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2710 = *$tmp2709;
*(&local67) = $tmp2710;
frost$core$String** $tmp2711 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2712 = *$tmp2711;
*(&local68) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2712));
frost$core$String* $tmp2713 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2713));
*(&local68) = $tmp2712;
org$frostlang$frostc$FixedArray** $tmp2714 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2715 = *$tmp2714;
*(&local69) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2715));
org$frostlang$frostc$FixedArray* $tmp2716 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
*(&local69) = $tmp2715;
// line 1
frost$core$String* $tmp2717 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
// line 1
org$frostlang$frostc$FixedArray* $tmp2718 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
org$frostlang$frostc$FixedArray* $tmp2719 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
// unreffing _f2
*(&local69) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2720 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
// unreffing _f1
*(&local68) = ((frost$core$String*) NULL);
goto block1;
block45:;
frost$core$Int64 $tmp2721 = (frost$core$Int64) {22};
frost$core$Bit $tmp2722 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2721);
bool $tmp2723 = $tmp2722.value;
if ($tmp2723) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp2724 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2725 = *$tmp2724;
*(&local70) = $tmp2725;
frost$core$String** $tmp2726 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2727 = *$tmp2726;
*(&local71) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
frost$core$String* $tmp2728 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2728));
*(&local71) = $tmp2727;
// line 1
frost$core$String* $tmp2729 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
frost$core$String* $tmp2730 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
// unreffing _f1
*(&local71) = ((frost$core$String*) NULL);
goto block1;
block47:;
frost$core$Int64 $tmp2731 = (frost$core$Int64) {23};
frost$core$Bit $tmp2732 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2731);
bool $tmp2733 = $tmp2732.value;
if ($tmp2733) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp2734 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2735 = *$tmp2734;
*(&local72) = $tmp2735;
frost$core$String** $tmp2736 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2737 = *$tmp2736;
*(&local73) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
frost$core$String* $tmp2738 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
*(&local73) = $tmp2737;
org$frostlang$frostc$FixedArray** $tmp2739 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2740 = *$tmp2739;
*(&local74) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2740));
org$frostlang$frostc$FixedArray* $tmp2741 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2741));
*(&local74) = $tmp2740;
// line 1
frost$core$String* $tmp2742 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
// line 1
org$frostlang$frostc$FixedArray* $tmp2743 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2743));
org$frostlang$frostc$FixedArray* $tmp2744 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2744));
// unreffing _f2
*(&local74) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2745 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
// unreffing _f1
*(&local73) = ((frost$core$String*) NULL);
goto block1;
block49:;
frost$core$Int64 $tmp2746 = (frost$core$Int64) {24};
frost$core$Bit $tmp2747 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2746);
bool $tmp2748 = $tmp2747.value;
if ($tmp2748) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp2749 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2750 = *$tmp2749;
*(&local75) = $tmp2750;
org$frostlang$frostc$ASTNode** $tmp2751 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2752 = *$tmp2751;
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2752));
org$frostlang$frostc$ASTNode* $tmp2753 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2753));
*(&local76) = $tmp2752;
org$frostlang$frostc$FixedArray** $tmp2754 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2755 = *$tmp2754;
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2755));
org$frostlang$frostc$FixedArray* $tmp2756 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2756));
*(&local77) = $tmp2755;
org$frostlang$frostc$ASTNode** $tmp2757 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2758 = *$tmp2757;
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
org$frostlang$frostc$ASTNode* $tmp2759 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2759));
*(&local78) = $tmp2758;
// line 1
org$frostlang$frostc$ASTNode* $tmp2760 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
// line 1
org$frostlang$frostc$FixedArray* $tmp2761 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
// line 1
org$frostlang$frostc$ASTNode* $tmp2762 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2762));
org$frostlang$frostc$ASTNode* $tmp2763 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2763));
// unreffing _f3
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2764 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2764));
// unreffing _f2
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2765 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2765));
// unreffing _f1
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block51:;
frost$core$Int64 $tmp2766 = (frost$core$Int64) {25};
frost$core$Bit $tmp2767 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2766);
bool $tmp2768 = $tmp2767.value;
if ($tmp2768) goto block52; else goto block53;
block52:;
org$frostlang$frostc$Position* $tmp2769 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2770 = *$tmp2769;
*(&local79) = $tmp2770;
frost$core$UInt64* $tmp2771 = (frost$core$UInt64*) (param0->$data + 16);
frost$core$UInt64 $tmp2772 = *$tmp2771;
*(&local80) = $tmp2772;
goto block1;
block53:;
frost$core$Int64 $tmp2773 = (frost$core$Int64) {26};
frost$core$Bit $tmp2774 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2773);
bool $tmp2775 = $tmp2774.value;
if ($tmp2775) goto block54; else goto block55;
block54:;
org$frostlang$frostc$Position* $tmp2776 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2777 = *$tmp2776;
*(&local81) = $tmp2777;
org$frostlang$frostc$IR$Value** $tmp2778 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp2779 = *$tmp2778;
*(&local82) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
org$frostlang$frostc$IR$Value* $tmp2780 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
*(&local82) = $tmp2779;
// line 1
org$frostlang$frostc$IR$Value* $tmp2781 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
org$frostlang$frostc$IR$Value* $tmp2782 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
// unreffing _f1
*(&local82) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block55:;
frost$core$Int64 $tmp2783 = (frost$core$Int64) {27};
frost$core$Bit $tmp2784 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2783);
bool $tmp2785 = $tmp2784.value;
if ($tmp2785) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp2786 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2787 = *$tmp2786;
*(&local83) = $tmp2787;
frost$core$String** $tmp2788 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2789 = *$tmp2788;
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2789));
frost$core$String* $tmp2790 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
*(&local84) = $tmp2789;
org$frostlang$frostc$FixedArray** $tmp2791 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2792 = *$tmp2791;
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2792));
org$frostlang$frostc$FixedArray* $tmp2793 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2793));
*(&local85) = $tmp2792;
// line 1
frost$core$String* $tmp2794 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2794));
// line 1
org$frostlang$frostc$FixedArray* $tmp2795 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
org$frostlang$frostc$FixedArray* $tmp2796 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
// unreffing _f2
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2797 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
// unreffing _f1
*(&local84) = ((frost$core$String*) NULL);
goto block1;
block57:;
frost$core$Int64 $tmp2798 = (frost$core$Int64) {28};
frost$core$Bit $tmp2799 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2798);
bool $tmp2800 = $tmp2799.value;
if ($tmp2800) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp2801 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2802 = *$tmp2801;
*(&local86) = $tmp2802;
org$frostlang$frostc$ASTNode** $tmp2803 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2804 = *$tmp2803;
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2804));
org$frostlang$frostc$ASTNode* $tmp2805 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
*(&local87) = $tmp2804;
org$frostlang$frostc$FixedArray** $tmp2806 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2807 = *$tmp2806;
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2807));
org$frostlang$frostc$FixedArray* $tmp2808 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
*(&local88) = $tmp2807;
org$frostlang$frostc$FixedArray** $tmp2809 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2810 = *$tmp2809;
*(&local89) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2810));
org$frostlang$frostc$FixedArray* $tmp2811 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
*(&local89) = $tmp2810;
// line 1
org$frostlang$frostc$ASTNode* $tmp2812 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
// line 1
org$frostlang$frostc$FixedArray* $tmp2813 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
// line 1
org$frostlang$frostc$FixedArray* $tmp2814 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2814));
org$frostlang$frostc$FixedArray* $tmp2815 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2815));
// unreffing _f3
*(&local89) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2816 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2816));
// unreffing _f2
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2817 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2817));
// unreffing _f1
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block59:;
frost$core$Int64 $tmp2818 = (frost$core$Int64) {29};
frost$core$Bit $tmp2819 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2818);
bool $tmp2820 = $tmp2819.value;
if ($tmp2820) goto block60; else goto block61;
block60:;
org$frostlang$frostc$Position* $tmp2821 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2822 = *$tmp2821;
*(&local90) = $tmp2822;
org$frostlang$frostc$ASTNode** $tmp2823 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2824 = *$tmp2823;
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
org$frostlang$frostc$ASTNode* $tmp2825 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2825));
*(&local91) = $tmp2824;
org$frostlang$frostc$FixedArray** $tmp2826 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2827 = *$tmp2826;
*(&local92) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
org$frostlang$frostc$FixedArray* $tmp2828 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
*(&local92) = $tmp2827;
org$frostlang$frostc$MethodDecl$Kind* $tmp2829 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp2830 = *$tmp2829;
*(&local93) = $tmp2830;
frost$core$String** $tmp2831 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp2832 = *$tmp2831;
*(&local94) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
frost$core$String* $tmp2833 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
*(&local94) = $tmp2832;
org$frostlang$frostc$FixedArray** $tmp2834 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2835 = *$tmp2834;
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2835));
org$frostlang$frostc$FixedArray* $tmp2836 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
*(&local95) = $tmp2835;
org$frostlang$frostc$FixedArray** $tmp2837 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2838 = *$tmp2837;
*(&local96) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2838));
org$frostlang$frostc$FixedArray* $tmp2839 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2839));
*(&local96) = $tmp2838;
org$frostlang$frostc$ASTNode** $tmp2840 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
org$frostlang$frostc$ASTNode* $tmp2841 = *$tmp2840;
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
org$frostlang$frostc$ASTNode* $tmp2842 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
*(&local97) = $tmp2841;
org$frostlang$frostc$FixedArray** $tmp2843 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2844 = *$tmp2843;
*(&local98) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2844));
org$frostlang$frostc$FixedArray* $tmp2845 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2845));
*(&local98) = $tmp2844;
// line 1
org$frostlang$frostc$ASTNode* $tmp2846 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
// line 1
org$frostlang$frostc$FixedArray* $tmp2847 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2847));
// line 1
frost$core$String* $tmp2848 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2848));
// line 1
org$frostlang$frostc$FixedArray* $tmp2849 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2849));
// line 1
org$frostlang$frostc$FixedArray* $tmp2850 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2850));
// line 1
org$frostlang$frostc$ASTNode* $tmp2851 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2851));
// line 1
org$frostlang$frostc$FixedArray* $tmp2852 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2852));
org$frostlang$frostc$FixedArray* $tmp2853 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2853));
// unreffing _f8
*(&local98) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2854 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2854));
// unreffing _f7
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2855 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
// unreffing _f6
*(&local96) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2856 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
// unreffing _f5
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2857 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
// unreffing _f4
*(&local94) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2858 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2858));
// unreffing _f2
*(&local92) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2859 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
// unreffing _f1
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block61:;
frost$core$Int64 $tmp2860 = (frost$core$Int64) {30};
frost$core$Bit $tmp2861 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2860);
bool $tmp2862 = $tmp2861.value;
if ($tmp2862) goto block62; else goto block63;
block62:;
org$frostlang$frostc$Position* $tmp2863 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2864 = *$tmp2863;
*(&local99) = $tmp2864;
org$frostlang$frostc$parser$Token$Kind* $tmp2865 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp2866 = *$tmp2865;
*(&local100) = $tmp2866;
org$frostlang$frostc$FixedArray** $tmp2867 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2868 = *$tmp2867;
*(&local101) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2868));
org$frostlang$frostc$FixedArray* $tmp2869 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
*(&local101) = $tmp2868;
org$frostlang$frostc$ASTNode** $tmp2870 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2871 = *$tmp2870;
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2871));
org$frostlang$frostc$ASTNode* $tmp2872 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2872));
*(&local102) = $tmp2871;
// line 1
org$frostlang$frostc$FixedArray* $tmp2873 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2873));
// line 1
org$frostlang$frostc$ASTNode* $tmp2874 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
org$frostlang$frostc$ASTNode* $tmp2875 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
// unreffing _f3
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2876 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2876));
// unreffing _f2
*(&local101) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block63:;
frost$core$Int64 $tmp2877 = (frost$core$Int64) {31};
frost$core$Bit $tmp2878 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2877);
bool $tmp2879 = $tmp2878.value;
if ($tmp2879) goto block64; else goto block65;
block64:;
org$frostlang$frostc$Position* $tmp2880 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2881 = *$tmp2880;
*(&local103) = $tmp2881;
goto block1;
block65:;
frost$core$Int64 $tmp2882 = (frost$core$Int64) {32};
frost$core$Bit $tmp2883 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2882);
bool $tmp2884 = $tmp2883.value;
if ($tmp2884) goto block66; else goto block67;
block66:;
org$frostlang$frostc$Position* $tmp2885 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2886 = *$tmp2885;
*(&local104) = $tmp2886;
org$frostlang$frostc$ASTNode** $tmp2887 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2888 = *$tmp2887;
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2888));
org$frostlang$frostc$ASTNode* $tmp2889 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
*(&local105) = $tmp2888;
// line 1
org$frostlang$frostc$ASTNode* $tmp2890 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2890));
org$frostlang$frostc$ASTNode* $tmp2891 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
// unreffing _f1
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block67:;
frost$core$Int64 $tmp2892 = (frost$core$Int64) {33};
frost$core$Bit $tmp2893 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2892);
bool $tmp2894 = $tmp2893.value;
if ($tmp2894) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Position* $tmp2895 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2896 = *$tmp2895;
*(&local106) = $tmp2896;
frost$core$String** $tmp2897 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2898 = *$tmp2897;
*(&local107) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
frost$core$String* $tmp2899 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
*(&local107) = $tmp2898;
// line 1
frost$core$String* $tmp2900 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
frost$core$String* $tmp2901 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2901));
// unreffing _f1
*(&local107) = ((frost$core$String*) NULL);
goto block1;
block69:;
frost$core$Int64 $tmp2902 = (frost$core$Int64) {34};
frost$core$Bit $tmp2903 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2902);
bool $tmp2904 = $tmp2903.value;
if ($tmp2904) goto block70; else goto block71;
block70:;
org$frostlang$frostc$Position* $tmp2905 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2906 = *$tmp2905;
*(&local108) = $tmp2906;
frost$core$String** $tmp2907 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2908 = *$tmp2907;
*(&local109) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2908));
frost$core$String* $tmp2909 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
*(&local109) = $tmp2908;
org$frostlang$frostc$ASTNode** $tmp2910 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2911 = *$tmp2910;
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
org$frostlang$frostc$ASTNode* $tmp2912 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
*(&local110) = $tmp2911;
// line 1
frost$core$String* $tmp2913 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
// line 1
org$frostlang$frostc$ASTNode* $tmp2914 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
org$frostlang$frostc$ASTNode* $tmp2915 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
// unreffing _f2
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2916 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
// unreffing _f1
*(&local109) = ((frost$core$String*) NULL);
goto block1;
block71:;
frost$core$Int64 $tmp2917 = (frost$core$Int64) {35};
frost$core$Bit $tmp2918 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2917);
bool $tmp2919 = $tmp2918.value;
if ($tmp2919) goto block72; else goto block73;
block72:;
org$frostlang$frostc$Position* $tmp2920 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2921 = *$tmp2920;
*(&local111) = $tmp2921;
org$frostlang$frostc$parser$Token$Kind* $tmp2922 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp2923 = *$tmp2922;
*(&local112) = $tmp2923;
org$frostlang$frostc$ASTNode** $tmp2924 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2925 = *$tmp2924;
*(&local113) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
org$frostlang$frostc$ASTNode* $tmp2926 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2926));
*(&local113) = $tmp2925;
// line 1
org$frostlang$frostc$ASTNode* $tmp2927 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2927));
org$frostlang$frostc$ASTNode* $tmp2928 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2928));
// unreffing _f2
*(&local113) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block73:;
frost$core$Int64 $tmp2929 = (frost$core$Int64) {36};
frost$core$Bit $tmp2930 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2929);
bool $tmp2931 = $tmp2930.value;
if ($tmp2931) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp2932 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2933 = *$tmp2932;
*(&local114) = $tmp2933;
org$frostlang$frostc$ASTNode** $tmp2934 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2935 = *$tmp2934;
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2935));
org$frostlang$frostc$ASTNode* $tmp2936 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2936));
*(&local115) = $tmp2935;
frost$core$Bit* $tmp2937 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp2938 = *$tmp2937;
*(&local116) = $tmp2938;
org$frostlang$frostc$ASTNode** $tmp2939 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
org$frostlang$frostc$ASTNode* $tmp2940 = *$tmp2939;
*(&local117) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2940));
org$frostlang$frostc$ASTNode* $tmp2941 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2941));
*(&local117) = $tmp2940;
org$frostlang$frostc$ASTNode** $tmp2942 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp2943 = *$tmp2942;
*(&local118) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
org$frostlang$frostc$ASTNode* $tmp2944 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
*(&local118) = $tmp2943;
// line 1
org$frostlang$frostc$ASTNode* $tmp2945 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
// line 1
org$frostlang$frostc$ASTNode* $tmp2946 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2946));
// line 1
org$frostlang$frostc$ASTNode* $tmp2947 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
org$frostlang$frostc$ASTNode* $tmp2948 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
// unreffing _f4
*(&local118) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2949 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
// unreffing _f3
*(&local117) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2950 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2950));
// unreffing _f1
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block75:;
frost$core$Int64 $tmp2951 = (frost$core$Int64) {37};
frost$core$Bit $tmp2952 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2951);
bool $tmp2953 = $tmp2952.value;
if ($tmp2953) goto block76; else goto block77;
block76:;
org$frostlang$frostc$Position* $tmp2954 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2955 = *$tmp2954;
*(&local119) = $tmp2955;
frost$core$Real64* $tmp2956 = (frost$core$Real64*) (param0->$data + 16);
frost$core$Real64 $tmp2957 = *$tmp2956;
*(&local120) = $tmp2957;
goto block1;
block77:;
frost$core$Int64 $tmp2958 = (frost$core$Int64) {38};
frost$core$Bit $tmp2959 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2958);
bool $tmp2960 = $tmp2959.value;
if ($tmp2960) goto block78; else goto block79;
block78:;
org$frostlang$frostc$Position* $tmp2961 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2962 = *$tmp2961;
*(&local121) = $tmp2962;
frost$core$String** $tmp2963 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2964 = *$tmp2963;
*(&local122) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2964));
frost$core$String* $tmp2965 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2965));
*(&local122) = $tmp2964;
// line 1
frost$core$String* $tmp2966 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2966));
frost$core$String* $tmp2967 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2967));
// unreffing _f1
*(&local122) = ((frost$core$String*) NULL);
goto block1;
block79:;
frost$core$Int64 $tmp2968 = (frost$core$Int64) {39};
frost$core$Bit $tmp2969 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2968);
bool $tmp2970 = $tmp2969.value;
if ($tmp2970) goto block80; else goto block81;
block80:;
org$frostlang$frostc$Position* $tmp2971 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2972 = *$tmp2971;
*(&local123) = $tmp2972;
org$frostlang$frostc$ASTNode** $tmp2973 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2974 = *$tmp2973;
*(&local124) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2974));
org$frostlang$frostc$ASTNode* $tmp2975 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2975));
*(&local124) = $tmp2974;
// line 1
org$frostlang$frostc$ASTNode* $tmp2976 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2976));
org$frostlang$frostc$ASTNode* $tmp2977 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
// unreffing _f1
*(&local124) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block81:;
frost$core$Int64 $tmp2978 = (frost$core$Int64) {40};
frost$core$Bit $tmp2979 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2978);
bool $tmp2980 = $tmp2979.value;
if ($tmp2980) goto block82; else goto block83;
block82:;
org$frostlang$frostc$Position* $tmp2981 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2982 = *$tmp2981;
*(&local125) = $tmp2982;
goto block1;
block83:;
frost$core$Int64 $tmp2983 = (frost$core$Int64) {41};
frost$core$Bit $tmp2984 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2983);
bool $tmp2985 = $tmp2984.value;
if ($tmp2985) goto block84; else goto block85;
block84:;
org$frostlang$frostc$Position* $tmp2986 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2987 = *$tmp2986;
*(&local126) = $tmp2987;
frost$core$String** $tmp2988 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2989 = *$tmp2988;
*(&local127) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2989));
frost$core$String* $tmp2990 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2990));
*(&local127) = $tmp2989;
// line 1
frost$core$String* $tmp2991 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2991));
frost$core$String* $tmp2992 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
// unreffing _f1
*(&local127) = ((frost$core$String*) NULL);
goto block1;
block85:;
frost$core$Int64 $tmp2993 = (frost$core$Int64) {42};
frost$core$Bit $tmp2994 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2993);
bool $tmp2995 = $tmp2994.value;
if ($tmp2995) goto block86; else goto block87;
block86:;
org$frostlang$frostc$Position* $tmp2996 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2997 = *$tmp2996;
*(&local128) = $tmp2997;
goto block1;
block87:;
frost$core$Int64 $tmp2998 = (frost$core$Int64) {43};
frost$core$Bit $tmp2999 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp2998);
bool $tmp3000 = $tmp2999.value;
if ($tmp3000) goto block88; else goto block89;
block88:;
org$frostlang$frostc$Position* $tmp3001 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3002 = *$tmp3001;
*(&local129) = $tmp3002;
org$frostlang$frostc$FixedArray** $tmp3003 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3004 = *$tmp3003;
*(&local130) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3004));
org$frostlang$frostc$FixedArray* $tmp3005 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3005));
*(&local130) = $tmp3004;
// line 1
org$frostlang$frostc$FixedArray* $tmp3006 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3006));
org$frostlang$frostc$FixedArray* $tmp3007 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3007));
// unreffing _f1
*(&local130) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block89:;
frost$core$Int64 $tmp3008 = (frost$core$Int64) {44};
frost$core$Bit $tmp3009 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp3008);
bool $tmp3010 = $tmp3009.value;
if ($tmp3010) goto block90; else goto block91;
block90:;
org$frostlang$frostc$Position* $tmp3011 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3012 = *$tmp3011;
*(&local131) = $tmp3012;
org$frostlang$frostc$FixedArray** $tmp3013 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3014 = *$tmp3013;
*(&local132) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3014));
org$frostlang$frostc$FixedArray* $tmp3015 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
*(&local132) = $tmp3014;
// line 1
org$frostlang$frostc$FixedArray* $tmp3016 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3016));
org$frostlang$frostc$FixedArray* $tmp3017 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3017));
// unreffing _f1
*(&local132) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block91:;
frost$core$Int64 $tmp3018 = (frost$core$Int64) {45};
frost$core$Bit $tmp3019 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp3018);
bool $tmp3020 = $tmp3019.value;
if ($tmp3020) goto block92; else goto block93;
block92:;
org$frostlang$frostc$Position* $tmp3021 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3022 = *$tmp3021;
*(&local133) = $tmp3022;
frost$core$String** $tmp3023 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3024 = *$tmp3023;
*(&local134) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3024));
frost$core$String* $tmp3025 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
*(&local134) = $tmp3024;
// line 1
frost$core$String* $tmp3026 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3026));
frost$core$String* $tmp3027 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3027));
// unreffing _f1
*(&local134) = ((frost$core$String*) NULL);
goto block1;
block93:;
frost$core$Int64 $tmp3028 = (frost$core$Int64) {46};
frost$core$Bit $tmp3029 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp3028);
bool $tmp3030 = $tmp3029.value;
if ($tmp3030) goto block94; else goto block95;
block94:;
org$frostlang$frostc$Position* $tmp3031 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3032 = *$tmp3031;
*(&local135) = $tmp3032;
org$frostlang$frostc$FixedArray** $tmp3033 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3034 = *$tmp3033;
*(&local136) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3034));
org$frostlang$frostc$FixedArray* $tmp3035 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3035));
*(&local136) = $tmp3034;
org$frostlang$frostc$ASTNode** $tmp3036 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3037 = *$tmp3036;
*(&local137) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3037));
org$frostlang$frostc$ASTNode* $tmp3038 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3038));
*(&local137) = $tmp3037;
// line 1
org$frostlang$frostc$FixedArray* $tmp3039 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3039));
// line 1
org$frostlang$frostc$ASTNode* $tmp3040 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3040));
org$frostlang$frostc$ASTNode* $tmp3041 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
// unreffing _f2
*(&local137) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3042 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3042));
// unreffing _f1
*(&local136) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block95:;
frost$core$Int64 $tmp3043 = (frost$core$Int64) {47};
frost$core$Bit $tmp3044 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp3043);
bool $tmp3045 = $tmp3044.value;
if ($tmp3045) goto block96; else goto block97;
block96:;
org$frostlang$frostc$Position* $tmp3046 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3047 = *$tmp3046;
*(&local138) = $tmp3047;
frost$core$String** $tmp3048 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3049 = *$tmp3048;
*(&local139) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3049));
frost$core$String* $tmp3050 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3050));
*(&local139) = $tmp3049;
org$frostlang$frostc$ASTNode** $tmp3051 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3052 = *$tmp3051;
*(&local140) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3052));
org$frostlang$frostc$ASTNode* $tmp3053 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3053));
*(&local140) = $tmp3052;
// line 1
frost$core$String* $tmp3054 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3054));
// line 1
org$frostlang$frostc$ASTNode* $tmp3055 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3055));
org$frostlang$frostc$ASTNode* $tmp3056 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3056));
// unreffing _f2
*(&local140) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3057 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3057));
// unreffing _f1
*(&local139) = ((frost$core$String*) NULL);
goto block1;
block97:;
frost$core$Int64 $tmp3058 = (frost$core$Int64) {48};
frost$core$Bit $tmp3059 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp3058);
bool $tmp3060 = $tmp3059.value;
if ($tmp3060) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp3061 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3062 = *$tmp3061;
*(&local141) = $tmp3062;
org$frostlang$frostc$FixedArray** $tmp3063 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3064 = *$tmp3063;
*(&local142) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3064));
org$frostlang$frostc$FixedArray* $tmp3065 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3065));
*(&local142) = $tmp3064;
org$frostlang$frostc$ASTNode** $tmp3066 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3067 = *$tmp3066;
*(&local143) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3067));
org$frostlang$frostc$ASTNode* $tmp3068 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3068));
*(&local143) = $tmp3067;
// line 1
org$frostlang$frostc$FixedArray* $tmp3069 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3069));
// line 1
org$frostlang$frostc$ASTNode* $tmp3070 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3070));
org$frostlang$frostc$ASTNode* $tmp3071 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3071));
// unreffing _f2
*(&local143) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3072 = *(&local142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3072));
// unreffing _f1
*(&local142) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block99:;
frost$core$Int64 $tmp3073 = (frost$core$Int64) {49};
frost$core$Bit $tmp3074 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp3073);
bool $tmp3075 = $tmp3074.value;
if ($tmp3075) goto block100; else goto block101;
block100:;
org$frostlang$frostc$Position* $tmp3076 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3077 = *$tmp3076;
*(&local144) = $tmp3077;
frost$core$String** $tmp3078 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3079 = *$tmp3078;
*(&local145) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3079));
frost$core$String* $tmp3080 = *(&local145);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3080));
*(&local145) = $tmp3079;
// line 1
frost$core$String* $tmp3081 = *(&local145);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3081));
frost$core$String* $tmp3082 = *(&local145);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3082));
// unreffing _f1
*(&local145) = ((frost$core$String*) NULL);
goto block1;
block101:;
frost$core$Int64 $tmp3083 = (frost$core$Int64) {50};
frost$core$Bit $tmp3084 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp3083);
bool $tmp3085 = $tmp3084.value;
if ($tmp3085) goto block102; else goto block103;
block102:;
org$frostlang$frostc$Position* $tmp3086 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3087 = *$tmp3086;
*(&local146) = $tmp3087;
org$frostlang$frostc$Variable$Kind* $tmp3088 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp3089 = *$tmp3088;
*(&local147) = $tmp3089;
org$frostlang$frostc$FixedArray** $tmp3090 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3091 = *$tmp3090;
*(&local148) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3091));
org$frostlang$frostc$FixedArray* $tmp3092 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3092));
*(&local148) = $tmp3091;
// line 1
org$frostlang$frostc$FixedArray* $tmp3093 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3093));
org$frostlang$frostc$FixedArray* $tmp3094 = *(&local148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3094));
// unreffing _f2
*(&local148) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block103:;
frost$core$Int64 $tmp3095 = (frost$core$Int64) {51};
frost$core$Bit $tmp3096 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp3095);
bool $tmp3097 = $tmp3096.value;
if ($tmp3097) goto block104; else goto block105;
block104:;
org$frostlang$frostc$Position* $tmp3098 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3099 = *$tmp3098;
*(&local149) = $tmp3099;
org$frostlang$frostc$FixedArray** $tmp3100 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3101 = *$tmp3100;
*(&local150) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
org$frostlang$frostc$FixedArray* $tmp3102 = *(&local150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3102));
*(&local150) = $tmp3101;
org$frostlang$frostc$FixedArray** $tmp3103 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3104 = *$tmp3103;
*(&local151) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3104));
org$frostlang$frostc$FixedArray* $tmp3105 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
*(&local151) = $tmp3104;
// line 1
org$frostlang$frostc$FixedArray* $tmp3106 = *(&local150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
// line 1
org$frostlang$frostc$FixedArray* $tmp3107 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3107));
org$frostlang$frostc$FixedArray* $tmp3108 = *(&local151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3108));
// unreffing _f2
*(&local151) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3109 = *(&local150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3109));
// unreffing _f1
*(&local150) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block105:;
frost$core$Int64 $tmp3110 = (frost$core$Int64) {52};
frost$core$Bit $tmp3111 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2379, $tmp3110);
bool $tmp3112 = $tmp3111.value;
if ($tmp3112) goto block106; else goto block1;
block106:;
org$frostlang$frostc$Position* $tmp3113 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3114 = *$tmp3113;
*(&local152) = $tmp3114;
frost$core$String** $tmp3115 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3116 = *$tmp3115;
*(&local153) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3116));
frost$core$String* $tmp3117 = *(&local153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3117));
*(&local153) = $tmp3116;
org$frostlang$frostc$ASTNode** $tmp3118 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3119 = *$tmp3118;
*(&local154) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3119));
org$frostlang$frostc$ASTNode* $tmp3120 = *(&local154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3120));
*(&local154) = $tmp3119;
org$frostlang$frostc$FixedArray** $tmp3121 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3122 = *$tmp3121;
*(&local155) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3122));
org$frostlang$frostc$FixedArray* $tmp3123 = *(&local155);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3123));
*(&local155) = $tmp3122;
// line 1
frost$core$String* $tmp3124 = *(&local153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3124));
// line 1
org$frostlang$frostc$ASTNode* $tmp3125 = *(&local154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
// line 1
org$frostlang$frostc$FixedArray* $tmp3126 = *(&local155);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3126));
org$frostlang$frostc$FixedArray* $tmp3127 = *(&local155);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3127));
// unreffing _f3
*(&local155) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3128 = *(&local154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3128));
// unreffing _f2
*(&local154) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3129 = *(&local153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3129));
// unreffing _f1
*(&local153) = ((frost$core$String*) NULL);
goto block1;
block1:;
// line 6
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, frost$core$String* param4, org$frostlang$frostc$ASTNode* param5) {

// line 6
frost$core$Int64* $tmp3130 = &param0->$rawValue;
*$tmp3130 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3131 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3131 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3132 = (frost$core$String**) (param0->$data + 16);
*$tmp3132 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3133 = (frost$core$String**) (param0->$data + 24);
*$tmp3133 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3134 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3134 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3) {

// line 6
frost$core$Int64* $tmp3135 = &param0->$rawValue;
*$tmp3135 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3136 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3136 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3137 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3137 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ASTNode* param4) {

// line 6
frost$core$Int64* $tmp3138 = &param0->$rawValue;
*$tmp3138 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3139 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3139 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3140 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3140 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3141 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3141 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3) {

// line 6
frost$core$Int64* $tmp3142 = &param0->$rawValue;
*$tmp3142 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3143 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3143 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3144 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3144 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2) {

// line 6
frost$core$Int64* $tmp3145 = &param0->$rawValue;
*$tmp3145 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3146 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3146 = param2;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$parser$Token$Kind param4, org$frostlang$frostc$ASTNode* param5) {

// line 6
frost$core$Int64* $tmp3147 = &param0->$rawValue;
*$tmp3147 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3148 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3148 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3149 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3149 = param3;
// line 6
org$frostlang$frostc$parser$Token$Kind* $tmp3150 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
*$tmp3150 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3151 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3151 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$Bit param3) {

// line 6
frost$core$Int64* $tmp3152 = &param0->$rawValue;
*$tmp3152 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3153 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3153 = param2;
// line 6
frost$core$Bit* $tmp3154 = (frost$core$Bit*) (param0->$data + 16);
*$tmp3154 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// line 6
frost$core$Int64* $tmp3155 = &param0->$rawValue;
*$tmp3155 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3156 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3156 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3157 = (frost$core$String**) (param0->$data + 16);
*$tmp3157 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp3158 = &param0->$rawValue;
*$tmp3158 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3159 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3159 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3160 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3160 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3161 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3161 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

// line 6
frost$core$Int64* $tmp3162 = &param0->$rawValue;
*$tmp3162 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3163 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3163 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3164 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3164 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3165 = (frost$core$String**) (param0->$data + 24);
*$tmp3165 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3166 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3166 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ChoiceCase$frost$core$Int64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ChoiceCase* param4, frost$core$Int64 param5) {

// line 6
frost$core$Int64* $tmp3167 = &param0->$rawValue;
*$tmp3167 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3168 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3168 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3169 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3169 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ChoiceCase** $tmp3170 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
*$tmp3170 = param4;
// line 6
frost$core$Int64* $tmp3171 = (frost$core$Int64*) (param0->$data + 32);
*$tmp3171 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ClassDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$FixedArray* param9) {

// line 6
frost$core$Int64* $tmp3172 = &param0->$rawValue;
*$tmp3172 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3173 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3173 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3174 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3174 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3175 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3175 = param4;
// line 6
org$frostlang$frostc$ClassDecl$Kind* $tmp3176 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
*$tmp3176 = param5;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
frost$core$String** $tmp3177 = (frost$core$String**) (param0->$data + 40);
*$tmp3177 = param6;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$FixedArray** $tmp3178 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
*$tmp3178 = param7;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$FixedArray** $tmp3179 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
*$tmp3179 = param8;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$FixedArray** $tmp3180 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
*$tmp3180 = param9;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 6
frost$core$Int64* $tmp3181 = &param0->$rawValue;
*$tmp3181 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3182 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3182 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3183 = (frost$core$String**) (param0->$data + 16);
*$tmp3183 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3184 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3184 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3185 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3185 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4) {

// line 6
frost$core$Int64* $tmp3186 = &param0->$rawValue;
*$tmp3186 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3187 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3187 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3188 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3188 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3189 = (frost$core$String**) (param0->$data + 24);
*$tmp3189 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

// line 6
frost$core$Int64* $tmp3190 = &param0->$rawValue;
*$tmp3190 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3191 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3191 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3192 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3192 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3193 = (frost$core$String**) (param0->$data + 24);
*$tmp3193 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3194 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3194 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 6
frost$core$Int64* $tmp3195 = &param0->$rawValue;
*$tmp3195 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3196 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3196 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3197 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3197 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3198 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3198 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3199 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3199 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$FixedArray* param2) {

// line 6
frost$core$Int64* $tmp3200 = &param0->$rawValue;
*$tmp3200 = param1;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$FixedArray** $tmp3201 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
*$tmp3201 = param2;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$FixedArray* param6) {

// line 6
frost$core$Int64* $tmp3202 = &param0->$rawValue;
*$tmp3202 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3203 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3203 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3204 = (frost$core$String**) (param0->$data + 16);
*$tmp3204 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3205 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3205 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3206 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3206 = param5;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$FixedArray** $tmp3207 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
*$tmp3207 = param6;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp3208 = &param0->$rawValue;
*$tmp3208 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3209 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3209 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3210 = (frost$core$String**) (param0->$data + 16);
*$tmp3210 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3211 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3211 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// line 6
frost$core$Int64* $tmp3212 = &param0->$rawValue;
*$tmp3212 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3213 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3213 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3214 = (frost$core$String**) (param0->$data + 16);
*$tmp3214 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 6
frost$core$Int64* $tmp3215 = &param0->$rawValue;
*$tmp3215 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3216 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3216 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3217 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3217 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3218 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3218 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3219 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3219 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$UInt64 param3) {

// line 6
frost$core$Int64* $tmp3220 = &param0->$rawValue;
*$tmp3220 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3221 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3221 = param2;
// line 6
frost$core$UInt64* $tmp3222 = (frost$core$UInt64*) (param0->$data + 16);
*$tmp3222 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3) {

// line 6
frost$core$Int64* $tmp3223 = &param0->$rawValue;
*$tmp3223 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3224 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3224 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp3225 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp3225 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp3226 = &param0->$rawValue;
*$tmp3226 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3227 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3227 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3228 = (frost$core$String**) (param0->$data + 16);
*$tmp3228 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3229 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3229 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$FixedArray* param5) {

// line 6
frost$core$Int64* $tmp3230 = &param0->$rawValue;
*$tmp3230 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3231 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3231 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3232 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3232 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3233 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3233 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3234 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3234 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$MethodDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$ASTNode* param9, org$frostlang$frostc$FixedArray* param10) {

// line 6
frost$core$Int64* $tmp3235 = &param0->$rawValue;
*$tmp3235 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3236 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3236 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3237 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3237 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3238 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3238 = param4;
// line 6
org$frostlang$frostc$MethodDecl$Kind* $tmp3239 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
*$tmp3239 = param5;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
frost$core$String** $tmp3240 = (frost$core$String**) (param0->$data + 40);
*$tmp3240 = param6;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$FixedArray** $tmp3241 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
*$tmp3241 = param7;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$FixedArray** $tmp3242 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
*$tmp3242 = param8;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$ASTNode** $tmp3243 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
*$tmp3243 = param9;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param10));
org$frostlang$frostc$FixedArray** $tmp3244 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
*$tmp3244 = param10;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$parser$Token$Kind param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 6
frost$core$Int64* $tmp3245 = &param0->$rawValue;
*$tmp3245 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3246 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3246 = param2;
// line 6
org$frostlang$frostc$parser$Token$Kind* $tmp3247 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
*$tmp3247 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3248 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3248 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3249 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3249 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4) {

// line 6
frost$core$Int64* $tmp3250 = &param0->$rawValue;
*$tmp3250 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3251 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3251 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3252 = (frost$core$String**) (param0->$data + 16);
*$tmp3252 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3253 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3253 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$parser$Token$Kind param3, org$frostlang$frostc$ASTNode* param4) {

// line 6
frost$core$Int64* $tmp3254 = &param0->$rawValue;
*$tmp3254 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3255 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3255 = param2;
// line 6
org$frostlang$frostc$parser$Token$Kind* $tmp3256 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
*$tmp3256 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3257 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3257 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$Bit$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$Bit param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$ASTNode* param6) {

// line 6
frost$core$Int64* $tmp3258 = &param0->$rawValue;
*$tmp3258 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3259 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3259 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3260 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3260 = param3;
// line 6
frost$core$Bit* $tmp3261 = (frost$core$Bit*) (param0->$data + 24);
*$tmp3261 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3262 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
*$tmp3262 = param5;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$ASTNode** $tmp3263 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
*$tmp3263 = param6;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Real64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$Real64 param3) {

// line 6
frost$core$Int64* $tmp3264 = &param0->$rawValue;
*$tmp3264 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3265 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3265 = param2;
// line 6
frost$core$Real64* $tmp3266 = (frost$core$Real64*) (param0->$data + 16);
*$tmp3266 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3) {

// line 6
frost$core$Int64* $tmp3267 = &param0->$rawValue;
*$tmp3267 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3268 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3268 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3269 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3269 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4) {

// line 6
frost$core$Int64* $tmp3270 = &param0->$rawValue;
*$tmp3270 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3271 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3271 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3272 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3272 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3273 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3273 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4) {

// line 6
frost$core$Int64* $tmp3274 = &param0->$rawValue;
*$tmp3274 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3275 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3275 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3276 = (frost$core$String**) (param0->$data + 16);
*$tmp3276 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3277 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3277 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$Variable$Kind param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp3278 = &param0->$rawValue;
*$tmp3278 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3279 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3279 = param2;
// line 6
org$frostlang$frostc$Variable$Kind* $tmp3280 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
*$tmp3280 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3281 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3281 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp3282 = &param0->$rawValue;
*$tmp3282 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3283 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3283 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3284 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3284 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3285 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3285 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$FixedArray* param5) {

// line 6
frost$core$Int64* $tmp3286 = &param0->$rawValue;
*$tmp3286 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3287 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3287 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3288 = (frost$core$String**) (param0->$data + 16);
*$tmp3288 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3289 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3289 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3290 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3290 = param5;
return;

}






