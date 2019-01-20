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

typedef frost$core$String* (*$fn595)(frost$core$Object*);
typedef frost$core$Bit (*$fn676)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn681)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn717)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn733)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn737)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn742)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn794)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn801)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn849)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn875)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn932)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn936)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn941)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn980)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn998)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1009)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1013)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1018)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1078)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1095)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1133)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1137)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1142)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1175)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1201)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1212)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1252)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1256)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1261)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1288)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1292)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1297)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1353)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1357)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1362)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1397)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1433)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1464)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1468)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1473)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1513)(frost$core$Object*);
typedef frost$core$String* (*$fn1525)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1559)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1563)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1568)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1607)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1611)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1616)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1689)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1693)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1698)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1735)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1745)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1778)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1782)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1787)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1849)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2008)(frost$core$Object*);
typedef frost$core$String* (*$fn2082)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2100)(frost$collections$CollectionView*);
typedef void (*$fn2126)(frost$core$MutableString*, frost$core$Object*);
typedef void (*$fn2130)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef void (*$fn2149)(frost$core$MutableString*, frost$core$Object*);
typedef void (*$fn2153)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn2218)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2263)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2323)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2349)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2353)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2358)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2376)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2380)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2385)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2437)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2441)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2446)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 28, 5772502652536328142, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s547 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x6f\x73\x69\x74\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 103, -4613450259074448913, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s576 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s579 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s614 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static frost$core$String $s616 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s621 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static frost$core$String $s623 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s628 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s629 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s632 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s645 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static frost$core$String $s647 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s654 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static frost$core$String $s655 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static frost$core$String $s684 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s688 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };
static frost$core$String $s693 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s700 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s704 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s728 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static frost$core$String $s748 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s751 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s771 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s772 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s774 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static frost$core$String $s776 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s778 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static frost$core$String $s780 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static frost$core$String $s797 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s805 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s832 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s835 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s840 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s845 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s846 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, -5998790560547262156, NULL };
static frost$core$String $s853 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s878 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s882 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s887 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s925 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s928 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s947 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s955 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static frost$core$String $s960 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static frost$core$String $s965 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static frost$core$String $s976 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s977 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, -5998790560547262156, NULL };
static frost$core$String $s983 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s985 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s994 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s995 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, -5998790560547262156, NULL };
static frost$core$String $s1001 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s1003 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1005 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1024 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1027 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1052 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1053 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s1055 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static frost$core$String $s1057 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1059 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static frost$core$String $s1061 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static frost$core$String $s1081 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static frost$core$String $s1086 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1087 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1090 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s1127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static frost$core$String $s1148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static frost$core$String $s1155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1214 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1248 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s1339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s1343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static frost$core$String $s1345 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static frost$core$String $s1349 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1401 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52\x5f\x47\x45\x4e\x45\x52\x49\x43\x53\x28", 20, -4089576957169252493, NULL };
static frost$core$String $s1429 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1437 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x29", 2, 16504, NULL };
static frost$core$String $s1457 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static frost$core$String $s1459 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1482 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1491 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1492 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1494 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static frost$core$String $s1496 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1549 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1550 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s1553 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1555 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static frost$core$String $s1574 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1577 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1600 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static frost$core$String $s1602 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1622 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1632 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1633 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 117, 3362627311464111926, NULL };
static frost$core$String $s1635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1637 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1682 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1683 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1685 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1704 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1712 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static frost$core$String $s1717 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static frost$core$String $s1731 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1732 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, -5998790560547262156, NULL };
static frost$core$String $s1738 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1740 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1748 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1750 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1759 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1760 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1762 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1764 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1769 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1774 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1775 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 8545549524367827092, NULL };
static frost$core$String $s1793 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1796 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1825 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s1827 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s1831 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s1833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s1837 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s1839 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s1843 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s1845 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s1852 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1854 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1858 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1866 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1871 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1872 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1875 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1883 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x29", 2, 14282, NULL };
static frost$core$String $s1891 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s1892 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s1903 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s1929 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1933 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1962 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1963 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1967 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static frost$core$String $s1969 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s1978 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1979 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1988 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1989 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1991 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static frost$core$String $s2020 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2022 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2039 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2040 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s2042 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s2044 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2046 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static frost$core$String $s2048 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static frost$core$String $s2052 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s2053 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s2064 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s2069 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static frost$core$String $s2070 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static frost$core$String $s2085 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2087 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2103 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static frost$core$String $s2139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s2142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x0a\x66\x61\x69\x6c\x28", 7, 240019370222988, NULL };
static frost$core$String $s2144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b\x0a", 4, 146641607, NULL };
static frost$core$String $s2146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x0a\x66\x61\x69\x6c\x20\x7b\x0a", 9, 2448437595644631413, NULL };
static frost$core$String $s2155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2189 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s2198 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2223 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static frost$core$String $s2227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2243 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2266 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static frost$core$String $s2272 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static frost$core$String $s2308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static frost$core$String $s2313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static frost$core$String $s2318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static frost$core$String $s2341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static frost$core$String $s2343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2345 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s2423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s2427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2431 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static frost$core$String $s2433 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s2452 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s2455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2469 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x41\x53\x54\x4e\x6f\x64\x65\x3a\x20", 21, -8877512154781713630, NULL };
static frost$core$String $s2471 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2472 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2476 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2e\x67\x65\x74\x5f\x61\x73\x53\x74\x72\x69\x6e\x67\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 95, 2618023629491959162, NULL };

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
// line 93
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
// line 95
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
// line 98
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
// line 101
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
// line 104
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
// line 107
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
// line 110
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
// line 113
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
// line 116
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
// line 119
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
// line 122
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
// line 125
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
// line 128
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
// line 131
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
// line 134
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
// line 137
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
// line 140
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
// line 143
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
// line 146
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
// line 149
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
// line 152
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
// line 155
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
// line 158
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
// line 161
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
// line 164
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
// line 167
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
// line 170
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
// line 173
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
// line 176
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
// line 179
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
// line 182
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
// line 185
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
// line 188
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
// line 191
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
// line 194
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
// line 197
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
// line 200
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
// line 203
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
// line 206
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
// line 209
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
// line 212
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
// line 215
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
// line 218
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
// line 221
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
// line 224
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
// line 227
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
// line 230
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
// line 233
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
// line 236
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
org$frostlang$frostc$FixedArray** $tmp483 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp484 = *$tmp483;
org$frostlang$frostc$ASTNode** $tmp485 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp486 = *$tmp485;
// line 239
org$frostlang$frostc$Position $tmp487 = *(&local47);
return $tmp487;
block99:;
frost$core$Int64 $tmp488 = (frost$core$Int64) {50};
frost$core$Bit $tmp489 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp488);
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block100; else goto block101;
block100:;
org$frostlang$frostc$Position* $tmp491 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp492 = *$tmp491;
*(&local48) = $tmp492;
frost$core$String** $tmp493 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp494 = *$tmp493;
// line 242
org$frostlang$frostc$Position $tmp495 = *(&local48);
return $tmp495;
block101:;
frost$core$Int64 $tmp496 = (frost$core$Int64) {42};
frost$core$Bit $tmp497 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp496);
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block102; else goto block103;
block102:;
org$frostlang$frostc$Position* $tmp499 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp500 = *$tmp499;
*(&local49) = $tmp500;
org$frostlang$frostc$FixedArray** $tmp501 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp502 = *$tmp501;
org$frostlang$frostc$ASTNode** $tmp503 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp504 = *$tmp503;
org$frostlang$frostc$FixedArray** $tmp505 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp506 = *$tmp505;
// line 245
org$frostlang$frostc$Position $tmp507 = *(&local49);
return $tmp507;
block103:;
frost$core$Int64 $tmp508 = (frost$core$Int64) {51};
frost$core$Bit $tmp509 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp508);
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block104; else goto block105;
block104:;
org$frostlang$frostc$Position* $tmp511 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp512 = *$tmp511;
*(&local50) = $tmp512;
org$frostlang$frostc$Variable$Kind* $tmp513 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp514 = *$tmp513;
org$frostlang$frostc$FixedArray** $tmp515 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp516 = *$tmp515;
// line 248
org$frostlang$frostc$Position $tmp517 = *(&local50);
return $tmp517;
block105:;
frost$core$Int64 $tmp518 = (frost$core$Int64) {52};
frost$core$Bit $tmp519 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp518);
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block106; else goto block107;
block106:;
org$frostlang$frostc$Position* $tmp521 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp522 = *$tmp521;
*(&local51) = $tmp522;
org$frostlang$frostc$FixedArray** $tmp523 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp524 = *$tmp523;
org$frostlang$frostc$FixedArray** $tmp525 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp526 = *$tmp525;
// line 251
org$frostlang$frostc$Position $tmp527 = *(&local51);
return $tmp527;
block107:;
frost$core$Int64 $tmp528 = (frost$core$Int64) {53};
frost$core$Bit $tmp529 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp528);
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block108; else goto block109;
block108:;
org$frostlang$frostc$Position* $tmp531 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp532 = *$tmp531;
*(&local52) = $tmp532;
frost$core$String** $tmp533 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp534 = *$tmp533;
org$frostlang$frostc$ASTNode** $tmp535 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp536 = *$tmp535;
org$frostlang$frostc$FixedArray** $tmp537 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp538 = *$tmp537;
// line 254
org$frostlang$frostc$Position $tmp539 = *(&local52);
return $tmp539;
block109:;
// line 257
frost$core$Bit $tmp540 = frost$core$Bit$init$builtin_bit(false);
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block110; else goto block111;
block111:;
frost$core$Int64 $tmp542 = (frost$core$Int64) {257};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s543, $tmp542);
abort(); // unreachable
block110:;
goto block1;
block1:;
frost$core$Bit $tmp544 = frost$core$Bit$init$builtin_bit(false);
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block112; else goto block113;
block113:;
frost$core$Int64 $tmp546 = (frost$core$Int64) {92};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s547, $tmp546, &$s548);
abort(); // unreachable
block112:;
abort(); // unreachable

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
org$frostlang$frostc$FixedArray* local123 = NULL;
org$frostlang$frostc$ASTNode* local124 = NULL;
frost$core$String* local125 = NULL;
org$frostlang$frostc$Variable$Kind local126;
org$frostlang$frostc$FixedArray* local127 = NULL;
frost$core$MutableString* local128 = NULL;
org$frostlang$frostc$FixedArray* local129 = NULL;
org$frostlang$frostc$FixedArray* local130 = NULL;
frost$core$MutableString* local131 = NULL;
frost$core$String* local132 = NULL;
org$frostlang$frostc$ASTNode* local133 = NULL;
org$frostlang$frostc$ASTNode* local134 = NULL;
frost$core$String* local135 = NULL;
org$frostlang$frostc$ASTNode* local136 = NULL;
org$frostlang$frostc$FixedArray* local137 = NULL;
frost$core$MutableString* local138 = NULL;
org$frostlang$frostc$ASTNode* local139 = NULL;
// line 264
frost$core$Int64* $tmp549 = &param0->$rawValue;
frost$core$Int64 $tmp550 = *$tmp549;
frost$core$Int64 $tmp551 = (frost$core$Int64) {0};
frost$core$Bit $tmp552 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp551);
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp554 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp555 = *$tmp554;
frost$core$String** $tmp556 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp557 = *$tmp556;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
frost$core$String* $tmp558 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local0) = $tmp557;
frost$core$String** $tmp559 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp560 = *$tmp559;
org$frostlang$frostc$ASTNode** $tmp561 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp562 = *$tmp561;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
org$frostlang$frostc$ASTNode* $tmp563 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
*(&local1) = $tmp562;
// line 266
org$frostlang$frostc$ASTNode* $tmp564 = *(&local1);
frost$core$Bit $tmp565 = frost$core$Bit$init$builtin_bit($tmp564 != NULL);
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block4; else goto block5;
block4:;
// line 267
frost$core$String* $tmp567 = *(&local0);
frost$core$String* $tmp568 = frost$core$String$get_asString$R$frost$core$String($tmp567);
frost$core$String* $tmp569 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp568, &$s570);
org$frostlang$frostc$ASTNode* $tmp571 = *(&local1);
frost$core$Bit $tmp572 = frost$core$Bit$init$builtin_bit($tmp571 != NULL);
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp574 = (frost$core$Int64) {267};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s575, $tmp574, &$s576);
abort(); // unreachable
block6:;
frost$core$String* $tmp577 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp569, ((frost$core$Object*) $tmp571));
frost$core$String* $tmp578 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp577, &$s579);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
// unreffing REF($49:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
// unreffing REF($48:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
// unreffing REF($38:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
// unreffing REF($37:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp580 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
// unreffing expr
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp581 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return $tmp578;
block5:;
// line 269
frost$core$String* $tmp582 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
org$frostlang$frostc$ASTNode* $tmp583 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
// unreffing expr
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp584 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return $tmp582;
block3:;
frost$core$Int64 $tmp585 = (frost$core$Int64) {1};
frost$core$Bit $tmp586 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp585);
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp588 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp589 = *$tmp588;
org$frostlang$frostc$FixedArray** $tmp590 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp591 = *$tmp590;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
org$frostlang$frostc$FixedArray* $tmp592 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
*(&local2) = $tmp591;
// line 272
org$frostlang$frostc$FixedArray* $tmp593 = *(&local2);
$fn595 $tmp594 = ($fn595) ((frost$core$Object*) $tmp593)->$class->vtable[0];
frost$core$String* $tmp596 = $tmp594(((frost$core$Object*) $tmp593));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
// unreffing REF($109:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp597 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
// unreffing elements
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp596;
block9:;
frost$core$Int64 $tmp598 = (frost$core$Int64) {2};
frost$core$Bit $tmp599 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp598);
bool $tmp600 = $tmp599.value;
if ($tmp600) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp601 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp602 = *$tmp601;
org$frostlang$frostc$ASTNode** $tmp603 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp604 = *$tmp603;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
org$frostlang$frostc$ASTNode* $tmp605 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
*(&local3) = $tmp604;
org$frostlang$frostc$ASTNode** $tmp606 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp607 = *$tmp606;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
org$frostlang$frostc$ASTNode* $tmp608 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
*(&local4) = $tmp607;
// line 275
org$frostlang$frostc$ASTNode* $tmp609 = *(&local4);
frost$core$Bit $tmp610 = frost$core$Bit$init$builtin_bit($tmp609 == NULL);
bool $tmp611 = $tmp610.value;
if ($tmp611) goto block12; else goto block13;
block12:;
// line 276
org$frostlang$frostc$ASTNode* $tmp612 = *(&local3);
frost$core$String* $tmp613 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s614, ((frost$core$Object*) $tmp612));
frost$core$String* $tmp615 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp613, &$s616);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
// unreffing REF($155:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
// unreffing REF($154:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp617 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
// unreffing msg
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp618 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
// unreffing test
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp615;
block13:;
// line 278
org$frostlang$frostc$ASTNode* $tmp619 = *(&local3);
frost$core$String* $tmp620 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s621, ((frost$core$Object*) $tmp619));
frost$core$String* $tmp622 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp620, &$s623);
org$frostlang$frostc$ASTNode* $tmp624 = *(&local4);
frost$core$Bit $tmp625 = frost$core$Bit$init$builtin_bit($tmp624 != NULL);
bool $tmp626 = $tmp625.value;
if ($tmp626) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp627 = (frost$core$Int64) {278};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s628, $tmp627, &$s629);
abort(); // unreachable
block14:;
frost$core$String* $tmp630 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp622, ((frost$core$Object*) $tmp624));
frost$core$String* $tmp631 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp630, &$s632);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
// unreffing REF($190:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
// unreffing REF($189:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
// unreffing REF($179:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
// unreffing REF($178:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp633 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
// unreffing msg
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp634 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
// unreffing test
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp631;
block11:;
frost$core$Int64 $tmp635 = (frost$core$Int64) {3};
frost$core$Bit $tmp636 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp635);
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp638 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp639 = *$tmp638;
org$frostlang$frostc$ASTNode** $tmp640 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp641 = *$tmp640;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
org$frostlang$frostc$ASTNode* $tmp642 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
*(&local5) = $tmp641;
// line 281
org$frostlang$frostc$ASTNode* $tmp643 = *(&local5);
frost$core$String* $tmp644 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s645, ((frost$core$Object*) $tmp643));
frost$core$String* $tmp646 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp644, &$s647);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
// unreffing REF($235:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
// unreffing REF($234:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp648 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
// unreffing expr
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp646;
block17:;
frost$core$Int64 $tmp649 = (frost$core$Int64) {4};
frost$core$Bit $tmp650 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp649);
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp652 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp653 = *$tmp652;
// line 284
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s654));
return &$s655;
block19:;
frost$core$Int64 $tmp656 = (frost$core$Int64) {5};
frost$core$Bit $tmp657 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp656);
bool $tmp658 = $tmp657.value;
if ($tmp658) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp659 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp660 = *$tmp659;
org$frostlang$frostc$ASTNode** $tmp661 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp662 = *$tmp661;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
org$frostlang$frostc$ASTNode* $tmp663 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local6) = $tmp662;
org$frostlang$frostc$expression$Binary$Operator* $tmp664 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp665 = *$tmp664;
*(&local7) = $tmp665;
org$frostlang$frostc$ASTNode** $tmp666 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp667 = *$tmp666;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
org$frostlang$frostc$ASTNode* $tmp668 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
*(&local8) = $tmp667;
// line 287
org$frostlang$frostc$expression$Binary$Operator $tmp669 = *(&local7);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp670;
$tmp670 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp670->value = $tmp669;
frost$core$Int64 $tmp671 = (frost$core$Int64) {20};
org$frostlang$frostc$expression$Binary$Operator $tmp672 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp671);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp673;
$tmp673 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp673->value = $tmp672;
ITable* $tmp674 = ((frost$core$Equatable*) $tmp670)->$class->itable;
while ($tmp674->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp674 = $tmp674->next;
}
$fn676 $tmp675 = $tmp674->methods[0];
frost$core$Bit $tmp677 = $tmp675(((frost$core$Equatable*) $tmp670), ((frost$core$Equatable*) $tmp673));
bool $tmp678 = $tmp677.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp673)));
// unreffing REF($293:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp670)));
// unreffing REF($289:frost.core.Equatable<org.frostlang.frostc.expression.Binary.Operator>)
if ($tmp678) goto block22; else goto block23;
block22:;
// line 288
org$frostlang$frostc$ASTNode* $tmp679 = *(&local6);
$fn681 $tmp680 = ($fn681) $tmp679->$class->vtable[0];
frost$core$String* $tmp682 = $tmp680($tmp679);
frost$core$String* $tmp683 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp682, &$s684);
org$frostlang$frostc$ASTNode* $tmp685 = *(&local8);
frost$core$String* $tmp686 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp683, ((frost$core$Object*) $tmp685));
frost$core$String* $tmp687 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp686, &$s688);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
// unreffing REF($312:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
// unreffing REF($311:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
// unreffing REF($308:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
// unreffing REF($307:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp689 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
// unreffing right
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp690 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
// unreffing left
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp687;
block23:;
// line 290
org$frostlang$frostc$ASTNode* $tmp691 = *(&local6);
frost$core$String* $tmp692 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s693, ((frost$core$Object*) $tmp691));
frost$core$String* $tmp694 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp692, &$s695);
org$frostlang$frostc$expression$Binary$Operator $tmp696 = *(&local7);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp697;
$tmp697 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp697->value = $tmp696;
frost$core$String* $tmp698 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp694, ((frost$core$Object*) $tmp697));
frost$core$String* $tmp699 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp698, &$s700);
org$frostlang$frostc$ASTNode* $tmp701 = *(&local8);
frost$core$String* $tmp702 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp699, ((frost$core$Object*) $tmp701));
frost$core$String* $tmp703 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp702, &$s704);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
// unreffing REF($350:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
// unreffing REF($349:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
// unreffing REF($346:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
// unreffing REF($345:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
// unreffing REF($344:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
// unreffing REF($342:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
// unreffing REF($341:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp705 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
// unreffing right
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp706 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
// unreffing left
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp703;
block21:;
frost$core$Int64 $tmp707 = (frost$core$Int64) {6};
frost$core$Bit $tmp708 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp707);
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp710 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp711 = *$tmp710;
frost$core$Bit* $tmp712 = (frost$core$Bit*) (param0->$data + 16);
frost$core$Bit $tmp713 = *$tmp712;
*(&local9) = $tmp713;
// line 293
frost$core$Bit $tmp714 = *(&local9);
frost$core$Bit$wrapper* $tmp715;
$tmp715 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp715->value = $tmp714;
$fn717 $tmp716 = ($fn717) ((frost$core$Object*) $tmp715)->$class->vtable[0];
frost$core$String* $tmp718 = $tmp716(((frost$core$Object*) $tmp715));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
// unreffing REF($398:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
// unreffing REF($396:frost.core.Object)
return $tmp718;
block25:;
frost$core$Int64 $tmp719 = (frost$core$Int64) {7};
frost$core$Bit $tmp720 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp719);
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp722 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp723 = *$tmp722;
org$frostlang$frostc$FixedArray** $tmp724 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp725 = *$tmp724;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
org$frostlang$frostc$FixedArray* $tmp726 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
*(&local10) = $tmp725;
// line 296
frost$core$MutableString* $tmp727 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp727, &$s728);
*(&local11) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
frost$core$MutableString* $tmp729 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
*(&local11) = $tmp727;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
// unreffing REF($424:frost.core.MutableString)
// line 297
org$frostlang$frostc$FixedArray* $tmp730 = *(&local10);
ITable* $tmp731 = ((frost$collections$Iterable*) $tmp730)->$class->itable;
while ($tmp731->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp731 = $tmp731->next;
}
$fn733 $tmp732 = $tmp731->methods[0];
frost$collections$Iterator* $tmp734 = $tmp732(((frost$collections$Iterable*) $tmp730));
goto block28;
block28:;
ITable* $tmp735 = $tmp734->$class->itable;
while ($tmp735->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp735 = $tmp735->next;
}
$fn737 $tmp736 = $tmp735->methods[0];
frost$core$Bit $tmp738 = $tmp736($tmp734);
bool $tmp739 = $tmp738.value;
if ($tmp739) goto block30; else goto block29;
block29:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp740 = $tmp734->$class->itable;
while ($tmp740->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp740 = $tmp740->next;
}
$fn742 $tmp741 = $tmp740->methods[1];
frost$core$Object* $tmp743 = $tmp741($tmp734);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp743)));
org$frostlang$frostc$ASTNode* $tmp744 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp743);
// line 298
frost$core$MutableString* $tmp745 = *(&local11);
org$frostlang$frostc$ASTNode* $tmp746 = *(&local12);
frost$core$String* $tmp747 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp746), &$s748);
frost$core$MutableString$append$frost$core$String($tmp745, $tmp747);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
// unreffing REF($464:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp743);
// unreffing REF($452:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp749 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
// unreffing s
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block28;
block30:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
// unreffing REF($441:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 300
frost$core$MutableString* $tmp750 = *(&local11);
frost$core$MutableString$append$frost$core$String($tmp750, &$s751);
// line 301
frost$core$MutableString* $tmp752 = *(&local11);
frost$core$String* $tmp753 = frost$core$MutableString$finish$R$frost$core$String($tmp752);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
// unreffing REF($486:frost.core.String)
frost$core$MutableString* $tmp754 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
// unreffing result
*(&local11) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp755 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
// unreffing statements
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp753;
block27:;
frost$core$Int64 $tmp756 = (frost$core$Int64) {8};
frost$core$Bit $tmp757 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp756);
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block31; else goto block32;
block31:;
org$frostlang$frostc$Position* $tmp759 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp760 = *$tmp759;
frost$core$String** $tmp761 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp762 = *$tmp761;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
frost$core$String* $tmp763 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
*(&local13) = $tmp762;
// line 304
frost$core$String* $tmp764 = *(&local13);
frost$core$Bit $tmp765 = frost$core$Bit$init$builtin_bit($tmp764 != NULL);
bool $tmp766 = $tmp765.value;
if ($tmp766) goto block33; else goto block34;
block33:;
// line 305
frost$core$String* $tmp767 = *(&local13);
frost$core$Bit $tmp768 = frost$core$Bit$init$builtin_bit($tmp767 != NULL);
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp770 = (frost$core$Int64) {305};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s771, $tmp770, &$s772);
abort(); // unreachable
block35:;
frost$core$String* $tmp773 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s774, $tmp767);
frost$core$String* $tmp775 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp773, &$s776);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
// unreffing REF($535:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
// unreffing REF($534:frost.core.String)
frost$core$String* $tmp777 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
// unreffing label
*(&local13) = ((frost$core$String*) NULL);
return $tmp775;
block34:;
// line 307
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s778));
frost$core$String* $tmp779 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
// unreffing label
*(&local13) = ((frost$core$String*) NULL);
return &$s780;
block32:;
frost$core$Int64 $tmp781 = (frost$core$Int64) {9};
frost$core$Bit $tmp782 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp781);
bool $tmp783 = $tmp782.value;
if ($tmp783) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Position* $tmp784 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp785 = *$tmp784;
org$frostlang$frostc$ASTNode** $tmp786 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp787 = *$tmp786;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
org$frostlang$frostc$ASTNode* $tmp788 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
*(&local14) = $tmp787;
org$frostlang$frostc$FixedArray** $tmp789 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp790 = *$tmp789;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
org$frostlang$frostc$FixedArray* $tmp791 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
*(&local15) = $tmp790;
// line 310
org$frostlang$frostc$ASTNode* $tmp792 = *(&local14);
$fn794 $tmp793 = ($fn794) $tmp792->$class->vtable[0];
frost$core$String* $tmp795 = $tmp793($tmp792);
frost$core$String* $tmp796 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp795, &$s797);
org$frostlang$frostc$FixedArray* $tmp798 = *(&local15);
ITable* $tmp799 = ((frost$collections$CollectionView*) $tmp798)->$class->itable;
while ($tmp799->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp799 = $tmp799->next;
}
$fn801 $tmp800 = $tmp799->methods[1];
frost$core$String* $tmp802 = $tmp800(((frost$collections$CollectionView*) $tmp798));
frost$core$String* $tmp803 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp796, $tmp802);
frost$core$String* $tmp804 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp803, &$s805);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
// unreffing REF($593:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
// unreffing REF($592:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
// unreffing REF($591:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
// unreffing REF($587:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
// unreffing REF($586:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp806 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
// unreffing args
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp807 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
// unreffing target
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp804;
block38:;
frost$core$Int64 $tmp808 = (frost$core$Int64) {10};
frost$core$Bit $tmp809 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp808);
bool $tmp810 = $tmp809.value;
if ($tmp810) goto block39; else goto block40;
block39:;
org$frostlang$frostc$Position* $tmp811 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp812 = *$tmp811;
org$frostlang$frostc$ASTNode** $tmp813 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp814 = *$tmp813;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
org$frostlang$frostc$ASTNode* $tmp815 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
*(&local16) = $tmp814;
frost$core$String** $tmp816 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp817 = *$tmp816;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
frost$core$String* $tmp818 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
*(&local17) = $tmp817;
org$frostlang$frostc$FixedArray** $tmp819 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp820 = *$tmp819;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
org$frostlang$frostc$FixedArray* $tmp821 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
*(&local18) = $tmp820;
// line 313
frost$core$MutableString* $tmp822 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp822);
*(&local19) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
frost$core$MutableString* $tmp823 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
*(&local19) = $tmp822;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
// unreffing REF($656:frost.core.MutableString)
// line 314
org$frostlang$frostc$ASTNode* $tmp824 = *(&local16);
frost$core$Bit $tmp825 = frost$core$Bit$init$builtin_bit($tmp824 != NULL);
bool $tmp826 = $tmp825.value;
if ($tmp826) goto block41; else goto block42;
block41:;
// line 315
frost$core$MutableString* $tmp827 = *(&local19);
org$frostlang$frostc$ASTNode* $tmp828 = *(&local16);
frost$core$Bit $tmp829 = frost$core$Bit$init$builtin_bit($tmp828 != NULL);
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp831 = (frost$core$Int64) {315};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s832, $tmp831, &$s833);
abort(); // unreachable
block43:;
frost$core$String* $tmp834 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp828), &$s835);
frost$core$MutableString$append$frost$core$String($tmp827, $tmp834);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
// unreffing REF($685:frost.core.String)
goto block42;
block42:;
// line 317
frost$core$MutableString* $tmp836 = *(&local19);
frost$core$String* $tmp837 = *(&local17);
frost$core$String* $tmp838 = frost$core$String$get_asString$R$frost$core$String($tmp837);
frost$core$String* $tmp839 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp838, &$s840);
org$frostlang$frostc$FixedArray* $tmp841 = *(&local18);
frost$core$Bit $tmp842 = frost$core$Bit$init$builtin_bit($tmp841 != NULL);
bool $tmp843 = $tmp842.value;
if ($tmp843) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp844 = (frost$core$Int64) {317};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s845, $tmp844, &$s846);
abort(); // unreachable
block45:;
ITable* $tmp847 = ((frost$collections$CollectionView*) $tmp841)->$class->itable;
while ($tmp847->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp847 = $tmp847->next;
}
$fn849 $tmp848 = $tmp847->methods[1];
frost$core$String* $tmp850 = $tmp848(((frost$collections$CollectionView*) $tmp841));
frost$core$String* $tmp851 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp839, $tmp850);
frost$core$String* $tmp852 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp851, &$s853);
frost$core$MutableString$append$frost$core$String($tmp836, $tmp852);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
// unreffing REF($708:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
// unreffing REF($707:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
// unreffing REF($706:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
// unreffing REF($695:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
// unreffing REF($694:frost.core.String)
// line 318
frost$core$MutableString* $tmp854 = *(&local19);
frost$core$String* $tmp855 = frost$core$MutableString$finish$R$frost$core$String($tmp854);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
// unreffing REF($727:frost.core.String)
frost$core$MutableString* $tmp856 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
// unreffing result
*(&local19) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp857 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
// unreffing fields
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp858 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
// unreffing name
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp859 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
// unreffing dc
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp855;
block40:;
frost$core$Int64 $tmp860 = (frost$core$Int64) {11};
frost$core$Bit $tmp861 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp860);
bool $tmp862 = $tmp861.value;
if ($tmp862) goto block47; else goto block48;
block47:;
org$frostlang$frostc$Position* $tmp863 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp864 = *$tmp863;
org$frostlang$frostc$ASTNode** $tmp865 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp866 = *$tmp865;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
org$frostlang$frostc$ASTNode* $tmp867 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
*(&local20) = $tmp866;
org$frostlang$frostc$ChoiceCase** $tmp868 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp869 = *$tmp868;
*(&local21) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
org$frostlang$frostc$ChoiceCase* $tmp870 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
*(&local21) = $tmp869;
frost$core$Int64* $tmp871 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp872 = *$tmp871;
*(&local22) = $tmp872;
// line 321
org$frostlang$frostc$ASTNode* $tmp873 = *(&local20);
$fn875 $tmp874 = ($fn875) $tmp873->$class->vtable[0];
frost$core$String* $tmp876 = $tmp874($tmp873);
frost$core$String* $tmp877 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp876, &$s878);
org$frostlang$frostc$ChoiceCase* $tmp879 = *(&local21);
frost$core$String* $tmp880 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp877, ((frost$core$Object*) $tmp879));
frost$core$String* $tmp881 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp880, &$s882);
frost$core$Int64 $tmp883 = *(&local22);
frost$core$Int64$wrapper* $tmp884;
$tmp884 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp884->value = $tmp883;
frost$core$String* $tmp885 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp881, ((frost$core$Object*) $tmp884));
frost$core$String* $tmp886 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp885, &$s887);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
// unreffing REF($793:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
// unreffing REF($792:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
// unreffing REF($791:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
// unreffing REF($789:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
// unreffing REF($788:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
// unreffing REF($785:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
// unreffing REF($784:frost.core.String)
org$frostlang$frostc$ChoiceCase* $tmp888 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
// unreffing ce
*(&local21) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp889 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
// unreffing base
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp886;
block48:;
frost$core$Int64 $tmp890 = (frost$core$Int64) {12};
frost$core$Bit $tmp891 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp890);
bool $tmp892 = $tmp891.value;
if ($tmp892) goto block49; else goto block50;
block49:;
org$frostlang$frostc$Position* $tmp893 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp894 = *$tmp893;
org$frostlang$frostc$ASTNode** $tmp895 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp896 = *$tmp895;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
org$frostlang$frostc$ASTNode* $tmp897 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
*(&local23) = $tmp896;
org$frostlang$frostc$FixedArray** $tmp898 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp899 = *$tmp898;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
org$frostlang$frostc$FixedArray* $tmp900 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
*(&local24) = $tmp899;
org$frostlang$frostc$ClassDecl$Kind* $tmp901 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp902 = *$tmp901;
*(&local25) = $tmp902;
frost$core$String** $tmp903 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp904 = *$tmp903;
*(&local26) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
frost$core$String* $tmp905 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
*(&local26) = $tmp904;
org$frostlang$frostc$FixedArray** $tmp906 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp907 = *$tmp906;
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
org$frostlang$frostc$FixedArray* $tmp908 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
*(&local27) = $tmp907;
org$frostlang$frostc$FixedArray** $tmp909 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp910 = *$tmp909;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
org$frostlang$frostc$FixedArray* $tmp911 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
*(&local28) = $tmp910;
org$frostlang$frostc$FixedArray** $tmp912 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp913 = *$tmp912;
*(&local29) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
org$frostlang$frostc$FixedArray* $tmp914 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
*(&local29) = $tmp913;
// line 324
frost$core$MutableString* $tmp915 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp915);
*(&local30) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$core$MutableString* $tmp916 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
*(&local30) = $tmp915;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
// unreffing REF($892:frost.core.MutableString)
// line 325
org$frostlang$frostc$ASTNode* $tmp917 = *(&local23);
frost$core$Bit $tmp918 = frost$core$Bit$init$builtin_bit($tmp917 != NULL);
bool $tmp919 = $tmp918.value;
if ($tmp919) goto block51; else goto block52;
block51:;
// line 326
frost$core$MutableString* $tmp920 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp921 = *(&local23);
frost$core$Bit $tmp922 = frost$core$Bit$init$builtin_bit($tmp921 != NULL);
bool $tmp923 = $tmp922.value;
if ($tmp923) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp924 = (frost$core$Int64) {326};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s925, $tmp924, &$s926);
abort(); // unreachable
block53:;
frost$core$String* $tmp927 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp921), &$s928);
frost$core$MutableString$append$frost$core$String($tmp920, $tmp927);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
// unreffing REF($921:frost.core.String)
goto block52;
block52:;
// line 328
org$frostlang$frostc$FixedArray* $tmp929 = *(&local24);
ITable* $tmp930 = ((frost$collections$Iterable*) $tmp929)->$class->itable;
while ($tmp930->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp930 = $tmp930->next;
}
$fn932 $tmp931 = $tmp930->methods[0];
frost$collections$Iterator* $tmp933 = $tmp931(((frost$collections$Iterable*) $tmp929));
goto block55;
block55:;
ITable* $tmp934 = $tmp933->$class->itable;
while ($tmp934->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp934 = $tmp934->next;
}
$fn936 $tmp935 = $tmp934->methods[0];
frost$core$Bit $tmp937 = $tmp935($tmp933);
bool $tmp938 = $tmp937.value;
if ($tmp938) goto block57; else goto block56;
block56:;
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp939 = $tmp933->$class->itable;
while ($tmp939->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp939 = $tmp939->next;
}
$fn941 $tmp940 = $tmp939->methods[1];
frost$core$Object* $tmp942 = $tmp940($tmp933);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp942)));
org$frostlang$frostc$ASTNode* $tmp943 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
*(&local31) = ((org$frostlang$frostc$ASTNode*) $tmp942);
// line 329
frost$core$MutableString* $tmp944 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp945 = *(&local31);
frost$core$String* $tmp946 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp945), &$s947);
frost$core$MutableString$append$frost$core$String($tmp944, $tmp946);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
// unreffing REF($955:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp942);
// unreffing REF($943:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp948 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
// unreffing a
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block55;
block57:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
// unreffing REF($932:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 331
org$frostlang$frostc$ClassDecl$Kind $tmp949 = *(&local25);
frost$core$Int64 $tmp950 = $tmp949.$rawValue;
frost$core$Int64 $tmp951 = (frost$core$Int64) {0};
frost$core$Bit $tmp952 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp950, $tmp951);
bool $tmp953 = $tmp952.value;
if ($tmp953) goto block59; else goto block60;
block59:;
// line 332
frost$core$MutableString* $tmp954 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp954, &$s955);
goto block58;
block60:;
frost$core$Int64 $tmp956 = (frost$core$Int64) {1};
frost$core$Bit $tmp957 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp950, $tmp956);
bool $tmp958 = $tmp957.value;
if ($tmp958) goto block61; else goto block62;
block61:;
// line 333
frost$core$MutableString* $tmp959 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp959, &$s960);
goto block58;
block62:;
frost$core$Int64 $tmp961 = (frost$core$Int64) {2};
frost$core$Bit $tmp962 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp950, $tmp961);
bool $tmp963 = $tmp962.value;
if ($tmp963) goto block63; else goto block58;
block63:;
// line 334
frost$core$MutableString* $tmp964 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp964, &$s965);
goto block58;
block58:;
// line 336
frost$core$MutableString* $tmp966 = *(&local30);
frost$core$String* $tmp967 = *(&local26);
frost$core$MutableString$append$frost$core$String($tmp966, $tmp967);
// line 337
org$frostlang$frostc$FixedArray* $tmp968 = *(&local27);
frost$core$Bit $tmp969 = frost$core$Bit$init$builtin_bit($tmp968 != NULL);
bool $tmp970 = $tmp969.value;
if ($tmp970) goto block64; else goto block65;
block64:;
// line 338
frost$core$MutableString* $tmp971 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp972 = *(&local27);
frost$core$Bit $tmp973 = frost$core$Bit$init$builtin_bit($tmp972 != NULL);
bool $tmp974 = $tmp973.value;
if ($tmp974) goto block66; else goto block67;
block67:;
frost$core$Int64 $tmp975 = (frost$core$Int64) {338};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s976, $tmp975, &$s977);
abort(); // unreachable
block66:;
ITable* $tmp978 = ((frost$collections$CollectionView*) $tmp972)->$class->itable;
while ($tmp978->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp978 = $tmp978->next;
}
$fn980 $tmp979 = $tmp978->methods[1];
frost$core$String* $tmp981 = $tmp979(((frost$collections$CollectionView*) $tmp972));
frost$core$String* $tmp982 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s983, $tmp981);
frost$core$String* $tmp984 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp982, &$s985);
frost$core$MutableString$append$frost$core$String($tmp971, $tmp984);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
// unreffing REF($1023:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
// unreffing REF($1022:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
// unreffing REF($1021:frost.core.String)
goto block65;
block65:;
// line 340
org$frostlang$frostc$FixedArray* $tmp986 = *(&local28);
frost$core$Bit $tmp987 = frost$core$Bit$init$builtin_bit($tmp986 != NULL);
bool $tmp988 = $tmp987.value;
if ($tmp988) goto block68; else goto block69;
block68:;
// line 341
frost$core$MutableString* $tmp989 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp990 = *(&local28);
frost$core$Bit $tmp991 = frost$core$Bit$init$builtin_bit($tmp990 != NULL);
bool $tmp992 = $tmp991.value;
if ($tmp992) goto block70; else goto block71;
block71:;
frost$core$Int64 $tmp993 = (frost$core$Int64) {341};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s994, $tmp993, &$s995);
abort(); // unreachable
block70:;
ITable* $tmp996 = ((frost$collections$CollectionView*) $tmp990)->$class->itable;
while ($tmp996->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp996 = $tmp996->next;
}
$fn998 $tmp997 = $tmp996->methods[1];
frost$core$String* $tmp999 = $tmp997(((frost$collections$CollectionView*) $tmp990));
frost$core$String* $tmp1000 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1001, $tmp999);
frost$core$String* $tmp1002 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1000, &$s1003);
frost$core$MutableString$append$frost$core$String($tmp989, $tmp1002);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
// unreffing REF($1055:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
// unreffing REF($1054:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
// unreffing REF($1053:frost.core.String)
goto block69;
block69:;
// line 343
frost$core$MutableString* $tmp1004 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp1004, &$s1005);
// line 344
org$frostlang$frostc$FixedArray* $tmp1006 = *(&local29);
ITable* $tmp1007 = ((frost$collections$Iterable*) $tmp1006)->$class->itable;
while ($tmp1007->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1007 = $tmp1007->next;
}
$fn1009 $tmp1008 = $tmp1007->methods[0];
frost$collections$Iterator* $tmp1010 = $tmp1008(((frost$collections$Iterable*) $tmp1006));
goto block72;
block72:;
ITable* $tmp1011 = $tmp1010->$class->itable;
while ($tmp1011->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1011 = $tmp1011->next;
}
$fn1013 $tmp1012 = $tmp1011->methods[0];
frost$core$Bit $tmp1014 = $tmp1012($tmp1010);
bool $tmp1015 = $tmp1014.value;
if ($tmp1015) goto block74; else goto block73;
block73:;
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1016 = $tmp1010->$class->itable;
while ($tmp1016->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1016 = $tmp1016->next;
}
$fn1018 $tmp1017 = $tmp1016->methods[1];
frost$core$Object* $tmp1019 = $tmp1017($tmp1010);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1019)));
org$frostlang$frostc$ASTNode* $tmp1020 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
*(&local32) = ((org$frostlang$frostc$ASTNode*) $tmp1019);
// line 345
frost$core$MutableString* $tmp1021 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp1022 = *(&local32);
frost$core$String* $tmp1023 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1022), &$s1024);
frost$core$MutableString$append$frost$core$String($tmp1021, $tmp1023);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
// unreffing REF($1098:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1019);
// unreffing REF($1086:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1025 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
// unreffing m
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block72;
block74:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
// unreffing REF($1075:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 347
frost$core$MutableString* $tmp1026 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp1026, &$s1027);
// line 348
frost$core$MutableString* $tmp1028 = *(&local30);
frost$core$String* $tmp1029 = frost$core$MutableString$finish$R$frost$core$String($tmp1028);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
// unreffing REF($1120:frost.core.String)
frost$core$MutableString* $tmp1030 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
// unreffing result
*(&local30) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1031 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
// unreffing members
*(&local29) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1032 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
// unreffing supertypes
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1033 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
// unreffing generics
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1034 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
// unreffing name
*(&local26) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1035 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
// unreffing annotations
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1036 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
// unreffing dc
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1029;
block50:;
frost$core$Int64 $tmp1037 = (frost$core$Int64) {13};
frost$core$Bit $tmp1038 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1037);
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block75; else goto block76;
block75:;
org$frostlang$frostc$Position* $tmp1040 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1041 = *$tmp1040;
frost$core$String** $tmp1042 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1043 = *$tmp1042;
*(&local33) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
frost$core$String* $tmp1044 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
*(&local33) = $tmp1043;
// line 351
frost$core$String* $tmp1045 = *(&local33);
frost$core$Bit $tmp1046 = frost$core$Bit$init$builtin_bit($tmp1045 != NULL);
bool $tmp1047 = $tmp1046.value;
if ($tmp1047) goto block77; else goto block78;
block77:;
// line 352
frost$core$String* $tmp1048 = *(&local33);
frost$core$Bit $tmp1049 = frost$core$Bit$init$builtin_bit($tmp1048 != NULL);
bool $tmp1050 = $tmp1049.value;
if ($tmp1050) goto block79; else goto block80;
block80:;
frost$core$Int64 $tmp1051 = (frost$core$Int64) {352};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1052, $tmp1051, &$s1053);
abort(); // unreachable
block79:;
frost$core$String* $tmp1054 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1055, $tmp1048);
frost$core$String* $tmp1056 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1054, &$s1057);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
// unreffing REF($1194:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
// unreffing REF($1193:frost.core.String)
frost$core$String* $tmp1058 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
// unreffing label
*(&local33) = ((frost$core$String*) NULL);
return $tmp1056;
block78:;
// line 354
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1059));
frost$core$String* $tmp1060 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
// unreffing label
*(&local33) = ((frost$core$String*) NULL);
return &$s1061;
block76:;
frost$core$Int64 $tmp1062 = (frost$core$Int64) {14};
frost$core$Bit $tmp1063 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1062);
bool $tmp1064 = $tmp1063.value;
if ($tmp1064) goto block81; else goto block82;
block81:;
org$frostlang$frostc$Position* $tmp1065 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1066 = *$tmp1065;
org$frostlang$frostc$ASTNode** $tmp1067 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1068 = *$tmp1067;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
org$frostlang$frostc$ASTNode* $tmp1069 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
*(&local34) = $tmp1068;
org$frostlang$frostc$ASTNode** $tmp1070 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1071 = *$tmp1070;
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
org$frostlang$frostc$ASTNode* $tmp1072 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
*(&local35) = $tmp1071;
// line 357
org$frostlang$frostc$ASTNode* $tmp1073 = *(&local35);
frost$core$Bit $tmp1074 = frost$core$Bit$init$builtin_bit($tmp1073 != NULL);
bool $tmp1075 = $tmp1074.value;
if ($tmp1075) goto block83; else goto block84;
block83:;
// line 358
org$frostlang$frostc$ASTNode* $tmp1076 = *(&local34);
$fn1078 $tmp1077 = ($fn1078) $tmp1076->$class->vtable[0];
frost$core$String* $tmp1079 = $tmp1077($tmp1076);
frost$core$String* $tmp1080 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1079, &$s1081);
org$frostlang$frostc$ASTNode* $tmp1082 = *(&local35);
frost$core$Bit $tmp1083 = frost$core$Bit$init$builtin_bit($tmp1082 != NULL);
bool $tmp1084 = $tmp1083.value;
if ($tmp1084) goto block85; else goto block86;
block86:;
frost$core$Int64 $tmp1085 = (frost$core$Int64) {358};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1086, $tmp1085, &$s1087);
abort(); // unreachable
block85:;
frost$core$String* $tmp1088 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1080, ((frost$core$Object*) $tmp1082));
frost$core$String* $tmp1089 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1088, &$s1090);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
// unreffing REF($1263:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
// unreffing REF($1262:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
// unreffing REF($1252:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
// unreffing REF($1251:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1091 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
// unreffing value
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1092 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
// unreffing target
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1089;
block84:;
// line 360
org$frostlang$frostc$ASTNode* $tmp1093 = *(&local34);
$fn1095 $tmp1094 = ($fn1095) ((frost$core$Object*) $tmp1093)->$class->vtable[0];
frost$core$String* $tmp1096 = $tmp1094(((frost$core$Object*) $tmp1093));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
// unreffing REF($1293:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1097 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
// unreffing value
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1098 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
// unreffing target
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1096;
block82:;
frost$core$Int64 $tmp1099 = (frost$core$Int64) {15};
frost$core$Bit $tmp1100 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1099);
bool $tmp1101 = $tmp1100.value;
if ($tmp1101) goto block87; else goto block88;
block87:;
org$frostlang$frostc$Position* $tmp1102 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1103 = *$tmp1102;
frost$core$String** $tmp1104 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1105 = *$tmp1104;
*(&local36) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
frost$core$String* $tmp1106 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
*(&local36) = $tmp1105;
org$frostlang$frostc$FixedArray** $tmp1107 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1108 = *$tmp1107;
*(&local37) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
org$frostlang$frostc$FixedArray* $tmp1109 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
*(&local37) = $tmp1108;
org$frostlang$frostc$ASTNode** $tmp1110 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1111 = *$tmp1110;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1111));
org$frostlang$frostc$ASTNode* $tmp1112 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
*(&local38) = $tmp1111;
// line 363
frost$core$MutableString* $tmp1113 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1113);
*(&local39) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
frost$core$MutableString* $tmp1114 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
*(&local39) = $tmp1113;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
// unreffing REF($1344:frost.core.MutableString)
// line 364
frost$core$String* $tmp1115 = *(&local36);
frost$core$Bit $tmp1116 = frost$core$Bit$init$builtin_bit($tmp1115 != NULL);
bool $tmp1117 = $tmp1116.value;
if ($tmp1117) goto block89; else goto block90;
block89:;
// line 365
frost$core$MutableString* $tmp1118 = *(&local39);
frost$core$String* $tmp1119 = *(&local36);
frost$core$Bit $tmp1120 = frost$core$Bit$init$builtin_bit($tmp1119 != NULL);
bool $tmp1121 = $tmp1120.value;
if ($tmp1121) goto block91; else goto block92;
block92:;
frost$core$Int64 $tmp1122 = (frost$core$Int64) {365};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1123, $tmp1122, &$s1124);
abort(); // unreachable
block91:;
frost$core$String* $tmp1125 = frost$core$String$get_asString$R$frost$core$String($tmp1119);
frost$core$String* $tmp1126 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1125, &$s1127);
frost$core$MutableString$append$frost$core$String($tmp1118, $tmp1126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
// unreffing REF($1374:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
// unreffing REF($1373:frost.core.String)
goto block90;
block90:;
// line 367
frost$core$MutableString* $tmp1128 = *(&local39);
frost$core$MutableString$append$frost$core$String($tmp1128, &$s1129);
// line 368
org$frostlang$frostc$FixedArray* $tmp1130 = *(&local37);
ITable* $tmp1131 = ((frost$collections$Iterable*) $tmp1130)->$class->itable;
while ($tmp1131->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1131 = $tmp1131->next;
}
$fn1133 $tmp1132 = $tmp1131->methods[0];
frost$collections$Iterator* $tmp1134 = $tmp1132(((frost$collections$Iterable*) $tmp1130));
goto block93;
block93:;
ITable* $tmp1135 = $tmp1134->$class->itable;
while ($tmp1135->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1135 = $tmp1135->next;
}
$fn1137 $tmp1136 = $tmp1135->methods[0];
frost$core$Bit $tmp1138 = $tmp1136($tmp1134);
bool $tmp1139 = $tmp1138.value;
if ($tmp1139) goto block95; else goto block94;
block94:;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1140 = $tmp1134->$class->itable;
while ($tmp1140->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1140 = $tmp1140->next;
}
$fn1142 $tmp1141 = $tmp1140->methods[1];
frost$core$Object* $tmp1143 = $tmp1141($tmp1134);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1143)));
org$frostlang$frostc$ASTNode* $tmp1144 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
*(&local40) = ((org$frostlang$frostc$ASTNode*) $tmp1143);
// line 369
frost$core$MutableString* $tmp1145 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp1146 = *(&local40);
frost$core$String* $tmp1147 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1146), &$s1148);
frost$core$MutableString$append$frost$core$String($tmp1145, $tmp1147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
// unreffing REF($1414:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1143);
// unreffing REF($1402:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1149 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
// unreffing s
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block93;
block95:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
// unreffing REF($1391:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 371
frost$core$MutableString* $tmp1150 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp1151 = *(&local38);
frost$core$String* $tmp1152 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1153, ((frost$core$Object*) $tmp1151));
frost$core$String* $tmp1154 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1152, &$s1155);
frost$core$MutableString$append$frost$core$String($tmp1150, $tmp1154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
// unreffing REF($1436:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
// unreffing REF($1435:frost.core.String)
// line 372
frost$core$MutableString* $tmp1156 = *(&local39);
frost$core$String* $tmp1157 = frost$core$MutableString$finish$R$frost$core$String($tmp1156);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
// unreffing REF($1446:frost.core.String)
frost$core$MutableString* $tmp1158 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
// unreffing result
*(&local39) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1159 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
// unreffing test
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1160 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
// unreffing statements
*(&local37) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1161 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
// unreffing label
*(&local36) = ((frost$core$String*) NULL);
return $tmp1157;
block88:;
frost$core$Int64 $tmp1162 = (frost$core$Int64) {16};
frost$core$Bit $tmp1163 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1162);
bool $tmp1164 = $tmp1163.value;
if ($tmp1164) goto block96; else goto block97;
block96:;
org$frostlang$frostc$Position* $tmp1165 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1166 = *$tmp1165;
org$frostlang$frostc$ASTNode** $tmp1167 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1168 = *$tmp1167;
*(&local41) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
org$frostlang$frostc$ASTNode* $tmp1169 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
*(&local41) = $tmp1168;
frost$core$String** $tmp1170 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1171 = *$tmp1170;
*(&local42) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
frost$core$String* $tmp1172 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
*(&local42) = $tmp1171;
// line 375
org$frostlang$frostc$ASTNode* $tmp1173 = *(&local41);
$fn1175 $tmp1174 = ($fn1175) $tmp1173->$class->vtable[0];
frost$core$String* $tmp1176 = $tmp1174($tmp1173);
frost$core$String* $tmp1177 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1176, &$s1178);
frost$core$String* $tmp1179 = *(&local42);
frost$core$String* $tmp1180 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1177, $tmp1179);
frost$core$String* $tmp1181 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1180, &$s1182);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
// unreffing REF($1504:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
// unreffing REF($1503:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
// unreffing REF($1501:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
// unreffing REF($1500:frost.core.String)
frost$core$String* $tmp1183 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
// unreffing field
*(&local42) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1184 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
// unreffing base
*(&local41) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1181;
block97:;
frost$core$Int64 $tmp1185 = (frost$core$Int64) {17};
frost$core$Bit $tmp1186 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1185);
bool $tmp1187 = $tmp1186.value;
if ($tmp1187) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp1188 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1189 = *$tmp1188;
org$frostlang$frostc$ASTNode** $tmp1190 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1191 = *$tmp1190;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
org$frostlang$frostc$ASTNode* $tmp1192 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
*(&local43) = $tmp1191;
frost$core$String** $tmp1193 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1194 = *$tmp1193;
*(&local44) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
frost$core$String* $tmp1195 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
*(&local44) = $tmp1194;
org$frostlang$frostc$FixedArray** $tmp1196 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1197 = *$tmp1196;
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
org$frostlang$frostc$FixedArray* $tmp1198 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
*(&local45) = $tmp1197;
// line 378
org$frostlang$frostc$ASTNode* $tmp1199 = *(&local43);
$fn1201 $tmp1200 = ($fn1201) $tmp1199->$class->vtable[0];
frost$core$String* $tmp1202 = $tmp1200($tmp1199);
frost$core$String* $tmp1203 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1202, &$s1204);
frost$core$String* $tmp1205 = *(&local44);
frost$core$String* $tmp1206 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1203, $tmp1205);
frost$core$String* $tmp1207 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1206, &$s1208);
org$frostlang$frostc$FixedArray* $tmp1209 = *(&local45);
ITable* $tmp1210 = ((frost$collections$CollectionView*) $tmp1209)->$class->itable;
while ($tmp1210->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1210 = $tmp1210->next;
}
$fn1212 $tmp1211 = $tmp1210->methods[2];
frost$core$String* $tmp1213 = $tmp1211(((frost$collections$CollectionView*) $tmp1209), &$s1214);
frost$core$String* $tmp1215 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1207, $tmp1213);
frost$core$String* $tmp1216 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1215, &$s1217);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
// unreffing REF($1576:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
// unreffing REF($1575:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
// unreffing REF($1574:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
// unreffing REF($1570:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
// unreffing REF($1569:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
// unreffing REF($1567:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
// unreffing REF($1566:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp1218 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
// unreffing types
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1219 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
// unreffing field
*(&local44) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1220 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
// unreffing base
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1216;
block99:;
frost$core$Int64 $tmp1221 = (frost$core$Int64) {18};
frost$core$Bit $tmp1222 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1221);
bool $tmp1223 = $tmp1222.value;
if ($tmp1223) goto block100; else goto block101;
block100:;
org$frostlang$frostc$Position* $tmp1224 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1225 = *$tmp1224;
org$frostlang$frostc$ASTNode** $tmp1226 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1227 = *$tmp1226;
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
org$frostlang$frostc$ASTNode* $tmp1228 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
*(&local46) = $tmp1227;
org$frostlang$frostc$FixedArray** $tmp1229 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1230 = *$tmp1229;
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
org$frostlang$frostc$FixedArray* $tmp1231 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
*(&local47) = $tmp1230;
org$frostlang$frostc$ASTNode** $tmp1232 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1233 = *$tmp1232;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
org$frostlang$frostc$ASTNode* $tmp1234 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
*(&local48) = $tmp1233;
// line 381
frost$core$MutableString* $tmp1235 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1235);
*(&local49) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
frost$core$MutableString* $tmp1236 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
*(&local49) = $tmp1235;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
// unreffing REF($1650:frost.core.MutableString)
// line 382
org$frostlang$frostc$ASTNode* $tmp1237 = *(&local46);
frost$core$Bit $tmp1238 = frost$core$Bit$init$builtin_bit($tmp1237 != NULL);
bool $tmp1239 = $tmp1238.value;
if ($tmp1239) goto block102; else goto block103;
block102:;
// line 383
frost$core$MutableString* $tmp1240 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1241 = *(&local46);
frost$core$Bit $tmp1242 = frost$core$Bit$init$builtin_bit($tmp1241 != NULL);
bool $tmp1243 = $tmp1242.value;
if ($tmp1243) goto block104; else goto block105;
block105:;
frost$core$Int64 $tmp1244 = (frost$core$Int64) {383};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1245, $tmp1244, &$s1246);
abort(); // unreachable
block104:;
frost$core$String* $tmp1247 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1241), &$s1248);
frost$core$MutableString$append$frost$core$String($tmp1240, $tmp1247);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
// unreffing REF($1679:frost.core.String)
goto block103;
block103:;
// line 385
org$frostlang$frostc$FixedArray* $tmp1249 = *(&local47);
ITable* $tmp1250 = ((frost$collections$Iterable*) $tmp1249)->$class->itable;
while ($tmp1250->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1250 = $tmp1250->next;
}
$fn1252 $tmp1251 = $tmp1250->methods[0];
frost$collections$Iterator* $tmp1253 = $tmp1251(((frost$collections$Iterable*) $tmp1249));
goto block106;
block106:;
ITable* $tmp1254 = $tmp1253->$class->itable;
while ($tmp1254->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1254 = $tmp1254->next;
}
$fn1256 $tmp1255 = $tmp1254->methods[0];
frost$core$Bit $tmp1257 = $tmp1255($tmp1253);
bool $tmp1258 = $tmp1257.value;
if ($tmp1258) goto block108; else goto block107;
block107:;
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1259 = $tmp1253->$class->itable;
while ($tmp1259->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1259 = $tmp1259->next;
}
$fn1261 $tmp1260 = $tmp1259->methods[1];
frost$core$Object* $tmp1262 = $tmp1260($tmp1253);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1262)));
org$frostlang$frostc$ASTNode* $tmp1263 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
*(&local50) = ((org$frostlang$frostc$ASTNode*) $tmp1262);
// line 386
frost$core$MutableString* $tmp1264 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1265 = *(&local50);
frost$core$String* $tmp1266 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1265), &$s1267);
frost$core$MutableString$append$frost$core$String($tmp1264, $tmp1266);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
// unreffing REF($1713:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1262);
// unreffing REF($1701:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1268 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
// unreffing a
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block106;
block108:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
// unreffing REF($1690:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 388
frost$core$MutableString* $tmp1269 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1270 = *(&local48);
frost$core$MutableString$append$frost$core$Object($tmp1269, ((frost$core$Object*) $tmp1270));
// line 389
frost$core$MutableString* $tmp1271 = *(&local49);
frost$core$String* $tmp1272 = frost$core$MutableString$finish$R$frost$core$String($tmp1271);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
// unreffing REF($1737:frost.core.String)
frost$core$MutableString* $tmp1273 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
// unreffing result
*(&local49) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1274 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
// unreffing decl
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1275 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
// unreffing annotations
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1276 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
// unreffing dc
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1272;
block101:;
frost$core$Int64 $tmp1277 = (frost$core$Int64) {19};
frost$core$Bit $tmp1278 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1277);
bool $tmp1279 = $tmp1278.value;
if ($tmp1279) goto block109; else goto block110;
block109:;
org$frostlang$frostc$FixedArray** $tmp1280 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp1281 = *$tmp1280;
*(&local51) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
org$frostlang$frostc$FixedArray* $tmp1282 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
*(&local51) = $tmp1281;
// line 392
frost$core$MutableString* $tmp1283 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1283);
*(&local52) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
frost$core$MutableString* $tmp1284 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
*(&local52) = $tmp1283;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
// unreffing REF($1778:frost.core.MutableString)
// line 393
org$frostlang$frostc$FixedArray* $tmp1285 = *(&local51);
ITable* $tmp1286 = ((frost$collections$Iterable*) $tmp1285)->$class->itable;
while ($tmp1286->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1286 = $tmp1286->next;
}
$fn1288 $tmp1287 = $tmp1286->methods[0];
frost$collections$Iterator* $tmp1289 = $tmp1287(((frost$collections$Iterable*) $tmp1285));
goto block111;
block111:;
ITable* $tmp1290 = $tmp1289->$class->itable;
while ($tmp1290->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1290 = $tmp1290->next;
}
$fn1292 $tmp1291 = $tmp1290->methods[0];
frost$core$Bit $tmp1293 = $tmp1291($tmp1289);
bool $tmp1294 = $tmp1293.value;
if ($tmp1294) goto block113; else goto block112;
block112:;
*(&local53) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1295 = $tmp1289->$class->itable;
while ($tmp1295->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1295 = $tmp1295->next;
}
$fn1297 $tmp1296 = $tmp1295->methods[1];
frost$core$Object* $tmp1298 = $tmp1296($tmp1289);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1298)));
org$frostlang$frostc$ASTNode* $tmp1299 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
*(&local53) = ((org$frostlang$frostc$ASTNode*) $tmp1298);
// line 394
frost$core$MutableString* $tmp1300 = *(&local52);
org$frostlang$frostc$ASTNode* $tmp1301 = *(&local53);
frost$core$String* $tmp1302 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1301), &$s1303);
frost$core$MutableString$append$frost$core$String($tmp1300, $tmp1302);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
// unreffing REF($1818:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1298);
// unreffing REF($1806:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1304 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
// unreffing e
*(&local53) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block111;
block113:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
// unreffing REF($1795:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 396
frost$core$MutableString* $tmp1305 = *(&local52);
frost$core$String* $tmp1306 = frost$core$MutableString$finish$R$frost$core$String($tmp1305);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
// unreffing REF($1837:frost.core.String)
frost$core$MutableString* $tmp1307 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
// unreffing result
*(&local52) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1308 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
// unreffing entries
*(&local51) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1306;
block110:;
frost$core$Int64 $tmp1309 = (frost$core$Int64) {20};
frost$core$Bit $tmp1310 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1309);
bool $tmp1311 = $tmp1310.value;
if ($tmp1311) goto block114; else goto block115;
block114:;
org$frostlang$frostc$Position* $tmp1312 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1313 = *$tmp1312;
frost$core$String** $tmp1314 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1315 = *$tmp1314;
*(&local54) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
frost$core$String* $tmp1316 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
*(&local54) = $tmp1315;
org$frostlang$frostc$ASTNode** $tmp1317 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1318 = *$tmp1317;
*(&local55) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
org$frostlang$frostc$ASTNode* $tmp1319 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
*(&local55) = $tmp1318;
org$frostlang$frostc$ASTNode** $tmp1320 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1321 = *$tmp1320;
*(&local56) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
org$frostlang$frostc$ASTNode* $tmp1322 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
*(&local56) = $tmp1321;
org$frostlang$frostc$FixedArray** $tmp1323 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1324 = *$tmp1323;
*(&local57) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
org$frostlang$frostc$FixedArray* $tmp1325 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
*(&local57) = $tmp1324;
// line 399
frost$core$MutableString* $tmp1326 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1326);
*(&local58) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
frost$core$MutableString* $tmp1327 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
*(&local58) = $tmp1326;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
// unreffing REF($1897:frost.core.MutableString)
// line 400
frost$core$String* $tmp1328 = *(&local54);
frost$core$Bit $tmp1329 = frost$core$Bit$init$builtin_bit($tmp1328 != NULL);
bool $tmp1330 = $tmp1329.value;
if ($tmp1330) goto block116; else goto block117;
block116:;
// line 401
frost$core$MutableString* $tmp1331 = *(&local58);
frost$core$String* $tmp1332 = *(&local54);
frost$core$Bit $tmp1333 = frost$core$Bit$init$builtin_bit($tmp1332 != NULL);
bool $tmp1334 = $tmp1333.value;
if ($tmp1334) goto block118; else goto block119;
block119:;
frost$core$Int64 $tmp1335 = (frost$core$Int64) {401};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1336, $tmp1335, &$s1337);
abort(); // unreachable
block118:;
frost$core$String* $tmp1338 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1332, &$s1339);
frost$core$MutableString$append$frost$core$String($tmp1331, $tmp1338);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
// unreffing REF($1926:frost.core.String)
goto block117;
block117:;
// line 403
frost$core$MutableString* $tmp1340 = *(&local58);
org$frostlang$frostc$ASTNode* $tmp1341 = *(&local55);
frost$core$String* $tmp1342 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1343, ((frost$core$Object*) $tmp1341));
frost$core$String* $tmp1344 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1342, &$s1345);
org$frostlang$frostc$ASTNode* $tmp1346 = *(&local56);
frost$core$String* $tmp1347 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1344, ((frost$core$Object*) $tmp1346));
frost$core$String* $tmp1348 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1347, &$s1349);
frost$core$MutableString$append$frost$core$String($tmp1340, $tmp1348);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
// unreffing REF($1941:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
// unreffing REF($1940:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
// unreffing REF($1937:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
// unreffing REF($1936:frost.core.String)
// line 404
org$frostlang$frostc$FixedArray* $tmp1350 = *(&local57);
ITable* $tmp1351 = ((frost$collections$Iterable*) $tmp1350)->$class->itable;
while ($tmp1351->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1351 = $tmp1351->next;
}
$fn1353 $tmp1352 = $tmp1351->methods[0];
frost$collections$Iterator* $tmp1354 = $tmp1352(((frost$collections$Iterable*) $tmp1350));
goto block120;
block120:;
ITable* $tmp1355 = $tmp1354->$class->itable;
while ($tmp1355->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1355 = $tmp1355->next;
}
$fn1357 $tmp1356 = $tmp1355->methods[0];
frost$core$Bit $tmp1358 = $tmp1356($tmp1354);
bool $tmp1359 = $tmp1358.value;
if ($tmp1359) goto block122; else goto block121;
block121:;
*(&local59) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1360 = $tmp1354->$class->itable;
while ($tmp1360->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1360 = $tmp1360->next;
}
$fn1362 $tmp1361 = $tmp1360->methods[1];
frost$core$Object* $tmp1363 = $tmp1361($tmp1354);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1363)));
org$frostlang$frostc$ASTNode* $tmp1364 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
*(&local59) = ((org$frostlang$frostc$ASTNode*) $tmp1363);
// line 405
frost$core$MutableString* $tmp1365 = *(&local58);
org$frostlang$frostc$ASTNode* $tmp1366 = *(&local59);
frost$core$String* $tmp1367 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1366), &$s1368);
frost$core$MutableString$append$frost$core$String($tmp1365, $tmp1367);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
// unreffing REF($1983:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1363);
// unreffing REF($1971:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1369 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
// unreffing s
*(&local59) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block120;
block122:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
// unreffing REF($1960:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 407
frost$core$MutableString* $tmp1370 = *(&local58);
frost$core$MutableString$append$frost$core$String($tmp1370, &$s1371);
// line 408
frost$core$MutableString* $tmp1372 = *(&local58);
frost$core$String* $tmp1373 = frost$core$MutableString$finish$R$frost$core$String($tmp1372);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
// unreffing REF($2005:frost.core.String)
frost$core$MutableString* $tmp1374 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
// unreffing result
*(&local58) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1375 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
// unreffing statements
*(&local57) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1376 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
// unreffing list
*(&local56) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1377 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
// unreffing target
*(&local55) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1378 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
// unreffing label
*(&local54) = ((frost$core$String*) NULL);
return $tmp1373;
block115:;
frost$core$Int64 $tmp1379 = (frost$core$Int64) {21};
frost$core$Bit $tmp1380 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1379);
bool $tmp1381 = $tmp1380.value;
if ($tmp1381) goto block123; else goto block124;
block123:;
org$frostlang$frostc$Position* $tmp1382 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1383 = *$tmp1382;
frost$core$String** $tmp1384 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1385 = *$tmp1384;
*(&local60) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
frost$core$String* $tmp1386 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
*(&local60) = $tmp1385;
org$frostlang$frostc$FixedArray** $tmp1387 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1388 = *$tmp1387;
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
org$frostlang$frostc$FixedArray* $tmp1389 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
*(&local61) = $tmp1388;
// line 411
frost$core$String* $tmp1390 = *(&local60);
frost$core$String* $tmp1391 = frost$core$String$get_asString$R$frost$core$String($tmp1390);
frost$core$String* $tmp1392 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1391, &$s1393);
org$frostlang$frostc$FixedArray* $tmp1394 = *(&local61);
ITable* $tmp1395 = ((frost$collections$CollectionView*) $tmp1394)->$class->itable;
while ($tmp1395->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1395 = $tmp1395->next;
}
$fn1397 $tmp1396 = $tmp1395->methods[1];
frost$core$String* $tmp1398 = $tmp1396(((frost$collections$CollectionView*) $tmp1394));
frost$core$String* $tmp1399 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1392, $tmp1398);
frost$core$String* $tmp1400 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1399, &$s1401);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
// unreffing REF($2070:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
// unreffing REF($2069:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
// unreffing REF($2068:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
// unreffing REF($2064:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
// unreffing REF($2063:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp1402 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
// unreffing subtypes
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1403 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
// unreffing name
*(&local60) = ((frost$core$String*) NULL);
return $tmp1400;
block124:;
frost$core$Int64 $tmp1404 = (frost$core$Int64) {22};
frost$core$Bit $tmp1405 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1404);
bool $tmp1406 = $tmp1405.value;
if ($tmp1406) goto block125; else goto block126;
block125:;
org$frostlang$frostc$Position* $tmp1407 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1408 = *$tmp1407;
frost$core$String** $tmp1409 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1410 = *$tmp1409;
*(&local62) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
frost$core$String* $tmp1411 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
*(&local62) = $tmp1410;
// line 414
frost$core$String* $tmp1412 = *(&local62);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
frost$core$String* $tmp1413 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
// unreffing name
*(&local62) = ((frost$core$String*) NULL);
return $tmp1412;
block126:;
frost$core$Int64 $tmp1414 = (frost$core$Int64) {23};
frost$core$Bit $tmp1415 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1414);
bool $tmp1416 = $tmp1415.value;
if ($tmp1416) goto block127; else goto block128;
block127:;
org$frostlang$frostc$Position* $tmp1417 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1418 = *$tmp1417;
frost$core$String** $tmp1419 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1420 = *$tmp1419;
*(&local63) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
frost$core$String* $tmp1421 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
*(&local63) = $tmp1420;
org$frostlang$frostc$FixedArray** $tmp1422 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1423 = *$tmp1422;
*(&local64) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
org$frostlang$frostc$FixedArray* $tmp1424 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
*(&local64) = $tmp1423;
// line 417
frost$core$String* $tmp1425 = *(&local63);
frost$core$String* $tmp1426 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1427, $tmp1425);
frost$core$String* $tmp1428 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1426, &$s1429);
org$frostlang$frostc$FixedArray* $tmp1430 = *(&local64);
ITable* $tmp1431 = ((frost$collections$CollectionView*) $tmp1430)->$class->itable;
while ($tmp1431->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1431 = $tmp1431->next;
}
$fn1433 $tmp1432 = $tmp1431->methods[1];
frost$core$String* $tmp1434 = $tmp1432(((frost$collections$CollectionView*) $tmp1430));
frost$core$String* $tmp1435 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1428, $tmp1434);
frost$core$String* $tmp1436 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1435, &$s1437);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
// unreffing REF($2157:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1435));
// unreffing REF($2156:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
// unreffing REF($2155:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
// unreffing REF($2151:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
// unreffing REF($2150:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp1438 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
// unreffing types
*(&local64) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1439 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
// unreffing name
*(&local63) = ((frost$core$String*) NULL);
return $tmp1436;
block128:;
frost$core$Int64 $tmp1440 = (frost$core$Int64) {24};
frost$core$Bit $tmp1441 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1440);
bool $tmp1442 = $tmp1441.value;
if ($tmp1442) goto block129; else goto block130;
block129:;
org$frostlang$frostc$Position* $tmp1443 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1444 = *$tmp1443;
org$frostlang$frostc$ASTNode** $tmp1445 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1446 = *$tmp1445;
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
org$frostlang$frostc$ASTNode* $tmp1447 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
*(&local65) = $tmp1446;
org$frostlang$frostc$FixedArray** $tmp1448 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1449 = *$tmp1448;
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
org$frostlang$frostc$FixedArray* $tmp1450 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
*(&local66) = $tmp1449;
org$frostlang$frostc$ASTNode** $tmp1451 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1452 = *$tmp1451;
*(&local67) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
org$frostlang$frostc$ASTNode* $tmp1453 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
*(&local67) = $tmp1452;
// line 420
frost$core$MutableString* $tmp1454 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$ASTNode* $tmp1455 = *(&local65);
frost$core$String* $tmp1456 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1457, ((frost$core$Object*) $tmp1455));
frost$core$String* $tmp1458 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1456, &$s1459);
frost$core$MutableString$init$frost$core$String($tmp1454, $tmp1458);
*(&local68) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
frost$core$MutableString* $tmp1460 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
*(&local68) = $tmp1454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
// unreffing REF($2224:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
// unreffing REF($2223:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
// unreffing REF($2220:frost.core.MutableString)
// line 421
org$frostlang$frostc$FixedArray* $tmp1461 = *(&local66);
ITable* $tmp1462 = ((frost$collections$Iterable*) $tmp1461)->$class->itable;
while ($tmp1462->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1462 = $tmp1462->next;
}
$fn1464 $tmp1463 = $tmp1462->methods[0];
frost$collections$Iterator* $tmp1465 = $tmp1463(((frost$collections$Iterable*) $tmp1461));
goto block131;
block131:;
ITable* $tmp1466 = $tmp1465->$class->itable;
while ($tmp1466->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1466 = $tmp1466->next;
}
$fn1468 $tmp1467 = $tmp1466->methods[0];
frost$core$Bit $tmp1469 = $tmp1467($tmp1465);
bool $tmp1470 = $tmp1469.value;
if ($tmp1470) goto block133; else goto block132;
block132:;
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1471 = $tmp1465->$class->itable;
while ($tmp1471->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1471 = $tmp1471->next;
}
$fn1473 $tmp1472 = $tmp1471->methods[1];
frost$core$Object* $tmp1474 = $tmp1472($tmp1465);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1474)));
org$frostlang$frostc$ASTNode* $tmp1475 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
*(&local69) = ((org$frostlang$frostc$ASTNode*) $tmp1474);
// line 422
frost$core$MutableString* $tmp1476 = *(&local68);
org$frostlang$frostc$ASTNode* $tmp1477 = *(&local69);
frost$core$String* $tmp1478 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1477), &$s1479);
frost$core$MutableString$append$frost$core$String($tmp1476, $tmp1478);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
// unreffing REF($2270:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1474);
// unreffing REF($2258:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1480 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
// unreffing s
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block131;
block133:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
// unreffing REF($2247:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 424
frost$core$MutableString* $tmp1481 = *(&local68);
frost$core$MutableString$append$frost$core$String($tmp1481, &$s1482);
// line 425
org$frostlang$frostc$ASTNode* $tmp1483 = *(&local67);
frost$core$Bit $tmp1484 = frost$core$Bit$init$builtin_bit($tmp1483 != NULL);
bool $tmp1485 = $tmp1484.value;
if ($tmp1485) goto block134; else goto block135;
block134:;
// line 426
frost$core$MutableString* $tmp1486 = *(&local68);
org$frostlang$frostc$ASTNode* $tmp1487 = *(&local67);
frost$core$Bit $tmp1488 = frost$core$Bit$init$builtin_bit($tmp1487 != NULL);
bool $tmp1489 = $tmp1488.value;
if ($tmp1489) goto block136; else goto block137;
block137:;
frost$core$Int64 $tmp1490 = (frost$core$Int64) {426};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1491, $tmp1490, &$s1492);
abort(); // unreachable
block136:;
frost$core$String* $tmp1493 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1494, ((frost$core$Object*) $tmp1487));
frost$core$String* $tmp1495 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1493, &$s1496);
frost$core$MutableString$append$frost$core$String($tmp1486, $tmp1495);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
// unreffing REF($2308:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
// unreffing REF($2307:frost.core.String)
goto block135;
block135:;
// line 428
frost$core$MutableString* $tmp1497 = *(&local68);
frost$core$String* $tmp1498 = frost$core$MutableString$finish$R$frost$core$String($tmp1497);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
// unreffing REF($2319:frost.core.String)
frost$core$MutableString* $tmp1499 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
// unreffing result
*(&local68) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1500 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
// unreffing ifFalse
*(&local67) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1501 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
// unreffing ifTrue
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1502 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
// unreffing test
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1498;
block130:;
frost$core$Int64 $tmp1503 = (frost$core$Int64) {25};
frost$core$Bit $tmp1504 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1503);
bool $tmp1505 = $tmp1504.value;
if ($tmp1505) goto block138; else goto block139;
block138:;
org$frostlang$frostc$Position* $tmp1506 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1507 = *$tmp1506;
frost$core$UInt64* $tmp1508 = (frost$core$UInt64*) (param0->$data + 16);
frost$core$UInt64 $tmp1509 = *$tmp1508;
*(&local70) = $tmp1509;
// line 431
frost$core$UInt64 $tmp1510 = *(&local70);
frost$core$UInt64$wrapper* $tmp1511;
$tmp1511 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp1511->value = $tmp1510;
$fn1513 $tmp1512 = ($fn1513) ((frost$core$Object*) $tmp1511)->$class->vtable[0];
frost$core$String* $tmp1514 = $tmp1512(((frost$core$Object*) $tmp1511));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1514));
// unreffing REF($2359:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1511));
// unreffing REF($2357:frost.core.Object)
return $tmp1514;
block139:;
frost$core$Int64 $tmp1515 = (frost$core$Int64) {26};
frost$core$Bit $tmp1516 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1515);
bool $tmp1517 = $tmp1516.value;
if ($tmp1517) goto block140; else goto block141;
block140:;
org$frostlang$frostc$Position* $tmp1518 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1519 = *$tmp1518;
org$frostlang$frostc$IR$Value** $tmp1520 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp1521 = *$tmp1520;
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
org$frostlang$frostc$IR$Value* $tmp1522 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
*(&local71) = $tmp1521;
// line 434
org$frostlang$frostc$IR$Value* $tmp1523 = *(&local71);
$fn1525 $tmp1524 = ($fn1525) ((frost$core$Object*) $tmp1523)->$class->vtable[0];
frost$core$String* $tmp1526 = $tmp1524(((frost$core$Object*) $tmp1523));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
// unreffing REF($2388:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp1527 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
// unreffing value
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp1526;
block141:;
frost$core$Int64 $tmp1528 = (frost$core$Int64) {27};
frost$core$Bit $tmp1529 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1528);
bool $tmp1530 = $tmp1529.value;
if ($tmp1530) goto block142; else goto block143;
block142:;
org$frostlang$frostc$Position* $tmp1531 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1532 = *$tmp1531;
frost$core$String** $tmp1533 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1534 = *$tmp1533;
*(&local72) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
frost$core$String* $tmp1535 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
*(&local72) = $tmp1534;
org$frostlang$frostc$FixedArray** $tmp1536 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1537 = *$tmp1536;
*(&local73) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
org$frostlang$frostc$FixedArray* $tmp1538 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1538));
*(&local73) = $tmp1537;
// line 437
frost$core$MutableString* $tmp1539 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1539);
*(&local74) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
frost$core$MutableString* $tmp1540 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1540));
*(&local74) = $tmp1539;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
// unreffing REF($2425:frost.core.MutableString)
// line 438
frost$core$String* $tmp1541 = *(&local72);
frost$core$Bit $tmp1542 = frost$core$Bit$init$builtin_bit($tmp1541 != NULL);
bool $tmp1543 = $tmp1542.value;
if ($tmp1543) goto block144; else goto block145;
block144:;
// line 439
frost$core$MutableString* $tmp1544 = *(&local74);
frost$core$String* $tmp1545 = *(&local72);
frost$core$Bit $tmp1546 = frost$core$Bit$init$builtin_bit($tmp1545 != NULL);
bool $tmp1547 = $tmp1546.value;
if ($tmp1547) goto block146; else goto block147;
block147:;
frost$core$Int64 $tmp1548 = (frost$core$Int64) {439};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1549, $tmp1548, &$s1550);
abort(); // unreachable
block146:;
frost$core$String* $tmp1551 = frost$core$String$get_asString$R$frost$core$String($tmp1545);
frost$core$String* $tmp1552 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1551, &$s1553);
frost$core$MutableString$append$frost$core$String($tmp1544, $tmp1552);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
// unreffing REF($2455:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
// unreffing REF($2454:frost.core.String)
goto block145;
block145:;
// line 441
frost$core$MutableString* $tmp1554 = *(&local74);
frost$core$MutableString$append$frost$core$String($tmp1554, &$s1555);
// line 442
org$frostlang$frostc$FixedArray* $tmp1556 = *(&local73);
ITable* $tmp1557 = ((frost$collections$Iterable*) $tmp1556)->$class->itable;
while ($tmp1557->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1557 = $tmp1557->next;
}
$fn1559 $tmp1558 = $tmp1557->methods[0];
frost$collections$Iterator* $tmp1560 = $tmp1558(((frost$collections$Iterable*) $tmp1556));
goto block148;
block148:;
ITable* $tmp1561 = $tmp1560->$class->itable;
while ($tmp1561->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1561 = $tmp1561->next;
}
$fn1563 $tmp1562 = $tmp1561->methods[0];
frost$core$Bit $tmp1564 = $tmp1562($tmp1560);
bool $tmp1565 = $tmp1564.value;
if ($tmp1565) goto block150; else goto block149;
block149:;
*(&local75) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1566 = $tmp1560->$class->itable;
while ($tmp1566->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1566 = $tmp1566->next;
}
$fn1568 $tmp1567 = $tmp1566->methods[1];
frost$core$Object* $tmp1569 = $tmp1567($tmp1560);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1569)));
org$frostlang$frostc$ASTNode* $tmp1570 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1570));
*(&local75) = ((org$frostlang$frostc$ASTNode*) $tmp1569);
// line 443
frost$core$MutableString* $tmp1571 = *(&local74);
org$frostlang$frostc$ASTNode* $tmp1572 = *(&local75);
frost$core$String* $tmp1573 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1572), &$s1574);
frost$core$MutableString$append$frost$core$String($tmp1571, $tmp1573);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1573));
// unreffing REF($2495:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1569);
// unreffing REF($2483:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1575 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
// unreffing s
*(&local75) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block148;
block150:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
// unreffing REF($2472:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 445
frost$core$MutableString* $tmp1576 = *(&local74);
frost$core$MutableString$append$frost$core$String($tmp1576, &$s1577);
// line 446
frost$core$MutableString* $tmp1578 = *(&local74);
frost$core$String* $tmp1579 = frost$core$MutableString$finish$R$frost$core$String($tmp1578);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
// unreffing REF($2517:frost.core.String)
frost$core$MutableString* $tmp1580 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
// unreffing result
*(&local74) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1581 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1581));
// unreffing statements
*(&local73) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1582 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
// unreffing label
*(&local72) = ((frost$core$String*) NULL);
return $tmp1579;
block143:;
frost$core$Int64 $tmp1583 = (frost$core$Int64) {28};
frost$core$Bit $tmp1584 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1583);
bool $tmp1585 = $tmp1584.value;
if ($tmp1585) goto block151; else goto block152;
block151:;
org$frostlang$frostc$Position* $tmp1586 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1587 = *$tmp1586;
org$frostlang$frostc$ASTNode** $tmp1588 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1589 = *$tmp1588;
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
org$frostlang$frostc$ASTNode* $tmp1590 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1590));
*(&local76) = $tmp1589;
org$frostlang$frostc$FixedArray** $tmp1591 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1592 = *$tmp1591;
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
org$frostlang$frostc$FixedArray* $tmp1593 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
*(&local77) = $tmp1592;
org$frostlang$frostc$FixedArray** $tmp1594 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1595 = *$tmp1594;
*(&local78) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
org$frostlang$frostc$FixedArray* $tmp1596 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
*(&local78) = $tmp1595;
// line 449
frost$core$MutableString* $tmp1597 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$ASTNode* $tmp1598 = *(&local76);
frost$core$String* $tmp1599 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1600, ((frost$core$Object*) $tmp1598));
frost$core$String* $tmp1601 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1599, &$s1602);
frost$core$MutableString$init$frost$core$String($tmp1597, $tmp1601);
*(&local79) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
frost$core$MutableString* $tmp1603 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
*(&local79) = $tmp1597;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
// unreffing REF($2577:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1599));
// unreffing REF($2576:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
// unreffing REF($2573:frost.core.MutableString)
// line 450
org$frostlang$frostc$FixedArray* $tmp1604 = *(&local77);
ITable* $tmp1605 = ((frost$collections$Iterable*) $tmp1604)->$class->itable;
while ($tmp1605->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1605 = $tmp1605->next;
}
$fn1607 $tmp1606 = $tmp1605->methods[0];
frost$collections$Iterator* $tmp1608 = $tmp1606(((frost$collections$Iterable*) $tmp1604));
goto block153;
block153:;
ITable* $tmp1609 = $tmp1608->$class->itable;
while ($tmp1609->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1609 = $tmp1609->next;
}
$fn1611 $tmp1610 = $tmp1609->methods[0];
frost$core$Bit $tmp1612 = $tmp1610($tmp1608);
bool $tmp1613 = $tmp1612.value;
if ($tmp1613) goto block155; else goto block154;
block154:;
*(&local80) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1614 = $tmp1608->$class->itable;
while ($tmp1614->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1614 = $tmp1614->next;
}
$fn1616 $tmp1615 = $tmp1614->methods[1];
frost$core$Object* $tmp1617 = $tmp1615($tmp1608);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1617)));
org$frostlang$frostc$ASTNode* $tmp1618 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
*(&local80) = ((org$frostlang$frostc$ASTNode*) $tmp1617);
// line 451
frost$core$MutableString* $tmp1619 = *(&local79);
org$frostlang$frostc$ASTNode* $tmp1620 = *(&local80);
frost$core$String* $tmp1621 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1620), &$s1622);
frost$core$MutableString$append$frost$core$String($tmp1619, $tmp1621);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
// unreffing REF($2623:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1617);
// unreffing REF($2611:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1623 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
// unreffing w
*(&local80) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block153;
block155:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
// unreffing REF($2600:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 453
org$frostlang$frostc$FixedArray* $tmp1624 = *(&local78);
frost$core$Bit $tmp1625 = frost$core$Bit$init$builtin_bit($tmp1624 != NULL);
bool $tmp1626 = $tmp1625.value;
if ($tmp1626) goto block156; else goto block157;
block156:;
// line 454
frost$core$MutableString* $tmp1627 = *(&local79);
org$frostlang$frostc$FixedArray* $tmp1628 = *(&local78);
frost$core$Bit $tmp1629 = frost$core$Bit$init$builtin_bit($tmp1628 != NULL);
bool $tmp1630 = $tmp1629.value;
if ($tmp1630) goto block158; else goto block159;
block159:;
frost$core$Int64 $tmp1631 = (frost$core$Int64) {454};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1632, $tmp1631, &$s1633);
abort(); // unreachable
block158:;
frost$core$String* $tmp1634 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1628), &$s1635);
frost$core$MutableString$append$frost$core$String($tmp1627, $tmp1634);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
// unreffing REF($2657:frost.core.String)
goto block157;
block157:;
// line 456
frost$core$MutableString* $tmp1636 = *(&local79);
frost$core$MutableString$append$frost$core$String($tmp1636, &$s1637);
// line 457
frost$core$MutableString* $tmp1638 = *(&local79);
frost$core$String* $tmp1639 = frost$core$MutableString$finish$R$frost$core$String($tmp1638);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
// unreffing REF($2668:frost.core.String)
frost$core$MutableString* $tmp1640 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
// unreffing result
*(&local79) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1641 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
// unreffing other
*(&local78) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1642 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
// unreffing whens
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1643 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
// unreffing value
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1639;
block152:;
frost$core$Int64 $tmp1644 = (frost$core$Int64) {29};
frost$core$Bit $tmp1645 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1644);
bool $tmp1646 = $tmp1645.value;
if ($tmp1646) goto block160; else goto block161;
block160:;
org$frostlang$frostc$Position* $tmp1647 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1648 = *$tmp1647;
org$frostlang$frostc$ASTNode** $tmp1649 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1650 = *$tmp1649;
*(&local81) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
org$frostlang$frostc$ASTNode* $tmp1651 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
*(&local81) = $tmp1650;
org$frostlang$frostc$FixedArray** $tmp1652 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1653 = *$tmp1652;
*(&local82) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
org$frostlang$frostc$FixedArray* $tmp1654 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
*(&local82) = $tmp1653;
org$frostlang$frostc$MethodDecl$Kind* $tmp1655 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp1656 = *$tmp1655;
*(&local83) = $tmp1656;
frost$core$String** $tmp1657 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp1658 = *$tmp1657;
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
frost$core$String* $tmp1659 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1659));
*(&local84) = $tmp1658;
org$frostlang$frostc$FixedArray** $tmp1660 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1661 = *$tmp1660;
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1661));
org$frostlang$frostc$FixedArray* $tmp1662 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
*(&local85) = $tmp1661;
org$frostlang$frostc$FixedArray** $tmp1663 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp1664 = *$tmp1663;
*(&local86) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
org$frostlang$frostc$FixedArray* $tmp1665 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
*(&local86) = $tmp1664;
org$frostlang$frostc$ASTNode** $tmp1666 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
org$frostlang$frostc$ASTNode* $tmp1667 = *$tmp1666;
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1667));
org$frostlang$frostc$ASTNode* $tmp1668 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
*(&local87) = $tmp1667;
org$frostlang$frostc$FixedArray** $tmp1669 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp1670 = *$tmp1669;
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
org$frostlang$frostc$FixedArray* $tmp1671 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
*(&local88) = $tmp1670;
// line 461
frost$core$MutableString* $tmp1672 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1672);
*(&local89) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
frost$core$MutableString* $tmp1673 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
*(&local89) = $tmp1672;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
// unreffing REF($2768:frost.core.MutableString)
// line 462
org$frostlang$frostc$ASTNode* $tmp1674 = *(&local81);
frost$core$Bit $tmp1675 = frost$core$Bit$init$builtin_bit($tmp1674 != NULL);
bool $tmp1676 = $tmp1675.value;
if ($tmp1676) goto block162; else goto block163;
block162:;
// line 463
frost$core$MutableString* $tmp1677 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1678 = *(&local81);
frost$core$Bit $tmp1679 = frost$core$Bit$init$builtin_bit($tmp1678 != NULL);
bool $tmp1680 = $tmp1679.value;
if ($tmp1680) goto block164; else goto block165;
block165:;
frost$core$Int64 $tmp1681 = (frost$core$Int64) {463};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1682, $tmp1681, &$s1683);
abort(); // unreachable
block164:;
frost$core$String* $tmp1684 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1678), &$s1685);
frost$core$MutableString$append$frost$core$String($tmp1677, $tmp1684);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
// unreffing REF($2797:frost.core.String)
goto block163;
block163:;
// line 465
org$frostlang$frostc$FixedArray* $tmp1686 = *(&local82);
ITable* $tmp1687 = ((frost$collections$Iterable*) $tmp1686)->$class->itable;
while ($tmp1687->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1687 = $tmp1687->next;
}
$fn1689 $tmp1688 = $tmp1687->methods[0];
frost$collections$Iterator* $tmp1690 = $tmp1688(((frost$collections$Iterable*) $tmp1686));
goto block166;
block166:;
ITable* $tmp1691 = $tmp1690->$class->itable;
while ($tmp1691->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1691 = $tmp1691->next;
}
$fn1693 $tmp1692 = $tmp1691->methods[0];
frost$core$Bit $tmp1694 = $tmp1692($tmp1690);
bool $tmp1695 = $tmp1694.value;
if ($tmp1695) goto block168; else goto block167;
block167:;
*(&local90) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1696 = $tmp1690->$class->itable;
while ($tmp1696->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1696 = $tmp1696->next;
}
$fn1698 $tmp1697 = $tmp1696->methods[1];
frost$core$Object* $tmp1699 = $tmp1697($tmp1690);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1699)));
org$frostlang$frostc$ASTNode* $tmp1700 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1700));
*(&local90) = ((org$frostlang$frostc$ASTNode*) $tmp1699);
// line 466
frost$core$MutableString* $tmp1701 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1702 = *(&local90);
frost$core$String* $tmp1703 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1702), &$s1704);
frost$core$MutableString$append$frost$core$String($tmp1701, $tmp1703);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1703));
// unreffing REF($2831:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1699);
// unreffing REF($2819:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1705 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
// unreffing a
*(&local90) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block166;
block168:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1690));
// unreffing REF($2808:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 468
org$frostlang$frostc$MethodDecl$Kind $tmp1706 = *(&local83);
frost$core$Int64 $tmp1707 = $tmp1706.$rawValue;
frost$core$Int64 $tmp1708 = (frost$core$Int64) {0};
frost$core$Bit $tmp1709 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1707, $tmp1708);
bool $tmp1710 = $tmp1709.value;
if ($tmp1710) goto block170; else goto block171;
block170:;
// line 469
frost$core$MutableString* $tmp1711 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1711, &$s1712);
goto block169;
block171:;
frost$core$Int64 $tmp1713 = (frost$core$Int64) {1};
frost$core$Bit $tmp1714 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1707, $tmp1713);
bool $tmp1715 = $tmp1714.value;
if ($tmp1715) goto block172; else goto block173;
block172:;
// line 470
frost$core$MutableString* $tmp1716 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1716, &$s1717);
goto block169;
block173:;
frost$core$Int64 $tmp1718 = (frost$core$Int64) {2};
frost$core$Bit $tmp1719 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1707, $tmp1718);
bool $tmp1720 = $tmp1719.value;
if ($tmp1720) goto block174; else goto block169;
block174:;
goto block169;
block169:;
// line 473
frost$core$MutableString* $tmp1721 = *(&local89);
frost$core$String* $tmp1722 = *(&local84);
frost$core$MutableString$append$frost$core$String($tmp1721, $tmp1722);
// line 474
org$frostlang$frostc$FixedArray* $tmp1723 = *(&local85);
frost$core$Bit $tmp1724 = frost$core$Bit$init$builtin_bit($tmp1723 != NULL);
bool $tmp1725 = $tmp1724.value;
if ($tmp1725) goto block175; else goto block176;
block175:;
// line 475
frost$core$MutableString* $tmp1726 = *(&local89);
org$frostlang$frostc$FixedArray* $tmp1727 = *(&local85);
frost$core$Bit $tmp1728 = frost$core$Bit$init$builtin_bit($tmp1727 != NULL);
bool $tmp1729 = $tmp1728.value;
if ($tmp1729) goto block177; else goto block178;
block178:;
frost$core$Int64 $tmp1730 = (frost$core$Int64) {475};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1731, $tmp1730, &$s1732);
abort(); // unreachable
block177:;
ITable* $tmp1733 = ((frost$collections$CollectionView*) $tmp1727)->$class->itable;
while ($tmp1733->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1733 = $tmp1733->next;
}
$fn1735 $tmp1734 = $tmp1733->methods[1];
frost$core$String* $tmp1736 = $tmp1734(((frost$collections$CollectionView*) $tmp1727));
frost$core$String* $tmp1737 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1738, $tmp1736);
frost$core$String* $tmp1739 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1737, &$s1740);
frost$core$MutableString$append$frost$core$String($tmp1726, $tmp1739);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
// unreffing REF($2896:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
// unreffing REF($2895:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
// unreffing REF($2894:frost.core.String)
goto block176;
block176:;
// line 477
frost$core$MutableString* $tmp1741 = *(&local89);
org$frostlang$frostc$FixedArray* $tmp1742 = *(&local86);
ITable* $tmp1743 = ((frost$collections$CollectionView*) $tmp1742)->$class->itable;
while ($tmp1743->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1743 = $tmp1743->next;
}
$fn1745 $tmp1744 = $tmp1743->methods[1];
frost$core$String* $tmp1746 = $tmp1744(((frost$collections$CollectionView*) $tmp1742));
frost$core$String* $tmp1747 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1748, $tmp1746);
frost$core$String* $tmp1749 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1747, &$s1750);
frost$core$MutableString$append$frost$core$String($tmp1741, $tmp1749);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1749));
// unreffing REF($2915:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
// unreffing REF($2914:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1746));
// unreffing REF($2913:frost.core.String)
// line 478
org$frostlang$frostc$ASTNode* $tmp1751 = *(&local87);
frost$core$Bit $tmp1752 = frost$core$Bit$init$builtin_bit($tmp1751 != NULL);
bool $tmp1753 = $tmp1752.value;
if ($tmp1753) goto block179; else goto block180;
block179:;
// line 479
frost$core$MutableString* $tmp1754 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1755 = *(&local87);
frost$core$Bit $tmp1756 = frost$core$Bit$init$builtin_bit($tmp1755 != NULL);
bool $tmp1757 = $tmp1756.value;
if ($tmp1757) goto block181; else goto block182;
block182:;
frost$core$Int64 $tmp1758 = (frost$core$Int64) {479};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1759, $tmp1758, &$s1760);
abort(); // unreachable
block181:;
frost$core$String* $tmp1761 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1762, ((frost$core$Object*) $tmp1755));
frost$core$String* $tmp1763 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1761, &$s1764);
frost$core$MutableString$append$frost$core$String($tmp1754, $tmp1763);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1763));
// unreffing REF($2944:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
// unreffing REF($2943:frost.core.String)
goto block180;
block180:;
// line 481
org$frostlang$frostc$FixedArray* $tmp1765 = *(&local88);
frost$core$Bit $tmp1766 = frost$core$Bit$init$builtin_bit($tmp1765 != NULL);
bool $tmp1767 = $tmp1766.value;
if ($tmp1767) goto block183; else goto block184;
block183:;
// line 482
frost$core$MutableString* $tmp1768 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1768, &$s1769);
// line 483
org$frostlang$frostc$FixedArray* $tmp1770 = *(&local88);
frost$core$Bit $tmp1771 = frost$core$Bit$init$builtin_bit($tmp1770 != NULL);
bool $tmp1772 = $tmp1771.value;
if ($tmp1772) goto block185; else goto block186;
block186:;
frost$core$Int64 $tmp1773 = (frost$core$Int64) {483};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1774, $tmp1773, &$s1775);
abort(); // unreachable
block185:;
ITable* $tmp1776 = ((frost$collections$Iterable*) $tmp1770)->$class->itable;
while ($tmp1776->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1776 = $tmp1776->next;
}
$fn1778 $tmp1777 = $tmp1776->methods[0];
frost$collections$Iterator* $tmp1779 = $tmp1777(((frost$collections$Iterable*) $tmp1770));
goto block187;
block187:;
ITable* $tmp1780 = $tmp1779->$class->itable;
while ($tmp1780->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1780 = $tmp1780->next;
}
$fn1782 $tmp1781 = $tmp1780->methods[0];
frost$core$Bit $tmp1783 = $tmp1781($tmp1779);
bool $tmp1784 = $tmp1783.value;
if ($tmp1784) goto block189; else goto block188;
block188:;
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1785 = $tmp1779->$class->itable;
while ($tmp1785->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1785 = $tmp1785->next;
}
$fn1787 $tmp1786 = $tmp1785->methods[1];
frost$core$Object* $tmp1788 = $tmp1786($tmp1779);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1788)));
org$frostlang$frostc$ASTNode* $tmp1789 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
*(&local91) = ((org$frostlang$frostc$ASTNode*) $tmp1788);
// line 484
frost$core$MutableString* $tmp1790 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1791 = *(&local91);
frost$core$String* $tmp1792 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1791), &$s1793);
frost$core$MutableString$append$frost$core$String($tmp1790, $tmp1792);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
// unreffing REF($2997:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1788);
// unreffing REF($2985:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1794 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1794));
// unreffing s
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block187;
block189:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1779));
// unreffing REF($2974:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 486
frost$core$MutableString* $tmp1795 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1795, &$s1796);
goto block184;
block184:;
// line 488
frost$core$MutableString* $tmp1797 = *(&local89);
frost$core$String* $tmp1798 = frost$core$MutableString$finish$R$frost$core$String($tmp1797);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
// unreffing REF($3020:frost.core.String)
frost$core$MutableString* $tmp1799 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1799));
// unreffing result
*(&local89) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1800 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
// unreffing statements
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1801 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
// unreffing returnType
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1802 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
// unreffing parameters
*(&local86) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1803 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
// unreffing generics
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1804 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1804));
// unreffing name
*(&local84) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1805 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
// unreffing annotations
*(&local82) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1806 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
// unreffing dc
*(&local81) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1798;
block161:;
frost$core$Int64 $tmp1807 = (frost$core$Int64) {30};
frost$core$Bit $tmp1808 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1807);
bool $tmp1809 = $tmp1808.value;
if ($tmp1809) goto block190; else goto block191;
block190:;
org$frostlang$frostc$Position* $tmp1810 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1811 = *$tmp1810;
org$frostlang$frostc$parser$Token$Kind* $tmp1812 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp1813 = *$tmp1812;
*(&local92) = $tmp1813;
org$frostlang$frostc$FixedArray** $tmp1814 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1815 = *$tmp1814;
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
org$frostlang$frostc$FixedArray* $tmp1816 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
*(&local93) = $tmp1815;
org$frostlang$frostc$ASTNode** $tmp1817 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1818 = *$tmp1817;
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
org$frostlang$frostc$ASTNode* $tmp1819 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
*(&local94) = $tmp1818;
// line 491
*(&local95) = ((frost$core$String*) NULL);
// line 492
org$frostlang$frostc$parser$Token$Kind $tmp1820 = *(&local92);
frost$core$Int64 $tmp1821 = $tmp1820.$rawValue;
frost$core$Int64 $tmp1822 = (frost$core$Int64) {94};
frost$core$Bit $tmp1823 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1821, $tmp1822);
bool $tmp1824 = $tmp1823.value;
if ($tmp1824) goto block193; else goto block194;
block193:;
// line 494
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1825));
frost$core$String* $tmp1826 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
*(&local95) = &$s1827;
goto block192;
block194:;
frost$core$Int64 $tmp1828 = (frost$core$Int64) {95};
frost$core$Bit $tmp1829 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1821, $tmp1828);
bool $tmp1830 = $tmp1829.value;
if ($tmp1830) goto block195; else goto block196;
block195:;
// line 497
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1831));
frost$core$String* $tmp1832 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
*(&local95) = &$s1833;
goto block192;
block196:;
frost$core$Int64 $tmp1834 = (frost$core$Int64) {96};
frost$core$Bit $tmp1835 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1821, $tmp1834);
bool $tmp1836 = $tmp1835.value;
if ($tmp1836) goto block197; else goto block198;
block197:;
// line 500
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1837));
frost$core$String* $tmp1838 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1838));
*(&local95) = &$s1839;
goto block192;
block198:;
frost$core$Int64 $tmp1840 = (frost$core$Int64) {97};
frost$core$Bit $tmp1841 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1821, $tmp1840);
bool $tmp1842 = $tmp1841.value;
if ($tmp1842) goto block199; else goto block192;
block199:;
// line 503
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1843));
frost$core$String* $tmp1844 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
*(&local95) = &$s1845;
goto block192;
block192:;
// line 506
org$frostlang$frostc$FixedArray* $tmp1846 = *(&local93);
ITable* $tmp1847 = ((frost$collections$CollectionView*) $tmp1846)->$class->itable;
while ($tmp1847->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1847 = $tmp1847->next;
}
$fn1849 $tmp1848 = $tmp1847->methods[1];
frost$core$String* $tmp1850 = $tmp1848(((frost$collections$CollectionView*) $tmp1846));
frost$core$String* $tmp1851 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1852, $tmp1850);
frost$core$String* $tmp1853 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1851, &$s1854);
frost$core$String* $tmp1855 = *(&local95);
frost$core$String* $tmp1856 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1853, $tmp1855);
frost$core$String* $tmp1857 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1856, &$s1858);
*(&local96) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
frost$core$String* $tmp1859 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
*(&local96) = $tmp1857;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
// unreffing REF($3156:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
// unreffing REF($3155:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1853));
// unreffing REF($3153:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
// unreffing REF($3152:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
// unreffing REF($3151:frost.core.String)
// line 507
org$frostlang$frostc$ASTNode* $tmp1860 = *(&local94);
frost$core$Bit $tmp1861 = frost$core$Bit$init$builtin_bit($tmp1860 != NULL);
bool $tmp1862 = $tmp1861.value;
if ($tmp1862) goto block200; else goto block201;
block200:;
// line 508
frost$core$String* $tmp1863 = *(&local96);
frost$core$String* $tmp1864 = frost$core$String$get_asString$R$frost$core$String($tmp1863);
frost$core$String* $tmp1865 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1864, &$s1866);
org$frostlang$frostc$ASTNode* $tmp1867 = *(&local94);
frost$core$Bit $tmp1868 = frost$core$Bit$init$builtin_bit($tmp1867 != NULL);
bool $tmp1869 = $tmp1868.value;
if ($tmp1869) goto block202; else goto block203;
block203:;
frost$core$Int64 $tmp1870 = (frost$core$Int64) {508};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1871, $tmp1870, &$s1872);
abort(); // unreachable
block202:;
frost$core$String* $tmp1873 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1865, ((frost$core$Object*) $tmp1867));
frost$core$String* $tmp1874 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1873, &$s1875);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
// unreffing REF($3199:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
// unreffing REF($3198:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
// unreffing REF($3188:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
// unreffing REF($3187:frost.core.String)
frost$core$String* $tmp1876 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
// unreffing partial
*(&local96) = ((frost$core$String*) NULL);
frost$core$String* $tmp1877 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1877));
// unreffing yield
*(&local95) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1878 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1878));
// unreffing returnType
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1879 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
// unreffing paramTypes
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1874;
block201:;
// line 510
frost$core$String* $tmp1880 = *(&local96);
frost$core$String* $tmp1881 = frost$core$String$get_asString$R$frost$core$String($tmp1880);
frost$core$String* $tmp1882 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1881, &$s1883);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
// unreffing REF($3238:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1881));
// unreffing REF($3237:frost.core.String)
frost$core$String* $tmp1884 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1884));
// unreffing partial
*(&local96) = ((frost$core$String*) NULL);
frost$core$String* $tmp1885 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1885));
// unreffing yield
*(&local95) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1886 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
// unreffing returnType
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1887 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
// unreffing paramTypes
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1882;
block191:;
frost$core$Int64 $tmp1888 = (frost$core$Int64) {31};
frost$core$Bit $tmp1889 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1888);
bool $tmp1890 = $tmp1889.value;
if ($tmp1890) goto block204; else goto block205;
block204:;
// line 513
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1891));
return &$s1892;
block205:;
frost$core$Int64 $tmp1893 = (frost$core$Int64) {32};
frost$core$Bit $tmp1894 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1893);
bool $tmp1895 = $tmp1894.value;
if ($tmp1895) goto block206; else goto block207;
block206:;
org$frostlang$frostc$Position* $tmp1896 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1897 = *$tmp1896;
org$frostlang$frostc$ASTNode** $tmp1898 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1899 = *$tmp1898;
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
org$frostlang$frostc$ASTNode* $tmp1900 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
*(&local97) = $tmp1899;
// line 516
org$frostlang$frostc$ASTNode* $tmp1901 = *(&local97);
frost$core$String* $tmp1902 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1901), &$s1903);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
// unreffing REF($3294:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1904 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
// unreffing base
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1902;
block207:;
frost$core$Int64 $tmp1905 = (frost$core$Int64) {33};
frost$core$Bit $tmp1906 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1905);
bool $tmp1907 = $tmp1906.value;
if ($tmp1907) goto block208; else goto block209;
block208:;
org$frostlang$frostc$Position* $tmp1908 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1909 = *$tmp1908;
frost$core$String** $tmp1910 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1911 = *$tmp1910;
*(&local98) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
frost$core$String* $tmp1912 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
*(&local98) = $tmp1911;
// line 519
frost$core$String* $tmp1913 = *(&local98);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1913));
frost$core$String* $tmp1914 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
// unreffing name
*(&local98) = ((frost$core$String*) NULL);
return $tmp1913;
block209:;
frost$core$Int64 $tmp1915 = (frost$core$Int64) {34};
frost$core$Bit $tmp1916 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1915);
bool $tmp1917 = $tmp1916.value;
if ($tmp1917) goto block210; else goto block211;
block210:;
org$frostlang$frostc$Position* $tmp1918 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1919 = *$tmp1918;
frost$core$String** $tmp1920 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1921 = *$tmp1920;
*(&local99) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
frost$core$String* $tmp1922 = *(&local99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
*(&local99) = $tmp1921;
org$frostlang$frostc$ASTNode** $tmp1923 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1924 = *$tmp1923;
*(&local100) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
org$frostlang$frostc$ASTNode* $tmp1925 = *(&local100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
*(&local100) = $tmp1924;
// line 522
frost$core$String* $tmp1926 = *(&local99);
frost$core$String* $tmp1927 = frost$core$String$get_asString$R$frost$core$String($tmp1926);
frost$core$String* $tmp1928 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1927, &$s1929);
org$frostlang$frostc$ASTNode* $tmp1930 = *(&local100);
frost$core$String* $tmp1931 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1928, ((frost$core$Object*) $tmp1930));
frost$core$String* $tmp1932 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1931, &$s1933);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
// unreffing REF($3362:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
// unreffing REF($3361:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
// unreffing REF($3358:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1927));
// unreffing REF($3357:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1934 = *(&local100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1934));
// unreffing type
*(&local100) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1935 = *(&local99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
// unreffing name
*(&local99) = ((frost$core$String*) NULL);
return $tmp1932;
block211:;
frost$core$Int64 $tmp1936 = (frost$core$Int64) {35};
frost$core$Bit $tmp1937 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1936);
bool $tmp1938 = $tmp1937.value;
if ($tmp1938) goto block212; else goto block213;
block212:;
org$frostlang$frostc$Position* $tmp1939 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1940 = *$tmp1939;
org$frostlang$frostc$ASTNode** $tmp1941 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1942 = *$tmp1941;
*(&local101) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1942));
org$frostlang$frostc$ASTNode* $tmp1943 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
*(&local101) = $tmp1942;
frost$core$Bit* $tmp1944 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp1945 = *$tmp1944;
*(&local102) = $tmp1945;
org$frostlang$frostc$ASTNode** $tmp1946 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
org$frostlang$frostc$ASTNode* $tmp1947 = *$tmp1946;
*(&local103) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1947));
org$frostlang$frostc$ASTNode* $tmp1948 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1948));
*(&local103) = $tmp1947;
org$frostlang$frostc$ASTNode** $tmp1949 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp1950 = *$tmp1949;
*(&local104) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1950));
org$frostlang$frostc$ASTNode* $tmp1951 = *(&local104);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1951));
*(&local104) = $tmp1950;
// line 525
frost$core$MutableString* $tmp1952 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1952);
*(&local105) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1952));
frost$core$MutableString* $tmp1953 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1953));
*(&local105) = $tmp1952;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1952));
// unreffing REF($3425:frost.core.MutableString)
// line 526
org$frostlang$frostc$ASTNode* $tmp1954 = *(&local101);
frost$core$Bit $tmp1955 = frost$core$Bit$init$builtin_bit($tmp1954 != NULL);
bool $tmp1956 = $tmp1955.value;
if ($tmp1956) goto block214; else goto block215;
block214:;
// line 527
frost$core$MutableString* $tmp1957 = *(&local105);
org$frostlang$frostc$ASTNode* $tmp1958 = *(&local101);
frost$core$Bit $tmp1959 = frost$core$Bit$init$builtin_bit($tmp1958 != NULL);
bool $tmp1960 = $tmp1959.value;
if ($tmp1960) goto block216; else goto block217;
block217:;
frost$core$Int64 $tmp1961 = (frost$core$Int64) {527};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1962, $tmp1961, &$s1963);
abort(); // unreachable
block216:;
frost$core$MutableString$append$frost$core$Object($tmp1957, ((frost$core$Object*) $tmp1958));
goto block215;
block215:;
// line 529
frost$core$Bit $tmp1964 = *(&local102);
bool $tmp1965 = $tmp1964.value;
if ($tmp1965) goto block218; else goto block220;
block218:;
// line 530
frost$core$MutableString* $tmp1966 = *(&local105);
frost$core$MutableString$append$frost$core$String($tmp1966, &$s1967);
goto block219;
block220:;
// line 1
// line 533
frost$core$MutableString* $tmp1968 = *(&local105);
frost$core$MutableString$append$frost$core$String($tmp1968, &$s1969);
goto block219;
block219:;
// line 535
org$frostlang$frostc$ASTNode* $tmp1970 = *(&local103);
frost$core$Bit $tmp1971 = frost$core$Bit$init$builtin_bit($tmp1970 != NULL);
bool $tmp1972 = $tmp1971.value;
if ($tmp1972) goto block221; else goto block222;
block221:;
// line 536
frost$core$MutableString* $tmp1973 = *(&local105);
org$frostlang$frostc$ASTNode* $tmp1974 = *(&local103);
frost$core$Bit $tmp1975 = frost$core$Bit$init$builtin_bit($tmp1974 != NULL);
bool $tmp1976 = $tmp1975.value;
if ($tmp1976) goto block223; else goto block224;
block224:;
frost$core$Int64 $tmp1977 = (frost$core$Int64) {536};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1978, $tmp1977, &$s1979);
abort(); // unreachable
block223:;
frost$core$MutableString$append$frost$core$Object($tmp1973, ((frost$core$Object*) $tmp1974));
goto block222;
block222:;
// line 538
org$frostlang$frostc$ASTNode* $tmp1980 = *(&local104);
frost$core$Bit $tmp1981 = frost$core$Bit$init$builtin_bit($tmp1980 != NULL);
bool $tmp1982 = $tmp1981.value;
if ($tmp1982) goto block225; else goto block226;
block225:;
// line 539
frost$core$MutableString* $tmp1983 = *(&local105);
org$frostlang$frostc$ASTNode* $tmp1984 = *(&local104);
frost$core$Bit $tmp1985 = frost$core$Bit$init$builtin_bit($tmp1984 != NULL);
bool $tmp1986 = $tmp1985.value;
if ($tmp1986) goto block227; else goto block228;
block228:;
frost$core$Int64 $tmp1987 = (frost$core$Int64) {539};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1988, $tmp1987, &$s1989);
abort(); // unreachable
block227:;
frost$core$String* $tmp1990 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1991, ((frost$core$Object*) $tmp1984));
frost$core$MutableString$append$frost$core$String($tmp1983, $tmp1990);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
// unreffing REF($3505:frost.core.String)
goto block226;
block226:;
// line 541
frost$core$MutableString* $tmp1992 = *(&local105);
frost$core$String* $tmp1993 = frost$core$MutableString$finish$R$frost$core$String($tmp1992);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
// unreffing REF($3513:frost.core.String)
frost$core$MutableString* $tmp1994 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
// unreffing result
*(&local105) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1995 = *(&local104);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
// unreffing step
*(&local104) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1996 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
// unreffing end
*(&local103) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1997 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1997));
// unreffing start
*(&local101) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1993;
block213:;
frost$core$Int64 $tmp1998 = (frost$core$Int64) {36};
frost$core$Bit $tmp1999 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1998);
bool $tmp2000 = $tmp1999.value;
if ($tmp2000) goto block229; else goto block230;
block229:;
org$frostlang$frostc$Position* $tmp2001 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2002 = *$tmp2001;
frost$core$Real64* $tmp2003 = (frost$core$Real64*) (param0->$data + 16);
frost$core$Real64 $tmp2004 = *$tmp2003;
*(&local106) = $tmp2004;
// line 544
frost$core$Real64 $tmp2005 = *(&local106);
frost$core$Real64$wrapper* $tmp2006;
$tmp2006 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp2006->value = $tmp2005;
$fn2008 $tmp2007 = ($fn2008) ((frost$core$Object*) $tmp2006)->$class->vtable[0];
frost$core$String* $tmp2009 = $tmp2007(((frost$core$Object*) $tmp2006));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
// unreffing REF($3553:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2006));
// unreffing REF($3551:frost.core.Object)
return $tmp2009;
block230:;
frost$core$Int64 $tmp2010 = (frost$core$Int64) {37};
frost$core$Bit $tmp2011 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2010);
bool $tmp2012 = $tmp2011.value;
if ($tmp2012) goto block231; else goto block232;
block231:;
org$frostlang$frostc$Position* $tmp2013 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2014 = *$tmp2013;
frost$core$String** $tmp2015 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2016 = *$tmp2015;
*(&local107) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2016));
frost$core$String* $tmp2017 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2017));
*(&local107) = $tmp2016;
// line 547
frost$core$String* $tmp2018 = *(&local107);
frost$core$String* $tmp2019 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2020, $tmp2018);
frost$core$String* $tmp2021 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2019, &$s2022);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
// unreffing REF($3581:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
// unreffing REF($3580:frost.core.String)
frost$core$String* $tmp2023 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2023));
// unreffing src
*(&local107) = ((frost$core$String*) NULL);
return $tmp2021;
block232:;
frost$core$Int64 $tmp2024 = (frost$core$Int64) {38};
frost$core$Bit $tmp2025 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2024);
bool $tmp2026 = $tmp2025.value;
if ($tmp2026) goto block233; else goto block234;
block233:;
org$frostlang$frostc$Position* $tmp2027 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2028 = *$tmp2027;
org$frostlang$frostc$ASTNode** $tmp2029 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2030 = *$tmp2029;
*(&local108) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
org$frostlang$frostc$ASTNode* $tmp2031 = *(&local108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
*(&local108) = $tmp2030;
// line 550
org$frostlang$frostc$ASTNode* $tmp2032 = *(&local108);
frost$core$Bit $tmp2033 = frost$core$Bit$init$builtin_bit($tmp2032 != NULL);
bool $tmp2034 = $tmp2033.value;
if ($tmp2034) goto block235; else goto block236;
block235:;
// line 551
org$frostlang$frostc$ASTNode* $tmp2035 = *(&local108);
frost$core$Bit $tmp2036 = frost$core$Bit$init$builtin_bit($tmp2035 != NULL);
bool $tmp2037 = $tmp2036.value;
if ($tmp2037) goto block237; else goto block238;
block238:;
frost$core$Int64 $tmp2038 = (frost$core$Int64) {551};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2039, $tmp2038, &$s2040);
abort(); // unreachable
block237:;
frost$core$String* $tmp2041 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2042, ((frost$core$Object*) $tmp2035));
frost$core$String* $tmp2043 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2041, &$s2044);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
// unreffing REF($3628:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2041));
// unreffing REF($3627:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp2045 = *(&local108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2045));
// unreffing value
*(&local108) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2043;
block236:;
// line 553
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2046));
org$frostlang$frostc$ASTNode* $tmp2047 = *(&local108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
// unreffing value
*(&local108) = ((org$frostlang$frostc$ASTNode*) NULL);
return &$s2048;
block234:;
frost$core$Int64 $tmp2049 = (frost$core$Int64) {39};
frost$core$Bit $tmp2050 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2049);
bool $tmp2051 = $tmp2050.value;
if ($tmp2051) goto block239; else goto block240;
block239:;
// line 556
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2052));
return &$s2053;
block240:;
frost$core$Int64 $tmp2054 = (frost$core$Int64) {40};
frost$core$Bit $tmp2055 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2054);
bool $tmp2056 = $tmp2055.value;
if ($tmp2056) goto block241; else goto block242;
block241:;
org$frostlang$frostc$Position* $tmp2057 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2058 = *$tmp2057;
frost$core$String** $tmp2059 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2060 = *$tmp2059;
*(&local109) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
frost$core$String* $tmp2061 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
*(&local109) = $tmp2060;
// line 559
frost$core$String* $tmp2062 = *(&local109);
frost$core$String* $tmp2063 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp2062, &$s2064);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
// unreffing REF($3677:frost.core.String)
frost$core$String* $tmp2065 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
// unreffing str
*(&local109) = ((frost$core$String*) NULL);
return $tmp2063;
block242:;
frost$core$Int64 $tmp2066 = (frost$core$Int64) {41};
frost$core$Bit $tmp2067 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2066);
bool $tmp2068 = $tmp2067.value;
if ($tmp2068) goto block243; else goto block244;
block243:;
// line 562
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2069));
return &$s2070;
block244:;
frost$core$Int64 $tmp2071 = (frost$core$Int64) {43};
frost$core$Bit $tmp2072 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2071);
bool $tmp2073 = $tmp2072.value;
if ($tmp2073) goto block245; else goto block246;
block245:;
org$frostlang$frostc$Position* $tmp2074 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2075 = *$tmp2074;
org$frostlang$frostc$FixedArray** $tmp2076 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2077 = *$tmp2076;
*(&local110) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2077));
org$frostlang$frostc$FixedArray* $tmp2078 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
*(&local110) = $tmp2077;
// line 565
org$frostlang$frostc$FixedArray* $tmp2079 = *(&local110);
ITable* $tmp2080 = ((frost$collections$CollectionView*) $tmp2079)->$class->itable;
while ($tmp2080->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2080 = $tmp2080->next;
}
$fn2082 $tmp2081 = $tmp2080->methods[1];
frost$core$String* $tmp2083 = $tmp2081(((frost$collections$CollectionView*) $tmp2079));
frost$core$String* $tmp2084 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2085, $tmp2083);
frost$core$String* $tmp2086 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2084, &$s2087);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
// unreffing REF($3718:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
// unreffing REF($3717:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
// unreffing REF($3716:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp2088 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
// unreffing arguments
*(&local110) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2086;
block246:;
frost$core$Int64 $tmp2089 = (frost$core$Int64) {44};
frost$core$Bit $tmp2090 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2089);
bool $tmp2091 = $tmp2090.value;
if ($tmp2091) goto block247; else goto block248;
block247:;
org$frostlang$frostc$Position* $tmp2092 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2093 = *$tmp2092;
org$frostlang$frostc$FixedArray** $tmp2094 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2095 = *$tmp2094;
*(&local111) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2095));
org$frostlang$frostc$FixedArray* $tmp2096 = *(&local111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
*(&local111) = $tmp2095;
// line 568
org$frostlang$frostc$FixedArray* $tmp2097 = *(&local111);
ITable* $tmp2098 = ((frost$collections$CollectionView*) $tmp2097)->$class->itable;
while ($tmp2098->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2098 = $tmp2098->next;
}
$fn2100 $tmp2099 = $tmp2098->methods[1];
frost$core$String* $tmp2101 = $tmp2099(((frost$collections$CollectionView*) $tmp2097));
frost$core$String* $tmp2102 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2103, $tmp2101);
frost$core$String* $tmp2104 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2102, &$s2105);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
// unreffing REF($3757:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2102));
// unreffing REF($3756:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2101));
// unreffing REF($3755:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp2106 = *(&local111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
// unreffing parameters
*(&local111) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2104;
block248:;
frost$core$Int64 $tmp2107 = (frost$core$Int64) {42};
frost$core$Bit $tmp2108 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2107);
bool $tmp2109 = $tmp2108.value;
if ($tmp2109) goto block249; else goto block250;
block249:;
org$frostlang$frostc$Position* $tmp2110 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2111 = *$tmp2110;
org$frostlang$frostc$FixedArray** $tmp2112 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2113 = *$tmp2112;
*(&local112) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
org$frostlang$frostc$FixedArray* $tmp2114 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
*(&local112) = $tmp2113;
org$frostlang$frostc$ASTNode** $tmp2115 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2116 = *$tmp2115;
*(&local113) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2116));
org$frostlang$frostc$ASTNode* $tmp2117 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
*(&local113) = $tmp2116;
org$frostlang$frostc$FixedArray** $tmp2118 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2119 = *$tmp2118;
*(&local114) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
org$frostlang$frostc$FixedArray* $tmp2120 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
*(&local114) = $tmp2119;
// line 571
frost$core$MutableString* $tmp2121 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2121, &$s2122);
*(&local115) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
frost$core$MutableString* $tmp2123 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
*(&local115) = $tmp2121;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
// unreffing REF($3809:frost.core.MutableString)
// line 572
org$frostlang$frostc$FixedArray* $tmp2124 = *(&local112);
frost$core$MutableString* $tmp2125 = *(&local115);
frost$core$MutableMethod* $tmp2127 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp2127, ((frost$core$Int8*) frost$core$MutableString$append$frost$core$Object), ((frost$core$Object*) $tmp2125));
ITable* $tmp2128 = ((frost$collections$CollectionView*) $tmp2124)->$class->itable;
while ($tmp2128->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2128 = $tmp2128->next;
}
$fn2130 $tmp2129 = $tmp2128->methods[7];
$tmp2129(((frost$collections$CollectionView*) $tmp2124), $tmp2127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
// unreffing REF($3826:frost.core.MutableMethod)
// line 573
org$frostlang$frostc$ASTNode* $tmp2131 = *(&local113);
frost$core$Bit $tmp2132 = frost$core$Bit$init$builtin_bit($tmp2131 != NULL);
bool $tmp2133 = $tmp2132.value;
if ($tmp2133) goto block251; else goto block253;
block251:;
// line 574
frost$core$MutableString* $tmp2134 = *(&local115);
org$frostlang$frostc$ASTNode* $tmp2135 = *(&local113);
frost$core$Bit $tmp2136 = frost$core$Bit$init$builtin_bit($tmp2135 != NULL);
bool $tmp2137 = $tmp2136.value;
if ($tmp2137) goto block254; else goto block255;
block255:;
frost$core$Int64 $tmp2138 = (frost$core$Int64) {574};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2139, $tmp2138, &$s2140);
abort(); // unreachable
block254:;
frost$core$String* $tmp2141 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2142, ((frost$core$Object*) $tmp2135));
frost$core$String* $tmp2143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2141, &$s2144);
frost$core$MutableString$append$frost$core$String($tmp2134, $tmp2143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2143));
// unreffing REF($3855:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2141));
// unreffing REF($3854:frost.core.String)
goto block252;
block253:;
// line 1
// line 577
frost$core$MutableString* $tmp2145 = *(&local115);
frost$core$MutableString$append$frost$core$String($tmp2145, &$s2146);
goto block252;
block252:;
// line 579
org$frostlang$frostc$FixedArray* $tmp2147 = *(&local114);
frost$core$MutableString* $tmp2148 = *(&local115);
frost$core$MutableMethod* $tmp2150 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp2150, ((frost$core$Int8*) frost$core$MutableString$append$frost$core$Object), ((frost$core$Object*) $tmp2148));
ITable* $tmp2151 = ((frost$collections$CollectionView*) $tmp2147)->$class->itable;
while ($tmp2151->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2151 = $tmp2151->next;
}
$fn2153 $tmp2152 = $tmp2151->methods[7];
$tmp2152(((frost$collections$CollectionView*) $tmp2147), $tmp2150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
// unreffing REF($3874:frost.core.MutableMethod)
// line 580
frost$core$MutableString* $tmp2154 = *(&local115);
frost$core$MutableString$append$frost$core$String($tmp2154, &$s2155);
// line 581
frost$core$MutableString* $tmp2156 = *(&local115);
frost$core$String* $tmp2157 = frost$core$MutableString$finish$R$frost$core$String($tmp2156);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
// unreffing REF($3890:frost.core.String)
frost$core$MutableString* $tmp2158 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
// unreffing result
*(&local115) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2159 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
// unreffing failBlock
*(&local114) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2160 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
// unreffing error
*(&local113) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2161 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2161));
// unreffing block
*(&local112) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2157;
block250:;
frost$core$Int64 $tmp2162 = (frost$core$Int64) {45};
frost$core$Bit $tmp2163 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2162);
bool $tmp2164 = $tmp2163.value;
if ($tmp2164) goto block256; else goto block257;
block256:;
org$frostlang$frostc$Position* $tmp2165 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2166 = *$tmp2165;
frost$core$String** $tmp2167 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2168 = *$tmp2167;
*(&local116) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
frost$core$String* $tmp2169 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
*(&local116) = $tmp2168;
// line 584
frost$core$String* $tmp2170 = *(&local116);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
frost$core$String* $tmp2171 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2171));
// unreffing name
*(&local116) = ((frost$core$String*) NULL);
return $tmp2170;
block257:;
frost$core$Int64 $tmp2172 = (frost$core$Int64) {47};
frost$core$Bit $tmp2173 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2172);
bool $tmp2174 = $tmp2173.value;
if ($tmp2174) goto block258; else goto block259;
block258:;
org$frostlang$frostc$Position* $tmp2175 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2176 = *$tmp2175;
frost$core$String** $tmp2177 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2178 = *$tmp2177;
*(&local117) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2178));
frost$core$String* $tmp2179 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2179));
*(&local117) = $tmp2178;
org$frostlang$frostc$ASTNode** $tmp2180 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2181 = *$tmp2180;
*(&local118) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
org$frostlang$frostc$ASTNode* $tmp2182 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
*(&local118) = $tmp2181;
// line 587
org$frostlang$frostc$ASTNode* $tmp2183 = *(&local118);
frost$core$Bit $tmp2184 = frost$core$Bit$init$builtin_bit($tmp2183 != NULL);
bool $tmp2185 = $tmp2184.value;
if ($tmp2185) goto block260; else goto block261;
block260:;
// line 588
frost$core$String* $tmp2186 = *(&local117);
frost$core$String* $tmp2187 = frost$core$String$get_asString$R$frost$core$String($tmp2186);
frost$core$String* $tmp2188 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2187, &$s2189);
org$frostlang$frostc$ASTNode* $tmp2190 = *(&local118);
frost$core$Bit $tmp2191 = frost$core$Bit$init$builtin_bit($tmp2190 != NULL);
bool $tmp2192 = $tmp2191.value;
if ($tmp2192) goto block262; else goto block263;
block263:;
frost$core$Int64 $tmp2193 = (frost$core$Int64) {588};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2194, $tmp2193, &$s2195);
abort(); // unreachable
block262:;
frost$core$String* $tmp2196 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2188, ((frost$core$Object*) $tmp2190));
frost$core$String* $tmp2197 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2196, &$s2198);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
// unreffing REF($3986:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
// unreffing REF($3985:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
// unreffing REF($3975:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2187));
// unreffing REF($3974:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp2199 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2199));
// unreffing type
*(&local118) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2200 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
// unreffing name
*(&local117) = ((frost$core$String*) NULL);
return $tmp2197;
block261:;
// line 590
frost$core$String* $tmp2201 = *(&local117);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2201));
org$frostlang$frostc$ASTNode* $tmp2202 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2202));
// unreffing type
*(&local118) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2203 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2203));
// unreffing name
*(&local117) = ((frost$core$String*) NULL);
return $tmp2201;
block259:;
frost$core$Int64 $tmp2204 = (frost$core$Int64) {46};
frost$core$Bit $tmp2205 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2204);
bool $tmp2206 = $tmp2205.value;
if ($tmp2206) goto block264; else goto block265;
block264:;
org$frostlang$frostc$Position* $tmp2207 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2208 = *$tmp2207;
org$frostlang$frostc$FixedArray** $tmp2209 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2210 = *$tmp2209;
*(&local119) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2210));
org$frostlang$frostc$FixedArray* $tmp2211 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2211));
*(&local119) = $tmp2210;
org$frostlang$frostc$ASTNode** $tmp2212 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2213 = *$tmp2212;
*(&local120) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2213));
org$frostlang$frostc$ASTNode* $tmp2214 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2214));
*(&local120) = $tmp2213;
// line 593
org$frostlang$frostc$FixedArray* $tmp2215 = *(&local119);
ITable* $tmp2216 = ((frost$collections$CollectionView*) $tmp2215)->$class->itable;
while ($tmp2216->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2216 = $tmp2216->next;
}
$fn2218 $tmp2217 = $tmp2216->methods[1];
frost$core$String* $tmp2219 = $tmp2217(((frost$collections$CollectionView*) $tmp2215));
frost$core$String* $tmp2220 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2221, $tmp2219);
frost$core$String* $tmp2222 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2220, &$s2223);
org$frostlang$frostc$ASTNode* $tmp2224 = *(&local120);
frost$core$String* $tmp2225 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2222, ((frost$core$Object*) $tmp2224));
frost$core$String* $tmp2226 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2225, &$s2227);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
// unreffing REF($4061:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2225));
// unreffing REF($4060:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
// unreffing REF($4057:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2220));
// unreffing REF($4056:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2219));
// unreffing REF($4055:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp2228 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
// unreffing body
*(&local120) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2229 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
// unreffing parameters
*(&local119) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2226;
block265:;
frost$core$Int64 $tmp2230 = (frost$core$Int64) {48};
frost$core$Bit $tmp2231 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2230);
bool $tmp2232 = $tmp2231.value;
if ($tmp2232) goto block266; else goto block267;
block266:;
org$frostlang$frostc$Position* $tmp2233 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2234 = *$tmp2233;
org$frostlang$frostc$expression$Unary$Operator* $tmp2235 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 16);
org$frostlang$frostc$expression$Unary$Operator $tmp2236 = *$tmp2235;
*(&local121) = $tmp2236;
org$frostlang$frostc$ASTNode** $tmp2237 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2238 = *$tmp2237;
*(&local122) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2238));
org$frostlang$frostc$ASTNode* $tmp2239 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
*(&local122) = $tmp2238;
// line 596
org$frostlang$frostc$expression$Unary$Operator $tmp2240 = *(&local121);
frost$core$String* $tmp2241 = org$frostlang$frostc$expression$Unary$Operator$get_asString$R$frost$core$String($tmp2240);
frost$core$String* $tmp2242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2241, &$s2243);
org$frostlang$frostc$ASTNode* $tmp2244 = *(&local122);
frost$core$String* $tmp2245 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2242, ((frost$core$Object*) $tmp2244));
frost$core$String* $tmp2246 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2245, &$s2247);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2246));
// unreffing REF($4115:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2245));
// unreffing REF($4114:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2242));
// unreffing REF($4111:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2241));
// unreffing REF($4110:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp2248 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
// unreffing base
*(&local122) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2246;
block267:;
frost$core$Int64 $tmp2249 = (frost$core$Int64) {49};
frost$core$Bit $tmp2250 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2249);
bool $tmp2251 = $tmp2250.value;
if ($tmp2251) goto block268; else goto block269;
block268:;
org$frostlang$frostc$Position* $tmp2252 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2253 = *$tmp2252;
org$frostlang$frostc$FixedArray** $tmp2254 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2255 = *$tmp2254;
*(&local123) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2255));
org$frostlang$frostc$FixedArray* $tmp2256 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
*(&local123) = $tmp2255;
org$frostlang$frostc$ASTNode** $tmp2257 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2258 = *$tmp2257;
*(&local124) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2258));
org$frostlang$frostc$ASTNode* $tmp2259 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2259));
*(&local124) = $tmp2258;
// line 599
org$frostlang$frostc$FixedArray* $tmp2260 = *(&local123);
ITable* $tmp2261 = ((frost$collections$CollectionView*) $tmp2260)->$class->itable;
while ($tmp2261->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2261 = $tmp2261->next;
}
$fn2263 $tmp2262 = $tmp2261->methods[1];
frost$core$String* $tmp2264 = $tmp2262(((frost$collections$CollectionView*) $tmp2260));
frost$core$String* $tmp2265 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2266, $tmp2264);
frost$core$String* $tmp2267 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2265, &$s2268);
org$frostlang$frostc$ASTNode* $tmp2269 = *(&local124);
frost$core$String* $tmp2270 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2267, ((frost$core$Object*) $tmp2269));
frost$core$String* $tmp2271 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2270, &$s2272);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
// unreffing REF($4170:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
// unreffing REF($4169:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
// unreffing REF($4166:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
// unreffing REF($4165:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2264));
// unreffing REF($4164:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp2273 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
// unreffing body
*(&local124) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2274 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2274));
// unreffing parameters
*(&local123) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2271;
block269:;
frost$core$Int64 $tmp2275 = (frost$core$Int64) {50};
frost$core$Bit $tmp2276 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2275);
bool $tmp2277 = $tmp2276.value;
if ($tmp2277) goto block270; else goto block271;
block270:;
org$frostlang$frostc$Position* $tmp2278 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2279 = *$tmp2278;
frost$core$String** $tmp2280 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2281 = *$tmp2280;
*(&local125) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2281));
frost$core$String* $tmp2282 = *(&local125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2282));
*(&local125) = $tmp2281;
// line 602
frost$core$String* $tmp2283 = *(&local125);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2283));
frost$core$String* $tmp2284 = *(&local125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2284));
// unreffing name
*(&local125) = ((frost$core$String*) NULL);
return $tmp2283;
block271:;
frost$core$Int64 $tmp2285 = (frost$core$Int64) {51};
frost$core$Bit $tmp2286 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2285);
bool $tmp2287 = $tmp2286.value;
if ($tmp2287) goto block272; else goto block273;
block272:;
org$frostlang$frostc$Position* $tmp2288 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2289 = *$tmp2288;
org$frostlang$frostc$Variable$Kind* $tmp2290 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp2291 = *$tmp2290;
*(&local126) = $tmp2291;
org$frostlang$frostc$FixedArray** $tmp2292 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2293 = *$tmp2292;
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
org$frostlang$frostc$FixedArray* $tmp2294 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2294));
*(&local127) = $tmp2293;
// line 605
frost$core$MutableString* $tmp2295 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2295);
*(&local128) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
frost$core$MutableString* $tmp2296 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2296));
*(&local128) = $tmp2295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
// unreffing REF($4243:frost.core.MutableString)
// line 606
org$frostlang$frostc$Variable$Kind $tmp2297 = *(&local126);
frost$core$Int64 $tmp2298 = $tmp2297.$rawValue;
frost$core$Int64 $tmp2299 = (frost$core$Int64) {0};
frost$core$Bit $tmp2300 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2298, $tmp2299);
bool $tmp2301 = $tmp2300.value;
if ($tmp2301) goto block275; else goto block276;
block275:;
// line 607
frost$core$MutableString* $tmp2302 = *(&local128);
frost$core$MutableString$append$frost$core$String($tmp2302, &$s2303);
goto block274;
block276:;
frost$core$Int64 $tmp2304 = (frost$core$Int64) {1};
frost$core$Bit $tmp2305 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2298, $tmp2304);
bool $tmp2306 = $tmp2305.value;
if ($tmp2306) goto block277; else goto block278;
block277:;
// line 608
frost$core$MutableString* $tmp2307 = *(&local128);
frost$core$MutableString$append$frost$core$String($tmp2307, &$s2308);
goto block274;
block278:;
frost$core$Int64 $tmp2309 = (frost$core$Int64) {2};
frost$core$Bit $tmp2310 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2298, $tmp2309);
bool $tmp2311 = $tmp2310.value;
if ($tmp2311) goto block279; else goto block280;
block279:;
// line 609
frost$core$MutableString* $tmp2312 = *(&local128);
frost$core$MutableString$append$frost$core$String($tmp2312, &$s2313);
goto block274;
block280:;
frost$core$Int64 $tmp2314 = (frost$core$Int64) {3};
frost$core$Bit $tmp2315 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2298, $tmp2314);
bool $tmp2316 = $tmp2315.value;
if ($tmp2316) goto block281; else goto block274;
block281:;
// line 610
frost$core$MutableString* $tmp2317 = *(&local128);
frost$core$MutableString$append$frost$core$String($tmp2317, &$s2318);
goto block274;
block274:;
// line 612
frost$core$MutableString* $tmp2319 = *(&local128);
org$frostlang$frostc$FixedArray* $tmp2320 = *(&local127);
ITable* $tmp2321 = ((frost$collections$CollectionView*) $tmp2320)->$class->itable;
while ($tmp2321->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2321 = $tmp2321->next;
}
$fn2323 $tmp2322 = $tmp2321->methods[1];
frost$core$String* $tmp2324 = $tmp2322(((frost$collections$CollectionView*) $tmp2320));
frost$core$MutableString$append$frost$core$String($tmp2319, $tmp2324);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
// unreffing REF($4295:frost.core.String)
// line 613
frost$core$MutableString* $tmp2325 = *(&local128);
frost$core$String* $tmp2326 = frost$core$MutableString$finish$R$frost$core$String($tmp2325);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
// unreffing REF($4302:frost.core.String)
frost$core$MutableString* $tmp2327 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2327));
// unreffing result
*(&local128) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2328 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2328));
// unreffing decls
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2326;
block273:;
frost$core$Int64 $tmp2329 = (frost$core$Int64) {52};
frost$core$Bit $tmp2330 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2329);
bool $tmp2331 = $tmp2330.value;
if ($tmp2331) goto block282; else goto block283;
block282:;
org$frostlang$frostc$Position* $tmp2332 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2333 = *$tmp2332;
org$frostlang$frostc$FixedArray** $tmp2334 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2335 = *$tmp2334;
*(&local129) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2335));
org$frostlang$frostc$FixedArray* $tmp2336 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2336));
*(&local129) = $tmp2335;
org$frostlang$frostc$FixedArray** $tmp2337 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2338 = *$tmp2337;
*(&local130) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2338));
org$frostlang$frostc$FixedArray* $tmp2339 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2339));
*(&local130) = $tmp2338;
// line 616
frost$core$MutableString* $tmp2340 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2340, &$s2341);
*(&local131) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
frost$core$MutableString* $tmp2342 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
*(&local131) = $tmp2340;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
// unreffing REF($4344:frost.core.MutableString)
// line 617
*(&local132) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2343));
frost$core$String* $tmp2344 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2344));
*(&local132) = &$s2345;
// line 618
org$frostlang$frostc$FixedArray* $tmp2346 = *(&local129);
ITable* $tmp2347 = ((frost$collections$Iterable*) $tmp2346)->$class->itable;
while ($tmp2347->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2347 = $tmp2347->next;
}
$fn2349 $tmp2348 = $tmp2347->methods[0];
frost$collections$Iterator* $tmp2350 = $tmp2348(((frost$collections$Iterable*) $tmp2346));
goto block284;
block284:;
ITable* $tmp2351 = $tmp2350->$class->itable;
while ($tmp2351->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2351 = $tmp2351->next;
}
$fn2353 $tmp2352 = $tmp2351->methods[0];
frost$core$Bit $tmp2354 = $tmp2352($tmp2350);
bool $tmp2355 = $tmp2354.value;
if ($tmp2355) goto block286; else goto block285;
block285:;
*(&local133) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2356 = $tmp2350->$class->itable;
while ($tmp2356->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2356 = $tmp2356->next;
}
$fn2358 $tmp2357 = $tmp2356->methods[1];
frost$core$Object* $tmp2359 = $tmp2357($tmp2350);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2359)));
org$frostlang$frostc$ASTNode* $tmp2360 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2360));
*(&local133) = ((org$frostlang$frostc$ASTNode*) $tmp2359);
// line 619
frost$core$MutableString* $tmp2361 = *(&local131);
frost$core$String* $tmp2362 = *(&local132);
frost$core$String* $tmp2363 = frost$core$String$get_asString$R$frost$core$String($tmp2362);
frost$core$String* $tmp2364 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2363, &$s2365);
org$frostlang$frostc$ASTNode* $tmp2366 = *(&local133);
frost$core$String* $tmp2367 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2364, ((frost$core$Object*) $tmp2366));
frost$core$String* $tmp2368 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2367, &$s2369);
frost$core$MutableString$append$frost$core$String($tmp2361, $tmp2368);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2368));
// unreffing REF($4396:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2367));
// unreffing REF($4395:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
// unreffing REF($4392:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
// unreffing REF($4391:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2359);
// unreffing REF($4380:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2370 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2370));
// unreffing t
*(&local133) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block284;
block286:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2350));
// unreffing REF($4369:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 621
frost$core$MutableString* $tmp2371 = *(&local131);
frost$core$MutableString$append$frost$core$String($tmp2371, &$s2372);
// line 622
org$frostlang$frostc$FixedArray* $tmp2373 = *(&local130);
ITable* $tmp2374 = ((frost$collections$Iterable*) $tmp2373)->$class->itable;
while ($tmp2374->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2374 = $tmp2374->next;
}
$fn2376 $tmp2375 = $tmp2374->methods[0];
frost$collections$Iterator* $tmp2377 = $tmp2375(((frost$collections$Iterable*) $tmp2373));
goto block287;
block287:;
ITable* $tmp2378 = $tmp2377->$class->itable;
while ($tmp2378->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2378 = $tmp2378->next;
}
$fn2380 $tmp2379 = $tmp2378->methods[0];
frost$core$Bit $tmp2381 = $tmp2379($tmp2377);
bool $tmp2382 = $tmp2381.value;
if ($tmp2382) goto block289; else goto block288;
block288:;
*(&local134) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2383 = $tmp2377->$class->itable;
while ($tmp2383->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2383 = $tmp2383->next;
}
$fn2385 $tmp2384 = $tmp2383->methods[1];
frost$core$Object* $tmp2386 = $tmp2384($tmp2377);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2386)));
org$frostlang$frostc$ASTNode* $tmp2387 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2387));
*(&local134) = ((org$frostlang$frostc$ASTNode*) $tmp2386);
// line 623
frost$core$MutableString* $tmp2388 = *(&local131);
org$frostlang$frostc$ASTNode* $tmp2389 = *(&local134);
frost$core$String* $tmp2390 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2391, ((frost$core$Object*) $tmp2389));
frost$core$MutableString$append$frost$core$String($tmp2388, $tmp2390);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
// unreffing REF($4453:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2386);
// unreffing REF($4441:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2392 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
// unreffing s
*(&local134) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block287;
block289:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2377));
// unreffing REF($4430:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 625
frost$core$MutableString* $tmp2393 = *(&local131);
frost$core$String* $tmp2394 = frost$core$MutableString$finish$R$frost$core$String($tmp2393);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
// unreffing REF($4472:frost.core.String)
frost$core$String* $tmp2395 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2395));
// unreffing separator
*(&local132) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2396 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
// unreffing result
*(&local131) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2397 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
// unreffing statements
*(&local130) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2398 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
// unreffing tests
*(&local129) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2394;
block283:;
frost$core$Int64 $tmp2399 = (frost$core$Int64) {53};
frost$core$Bit $tmp2400 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2399);
bool $tmp2401 = $tmp2400.value;
if ($tmp2401) goto block290; else goto block291;
block290:;
org$frostlang$frostc$Position* $tmp2402 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2403 = *$tmp2402;
frost$core$String** $tmp2404 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2405 = *$tmp2404;
*(&local135) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2405));
frost$core$String* $tmp2406 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2406));
*(&local135) = $tmp2405;
org$frostlang$frostc$ASTNode** $tmp2407 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2408 = *$tmp2407;
*(&local136) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2408));
org$frostlang$frostc$ASTNode* $tmp2409 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
*(&local136) = $tmp2408;
org$frostlang$frostc$FixedArray** $tmp2410 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2411 = *$tmp2410;
*(&local137) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
org$frostlang$frostc$FixedArray* $tmp2412 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2412));
*(&local137) = $tmp2411;
// line 628
frost$core$MutableString* $tmp2413 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2413);
*(&local138) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2413));
frost$core$MutableString* $tmp2414 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2414));
*(&local138) = $tmp2413;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2413));
// unreffing REF($4533:frost.core.MutableString)
// line 629
frost$core$String* $tmp2415 = *(&local135);
frost$core$Bit $tmp2416 = frost$core$Bit$init$builtin_bit($tmp2415 != NULL);
bool $tmp2417 = $tmp2416.value;
if ($tmp2417) goto block292; else goto block293;
block292:;
// line 630
frost$core$MutableString* $tmp2418 = *(&local138);
frost$core$String* $tmp2419 = *(&local135);
frost$core$Bit $tmp2420 = frost$core$Bit$init$builtin_bit($tmp2419 != NULL);
bool $tmp2421 = $tmp2420.value;
if ($tmp2421) goto block294; else goto block295;
block295:;
frost$core$Int64 $tmp2422 = (frost$core$Int64) {630};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2423, $tmp2422, &$s2424);
abort(); // unreachable
block294:;
frost$core$String* $tmp2425 = frost$core$String$get_asString$R$frost$core$String($tmp2419);
frost$core$String* $tmp2426 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2425, &$s2427);
frost$core$MutableString$append$frost$core$String($tmp2418, $tmp2426);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2426));
// unreffing REF($4563:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
// unreffing REF($4562:frost.core.String)
goto block293;
block293:;
// line 632
frost$core$MutableString* $tmp2428 = *(&local138);
org$frostlang$frostc$ASTNode* $tmp2429 = *(&local136);
frost$core$String* $tmp2430 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2431, ((frost$core$Object*) $tmp2429));
frost$core$String* $tmp2432 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2430, &$s2433);
frost$core$MutableString$append$frost$core$String($tmp2428, $tmp2432);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
// unreffing REF($4577:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2430));
// unreffing REF($4576:frost.core.String)
// line 633
org$frostlang$frostc$FixedArray* $tmp2434 = *(&local137);
ITable* $tmp2435 = ((frost$collections$Iterable*) $tmp2434)->$class->itable;
while ($tmp2435->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2435 = $tmp2435->next;
}
$fn2437 $tmp2436 = $tmp2435->methods[0];
frost$collections$Iterator* $tmp2438 = $tmp2436(((frost$collections$Iterable*) $tmp2434));
goto block296;
block296:;
ITable* $tmp2439 = $tmp2438->$class->itable;
while ($tmp2439->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2439 = $tmp2439->next;
}
$fn2441 $tmp2440 = $tmp2439->methods[0];
frost$core$Bit $tmp2442 = $tmp2440($tmp2438);
bool $tmp2443 = $tmp2442.value;
if ($tmp2443) goto block298; else goto block297;
block297:;
*(&local139) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2444 = $tmp2438->$class->itable;
while ($tmp2444->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2444 = $tmp2444->next;
}
$fn2446 $tmp2445 = $tmp2444->methods[1];
frost$core$Object* $tmp2447 = $tmp2445($tmp2438);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2447)));
org$frostlang$frostc$ASTNode* $tmp2448 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
*(&local139) = ((org$frostlang$frostc$ASTNode*) $tmp2447);
// line 634
frost$core$MutableString* $tmp2449 = *(&local138);
org$frostlang$frostc$ASTNode* $tmp2450 = *(&local139);
frost$core$String* $tmp2451 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp2450), &$s2452);
frost$core$MutableString$append$frost$core$String($tmp2449, $tmp2451);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2451));
// unreffing REF($4613:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2447);
// unreffing REF($4601:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2453 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2453));
// unreffing s
*(&local139) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block296;
block298:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
// unreffing REF($4590:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 636
frost$core$MutableString* $tmp2454 = *(&local138);
frost$core$MutableString$append$frost$core$String($tmp2454, &$s2455);
// line 637
frost$core$MutableString* $tmp2456 = *(&local138);
frost$core$String* $tmp2457 = frost$core$MutableString$finish$R$frost$core$String($tmp2456);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2457));
// unreffing REF($4635:frost.core.String)
frost$core$MutableString* $tmp2458 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2458));
// unreffing result
*(&local138) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2459 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2459));
// unreffing statements
*(&local137) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2460 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2460));
// unreffing test
*(&local136) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2461 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
// unreffing label
*(&local135) = ((frost$core$String*) NULL);
return $tmp2457;
block291:;
// line 640
frost$core$Bit $tmp2462 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2463 = $tmp2462.value;
if ($tmp2463) goto block299; else goto block300;
block300:;
frost$core$Int64 $tmp2464 = (frost$core$Int64) {640};
frost$core$Int64* $tmp2465 = &param0->$rawValue;
frost$core$Int64 $tmp2466 = *$tmp2465;
frost$core$Int64$wrapper* $tmp2467;
$tmp2467 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2467->value = $tmp2466;
frost$core$String* $tmp2468 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2469, ((frost$core$Object*) $tmp2467));
frost$core$String* $tmp2470 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2468, &$s2471);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2472, $tmp2464, $tmp2470);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2470));
// unreffing REF($4671:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2468));
// unreffing REF($4670:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2467));
// unreffing REF($4669:frost.core.Object)
abort(); // unreachable
block299:;
goto block1;
block1:;
frost$core$Bit $tmp2473 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2474 = $tmp2473.value;
if ($tmp2474) goto block301; else goto block302;
block302:;
frost$core$Int64 $tmp2475 = (frost$core$Int64) {263};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2476, $tmp2475, &$s2477);
abort(); // unreachable
block301:;
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
org$frostlang$frostc$FixedArray* local146 = NULL;
org$frostlang$frostc$ASTNode* local147 = NULL;
org$frostlang$frostc$Position local148;
frost$core$String* local149 = NULL;
org$frostlang$frostc$Position local150;
org$frostlang$frostc$Variable$Kind local151;
org$frostlang$frostc$FixedArray* local152 = NULL;
org$frostlang$frostc$Position local153;
org$frostlang$frostc$FixedArray* local154 = NULL;
org$frostlang$frostc$FixedArray* local155 = NULL;
org$frostlang$frostc$Position local156;
frost$core$String* local157 = NULL;
org$frostlang$frostc$ASTNode* local158 = NULL;
org$frostlang$frostc$FixedArray* local159 = NULL;
// line 7
frost$core$Int64* $tmp2478 = &param0->$rawValue;
frost$core$Int64 $tmp2479 = *$tmp2478;
frost$core$Int64 $tmp2480 = (frost$core$Int64) {0};
frost$core$Bit $tmp2481 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2480);
bool $tmp2482 = $tmp2481.value;
if ($tmp2482) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp2483 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2484 = *$tmp2483;
*(&local0) = $tmp2484;
frost$core$String** $tmp2485 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2486 = *$tmp2485;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2486));
frost$core$String* $tmp2487 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2487));
*(&local1) = $tmp2486;
frost$core$String** $tmp2488 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2489 = *$tmp2488;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2489));
frost$core$String* $tmp2490 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2490));
*(&local2) = $tmp2489;
org$frostlang$frostc$ASTNode** $tmp2491 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2492 = *$tmp2491;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2492));
org$frostlang$frostc$ASTNode* $tmp2493 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
*(&local3) = $tmp2492;
// line 1
frost$core$String* $tmp2494 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2494));
// line 1
frost$core$String* $tmp2495 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
// line 1
org$frostlang$frostc$ASTNode* $tmp2496 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
org$frostlang$frostc$ASTNode* $tmp2497 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
// unreffing _f3
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2498 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
// unreffing _f2
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2499 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
// unreffing _f1
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp2500 = (frost$core$Int64) {1};
frost$core$Bit $tmp2501 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2500);
bool $tmp2502 = $tmp2501.value;
if ($tmp2502) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp2503 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2504 = *$tmp2503;
*(&local4) = $tmp2504;
org$frostlang$frostc$FixedArray** $tmp2505 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2506 = *$tmp2505;
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2506));
org$frostlang$frostc$FixedArray* $tmp2507 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2507));
*(&local5) = $tmp2506;
// line 1
org$frostlang$frostc$FixedArray* $tmp2508 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
org$frostlang$frostc$FixedArray* $tmp2509 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
// unreffing _f1
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp2510 = (frost$core$Int64) {2};
frost$core$Bit $tmp2511 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2510);
bool $tmp2512 = $tmp2511.value;
if ($tmp2512) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp2513 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2514 = *$tmp2513;
*(&local6) = $tmp2514;
org$frostlang$frostc$ASTNode** $tmp2515 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2516 = *$tmp2515;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2516));
org$frostlang$frostc$ASTNode* $tmp2517 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
*(&local7) = $tmp2516;
org$frostlang$frostc$ASTNode** $tmp2518 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2519 = *$tmp2518;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
org$frostlang$frostc$ASTNode* $tmp2520 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2520));
*(&local8) = $tmp2519;
// line 1
org$frostlang$frostc$ASTNode* $tmp2521 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2521));
// line 1
org$frostlang$frostc$ASTNode* $tmp2522 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2522));
org$frostlang$frostc$ASTNode* $tmp2523 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
// unreffing _f2
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2524 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
// unreffing _f1
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp2525 = (frost$core$Int64) {3};
frost$core$Bit $tmp2526 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2525);
bool $tmp2527 = $tmp2526.value;
if ($tmp2527) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp2528 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2529 = *$tmp2528;
*(&local9) = $tmp2529;
org$frostlang$frostc$ASTNode** $tmp2530 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2531 = *$tmp2530;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
org$frostlang$frostc$ASTNode* $tmp2532 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2532));
*(&local10) = $tmp2531;
// line 1
org$frostlang$frostc$ASTNode* $tmp2533 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
org$frostlang$frostc$ASTNode* $tmp2534 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
// unreffing _f1
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp2535 = (frost$core$Int64) {4};
frost$core$Bit $tmp2536 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2535);
bool $tmp2537 = $tmp2536.value;
if ($tmp2537) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp2538 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2539 = *$tmp2538;
*(&local11) = $tmp2539;
goto block1;
block11:;
frost$core$Int64 $tmp2540 = (frost$core$Int64) {5};
frost$core$Bit $tmp2541 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2540);
bool $tmp2542 = $tmp2541.value;
if ($tmp2542) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp2543 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2544 = *$tmp2543;
*(&local12) = $tmp2544;
org$frostlang$frostc$ASTNode** $tmp2545 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2546 = *$tmp2545;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2546));
org$frostlang$frostc$ASTNode* $tmp2547 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2547));
*(&local13) = $tmp2546;
org$frostlang$frostc$expression$Binary$Operator* $tmp2548 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp2549 = *$tmp2548;
*(&local14) = $tmp2549;
org$frostlang$frostc$ASTNode** $tmp2550 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2551 = *$tmp2550;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2551));
org$frostlang$frostc$ASTNode* $tmp2552 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2552));
*(&local15) = $tmp2551;
// line 1
org$frostlang$frostc$ASTNode* $tmp2553 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2553));
// line 1
org$frostlang$frostc$ASTNode* $tmp2554 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2554));
org$frostlang$frostc$ASTNode* $tmp2555 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2555));
// unreffing _f3
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2556 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2556));
// unreffing _f1
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp2557 = (frost$core$Int64) {6};
frost$core$Bit $tmp2558 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2557);
bool $tmp2559 = $tmp2558.value;
if ($tmp2559) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp2560 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2561 = *$tmp2560;
*(&local16) = $tmp2561;
frost$core$Bit* $tmp2562 = (frost$core$Bit*) (param0->$data + 16);
frost$core$Bit $tmp2563 = *$tmp2562;
*(&local17) = $tmp2563;
goto block1;
block15:;
frost$core$Int64 $tmp2564 = (frost$core$Int64) {7};
frost$core$Bit $tmp2565 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2564);
bool $tmp2566 = $tmp2565.value;
if ($tmp2566) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp2567 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2568 = *$tmp2567;
*(&local18) = $tmp2568;
org$frostlang$frostc$FixedArray** $tmp2569 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2570 = *$tmp2569;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2570));
org$frostlang$frostc$FixedArray* $tmp2571 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2571));
*(&local19) = $tmp2570;
// line 1
org$frostlang$frostc$FixedArray* $tmp2572 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2572));
org$frostlang$frostc$FixedArray* $tmp2573 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2573));
// unreffing _f1
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block17:;
frost$core$Int64 $tmp2574 = (frost$core$Int64) {8};
frost$core$Bit $tmp2575 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2574);
bool $tmp2576 = $tmp2575.value;
if ($tmp2576) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp2577 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2578 = *$tmp2577;
*(&local20) = $tmp2578;
frost$core$String** $tmp2579 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2580 = *$tmp2579;
*(&local21) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
frost$core$String* $tmp2581 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
*(&local21) = $tmp2580;
// line 1
frost$core$String* $tmp2582 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2582));
frost$core$String* $tmp2583 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2583));
// unreffing _f1
*(&local21) = ((frost$core$String*) NULL);
goto block1;
block19:;
frost$core$Int64 $tmp2584 = (frost$core$Int64) {9};
frost$core$Bit $tmp2585 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2584);
bool $tmp2586 = $tmp2585.value;
if ($tmp2586) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp2587 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2588 = *$tmp2587;
*(&local22) = $tmp2588;
org$frostlang$frostc$ASTNode** $tmp2589 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2590 = *$tmp2589;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
org$frostlang$frostc$ASTNode* $tmp2591 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2591));
*(&local23) = $tmp2590;
org$frostlang$frostc$FixedArray** $tmp2592 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2593 = *$tmp2592;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2593));
org$frostlang$frostc$FixedArray* $tmp2594 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2594));
*(&local24) = $tmp2593;
// line 1
org$frostlang$frostc$ASTNode* $tmp2595 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
// line 1
org$frostlang$frostc$FixedArray* $tmp2596 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
org$frostlang$frostc$FixedArray* $tmp2597 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2597));
// unreffing _f2
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2598 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2598));
// unreffing _f1
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block21:;
frost$core$Int64 $tmp2599 = (frost$core$Int64) {10};
frost$core$Bit $tmp2600 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2599);
bool $tmp2601 = $tmp2600.value;
if ($tmp2601) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp2602 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2603 = *$tmp2602;
*(&local25) = $tmp2603;
org$frostlang$frostc$ASTNode** $tmp2604 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2605 = *$tmp2604;
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2605));
org$frostlang$frostc$ASTNode* $tmp2606 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2606));
*(&local26) = $tmp2605;
frost$core$String** $tmp2607 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2608 = *$tmp2607;
*(&local27) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2608));
frost$core$String* $tmp2609 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2609));
*(&local27) = $tmp2608;
org$frostlang$frostc$FixedArray** $tmp2610 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2611 = *$tmp2610;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2611));
org$frostlang$frostc$FixedArray* $tmp2612 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2612));
*(&local28) = $tmp2611;
// line 1
org$frostlang$frostc$ASTNode* $tmp2613 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2613));
// line 1
frost$core$String* $tmp2614 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2614));
// line 1
org$frostlang$frostc$FixedArray* $tmp2615 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
org$frostlang$frostc$FixedArray* $tmp2616 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2616));
// unreffing _f3
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2617 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2617));
// unreffing _f2
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2618 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2618));
// unreffing _f1
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block23:;
frost$core$Int64 $tmp2619 = (frost$core$Int64) {11};
frost$core$Bit $tmp2620 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2619);
bool $tmp2621 = $tmp2620.value;
if ($tmp2621) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp2622 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2623 = *$tmp2622;
*(&local29) = $tmp2623;
org$frostlang$frostc$ASTNode** $tmp2624 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2625 = *$tmp2624;
*(&local30) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2625));
org$frostlang$frostc$ASTNode* $tmp2626 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
*(&local30) = $tmp2625;
org$frostlang$frostc$ChoiceCase** $tmp2627 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp2628 = *$tmp2627;
*(&local31) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
org$frostlang$frostc$ChoiceCase* $tmp2629 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
*(&local31) = $tmp2628;
frost$core$Int64* $tmp2630 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp2631 = *$tmp2630;
*(&local32) = $tmp2631;
// line 1
org$frostlang$frostc$ASTNode* $tmp2632 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2632));
// line 1
org$frostlang$frostc$ChoiceCase* $tmp2633 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2633));
org$frostlang$frostc$ChoiceCase* $tmp2634 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2634));
// unreffing _f2
*(&local31) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp2635 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2635));
// unreffing _f1
*(&local30) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block25:;
frost$core$Int64 $tmp2636 = (frost$core$Int64) {12};
frost$core$Bit $tmp2637 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2636);
bool $tmp2638 = $tmp2637.value;
if ($tmp2638) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp2639 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2640 = *$tmp2639;
*(&local33) = $tmp2640;
org$frostlang$frostc$ASTNode** $tmp2641 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2642 = *$tmp2641;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2642));
org$frostlang$frostc$ASTNode* $tmp2643 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2643));
*(&local34) = $tmp2642;
org$frostlang$frostc$FixedArray** $tmp2644 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2645 = *$tmp2644;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2645));
org$frostlang$frostc$FixedArray* $tmp2646 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
*(&local35) = $tmp2645;
org$frostlang$frostc$ClassDecl$Kind* $tmp2647 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp2648 = *$tmp2647;
*(&local36) = $tmp2648;
frost$core$String** $tmp2649 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp2650 = *$tmp2649;
*(&local37) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
frost$core$String* $tmp2651 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2651));
*(&local37) = $tmp2650;
org$frostlang$frostc$FixedArray** $tmp2652 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2653 = *$tmp2652;
*(&local38) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2653));
org$frostlang$frostc$FixedArray* $tmp2654 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
*(&local38) = $tmp2653;
org$frostlang$frostc$FixedArray** $tmp2655 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2656 = *$tmp2655;
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
org$frostlang$frostc$FixedArray* $tmp2657 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
*(&local39) = $tmp2656;
org$frostlang$frostc$FixedArray** $tmp2658 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2659 = *$tmp2658;
*(&local40) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
org$frostlang$frostc$FixedArray* $tmp2660 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
*(&local40) = $tmp2659;
// line 1
org$frostlang$frostc$ASTNode* $tmp2661 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
// line 1
org$frostlang$frostc$FixedArray* $tmp2662 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2662));
// line 1
frost$core$String* $tmp2663 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2663));
// line 1
org$frostlang$frostc$FixedArray* $tmp2664 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
// line 1
org$frostlang$frostc$FixedArray* $tmp2665 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2665));
// line 1
org$frostlang$frostc$FixedArray* $tmp2666 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2666));
org$frostlang$frostc$FixedArray* $tmp2667 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2667));
// unreffing _f7
*(&local40) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2668 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2668));
// unreffing _f6
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2669 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2669));
// unreffing _f5
*(&local38) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2670 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2670));
// unreffing _f4
*(&local37) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2671 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
// unreffing _f2
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2672 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2672));
// unreffing _f1
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block27:;
frost$core$Int64 $tmp2673 = (frost$core$Int64) {13};
frost$core$Bit $tmp2674 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2673);
bool $tmp2675 = $tmp2674.value;
if ($tmp2675) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp2676 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2677 = *$tmp2676;
*(&local41) = $tmp2677;
frost$core$String** $tmp2678 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2679 = *$tmp2678;
*(&local42) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
frost$core$String* $tmp2680 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2680));
*(&local42) = $tmp2679;
// line 1
frost$core$String* $tmp2681 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2681));
frost$core$String* $tmp2682 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
// unreffing _f1
*(&local42) = ((frost$core$String*) NULL);
goto block1;
block29:;
frost$core$Int64 $tmp2683 = (frost$core$Int64) {14};
frost$core$Bit $tmp2684 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2683);
bool $tmp2685 = $tmp2684.value;
if ($tmp2685) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp2686 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2687 = *$tmp2686;
*(&local43) = $tmp2687;
org$frostlang$frostc$ASTNode** $tmp2688 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2689 = *$tmp2688;
*(&local44) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2689));
org$frostlang$frostc$ASTNode* $tmp2690 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2690));
*(&local44) = $tmp2689;
org$frostlang$frostc$ASTNode** $tmp2691 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2692 = *$tmp2691;
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2692));
org$frostlang$frostc$ASTNode* $tmp2693 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2693));
*(&local45) = $tmp2692;
// line 1
org$frostlang$frostc$ASTNode* $tmp2694 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
// line 1
org$frostlang$frostc$ASTNode* $tmp2695 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2695));
org$frostlang$frostc$ASTNode* $tmp2696 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
// unreffing _f2
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2697 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
// unreffing _f1
*(&local44) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block31:;
frost$core$Int64 $tmp2698 = (frost$core$Int64) {15};
frost$core$Bit $tmp2699 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2698);
bool $tmp2700 = $tmp2699.value;
if ($tmp2700) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp2701 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2702 = *$tmp2701;
*(&local46) = $tmp2702;
frost$core$String** $tmp2703 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2704 = *$tmp2703;
*(&local47) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
frost$core$String* $tmp2705 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
*(&local47) = $tmp2704;
org$frostlang$frostc$FixedArray** $tmp2706 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2707 = *$tmp2706;
*(&local48) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
org$frostlang$frostc$FixedArray* $tmp2708 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2708));
*(&local48) = $tmp2707;
org$frostlang$frostc$ASTNode** $tmp2709 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2710 = *$tmp2709;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
org$frostlang$frostc$ASTNode* $tmp2711 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2711));
*(&local49) = $tmp2710;
// line 1
frost$core$String* $tmp2712 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2712));
// line 1
org$frostlang$frostc$FixedArray* $tmp2713 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2713));
// line 1
org$frostlang$frostc$ASTNode* $tmp2714 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2714));
org$frostlang$frostc$ASTNode* $tmp2715 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2715));
// unreffing _f3
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2716 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
// unreffing _f2
*(&local48) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2717 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
// unreffing _f1
*(&local47) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Int64 $tmp2718 = (frost$core$Int64) {16};
frost$core$Bit $tmp2719 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2718);
bool $tmp2720 = $tmp2719.value;
if ($tmp2720) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp2721 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2722 = *$tmp2721;
*(&local50) = $tmp2722;
org$frostlang$frostc$ASTNode** $tmp2723 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2724 = *$tmp2723;
*(&local51) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
org$frostlang$frostc$ASTNode* $tmp2725 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
*(&local51) = $tmp2724;
frost$core$String** $tmp2726 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2727 = *$tmp2726;
*(&local52) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
frost$core$String* $tmp2728 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2728));
*(&local52) = $tmp2727;
// line 1
org$frostlang$frostc$ASTNode* $tmp2729 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
// line 1
frost$core$String* $tmp2730 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
frost$core$String* $tmp2731 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
// unreffing _f2
*(&local52) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2732 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2732));
// unreffing _f1
*(&local51) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block35:;
frost$core$Int64 $tmp2733 = (frost$core$Int64) {17};
frost$core$Bit $tmp2734 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2733);
bool $tmp2735 = $tmp2734.value;
if ($tmp2735) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp2736 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2737 = *$tmp2736;
*(&local53) = $tmp2737;
org$frostlang$frostc$ASTNode** $tmp2738 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2739 = *$tmp2738;
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2739));
org$frostlang$frostc$ASTNode* $tmp2740 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2740));
*(&local54) = $tmp2739;
frost$core$String** $tmp2741 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2742 = *$tmp2741;
*(&local55) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
frost$core$String* $tmp2743 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2743));
*(&local55) = $tmp2742;
org$frostlang$frostc$FixedArray** $tmp2744 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2745 = *$tmp2744;
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
org$frostlang$frostc$FixedArray* $tmp2746 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2746));
*(&local56) = $tmp2745;
// line 1
org$frostlang$frostc$ASTNode* $tmp2747 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2747));
// line 1
frost$core$String* $tmp2748 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2748));
// line 1
org$frostlang$frostc$FixedArray* $tmp2749 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2749));
org$frostlang$frostc$FixedArray* $tmp2750 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2750));
// unreffing _f3
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2751 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2751));
// unreffing _f2
*(&local55) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2752 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2752));
// unreffing _f1
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block37:;
frost$core$Int64 $tmp2753 = (frost$core$Int64) {18};
frost$core$Bit $tmp2754 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2753);
bool $tmp2755 = $tmp2754.value;
if ($tmp2755) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp2756 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2757 = *$tmp2756;
*(&local57) = $tmp2757;
org$frostlang$frostc$ASTNode** $tmp2758 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2759 = *$tmp2758;
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2759));
org$frostlang$frostc$ASTNode* $tmp2760 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
*(&local58) = $tmp2759;
org$frostlang$frostc$FixedArray** $tmp2761 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2762 = *$tmp2761;
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2762));
org$frostlang$frostc$FixedArray* $tmp2763 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2763));
*(&local59) = $tmp2762;
org$frostlang$frostc$ASTNode** $tmp2764 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2765 = *$tmp2764;
*(&local60) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2765));
org$frostlang$frostc$ASTNode* $tmp2766 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2766));
*(&local60) = $tmp2765;
// line 1
org$frostlang$frostc$ASTNode* $tmp2767 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2767));
// line 1
org$frostlang$frostc$FixedArray* $tmp2768 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2768));
// line 1
org$frostlang$frostc$ASTNode* $tmp2769 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2769));
org$frostlang$frostc$ASTNode* $tmp2770 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2770));
// unreffing _f3
*(&local60) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2771 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
// unreffing _f2
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2772 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2772));
// unreffing _f1
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block39:;
frost$core$Int64 $tmp2773 = (frost$core$Int64) {19};
frost$core$Bit $tmp2774 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2773);
bool $tmp2775 = $tmp2774.value;
if ($tmp2775) goto block40; else goto block41;
block40:;
org$frostlang$frostc$FixedArray** $tmp2776 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp2777 = *$tmp2776;
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2777));
org$frostlang$frostc$FixedArray* $tmp2778 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2778));
*(&local61) = $tmp2777;
// line 1
org$frostlang$frostc$FixedArray* $tmp2779 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
org$frostlang$frostc$FixedArray* $tmp2780 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
// unreffing _f0
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block41:;
frost$core$Int64 $tmp2781 = (frost$core$Int64) {20};
frost$core$Bit $tmp2782 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2781);
bool $tmp2783 = $tmp2782.value;
if ($tmp2783) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp2784 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2785 = *$tmp2784;
*(&local62) = $tmp2785;
frost$core$String** $tmp2786 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2787 = *$tmp2786;
*(&local63) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2787));
frost$core$String* $tmp2788 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2788));
*(&local63) = $tmp2787;
org$frostlang$frostc$ASTNode** $tmp2789 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2790 = *$tmp2789;
*(&local64) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
org$frostlang$frostc$ASTNode* $tmp2791 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
*(&local64) = $tmp2790;
org$frostlang$frostc$ASTNode** $tmp2792 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2793 = *$tmp2792;
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2793));
org$frostlang$frostc$ASTNode* $tmp2794 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2794));
*(&local65) = $tmp2793;
org$frostlang$frostc$FixedArray** $tmp2795 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp2796 = *$tmp2795;
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
org$frostlang$frostc$FixedArray* $tmp2797 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
*(&local66) = $tmp2796;
// line 1
frost$core$String* $tmp2798 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2798));
// line 1
org$frostlang$frostc$ASTNode* $tmp2799 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2799));
// line 1
org$frostlang$frostc$ASTNode* $tmp2800 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2800));
// line 1
org$frostlang$frostc$FixedArray* $tmp2801 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2801));
org$frostlang$frostc$FixedArray* $tmp2802 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2802));
// unreffing _f4
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2803 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2803));
// unreffing _f3
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2804 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2804));
// unreffing _f2
*(&local64) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2805 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
// unreffing _f1
*(&local63) = ((frost$core$String*) NULL);
goto block1;
block43:;
frost$core$Int64 $tmp2806 = (frost$core$Int64) {21};
frost$core$Bit $tmp2807 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2806);
bool $tmp2808 = $tmp2807.value;
if ($tmp2808) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp2809 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2810 = *$tmp2809;
*(&local67) = $tmp2810;
frost$core$String** $tmp2811 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2812 = *$tmp2811;
*(&local68) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
frost$core$String* $tmp2813 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
*(&local68) = $tmp2812;
org$frostlang$frostc$FixedArray** $tmp2814 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2815 = *$tmp2814;
*(&local69) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2815));
org$frostlang$frostc$FixedArray* $tmp2816 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2816));
*(&local69) = $tmp2815;
// line 1
frost$core$String* $tmp2817 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2817));
// line 1
org$frostlang$frostc$FixedArray* $tmp2818 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2818));
org$frostlang$frostc$FixedArray* $tmp2819 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2819));
// unreffing _f2
*(&local69) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2820 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2820));
// unreffing _f1
*(&local68) = ((frost$core$String*) NULL);
goto block1;
block45:;
frost$core$Int64 $tmp2821 = (frost$core$Int64) {22};
frost$core$Bit $tmp2822 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2821);
bool $tmp2823 = $tmp2822.value;
if ($tmp2823) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp2824 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2825 = *$tmp2824;
*(&local70) = $tmp2825;
frost$core$String** $tmp2826 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2827 = *$tmp2826;
*(&local71) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
frost$core$String* $tmp2828 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
*(&local71) = $tmp2827;
// line 1
frost$core$String* $tmp2829 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
frost$core$String* $tmp2830 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
// unreffing _f1
*(&local71) = ((frost$core$String*) NULL);
goto block1;
block47:;
frost$core$Int64 $tmp2831 = (frost$core$Int64) {23};
frost$core$Bit $tmp2832 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2831);
bool $tmp2833 = $tmp2832.value;
if ($tmp2833) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp2834 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2835 = *$tmp2834;
*(&local72) = $tmp2835;
frost$core$String** $tmp2836 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2837 = *$tmp2836;
*(&local73) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2837));
frost$core$String* $tmp2838 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2838));
*(&local73) = $tmp2837;
org$frostlang$frostc$FixedArray** $tmp2839 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2840 = *$tmp2839;
*(&local74) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2840));
org$frostlang$frostc$FixedArray* $tmp2841 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
*(&local74) = $tmp2840;
// line 1
frost$core$String* $tmp2842 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
// line 1
org$frostlang$frostc$FixedArray* $tmp2843 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2843));
org$frostlang$frostc$FixedArray* $tmp2844 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2844));
// unreffing _f2
*(&local74) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2845 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2845));
// unreffing _f1
*(&local73) = ((frost$core$String*) NULL);
goto block1;
block49:;
frost$core$Int64 $tmp2846 = (frost$core$Int64) {24};
frost$core$Bit $tmp2847 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2846);
bool $tmp2848 = $tmp2847.value;
if ($tmp2848) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp2849 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2850 = *$tmp2849;
*(&local75) = $tmp2850;
org$frostlang$frostc$ASTNode** $tmp2851 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2852 = *$tmp2851;
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2852));
org$frostlang$frostc$ASTNode* $tmp2853 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2853));
*(&local76) = $tmp2852;
org$frostlang$frostc$FixedArray** $tmp2854 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2855 = *$tmp2854;
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
org$frostlang$frostc$FixedArray* $tmp2856 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
*(&local77) = $tmp2855;
org$frostlang$frostc$ASTNode** $tmp2857 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2858 = *$tmp2857;
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2858));
org$frostlang$frostc$ASTNode* $tmp2859 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
*(&local78) = $tmp2858;
// line 1
org$frostlang$frostc$ASTNode* $tmp2860 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2860));
// line 1
org$frostlang$frostc$FixedArray* $tmp2861 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2861));
// line 1
org$frostlang$frostc$ASTNode* $tmp2862 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2862));
org$frostlang$frostc$ASTNode* $tmp2863 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2863));
// unreffing _f3
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2864 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2864));
// unreffing _f2
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2865 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
// unreffing _f1
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block51:;
frost$core$Int64 $tmp2866 = (frost$core$Int64) {25};
frost$core$Bit $tmp2867 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2866);
bool $tmp2868 = $tmp2867.value;
if ($tmp2868) goto block52; else goto block53;
block52:;
org$frostlang$frostc$Position* $tmp2869 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2870 = *$tmp2869;
*(&local79) = $tmp2870;
frost$core$UInt64* $tmp2871 = (frost$core$UInt64*) (param0->$data + 16);
frost$core$UInt64 $tmp2872 = *$tmp2871;
*(&local80) = $tmp2872;
goto block1;
block53:;
frost$core$Int64 $tmp2873 = (frost$core$Int64) {26};
frost$core$Bit $tmp2874 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2873);
bool $tmp2875 = $tmp2874.value;
if ($tmp2875) goto block54; else goto block55;
block54:;
org$frostlang$frostc$Position* $tmp2876 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2877 = *$tmp2876;
*(&local81) = $tmp2877;
org$frostlang$frostc$IR$Value** $tmp2878 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp2879 = *$tmp2878;
*(&local82) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2879));
org$frostlang$frostc$IR$Value* $tmp2880 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2880));
*(&local82) = $tmp2879;
// line 1
org$frostlang$frostc$IR$Value* $tmp2881 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2881));
org$frostlang$frostc$IR$Value* $tmp2882 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
// unreffing _f1
*(&local82) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block55:;
frost$core$Int64 $tmp2883 = (frost$core$Int64) {27};
frost$core$Bit $tmp2884 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2883);
bool $tmp2885 = $tmp2884.value;
if ($tmp2885) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp2886 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2887 = *$tmp2886;
*(&local83) = $tmp2887;
frost$core$String** $tmp2888 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2889 = *$tmp2888;
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
frost$core$String* $tmp2890 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2890));
*(&local84) = $tmp2889;
org$frostlang$frostc$FixedArray** $tmp2891 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2892 = *$tmp2891;
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
org$frostlang$frostc$FixedArray* $tmp2893 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
*(&local85) = $tmp2892;
// line 1
frost$core$String* $tmp2894 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
// line 1
org$frostlang$frostc$FixedArray* $tmp2895 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2895));
org$frostlang$frostc$FixedArray* $tmp2896 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
// unreffing _f2
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2897 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
// unreffing _f1
*(&local84) = ((frost$core$String*) NULL);
goto block1;
block57:;
frost$core$Int64 $tmp2898 = (frost$core$Int64) {28};
frost$core$Bit $tmp2899 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2898);
bool $tmp2900 = $tmp2899.value;
if ($tmp2900) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp2901 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2902 = *$tmp2901;
*(&local86) = $tmp2902;
org$frostlang$frostc$ASTNode** $tmp2903 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2904 = *$tmp2903;
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2904));
org$frostlang$frostc$ASTNode* $tmp2905 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2905));
*(&local87) = $tmp2904;
org$frostlang$frostc$FixedArray** $tmp2906 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2907 = *$tmp2906;
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
org$frostlang$frostc$FixedArray* $tmp2908 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2908));
*(&local88) = $tmp2907;
org$frostlang$frostc$FixedArray** $tmp2909 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2910 = *$tmp2909;
*(&local89) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2910));
org$frostlang$frostc$FixedArray* $tmp2911 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
*(&local89) = $tmp2910;
// line 1
org$frostlang$frostc$ASTNode* $tmp2912 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
// line 1
org$frostlang$frostc$FixedArray* $tmp2913 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
// line 1
org$frostlang$frostc$FixedArray* $tmp2914 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
org$frostlang$frostc$FixedArray* $tmp2915 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
// unreffing _f3
*(&local89) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2916 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
// unreffing _f2
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2917 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2917));
// unreffing _f1
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block59:;
frost$core$Int64 $tmp2918 = (frost$core$Int64) {29};
frost$core$Bit $tmp2919 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2918);
bool $tmp2920 = $tmp2919.value;
if ($tmp2920) goto block60; else goto block61;
block60:;
org$frostlang$frostc$Position* $tmp2921 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2922 = *$tmp2921;
*(&local90) = $tmp2922;
org$frostlang$frostc$ASTNode** $tmp2923 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2924 = *$tmp2923;
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2924));
org$frostlang$frostc$ASTNode* $tmp2925 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
*(&local91) = $tmp2924;
org$frostlang$frostc$FixedArray** $tmp2926 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2927 = *$tmp2926;
*(&local92) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2927));
org$frostlang$frostc$FixedArray* $tmp2928 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2928));
*(&local92) = $tmp2927;
org$frostlang$frostc$MethodDecl$Kind* $tmp2929 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp2930 = *$tmp2929;
*(&local93) = $tmp2930;
frost$core$String** $tmp2931 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp2932 = *$tmp2931;
*(&local94) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2932));
frost$core$String* $tmp2933 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2933));
*(&local94) = $tmp2932;
org$frostlang$frostc$FixedArray** $tmp2934 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2935 = *$tmp2934;
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2935));
org$frostlang$frostc$FixedArray* $tmp2936 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2936));
*(&local95) = $tmp2935;
org$frostlang$frostc$FixedArray** $tmp2937 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2938 = *$tmp2937;
*(&local96) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2938));
org$frostlang$frostc$FixedArray* $tmp2939 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2939));
*(&local96) = $tmp2938;
org$frostlang$frostc$ASTNode** $tmp2940 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
org$frostlang$frostc$ASTNode* $tmp2941 = *$tmp2940;
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2941));
org$frostlang$frostc$ASTNode* $tmp2942 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2942));
*(&local97) = $tmp2941;
org$frostlang$frostc$FixedArray** $tmp2943 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2944 = *$tmp2943;
*(&local98) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
org$frostlang$frostc$FixedArray* $tmp2945 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
*(&local98) = $tmp2944;
// line 1
org$frostlang$frostc$ASTNode* $tmp2946 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2946));
// line 1
org$frostlang$frostc$FixedArray* $tmp2947 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
// line 1
frost$core$String* $tmp2948 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
// line 1
org$frostlang$frostc$FixedArray* $tmp2949 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
// line 1
org$frostlang$frostc$FixedArray* $tmp2950 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2950));
// line 1
org$frostlang$frostc$ASTNode* $tmp2951 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2951));
// line 1
org$frostlang$frostc$FixedArray* $tmp2952 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2952));
org$frostlang$frostc$FixedArray* $tmp2953 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2953));
// unreffing _f8
*(&local98) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2954 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
// unreffing _f7
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2955 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2955));
// unreffing _f6
*(&local96) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2956 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2956));
// unreffing _f5
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2957 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2957));
// unreffing _f4
*(&local94) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2958 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2958));
// unreffing _f2
*(&local92) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2959 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2959));
// unreffing _f1
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block61:;
frost$core$Int64 $tmp2960 = (frost$core$Int64) {30};
frost$core$Bit $tmp2961 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2960);
bool $tmp2962 = $tmp2961.value;
if ($tmp2962) goto block62; else goto block63;
block62:;
org$frostlang$frostc$Position* $tmp2963 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2964 = *$tmp2963;
*(&local99) = $tmp2964;
org$frostlang$frostc$parser$Token$Kind* $tmp2965 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp2966 = *$tmp2965;
*(&local100) = $tmp2966;
org$frostlang$frostc$FixedArray** $tmp2967 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2968 = *$tmp2967;
*(&local101) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
org$frostlang$frostc$FixedArray* $tmp2969 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
*(&local101) = $tmp2968;
org$frostlang$frostc$ASTNode** $tmp2970 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2971 = *$tmp2970;
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
org$frostlang$frostc$ASTNode* $tmp2972 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2972));
*(&local102) = $tmp2971;
// line 1
org$frostlang$frostc$FixedArray* $tmp2973 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2973));
// line 1
org$frostlang$frostc$ASTNode* $tmp2974 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2974));
org$frostlang$frostc$ASTNode* $tmp2975 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2975));
// unreffing _f3
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2976 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2976));
// unreffing _f2
*(&local101) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block63:;
frost$core$Int64 $tmp2977 = (frost$core$Int64) {31};
frost$core$Bit $tmp2978 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2977);
bool $tmp2979 = $tmp2978.value;
if ($tmp2979) goto block64; else goto block65;
block64:;
org$frostlang$frostc$Position* $tmp2980 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2981 = *$tmp2980;
*(&local103) = $tmp2981;
goto block1;
block65:;
frost$core$Int64 $tmp2982 = (frost$core$Int64) {32};
frost$core$Bit $tmp2983 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2982);
bool $tmp2984 = $tmp2983.value;
if ($tmp2984) goto block66; else goto block67;
block66:;
org$frostlang$frostc$Position* $tmp2985 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2986 = *$tmp2985;
*(&local104) = $tmp2986;
org$frostlang$frostc$ASTNode** $tmp2987 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2988 = *$tmp2987;
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2988));
org$frostlang$frostc$ASTNode* $tmp2989 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2989));
*(&local105) = $tmp2988;
// line 1
org$frostlang$frostc$ASTNode* $tmp2990 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2990));
org$frostlang$frostc$ASTNode* $tmp2991 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2991));
// unreffing _f1
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block67:;
frost$core$Int64 $tmp2992 = (frost$core$Int64) {33};
frost$core$Bit $tmp2993 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp2992);
bool $tmp2994 = $tmp2993.value;
if ($tmp2994) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Position* $tmp2995 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2996 = *$tmp2995;
*(&local106) = $tmp2996;
frost$core$String** $tmp2997 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2998 = *$tmp2997;
*(&local107) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2998));
frost$core$String* $tmp2999 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
*(&local107) = $tmp2998;
// line 1
frost$core$String* $tmp3000 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3000));
frost$core$String* $tmp3001 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3001));
// unreffing _f1
*(&local107) = ((frost$core$String*) NULL);
goto block1;
block69:;
frost$core$Int64 $tmp3002 = (frost$core$Int64) {34};
frost$core$Bit $tmp3003 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp3002);
bool $tmp3004 = $tmp3003.value;
if ($tmp3004) goto block70; else goto block71;
block70:;
org$frostlang$frostc$Position* $tmp3005 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3006 = *$tmp3005;
*(&local108) = $tmp3006;
frost$core$String** $tmp3007 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3008 = *$tmp3007;
*(&local109) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3008));
frost$core$String* $tmp3009 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3009));
*(&local109) = $tmp3008;
org$frostlang$frostc$ASTNode** $tmp3010 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3011 = *$tmp3010;
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3011));
org$frostlang$frostc$ASTNode* $tmp3012 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3012));
*(&local110) = $tmp3011;
// line 1
frost$core$String* $tmp3013 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
// line 1
org$frostlang$frostc$ASTNode* $tmp3014 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3014));
org$frostlang$frostc$ASTNode* $tmp3015 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
// unreffing _f2
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3016 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3016));
// unreffing _f1
*(&local109) = ((frost$core$String*) NULL);
goto block1;
block71:;
frost$core$Int64 $tmp3017 = (frost$core$Int64) {35};
frost$core$Bit $tmp3018 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp3017);
bool $tmp3019 = $tmp3018.value;
if ($tmp3019) goto block72; else goto block73;
block72:;
org$frostlang$frostc$Position* $tmp3020 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3021 = *$tmp3020;
*(&local111) = $tmp3021;
org$frostlang$frostc$ASTNode** $tmp3022 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3023 = *$tmp3022;
*(&local112) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3023));
org$frostlang$frostc$ASTNode* $tmp3024 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3024));
*(&local112) = $tmp3023;
frost$core$Bit* $tmp3025 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp3026 = *$tmp3025;
*(&local113) = $tmp3026;
org$frostlang$frostc$ASTNode** $tmp3027 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
org$frostlang$frostc$ASTNode* $tmp3028 = *$tmp3027;
*(&local114) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3028));
org$frostlang$frostc$ASTNode* $tmp3029 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3029));
*(&local114) = $tmp3028;
org$frostlang$frostc$ASTNode** $tmp3030 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp3031 = *$tmp3030;
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3031));
org$frostlang$frostc$ASTNode* $tmp3032 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3032));
*(&local115) = $tmp3031;
// line 1
org$frostlang$frostc$ASTNode* $tmp3033 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3033));
// line 1
org$frostlang$frostc$ASTNode* $tmp3034 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3034));
// line 1
org$frostlang$frostc$ASTNode* $tmp3035 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3035));
org$frostlang$frostc$ASTNode* $tmp3036 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3036));
// unreffing _f4
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3037 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3037));
// unreffing _f3
*(&local114) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3038 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3038));
// unreffing _f1
*(&local112) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block73:;
frost$core$Int64 $tmp3039 = (frost$core$Int64) {36};
frost$core$Bit $tmp3040 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp3039);
bool $tmp3041 = $tmp3040.value;
if ($tmp3041) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp3042 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3043 = *$tmp3042;
*(&local116) = $tmp3043;
frost$core$Real64* $tmp3044 = (frost$core$Real64*) (param0->$data + 16);
frost$core$Real64 $tmp3045 = *$tmp3044;
*(&local117) = $tmp3045;
goto block1;
block75:;
frost$core$Int64 $tmp3046 = (frost$core$Int64) {37};
frost$core$Bit $tmp3047 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp3046);
bool $tmp3048 = $tmp3047.value;
if ($tmp3048) goto block76; else goto block77;
block76:;
org$frostlang$frostc$Position* $tmp3049 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3050 = *$tmp3049;
*(&local118) = $tmp3050;
frost$core$String** $tmp3051 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3052 = *$tmp3051;
*(&local119) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3052));
frost$core$String* $tmp3053 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3053));
*(&local119) = $tmp3052;
// line 1
frost$core$String* $tmp3054 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3054));
frost$core$String* $tmp3055 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3055));
// unreffing _f1
*(&local119) = ((frost$core$String*) NULL);
goto block1;
block77:;
frost$core$Int64 $tmp3056 = (frost$core$Int64) {38};
frost$core$Bit $tmp3057 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp3056);
bool $tmp3058 = $tmp3057.value;
if ($tmp3058) goto block78; else goto block79;
block78:;
org$frostlang$frostc$Position* $tmp3059 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3060 = *$tmp3059;
*(&local120) = $tmp3060;
org$frostlang$frostc$ASTNode** $tmp3061 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3062 = *$tmp3061;
*(&local121) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3062));
org$frostlang$frostc$ASTNode* $tmp3063 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3063));
*(&local121) = $tmp3062;
// line 1
org$frostlang$frostc$ASTNode* $tmp3064 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3064));
org$frostlang$frostc$ASTNode* $tmp3065 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3065));
// unreffing _f1
*(&local121) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block79:;
frost$core$Int64 $tmp3066 = (frost$core$Int64) {39};
frost$core$Bit $tmp3067 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp3066);
bool $tmp3068 = $tmp3067.value;
if ($tmp3068) goto block80; else goto block81;
block80:;
org$frostlang$frostc$Position* $tmp3069 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3070 = *$tmp3069;
*(&local122) = $tmp3070;
goto block1;
block81:;
frost$core$Int64 $tmp3071 = (frost$core$Int64) {40};
frost$core$Bit $tmp3072 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp3071);
bool $tmp3073 = $tmp3072.value;
if ($tmp3073) goto block82; else goto block83;
block82:;
org$frostlang$frostc$Position* $tmp3074 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3075 = *$tmp3074;
*(&local123) = $tmp3075;
frost$core$String** $tmp3076 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3077 = *$tmp3076;
*(&local124) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3077));
frost$core$String* $tmp3078 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3078));
*(&local124) = $tmp3077;
// line 1
frost$core$String* $tmp3079 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3079));
frost$core$String* $tmp3080 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3080));
// unreffing _f1
*(&local124) = ((frost$core$String*) NULL);
goto block1;
block83:;
frost$core$Int64 $tmp3081 = (frost$core$Int64) {41};
frost$core$Bit $tmp3082 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp3081);
bool $tmp3083 = $tmp3082.value;
if ($tmp3083) goto block84; else goto block85;
block84:;
org$frostlang$frostc$Position* $tmp3084 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3085 = *$tmp3084;
*(&local125) = $tmp3085;
goto block1;
block85:;
frost$core$Int64 $tmp3086 = (frost$core$Int64) {42};
frost$core$Bit $tmp3087 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp3086);
bool $tmp3088 = $tmp3087.value;
if ($tmp3088) goto block86; else goto block87;
block86:;
org$frostlang$frostc$Position* $tmp3089 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3090 = *$tmp3089;
*(&local126) = $tmp3090;
org$frostlang$frostc$FixedArray** $tmp3091 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3092 = *$tmp3091;
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3092));
org$frostlang$frostc$FixedArray* $tmp3093 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3093));
*(&local127) = $tmp3092;
org$frostlang$frostc$ASTNode** $tmp3094 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3095 = *$tmp3094;
*(&local128) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3095));
org$frostlang$frostc$ASTNode* $tmp3096 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3096));
*(&local128) = $tmp3095;
org$frostlang$frostc$FixedArray** $tmp3097 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3098 = *$tmp3097;
*(&local129) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3098));
org$frostlang$frostc$FixedArray* $tmp3099 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
*(&local129) = $tmp3098;
// line 1
org$frostlang$frostc$FixedArray* $tmp3100 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3100));
// line 1
org$frostlang$frostc$ASTNode* $tmp3101 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
// line 1
org$frostlang$frostc$FixedArray* $tmp3102 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3102));
org$frostlang$frostc$FixedArray* $tmp3103 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3103));
// unreffing _f3
*(&local129) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3104 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3104));
// unreffing _f2
*(&local128) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3105 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
// unreffing _f1
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block87:;
frost$core$Int64 $tmp3106 = (frost$core$Int64) {43};
frost$core$Bit $tmp3107 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp3106);
bool $tmp3108 = $tmp3107.value;
if ($tmp3108) goto block88; else goto block89;
block88:;
org$frostlang$frostc$Position* $tmp3109 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3110 = *$tmp3109;
*(&local130) = $tmp3110;
org$frostlang$frostc$FixedArray** $tmp3111 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3112 = *$tmp3111;
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3112));
org$frostlang$frostc$FixedArray* $tmp3113 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3113));
*(&local131) = $tmp3112;
// line 1
org$frostlang$frostc$FixedArray* $tmp3114 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3114));
org$frostlang$frostc$FixedArray* $tmp3115 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3115));
// unreffing _f1
*(&local131) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block89:;
frost$core$Int64 $tmp3116 = (frost$core$Int64) {44};
frost$core$Bit $tmp3117 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp3116);
bool $tmp3118 = $tmp3117.value;
if ($tmp3118) goto block90; else goto block91;
block90:;
org$frostlang$frostc$Position* $tmp3119 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3120 = *$tmp3119;
*(&local132) = $tmp3120;
org$frostlang$frostc$FixedArray** $tmp3121 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3122 = *$tmp3121;
*(&local133) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3122));
org$frostlang$frostc$FixedArray* $tmp3123 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3123));
*(&local133) = $tmp3122;
// line 1
org$frostlang$frostc$FixedArray* $tmp3124 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3124));
org$frostlang$frostc$FixedArray* $tmp3125 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
// unreffing _f1
*(&local133) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block91:;
frost$core$Int64 $tmp3126 = (frost$core$Int64) {45};
frost$core$Bit $tmp3127 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp3126);
bool $tmp3128 = $tmp3127.value;
if ($tmp3128) goto block92; else goto block93;
block92:;
org$frostlang$frostc$Position* $tmp3129 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3130 = *$tmp3129;
*(&local134) = $tmp3130;
frost$core$String** $tmp3131 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3132 = *$tmp3131;
*(&local135) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3132));
frost$core$String* $tmp3133 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3133));
*(&local135) = $tmp3132;
// line 1
frost$core$String* $tmp3134 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3134));
frost$core$String* $tmp3135 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3135));
// unreffing _f1
*(&local135) = ((frost$core$String*) NULL);
goto block1;
block93:;
frost$core$Int64 $tmp3136 = (frost$core$Int64) {46};
frost$core$Bit $tmp3137 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp3136);
bool $tmp3138 = $tmp3137.value;
if ($tmp3138) goto block94; else goto block95;
block94:;
org$frostlang$frostc$Position* $tmp3139 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3140 = *$tmp3139;
*(&local136) = $tmp3140;
org$frostlang$frostc$FixedArray** $tmp3141 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3142 = *$tmp3141;
*(&local137) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3142));
org$frostlang$frostc$FixedArray* $tmp3143 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3143));
*(&local137) = $tmp3142;
org$frostlang$frostc$ASTNode** $tmp3144 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3145 = *$tmp3144;
*(&local138) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3145));
org$frostlang$frostc$ASTNode* $tmp3146 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3146));
*(&local138) = $tmp3145;
// line 1
org$frostlang$frostc$FixedArray* $tmp3147 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3147));
// line 1
org$frostlang$frostc$ASTNode* $tmp3148 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3148));
org$frostlang$frostc$ASTNode* $tmp3149 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3149));
// unreffing _f2
*(&local138) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3150 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3150));
// unreffing _f1
*(&local137) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block95:;
frost$core$Int64 $tmp3151 = (frost$core$Int64) {47};
frost$core$Bit $tmp3152 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp3151);
bool $tmp3153 = $tmp3152.value;
if ($tmp3153) goto block96; else goto block97;
block96:;
org$frostlang$frostc$Position* $tmp3154 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3155 = *$tmp3154;
*(&local139) = $tmp3155;
frost$core$String** $tmp3156 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3157 = *$tmp3156;
*(&local140) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3157));
frost$core$String* $tmp3158 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3158));
*(&local140) = $tmp3157;
org$frostlang$frostc$ASTNode** $tmp3159 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3160 = *$tmp3159;
*(&local141) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3160));
org$frostlang$frostc$ASTNode* $tmp3161 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3161));
*(&local141) = $tmp3160;
// line 1
frost$core$String* $tmp3162 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3162));
// line 1
org$frostlang$frostc$ASTNode* $tmp3163 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3163));
org$frostlang$frostc$ASTNode* $tmp3164 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3164));
// unreffing _f2
*(&local141) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3165 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3165));
// unreffing _f1
*(&local140) = ((frost$core$String*) NULL);
goto block1;
block97:;
frost$core$Int64 $tmp3166 = (frost$core$Int64) {48};
frost$core$Bit $tmp3167 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp3166);
bool $tmp3168 = $tmp3167.value;
if ($tmp3168) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp3169 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3170 = *$tmp3169;
*(&local142) = $tmp3170;
org$frostlang$frostc$expression$Unary$Operator* $tmp3171 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 16);
org$frostlang$frostc$expression$Unary$Operator $tmp3172 = *$tmp3171;
*(&local143) = $tmp3172;
org$frostlang$frostc$ASTNode** $tmp3173 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3174 = *$tmp3173;
*(&local144) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3174));
org$frostlang$frostc$ASTNode* $tmp3175 = *(&local144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3175));
*(&local144) = $tmp3174;
// line 1
org$frostlang$frostc$ASTNode* $tmp3176 = *(&local144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3176));
org$frostlang$frostc$ASTNode* $tmp3177 = *(&local144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3177));
// unreffing _f2
*(&local144) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block99:;
frost$core$Int64 $tmp3178 = (frost$core$Int64) {49};
frost$core$Bit $tmp3179 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp3178);
bool $tmp3180 = $tmp3179.value;
if ($tmp3180) goto block100; else goto block101;
block100:;
org$frostlang$frostc$Position* $tmp3181 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3182 = *$tmp3181;
*(&local145) = $tmp3182;
org$frostlang$frostc$FixedArray** $tmp3183 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3184 = *$tmp3183;
*(&local146) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3184));
org$frostlang$frostc$FixedArray* $tmp3185 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
*(&local146) = $tmp3184;
org$frostlang$frostc$ASTNode** $tmp3186 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3187 = *$tmp3186;
*(&local147) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
org$frostlang$frostc$ASTNode* $tmp3188 = *(&local147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3188));
*(&local147) = $tmp3187;
// line 1
org$frostlang$frostc$FixedArray* $tmp3189 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
// line 1
org$frostlang$frostc$ASTNode* $tmp3190 = *(&local147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3190));
org$frostlang$frostc$ASTNode* $tmp3191 = *(&local147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
// unreffing _f2
*(&local147) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3192 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
// unreffing _f1
*(&local146) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block101:;
frost$core$Int64 $tmp3193 = (frost$core$Int64) {50};
frost$core$Bit $tmp3194 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp3193);
bool $tmp3195 = $tmp3194.value;
if ($tmp3195) goto block102; else goto block103;
block102:;
org$frostlang$frostc$Position* $tmp3196 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3197 = *$tmp3196;
*(&local148) = $tmp3197;
frost$core$String** $tmp3198 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3199 = *$tmp3198;
*(&local149) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3199));
frost$core$String* $tmp3200 = *(&local149);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3200));
*(&local149) = $tmp3199;
// line 1
frost$core$String* $tmp3201 = *(&local149);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
frost$core$String* $tmp3202 = *(&local149);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3202));
// unreffing _f1
*(&local149) = ((frost$core$String*) NULL);
goto block1;
block103:;
frost$core$Int64 $tmp3203 = (frost$core$Int64) {51};
frost$core$Bit $tmp3204 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp3203);
bool $tmp3205 = $tmp3204.value;
if ($tmp3205) goto block104; else goto block105;
block104:;
org$frostlang$frostc$Position* $tmp3206 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3207 = *$tmp3206;
*(&local150) = $tmp3207;
org$frostlang$frostc$Variable$Kind* $tmp3208 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp3209 = *$tmp3208;
*(&local151) = $tmp3209;
org$frostlang$frostc$FixedArray** $tmp3210 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3211 = *$tmp3210;
*(&local152) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3211));
org$frostlang$frostc$FixedArray* $tmp3212 = *(&local152);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3212));
*(&local152) = $tmp3211;
// line 1
org$frostlang$frostc$FixedArray* $tmp3213 = *(&local152);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3213));
org$frostlang$frostc$FixedArray* $tmp3214 = *(&local152);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
// unreffing _f2
*(&local152) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block105:;
frost$core$Int64 $tmp3215 = (frost$core$Int64) {52};
frost$core$Bit $tmp3216 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp3215);
bool $tmp3217 = $tmp3216.value;
if ($tmp3217) goto block106; else goto block107;
block106:;
org$frostlang$frostc$Position* $tmp3218 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3219 = *$tmp3218;
*(&local153) = $tmp3219;
org$frostlang$frostc$FixedArray** $tmp3220 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3221 = *$tmp3220;
*(&local154) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3221));
org$frostlang$frostc$FixedArray* $tmp3222 = *(&local154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3222));
*(&local154) = $tmp3221;
org$frostlang$frostc$FixedArray** $tmp3223 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3224 = *$tmp3223;
*(&local155) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3224));
org$frostlang$frostc$FixedArray* $tmp3225 = *(&local155);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3225));
*(&local155) = $tmp3224;
// line 1
org$frostlang$frostc$FixedArray* $tmp3226 = *(&local154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3226));
// line 1
org$frostlang$frostc$FixedArray* $tmp3227 = *(&local155);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3227));
org$frostlang$frostc$FixedArray* $tmp3228 = *(&local155);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3228));
// unreffing _f2
*(&local155) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3229 = *(&local154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3229));
// unreffing _f1
*(&local154) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block107:;
frost$core$Int64 $tmp3230 = (frost$core$Int64) {53};
frost$core$Bit $tmp3231 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2479, $tmp3230);
bool $tmp3232 = $tmp3231.value;
if ($tmp3232) goto block108; else goto block1;
block108:;
org$frostlang$frostc$Position* $tmp3233 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3234 = *$tmp3233;
*(&local156) = $tmp3234;
frost$core$String** $tmp3235 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3236 = *$tmp3235;
*(&local157) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3236));
frost$core$String* $tmp3237 = *(&local157);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3237));
*(&local157) = $tmp3236;
org$frostlang$frostc$ASTNode** $tmp3238 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3239 = *$tmp3238;
*(&local158) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3239));
org$frostlang$frostc$ASTNode* $tmp3240 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3240));
*(&local158) = $tmp3239;
org$frostlang$frostc$FixedArray** $tmp3241 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3242 = *$tmp3241;
*(&local159) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3242));
org$frostlang$frostc$FixedArray* $tmp3243 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3243));
*(&local159) = $tmp3242;
// line 1
frost$core$String* $tmp3244 = *(&local157);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3244));
// line 1
org$frostlang$frostc$ASTNode* $tmp3245 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3245));
// line 1
org$frostlang$frostc$FixedArray* $tmp3246 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3246));
org$frostlang$frostc$FixedArray* $tmp3247 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3247));
// unreffing _f3
*(&local159) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3248 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3248));
// unreffing _f2
*(&local158) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3249 = *(&local157);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3249));
// unreffing _f1
*(&local157) = ((frost$core$String*) NULL);
goto block1;
block1:;
// line 7
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, frost$core$String* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3250 = &param0->$rawValue;
*$tmp3250 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3251 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3251 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3252 = (frost$core$String**) (param0->$data + 16);
*$tmp3252 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3253 = (frost$core$String**) (param0->$data + 24);
*$tmp3253 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3254 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3254 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3) {

// line 7
frost$core$Int64* $tmp3255 = &param0->$rawValue;
*$tmp3255 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3256 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3256 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3257 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3257 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3258 = &param0->$rawValue;
*$tmp3258 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3259 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3259 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3260 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3260 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3261 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3261 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3) {

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
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2) {

// line 7
frost$core$Int64* $tmp3265 = &param0->$rawValue;
*$tmp3265 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3266 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3266 = param2;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$expression$Binary$Operator param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3267 = &param0->$rawValue;
*$tmp3267 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3268 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3268 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3269 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3269 = param3;
// line 7
org$frostlang$frostc$expression$Binary$Operator* $tmp3270 = (org$frostlang$frostc$expression$Binary$Operator*) (param0->$data + 24);
*$tmp3270 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3271 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3271 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$Bit param3) {

// line 7
frost$core$Int64* $tmp3272 = &param0->$rawValue;
*$tmp3272 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3273 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3273 = param2;
// line 7
frost$core$Bit* $tmp3274 = (frost$core$Bit*) (param0->$data + 16);
*$tmp3274 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// line 7
frost$core$Int64* $tmp3275 = &param0->$rawValue;
*$tmp3275 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3276 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3276 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3277 = (frost$core$String**) (param0->$data + 16);
*$tmp3277 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3278 = &param0->$rawValue;
*$tmp3278 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3279 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3279 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3280 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3280 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3281 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3281 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3282 = &param0->$rawValue;
*$tmp3282 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3283 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3283 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3284 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3284 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3285 = (frost$core$String**) (param0->$data + 24);
*$tmp3285 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3286 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3286 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ChoiceCase$frost$core$Int64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ChoiceCase* param4, frost$core$Int64 param5) {

// line 7
frost$core$Int64* $tmp3287 = &param0->$rawValue;
*$tmp3287 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3288 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3288 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3289 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3289 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ChoiceCase** $tmp3290 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
*$tmp3290 = param4;
// line 7
frost$core$Int64* $tmp3291 = (frost$core$Int64*) (param0->$data + 32);
*$tmp3291 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ClassDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$FixedArray* param9) {

// line 7
frost$core$Int64* $tmp3292 = &param0->$rawValue;
*$tmp3292 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3293 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3293 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3294 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3294 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3295 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3295 = param4;
// line 7
org$frostlang$frostc$ClassDecl$Kind* $tmp3296 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
*$tmp3296 = param5;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
frost$core$String** $tmp3297 = (frost$core$String**) (param0->$data + 40);
*$tmp3297 = param6;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$FixedArray** $tmp3298 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
*$tmp3298 = param7;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$FixedArray** $tmp3299 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
*$tmp3299 = param8;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$FixedArray** $tmp3300 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
*$tmp3300 = param9;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3301 = &param0->$rawValue;
*$tmp3301 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3302 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3302 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3303 = (frost$core$String**) (param0->$data + 16);
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
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4) {

// line 7
frost$core$Int64* $tmp3306 = &param0->$rawValue;
*$tmp3306 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3307 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3307 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3308 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3308 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3309 = (frost$core$String**) (param0->$data + 24);
*$tmp3309 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

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
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3313 = (frost$core$String**) (param0->$data + 24);
*$tmp3313 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3314 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3314 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3315 = &param0->$rawValue;
*$tmp3315 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3316 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3316 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3317 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3317 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3318 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3318 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3319 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3319 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$FixedArray* param2) {

// line 7
frost$core$Int64* $tmp3320 = &param0->$rawValue;
*$tmp3320 = param1;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$FixedArray** $tmp3321 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
*$tmp3321 = param2;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$FixedArray* param6) {

// line 7
frost$core$Int64* $tmp3322 = &param0->$rawValue;
*$tmp3322 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3323 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3323 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3324 = (frost$core$String**) (param0->$data + 16);
*$tmp3324 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3325 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3325 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3326 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3326 = param5;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$FixedArray** $tmp3327 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
*$tmp3327 = param6;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3328 = &param0->$rawValue;
*$tmp3328 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3329 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3329 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3330 = (frost$core$String**) (param0->$data + 16);
*$tmp3330 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3331 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3331 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

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
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3335 = &param0->$rawValue;
*$tmp3335 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3336 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3336 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3337 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3337 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3338 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3338 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3339 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3339 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$UInt64 param3) {

// line 7
frost$core$Int64* $tmp3340 = &param0->$rawValue;
*$tmp3340 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3341 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3341 = param2;
// line 7
frost$core$UInt64* $tmp3342 = (frost$core$UInt64*) (param0->$data + 16);
*$tmp3342 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3) {

// line 7
frost$core$Int64* $tmp3343 = &param0->$rawValue;
*$tmp3343 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3344 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3344 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp3345 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp3345 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3346 = &param0->$rawValue;
*$tmp3346 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3347 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3347 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3348 = (frost$core$String**) (param0->$data + 16);
*$tmp3348 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3349 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3349 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3350 = &param0->$rawValue;
*$tmp3350 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3351 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3351 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3352 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3352 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3353 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3353 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3354 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3354 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$MethodDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$ASTNode* param9, org$frostlang$frostc$FixedArray* param10) {

// line 7
frost$core$Int64* $tmp3355 = &param0->$rawValue;
*$tmp3355 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3356 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3356 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3357 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3357 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3358 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3358 = param4;
// line 7
org$frostlang$frostc$MethodDecl$Kind* $tmp3359 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
*$tmp3359 = param5;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
frost$core$String** $tmp3360 = (frost$core$String**) (param0->$data + 40);
*$tmp3360 = param6;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$FixedArray** $tmp3361 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
*$tmp3361 = param7;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$FixedArray** $tmp3362 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
*$tmp3362 = param8;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$ASTNode** $tmp3363 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
*$tmp3363 = param9;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param10));
org$frostlang$frostc$FixedArray** $tmp3364 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
*$tmp3364 = param10;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$parser$Token$Kind param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 7
frost$core$Int64* $tmp3365 = &param0->$rawValue;
*$tmp3365 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3366 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3366 = param2;
// line 7
org$frostlang$frostc$parser$Token$Kind* $tmp3367 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
*$tmp3367 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3368 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3368 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3369 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3369 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3370 = &param0->$rawValue;
*$tmp3370 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3371 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3371 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3372 = (frost$core$String**) (param0->$data + 16);
*$tmp3372 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3373 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3373 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$Bit$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$Bit param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$ASTNode* param6) {

// line 7
frost$core$Int64* $tmp3374 = &param0->$rawValue;
*$tmp3374 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3375 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3375 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3376 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3376 = param3;
// line 7
frost$core$Bit* $tmp3377 = (frost$core$Bit*) (param0->$data + 24);
*$tmp3377 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3378 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
*$tmp3378 = param5;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$ASTNode** $tmp3379 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
*$tmp3379 = param6;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Real64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$Real64 param3) {

// line 7
frost$core$Int64* $tmp3380 = &param0->$rawValue;
*$tmp3380 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3381 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3381 = param2;
// line 7
frost$core$Real64* $tmp3382 = (frost$core$Real64*) (param0->$data + 16);
*$tmp3382 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3) {

// line 7
frost$core$Int64* $tmp3383 = &param0->$rawValue;
*$tmp3383 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3384 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3384 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3385 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3385 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3386 = &param0->$rawValue;
*$tmp3386 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3387 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3387 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3388 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3388 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3389 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3389 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3390 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3390 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3391 = &param0->$rawValue;
*$tmp3391 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3392 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3392 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3393 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3393 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3394 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3394 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3395 = &param0->$rawValue;
*$tmp3395 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3396 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3396 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3397 = (frost$core$String**) (param0->$data + 16);
*$tmp3397 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3398 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3398 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$expression$Unary$Operator param3, org$frostlang$frostc$ASTNode* param4) {

// line 7
frost$core$Int64* $tmp3399 = &param0->$rawValue;
*$tmp3399 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3400 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3400 = param2;
// line 7
org$frostlang$frostc$expression$Unary$Operator* $tmp3401 = (org$frostlang$frostc$expression$Unary$Operator*) (param0->$data + 16);
*$tmp3401 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3402 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3402 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$Variable$Kind param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3403 = &param0->$rawValue;
*$tmp3403 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3404 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3404 = param2;
// line 7
org$frostlang$frostc$Variable$Kind* $tmp3405 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
*$tmp3405 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3406 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3406 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

// line 7
frost$core$Int64* $tmp3407 = &param0->$rawValue;
*$tmp3407 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3408 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3408 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3409 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3409 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3410 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3410 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$FixedArray* param5) {

// line 7
frost$core$Int64* $tmp3411 = &param0->$rawValue;
*$tmp3411 = param1;
// line 7
org$frostlang$frostc$Position* $tmp3412 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3412 = param2;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3413 = (frost$core$String**) (param0->$data + 16);
*$tmp3413 = param3;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3414 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3414 = param4;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3415 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3415 = param5;
return;

}






