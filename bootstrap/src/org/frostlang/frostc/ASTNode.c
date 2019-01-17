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
#include "frost/core/MutableMethod.h"


static frost$core$String $s1;
org$frostlang$frostc$ASTNode$class_type org$frostlang$frostc$ASTNode$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$ASTNode$convert$R$frost$core$String, org$frostlang$frostc$ASTNode$cleanup, org$frostlang$frostc$ASTNode$position$R$org$frostlang$frostc$Position} };

typedef frost$collections$Iterator* (*$fn706)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn710)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn715)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn767)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn774)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn822)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn848)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn905)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn909)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn914)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn953)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn971)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn982)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn986)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn991)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1051)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1068)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn1106)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1110)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1115)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1148)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1174)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1185)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1225)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1229)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1234)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1261)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1265)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1270)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1326)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1330)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1335)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1370)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1406)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1437)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1441)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1446)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1495)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn1529)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1533)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1538)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1577)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1581)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1586)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1659)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1663)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1668)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1705)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1715)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1748)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1752)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1757)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1819)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2068)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2086)(frost$collections$CollectionView*);
typedef void (*$fn2112)(frost$core$MutableString*, frost$core$Object*);
typedef void (*$fn2116)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef void (*$fn2135)(frost$core$MutableString*, frost$core$Object*);
typedef void (*$fn2139)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn2204)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2230)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2290)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2316)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2320)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2325)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2343)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2347)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2352)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2404)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2408)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2413)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 28, 5772502652536328142, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s547 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x6f\x73\x69\x74\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 103, -4613450259074448913, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s576 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s579 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s612 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static frost$core$String $s614 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s619 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static frost$core$String $s621 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s627 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s630 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s643 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static frost$core$String $s645 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s652 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static frost$core$String $s653 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static frost$core$String $s669 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s671 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s680 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s701 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static frost$core$String $s721 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s724 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s744 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s745 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s747 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static frost$core$String $s749 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s751 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static frost$core$String $s753 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static frost$core$String $s770 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s778 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s805 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s808 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s813 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s818 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s819 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, -5998790560547262156, NULL };
static frost$core$String $s826 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s851 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s855 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s898 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s899 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s901 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s920 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s928 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static frost$core$String $s933 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static frost$core$String $s938 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static frost$core$String $s949 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s950 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, -5998790560547262156, NULL };
static frost$core$String $s956 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s958 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s967 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s968 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, -5998790560547262156, NULL };
static frost$core$String $s974 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s976 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s978 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s997 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1000 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1025 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1026 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s1028 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static frost$core$String $s1030 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1032 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static frost$core$String $s1034 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static frost$core$String $s1054 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static frost$core$String $s1059 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1060 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1063 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1096 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1097 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s1100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static frost$core$String $s1121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1126 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static frost$core$String $s1128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1151 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1181 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1190 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1240 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1276 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1309 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1310 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s1312 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s1316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static frost$core$String $s1318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static frost$core$String $s1322 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1344 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1366 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1400 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52\x5f\x47\x45\x4e\x45\x52\x49\x43\x53\x28", 20, -4089576957169252493, NULL };
static frost$core$String $s1402 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1410 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x29", 2, 16504, NULL };
static frost$core$String $s1430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static frost$core$String $s1432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1452 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1464 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1465 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1467 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static frost$core$String $s1469 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1519 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1520 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s1523 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1525 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static frost$core$String $s1544 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1547 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1570 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static frost$core$String $s1572 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1592 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1602 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1603 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 117, 3362627311464111926, NULL };
static frost$core$String $s1605 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1607 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1652 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1653 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1655 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1674 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1682 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static frost$core$String $s1687 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static frost$core$String $s1701 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1702 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, -5998790560547262156, NULL };
static frost$core$String $s1708 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1710 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1718 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1720 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1729 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1730 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1732 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1734 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1739 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1744 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1745 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 8545549524367827092, NULL };
static frost$core$String $s1763 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1766 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1795 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s1797 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s1801 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s1803 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s1807 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s1809 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s1813 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s1815 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s1822 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1824 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1828 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1836 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1842 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1845 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1853 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x29", 2, 14282, NULL };
static frost$core$String $s1861 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s1862 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s1873 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s1899 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1903 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1919 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1923 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1951 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1952 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1956 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static frost$core$String $s1958 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s1967 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1968 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1977 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1978 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1980 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static frost$core$String $s2006 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2008 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2025 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2026 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s2028 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s2030 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2032 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static frost$core$String $s2034 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static frost$core$String $s2038 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s2039 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s2050 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s2055 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static frost$core$String $s2056 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static frost$core$String $s2071 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2073 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2089 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2091 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static frost$core$String $s2125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2126 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s2128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x0a\x66\x61\x69\x6c\x28", 7, 240019370222988, NULL };
static frost$core$String $s2130 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b\x0a", 4, 146641607, NULL };
static frost$core$String $s2132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x0a\x66\x61\x69\x6c\x20\x7b\x0a", 9, 2448437595644631413, NULL };
static frost$core$String $s2141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2181 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s2184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2207 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static frost$core$String $s2213 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2233 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2235 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static frost$core$String $s2239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2270 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static frost$core$String $s2275 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static frost$core$String $s2280 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static frost$core$String $s2285 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static frost$core$String $s2308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static frost$core$String $s2310 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2312 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2358 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s2390 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s2394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static frost$core$String $s2400 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s2419 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s2422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2436 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x41\x53\x54\x4e\x6f\x64\x65\x3a\x20", 21, -8877512154781713630, NULL };
static frost$core$String $s2438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2439 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2443 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2444 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 90, -6340975878994496307, NULL };

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
// line 92
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
// line 94
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
// line 97
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
// line 100
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
// line 103
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
// line 106
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
// line 109
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
// line 112
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
// line 115
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
// line 118
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
// line 121
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
// line 124
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
// line 127
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
// line 130
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
// line 133
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
// line 136
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
// line 139
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
// line 142
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
// line 145
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
// line 148
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
// line 151
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
// line 154
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
// line 157
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
// line 160
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
// line 163
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
// line 166
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
// line 169
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
// line 172
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
// line 175
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
// line 178
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
// line 181
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
// line 184
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
// line 187
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
// line 190
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
// line 193
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
// line 196
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
// line 199
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
// line 202
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
// line 205
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
// line 208
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
// line 211
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
// line 214
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
// line 217
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
// line 220
org$frostlang$frostc$Position $tmp433 = *(&local41);
return $tmp433;
block87:;
frost$core$Int64 $tmp434 = (frost$core$Int64) {44};
frost$core$Bit $tmp435 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp434);
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block88; else goto block89;
block88:;
org$frostlang$frostc$Position* $tmp437 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp438 = *$tmp437;
*(&local42) = $tmp438;
org$frostlang$frostc$FixedArray** $tmp439 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp440 = *$tmp439;
// line 223
org$frostlang$frostc$Position $tmp441 = *(&local42);
return $tmp441;
block89:;
frost$core$Int64 $tmp442 = (frost$core$Int64) {45};
frost$core$Bit $tmp443 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp442);
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block90; else goto block91;
block90:;
org$frostlang$frostc$Position* $tmp445 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp446 = *$tmp445;
*(&local43) = $tmp446;
org$frostlang$frostc$FixedArray** $tmp447 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp448 = *$tmp447;
// line 226
org$frostlang$frostc$Position $tmp449 = *(&local43);
return $tmp449;
block91:;
frost$core$Int64 $tmp450 = (frost$core$Int64) {46};
frost$core$Bit $tmp451 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp450);
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block92; else goto block93;
block92:;
org$frostlang$frostc$Position* $tmp453 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp454 = *$tmp453;
*(&local44) = $tmp454;
frost$core$String** $tmp455 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp456 = *$tmp455;
// line 229
org$frostlang$frostc$Position $tmp457 = *(&local44);
return $tmp457;
block93:;
frost$core$Int64 $tmp458 = (frost$core$Int64) {48};
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
// line 232
org$frostlang$frostc$Position $tmp467 = *(&local45);
return $tmp467;
block95:;
frost$core$Int64 $tmp468 = (frost$core$Int64) {47};
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
// line 235
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
// line 238
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
// line 241
org$frostlang$frostc$Position $tmp495 = *(&local48);
return $tmp495;
block101:;
frost$core$Int64 $tmp496 = (frost$core$Int64) {43};
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
// line 244
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
// line 247
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
// line 250
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
// line 253
org$frostlang$frostc$Position $tmp539 = *(&local52);
return $tmp539;
block109:;
// line 256
frost$core$Bit $tmp540 = frost$core$Bit$init$builtin_bit(false);
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block110; else goto block111;
block111:;
frost$core$Int64 $tmp542 = (frost$core$Int64) {256};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s543, $tmp542);
abort(); // unreachable
block110:;
goto block1;
block1:;
frost$core$Bit $tmp544 = frost$core$Bit$init$builtin_bit(false);
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block112; else goto block113;
block113:;
frost$core$Int64 $tmp546 = (frost$core$Int64) {91};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s547, $tmp546, &$s548);
abort(); // unreachable
block112:;
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
org$frostlang$frostc$FixedArray* local114 = NULL;
org$frostlang$frostc$ASTNode* local115 = NULL;
org$frostlang$frostc$FixedArray* local116 = NULL;
frost$core$MutableString* local117 = NULL;
frost$core$String* local118 = NULL;
frost$core$String* local119 = NULL;
org$frostlang$frostc$ASTNode* local120 = NULL;
org$frostlang$frostc$FixedArray* local121 = NULL;
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
// line 263
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
// line 265
org$frostlang$frostc$ASTNode* $tmp564 = *(&local1);
frost$core$Bit $tmp565 = frost$core$Bit$init$builtin_bit($tmp564 != NULL);
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block4; else goto block5;
block4:;
// line 266
frost$core$String* $tmp567 = *(&local0);
frost$core$String* $tmp568 = frost$core$String$convert$R$frost$core$String($tmp567);
frost$core$String* $tmp569 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp568, &$s570);
org$frostlang$frostc$ASTNode* $tmp571 = *(&local1);
frost$core$Bit $tmp572 = frost$core$Bit$init$builtin_bit($tmp571 != NULL);
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp574 = (frost$core$Int64) {266};
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
// line 268
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
// line 271
org$frostlang$frostc$FixedArray* $tmp593 = *(&local2);
frost$core$String* $tmp594 = org$frostlang$frostc$FixedArray$convert$R$frost$core$String($tmp593);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
// unreffing REF($108:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp595 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
// unreffing elements
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp594;
block9:;
frost$core$Int64 $tmp596 = (frost$core$Int64) {2};
frost$core$Bit $tmp597 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp596);
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block10; else goto block11;
block10:;
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
// line 274
org$frostlang$frostc$ASTNode* $tmp607 = *(&local4);
frost$core$Bit $tmp608 = frost$core$Bit$init$builtin_bit($tmp607 == NULL);
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block12; else goto block13;
block12:;
// line 275
org$frostlang$frostc$ASTNode* $tmp610 = *(&local3);
frost$core$String* $tmp611 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s612, ((frost$core$Object*) $tmp610));
frost$core$String* $tmp613 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp611, &$s614);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
// unreffing REF($154:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
// unreffing REF($153:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp615 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
// unreffing msg
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp616 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
// unreffing test
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp613;
block13:;
// line 277
org$frostlang$frostc$ASTNode* $tmp617 = *(&local3);
frost$core$String* $tmp618 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s619, ((frost$core$Object*) $tmp617));
frost$core$String* $tmp620 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp618, &$s621);
org$frostlang$frostc$ASTNode* $tmp622 = *(&local4);
frost$core$Bit $tmp623 = frost$core$Bit$init$builtin_bit($tmp622 != NULL);
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp625 = (frost$core$Int64) {277};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s626, $tmp625, &$s627);
abort(); // unreachable
block14:;
frost$core$String* $tmp628 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp620, ((frost$core$Object*) $tmp622));
frost$core$String* $tmp629 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp628, &$s630);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
// unreffing REF($189:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
// unreffing REF($188:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
// unreffing REF($178:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
// unreffing REF($177:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp631 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
// unreffing msg
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp632 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
// unreffing test
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp629;
block11:;
frost$core$Int64 $tmp633 = (frost$core$Int64) {3};
frost$core$Bit $tmp634 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp633);
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp636 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp637 = *$tmp636;
org$frostlang$frostc$ASTNode** $tmp638 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp639 = *$tmp638;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
org$frostlang$frostc$ASTNode* $tmp640 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
*(&local5) = $tmp639;
// line 280
org$frostlang$frostc$ASTNode* $tmp641 = *(&local5);
frost$core$String* $tmp642 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s643, ((frost$core$Object*) $tmp641));
frost$core$String* $tmp644 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp642, &$s645);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
// unreffing REF($234:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
// unreffing REF($233:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp646 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
// unreffing expr
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp644;
block17:;
frost$core$Int64 $tmp647 = (frost$core$Int64) {4};
frost$core$Bit $tmp648 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp647);
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp650 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp651 = *$tmp650;
// line 283
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s652));
return &$s653;
block19:;
frost$core$Int64 $tmp654 = (frost$core$Int64) {5};
frost$core$Bit $tmp655 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp654);
bool $tmp656 = $tmp655.value;
if ($tmp656) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp657 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp658 = *$tmp657;
org$frostlang$frostc$ASTNode** $tmp659 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp660 = *$tmp659;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
org$frostlang$frostc$ASTNode* $tmp661 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
*(&local6) = $tmp660;
org$frostlang$frostc$parser$Token$Kind* $tmp662 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp663 = *$tmp662;
*(&local7) = $tmp663;
org$frostlang$frostc$ASTNode** $tmp664 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp665 = *$tmp664;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
org$frostlang$frostc$ASTNode* $tmp666 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
*(&local8) = $tmp665;
// line 286
org$frostlang$frostc$ASTNode* $tmp667 = *(&local6);
frost$core$String* $tmp668 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s669, ((frost$core$Object*) $tmp667));
frost$core$String* $tmp670 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp668, &$s671);
org$frostlang$frostc$parser$Token$Kind $tmp672 = *(&local7);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp673;
$tmp673 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp673->value = $tmp672;
frost$core$String* $tmp674 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp670, ((frost$core$Object*) $tmp673));
frost$core$String* $tmp675 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp674, &$s676);
org$frostlang$frostc$ASTNode* $tmp677 = *(&local8);
frost$core$String* $tmp678 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp675, ((frost$core$Object*) $tmp677));
frost$core$String* $tmp679 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp678, &$s680);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
// unreffing REF($298:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
// unreffing REF($297:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
// unreffing REF($294:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
// unreffing REF($293:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
// unreffing REF($292:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
// unreffing REF($290:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
// unreffing REF($289:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp681 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
// unreffing right
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp682 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
// unreffing left
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp679;
block21:;
frost$core$Int64 $tmp683 = (frost$core$Int64) {6};
frost$core$Bit $tmp684 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp683);
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp686 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp687 = *$tmp686;
frost$core$Bit* $tmp688 = (frost$core$Bit*) (param0->$data + 16);
frost$core$Bit $tmp689 = *$tmp688;
*(&local9) = $tmp689;
// line 289
frost$core$Bit $tmp690 = *(&local9);
frost$core$String* $tmp691 = frost$core$Bit$convert$R$frost$core$String($tmp690);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
// unreffing REF($344:frost.core.String)
return $tmp691;
block23:;
frost$core$Int64 $tmp692 = (frost$core$Int64) {7};
frost$core$Bit $tmp693 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp692);
bool $tmp694 = $tmp693.value;
if ($tmp694) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp695 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp696 = *$tmp695;
org$frostlang$frostc$FixedArray** $tmp697 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp698 = *$tmp697;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
org$frostlang$frostc$FixedArray* $tmp699 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
*(&local10) = $tmp698;
// line 292
frost$core$MutableString* $tmp700 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp700, &$s701);
*(&local11) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$MutableString* $tmp702 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
*(&local11) = $tmp700;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
// unreffing REF($367:frost.core.MutableString)
// line 293
org$frostlang$frostc$FixedArray* $tmp703 = *(&local10);
ITable* $tmp704 = ((frost$collections$Iterable*) $tmp703)->$class->itable;
while ($tmp704->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp704 = $tmp704->next;
}
$fn706 $tmp705 = $tmp704->methods[0];
frost$collections$Iterator* $tmp707 = $tmp705(((frost$collections$Iterable*) $tmp703));
goto block26;
block26:;
ITable* $tmp708 = $tmp707->$class->itable;
while ($tmp708->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp708 = $tmp708->next;
}
$fn710 $tmp709 = $tmp708->methods[0];
frost$core$Bit $tmp711 = $tmp709($tmp707);
bool $tmp712 = $tmp711.value;
if ($tmp712) goto block28; else goto block27;
block27:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp713 = $tmp707->$class->itable;
while ($tmp713->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp713 = $tmp713->next;
}
$fn715 $tmp714 = $tmp713->methods[1];
frost$core$Object* $tmp716 = $tmp714($tmp707);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp716)));
org$frostlang$frostc$ASTNode* $tmp717 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp716);
// line 294
frost$core$MutableString* $tmp718 = *(&local11);
org$frostlang$frostc$ASTNode* $tmp719 = *(&local12);
frost$core$String* $tmp720 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp719), &$s721);
frost$core$MutableString$append$frost$core$String($tmp718, $tmp720);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
// unreffing REF($407:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp716);
// unreffing REF($395:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp722 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
// unreffing s
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
// unreffing REF($384:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 296
frost$core$MutableString* $tmp723 = *(&local11);
frost$core$MutableString$append$frost$core$String($tmp723, &$s724);
// line 297
frost$core$MutableString* $tmp725 = *(&local11);
frost$core$String* $tmp726 = frost$core$MutableString$finish$R$frost$core$String($tmp725);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
// unreffing REF($429:frost.core.String)
frost$core$MutableString* $tmp727 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
// unreffing result
*(&local11) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp728 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
// unreffing statements
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp726;
block25:;
frost$core$Int64 $tmp729 = (frost$core$Int64) {8};
frost$core$Bit $tmp730 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp729);
bool $tmp731 = $tmp730.value;
if ($tmp731) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Position* $tmp732 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp733 = *$tmp732;
frost$core$String** $tmp734 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp735 = *$tmp734;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
frost$core$String* $tmp736 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local13) = $tmp735;
// line 300
frost$core$String* $tmp737 = *(&local13);
frost$core$Bit $tmp738 = frost$core$Bit$init$builtin_bit($tmp737 != NULL);
bool $tmp739 = $tmp738.value;
if ($tmp739) goto block31; else goto block32;
block31:;
// line 301
frost$core$String* $tmp740 = *(&local13);
frost$core$Bit $tmp741 = frost$core$Bit$init$builtin_bit($tmp740 != NULL);
bool $tmp742 = $tmp741.value;
if ($tmp742) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp743 = (frost$core$Int64) {301};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s744, $tmp743, &$s745);
abort(); // unreachable
block33:;
frost$core$String* $tmp746 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s747, $tmp740);
frost$core$String* $tmp748 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp746, &$s749);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
// unreffing REF($478:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
// unreffing REF($477:frost.core.String)
frost$core$String* $tmp750 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
// unreffing label
*(&local13) = ((frost$core$String*) NULL);
return $tmp748;
block32:;
// line 303
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s751));
frost$core$String* $tmp752 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
// unreffing label
*(&local13) = ((frost$core$String*) NULL);
return &$s753;
block30:;
frost$core$Int64 $tmp754 = (frost$core$Int64) {9};
frost$core$Bit $tmp755 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp754);
bool $tmp756 = $tmp755.value;
if ($tmp756) goto block35; else goto block36;
block35:;
org$frostlang$frostc$Position* $tmp757 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp758 = *$tmp757;
org$frostlang$frostc$ASTNode** $tmp759 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp760 = *$tmp759;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
org$frostlang$frostc$ASTNode* $tmp761 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
*(&local14) = $tmp760;
org$frostlang$frostc$FixedArray** $tmp762 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp763 = *$tmp762;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
org$frostlang$frostc$FixedArray* $tmp764 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
*(&local15) = $tmp763;
// line 306
org$frostlang$frostc$ASTNode* $tmp765 = *(&local14);
$fn767 $tmp766 = ($fn767) $tmp765->$class->vtable[0];
frost$core$String* $tmp768 = $tmp766($tmp765);
frost$core$String* $tmp769 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp768, &$s770);
org$frostlang$frostc$FixedArray* $tmp771 = *(&local15);
ITable* $tmp772 = ((frost$collections$CollectionView*) $tmp771)->$class->itable;
while ($tmp772->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp772 = $tmp772->next;
}
$fn774 $tmp773 = $tmp772->methods[1];
frost$core$String* $tmp775 = $tmp773(((frost$collections$CollectionView*) $tmp771));
frost$core$String* $tmp776 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp769, $tmp775);
frost$core$String* $tmp777 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp776, &$s778);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
// unreffing REF($536:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
// unreffing REF($535:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
// unreffing REF($534:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
// unreffing REF($530:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
// unreffing REF($529:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp779 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
// unreffing args
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp780 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
// unreffing target
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp777;
block36:;
frost$core$Int64 $tmp781 = (frost$core$Int64) {10};
frost$core$Bit $tmp782 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp781);
bool $tmp783 = $tmp782.value;
if ($tmp783) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Position* $tmp784 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp785 = *$tmp784;
org$frostlang$frostc$ASTNode** $tmp786 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp787 = *$tmp786;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
org$frostlang$frostc$ASTNode* $tmp788 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
*(&local16) = $tmp787;
frost$core$String** $tmp789 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp790 = *$tmp789;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$String* $tmp791 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
*(&local17) = $tmp790;
org$frostlang$frostc$FixedArray** $tmp792 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp793 = *$tmp792;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
org$frostlang$frostc$FixedArray* $tmp794 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
*(&local18) = $tmp793;
// line 309
frost$core$MutableString* $tmp795 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp795);
*(&local19) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$MutableString* $tmp796 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
*(&local19) = $tmp795;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
// unreffing REF($599:frost.core.MutableString)
// line 310
org$frostlang$frostc$ASTNode* $tmp797 = *(&local16);
frost$core$Bit $tmp798 = frost$core$Bit$init$builtin_bit($tmp797 != NULL);
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block39; else goto block40;
block39:;
// line 311
frost$core$MutableString* $tmp800 = *(&local19);
org$frostlang$frostc$ASTNode* $tmp801 = *(&local16);
frost$core$Bit $tmp802 = frost$core$Bit$init$builtin_bit($tmp801 != NULL);
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp804 = (frost$core$Int64) {311};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s805, $tmp804, &$s806);
abort(); // unreachable
block41:;
frost$core$String* $tmp807 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp801), &$s808);
frost$core$MutableString$append$frost$core$String($tmp800, $tmp807);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
// unreffing REF($628:frost.core.String)
goto block40;
block40:;
// line 313
frost$core$MutableString* $tmp809 = *(&local19);
frost$core$String* $tmp810 = *(&local17);
frost$core$String* $tmp811 = frost$core$String$convert$R$frost$core$String($tmp810);
frost$core$String* $tmp812 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp811, &$s813);
org$frostlang$frostc$FixedArray* $tmp814 = *(&local18);
frost$core$Bit $tmp815 = frost$core$Bit$init$builtin_bit($tmp814 != NULL);
bool $tmp816 = $tmp815.value;
if ($tmp816) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp817 = (frost$core$Int64) {313};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s818, $tmp817, &$s819);
abort(); // unreachable
block43:;
ITable* $tmp820 = ((frost$collections$CollectionView*) $tmp814)->$class->itable;
while ($tmp820->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp820 = $tmp820->next;
}
$fn822 $tmp821 = $tmp820->methods[1];
frost$core$String* $tmp823 = $tmp821(((frost$collections$CollectionView*) $tmp814));
frost$core$String* $tmp824 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp812, $tmp823);
frost$core$String* $tmp825 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp824, &$s826);
frost$core$MutableString$append$frost$core$String($tmp809, $tmp825);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
// unreffing REF($651:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
// unreffing REF($650:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
// unreffing REF($649:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
// unreffing REF($638:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
// unreffing REF($637:frost.core.String)
// line 314
frost$core$MutableString* $tmp827 = *(&local19);
frost$core$String* $tmp828 = frost$core$MutableString$finish$R$frost$core$String($tmp827);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
// unreffing REF($670:frost.core.String)
frost$core$MutableString* $tmp829 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
// unreffing result
*(&local19) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp830 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
// unreffing fields
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp831 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
// unreffing name
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp832 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
// unreffing dc
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp828;
block38:;
frost$core$Int64 $tmp833 = (frost$core$Int64) {11};
frost$core$Bit $tmp834 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp833);
bool $tmp835 = $tmp834.value;
if ($tmp835) goto block45; else goto block46;
block45:;
org$frostlang$frostc$Position* $tmp836 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp837 = *$tmp836;
org$frostlang$frostc$ASTNode** $tmp838 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp839 = *$tmp838;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
org$frostlang$frostc$ASTNode* $tmp840 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
*(&local20) = $tmp839;
org$frostlang$frostc$ChoiceCase** $tmp841 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp842 = *$tmp841;
*(&local21) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
org$frostlang$frostc$ChoiceCase* $tmp843 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
*(&local21) = $tmp842;
frost$core$Int64* $tmp844 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp845 = *$tmp844;
*(&local22) = $tmp845;
// line 317
org$frostlang$frostc$ASTNode* $tmp846 = *(&local20);
$fn848 $tmp847 = ($fn848) $tmp846->$class->vtable[0];
frost$core$String* $tmp849 = $tmp847($tmp846);
frost$core$String* $tmp850 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp849, &$s851);
org$frostlang$frostc$ChoiceCase* $tmp852 = *(&local21);
frost$core$String* $tmp853 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp850, ((frost$core$Object*) $tmp852));
frost$core$String* $tmp854 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp853, &$s855);
frost$core$Int64 $tmp856 = *(&local22);
frost$core$Int64$wrapper* $tmp857;
$tmp857 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp857->value = $tmp856;
frost$core$String* $tmp858 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp854, ((frost$core$Object*) $tmp857));
frost$core$String* $tmp859 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp858, &$s860);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
// unreffing REF($736:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
// unreffing REF($735:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
// unreffing REF($734:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
// unreffing REF($732:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
// unreffing REF($731:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
// unreffing REF($728:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
// unreffing REF($727:frost.core.String)
org$frostlang$frostc$ChoiceCase* $tmp861 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
// unreffing ce
*(&local21) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp862 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
// unreffing base
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp859;
block46:;
frost$core$Int64 $tmp863 = (frost$core$Int64) {12};
frost$core$Bit $tmp864 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp863);
bool $tmp865 = $tmp864.value;
if ($tmp865) goto block47; else goto block48;
block47:;
org$frostlang$frostc$Position* $tmp866 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp867 = *$tmp866;
org$frostlang$frostc$ASTNode** $tmp868 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp869 = *$tmp868;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
org$frostlang$frostc$ASTNode* $tmp870 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
*(&local23) = $tmp869;
org$frostlang$frostc$FixedArray** $tmp871 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp872 = *$tmp871;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
org$frostlang$frostc$FixedArray* $tmp873 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local24) = $tmp872;
org$frostlang$frostc$ClassDecl$Kind* $tmp874 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp875 = *$tmp874;
*(&local25) = $tmp875;
frost$core$String** $tmp876 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp877 = *$tmp876;
*(&local26) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
frost$core$String* $tmp878 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
*(&local26) = $tmp877;
org$frostlang$frostc$FixedArray** $tmp879 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp880 = *$tmp879;
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
org$frostlang$frostc$FixedArray* $tmp881 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
*(&local27) = $tmp880;
org$frostlang$frostc$FixedArray** $tmp882 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp883 = *$tmp882;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
org$frostlang$frostc$FixedArray* $tmp884 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
*(&local28) = $tmp883;
org$frostlang$frostc$FixedArray** $tmp885 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp886 = *$tmp885;
*(&local29) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
org$frostlang$frostc$FixedArray* $tmp887 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
*(&local29) = $tmp886;
// line 320
frost$core$MutableString* $tmp888 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp888);
*(&local30) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
frost$core$MutableString* $tmp889 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
*(&local30) = $tmp888;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
// unreffing REF($835:frost.core.MutableString)
// line 321
org$frostlang$frostc$ASTNode* $tmp890 = *(&local23);
frost$core$Bit $tmp891 = frost$core$Bit$init$builtin_bit($tmp890 != NULL);
bool $tmp892 = $tmp891.value;
if ($tmp892) goto block49; else goto block50;
block49:;
// line 322
frost$core$MutableString* $tmp893 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp894 = *(&local23);
frost$core$Bit $tmp895 = frost$core$Bit$init$builtin_bit($tmp894 != NULL);
bool $tmp896 = $tmp895.value;
if ($tmp896) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp897 = (frost$core$Int64) {322};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s898, $tmp897, &$s899);
abort(); // unreachable
block51:;
frost$core$String* $tmp900 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp894), &$s901);
frost$core$MutableString$append$frost$core$String($tmp893, $tmp900);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
// unreffing REF($864:frost.core.String)
goto block50;
block50:;
// line 324
org$frostlang$frostc$FixedArray* $tmp902 = *(&local24);
ITable* $tmp903 = ((frost$collections$Iterable*) $tmp902)->$class->itable;
while ($tmp903->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp903 = $tmp903->next;
}
$fn905 $tmp904 = $tmp903->methods[0];
frost$collections$Iterator* $tmp906 = $tmp904(((frost$collections$Iterable*) $tmp902));
goto block53;
block53:;
ITable* $tmp907 = $tmp906->$class->itable;
while ($tmp907->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp907 = $tmp907->next;
}
$fn909 $tmp908 = $tmp907->methods[0];
frost$core$Bit $tmp910 = $tmp908($tmp906);
bool $tmp911 = $tmp910.value;
if ($tmp911) goto block55; else goto block54;
block54:;
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
// line 325
frost$core$MutableString* $tmp917 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp918 = *(&local31);
frost$core$String* $tmp919 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp918), &$s920);
frost$core$MutableString$append$frost$core$String($tmp917, $tmp919);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
// unreffing REF($898:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp915);
// unreffing REF($886:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp921 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
// unreffing a
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block53;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
// unreffing REF($875:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 327
org$frostlang$frostc$ClassDecl$Kind $tmp922 = *(&local25);
frost$core$Int64 $tmp923 = $tmp922.$rawValue;
frost$core$Int64 $tmp924 = (frost$core$Int64) {0};
frost$core$Bit $tmp925 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp923, $tmp924);
bool $tmp926 = $tmp925.value;
if ($tmp926) goto block57; else goto block58;
block57:;
// line 328
frost$core$MutableString* $tmp927 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp927, &$s928);
goto block56;
block58:;
frost$core$Int64 $tmp929 = (frost$core$Int64) {1};
frost$core$Bit $tmp930 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp923, $tmp929);
bool $tmp931 = $tmp930.value;
if ($tmp931) goto block59; else goto block60;
block59:;
// line 329
frost$core$MutableString* $tmp932 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp932, &$s933);
goto block56;
block60:;
frost$core$Int64 $tmp934 = (frost$core$Int64) {2};
frost$core$Bit $tmp935 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp923, $tmp934);
bool $tmp936 = $tmp935.value;
if ($tmp936) goto block61; else goto block56;
block61:;
// line 330
frost$core$MutableString* $tmp937 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp937, &$s938);
goto block56;
block56:;
// line 332
frost$core$MutableString* $tmp939 = *(&local30);
frost$core$String* $tmp940 = *(&local26);
frost$core$MutableString$append$frost$core$String($tmp939, $tmp940);
// line 333
org$frostlang$frostc$FixedArray* $tmp941 = *(&local27);
frost$core$Bit $tmp942 = frost$core$Bit$init$builtin_bit($tmp941 != NULL);
bool $tmp943 = $tmp942.value;
if ($tmp943) goto block62; else goto block63;
block62:;
// line 334
frost$core$MutableString* $tmp944 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp945 = *(&local27);
frost$core$Bit $tmp946 = frost$core$Bit$init$builtin_bit($tmp945 != NULL);
bool $tmp947 = $tmp946.value;
if ($tmp947) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp948 = (frost$core$Int64) {334};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s949, $tmp948, &$s950);
abort(); // unreachable
block64:;
ITable* $tmp951 = ((frost$collections$CollectionView*) $tmp945)->$class->itable;
while ($tmp951->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp951 = $tmp951->next;
}
$fn953 $tmp952 = $tmp951->methods[1];
frost$core$String* $tmp954 = $tmp952(((frost$collections$CollectionView*) $tmp945));
frost$core$String* $tmp955 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s956, $tmp954);
frost$core$String* $tmp957 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp955, &$s958);
frost$core$MutableString$append$frost$core$String($tmp944, $tmp957);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
// unreffing REF($966:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
// unreffing REF($965:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
// unreffing REF($964:frost.core.String)
goto block63;
block63:;
// line 336
org$frostlang$frostc$FixedArray* $tmp959 = *(&local28);
frost$core$Bit $tmp960 = frost$core$Bit$init$builtin_bit($tmp959 != NULL);
bool $tmp961 = $tmp960.value;
if ($tmp961) goto block66; else goto block67;
block66:;
// line 337
frost$core$MutableString* $tmp962 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp963 = *(&local28);
frost$core$Bit $tmp964 = frost$core$Bit$init$builtin_bit($tmp963 != NULL);
bool $tmp965 = $tmp964.value;
if ($tmp965) goto block68; else goto block69;
block69:;
frost$core$Int64 $tmp966 = (frost$core$Int64) {337};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s967, $tmp966, &$s968);
abort(); // unreachable
block68:;
ITable* $tmp969 = ((frost$collections$CollectionView*) $tmp963)->$class->itable;
while ($tmp969->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp969 = $tmp969->next;
}
$fn971 $tmp970 = $tmp969->methods[1];
frost$core$String* $tmp972 = $tmp970(((frost$collections$CollectionView*) $tmp963));
frost$core$String* $tmp973 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s974, $tmp972);
frost$core$String* $tmp975 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp973, &$s976);
frost$core$MutableString$append$frost$core$String($tmp962, $tmp975);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
// unreffing REF($998:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
// unreffing REF($997:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
// unreffing REF($996:frost.core.String)
goto block67;
block67:;
// line 339
frost$core$MutableString* $tmp977 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp977, &$s978);
// line 340
org$frostlang$frostc$FixedArray* $tmp979 = *(&local29);
ITable* $tmp980 = ((frost$collections$Iterable*) $tmp979)->$class->itable;
while ($tmp980->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp980 = $tmp980->next;
}
$fn982 $tmp981 = $tmp980->methods[0];
frost$collections$Iterator* $tmp983 = $tmp981(((frost$collections$Iterable*) $tmp979));
goto block70;
block70:;
ITable* $tmp984 = $tmp983->$class->itable;
while ($tmp984->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp984 = $tmp984->next;
}
$fn986 $tmp985 = $tmp984->methods[0];
frost$core$Bit $tmp987 = $tmp985($tmp983);
bool $tmp988 = $tmp987.value;
if ($tmp988) goto block72; else goto block71;
block71:;
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
// line 341
frost$core$MutableString* $tmp994 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp995 = *(&local32);
frost$core$String* $tmp996 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp995), &$s997);
frost$core$MutableString$append$frost$core$String($tmp994, $tmp996);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
// unreffing REF($1041:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp992);
// unreffing REF($1029:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp998 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
// unreffing m
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block70;
block72:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
// unreffing REF($1018:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 343
frost$core$MutableString* $tmp999 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp999, &$s1000);
// line 344
frost$core$MutableString* $tmp1001 = *(&local30);
frost$core$String* $tmp1002 = frost$core$MutableString$finish$R$frost$core$String($tmp1001);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
// unreffing REF($1063:frost.core.String)
frost$core$MutableString* $tmp1003 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
// unreffing result
*(&local30) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1004 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
// unreffing members
*(&local29) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1005 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
// unreffing supertypes
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1006 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
// unreffing generics
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1007 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
// unreffing name
*(&local26) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1008 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
// unreffing annotations
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1009 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
// unreffing dc
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1002;
block48:;
frost$core$Int64 $tmp1010 = (frost$core$Int64) {13};
frost$core$Bit $tmp1011 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1010);
bool $tmp1012 = $tmp1011.value;
if ($tmp1012) goto block73; else goto block74;
block73:;
org$frostlang$frostc$Position* $tmp1013 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1014 = *$tmp1013;
frost$core$String** $tmp1015 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1016 = *$tmp1015;
*(&local33) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
frost$core$String* $tmp1017 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
*(&local33) = $tmp1016;
// line 347
frost$core$String* $tmp1018 = *(&local33);
frost$core$Bit $tmp1019 = frost$core$Bit$init$builtin_bit($tmp1018 != NULL);
bool $tmp1020 = $tmp1019.value;
if ($tmp1020) goto block75; else goto block76;
block75:;
// line 348
frost$core$String* $tmp1021 = *(&local33);
frost$core$Bit $tmp1022 = frost$core$Bit$init$builtin_bit($tmp1021 != NULL);
bool $tmp1023 = $tmp1022.value;
if ($tmp1023) goto block77; else goto block78;
block78:;
frost$core$Int64 $tmp1024 = (frost$core$Int64) {348};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1025, $tmp1024, &$s1026);
abort(); // unreachable
block77:;
frost$core$String* $tmp1027 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1028, $tmp1021);
frost$core$String* $tmp1029 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1027, &$s1030);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
// unreffing REF($1137:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
// unreffing REF($1136:frost.core.String)
frost$core$String* $tmp1031 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
// unreffing label
*(&local33) = ((frost$core$String*) NULL);
return $tmp1029;
block76:;
// line 350
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1032));
frost$core$String* $tmp1033 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
// unreffing label
*(&local33) = ((frost$core$String*) NULL);
return &$s1034;
block74:;
frost$core$Int64 $tmp1035 = (frost$core$Int64) {14};
frost$core$Bit $tmp1036 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1035);
bool $tmp1037 = $tmp1036.value;
if ($tmp1037) goto block79; else goto block80;
block79:;
org$frostlang$frostc$Position* $tmp1038 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1039 = *$tmp1038;
org$frostlang$frostc$ASTNode** $tmp1040 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1041 = *$tmp1040;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
org$frostlang$frostc$ASTNode* $tmp1042 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
*(&local34) = $tmp1041;
org$frostlang$frostc$ASTNode** $tmp1043 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1044 = *$tmp1043;
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
org$frostlang$frostc$ASTNode* $tmp1045 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
*(&local35) = $tmp1044;
// line 353
org$frostlang$frostc$ASTNode* $tmp1046 = *(&local35);
frost$core$Bit $tmp1047 = frost$core$Bit$init$builtin_bit($tmp1046 != NULL);
bool $tmp1048 = $tmp1047.value;
if ($tmp1048) goto block81; else goto block82;
block81:;
// line 354
org$frostlang$frostc$ASTNode* $tmp1049 = *(&local34);
$fn1051 $tmp1050 = ($fn1051) $tmp1049->$class->vtable[0];
frost$core$String* $tmp1052 = $tmp1050($tmp1049);
frost$core$String* $tmp1053 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1052, &$s1054);
org$frostlang$frostc$ASTNode* $tmp1055 = *(&local35);
frost$core$Bit $tmp1056 = frost$core$Bit$init$builtin_bit($tmp1055 != NULL);
bool $tmp1057 = $tmp1056.value;
if ($tmp1057) goto block83; else goto block84;
block84:;
frost$core$Int64 $tmp1058 = (frost$core$Int64) {354};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1059, $tmp1058, &$s1060);
abort(); // unreachable
block83:;
frost$core$String* $tmp1061 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1053, ((frost$core$Object*) $tmp1055));
frost$core$String* $tmp1062 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1061, &$s1063);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
// unreffing REF($1206:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
// unreffing REF($1205:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
// unreffing REF($1195:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
// unreffing REF($1194:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1064 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
// unreffing value
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1065 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
// unreffing target
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1062;
block82:;
// line 356
org$frostlang$frostc$ASTNode* $tmp1066 = *(&local34);
$fn1068 $tmp1067 = ($fn1068) $tmp1066->$class->vtable[0];
frost$core$String* $tmp1069 = $tmp1067($tmp1066);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
// unreffing REF($1235:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1070 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
// unreffing value
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1071 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
// unreffing target
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1069;
block80:;
frost$core$Int64 $tmp1072 = (frost$core$Int64) {15};
frost$core$Bit $tmp1073 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1072);
bool $tmp1074 = $tmp1073.value;
if ($tmp1074) goto block85; else goto block86;
block85:;
org$frostlang$frostc$Position* $tmp1075 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1076 = *$tmp1075;
frost$core$String** $tmp1077 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1078 = *$tmp1077;
*(&local36) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
frost$core$String* $tmp1079 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
*(&local36) = $tmp1078;
org$frostlang$frostc$FixedArray** $tmp1080 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1081 = *$tmp1080;
*(&local37) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
org$frostlang$frostc$FixedArray* $tmp1082 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
*(&local37) = $tmp1081;
org$frostlang$frostc$ASTNode** $tmp1083 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1084 = *$tmp1083;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
org$frostlang$frostc$ASTNode* $tmp1085 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
*(&local38) = $tmp1084;
// line 359
frost$core$MutableString* $tmp1086 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1086);
*(&local39) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
frost$core$MutableString* $tmp1087 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
*(&local39) = $tmp1086;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
// unreffing REF($1286:frost.core.MutableString)
// line 360
frost$core$String* $tmp1088 = *(&local36);
frost$core$Bit $tmp1089 = frost$core$Bit$init$builtin_bit($tmp1088 != NULL);
bool $tmp1090 = $tmp1089.value;
if ($tmp1090) goto block87; else goto block88;
block87:;
// line 361
frost$core$MutableString* $tmp1091 = *(&local39);
frost$core$String* $tmp1092 = *(&local36);
frost$core$Bit $tmp1093 = frost$core$Bit$init$builtin_bit($tmp1092 != NULL);
bool $tmp1094 = $tmp1093.value;
if ($tmp1094) goto block89; else goto block90;
block90:;
frost$core$Int64 $tmp1095 = (frost$core$Int64) {361};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1096, $tmp1095, &$s1097);
abort(); // unreachable
block89:;
frost$core$String* $tmp1098 = frost$core$String$convert$R$frost$core$String($tmp1092);
frost$core$String* $tmp1099 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1098, &$s1100);
frost$core$MutableString$append$frost$core$String($tmp1091, $tmp1099);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
// unreffing REF($1316:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
// unreffing REF($1315:frost.core.String)
goto block88;
block88:;
// line 363
frost$core$MutableString* $tmp1101 = *(&local39);
frost$core$MutableString$append$frost$core$String($tmp1101, &$s1102);
// line 364
org$frostlang$frostc$FixedArray* $tmp1103 = *(&local37);
ITable* $tmp1104 = ((frost$collections$Iterable*) $tmp1103)->$class->itable;
while ($tmp1104->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1104 = $tmp1104->next;
}
$fn1106 $tmp1105 = $tmp1104->methods[0];
frost$collections$Iterator* $tmp1107 = $tmp1105(((frost$collections$Iterable*) $tmp1103));
goto block91;
block91:;
ITable* $tmp1108 = $tmp1107->$class->itable;
while ($tmp1108->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1108 = $tmp1108->next;
}
$fn1110 $tmp1109 = $tmp1108->methods[0];
frost$core$Bit $tmp1111 = $tmp1109($tmp1107);
bool $tmp1112 = $tmp1111.value;
if ($tmp1112) goto block93; else goto block92;
block92:;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1113 = $tmp1107->$class->itable;
while ($tmp1113->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1113 = $tmp1113->next;
}
$fn1115 $tmp1114 = $tmp1113->methods[1];
frost$core$Object* $tmp1116 = $tmp1114($tmp1107);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1116)));
org$frostlang$frostc$ASTNode* $tmp1117 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
*(&local40) = ((org$frostlang$frostc$ASTNode*) $tmp1116);
// line 365
frost$core$MutableString* $tmp1118 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp1119 = *(&local40);
frost$core$String* $tmp1120 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1119), &$s1121);
frost$core$MutableString$append$frost$core$String($tmp1118, $tmp1120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
// unreffing REF($1356:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1116);
// unreffing REF($1344:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1122 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
// unreffing s
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block91;
block93:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
// unreffing REF($1333:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 367
frost$core$MutableString* $tmp1123 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp1124 = *(&local38);
frost$core$String* $tmp1125 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1126, ((frost$core$Object*) $tmp1124));
frost$core$String* $tmp1127 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1125, &$s1128);
frost$core$MutableString$append$frost$core$String($tmp1123, $tmp1127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
// unreffing REF($1378:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
// unreffing REF($1377:frost.core.String)
// line 368
frost$core$MutableString* $tmp1129 = *(&local39);
frost$core$String* $tmp1130 = frost$core$MutableString$finish$R$frost$core$String($tmp1129);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
// unreffing REF($1388:frost.core.String)
frost$core$MutableString* $tmp1131 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
// unreffing result
*(&local39) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1132 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
// unreffing test
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1133 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
// unreffing statements
*(&local37) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1134 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
// unreffing label
*(&local36) = ((frost$core$String*) NULL);
return $tmp1130;
block86:;
frost$core$Int64 $tmp1135 = (frost$core$Int64) {16};
frost$core$Bit $tmp1136 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1135);
bool $tmp1137 = $tmp1136.value;
if ($tmp1137) goto block94; else goto block95;
block94:;
org$frostlang$frostc$Position* $tmp1138 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1139 = *$tmp1138;
org$frostlang$frostc$ASTNode** $tmp1140 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1141 = *$tmp1140;
*(&local41) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
org$frostlang$frostc$ASTNode* $tmp1142 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
*(&local41) = $tmp1141;
frost$core$String** $tmp1143 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1144 = *$tmp1143;
*(&local42) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
frost$core$String* $tmp1145 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local42) = $tmp1144;
// line 371
org$frostlang$frostc$ASTNode* $tmp1146 = *(&local41);
$fn1148 $tmp1147 = ($fn1148) $tmp1146->$class->vtable[0];
frost$core$String* $tmp1149 = $tmp1147($tmp1146);
frost$core$String* $tmp1150 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1149, &$s1151);
frost$core$String* $tmp1152 = *(&local42);
frost$core$String* $tmp1153 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1150, $tmp1152);
frost$core$String* $tmp1154 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1153, &$s1155);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
// unreffing REF($1446:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
// unreffing REF($1445:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
// unreffing REF($1443:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
// unreffing REF($1442:frost.core.String)
frost$core$String* $tmp1156 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
// unreffing field
*(&local42) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1157 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
// unreffing base
*(&local41) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1154;
block95:;
frost$core$Int64 $tmp1158 = (frost$core$Int64) {17};
frost$core$Bit $tmp1159 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1158);
bool $tmp1160 = $tmp1159.value;
if ($tmp1160) goto block96; else goto block97;
block96:;
org$frostlang$frostc$Position* $tmp1161 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1162 = *$tmp1161;
org$frostlang$frostc$ASTNode** $tmp1163 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1164 = *$tmp1163;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
org$frostlang$frostc$ASTNode* $tmp1165 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
*(&local43) = $tmp1164;
frost$core$String** $tmp1166 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1167 = *$tmp1166;
*(&local44) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$String* $tmp1168 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
*(&local44) = $tmp1167;
org$frostlang$frostc$FixedArray** $tmp1169 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1170 = *$tmp1169;
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
org$frostlang$frostc$FixedArray* $tmp1171 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
*(&local45) = $tmp1170;
// line 374
org$frostlang$frostc$ASTNode* $tmp1172 = *(&local43);
$fn1174 $tmp1173 = ($fn1174) $tmp1172->$class->vtable[0];
frost$core$String* $tmp1175 = $tmp1173($tmp1172);
frost$core$String* $tmp1176 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1175, &$s1177);
frost$core$String* $tmp1178 = *(&local44);
frost$core$String* $tmp1179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1176, $tmp1178);
frost$core$String* $tmp1180 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1179, &$s1181);
org$frostlang$frostc$FixedArray* $tmp1182 = *(&local45);
ITable* $tmp1183 = ((frost$collections$CollectionView*) $tmp1182)->$class->itable;
while ($tmp1183->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1183 = $tmp1183->next;
}
$fn1185 $tmp1184 = $tmp1183->methods[2];
frost$core$String* $tmp1186 = $tmp1184(((frost$collections$CollectionView*) $tmp1182), &$s1187);
frost$core$String* $tmp1188 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1180, $tmp1186);
frost$core$String* $tmp1189 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1188, &$s1190);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
// unreffing REF($1518:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
// unreffing REF($1517:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
// unreffing REF($1516:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
// unreffing REF($1512:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
// unreffing REF($1511:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
// unreffing REF($1509:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
// unreffing REF($1508:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp1191 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
// unreffing types
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1192 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
// unreffing field
*(&local44) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1193 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
// unreffing base
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1189;
block97:;
frost$core$Int64 $tmp1194 = (frost$core$Int64) {18};
frost$core$Bit $tmp1195 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1194);
bool $tmp1196 = $tmp1195.value;
if ($tmp1196) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp1197 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1198 = *$tmp1197;
org$frostlang$frostc$ASTNode** $tmp1199 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1200 = *$tmp1199;
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
org$frostlang$frostc$ASTNode* $tmp1201 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
*(&local46) = $tmp1200;
org$frostlang$frostc$FixedArray** $tmp1202 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1203 = *$tmp1202;
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
org$frostlang$frostc$FixedArray* $tmp1204 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
*(&local47) = $tmp1203;
org$frostlang$frostc$ASTNode** $tmp1205 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1206 = *$tmp1205;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
org$frostlang$frostc$ASTNode* $tmp1207 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
*(&local48) = $tmp1206;
// line 377
frost$core$MutableString* $tmp1208 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1208);
*(&local49) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
frost$core$MutableString* $tmp1209 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
*(&local49) = $tmp1208;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
// unreffing REF($1592:frost.core.MutableString)
// line 378
org$frostlang$frostc$ASTNode* $tmp1210 = *(&local46);
frost$core$Bit $tmp1211 = frost$core$Bit$init$builtin_bit($tmp1210 != NULL);
bool $tmp1212 = $tmp1211.value;
if ($tmp1212) goto block100; else goto block101;
block100:;
// line 379
frost$core$MutableString* $tmp1213 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1214 = *(&local46);
frost$core$Bit $tmp1215 = frost$core$Bit$init$builtin_bit($tmp1214 != NULL);
bool $tmp1216 = $tmp1215.value;
if ($tmp1216) goto block102; else goto block103;
block103:;
frost$core$Int64 $tmp1217 = (frost$core$Int64) {379};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1218, $tmp1217, &$s1219);
abort(); // unreachable
block102:;
frost$core$String* $tmp1220 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1214), &$s1221);
frost$core$MutableString$append$frost$core$String($tmp1213, $tmp1220);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
// unreffing REF($1621:frost.core.String)
goto block101;
block101:;
// line 381
org$frostlang$frostc$FixedArray* $tmp1222 = *(&local47);
ITable* $tmp1223 = ((frost$collections$Iterable*) $tmp1222)->$class->itable;
while ($tmp1223->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1223 = $tmp1223->next;
}
$fn1225 $tmp1224 = $tmp1223->methods[0];
frost$collections$Iterator* $tmp1226 = $tmp1224(((frost$collections$Iterable*) $tmp1222));
goto block104;
block104:;
ITable* $tmp1227 = $tmp1226->$class->itable;
while ($tmp1227->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1227 = $tmp1227->next;
}
$fn1229 $tmp1228 = $tmp1227->methods[0];
frost$core$Bit $tmp1230 = $tmp1228($tmp1226);
bool $tmp1231 = $tmp1230.value;
if ($tmp1231) goto block106; else goto block105;
block105:;
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1232 = $tmp1226->$class->itable;
while ($tmp1232->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1232 = $tmp1232->next;
}
$fn1234 $tmp1233 = $tmp1232->methods[1];
frost$core$Object* $tmp1235 = $tmp1233($tmp1226);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1235)));
org$frostlang$frostc$ASTNode* $tmp1236 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
*(&local50) = ((org$frostlang$frostc$ASTNode*) $tmp1235);
// line 382
frost$core$MutableString* $tmp1237 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1238 = *(&local50);
frost$core$String* $tmp1239 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1238), &$s1240);
frost$core$MutableString$append$frost$core$String($tmp1237, $tmp1239);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
// unreffing REF($1655:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1235);
// unreffing REF($1643:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1241 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
// unreffing a
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block104;
block106:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
// unreffing REF($1632:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 384
frost$core$MutableString* $tmp1242 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1243 = *(&local48);
frost$core$MutableString$append$frost$core$Object($tmp1242, ((frost$core$Object*) $tmp1243));
// line 385
frost$core$MutableString* $tmp1244 = *(&local49);
frost$core$String* $tmp1245 = frost$core$MutableString$finish$R$frost$core$String($tmp1244);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
// unreffing REF($1679:frost.core.String)
frost$core$MutableString* $tmp1246 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
// unreffing result
*(&local49) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1247 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
// unreffing decl
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1248 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
// unreffing annotations
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1249 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
// unreffing dc
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1245;
block99:;
frost$core$Int64 $tmp1250 = (frost$core$Int64) {19};
frost$core$Bit $tmp1251 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1250);
bool $tmp1252 = $tmp1251.value;
if ($tmp1252) goto block107; else goto block108;
block107:;
org$frostlang$frostc$FixedArray** $tmp1253 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp1254 = *$tmp1253;
*(&local51) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
org$frostlang$frostc$FixedArray* $tmp1255 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
*(&local51) = $tmp1254;
// line 388
frost$core$MutableString* $tmp1256 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1256);
*(&local52) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$MutableString* $tmp1257 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
*(&local52) = $tmp1256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
// unreffing REF($1720:frost.core.MutableString)
// line 389
org$frostlang$frostc$FixedArray* $tmp1258 = *(&local51);
ITable* $tmp1259 = ((frost$collections$Iterable*) $tmp1258)->$class->itable;
while ($tmp1259->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1259 = $tmp1259->next;
}
$fn1261 $tmp1260 = $tmp1259->methods[0];
frost$collections$Iterator* $tmp1262 = $tmp1260(((frost$collections$Iterable*) $tmp1258));
goto block109;
block109:;
ITable* $tmp1263 = $tmp1262->$class->itable;
while ($tmp1263->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1263 = $tmp1263->next;
}
$fn1265 $tmp1264 = $tmp1263->methods[0];
frost$core$Bit $tmp1266 = $tmp1264($tmp1262);
bool $tmp1267 = $tmp1266.value;
if ($tmp1267) goto block111; else goto block110;
block110:;
*(&local53) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1268 = $tmp1262->$class->itable;
while ($tmp1268->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1268 = $tmp1268->next;
}
$fn1270 $tmp1269 = $tmp1268->methods[1];
frost$core$Object* $tmp1271 = $tmp1269($tmp1262);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1271)));
org$frostlang$frostc$ASTNode* $tmp1272 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
*(&local53) = ((org$frostlang$frostc$ASTNode*) $tmp1271);
// line 390
frost$core$MutableString* $tmp1273 = *(&local52);
org$frostlang$frostc$ASTNode* $tmp1274 = *(&local53);
frost$core$String* $tmp1275 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1274), &$s1276);
frost$core$MutableString$append$frost$core$String($tmp1273, $tmp1275);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
// unreffing REF($1760:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1271);
// unreffing REF($1748:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1277 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
// unreffing e
*(&local53) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block109;
block111:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
// unreffing REF($1737:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 392
frost$core$MutableString* $tmp1278 = *(&local52);
frost$core$String* $tmp1279 = frost$core$MutableString$finish$R$frost$core$String($tmp1278);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
// unreffing REF($1779:frost.core.String)
frost$core$MutableString* $tmp1280 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
// unreffing result
*(&local52) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1281 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
// unreffing entries
*(&local51) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1279;
block108:;
frost$core$Int64 $tmp1282 = (frost$core$Int64) {20};
frost$core$Bit $tmp1283 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1282);
bool $tmp1284 = $tmp1283.value;
if ($tmp1284) goto block112; else goto block113;
block112:;
org$frostlang$frostc$Position* $tmp1285 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1286 = *$tmp1285;
frost$core$String** $tmp1287 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1288 = *$tmp1287;
*(&local54) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
frost$core$String* $tmp1289 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
*(&local54) = $tmp1288;
org$frostlang$frostc$ASTNode** $tmp1290 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1291 = *$tmp1290;
*(&local55) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
org$frostlang$frostc$ASTNode* $tmp1292 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
*(&local55) = $tmp1291;
org$frostlang$frostc$ASTNode** $tmp1293 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1294 = *$tmp1293;
*(&local56) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
org$frostlang$frostc$ASTNode* $tmp1295 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
*(&local56) = $tmp1294;
org$frostlang$frostc$FixedArray** $tmp1296 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1297 = *$tmp1296;
*(&local57) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
org$frostlang$frostc$FixedArray* $tmp1298 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
*(&local57) = $tmp1297;
// line 395
frost$core$MutableString* $tmp1299 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1299);
*(&local58) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
frost$core$MutableString* $tmp1300 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
*(&local58) = $tmp1299;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
// unreffing REF($1839:frost.core.MutableString)
// line 396
frost$core$String* $tmp1301 = *(&local54);
frost$core$Bit $tmp1302 = frost$core$Bit$init$builtin_bit($tmp1301 != NULL);
bool $tmp1303 = $tmp1302.value;
if ($tmp1303) goto block114; else goto block115;
block114:;
// line 397
frost$core$MutableString* $tmp1304 = *(&local58);
frost$core$String* $tmp1305 = *(&local54);
frost$core$Bit $tmp1306 = frost$core$Bit$init$builtin_bit($tmp1305 != NULL);
bool $tmp1307 = $tmp1306.value;
if ($tmp1307) goto block116; else goto block117;
block117:;
frost$core$Int64 $tmp1308 = (frost$core$Int64) {397};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1309, $tmp1308, &$s1310);
abort(); // unreachable
block116:;
frost$core$String* $tmp1311 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1305, &$s1312);
frost$core$MutableString$append$frost$core$String($tmp1304, $tmp1311);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
// unreffing REF($1868:frost.core.String)
goto block115;
block115:;
// line 399
frost$core$MutableString* $tmp1313 = *(&local58);
org$frostlang$frostc$ASTNode* $tmp1314 = *(&local55);
frost$core$String* $tmp1315 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1316, ((frost$core$Object*) $tmp1314));
frost$core$String* $tmp1317 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1315, &$s1318);
org$frostlang$frostc$ASTNode* $tmp1319 = *(&local56);
frost$core$String* $tmp1320 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1317, ((frost$core$Object*) $tmp1319));
frost$core$String* $tmp1321 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1320, &$s1322);
frost$core$MutableString$append$frost$core$String($tmp1313, $tmp1321);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
// unreffing REF($1883:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
// unreffing REF($1882:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
// unreffing REF($1879:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
// unreffing REF($1878:frost.core.String)
// line 400
org$frostlang$frostc$FixedArray* $tmp1323 = *(&local57);
ITable* $tmp1324 = ((frost$collections$Iterable*) $tmp1323)->$class->itable;
while ($tmp1324->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1324 = $tmp1324->next;
}
$fn1326 $tmp1325 = $tmp1324->methods[0];
frost$collections$Iterator* $tmp1327 = $tmp1325(((frost$collections$Iterable*) $tmp1323));
goto block118;
block118:;
ITable* $tmp1328 = $tmp1327->$class->itable;
while ($tmp1328->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1328 = $tmp1328->next;
}
$fn1330 $tmp1329 = $tmp1328->methods[0];
frost$core$Bit $tmp1331 = $tmp1329($tmp1327);
bool $tmp1332 = $tmp1331.value;
if ($tmp1332) goto block120; else goto block119;
block119:;
*(&local59) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1333 = $tmp1327->$class->itable;
while ($tmp1333->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1333 = $tmp1333->next;
}
$fn1335 $tmp1334 = $tmp1333->methods[1];
frost$core$Object* $tmp1336 = $tmp1334($tmp1327);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1336)));
org$frostlang$frostc$ASTNode* $tmp1337 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local59) = ((org$frostlang$frostc$ASTNode*) $tmp1336);
// line 401
frost$core$MutableString* $tmp1338 = *(&local58);
org$frostlang$frostc$ASTNode* $tmp1339 = *(&local59);
frost$core$String* $tmp1340 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1339), &$s1341);
frost$core$MutableString$append$frost$core$String($tmp1338, $tmp1340);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
// unreffing REF($1925:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1336);
// unreffing REF($1913:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1342 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
// unreffing s
*(&local59) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block118;
block120:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
// unreffing REF($1902:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 403
frost$core$MutableString* $tmp1343 = *(&local58);
frost$core$MutableString$append$frost$core$String($tmp1343, &$s1344);
// line 404
frost$core$MutableString* $tmp1345 = *(&local58);
frost$core$String* $tmp1346 = frost$core$MutableString$finish$R$frost$core$String($tmp1345);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
// unreffing REF($1947:frost.core.String)
frost$core$MutableString* $tmp1347 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
// unreffing result
*(&local58) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1348 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
// unreffing statements
*(&local57) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1349 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
// unreffing list
*(&local56) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1350 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
// unreffing target
*(&local55) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1351 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
// unreffing label
*(&local54) = ((frost$core$String*) NULL);
return $tmp1346;
block113:;
frost$core$Int64 $tmp1352 = (frost$core$Int64) {21};
frost$core$Bit $tmp1353 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1352);
bool $tmp1354 = $tmp1353.value;
if ($tmp1354) goto block121; else goto block122;
block121:;
org$frostlang$frostc$Position* $tmp1355 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1356 = *$tmp1355;
frost$core$String** $tmp1357 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1358 = *$tmp1357;
*(&local60) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
frost$core$String* $tmp1359 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
*(&local60) = $tmp1358;
org$frostlang$frostc$FixedArray** $tmp1360 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1361 = *$tmp1360;
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
org$frostlang$frostc$FixedArray* $tmp1362 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
*(&local61) = $tmp1361;
// line 407
frost$core$String* $tmp1363 = *(&local60);
frost$core$String* $tmp1364 = frost$core$String$convert$R$frost$core$String($tmp1363);
frost$core$String* $tmp1365 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1364, &$s1366);
org$frostlang$frostc$FixedArray* $tmp1367 = *(&local61);
ITable* $tmp1368 = ((frost$collections$CollectionView*) $tmp1367)->$class->itable;
while ($tmp1368->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1368 = $tmp1368->next;
}
$fn1370 $tmp1369 = $tmp1368->methods[1];
frost$core$String* $tmp1371 = $tmp1369(((frost$collections$CollectionView*) $tmp1367));
frost$core$String* $tmp1372 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1365, $tmp1371);
frost$core$String* $tmp1373 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1372, &$s1374);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
// unreffing REF($2012:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
// unreffing REF($2011:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
// unreffing REF($2010:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
// unreffing REF($2006:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
// unreffing REF($2005:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp1375 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
// unreffing subtypes
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1376 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
// unreffing name
*(&local60) = ((frost$core$String*) NULL);
return $tmp1373;
block122:;
frost$core$Int64 $tmp1377 = (frost$core$Int64) {22};
frost$core$Bit $tmp1378 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1377);
bool $tmp1379 = $tmp1378.value;
if ($tmp1379) goto block123; else goto block124;
block123:;
org$frostlang$frostc$Position* $tmp1380 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1381 = *$tmp1380;
frost$core$String** $tmp1382 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1383 = *$tmp1382;
*(&local62) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
frost$core$String* $tmp1384 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
*(&local62) = $tmp1383;
// line 410
frost$core$String* $tmp1385 = *(&local62);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
frost$core$String* $tmp1386 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
// unreffing name
*(&local62) = ((frost$core$String*) NULL);
return $tmp1385;
block124:;
frost$core$Int64 $tmp1387 = (frost$core$Int64) {23};
frost$core$Bit $tmp1388 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1387);
bool $tmp1389 = $tmp1388.value;
if ($tmp1389) goto block125; else goto block126;
block125:;
org$frostlang$frostc$Position* $tmp1390 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1391 = *$tmp1390;
frost$core$String** $tmp1392 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1393 = *$tmp1392;
*(&local63) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
frost$core$String* $tmp1394 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
*(&local63) = $tmp1393;
org$frostlang$frostc$FixedArray** $tmp1395 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1396 = *$tmp1395;
*(&local64) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
org$frostlang$frostc$FixedArray* $tmp1397 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
*(&local64) = $tmp1396;
// line 413
frost$core$String* $tmp1398 = *(&local63);
frost$core$String* $tmp1399 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1400, $tmp1398);
frost$core$String* $tmp1401 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1399, &$s1402);
org$frostlang$frostc$FixedArray* $tmp1403 = *(&local64);
ITable* $tmp1404 = ((frost$collections$CollectionView*) $tmp1403)->$class->itable;
while ($tmp1404->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1404 = $tmp1404->next;
}
$fn1406 $tmp1405 = $tmp1404->methods[1];
frost$core$String* $tmp1407 = $tmp1405(((frost$collections$CollectionView*) $tmp1403));
frost$core$String* $tmp1408 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1401, $tmp1407);
frost$core$String* $tmp1409 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1408, &$s1410);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
// unreffing REF($2099:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
// unreffing REF($2098:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
// unreffing REF($2097:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
// unreffing REF($2093:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
// unreffing REF($2092:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp1411 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
// unreffing types
*(&local64) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1412 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
// unreffing name
*(&local63) = ((frost$core$String*) NULL);
return $tmp1409;
block126:;
frost$core$Int64 $tmp1413 = (frost$core$Int64) {24};
frost$core$Bit $tmp1414 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1413);
bool $tmp1415 = $tmp1414.value;
if ($tmp1415) goto block127; else goto block128;
block127:;
org$frostlang$frostc$Position* $tmp1416 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1417 = *$tmp1416;
org$frostlang$frostc$ASTNode** $tmp1418 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1419 = *$tmp1418;
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
org$frostlang$frostc$ASTNode* $tmp1420 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
*(&local65) = $tmp1419;
org$frostlang$frostc$FixedArray** $tmp1421 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1422 = *$tmp1421;
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
org$frostlang$frostc$FixedArray* $tmp1423 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
*(&local66) = $tmp1422;
org$frostlang$frostc$ASTNode** $tmp1424 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1425 = *$tmp1424;
*(&local67) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
org$frostlang$frostc$ASTNode* $tmp1426 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
*(&local67) = $tmp1425;
// line 416
frost$core$MutableString* $tmp1427 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$ASTNode* $tmp1428 = *(&local65);
frost$core$String* $tmp1429 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1430, ((frost$core$Object*) $tmp1428));
frost$core$String* $tmp1431 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1429, &$s1432);
frost$core$MutableString$init$frost$core$String($tmp1427, $tmp1431);
*(&local68) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
frost$core$MutableString* $tmp1433 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
*(&local68) = $tmp1427;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
// unreffing REF($2166:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
// unreffing REF($2165:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
// unreffing REF($2162:frost.core.MutableString)
// line 417
org$frostlang$frostc$FixedArray* $tmp1434 = *(&local66);
ITable* $tmp1435 = ((frost$collections$Iterable*) $tmp1434)->$class->itable;
while ($tmp1435->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1435 = $tmp1435->next;
}
$fn1437 $tmp1436 = $tmp1435->methods[0];
frost$collections$Iterator* $tmp1438 = $tmp1436(((frost$collections$Iterable*) $tmp1434));
goto block129;
block129:;
ITable* $tmp1439 = $tmp1438->$class->itable;
while ($tmp1439->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1439 = $tmp1439->next;
}
$fn1441 $tmp1440 = $tmp1439->methods[0];
frost$core$Bit $tmp1442 = $tmp1440($tmp1438);
bool $tmp1443 = $tmp1442.value;
if ($tmp1443) goto block131; else goto block130;
block130:;
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1444 = $tmp1438->$class->itable;
while ($tmp1444->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1444 = $tmp1444->next;
}
$fn1446 $tmp1445 = $tmp1444->methods[1];
frost$core$Object* $tmp1447 = $tmp1445($tmp1438);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1447)));
org$frostlang$frostc$ASTNode* $tmp1448 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
*(&local69) = ((org$frostlang$frostc$ASTNode*) $tmp1447);
// line 418
frost$core$MutableString* $tmp1449 = *(&local68);
org$frostlang$frostc$ASTNode* $tmp1450 = *(&local69);
frost$core$String* $tmp1451 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1450), &$s1452);
frost$core$MutableString$append$frost$core$String($tmp1449, $tmp1451);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
// unreffing REF($2212:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1447);
// unreffing REF($2200:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1453 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
// unreffing s
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block129;
block131:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
// unreffing REF($2189:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 420
frost$core$MutableString* $tmp1454 = *(&local68);
frost$core$MutableString$append$frost$core$String($tmp1454, &$s1455);
// line 421
org$frostlang$frostc$ASTNode* $tmp1456 = *(&local67);
frost$core$Bit $tmp1457 = frost$core$Bit$init$builtin_bit($tmp1456 != NULL);
bool $tmp1458 = $tmp1457.value;
if ($tmp1458) goto block132; else goto block133;
block132:;
// line 422
frost$core$MutableString* $tmp1459 = *(&local68);
org$frostlang$frostc$ASTNode* $tmp1460 = *(&local67);
frost$core$Bit $tmp1461 = frost$core$Bit$init$builtin_bit($tmp1460 != NULL);
bool $tmp1462 = $tmp1461.value;
if ($tmp1462) goto block134; else goto block135;
block135:;
frost$core$Int64 $tmp1463 = (frost$core$Int64) {422};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1464, $tmp1463, &$s1465);
abort(); // unreachable
block134:;
frost$core$String* $tmp1466 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1467, ((frost$core$Object*) $tmp1460));
frost$core$String* $tmp1468 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1466, &$s1469);
frost$core$MutableString$append$frost$core$String($tmp1459, $tmp1468);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
// unreffing REF($2250:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
// unreffing REF($2249:frost.core.String)
goto block133;
block133:;
// line 424
frost$core$MutableString* $tmp1470 = *(&local68);
frost$core$String* $tmp1471 = frost$core$MutableString$finish$R$frost$core$String($tmp1470);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
// unreffing REF($2261:frost.core.String)
frost$core$MutableString* $tmp1472 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
// unreffing result
*(&local68) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1473 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
// unreffing ifFalse
*(&local67) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1474 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
// unreffing ifTrue
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1475 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
// unreffing test
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1471;
block128:;
frost$core$Int64 $tmp1476 = (frost$core$Int64) {25};
frost$core$Bit $tmp1477 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1476);
bool $tmp1478 = $tmp1477.value;
if ($tmp1478) goto block136; else goto block137;
block136:;
org$frostlang$frostc$Position* $tmp1479 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1480 = *$tmp1479;
frost$core$UInt64* $tmp1481 = (frost$core$UInt64*) (param0->$data + 16);
frost$core$UInt64 $tmp1482 = *$tmp1481;
*(&local70) = $tmp1482;
// line 427
frost$core$UInt64 $tmp1483 = *(&local70);
frost$core$String* $tmp1484 = frost$core$UInt64$convert$R$frost$core$String($tmp1483);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
// unreffing REF($2299:frost.core.String)
return $tmp1484;
block137:;
frost$core$Int64 $tmp1485 = (frost$core$Int64) {26};
frost$core$Bit $tmp1486 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1485);
bool $tmp1487 = $tmp1486.value;
if ($tmp1487) goto block138; else goto block139;
block138:;
org$frostlang$frostc$Position* $tmp1488 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1489 = *$tmp1488;
org$frostlang$frostc$IR$Value** $tmp1490 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp1491 = *$tmp1490;
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
org$frostlang$frostc$IR$Value* $tmp1492 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
*(&local71) = $tmp1491;
// line 430
org$frostlang$frostc$IR$Value* $tmp1493 = *(&local71);
$fn1495 $tmp1494 = ($fn1495) $tmp1493->$class->vtable[0];
frost$core$String* $tmp1496 = $tmp1494($tmp1493);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
// unreffing REF($2324:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp1497 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
// unreffing value
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp1496;
block139:;
frost$core$Int64 $tmp1498 = (frost$core$Int64) {27};
frost$core$Bit $tmp1499 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1498);
bool $tmp1500 = $tmp1499.value;
if ($tmp1500) goto block140; else goto block141;
block140:;
org$frostlang$frostc$Position* $tmp1501 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1502 = *$tmp1501;
frost$core$String** $tmp1503 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1504 = *$tmp1503;
*(&local72) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
frost$core$String* $tmp1505 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
*(&local72) = $tmp1504;
org$frostlang$frostc$FixedArray** $tmp1506 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1507 = *$tmp1506;
*(&local73) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
org$frostlang$frostc$FixedArray* $tmp1508 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
*(&local73) = $tmp1507;
// line 433
frost$core$MutableString* $tmp1509 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1509);
*(&local74) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
frost$core$MutableString* $tmp1510 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1510));
*(&local74) = $tmp1509;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
// unreffing REF($2361:frost.core.MutableString)
// line 434
frost$core$String* $tmp1511 = *(&local72);
frost$core$Bit $tmp1512 = frost$core$Bit$init$builtin_bit($tmp1511 != NULL);
bool $tmp1513 = $tmp1512.value;
if ($tmp1513) goto block142; else goto block143;
block142:;
// line 435
frost$core$MutableString* $tmp1514 = *(&local74);
frost$core$String* $tmp1515 = *(&local72);
frost$core$Bit $tmp1516 = frost$core$Bit$init$builtin_bit($tmp1515 != NULL);
bool $tmp1517 = $tmp1516.value;
if ($tmp1517) goto block144; else goto block145;
block145:;
frost$core$Int64 $tmp1518 = (frost$core$Int64) {435};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1519, $tmp1518, &$s1520);
abort(); // unreachable
block144:;
frost$core$String* $tmp1521 = frost$core$String$convert$R$frost$core$String($tmp1515);
frost$core$String* $tmp1522 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1521, &$s1523);
frost$core$MutableString$append$frost$core$String($tmp1514, $tmp1522);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
// unreffing REF($2391:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
// unreffing REF($2390:frost.core.String)
goto block143;
block143:;
// line 437
frost$core$MutableString* $tmp1524 = *(&local74);
frost$core$MutableString$append$frost$core$String($tmp1524, &$s1525);
// line 438
org$frostlang$frostc$FixedArray* $tmp1526 = *(&local73);
ITable* $tmp1527 = ((frost$collections$Iterable*) $tmp1526)->$class->itable;
while ($tmp1527->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1527 = $tmp1527->next;
}
$fn1529 $tmp1528 = $tmp1527->methods[0];
frost$collections$Iterator* $tmp1530 = $tmp1528(((frost$collections$Iterable*) $tmp1526));
goto block146;
block146:;
ITable* $tmp1531 = $tmp1530->$class->itable;
while ($tmp1531->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1531 = $tmp1531->next;
}
$fn1533 $tmp1532 = $tmp1531->methods[0];
frost$core$Bit $tmp1534 = $tmp1532($tmp1530);
bool $tmp1535 = $tmp1534.value;
if ($tmp1535) goto block148; else goto block147;
block147:;
*(&local75) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1536 = $tmp1530->$class->itable;
while ($tmp1536->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1536 = $tmp1536->next;
}
$fn1538 $tmp1537 = $tmp1536->methods[1];
frost$core$Object* $tmp1539 = $tmp1537($tmp1530);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1539)));
org$frostlang$frostc$ASTNode* $tmp1540 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1540));
*(&local75) = ((org$frostlang$frostc$ASTNode*) $tmp1539);
// line 439
frost$core$MutableString* $tmp1541 = *(&local74);
org$frostlang$frostc$ASTNode* $tmp1542 = *(&local75);
frost$core$String* $tmp1543 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1542), &$s1544);
frost$core$MutableString$append$frost$core$String($tmp1541, $tmp1543);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1543));
// unreffing REF($2431:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1539);
// unreffing REF($2419:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1545 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
// unreffing s
*(&local75) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block146;
block148:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
// unreffing REF($2408:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 441
frost$core$MutableString* $tmp1546 = *(&local74);
frost$core$MutableString$append$frost$core$String($tmp1546, &$s1547);
// line 442
frost$core$MutableString* $tmp1548 = *(&local74);
frost$core$String* $tmp1549 = frost$core$MutableString$finish$R$frost$core$String($tmp1548);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1549));
// unreffing REF($2453:frost.core.String)
frost$core$MutableString* $tmp1550 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1550));
// unreffing result
*(&local74) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1551 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
// unreffing statements
*(&local73) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1552 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
// unreffing label
*(&local72) = ((frost$core$String*) NULL);
return $tmp1549;
block141:;
frost$core$Int64 $tmp1553 = (frost$core$Int64) {28};
frost$core$Bit $tmp1554 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1553);
bool $tmp1555 = $tmp1554.value;
if ($tmp1555) goto block149; else goto block150;
block149:;
org$frostlang$frostc$Position* $tmp1556 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1557 = *$tmp1556;
org$frostlang$frostc$ASTNode** $tmp1558 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1559 = *$tmp1558;
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
org$frostlang$frostc$ASTNode* $tmp1560 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
*(&local76) = $tmp1559;
org$frostlang$frostc$FixedArray** $tmp1561 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1562 = *$tmp1561;
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
org$frostlang$frostc$FixedArray* $tmp1563 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
*(&local77) = $tmp1562;
org$frostlang$frostc$FixedArray** $tmp1564 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1565 = *$tmp1564;
*(&local78) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
org$frostlang$frostc$FixedArray* $tmp1566 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
*(&local78) = $tmp1565;
// line 445
frost$core$MutableString* $tmp1567 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$ASTNode* $tmp1568 = *(&local76);
frost$core$String* $tmp1569 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1570, ((frost$core$Object*) $tmp1568));
frost$core$String* $tmp1571 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1569, &$s1572);
frost$core$MutableString$init$frost$core$String($tmp1567, $tmp1571);
*(&local79) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
frost$core$MutableString* $tmp1573 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1573));
*(&local79) = $tmp1567;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1571));
// unreffing REF($2513:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
// unreffing REF($2512:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
// unreffing REF($2509:frost.core.MutableString)
// line 446
org$frostlang$frostc$FixedArray* $tmp1574 = *(&local77);
ITable* $tmp1575 = ((frost$collections$Iterable*) $tmp1574)->$class->itable;
while ($tmp1575->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1575 = $tmp1575->next;
}
$fn1577 $tmp1576 = $tmp1575->methods[0];
frost$collections$Iterator* $tmp1578 = $tmp1576(((frost$collections$Iterable*) $tmp1574));
goto block151;
block151:;
ITable* $tmp1579 = $tmp1578->$class->itable;
while ($tmp1579->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1579 = $tmp1579->next;
}
$fn1581 $tmp1580 = $tmp1579->methods[0];
frost$core$Bit $tmp1582 = $tmp1580($tmp1578);
bool $tmp1583 = $tmp1582.value;
if ($tmp1583) goto block153; else goto block152;
block152:;
*(&local80) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1584 = $tmp1578->$class->itable;
while ($tmp1584->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1584 = $tmp1584->next;
}
$fn1586 $tmp1585 = $tmp1584->methods[1];
frost$core$Object* $tmp1587 = $tmp1585($tmp1578);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1587)));
org$frostlang$frostc$ASTNode* $tmp1588 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1588));
*(&local80) = ((org$frostlang$frostc$ASTNode*) $tmp1587);
// line 447
frost$core$MutableString* $tmp1589 = *(&local79);
org$frostlang$frostc$ASTNode* $tmp1590 = *(&local80);
frost$core$String* $tmp1591 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1590), &$s1592);
frost$core$MutableString$append$frost$core$String($tmp1589, $tmp1591);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
// unreffing REF($2559:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1587);
// unreffing REF($2547:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1593 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
// unreffing w
*(&local80) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block151;
block153:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
// unreffing REF($2536:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 449
org$frostlang$frostc$FixedArray* $tmp1594 = *(&local78);
frost$core$Bit $tmp1595 = frost$core$Bit$init$builtin_bit($tmp1594 != NULL);
bool $tmp1596 = $tmp1595.value;
if ($tmp1596) goto block154; else goto block155;
block154:;
// line 450
frost$core$MutableString* $tmp1597 = *(&local79);
org$frostlang$frostc$FixedArray* $tmp1598 = *(&local78);
frost$core$Bit $tmp1599 = frost$core$Bit$init$builtin_bit($tmp1598 != NULL);
bool $tmp1600 = $tmp1599.value;
if ($tmp1600) goto block156; else goto block157;
block157:;
frost$core$Int64 $tmp1601 = (frost$core$Int64) {450};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1602, $tmp1601, &$s1603);
abort(); // unreachable
block156:;
frost$core$String* $tmp1604 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1598), &$s1605);
frost$core$MutableString$append$frost$core$String($tmp1597, $tmp1604);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
// unreffing REF($2593:frost.core.String)
goto block155;
block155:;
// line 452
frost$core$MutableString* $tmp1606 = *(&local79);
frost$core$MutableString$append$frost$core$String($tmp1606, &$s1607);
// line 453
frost$core$MutableString* $tmp1608 = *(&local79);
frost$core$String* $tmp1609 = frost$core$MutableString$finish$R$frost$core$String($tmp1608);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1609));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1609));
// unreffing REF($2604:frost.core.String)
frost$core$MutableString* $tmp1610 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1610));
// unreffing result
*(&local79) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1611 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
// unreffing other
*(&local78) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1612 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
// unreffing whens
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1613 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
// unreffing value
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1609;
block150:;
frost$core$Int64 $tmp1614 = (frost$core$Int64) {29};
frost$core$Bit $tmp1615 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1614);
bool $tmp1616 = $tmp1615.value;
if ($tmp1616) goto block158; else goto block159;
block158:;
org$frostlang$frostc$Position* $tmp1617 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1618 = *$tmp1617;
org$frostlang$frostc$ASTNode** $tmp1619 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1620 = *$tmp1619;
*(&local81) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
org$frostlang$frostc$ASTNode* $tmp1621 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
*(&local81) = $tmp1620;
org$frostlang$frostc$FixedArray** $tmp1622 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1623 = *$tmp1622;
*(&local82) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
org$frostlang$frostc$FixedArray* $tmp1624 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
*(&local82) = $tmp1623;
org$frostlang$frostc$MethodDecl$Kind* $tmp1625 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp1626 = *$tmp1625;
*(&local83) = $tmp1626;
frost$core$String** $tmp1627 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp1628 = *$tmp1627;
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1628));
frost$core$String* $tmp1629 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
*(&local84) = $tmp1628;
org$frostlang$frostc$FixedArray** $tmp1630 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1631 = *$tmp1630;
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1631));
org$frostlang$frostc$FixedArray* $tmp1632 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1632));
*(&local85) = $tmp1631;
org$frostlang$frostc$FixedArray** $tmp1633 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp1634 = *$tmp1633;
*(&local86) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
org$frostlang$frostc$FixedArray* $tmp1635 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
*(&local86) = $tmp1634;
org$frostlang$frostc$ASTNode** $tmp1636 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
org$frostlang$frostc$ASTNode* $tmp1637 = *$tmp1636;
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1637));
org$frostlang$frostc$ASTNode* $tmp1638 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
*(&local87) = $tmp1637;
org$frostlang$frostc$FixedArray** $tmp1639 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp1640 = *$tmp1639;
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
org$frostlang$frostc$FixedArray* $tmp1641 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
*(&local88) = $tmp1640;
// line 457
frost$core$MutableString* $tmp1642 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1642);
*(&local89) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
frost$core$MutableString* $tmp1643 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
*(&local89) = $tmp1642;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
// unreffing REF($2704:frost.core.MutableString)
// line 458
org$frostlang$frostc$ASTNode* $tmp1644 = *(&local81);
frost$core$Bit $tmp1645 = frost$core$Bit$init$builtin_bit($tmp1644 != NULL);
bool $tmp1646 = $tmp1645.value;
if ($tmp1646) goto block160; else goto block161;
block160:;
// line 459
frost$core$MutableString* $tmp1647 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1648 = *(&local81);
frost$core$Bit $tmp1649 = frost$core$Bit$init$builtin_bit($tmp1648 != NULL);
bool $tmp1650 = $tmp1649.value;
if ($tmp1650) goto block162; else goto block163;
block163:;
frost$core$Int64 $tmp1651 = (frost$core$Int64) {459};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1652, $tmp1651, &$s1653);
abort(); // unreachable
block162:;
frost$core$String* $tmp1654 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1648), &$s1655);
frost$core$MutableString$append$frost$core$String($tmp1647, $tmp1654);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
// unreffing REF($2733:frost.core.String)
goto block161;
block161:;
// line 461
org$frostlang$frostc$FixedArray* $tmp1656 = *(&local82);
ITable* $tmp1657 = ((frost$collections$Iterable*) $tmp1656)->$class->itable;
while ($tmp1657->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1657 = $tmp1657->next;
}
$fn1659 $tmp1658 = $tmp1657->methods[0];
frost$collections$Iterator* $tmp1660 = $tmp1658(((frost$collections$Iterable*) $tmp1656));
goto block164;
block164:;
ITable* $tmp1661 = $tmp1660->$class->itable;
while ($tmp1661->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1661 = $tmp1661->next;
}
$fn1663 $tmp1662 = $tmp1661->methods[0];
frost$core$Bit $tmp1664 = $tmp1662($tmp1660);
bool $tmp1665 = $tmp1664.value;
if ($tmp1665) goto block166; else goto block165;
block165:;
*(&local90) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1666 = $tmp1660->$class->itable;
while ($tmp1666->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1666 = $tmp1666->next;
}
$fn1668 $tmp1667 = $tmp1666->methods[1];
frost$core$Object* $tmp1669 = $tmp1667($tmp1660);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1669)));
org$frostlang$frostc$ASTNode* $tmp1670 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
*(&local90) = ((org$frostlang$frostc$ASTNode*) $tmp1669);
// line 462
frost$core$MutableString* $tmp1671 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1672 = *(&local90);
frost$core$String* $tmp1673 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1672), &$s1674);
frost$core$MutableString$append$frost$core$String($tmp1671, $tmp1673);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
// unreffing REF($2767:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1669);
// unreffing REF($2755:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1675 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
// unreffing a
*(&local90) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block164;
block166:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1660));
// unreffing REF($2744:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 464
org$frostlang$frostc$MethodDecl$Kind $tmp1676 = *(&local83);
frost$core$Int64 $tmp1677 = $tmp1676.$rawValue;
frost$core$Int64 $tmp1678 = (frost$core$Int64) {0};
frost$core$Bit $tmp1679 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1677, $tmp1678);
bool $tmp1680 = $tmp1679.value;
if ($tmp1680) goto block168; else goto block169;
block168:;
// line 465
frost$core$MutableString* $tmp1681 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1681, &$s1682);
goto block167;
block169:;
frost$core$Int64 $tmp1683 = (frost$core$Int64) {1};
frost$core$Bit $tmp1684 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1677, $tmp1683);
bool $tmp1685 = $tmp1684.value;
if ($tmp1685) goto block170; else goto block171;
block170:;
// line 466
frost$core$MutableString* $tmp1686 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1686, &$s1687);
goto block167;
block171:;
frost$core$Int64 $tmp1688 = (frost$core$Int64) {2};
frost$core$Bit $tmp1689 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1677, $tmp1688);
bool $tmp1690 = $tmp1689.value;
if ($tmp1690) goto block172; else goto block167;
block172:;
goto block167;
block167:;
// line 469
frost$core$MutableString* $tmp1691 = *(&local89);
frost$core$String* $tmp1692 = *(&local84);
frost$core$MutableString$append$frost$core$String($tmp1691, $tmp1692);
// line 470
org$frostlang$frostc$FixedArray* $tmp1693 = *(&local85);
frost$core$Bit $tmp1694 = frost$core$Bit$init$builtin_bit($tmp1693 != NULL);
bool $tmp1695 = $tmp1694.value;
if ($tmp1695) goto block173; else goto block174;
block173:;
// line 471
frost$core$MutableString* $tmp1696 = *(&local89);
org$frostlang$frostc$FixedArray* $tmp1697 = *(&local85);
frost$core$Bit $tmp1698 = frost$core$Bit$init$builtin_bit($tmp1697 != NULL);
bool $tmp1699 = $tmp1698.value;
if ($tmp1699) goto block175; else goto block176;
block176:;
frost$core$Int64 $tmp1700 = (frost$core$Int64) {471};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1701, $tmp1700, &$s1702);
abort(); // unreachable
block175:;
ITable* $tmp1703 = ((frost$collections$CollectionView*) $tmp1697)->$class->itable;
while ($tmp1703->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1703 = $tmp1703->next;
}
$fn1705 $tmp1704 = $tmp1703->methods[1];
frost$core$String* $tmp1706 = $tmp1704(((frost$collections$CollectionView*) $tmp1697));
frost$core$String* $tmp1707 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1708, $tmp1706);
frost$core$String* $tmp1709 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1707, &$s1710);
frost$core$MutableString$append$frost$core$String($tmp1696, $tmp1709);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
// unreffing REF($2832:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
// unreffing REF($2831:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
// unreffing REF($2830:frost.core.String)
goto block174;
block174:;
// line 473
frost$core$MutableString* $tmp1711 = *(&local89);
org$frostlang$frostc$FixedArray* $tmp1712 = *(&local86);
ITable* $tmp1713 = ((frost$collections$CollectionView*) $tmp1712)->$class->itable;
while ($tmp1713->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1713 = $tmp1713->next;
}
$fn1715 $tmp1714 = $tmp1713->methods[1];
frost$core$String* $tmp1716 = $tmp1714(((frost$collections$CollectionView*) $tmp1712));
frost$core$String* $tmp1717 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1718, $tmp1716);
frost$core$String* $tmp1719 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1717, &$s1720);
frost$core$MutableString$append$frost$core$String($tmp1711, $tmp1719);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
// unreffing REF($2851:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
// unreffing REF($2850:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
// unreffing REF($2849:frost.core.String)
// line 474
org$frostlang$frostc$ASTNode* $tmp1721 = *(&local87);
frost$core$Bit $tmp1722 = frost$core$Bit$init$builtin_bit($tmp1721 != NULL);
bool $tmp1723 = $tmp1722.value;
if ($tmp1723) goto block177; else goto block178;
block177:;
// line 475
frost$core$MutableString* $tmp1724 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1725 = *(&local87);
frost$core$Bit $tmp1726 = frost$core$Bit$init$builtin_bit($tmp1725 != NULL);
bool $tmp1727 = $tmp1726.value;
if ($tmp1727) goto block179; else goto block180;
block180:;
frost$core$Int64 $tmp1728 = (frost$core$Int64) {475};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1729, $tmp1728, &$s1730);
abort(); // unreachable
block179:;
frost$core$String* $tmp1731 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1732, ((frost$core$Object*) $tmp1725));
frost$core$String* $tmp1733 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1731, &$s1734);
frost$core$MutableString$append$frost$core$String($tmp1724, $tmp1733);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
// unreffing REF($2880:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
// unreffing REF($2879:frost.core.String)
goto block178;
block178:;
// line 477
org$frostlang$frostc$FixedArray* $tmp1735 = *(&local88);
frost$core$Bit $tmp1736 = frost$core$Bit$init$builtin_bit($tmp1735 != NULL);
bool $tmp1737 = $tmp1736.value;
if ($tmp1737) goto block181; else goto block182;
block181:;
// line 478
frost$core$MutableString* $tmp1738 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1738, &$s1739);
// line 479
org$frostlang$frostc$FixedArray* $tmp1740 = *(&local88);
frost$core$Bit $tmp1741 = frost$core$Bit$init$builtin_bit($tmp1740 != NULL);
bool $tmp1742 = $tmp1741.value;
if ($tmp1742) goto block183; else goto block184;
block184:;
frost$core$Int64 $tmp1743 = (frost$core$Int64) {479};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1744, $tmp1743, &$s1745);
abort(); // unreachable
block183:;
ITable* $tmp1746 = ((frost$collections$Iterable*) $tmp1740)->$class->itable;
while ($tmp1746->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1746 = $tmp1746->next;
}
$fn1748 $tmp1747 = $tmp1746->methods[0];
frost$collections$Iterator* $tmp1749 = $tmp1747(((frost$collections$Iterable*) $tmp1740));
goto block185;
block185:;
ITable* $tmp1750 = $tmp1749->$class->itable;
while ($tmp1750->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1750 = $tmp1750->next;
}
$fn1752 $tmp1751 = $tmp1750->methods[0];
frost$core$Bit $tmp1753 = $tmp1751($tmp1749);
bool $tmp1754 = $tmp1753.value;
if ($tmp1754) goto block187; else goto block186;
block186:;
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1755 = $tmp1749->$class->itable;
while ($tmp1755->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1755 = $tmp1755->next;
}
$fn1757 $tmp1756 = $tmp1755->methods[1];
frost$core$Object* $tmp1758 = $tmp1756($tmp1749);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1758)));
org$frostlang$frostc$ASTNode* $tmp1759 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
*(&local91) = ((org$frostlang$frostc$ASTNode*) $tmp1758);
// line 480
frost$core$MutableString* $tmp1760 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1761 = *(&local91);
frost$core$String* $tmp1762 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1761), &$s1763);
frost$core$MutableString$append$frost$core$String($tmp1760, $tmp1762);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1762));
// unreffing REF($2933:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1758);
// unreffing REF($2921:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1764 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1764));
// unreffing s
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block185;
block187:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1749));
// unreffing REF($2910:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 482
frost$core$MutableString* $tmp1765 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1765, &$s1766);
goto block182;
block182:;
// line 484
frost$core$MutableString* $tmp1767 = *(&local89);
frost$core$String* $tmp1768 = frost$core$MutableString$finish$R$frost$core$String($tmp1767);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
// unreffing REF($2956:frost.core.String)
frost$core$MutableString* $tmp1769 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
// unreffing result
*(&local89) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1770 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
// unreffing statements
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1771 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1771));
// unreffing returnType
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1772 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
// unreffing parameters
*(&local86) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1773 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1773));
// unreffing generics
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1774 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1774));
// unreffing name
*(&local84) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1775 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
// unreffing annotations
*(&local82) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1776 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
// unreffing dc
*(&local81) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1768;
block159:;
frost$core$Int64 $tmp1777 = (frost$core$Int64) {30};
frost$core$Bit $tmp1778 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1777);
bool $tmp1779 = $tmp1778.value;
if ($tmp1779) goto block188; else goto block189;
block188:;
org$frostlang$frostc$Position* $tmp1780 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1781 = *$tmp1780;
org$frostlang$frostc$parser$Token$Kind* $tmp1782 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp1783 = *$tmp1782;
*(&local92) = $tmp1783;
org$frostlang$frostc$FixedArray** $tmp1784 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1785 = *$tmp1784;
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1785));
org$frostlang$frostc$FixedArray* $tmp1786 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1786));
*(&local93) = $tmp1785;
org$frostlang$frostc$ASTNode** $tmp1787 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1788 = *$tmp1787;
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
org$frostlang$frostc$ASTNode* $tmp1789 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
*(&local94) = $tmp1788;
// line 487
*(&local95) = ((frost$core$String*) NULL);
// line 488
org$frostlang$frostc$parser$Token$Kind $tmp1790 = *(&local92);
frost$core$Int64 $tmp1791 = $tmp1790.$rawValue;
frost$core$Int64 $tmp1792 = (frost$core$Int64) {94};
frost$core$Bit $tmp1793 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1791, $tmp1792);
bool $tmp1794 = $tmp1793.value;
if ($tmp1794) goto block191; else goto block192;
block191:;
// line 490
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1795));
frost$core$String* $tmp1796 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
*(&local95) = &$s1797;
goto block190;
block192:;
frost$core$Int64 $tmp1798 = (frost$core$Int64) {95};
frost$core$Bit $tmp1799 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1791, $tmp1798);
bool $tmp1800 = $tmp1799.value;
if ($tmp1800) goto block193; else goto block194;
block193:;
// line 493
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1801));
frost$core$String* $tmp1802 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
*(&local95) = &$s1803;
goto block190;
block194:;
frost$core$Int64 $tmp1804 = (frost$core$Int64) {96};
frost$core$Bit $tmp1805 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1791, $tmp1804);
bool $tmp1806 = $tmp1805.value;
if ($tmp1806) goto block195; else goto block196;
block195:;
// line 496
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1807));
frost$core$String* $tmp1808 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1808));
*(&local95) = &$s1809;
goto block190;
block196:;
frost$core$Int64 $tmp1810 = (frost$core$Int64) {97};
frost$core$Bit $tmp1811 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1791, $tmp1810);
bool $tmp1812 = $tmp1811.value;
if ($tmp1812) goto block197; else goto block190;
block197:;
// line 499
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1813));
frost$core$String* $tmp1814 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
*(&local95) = &$s1815;
goto block190;
block190:;
// line 502
org$frostlang$frostc$FixedArray* $tmp1816 = *(&local93);
ITable* $tmp1817 = ((frost$collections$CollectionView*) $tmp1816)->$class->itable;
while ($tmp1817->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1817 = $tmp1817->next;
}
$fn1819 $tmp1818 = $tmp1817->methods[1];
frost$core$String* $tmp1820 = $tmp1818(((frost$collections$CollectionView*) $tmp1816));
frost$core$String* $tmp1821 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1822, $tmp1820);
frost$core$String* $tmp1823 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1821, &$s1824);
frost$core$String* $tmp1825 = *(&local95);
frost$core$String* $tmp1826 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1823, $tmp1825);
frost$core$String* $tmp1827 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1826, &$s1828);
*(&local96) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
frost$core$String* $tmp1829 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
*(&local96) = $tmp1827;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
// unreffing REF($3092:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
// unreffing REF($3091:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
// unreffing REF($3089:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
// unreffing REF($3088:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1820));
// unreffing REF($3087:frost.core.String)
// line 503
org$frostlang$frostc$ASTNode* $tmp1830 = *(&local94);
frost$core$Bit $tmp1831 = frost$core$Bit$init$builtin_bit($tmp1830 != NULL);
bool $tmp1832 = $tmp1831.value;
if ($tmp1832) goto block198; else goto block199;
block198:;
// line 504
frost$core$String* $tmp1833 = *(&local96);
frost$core$String* $tmp1834 = frost$core$String$convert$R$frost$core$String($tmp1833);
frost$core$String* $tmp1835 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1834, &$s1836);
org$frostlang$frostc$ASTNode* $tmp1837 = *(&local94);
frost$core$Bit $tmp1838 = frost$core$Bit$init$builtin_bit($tmp1837 != NULL);
bool $tmp1839 = $tmp1838.value;
if ($tmp1839) goto block200; else goto block201;
block201:;
frost$core$Int64 $tmp1840 = (frost$core$Int64) {504};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1841, $tmp1840, &$s1842);
abort(); // unreachable
block200:;
frost$core$String* $tmp1843 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1835, ((frost$core$Object*) $tmp1837));
frost$core$String* $tmp1844 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1843, &$s1845);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
// unreffing REF($3135:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1843));
// unreffing REF($3134:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
// unreffing REF($3124:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
// unreffing REF($3123:frost.core.String)
frost$core$String* $tmp1846 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
// unreffing partial
*(&local96) = ((frost$core$String*) NULL);
frost$core$String* $tmp1847 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
// unreffing yield
*(&local95) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1848 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1848));
// unreffing returnType
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1849 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
// unreffing paramTypes
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1844;
block199:;
// line 506
frost$core$String* $tmp1850 = *(&local96);
frost$core$String* $tmp1851 = frost$core$String$convert$R$frost$core$String($tmp1850);
frost$core$String* $tmp1852 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1851, &$s1853);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
// unreffing REF($3174:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
// unreffing REF($3173:frost.core.String)
frost$core$String* $tmp1854 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
// unreffing partial
*(&local96) = ((frost$core$String*) NULL);
frost$core$String* $tmp1855 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1855));
// unreffing yield
*(&local95) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1856 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
// unreffing returnType
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1857 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
// unreffing paramTypes
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1852;
block189:;
frost$core$Int64 $tmp1858 = (frost$core$Int64) {31};
frost$core$Bit $tmp1859 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1858);
bool $tmp1860 = $tmp1859.value;
if ($tmp1860) goto block202; else goto block203;
block202:;
// line 509
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1861));
return &$s1862;
block203:;
frost$core$Int64 $tmp1863 = (frost$core$Int64) {32};
frost$core$Bit $tmp1864 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1863);
bool $tmp1865 = $tmp1864.value;
if ($tmp1865) goto block204; else goto block205;
block204:;
org$frostlang$frostc$Position* $tmp1866 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1867 = *$tmp1866;
org$frostlang$frostc$ASTNode** $tmp1868 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1869 = *$tmp1868;
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
org$frostlang$frostc$ASTNode* $tmp1870 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
*(&local97) = $tmp1869;
// line 512
org$frostlang$frostc$ASTNode* $tmp1871 = *(&local97);
frost$core$String* $tmp1872 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1871), &$s1873);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
// unreffing REF($3230:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1874 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
// unreffing base
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1872;
block205:;
frost$core$Int64 $tmp1875 = (frost$core$Int64) {33};
frost$core$Bit $tmp1876 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1875);
bool $tmp1877 = $tmp1876.value;
if ($tmp1877) goto block206; else goto block207;
block206:;
org$frostlang$frostc$Position* $tmp1878 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1879 = *$tmp1878;
frost$core$String** $tmp1880 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1881 = *$tmp1880;
*(&local98) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1881));
frost$core$String* $tmp1882 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
*(&local98) = $tmp1881;
// line 515
frost$core$String* $tmp1883 = *(&local98);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
frost$core$String* $tmp1884 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1884));
// unreffing name
*(&local98) = ((frost$core$String*) NULL);
return $tmp1883;
block207:;
frost$core$Int64 $tmp1885 = (frost$core$Int64) {34};
frost$core$Bit $tmp1886 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1885);
bool $tmp1887 = $tmp1886.value;
if ($tmp1887) goto block208; else goto block209;
block208:;
org$frostlang$frostc$Position* $tmp1888 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1889 = *$tmp1888;
frost$core$String** $tmp1890 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1891 = *$tmp1890;
*(&local99) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
frost$core$String* $tmp1892 = *(&local99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
*(&local99) = $tmp1891;
org$frostlang$frostc$ASTNode** $tmp1893 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1894 = *$tmp1893;
*(&local100) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1894));
org$frostlang$frostc$ASTNode* $tmp1895 = *(&local100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
*(&local100) = $tmp1894;
// line 518
frost$core$String* $tmp1896 = *(&local99);
frost$core$String* $tmp1897 = frost$core$String$convert$R$frost$core$String($tmp1896);
frost$core$String* $tmp1898 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1897, &$s1899);
org$frostlang$frostc$ASTNode* $tmp1900 = *(&local100);
frost$core$String* $tmp1901 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1898, ((frost$core$Object*) $tmp1900));
frost$core$String* $tmp1902 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1901, &$s1903);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
// unreffing REF($3298:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
// unreffing REF($3297:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1898));
// unreffing REF($3294:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
// unreffing REF($3293:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1904 = *(&local100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
// unreffing type
*(&local100) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1905 = *(&local99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
// unreffing name
*(&local99) = ((frost$core$String*) NULL);
return $tmp1902;
block209:;
frost$core$Int64 $tmp1906 = (frost$core$Int64) {35};
frost$core$Bit $tmp1907 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1906);
bool $tmp1908 = $tmp1907.value;
if ($tmp1908) goto block210; else goto block211;
block210:;
org$frostlang$frostc$Position* $tmp1909 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1910 = *$tmp1909;
org$frostlang$frostc$parser$Token$Kind* $tmp1911 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp1912 = *$tmp1911;
*(&local101) = $tmp1912;
org$frostlang$frostc$ASTNode** $tmp1913 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1914 = *$tmp1913;
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
org$frostlang$frostc$ASTNode* $tmp1915 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
*(&local102) = $tmp1914;
// line 521
org$frostlang$frostc$parser$Token$Kind $tmp1916 = *(&local101);
frost$core$String* $tmp1917 = org$frostlang$frostc$parser$Token$Kind$convert$R$frost$core$String($tmp1916);
frost$core$String* $tmp1918 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1917, &$s1919);
org$frostlang$frostc$ASTNode* $tmp1920 = *(&local102);
frost$core$String* $tmp1921 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1918, ((frost$core$Object*) $tmp1920));
frost$core$String* $tmp1922 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1921, &$s1923);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
// unreffing REF($3349:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
// unreffing REF($3348:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1918));
// unreffing REF($3345:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
// unreffing REF($3344:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1924 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
// unreffing base
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1922;
block211:;
frost$core$Int64 $tmp1925 = (frost$core$Int64) {36};
frost$core$Bit $tmp1926 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1925);
bool $tmp1927 = $tmp1926.value;
if ($tmp1927) goto block212; else goto block213;
block212:;
org$frostlang$frostc$Position* $tmp1928 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1929 = *$tmp1928;
org$frostlang$frostc$ASTNode** $tmp1930 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1931 = *$tmp1930;
*(&local103) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
org$frostlang$frostc$ASTNode* $tmp1932 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
*(&local103) = $tmp1931;
frost$core$Bit* $tmp1933 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp1934 = *$tmp1933;
*(&local104) = $tmp1934;
org$frostlang$frostc$ASTNode** $tmp1935 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
org$frostlang$frostc$ASTNode* $tmp1936 = *$tmp1935;
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1936));
org$frostlang$frostc$ASTNode* $tmp1937 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1937));
*(&local105) = $tmp1936;
org$frostlang$frostc$ASTNode** $tmp1938 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp1939 = *$tmp1938;
*(&local106) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
org$frostlang$frostc$ASTNode* $tmp1940 = *(&local106);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1940));
*(&local106) = $tmp1939;
// line 524
frost$core$MutableString* $tmp1941 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1941);
*(&local107) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1941));
frost$core$MutableString* $tmp1942 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1942));
*(&local107) = $tmp1941;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1941));
// unreffing REF($3407:frost.core.MutableString)
// line 525
org$frostlang$frostc$ASTNode* $tmp1943 = *(&local103);
frost$core$Bit $tmp1944 = frost$core$Bit$init$builtin_bit($tmp1943 != NULL);
bool $tmp1945 = $tmp1944.value;
if ($tmp1945) goto block214; else goto block215;
block214:;
// line 526
frost$core$MutableString* $tmp1946 = *(&local107);
org$frostlang$frostc$ASTNode* $tmp1947 = *(&local103);
frost$core$Bit $tmp1948 = frost$core$Bit$init$builtin_bit($tmp1947 != NULL);
bool $tmp1949 = $tmp1948.value;
if ($tmp1949) goto block216; else goto block217;
block217:;
frost$core$Int64 $tmp1950 = (frost$core$Int64) {526};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1951, $tmp1950, &$s1952);
abort(); // unreachable
block216:;
frost$core$MutableString$append$frost$core$Object($tmp1946, ((frost$core$Object*) $tmp1947));
goto block215;
block215:;
// line 528
frost$core$Bit $tmp1953 = *(&local104);
bool $tmp1954 = $tmp1953.value;
if ($tmp1954) goto block218; else goto block220;
block218:;
// line 529
frost$core$MutableString* $tmp1955 = *(&local107);
frost$core$MutableString$append$frost$core$String($tmp1955, &$s1956);
goto block219;
block220:;
// line 1
// line 532
frost$core$MutableString* $tmp1957 = *(&local107);
frost$core$MutableString$append$frost$core$String($tmp1957, &$s1958);
goto block219;
block219:;
// line 534
org$frostlang$frostc$ASTNode* $tmp1959 = *(&local105);
frost$core$Bit $tmp1960 = frost$core$Bit$init$builtin_bit($tmp1959 != NULL);
bool $tmp1961 = $tmp1960.value;
if ($tmp1961) goto block221; else goto block222;
block221:;
// line 535
frost$core$MutableString* $tmp1962 = *(&local107);
org$frostlang$frostc$ASTNode* $tmp1963 = *(&local105);
frost$core$Bit $tmp1964 = frost$core$Bit$init$builtin_bit($tmp1963 != NULL);
bool $tmp1965 = $tmp1964.value;
if ($tmp1965) goto block223; else goto block224;
block224:;
frost$core$Int64 $tmp1966 = (frost$core$Int64) {535};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1967, $tmp1966, &$s1968);
abort(); // unreachable
block223:;
frost$core$MutableString$append$frost$core$Object($tmp1962, ((frost$core$Object*) $tmp1963));
goto block222;
block222:;
// line 537
org$frostlang$frostc$ASTNode* $tmp1969 = *(&local106);
frost$core$Bit $tmp1970 = frost$core$Bit$init$builtin_bit($tmp1969 != NULL);
bool $tmp1971 = $tmp1970.value;
if ($tmp1971) goto block225; else goto block226;
block225:;
// line 538
frost$core$MutableString* $tmp1972 = *(&local107);
org$frostlang$frostc$ASTNode* $tmp1973 = *(&local106);
frost$core$Bit $tmp1974 = frost$core$Bit$init$builtin_bit($tmp1973 != NULL);
bool $tmp1975 = $tmp1974.value;
if ($tmp1975) goto block227; else goto block228;
block228:;
frost$core$Int64 $tmp1976 = (frost$core$Int64) {538};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1977, $tmp1976, &$s1978);
abort(); // unreachable
block227:;
frost$core$String* $tmp1979 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1980, ((frost$core$Object*) $tmp1973));
frost$core$MutableString$append$frost$core$String($tmp1972, $tmp1979);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
// unreffing REF($3487:frost.core.String)
goto block226;
block226:;
// line 540
frost$core$MutableString* $tmp1981 = *(&local107);
frost$core$String* $tmp1982 = frost$core$MutableString$finish$R$frost$core$String($tmp1981);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
// unreffing REF($3495:frost.core.String)
frost$core$MutableString* $tmp1983 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
// unreffing result
*(&local107) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1984 = *(&local106);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
// unreffing step
*(&local106) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1985 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
// unreffing end
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1986 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1986));
// unreffing start
*(&local103) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1982;
block213:;
frost$core$Int64 $tmp1987 = (frost$core$Int64) {37};
frost$core$Bit $tmp1988 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1987);
bool $tmp1989 = $tmp1988.value;
if ($tmp1989) goto block229; else goto block230;
block229:;
org$frostlang$frostc$Position* $tmp1990 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1991 = *$tmp1990;
frost$core$Real64* $tmp1992 = (frost$core$Real64*) (param0->$data + 16);
frost$core$Real64 $tmp1993 = *$tmp1992;
*(&local108) = $tmp1993;
// line 543
frost$core$Real64 $tmp1994 = *(&local108);
frost$core$String* $tmp1995 = frost$core$Real64$convert$R$frost$core$String($tmp1994);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
// unreffing REF($3533:frost.core.String)
return $tmp1995;
block230:;
frost$core$Int64 $tmp1996 = (frost$core$Int64) {38};
frost$core$Bit $tmp1997 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1996);
bool $tmp1998 = $tmp1997.value;
if ($tmp1998) goto block231; else goto block232;
block231:;
org$frostlang$frostc$Position* $tmp1999 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2000 = *$tmp1999;
frost$core$String** $tmp2001 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2002 = *$tmp2001;
*(&local109) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2002));
frost$core$String* $tmp2003 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2003));
*(&local109) = $tmp2002;
// line 546
frost$core$String* $tmp2004 = *(&local109);
frost$core$String* $tmp2005 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2006, $tmp2004);
frost$core$String* $tmp2007 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2005, &$s2008);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
// unreffing REF($3558:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
// unreffing REF($3557:frost.core.String)
frost$core$String* $tmp2009 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
// unreffing src
*(&local109) = ((frost$core$String*) NULL);
return $tmp2007;
block232:;
frost$core$Int64 $tmp2010 = (frost$core$Int64) {39};
frost$core$Bit $tmp2011 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2010);
bool $tmp2012 = $tmp2011.value;
if ($tmp2012) goto block233; else goto block234;
block233:;
org$frostlang$frostc$Position* $tmp2013 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2014 = *$tmp2013;
org$frostlang$frostc$ASTNode** $tmp2015 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2016 = *$tmp2015;
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2016));
org$frostlang$frostc$ASTNode* $tmp2017 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2017));
*(&local110) = $tmp2016;
// line 549
org$frostlang$frostc$ASTNode* $tmp2018 = *(&local110);
frost$core$Bit $tmp2019 = frost$core$Bit$init$builtin_bit($tmp2018 != NULL);
bool $tmp2020 = $tmp2019.value;
if ($tmp2020) goto block235; else goto block236;
block235:;
// line 550
org$frostlang$frostc$ASTNode* $tmp2021 = *(&local110);
frost$core$Bit $tmp2022 = frost$core$Bit$init$builtin_bit($tmp2021 != NULL);
bool $tmp2023 = $tmp2022.value;
if ($tmp2023) goto block237; else goto block238;
block238:;
frost$core$Int64 $tmp2024 = (frost$core$Int64) {550};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2025, $tmp2024, &$s2026);
abort(); // unreachable
block237:;
frost$core$String* $tmp2027 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2028, ((frost$core$Object*) $tmp2021));
frost$core$String* $tmp2029 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2027, &$s2030);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
// unreffing REF($3605:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2027));
// unreffing REF($3604:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp2031 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
// unreffing value
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2029;
block236:;
// line 552
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2032));
org$frostlang$frostc$ASTNode* $tmp2033 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2033));
// unreffing value
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
return &$s2034;
block234:;
frost$core$Int64 $tmp2035 = (frost$core$Int64) {40};
frost$core$Bit $tmp2036 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2035);
bool $tmp2037 = $tmp2036.value;
if ($tmp2037) goto block239; else goto block240;
block239:;
// line 555
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2038));
return &$s2039;
block240:;
frost$core$Int64 $tmp2040 = (frost$core$Int64) {41};
frost$core$Bit $tmp2041 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2040);
bool $tmp2042 = $tmp2041.value;
if ($tmp2042) goto block241; else goto block242;
block241:;
org$frostlang$frostc$Position* $tmp2043 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2044 = *$tmp2043;
frost$core$String** $tmp2045 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2046 = *$tmp2045;
*(&local111) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2046));
frost$core$String* $tmp2047 = *(&local111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
*(&local111) = $tmp2046;
// line 558
frost$core$String* $tmp2048 = *(&local111);
frost$core$String* $tmp2049 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp2048, &$s2050);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
// unreffing REF($3654:frost.core.String)
frost$core$String* $tmp2051 = *(&local111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2051));
// unreffing str
*(&local111) = ((frost$core$String*) NULL);
return $tmp2049;
block242:;
frost$core$Int64 $tmp2052 = (frost$core$Int64) {42};
frost$core$Bit $tmp2053 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2052);
bool $tmp2054 = $tmp2053.value;
if ($tmp2054) goto block243; else goto block244;
block243:;
// line 561
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2055));
return &$s2056;
block244:;
frost$core$Int64 $tmp2057 = (frost$core$Int64) {44};
frost$core$Bit $tmp2058 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2057);
bool $tmp2059 = $tmp2058.value;
if ($tmp2059) goto block245; else goto block246;
block245:;
org$frostlang$frostc$Position* $tmp2060 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2061 = *$tmp2060;
org$frostlang$frostc$FixedArray** $tmp2062 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2063 = *$tmp2062;
*(&local112) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
org$frostlang$frostc$FixedArray* $tmp2064 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
*(&local112) = $tmp2063;
// line 564
org$frostlang$frostc$FixedArray* $tmp2065 = *(&local112);
ITable* $tmp2066 = ((frost$collections$CollectionView*) $tmp2065)->$class->itable;
while ($tmp2066->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2066 = $tmp2066->next;
}
$fn2068 $tmp2067 = $tmp2066->methods[1];
frost$core$String* $tmp2069 = $tmp2067(((frost$collections$CollectionView*) $tmp2065));
frost$core$String* $tmp2070 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2071, $tmp2069);
frost$core$String* $tmp2072 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2070, &$s2073);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
// unreffing REF($3695:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2070));
// unreffing REF($3694:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
// unreffing REF($3693:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp2074 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2074));
// unreffing arguments
*(&local112) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2072;
block246:;
frost$core$Int64 $tmp2075 = (frost$core$Int64) {45};
frost$core$Bit $tmp2076 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2075);
bool $tmp2077 = $tmp2076.value;
if ($tmp2077) goto block247; else goto block248;
block247:;
org$frostlang$frostc$Position* $tmp2078 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2079 = *$tmp2078;
org$frostlang$frostc$FixedArray** $tmp2080 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2081 = *$tmp2080;
*(&local113) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
org$frostlang$frostc$FixedArray* $tmp2082 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2082));
*(&local113) = $tmp2081;
// line 567
org$frostlang$frostc$FixedArray* $tmp2083 = *(&local113);
ITable* $tmp2084 = ((frost$collections$CollectionView*) $tmp2083)->$class->itable;
while ($tmp2084->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2084 = $tmp2084->next;
}
$fn2086 $tmp2085 = $tmp2084->methods[1];
frost$core$String* $tmp2087 = $tmp2085(((frost$collections$CollectionView*) $tmp2083));
frost$core$String* $tmp2088 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2089, $tmp2087);
frost$core$String* $tmp2090 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2088, &$s2091);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
// unreffing REF($3734:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
// unreffing REF($3733:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2087));
// unreffing REF($3732:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp2092 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
// unreffing parameters
*(&local113) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2090;
block248:;
frost$core$Int64 $tmp2093 = (frost$core$Int64) {43};
frost$core$Bit $tmp2094 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2093);
bool $tmp2095 = $tmp2094.value;
if ($tmp2095) goto block249; else goto block250;
block249:;
org$frostlang$frostc$Position* $tmp2096 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2097 = *$tmp2096;
org$frostlang$frostc$FixedArray** $tmp2098 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2099 = *$tmp2098;
*(&local114) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
org$frostlang$frostc$FixedArray* $tmp2100 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2100));
*(&local114) = $tmp2099;
org$frostlang$frostc$ASTNode** $tmp2101 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2102 = *$tmp2101;
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2102));
org$frostlang$frostc$ASTNode* $tmp2103 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2103));
*(&local115) = $tmp2102;
org$frostlang$frostc$FixedArray** $tmp2104 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2105 = *$tmp2104;
*(&local116) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
org$frostlang$frostc$FixedArray* $tmp2106 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
*(&local116) = $tmp2105;
// line 570
frost$core$MutableString* $tmp2107 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2107, &$s2108);
*(&local117) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2107));
frost$core$MutableString* $tmp2109 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
*(&local117) = $tmp2107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2107));
// unreffing REF($3786:frost.core.MutableString)
// line 571
org$frostlang$frostc$FixedArray* $tmp2110 = *(&local114);
frost$core$MutableString* $tmp2111 = *(&local117);
frost$core$MutableMethod* $tmp2113 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp2113, ((frost$core$Int8*) frost$core$MutableString$append$frost$core$Object), ((frost$core$Object*) $tmp2111));
ITable* $tmp2114 = ((frost$collections$CollectionView*) $tmp2110)->$class->itable;
while ($tmp2114->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2114 = $tmp2114->next;
}
$fn2116 $tmp2115 = $tmp2114->methods[7];
$tmp2115(((frost$collections$CollectionView*) $tmp2110), $tmp2113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
// unreffing REF($3803:frost.core.MutableMethod)
// line 572
org$frostlang$frostc$ASTNode* $tmp2117 = *(&local115);
frost$core$Bit $tmp2118 = frost$core$Bit$init$builtin_bit($tmp2117 != NULL);
bool $tmp2119 = $tmp2118.value;
if ($tmp2119) goto block251; else goto block253;
block251:;
// line 573
frost$core$MutableString* $tmp2120 = *(&local117);
org$frostlang$frostc$ASTNode* $tmp2121 = *(&local115);
frost$core$Bit $tmp2122 = frost$core$Bit$init$builtin_bit($tmp2121 != NULL);
bool $tmp2123 = $tmp2122.value;
if ($tmp2123) goto block254; else goto block255;
block255:;
frost$core$Int64 $tmp2124 = (frost$core$Int64) {573};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2125, $tmp2124, &$s2126);
abort(); // unreachable
block254:;
frost$core$String* $tmp2127 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2128, ((frost$core$Object*) $tmp2121));
frost$core$String* $tmp2129 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2127, &$s2130);
frost$core$MutableString$append$frost$core$String($tmp2120, $tmp2129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
// unreffing REF($3832:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
// unreffing REF($3831:frost.core.String)
goto block252;
block253:;
// line 1
// line 576
frost$core$MutableString* $tmp2131 = *(&local117);
frost$core$MutableString$append$frost$core$String($tmp2131, &$s2132);
goto block252;
block252:;
// line 578
org$frostlang$frostc$FixedArray* $tmp2133 = *(&local116);
frost$core$MutableString* $tmp2134 = *(&local117);
frost$core$MutableMethod* $tmp2136 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp2136, ((frost$core$Int8*) frost$core$MutableString$append$frost$core$Object), ((frost$core$Object*) $tmp2134));
ITable* $tmp2137 = ((frost$collections$CollectionView*) $tmp2133)->$class->itable;
while ($tmp2137->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2137 = $tmp2137->next;
}
$fn2139 $tmp2138 = $tmp2137->methods[7];
$tmp2138(((frost$collections$CollectionView*) $tmp2133), $tmp2136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2136));
// unreffing REF($3851:frost.core.MutableMethod)
// line 579
frost$core$MutableString* $tmp2140 = *(&local117);
frost$core$MutableString$append$frost$core$String($tmp2140, &$s2141);
// line 580
frost$core$MutableString* $tmp2142 = *(&local117);
frost$core$String* $tmp2143 = frost$core$MutableString$finish$R$frost$core$String($tmp2142);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2143));
// unreffing REF($3867:frost.core.String)
frost$core$MutableString* $tmp2144 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2144));
// unreffing result
*(&local117) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2145 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2145));
// unreffing failBlock
*(&local116) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2146 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2146));
// unreffing error
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2147 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
// unreffing block
*(&local114) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2143;
block250:;
frost$core$Int64 $tmp2148 = (frost$core$Int64) {46};
frost$core$Bit $tmp2149 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2148);
bool $tmp2150 = $tmp2149.value;
if ($tmp2150) goto block256; else goto block257;
block256:;
org$frostlang$frostc$Position* $tmp2151 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2152 = *$tmp2151;
frost$core$String** $tmp2153 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2154 = *$tmp2153;
*(&local118) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
frost$core$String* $tmp2155 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
*(&local118) = $tmp2154;
// line 583
frost$core$String* $tmp2156 = *(&local118);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
frost$core$String* $tmp2157 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
// unreffing name
*(&local118) = ((frost$core$String*) NULL);
return $tmp2156;
block257:;
frost$core$Int64 $tmp2158 = (frost$core$Int64) {48};
frost$core$Bit $tmp2159 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2158);
bool $tmp2160 = $tmp2159.value;
if ($tmp2160) goto block258; else goto block259;
block258:;
org$frostlang$frostc$Position* $tmp2161 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2162 = *$tmp2161;
frost$core$String** $tmp2163 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2164 = *$tmp2163;
*(&local119) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
frost$core$String* $tmp2165 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2165));
*(&local119) = $tmp2164;
org$frostlang$frostc$ASTNode** $tmp2166 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2167 = *$tmp2166;
*(&local120) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2167));
org$frostlang$frostc$ASTNode* $tmp2168 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
*(&local120) = $tmp2167;
// line 586
org$frostlang$frostc$ASTNode* $tmp2169 = *(&local120);
frost$core$Bit $tmp2170 = frost$core$Bit$init$builtin_bit($tmp2169 != NULL);
bool $tmp2171 = $tmp2170.value;
if ($tmp2171) goto block260; else goto block261;
block260:;
// line 587
frost$core$String* $tmp2172 = *(&local119);
frost$core$String* $tmp2173 = frost$core$String$convert$R$frost$core$String($tmp2172);
frost$core$String* $tmp2174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2173, &$s2175);
org$frostlang$frostc$ASTNode* $tmp2176 = *(&local120);
frost$core$Bit $tmp2177 = frost$core$Bit$init$builtin_bit($tmp2176 != NULL);
bool $tmp2178 = $tmp2177.value;
if ($tmp2178) goto block262; else goto block263;
block263:;
frost$core$Int64 $tmp2179 = (frost$core$Int64) {587};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2180, $tmp2179, &$s2181);
abort(); // unreachable
block262:;
frost$core$String* $tmp2182 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2174, ((frost$core$Object*) $tmp2176));
frost$core$String* $tmp2183 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2182, &$s2184);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2183));
// unreffing REF($3963:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
// unreffing REF($3962:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2174));
// unreffing REF($3952:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2173));
// unreffing REF($3951:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp2185 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
// unreffing type
*(&local120) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2186 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2186));
// unreffing name
*(&local119) = ((frost$core$String*) NULL);
return $tmp2183;
block261:;
// line 589
frost$core$String* $tmp2187 = *(&local119);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2187));
org$frostlang$frostc$ASTNode* $tmp2188 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
// unreffing type
*(&local120) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2189 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
// unreffing name
*(&local119) = ((frost$core$String*) NULL);
return $tmp2187;
block259:;
frost$core$Int64 $tmp2190 = (frost$core$Int64) {47};
frost$core$Bit $tmp2191 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2190);
bool $tmp2192 = $tmp2191.value;
if ($tmp2192) goto block264; else goto block265;
block264:;
org$frostlang$frostc$Position* $tmp2193 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2194 = *$tmp2193;
org$frostlang$frostc$FixedArray** $tmp2195 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2196 = *$tmp2195;
*(&local121) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
org$frostlang$frostc$FixedArray* $tmp2197 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
*(&local121) = $tmp2196;
org$frostlang$frostc$ASTNode** $tmp2198 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2199 = *$tmp2198;
*(&local122) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2199));
org$frostlang$frostc$ASTNode* $tmp2200 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
*(&local122) = $tmp2199;
// line 592
org$frostlang$frostc$FixedArray* $tmp2201 = *(&local121);
ITable* $tmp2202 = ((frost$collections$CollectionView*) $tmp2201)->$class->itable;
while ($tmp2202->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2202 = $tmp2202->next;
}
$fn2204 $tmp2203 = $tmp2202->methods[1];
frost$core$String* $tmp2205 = $tmp2203(((frost$collections$CollectionView*) $tmp2201));
frost$core$String* $tmp2206 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2207, $tmp2205);
frost$core$String* $tmp2208 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2206, &$s2209);
org$frostlang$frostc$ASTNode* $tmp2210 = *(&local122);
frost$core$String* $tmp2211 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2208, ((frost$core$Object*) $tmp2210));
frost$core$String* $tmp2212 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2211, &$s2213);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2212));
// unreffing REF($4038:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2211));
// unreffing REF($4037:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
// unreffing REF($4034:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2206));
// unreffing REF($4033:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
// unreffing REF($4032:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp2214 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2214));
// unreffing body
*(&local122) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2215 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2215));
// unreffing parameters
*(&local121) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2212;
block265:;
frost$core$Int64 $tmp2216 = (frost$core$Int64) {49};
frost$core$Bit $tmp2217 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2216);
bool $tmp2218 = $tmp2217.value;
if ($tmp2218) goto block266; else goto block267;
block266:;
org$frostlang$frostc$Position* $tmp2219 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2220 = *$tmp2219;
org$frostlang$frostc$FixedArray** $tmp2221 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2222 = *$tmp2221;
*(&local123) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
org$frostlang$frostc$FixedArray* $tmp2223 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2223));
*(&local123) = $tmp2222;
org$frostlang$frostc$ASTNode** $tmp2224 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2225 = *$tmp2224;
*(&local124) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2225));
org$frostlang$frostc$ASTNode* $tmp2226 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
*(&local124) = $tmp2225;
// line 595
org$frostlang$frostc$FixedArray* $tmp2227 = *(&local123);
ITable* $tmp2228 = ((frost$collections$CollectionView*) $tmp2227)->$class->itable;
while ($tmp2228->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2228 = $tmp2228->next;
}
$fn2230 $tmp2229 = $tmp2228->methods[1];
frost$core$String* $tmp2231 = $tmp2229(((frost$collections$CollectionView*) $tmp2227));
frost$core$String* $tmp2232 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2233, $tmp2231);
frost$core$String* $tmp2234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2232, &$s2235);
org$frostlang$frostc$ASTNode* $tmp2236 = *(&local124);
frost$core$String* $tmp2237 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2234, ((frost$core$Object*) $tmp2236));
frost$core$String* $tmp2238 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2237, &$s2239);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2238));
// unreffing REF($4101:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2237));
// unreffing REF($4100:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2234));
// unreffing REF($4097:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
// unreffing REF($4096:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2231));
// unreffing REF($4095:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp2240 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
// unreffing body
*(&local124) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2241 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2241));
// unreffing parameters
*(&local123) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2238;
block267:;
frost$core$Int64 $tmp2242 = (frost$core$Int64) {50};
frost$core$Bit $tmp2243 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2242);
bool $tmp2244 = $tmp2243.value;
if ($tmp2244) goto block268; else goto block269;
block268:;
org$frostlang$frostc$Position* $tmp2245 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2246 = *$tmp2245;
frost$core$String** $tmp2247 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2248 = *$tmp2247;
*(&local125) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
frost$core$String* $tmp2249 = *(&local125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2249));
*(&local125) = $tmp2248;
// line 598
frost$core$String* $tmp2250 = *(&local125);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2250));
frost$core$String* $tmp2251 = *(&local125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2251));
// unreffing name
*(&local125) = ((frost$core$String*) NULL);
return $tmp2250;
block269:;
frost$core$Int64 $tmp2252 = (frost$core$Int64) {51};
frost$core$Bit $tmp2253 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2252);
bool $tmp2254 = $tmp2253.value;
if ($tmp2254) goto block270; else goto block271;
block270:;
org$frostlang$frostc$Position* $tmp2255 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2256 = *$tmp2255;
org$frostlang$frostc$Variable$Kind* $tmp2257 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp2258 = *$tmp2257;
*(&local126) = $tmp2258;
org$frostlang$frostc$FixedArray** $tmp2259 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2260 = *$tmp2259;
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
org$frostlang$frostc$FixedArray* $tmp2261 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2261));
*(&local127) = $tmp2260;
// line 601
frost$core$MutableString* $tmp2262 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2262);
*(&local128) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2262));
frost$core$MutableString* $tmp2263 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2263));
*(&local128) = $tmp2262;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2262));
// unreffing REF($4174:frost.core.MutableString)
// line 602
org$frostlang$frostc$Variable$Kind $tmp2264 = *(&local126);
frost$core$Int64 $tmp2265 = $tmp2264.$rawValue;
frost$core$Int64 $tmp2266 = (frost$core$Int64) {0};
frost$core$Bit $tmp2267 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2265, $tmp2266);
bool $tmp2268 = $tmp2267.value;
if ($tmp2268) goto block273; else goto block274;
block273:;
// line 603
frost$core$MutableString* $tmp2269 = *(&local128);
frost$core$MutableString$append$frost$core$String($tmp2269, &$s2270);
goto block272;
block274:;
frost$core$Int64 $tmp2271 = (frost$core$Int64) {1};
frost$core$Bit $tmp2272 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2265, $tmp2271);
bool $tmp2273 = $tmp2272.value;
if ($tmp2273) goto block275; else goto block276;
block275:;
// line 604
frost$core$MutableString* $tmp2274 = *(&local128);
frost$core$MutableString$append$frost$core$String($tmp2274, &$s2275);
goto block272;
block276:;
frost$core$Int64 $tmp2276 = (frost$core$Int64) {2};
frost$core$Bit $tmp2277 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2265, $tmp2276);
bool $tmp2278 = $tmp2277.value;
if ($tmp2278) goto block277; else goto block278;
block277:;
// line 605
frost$core$MutableString* $tmp2279 = *(&local128);
frost$core$MutableString$append$frost$core$String($tmp2279, &$s2280);
goto block272;
block278:;
frost$core$Int64 $tmp2281 = (frost$core$Int64) {3};
frost$core$Bit $tmp2282 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2265, $tmp2281);
bool $tmp2283 = $tmp2282.value;
if ($tmp2283) goto block279; else goto block272;
block279:;
// line 606
frost$core$MutableString* $tmp2284 = *(&local128);
frost$core$MutableString$append$frost$core$String($tmp2284, &$s2285);
goto block272;
block272:;
// line 608
frost$core$MutableString* $tmp2286 = *(&local128);
org$frostlang$frostc$FixedArray* $tmp2287 = *(&local127);
ITable* $tmp2288 = ((frost$collections$CollectionView*) $tmp2287)->$class->itable;
while ($tmp2288->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2288 = $tmp2288->next;
}
$fn2290 $tmp2289 = $tmp2288->methods[1];
frost$core$String* $tmp2291 = $tmp2289(((frost$collections$CollectionView*) $tmp2287));
frost$core$MutableString$append$frost$core$String($tmp2286, $tmp2291);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
// unreffing REF($4226:frost.core.String)
// line 609
frost$core$MutableString* $tmp2292 = *(&local128);
frost$core$String* $tmp2293 = frost$core$MutableString$finish$R$frost$core$String($tmp2292);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
// unreffing REF($4233:frost.core.String)
frost$core$MutableString* $tmp2294 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2294));
// unreffing result
*(&local128) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2295 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
// unreffing decls
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2293;
block271:;
frost$core$Int64 $tmp2296 = (frost$core$Int64) {52};
frost$core$Bit $tmp2297 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2296);
bool $tmp2298 = $tmp2297.value;
if ($tmp2298) goto block280; else goto block281;
block280:;
org$frostlang$frostc$Position* $tmp2299 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2300 = *$tmp2299;
org$frostlang$frostc$FixedArray** $tmp2301 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2302 = *$tmp2301;
*(&local129) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
org$frostlang$frostc$FixedArray* $tmp2303 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
*(&local129) = $tmp2302;
org$frostlang$frostc$FixedArray** $tmp2304 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2305 = *$tmp2304;
*(&local130) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
org$frostlang$frostc$FixedArray* $tmp2306 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2306));
*(&local130) = $tmp2305;
// line 612
frost$core$MutableString* $tmp2307 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2307, &$s2308);
*(&local131) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2307));
frost$core$MutableString* $tmp2309 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
*(&local131) = $tmp2307;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2307));
// unreffing REF($4275:frost.core.MutableString)
// line 613
*(&local132) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2310));
frost$core$String* $tmp2311 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
*(&local132) = &$s2312;
// line 614
org$frostlang$frostc$FixedArray* $tmp2313 = *(&local129);
ITable* $tmp2314 = ((frost$collections$Iterable*) $tmp2313)->$class->itable;
while ($tmp2314->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2314 = $tmp2314->next;
}
$fn2316 $tmp2315 = $tmp2314->methods[0];
frost$collections$Iterator* $tmp2317 = $tmp2315(((frost$collections$Iterable*) $tmp2313));
goto block282;
block282:;
ITable* $tmp2318 = $tmp2317->$class->itable;
while ($tmp2318->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2318 = $tmp2318->next;
}
$fn2320 $tmp2319 = $tmp2318->methods[0];
frost$core$Bit $tmp2321 = $tmp2319($tmp2317);
bool $tmp2322 = $tmp2321.value;
if ($tmp2322) goto block284; else goto block283;
block283:;
*(&local133) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2323 = $tmp2317->$class->itable;
while ($tmp2323->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2323 = $tmp2323->next;
}
$fn2325 $tmp2324 = $tmp2323->methods[1];
frost$core$Object* $tmp2326 = $tmp2324($tmp2317);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2326)));
org$frostlang$frostc$ASTNode* $tmp2327 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2327));
*(&local133) = ((org$frostlang$frostc$ASTNode*) $tmp2326);
// line 615
frost$core$MutableString* $tmp2328 = *(&local131);
frost$core$String* $tmp2329 = *(&local132);
frost$core$String* $tmp2330 = frost$core$String$convert$R$frost$core$String($tmp2329);
frost$core$String* $tmp2331 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2330, &$s2332);
org$frostlang$frostc$ASTNode* $tmp2333 = *(&local133);
frost$core$String* $tmp2334 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2331, ((frost$core$Object*) $tmp2333));
frost$core$String* $tmp2335 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2334, &$s2336);
frost$core$MutableString$append$frost$core$String($tmp2328, $tmp2335);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2335));
// unreffing REF($4327:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2334));
// unreffing REF($4326:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2331));
// unreffing REF($4323:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
// unreffing REF($4322:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2326);
// unreffing REF($4311:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2337 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2337));
// unreffing t
*(&local133) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block282;
block284:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
// unreffing REF($4300:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 617
frost$core$MutableString* $tmp2338 = *(&local131);
frost$core$MutableString$append$frost$core$String($tmp2338, &$s2339);
// line 618
org$frostlang$frostc$FixedArray* $tmp2340 = *(&local130);
ITable* $tmp2341 = ((frost$collections$Iterable*) $tmp2340)->$class->itable;
while ($tmp2341->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2341 = $tmp2341->next;
}
$fn2343 $tmp2342 = $tmp2341->methods[0];
frost$collections$Iterator* $tmp2344 = $tmp2342(((frost$collections$Iterable*) $tmp2340));
goto block285;
block285:;
ITable* $tmp2345 = $tmp2344->$class->itable;
while ($tmp2345->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2345 = $tmp2345->next;
}
$fn2347 $tmp2346 = $tmp2345->methods[0];
frost$core$Bit $tmp2348 = $tmp2346($tmp2344);
bool $tmp2349 = $tmp2348.value;
if ($tmp2349) goto block287; else goto block286;
block286:;
*(&local134) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2350 = $tmp2344->$class->itable;
while ($tmp2350->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2350 = $tmp2350->next;
}
$fn2352 $tmp2351 = $tmp2350->methods[1];
frost$core$Object* $tmp2353 = $tmp2351($tmp2344);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2353)));
org$frostlang$frostc$ASTNode* $tmp2354 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2354));
*(&local134) = ((org$frostlang$frostc$ASTNode*) $tmp2353);
// line 619
frost$core$MutableString* $tmp2355 = *(&local131);
org$frostlang$frostc$ASTNode* $tmp2356 = *(&local134);
frost$core$String* $tmp2357 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2358, ((frost$core$Object*) $tmp2356));
frost$core$MutableString$append$frost$core$String($tmp2355, $tmp2357);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2357));
// unreffing REF($4384:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2353);
// unreffing REF($4372:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2359 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
// unreffing s
*(&local134) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block285;
block287:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2344));
// unreffing REF($4361:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 621
frost$core$MutableString* $tmp2360 = *(&local131);
frost$core$String* $tmp2361 = frost$core$MutableString$finish$R$frost$core$String($tmp2360);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
// unreffing REF($4403:frost.core.String)
frost$core$String* $tmp2362 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2362));
// unreffing separator
*(&local132) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2363 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
// unreffing result
*(&local131) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2364 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
// unreffing statements
*(&local130) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2365 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2365));
// unreffing tests
*(&local129) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2361;
block281:;
frost$core$Int64 $tmp2366 = (frost$core$Int64) {53};
frost$core$Bit $tmp2367 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2366);
bool $tmp2368 = $tmp2367.value;
if ($tmp2368) goto block288; else goto block289;
block288:;
org$frostlang$frostc$Position* $tmp2369 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2370 = *$tmp2369;
frost$core$String** $tmp2371 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2372 = *$tmp2371;
*(&local135) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
frost$core$String* $tmp2373 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2373));
*(&local135) = $tmp2372;
org$frostlang$frostc$ASTNode** $tmp2374 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2375 = *$tmp2374;
*(&local136) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2375));
org$frostlang$frostc$ASTNode* $tmp2376 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
*(&local136) = $tmp2375;
org$frostlang$frostc$FixedArray** $tmp2377 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2378 = *$tmp2377;
*(&local137) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2378));
org$frostlang$frostc$FixedArray* $tmp2379 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2379));
*(&local137) = $tmp2378;
// line 624
frost$core$MutableString* $tmp2380 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2380);
*(&local138) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2380));
frost$core$MutableString* $tmp2381 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2381));
*(&local138) = $tmp2380;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2380));
// unreffing REF($4464:frost.core.MutableString)
// line 625
frost$core$String* $tmp2382 = *(&local135);
frost$core$Bit $tmp2383 = frost$core$Bit$init$builtin_bit($tmp2382 != NULL);
bool $tmp2384 = $tmp2383.value;
if ($tmp2384) goto block290; else goto block291;
block290:;
// line 626
frost$core$MutableString* $tmp2385 = *(&local138);
frost$core$String* $tmp2386 = *(&local135);
frost$core$Bit $tmp2387 = frost$core$Bit$init$builtin_bit($tmp2386 != NULL);
bool $tmp2388 = $tmp2387.value;
if ($tmp2388) goto block292; else goto block293;
block293:;
frost$core$Int64 $tmp2389 = (frost$core$Int64) {626};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2390, $tmp2389, &$s2391);
abort(); // unreachable
block292:;
frost$core$String* $tmp2392 = frost$core$String$convert$R$frost$core$String($tmp2386);
frost$core$String* $tmp2393 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2392, &$s2394);
frost$core$MutableString$append$frost$core$String($tmp2385, $tmp2393);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2393));
// unreffing REF($4494:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
// unreffing REF($4493:frost.core.String)
goto block291;
block291:;
// line 628
frost$core$MutableString* $tmp2395 = *(&local138);
org$frostlang$frostc$ASTNode* $tmp2396 = *(&local136);
frost$core$String* $tmp2397 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2398, ((frost$core$Object*) $tmp2396));
frost$core$String* $tmp2399 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2397, &$s2400);
frost$core$MutableString$append$frost$core$String($tmp2395, $tmp2399);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2399));
// unreffing REF($4508:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
// unreffing REF($4507:frost.core.String)
// line 629
org$frostlang$frostc$FixedArray* $tmp2401 = *(&local137);
ITable* $tmp2402 = ((frost$collections$Iterable*) $tmp2401)->$class->itable;
while ($tmp2402->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2402 = $tmp2402->next;
}
$fn2404 $tmp2403 = $tmp2402->methods[0];
frost$collections$Iterator* $tmp2405 = $tmp2403(((frost$collections$Iterable*) $tmp2401));
goto block294;
block294:;
ITable* $tmp2406 = $tmp2405->$class->itable;
while ($tmp2406->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2406 = $tmp2406->next;
}
$fn2408 $tmp2407 = $tmp2406->methods[0];
frost$core$Bit $tmp2409 = $tmp2407($tmp2405);
bool $tmp2410 = $tmp2409.value;
if ($tmp2410) goto block296; else goto block295;
block295:;
*(&local139) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2411 = $tmp2405->$class->itable;
while ($tmp2411->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2411 = $tmp2411->next;
}
$fn2413 $tmp2412 = $tmp2411->methods[1];
frost$core$Object* $tmp2414 = $tmp2412($tmp2405);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2414)));
org$frostlang$frostc$ASTNode* $tmp2415 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2415));
*(&local139) = ((org$frostlang$frostc$ASTNode*) $tmp2414);
// line 630
frost$core$MutableString* $tmp2416 = *(&local138);
org$frostlang$frostc$ASTNode* $tmp2417 = *(&local139);
frost$core$String* $tmp2418 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp2417), &$s2419);
frost$core$MutableString$append$frost$core$String($tmp2416, $tmp2418);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2418));
// unreffing REF($4544:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2414);
// unreffing REF($4532:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2420 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
// unreffing s
*(&local139) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block294;
block296:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2405));
// unreffing REF($4521:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 632
frost$core$MutableString* $tmp2421 = *(&local138);
frost$core$MutableString$append$frost$core$String($tmp2421, &$s2422);
// line 633
frost$core$MutableString* $tmp2423 = *(&local138);
frost$core$String* $tmp2424 = frost$core$MutableString$finish$R$frost$core$String($tmp2423);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
// unreffing REF($4566:frost.core.String)
frost$core$MutableString* $tmp2425 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
// unreffing result
*(&local138) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2426 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2426));
// unreffing statements
*(&local137) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2427 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2427));
// unreffing test
*(&local136) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2428 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2428));
// unreffing label
*(&local135) = ((frost$core$String*) NULL);
return $tmp2424;
block289:;
// line 636
frost$core$Bit $tmp2429 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2430 = $tmp2429.value;
if ($tmp2430) goto block297; else goto block298;
block298:;
frost$core$Int64 $tmp2431 = (frost$core$Int64) {636};
frost$core$Int64* $tmp2432 = &param0->$rawValue;
frost$core$Int64 $tmp2433 = *$tmp2432;
frost$core$Int64$wrapper* $tmp2434;
$tmp2434 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2434->value = $tmp2433;
frost$core$String* $tmp2435 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2436, ((frost$core$Object*) $tmp2434));
frost$core$String* $tmp2437 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2435, &$s2438);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2439, $tmp2431, $tmp2437);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2437));
// unreffing REF($4602:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
// unreffing REF($4601:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2434));
// unreffing REF($4600:frost.core.Object)
abort(); // unreachable
block297:;
goto block1;
block1:;
frost$core$Bit $tmp2440 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2441 = $tmp2440.value;
if ($tmp2441) goto block299; else goto block300;
block300:;
frost$core$Int64 $tmp2442 = (frost$core$Int64) {262};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2443, $tmp2442, &$s2444);
abort(); // unreachable
block299:;
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
org$frostlang$frostc$ASTNode* local131 = NULL;
org$frostlang$frostc$FixedArray* local132 = NULL;
org$frostlang$frostc$Position local133;
org$frostlang$frostc$FixedArray* local134 = NULL;
org$frostlang$frostc$Position local135;
org$frostlang$frostc$FixedArray* local136 = NULL;
org$frostlang$frostc$Position local137;
frost$core$String* local138 = NULL;
org$frostlang$frostc$Position local139;
org$frostlang$frostc$FixedArray* local140 = NULL;
org$frostlang$frostc$ASTNode* local141 = NULL;
org$frostlang$frostc$Position local142;
frost$core$String* local143 = NULL;
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
// line 6
frost$core$Int64* $tmp2445 = &param0->$rawValue;
frost$core$Int64 $tmp2446 = *$tmp2445;
frost$core$Int64 $tmp2447 = (frost$core$Int64) {0};
frost$core$Bit $tmp2448 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2447);
bool $tmp2449 = $tmp2448.value;
if ($tmp2449) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp2450 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2451 = *$tmp2450;
*(&local0) = $tmp2451;
frost$core$String** $tmp2452 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2453 = *$tmp2452;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2453));
frost$core$String* $tmp2454 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2454));
*(&local1) = $tmp2453;
frost$core$String** $tmp2455 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2456 = *$tmp2455;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2456));
frost$core$String* $tmp2457 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2457));
*(&local2) = $tmp2456;
org$frostlang$frostc$ASTNode** $tmp2458 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2459 = *$tmp2458;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2459));
org$frostlang$frostc$ASTNode* $tmp2460 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2460));
*(&local3) = $tmp2459;
// line 1
frost$core$String* $tmp2461 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
// line 1
frost$core$String* $tmp2462 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
// line 1
org$frostlang$frostc$ASTNode* $tmp2463 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2463));
org$frostlang$frostc$ASTNode* $tmp2464 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
// unreffing _f3
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2465 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2465));
// unreffing _f2
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2466 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2466));
// unreffing _f1
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp2467 = (frost$core$Int64) {1};
frost$core$Bit $tmp2468 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2467);
bool $tmp2469 = $tmp2468.value;
if ($tmp2469) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp2470 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2471 = *$tmp2470;
*(&local4) = $tmp2471;
org$frostlang$frostc$FixedArray** $tmp2472 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2473 = *$tmp2472;
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
org$frostlang$frostc$FixedArray* $tmp2474 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2474));
*(&local5) = $tmp2473;
// line 1
org$frostlang$frostc$FixedArray* $tmp2475 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2475));
org$frostlang$frostc$FixedArray* $tmp2476 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2476));
// unreffing _f1
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp2477 = (frost$core$Int64) {2};
frost$core$Bit $tmp2478 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2477);
bool $tmp2479 = $tmp2478.value;
if ($tmp2479) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp2480 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2481 = *$tmp2480;
*(&local6) = $tmp2481;
org$frostlang$frostc$ASTNode** $tmp2482 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2483 = *$tmp2482;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
org$frostlang$frostc$ASTNode* $tmp2484 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
*(&local7) = $tmp2483;
org$frostlang$frostc$ASTNode** $tmp2485 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2486 = *$tmp2485;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2486));
org$frostlang$frostc$ASTNode* $tmp2487 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2487));
*(&local8) = $tmp2486;
// line 1
org$frostlang$frostc$ASTNode* $tmp2488 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2488));
// line 1
org$frostlang$frostc$ASTNode* $tmp2489 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2489));
org$frostlang$frostc$ASTNode* $tmp2490 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2490));
// unreffing _f2
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2491 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2491));
// unreffing _f1
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp2492 = (frost$core$Int64) {3};
frost$core$Bit $tmp2493 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2492);
bool $tmp2494 = $tmp2493.value;
if ($tmp2494) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp2495 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2496 = *$tmp2495;
*(&local9) = $tmp2496;
org$frostlang$frostc$ASTNode** $tmp2497 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2498 = *$tmp2497;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
org$frostlang$frostc$ASTNode* $tmp2499 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
*(&local10) = $tmp2498;
// line 1
org$frostlang$frostc$ASTNode* $tmp2500 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2500));
org$frostlang$frostc$ASTNode* $tmp2501 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2501));
// unreffing _f1
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp2502 = (frost$core$Int64) {4};
frost$core$Bit $tmp2503 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2502);
bool $tmp2504 = $tmp2503.value;
if ($tmp2504) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp2505 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2506 = *$tmp2505;
*(&local11) = $tmp2506;
goto block1;
block11:;
frost$core$Int64 $tmp2507 = (frost$core$Int64) {5};
frost$core$Bit $tmp2508 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2507);
bool $tmp2509 = $tmp2508.value;
if ($tmp2509) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp2510 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2511 = *$tmp2510;
*(&local12) = $tmp2511;
org$frostlang$frostc$ASTNode** $tmp2512 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2513 = *$tmp2512;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2513));
org$frostlang$frostc$ASTNode* $tmp2514 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
*(&local13) = $tmp2513;
org$frostlang$frostc$parser$Token$Kind* $tmp2515 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp2516 = *$tmp2515;
*(&local14) = $tmp2516;
org$frostlang$frostc$ASTNode** $tmp2517 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2518 = *$tmp2517;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2518));
org$frostlang$frostc$ASTNode* $tmp2519 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
*(&local15) = $tmp2518;
// line 1
org$frostlang$frostc$ASTNode* $tmp2520 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2520));
// line 1
org$frostlang$frostc$ASTNode* $tmp2521 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2521));
org$frostlang$frostc$ASTNode* $tmp2522 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2522));
// unreffing _f3
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2523 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
// unreffing _f1
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp2524 = (frost$core$Int64) {6};
frost$core$Bit $tmp2525 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2524);
bool $tmp2526 = $tmp2525.value;
if ($tmp2526) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp2527 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2528 = *$tmp2527;
*(&local16) = $tmp2528;
frost$core$Bit* $tmp2529 = (frost$core$Bit*) (param0->$data + 16);
frost$core$Bit $tmp2530 = *$tmp2529;
*(&local17) = $tmp2530;
goto block1;
block15:;
frost$core$Int64 $tmp2531 = (frost$core$Int64) {7};
frost$core$Bit $tmp2532 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2531);
bool $tmp2533 = $tmp2532.value;
if ($tmp2533) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp2534 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2535 = *$tmp2534;
*(&local18) = $tmp2535;
org$frostlang$frostc$FixedArray** $tmp2536 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2537 = *$tmp2536;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2537));
org$frostlang$frostc$FixedArray* $tmp2538 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2538));
*(&local19) = $tmp2537;
// line 1
org$frostlang$frostc$FixedArray* $tmp2539 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2539));
org$frostlang$frostc$FixedArray* $tmp2540 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2540));
// unreffing _f1
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block17:;
frost$core$Int64 $tmp2541 = (frost$core$Int64) {8};
frost$core$Bit $tmp2542 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2541);
bool $tmp2543 = $tmp2542.value;
if ($tmp2543) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp2544 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2545 = *$tmp2544;
*(&local20) = $tmp2545;
frost$core$String** $tmp2546 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2547 = *$tmp2546;
*(&local21) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2547));
frost$core$String* $tmp2548 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2548));
*(&local21) = $tmp2547;
// line 1
frost$core$String* $tmp2549 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2549));
frost$core$String* $tmp2550 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2550));
// unreffing _f1
*(&local21) = ((frost$core$String*) NULL);
goto block1;
block19:;
frost$core$Int64 $tmp2551 = (frost$core$Int64) {9};
frost$core$Bit $tmp2552 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2551);
bool $tmp2553 = $tmp2552.value;
if ($tmp2553) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp2554 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2555 = *$tmp2554;
*(&local22) = $tmp2555;
org$frostlang$frostc$ASTNode** $tmp2556 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2557 = *$tmp2556;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2557));
org$frostlang$frostc$ASTNode* $tmp2558 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2558));
*(&local23) = $tmp2557;
org$frostlang$frostc$FixedArray** $tmp2559 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2560 = *$tmp2559;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2560));
org$frostlang$frostc$FixedArray* $tmp2561 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
*(&local24) = $tmp2560;
// line 1
org$frostlang$frostc$ASTNode* $tmp2562 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2562));
// line 1
org$frostlang$frostc$FixedArray* $tmp2563 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2563));
org$frostlang$frostc$FixedArray* $tmp2564 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
// unreffing _f2
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2565 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2565));
// unreffing _f1
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block21:;
frost$core$Int64 $tmp2566 = (frost$core$Int64) {10};
frost$core$Bit $tmp2567 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2566);
bool $tmp2568 = $tmp2567.value;
if ($tmp2568) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp2569 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2570 = *$tmp2569;
*(&local25) = $tmp2570;
org$frostlang$frostc$ASTNode** $tmp2571 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2572 = *$tmp2571;
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2572));
org$frostlang$frostc$ASTNode* $tmp2573 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2573));
*(&local26) = $tmp2572;
frost$core$String** $tmp2574 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2575 = *$tmp2574;
*(&local27) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2575));
frost$core$String* $tmp2576 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2576));
*(&local27) = $tmp2575;
org$frostlang$frostc$FixedArray** $tmp2577 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2578 = *$tmp2577;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2578));
org$frostlang$frostc$FixedArray* $tmp2579 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2579));
*(&local28) = $tmp2578;
// line 1
org$frostlang$frostc$ASTNode* $tmp2580 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
// line 1
frost$core$String* $tmp2581 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
// line 1
org$frostlang$frostc$FixedArray* $tmp2582 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2582));
org$frostlang$frostc$FixedArray* $tmp2583 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2583));
// unreffing _f3
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2584 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2584));
// unreffing _f2
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2585 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2585));
// unreffing _f1
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block23:;
frost$core$Int64 $tmp2586 = (frost$core$Int64) {11};
frost$core$Bit $tmp2587 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2586);
bool $tmp2588 = $tmp2587.value;
if ($tmp2588) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp2589 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2590 = *$tmp2589;
*(&local29) = $tmp2590;
org$frostlang$frostc$ASTNode** $tmp2591 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2592 = *$tmp2591;
*(&local30) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
org$frostlang$frostc$ASTNode* $tmp2593 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2593));
*(&local30) = $tmp2592;
org$frostlang$frostc$ChoiceCase** $tmp2594 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp2595 = *$tmp2594;
*(&local31) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
org$frostlang$frostc$ChoiceCase* $tmp2596 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
*(&local31) = $tmp2595;
frost$core$Int64* $tmp2597 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp2598 = *$tmp2597;
*(&local32) = $tmp2598;
// line 1
org$frostlang$frostc$ASTNode* $tmp2599 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2599));
// line 1
org$frostlang$frostc$ChoiceCase* $tmp2600 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2600));
org$frostlang$frostc$ChoiceCase* $tmp2601 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2601));
// unreffing _f2
*(&local31) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp2602 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
// unreffing _f1
*(&local30) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block25:;
frost$core$Int64 $tmp2603 = (frost$core$Int64) {12};
frost$core$Bit $tmp2604 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2603);
bool $tmp2605 = $tmp2604.value;
if ($tmp2605) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp2606 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2607 = *$tmp2606;
*(&local33) = $tmp2607;
org$frostlang$frostc$ASTNode** $tmp2608 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2609 = *$tmp2608;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2609));
org$frostlang$frostc$ASTNode* $tmp2610 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
*(&local34) = $tmp2609;
org$frostlang$frostc$FixedArray** $tmp2611 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2612 = *$tmp2611;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2612));
org$frostlang$frostc$FixedArray* $tmp2613 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2613));
*(&local35) = $tmp2612;
org$frostlang$frostc$ClassDecl$Kind* $tmp2614 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp2615 = *$tmp2614;
*(&local36) = $tmp2615;
frost$core$String** $tmp2616 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp2617 = *$tmp2616;
*(&local37) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2617));
frost$core$String* $tmp2618 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2618));
*(&local37) = $tmp2617;
org$frostlang$frostc$FixedArray** $tmp2619 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2620 = *$tmp2619;
*(&local38) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2620));
org$frostlang$frostc$FixedArray* $tmp2621 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2621));
*(&local38) = $tmp2620;
org$frostlang$frostc$FixedArray** $tmp2622 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2623 = *$tmp2622;
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
org$frostlang$frostc$FixedArray* $tmp2624 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2624));
*(&local39) = $tmp2623;
org$frostlang$frostc$FixedArray** $tmp2625 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2626 = *$tmp2625;
*(&local40) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
org$frostlang$frostc$FixedArray* $tmp2627 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2627));
*(&local40) = $tmp2626;
// line 1
org$frostlang$frostc$ASTNode* $tmp2628 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
// line 1
org$frostlang$frostc$FixedArray* $tmp2629 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
// line 1
frost$core$String* $tmp2630 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
// line 1
org$frostlang$frostc$FixedArray* $tmp2631 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2631));
// line 1
org$frostlang$frostc$FixedArray* $tmp2632 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2632));
// line 1
org$frostlang$frostc$FixedArray* $tmp2633 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2633));
org$frostlang$frostc$FixedArray* $tmp2634 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2634));
// unreffing _f7
*(&local40) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2635 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2635));
// unreffing _f6
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2636 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2636));
// unreffing _f5
*(&local38) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2637 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2637));
// unreffing _f4
*(&local37) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2638 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
// unreffing _f2
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2639 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2639));
// unreffing _f1
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block27:;
frost$core$Int64 $tmp2640 = (frost$core$Int64) {13};
frost$core$Bit $tmp2641 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2640);
bool $tmp2642 = $tmp2641.value;
if ($tmp2642) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp2643 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2644 = *$tmp2643;
*(&local41) = $tmp2644;
frost$core$String** $tmp2645 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2646 = *$tmp2645;
*(&local42) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
frost$core$String* $tmp2647 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
*(&local42) = $tmp2646;
// line 1
frost$core$String* $tmp2648 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2648));
frost$core$String* $tmp2649 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2649));
// unreffing _f1
*(&local42) = ((frost$core$String*) NULL);
goto block1;
block29:;
frost$core$Int64 $tmp2650 = (frost$core$Int64) {14};
frost$core$Bit $tmp2651 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2650);
bool $tmp2652 = $tmp2651.value;
if ($tmp2652) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp2653 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2654 = *$tmp2653;
*(&local43) = $tmp2654;
org$frostlang$frostc$ASTNode** $tmp2655 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2656 = *$tmp2655;
*(&local44) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
org$frostlang$frostc$ASTNode* $tmp2657 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
*(&local44) = $tmp2656;
org$frostlang$frostc$ASTNode** $tmp2658 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2659 = *$tmp2658;
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
org$frostlang$frostc$ASTNode* $tmp2660 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
*(&local45) = $tmp2659;
// line 1
org$frostlang$frostc$ASTNode* $tmp2661 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
// line 1
org$frostlang$frostc$ASTNode* $tmp2662 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2662));
org$frostlang$frostc$ASTNode* $tmp2663 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2663));
// unreffing _f2
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2664 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
// unreffing _f1
*(&local44) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block31:;
frost$core$Int64 $tmp2665 = (frost$core$Int64) {15};
frost$core$Bit $tmp2666 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2665);
bool $tmp2667 = $tmp2666.value;
if ($tmp2667) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp2668 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2669 = *$tmp2668;
*(&local46) = $tmp2669;
frost$core$String** $tmp2670 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2671 = *$tmp2670;
*(&local47) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
frost$core$String* $tmp2672 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2672));
*(&local47) = $tmp2671;
org$frostlang$frostc$FixedArray** $tmp2673 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2674 = *$tmp2673;
*(&local48) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2674));
org$frostlang$frostc$FixedArray* $tmp2675 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2675));
*(&local48) = $tmp2674;
org$frostlang$frostc$ASTNode** $tmp2676 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2677 = *$tmp2676;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2677));
org$frostlang$frostc$ASTNode* $tmp2678 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
*(&local49) = $tmp2677;
// line 1
frost$core$String* $tmp2679 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
// line 1
org$frostlang$frostc$FixedArray* $tmp2680 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2680));
// line 1
org$frostlang$frostc$ASTNode* $tmp2681 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2681));
org$frostlang$frostc$ASTNode* $tmp2682 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
// unreffing _f3
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2683 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
// unreffing _f2
*(&local48) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2684 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
// unreffing _f1
*(&local47) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Int64 $tmp2685 = (frost$core$Int64) {16};
frost$core$Bit $tmp2686 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2685);
bool $tmp2687 = $tmp2686.value;
if ($tmp2687) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp2688 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2689 = *$tmp2688;
*(&local50) = $tmp2689;
org$frostlang$frostc$ASTNode** $tmp2690 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2691 = *$tmp2690;
*(&local51) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2691));
org$frostlang$frostc$ASTNode* $tmp2692 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2692));
*(&local51) = $tmp2691;
frost$core$String** $tmp2693 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2694 = *$tmp2693;
*(&local52) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
frost$core$String* $tmp2695 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2695));
*(&local52) = $tmp2694;
// line 1
org$frostlang$frostc$ASTNode* $tmp2696 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
// line 1
frost$core$String* $tmp2697 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
frost$core$String* $tmp2698 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
// unreffing _f2
*(&local52) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2699 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2699));
// unreffing _f1
*(&local51) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block35:;
frost$core$Int64 $tmp2700 = (frost$core$Int64) {17};
frost$core$Bit $tmp2701 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2700);
bool $tmp2702 = $tmp2701.value;
if ($tmp2702) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp2703 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2704 = *$tmp2703;
*(&local53) = $tmp2704;
org$frostlang$frostc$ASTNode** $tmp2705 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2706 = *$tmp2705;
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2706));
org$frostlang$frostc$ASTNode* $tmp2707 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
*(&local54) = $tmp2706;
frost$core$String** $tmp2708 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2709 = *$tmp2708;
*(&local55) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2709));
frost$core$String* $tmp2710 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
*(&local55) = $tmp2709;
org$frostlang$frostc$FixedArray** $tmp2711 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2712 = *$tmp2711;
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2712));
org$frostlang$frostc$FixedArray* $tmp2713 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2713));
*(&local56) = $tmp2712;
// line 1
org$frostlang$frostc$ASTNode* $tmp2714 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2714));
// line 1
frost$core$String* $tmp2715 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2715));
// line 1
org$frostlang$frostc$FixedArray* $tmp2716 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
org$frostlang$frostc$FixedArray* $tmp2717 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
// unreffing _f3
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2718 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
// unreffing _f2
*(&local55) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2719 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
// unreffing _f1
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block37:;
frost$core$Int64 $tmp2720 = (frost$core$Int64) {18};
frost$core$Bit $tmp2721 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2720);
bool $tmp2722 = $tmp2721.value;
if ($tmp2722) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp2723 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2724 = *$tmp2723;
*(&local57) = $tmp2724;
org$frostlang$frostc$ASTNode** $tmp2725 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2726 = *$tmp2725;
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
org$frostlang$frostc$ASTNode* $tmp2727 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
*(&local58) = $tmp2726;
org$frostlang$frostc$FixedArray** $tmp2728 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2729 = *$tmp2728;
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
org$frostlang$frostc$FixedArray* $tmp2730 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
*(&local59) = $tmp2729;
org$frostlang$frostc$ASTNode** $tmp2731 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2732 = *$tmp2731;
*(&local60) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2732));
org$frostlang$frostc$ASTNode* $tmp2733 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2733));
*(&local60) = $tmp2732;
// line 1
org$frostlang$frostc$ASTNode* $tmp2734 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2734));
// line 1
org$frostlang$frostc$FixedArray* $tmp2735 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2735));
// line 1
org$frostlang$frostc$ASTNode* $tmp2736 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2736));
org$frostlang$frostc$ASTNode* $tmp2737 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
// unreffing _f3
*(&local60) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2738 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
// unreffing _f2
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2739 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2739));
// unreffing _f1
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block39:;
frost$core$Int64 $tmp2740 = (frost$core$Int64) {19};
frost$core$Bit $tmp2741 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2740);
bool $tmp2742 = $tmp2741.value;
if ($tmp2742) goto block40; else goto block41;
block40:;
org$frostlang$frostc$FixedArray** $tmp2743 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp2744 = *$tmp2743;
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2744));
org$frostlang$frostc$FixedArray* $tmp2745 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
*(&local61) = $tmp2744;
// line 1
org$frostlang$frostc$FixedArray* $tmp2746 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2746));
org$frostlang$frostc$FixedArray* $tmp2747 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2747));
// unreffing _f0
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block41:;
frost$core$Int64 $tmp2748 = (frost$core$Int64) {20};
frost$core$Bit $tmp2749 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2748);
bool $tmp2750 = $tmp2749.value;
if ($tmp2750) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp2751 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2752 = *$tmp2751;
*(&local62) = $tmp2752;
frost$core$String** $tmp2753 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2754 = *$tmp2753;
*(&local63) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2754));
frost$core$String* $tmp2755 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2755));
*(&local63) = $tmp2754;
org$frostlang$frostc$ASTNode** $tmp2756 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2757 = *$tmp2756;
*(&local64) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
org$frostlang$frostc$ASTNode* $tmp2758 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
*(&local64) = $tmp2757;
org$frostlang$frostc$ASTNode** $tmp2759 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2760 = *$tmp2759;
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
org$frostlang$frostc$ASTNode* $tmp2761 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
*(&local65) = $tmp2760;
org$frostlang$frostc$FixedArray** $tmp2762 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp2763 = *$tmp2762;
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2763));
org$frostlang$frostc$FixedArray* $tmp2764 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2764));
*(&local66) = $tmp2763;
// line 1
frost$core$String* $tmp2765 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2765));
// line 1
org$frostlang$frostc$ASTNode* $tmp2766 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2766));
// line 1
org$frostlang$frostc$ASTNode* $tmp2767 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2767));
// line 1
org$frostlang$frostc$FixedArray* $tmp2768 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2768));
org$frostlang$frostc$FixedArray* $tmp2769 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2769));
// unreffing _f4
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2770 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2770));
// unreffing _f3
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2771 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
// unreffing _f2
*(&local64) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2772 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2772));
// unreffing _f1
*(&local63) = ((frost$core$String*) NULL);
goto block1;
block43:;
frost$core$Int64 $tmp2773 = (frost$core$Int64) {21};
frost$core$Bit $tmp2774 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2773);
bool $tmp2775 = $tmp2774.value;
if ($tmp2775) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp2776 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2777 = *$tmp2776;
*(&local67) = $tmp2777;
frost$core$String** $tmp2778 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2779 = *$tmp2778;
*(&local68) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
frost$core$String* $tmp2780 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
*(&local68) = $tmp2779;
org$frostlang$frostc$FixedArray** $tmp2781 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2782 = *$tmp2781;
*(&local69) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
org$frostlang$frostc$FixedArray* $tmp2783 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2783));
*(&local69) = $tmp2782;
// line 1
frost$core$String* $tmp2784 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2784));
// line 1
org$frostlang$frostc$FixedArray* $tmp2785 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2785));
org$frostlang$frostc$FixedArray* $tmp2786 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2786));
// unreffing _f2
*(&local69) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2787 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2787));
// unreffing _f1
*(&local68) = ((frost$core$String*) NULL);
goto block1;
block45:;
frost$core$Int64 $tmp2788 = (frost$core$Int64) {22};
frost$core$Bit $tmp2789 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2788);
bool $tmp2790 = $tmp2789.value;
if ($tmp2790) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp2791 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2792 = *$tmp2791;
*(&local70) = $tmp2792;
frost$core$String** $tmp2793 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2794 = *$tmp2793;
*(&local71) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2794));
frost$core$String* $tmp2795 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
*(&local71) = $tmp2794;
// line 1
frost$core$String* $tmp2796 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
frost$core$String* $tmp2797 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
// unreffing _f1
*(&local71) = ((frost$core$String*) NULL);
goto block1;
block47:;
frost$core$Int64 $tmp2798 = (frost$core$Int64) {23};
frost$core$Bit $tmp2799 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2798);
bool $tmp2800 = $tmp2799.value;
if ($tmp2800) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp2801 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2802 = *$tmp2801;
*(&local72) = $tmp2802;
frost$core$String** $tmp2803 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2804 = *$tmp2803;
*(&local73) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2804));
frost$core$String* $tmp2805 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
*(&local73) = $tmp2804;
org$frostlang$frostc$FixedArray** $tmp2806 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2807 = *$tmp2806;
*(&local74) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2807));
org$frostlang$frostc$FixedArray* $tmp2808 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
*(&local74) = $tmp2807;
// line 1
frost$core$String* $tmp2809 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
// line 1
org$frostlang$frostc$FixedArray* $tmp2810 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2810));
org$frostlang$frostc$FixedArray* $tmp2811 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
// unreffing _f2
*(&local74) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2812 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
// unreffing _f1
*(&local73) = ((frost$core$String*) NULL);
goto block1;
block49:;
frost$core$Int64 $tmp2813 = (frost$core$Int64) {24};
frost$core$Bit $tmp2814 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2813);
bool $tmp2815 = $tmp2814.value;
if ($tmp2815) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp2816 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2817 = *$tmp2816;
*(&local75) = $tmp2817;
org$frostlang$frostc$ASTNode** $tmp2818 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2819 = *$tmp2818;
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2819));
org$frostlang$frostc$ASTNode* $tmp2820 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2820));
*(&local76) = $tmp2819;
org$frostlang$frostc$FixedArray** $tmp2821 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2822 = *$tmp2821;
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
org$frostlang$frostc$FixedArray* $tmp2823 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
*(&local77) = $tmp2822;
org$frostlang$frostc$ASTNode** $tmp2824 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2825 = *$tmp2824;
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2825));
org$frostlang$frostc$ASTNode* $tmp2826 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
*(&local78) = $tmp2825;
// line 1
org$frostlang$frostc$ASTNode* $tmp2827 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
// line 1
org$frostlang$frostc$FixedArray* $tmp2828 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
// line 1
org$frostlang$frostc$ASTNode* $tmp2829 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
org$frostlang$frostc$ASTNode* $tmp2830 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
// unreffing _f3
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2831 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2831));
// unreffing _f2
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2832 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
// unreffing _f1
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block51:;
frost$core$Int64 $tmp2833 = (frost$core$Int64) {25};
frost$core$Bit $tmp2834 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2833);
bool $tmp2835 = $tmp2834.value;
if ($tmp2835) goto block52; else goto block53;
block52:;
org$frostlang$frostc$Position* $tmp2836 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2837 = *$tmp2836;
*(&local79) = $tmp2837;
frost$core$UInt64* $tmp2838 = (frost$core$UInt64*) (param0->$data + 16);
frost$core$UInt64 $tmp2839 = *$tmp2838;
*(&local80) = $tmp2839;
goto block1;
block53:;
frost$core$Int64 $tmp2840 = (frost$core$Int64) {26};
frost$core$Bit $tmp2841 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2840);
bool $tmp2842 = $tmp2841.value;
if ($tmp2842) goto block54; else goto block55;
block54:;
org$frostlang$frostc$Position* $tmp2843 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2844 = *$tmp2843;
*(&local81) = $tmp2844;
org$frostlang$frostc$IR$Value** $tmp2845 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp2846 = *$tmp2845;
*(&local82) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
org$frostlang$frostc$IR$Value* $tmp2847 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2847));
*(&local82) = $tmp2846;
// line 1
org$frostlang$frostc$IR$Value* $tmp2848 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2848));
org$frostlang$frostc$IR$Value* $tmp2849 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2849));
// unreffing _f1
*(&local82) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block55:;
frost$core$Int64 $tmp2850 = (frost$core$Int64) {27};
frost$core$Bit $tmp2851 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2850);
bool $tmp2852 = $tmp2851.value;
if ($tmp2852) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp2853 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2854 = *$tmp2853;
*(&local83) = $tmp2854;
frost$core$String** $tmp2855 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2856 = *$tmp2855;
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
frost$core$String* $tmp2857 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
*(&local84) = $tmp2856;
org$frostlang$frostc$FixedArray** $tmp2858 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2859 = *$tmp2858;
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
org$frostlang$frostc$FixedArray* $tmp2860 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2860));
*(&local85) = $tmp2859;
// line 1
frost$core$String* $tmp2861 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2861));
// line 1
org$frostlang$frostc$FixedArray* $tmp2862 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2862));
org$frostlang$frostc$FixedArray* $tmp2863 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2863));
// unreffing _f2
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2864 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2864));
// unreffing _f1
*(&local84) = ((frost$core$String*) NULL);
goto block1;
block57:;
frost$core$Int64 $tmp2865 = (frost$core$Int64) {28};
frost$core$Bit $tmp2866 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2865);
bool $tmp2867 = $tmp2866.value;
if ($tmp2867) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp2868 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2869 = *$tmp2868;
*(&local86) = $tmp2869;
org$frostlang$frostc$ASTNode** $tmp2870 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2871 = *$tmp2870;
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2871));
org$frostlang$frostc$ASTNode* $tmp2872 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2872));
*(&local87) = $tmp2871;
org$frostlang$frostc$FixedArray** $tmp2873 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2874 = *$tmp2873;
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
org$frostlang$frostc$FixedArray* $tmp2875 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
*(&local88) = $tmp2874;
org$frostlang$frostc$FixedArray** $tmp2876 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2877 = *$tmp2876;
*(&local89) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2877));
org$frostlang$frostc$FixedArray* $tmp2878 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
*(&local89) = $tmp2877;
// line 1
org$frostlang$frostc$ASTNode* $tmp2879 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2879));
// line 1
org$frostlang$frostc$FixedArray* $tmp2880 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2880));
// line 1
org$frostlang$frostc$FixedArray* $tmp2881 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2881));
org$frostlang$frostc$FixedArray* $tmp2882 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
// unreffing _f3
*(&local89) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2883 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2883));
// unreffing _f2
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2884 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2884));
// unreffing _f1
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block59:;
frost$core$Int64 $tmp2885 = (frost$core$Int64) {29};
frost$core$Bit $tmp2886 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2885);
bool $tmp2887 = $tmp2886.value;
if ($tmp2887) goto block60; else goto block61;
block60:;
org$frostlang$frostc$Position* $tmp2888 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2889 = *$tmp2888;
*(&local90) = $tmp2889;
org$frostlang$frostc$ASTNode** $tmp2890 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2891 = *$tmp2890;
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
org$frostlang$frostc$ASTNode* $tmp2892 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
*(&local91) = $tmp2891;
org$frostlang$frostc$FixedArray** $tmp2893 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2894 = *$tmp2893;
*(&local92) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
org$frostlang$frostc$FixedArray* $tmp2895 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2895));
*(&local92) = $tmp2894;
org$frostlang$frostc$MethodDecl$Kind* $tmp2896 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp2897 = *$tmp2896;
*(&local93) = $tmp2897;
frost$core$String** $tmp2898 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp2899 = *$tmp2898;
*(&local94) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
frost$core$String* $tmp2900 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
*(&local94) = $tmp2899;
org$frostlang$frostc$FixedArray** $tmp2901 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2902 = *$tmp2901;
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
org$frostlang$frostc$FixedArray* $tmp2903 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2903));
*(&local95) = $tmp2902;
org$frostlang$frostc$FixedArray** $tmp2904 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2905 = *$tmp2904;
*(&local96) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2905));
org$frostlang$frostc$FixedArray* $tmp2906 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2906));
*(&local96) = $tmp2905;
org$frostlang$frostc$ASTNode** $tmp2907 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
org$frostlang$frostc$ASTNode* $tmp2908 = *$tmp2907;
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2908));
org$frostlang$frostc$ASTNode* $tmp2909 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
*(&local97) = $tmp2908;
org$frostlang$frostc$FixedArray** $tmp2910 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2911 = *$tmp2910;
*(&local98) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
org$frostlang$frostc$FixedArray* $tmp2912 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
*(&local98) = $tmp2911;
// line 1
org$frostlang$frostc$ASTNode* $tmp2913 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
// line 1
org$frostlang$frostc$FixedArray* $tmp2914 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
// line 1
frost$core$String* $tmp2915 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
// line 1
org$frostlang$frostc$FixedArray* $tmp2916 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
// line 1
org$frostlang$frostc$FixedArray* $tmp2917 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2917));
// line 1
org$frostlang$frostc$ASTNode* $tmp2918 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2918));
// line 1
org$frostlang$frostc$FixedArray* $tmp2919 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2919));
org$frostlang$frostc$FixedArray* $tmp2920 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2920));
// unreffing _f8
*(&local98) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2921 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2921));
// unreffing _f7
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2922 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
// unreffing _f6
*(&local96) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2923 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2923));
// unreffing _f5
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2924 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2924));
// unreffing _f4
*(&local94) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2925 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
// unreffing _f2
*(&local92) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2926 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2926));
// unreffing _f1
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block61:;
frost$core$Int64 $tmp2927 = (frost$core$Int64) {30};
frost$core$Bit $tmp2928 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2927);
bool $tmp2929 = $tmp2928.value;
if ($tmp2929) goto block62; else goto block63;
block62:;
org$frostlang$frostc$Position* $tmp2930 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2931 = *$tmp2930;
*(&local99) = $tmp2931;
org$frostlang$frostc$parser$Token$Kind* $tmp2932 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp2933 = *$tmp2932;
*(&local100) = $tmp2933;
org$frostlang$frostc$FixedArray** $tmp2934 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2935 = *$tmp2934;
*(&local101) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2935));
org$frostlang$frostc$FixedArray* $tmp2936 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2936));
*(&local101) = $tmp2935;
org$frostlang$frostc$ASTNode** $tmp2937 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2938 = *$tmp2937;
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2938));
org$frostlang$frostc$ASTNode* $tmp2939 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2939));
*(&local102) = $tmp2938;
// line 1
org$frostlang$frostc$FixedArray* $tmp2940 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2940));
// line 1
org$frostlang$frostc$ASTNode* $tmp2941 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2941));
org$frostlang$frostc$ASTNode* $tmp2942 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2942));
// unreffing _f3
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2943 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
// unreffing _f2
*(&local101) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block63:;
frost$core$Int64 $tmp2944 = (frost$core$Int64) {31};
frost$core$Bit $tmp2945 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2944);
bool $tmp2946 = $tmp2945.value;
if ($tmp2946) goto block64; else goto block65;
block64:;
org$frostlang$frostc$Position* $tmp2947 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2948 = *$tmp2947;
*(&local103) = $tmp2948;
goto block1;
block65:;
frost$core$Int64 $tmp2949 = (frost$core$Int64) {32};
frost$core$Bit $tmp2950 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2949);
bool $tmp2951 = $tmp2950.value;
if ($tmp2951) goto block66; else goto block67;
block66:;
org$frostlang$frostc$Position* $tmp2952 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2953 = *$tmp2952;
*(&local104) = $tmp2953;
org$frostlang$frostc$ASTNode** $tmp2954 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2955 = *$tmp2954;
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2955));
org$frostlang$frostc$ASTNode* $tmp2956 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2956));
*(&local105) = $tmp2955;
// line 1
org$frostlang$frostc$ASTNode* $tmp2957 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2957));
org$frostlang$frostc$ASTNode* $tmp2958 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2958));
// unreffing _f1
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block67:;
frost$core$Int64 $tmp2959 = (frost$core$Int64) {33};
frost$core$Bit $tmp2960 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2959);
bool $tmp2961 = $tmp2960.value;
if ($tmp2961) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Position* $tmp2962 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2963 = *$tmp2962;
*(&local106) = $tmp2963;
frost$core$String** $tmp2964 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2965 = *$tmp2964;
*(&local107) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2965));
frost$core$String* $tmp2966 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2966));
*(&local107) = $tmp2965;
// line 1
frost$core$String* $tmp2967 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2967));
frost$core$String* $tmp2968 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
// unreffing _f1
*(&local107) = ((frost$core$String*) NULL);
goto block1;
block69:;
frost$core$Int64 $tmp2969 = (frost$core$Int64) {34};
frost$core$Bit $tmp2970 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2969);
bool $tmp2971 = $tmp2970.value;
if ($tmp2971) goto block70; else goto block71;
block70:;
org$frostlang$frostc$Position* $tmp2972 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2973 = *$tmp2972;
*(&local108) = $tmp2973;
frost$core$String** $tmp2974 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2975 = *$tmp2974;
*(&local109) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2975));
frost$core$String* $tmp2976 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2976));
*(&local109) = $tmp2975;
org$frostlang$frostc$ASTNode** $tmp2977 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2978 = *$tmp2977;
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2978));
org$frostlang$frostc$ASTNode* $tmp2979 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2979));
*(&local110) = $tmp2978;
// line 1
frost$core$String* $tmp2980 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2980));
// line 1
org$frostlang$frostc$ASTNode* $tmp2981 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2981));
org$frostlang$frostc$ASTNode* $tmp2982 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2982));
// unreffing _f2
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2983 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2983));
// unreffing _f1
*(&local109) = ((frost$core$String*) NULL);
goto block1;
block71:;
frost$core$Int64 $tmp2984 = (frost$core$Int64) {35};
frost$core$Bit $tmp2985 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2984);
bool $tmp2986 = $tmp2985.value;
if ($tmp2986) goto block72; else goto block73;
block72:;
org$frostlang$frostc$Position* $tmp2987 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2988 = *$tmp2987;
*(&local111) = $tmp2988;
org$frostlang$frostc$parser$Token$Kind* $tmp2989 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp2990 = *$tmp2989;
*(&local112) = $tmp2990;
org$frostlang$frostc$ASTNode** $tmp2991 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2992 = *$tmp2991;
*(&local113) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
org$frostlang$frostc$ASTNode* $tmp2993 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2993));
*(&local113) = $tmp2992;
// line 1
org$frostlang$frostc$ASTNode* $tmp2994 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2994));
org$frostlang$frostc$ASTNode* $tmp2995 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2995));
// unreffing _f2
*(&local113) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block73:;
frost$core$Int64 $tmp2996 = (frost$core$Int64) {36};
frost$core$Bit $tmp2997 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp2996);
bool $tmp2998 = $tmp2997.value;
if ($tmp2998) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp2999 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3000 = *$tmp2999;
*(&local114) = $tmp3000;
org$frostlang$frostc$ASTNode** $tmp3001 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3002 = *$tmp3001;
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3002));
org$frostlang$frostc$ASTNode* $tmp3003 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3003));
*(&local115) = $tmp3002;
frost$core$Bit* $tmp3004 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp3005 = *$tmp3004;
*(&local116) = $tmp3005;
org$frostlang$frostc$ASTNode** $tmp3006 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
org$frostlang$frostc$ASTNode* $tmp3007 = *$tmp3006;
*(&local117) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3007));
org$frostlang$frostc$ASTNode* $tmp3008 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3008));
*(&local117) = $tmp3007;
org$frostlang$frostc$ASTNode** $tmp3009 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp3010 = *$tmp3009;
*(&local118) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3010));
org$frostlang$frostc$ASTNode* $tmp3011 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3011));
*(&local118) = $tmp3010;
// line 1
org$frostlang$frostc$ASTNode* $tmp3012 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3012));
// line 1
org$frostlang$frostc$ASTNode* $tmp3013 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
// line 1
org$frostlang$frostc$ASTNode* $tmp3014 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3014));
org$frostlang$frostc$ASTNode* $tmp3015 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
// unreffing _f4
*(&local118) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3016 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3016));
// unreffing _f3
*(&local117) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3017 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3017));
// unreffing _f1
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block75:;
frost$core$Int64 $tmp3018 = (frost$core$Int64) {37};
frost$core$Bit $tmp3019 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp3018);
bool $tmp3020 = $tmp3019.value;
if ($tmp3020) goto block76; else goto block77;
block76:;
org$frostlang$frostc$Position* $tmp3021 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3022 = *$tmp3021;
*(&local119) = $tmp3022;
frost$core$Real64* $tmp3023 = (frost$core$Real64*) (param0->$data + 16);
frost$core$Real64 $tmp3024 = *$tmp3023;
*(&local120) = $tmp3024;
goto block1;
block77:;
frost$core$Int64 $tmp3025 = (frost$core$Int64) {38};
frost$core$Bit $tmp3026 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp3025);
bool $tmp3027 = $tmp3026.value;
if ($tmp3027) goto block78; else goto block79;
block78:;
org$frostlang$frostc$Position* $tmp3028 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3029 = *$tmp3028;
*(&local121) = $tmp3029;
frost$core$String** $tmp3030 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3031 = *$tmp3030;
*(&local122) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3031));
frost$core$String* $tmp3032 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3032));
*(&local122) = $tmp3031;
// line 1
frost$core$String* $tmp3033 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3033));
frost$core$String* $tmp3034 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3034));
// unreffing _f1
*(&local122) = ((frost$core$String*) NULL);
goto block1;
block79:;
frost$core$Int64 $tmp3035 = (frost$core$Int64) {39};
frost$core$Bit $tmp3036 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp3035);
bool $tmp3037 = $tmp3036.value;
if ($tmp3037) goto block80; else goto block81;
block80:;
org$frostlang$frostc$Position* $tmp3038 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3039 = *$tmp3038;
*(&local123) = $tmp3039;
org$frostlang$frostc$ASTNode** $tmp3040 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3041 = *$tmp3040;
*(&local124) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
org$frostlang$frostc$ASTNode* $tmp3042 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3042));
*(&local124) = $tmp3041;
// line 1
org$frostlang$frostc$ASTNode* $tmp3043 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3043));
org$frostlang$frostc$ASTNode* $tmp3044 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3044));
// unreffing _f1
*(&local124) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block81:;
frost$core$Int64 $tmp3045 = (frost$core$Int64) {40};
frost$core$Bit $tmp3046 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp3045);
bool $tmp3047 = $tmp3046.value;
if ($tmp3047) goto block82; else goto block83;
block82:;
org$frostlang$frostc$Position* $tmp3048 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3049 = *$tmp3048;
*(&local125) = $tmp3049;
goto block1;
block83:;
frost$core$Int64 $tmp3050 = (frost$core$Int64) {41};
frost$core$Bit $tmp3051 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp3050);
bool $tmp3052 = $tmp3051.value;
if ($tmp3052) goto block84; else goto block85;
block84:;
org$frostlang$frostc$Position* $tmp3053 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3054 = *$tmp3053;
*(&local126) = $tmp3054;
frost$core$String** $tmp3055 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3056 = *$tmp3055;
*(&local127) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3056));
frost$core$String* $tmp3057 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3057));
*(&local127) = $tmp3056;
// line 1
frost$core$String* $tmp3058 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3058));
frost$core$String* $tmp3059 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3059));
// unreffing _f1
*(&local127) = ((frost$core$String*) NULL);
goto block1;
block85:;
frost$core$Int64 $tmp3060 = (frost$core$Int64) {42};
frost$core$Bit $tmp3061 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp3060);
bool $tmp3062 = $tmp3061.value;
if ($tmp3062) goto block86; else goto block87;
block86:;
org$frostlang$frostc$Position* $tmp3063 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3064 = *$tmp3063;
*(&local128) = $tmp3064;
goto block1;
block87:;
frost$core$Int64 $tmp3065 = (frost$core$Int64) {43};
frost$core$Bit $tmp3066 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp3065);
bool $tmp3067 = $tmp3066.value;
if ($tmp3067) goto block88; else goto block89;
block88:;
org$frostlang$frostc$Position* $tmp3068 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3069 = *$tmp3068;
*(&local129) = $tmp3069;
org$frostlang$frostc$FixedArray** $tmp3070 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3071 = *$tmp3070;
*(&local130) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3071));
org$frostlang$frostc$FixedArray* $tmp3072 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3072));
*(&local130) = $tmp3071;
org$frostlang$frostc$ASTNode** $tmp3073 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3074 = *$tmp3073;
*(&local131) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3074));
org$frostlang$frostc$ASTNode* $tmp3075 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3075));
*(&local131) = $tmp3074;
org$frostlang$frostc$FixedArray** $tmp3076 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3077 = *$tmp3076;
*(&local132) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3077));
org$frostlang$frostc$FixedArray* $tmp3078 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3078));
*(&local132) = $tmp3077;
// line 1
org$frostlang$frostc$FixedArray* $tmp3079 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3079));
// line 1
org$frostlang$frostc$ASTNode* $tmp3080 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3080));
// line 1
org$frostlang$frostc$FixedArray* $tmp3081 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3081));
org$frostlang$frostc$FixedArray* $tmp3082 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3082));
// unreffing _f3
*(&local132) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3083 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3083));
// unreffing _f2
*(&local131) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3084 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3084));
// unreffing _f1
*(&local130) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block89:;
frost$core$Int64 $tmp3085 = (frost$core$Int64) {44};
frost$core$Bit $tmp3086 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp3085);
bool $tmp3087 = $tmp3086.value;
if ($tmp3087) goto block90; else goto block91;
block90:;
org$frostlang$frostc$Position* $tmp3088 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3089 = *$tmp3088;
*(&local133) = $tmp3089;
org$frostlang$frostc$FixedArray** $tmp3090 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3091 = *$tmp3090;
*(&local134) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3091));
org$frostlang$frostc$FixedArray* $tmp3092 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3092));
*(&local134) = $tmp3091;
// line 1
org$frostlang$frostc$FixedArray* $tmp3093 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3093));
org$frostlang$frostc$FixedArray* $tmp3094 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3094));
// unreffing _f1
*(&local134) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block91:;
frost$core$Int64 $tmp3095 = (frost$core$Int64) {45};
frost$core$Bit $tmp3096 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp3095);
bool $tmp3097 = $tmp3096.value;
if ($tmp3097) goto block92; else goto block93;
block92:;
org$frostlang$frostc$Position* $tmp3098 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3099 = *$tmp3098;
*(&local135) = $tmp3099;
org$frostlang$frostc$FixedArray** $tmp3100 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3101 = *$tmp3100;
*(&local136) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
org$frostlang$frostc$FixedArray* $tmp3102 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3102));
*(&local136) = $tmp3101;
// line 1
org$frostlang$frostc$FixedArray* $tmp3103 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3103));
org$frostlang$frostc$FixedArray* $tmp3104 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3104));
// unreffing _f1
*(&local136) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block93:;
frost$core$Int64 $tmp3105 = (frost$core$Int64) {46};
frost$core$Bit $tmp3106 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp3105);
bool $tmp3107 = $tmp3106.value;
if ($tmp3107) goto block94; else goto block95;
block94:;
org$frostlang$frostc$Position* $tmp3108 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3109 = *$tmp3108;
*(&local137) = $tmp3109;
frost$core$String** $tmp3110 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3111 = *$tmp3110;
*(&local138) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3111));
frost$core$String* $tmp3112 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3112));
*(&local138) = $tmp3111;
// line 1
frost$core$String* $tmp3113 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3113));
frost$core$String* $tmp3114 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3114));
// unreffing _f1
*(&local138) = ((frost$core$String*) NULL);
goto block1;
block95:;
frost$core$Int64 $tmp3115 = (frost$core$Int64) {47};
frost$core$Bit $tmp3116 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp3115);
bool $tmp3117 = $tmp3116.value;
if ($tmp3117) goto block96; else goto block97;
block96:;
org$frostlang$frostc$Position* $tmp3118 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3119 = *$tmp3118;
*(&local139) = $tmp3119;
org$frostlang$frostc$FixedArray** $tmp3120 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3121 = *$tmp3120;
*(&local140) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
org$frostlang$frostc$FixedArray* $tmp3122 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3122));
*(&local140) = $tmp3121;
org$frostlang$frostc$ASTNode** $tmp3123 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3124 = *$tmp3123;
*(&local141) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3124));
org$frostlang$frostc$ASTNode* $tmp3125 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
*(&local141) = $tmp3124;
// line 1
org$frostlang$frostc$FixedArray* $tmp3126 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3126));
// line 1
org$frostlang$frostc$ASTNode* $tmp3127 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3127));
org$frostlang$frostc$ASTNode* $tmp3128 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3128));
// unreffing _f2
*(&local141) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3129 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3129));
// unreffing _f1
*(&local140) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block97:;
frost$core$Int64 $tmp3130 = (frost$core$Int64) {48};
frost$core$Bit $tmp3131 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp3130);
bool $tmp3132 = $tmp3131.value;
if ($tmp3132) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp3133 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3134 = *$tmp3133;
*(&local142) = $tmp3134;
frost$core$String** $tmp3135 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3136 = *$tmp3135;
*(&local143) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3136));
frost$core$String* $tmp3137 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
*(&local143) = $tmp3136;
org$frostlang$frostc$ASTNode** $tmp3138 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3139 = *$tmp3138;
*(&local144) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3139));
org$frostlang$frostc$ASTNode* $tmp3140 = *(&local144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3140));
*(&local144) = $tmp3139;
// line 1
frost$core$String* $tmp3141 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3141));
// line 1
org$frostlang$frostc$ASTNode* $tmp3142 = *(&local144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3142));
org$frostlang$frostc$ASTNode* $tmp3143 = *(&local144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3143));
// unreffing _f2
*(&local144) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3144 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3144));
// unreffing _f1
*(&local143) = ((frost$core$String*) NULL);
goto block1;
block99:;
frost$core$Int64 $tmp3145 = (frost$core$Int64) {49};
frost$core$Bit $tmp3146 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp3145);
bool $tmp3147 = $tmp3146.value;
if ($tmp3147) goto block100; else goto block101;
block100:;
org$frostlang$frostc$Position* $tmp3148 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3149 = *$tmp3148;
*(&local145) = $tmp3149;
org$frostlang$frostc$FixedArray** $tmp3150 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3151 = *$tmp3150;
*(&local146) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3151));
org$frostlang$frostc$FixedArray* $tmp3152 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3152));
*(&local146) = $tmp3151;
org$frostlang$frostc$ASTNode** $tmp3153 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3154 = *$tmp3153;
*(&local147) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3154));
org$frostlang$frostc$ASTNode* $tmp3155 = *(&local147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3155));
*(&local147) = $tmp3154;
// line 1
org$frostlang$frostc$FixedArray* $tmp3156 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3156));
// line 1
org$frostlang$frostc$ASTNode* $tmp3157 = *(&local147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3157));
org$frostlang$frostc$ASTNode* $tmp3158 = *(&local147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3158));
// unreffing _f2
*(&local147) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3159 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3159));
// unreffing _f1
*(&local146) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block101:;
frost$core$Int64 $tmp3160 = (frost$core$Int64) {50};
frost$core$Bit $tmp3161 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp3160);
bool $tmp3162 = $tmp3161.value;
if ($tmp3162) goto block102; else goto block103;
block102:;
org$frostlang$frostc$Position* $tmp3163 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3164 = *$tmp3163;
*(&local148) = $tmp3164;
frost$core$String** $tmp3165 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3166 = *$tmp3165;
*(&local149) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3166));
frost$core$String* $tmp3167 = *(&local149);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3167));
*(&local149) = $tmp3166;
// line 1
frost$core$String* $tmp3168 = *(&local149);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3168));
frost$core$String* $tmp3169 = *(&local149);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3169));
// unreffing _f1
*(&local149) = ((frost$core$String*) NULL);
goto block1;
block103:;
frost$core$Int64 $tmp3170 = (frost$core$Int64) {51};
frost$core$Bit $tmp3171 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp3170);
bool $tmp3172 = $tmp3171.value;
if ($tmp3172) goto block104; else goto block105;
block104:;
org$frostlang$frostc$Position* $tmp3173 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3174 = *$tmp3173;
*(&local150) = $tmp3174;
org$frostlang$frostc$Variable$Kind* $tmp3175 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp3176 = *$tmp3175;
*(&local151) = $tmp3176;
org$frostlang$frostc$FixedArray** $tmp3177 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3178 = *$tmp3177;
*(&local152) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3178));
org$frostlang$frostc$FixedArray* $tmp3179 = *(&local152);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3179));
*(&local152) = $tmp3178;
// line 1
org$frostlang$frostc$FixedArray* $tmp3180 = *(&local152);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3180));
org$frostlang$frostc$FixedArray* $tmp3181 = *(&local152);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3181));
// unreffing _f2
*(&local152) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block105:;
frost$core$Int64 $tmp3182 = (frost$core$Int64) {52};
frost$core$Bit $tmp3183 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp3182);
bool $tmp3184 = $tmp3183.value;
if ($tmp3184) goto block106; else goto block107;
block106:;
org$frostlang$frostc$Position* $tmp3185 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3186 = *$tmp3185;
*(&local153) = $tmp3186;
org$frostlang$frostc$FixedArray** $tmp3187 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3188 = *$tmp3187;
*(&local154) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3188));
org$frostlang$frostc$FixedArray* $tmp3189 = *(&local154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
*(&local154) = $tmp3188;
org$frostlang$frostc$FixedArray** $tmp3190 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3191 = *$tmp3190;
*(&local155) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
org$frostlang$frostc$FixedArray* $tmp3192 = *(&local155);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
*(&local155) = $tmp3191;
// line 1
org$frostlang$frostc$FixedArray* $tmp3193 = *(&local154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3193));
// line 1
org$frostlang$frostc$FixedArray* $tmp3194 = *(&local155);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3194));
org$frostlang$frostc$FixedArray* $tmp3195 = *(&local155);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3195));
// unreffing _f2
*(&local155) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3196 = *(&local154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3196));
// unreffing _f1
*(&local154) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block107:;
frost$core$Int64 $tmp3197 = (frost$core$Int64) {53};
frost$core$Bit $tmp3198 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2446, $tmp3197);
bool $tmp3199 = $tmp3198.value;
if ($tmp3199) goto block108; else goto block1;
block108:;
org$frostlang$frostc$Position* $tmp3200 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3201 = *$tmp3200;
*(&local156) = $tmp3201;
frost$core$String** $tmp3202 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3203 = *$tmp3202;
*(&local157) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3203));
frost$core$String* $tmp3204 = *(&local157);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3204));
*(&local157) = $tmp3203;
org$frostlang$frostc$ASTNode** $tmp3205 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3206 = *$tmp3205;
*(&local158) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3206));
org$frostlang$frostc$ASTNode* $tmp3207 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3207));
*(&local158) = $tmp3206;
org$frostlang$frostc$FixedArray** $tmp3208 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3209 = *$tmp3208;
*(&local159) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3209));
org$frostlang$frostc$FixedArray* $tmp3210 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3210));
*(&local159) = $tmp3209;
// line 1
frost$core$String* $tmp3211 = *(&local157);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3211));
// line 1
org$frostlang$frostc$ASTNode* $tmp3212 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3212));
// line 1
org$frostlang$frostc$FixedArray* $tmp3213 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3213));
org$frostlang$frostc$FixedArray* $tmp3214 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
// unreffing _f3
*(&local159) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3215 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3215));
// unreffing _f2
*(&local158) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3216 = *(&local157);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3216));
// unreffing _f1
*(&local157) = ((frost$core$String*) NULL);
goto block1;
block1:;
// line 6
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, frost$core$String* param4, org$frostlang$frostc$ASTNode* param5) {

// line 6
frost$core$Int64* $tmp3217 = &param0->$rawValue;
*$tmp3217 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3218 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3218 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3219 = (frost$core$String**) (param0->$data + 16);
*$tmp3219 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3220 = (frost$core$String**) (param0->$data + 24);
*$tmp3220 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3221 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3221 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3) {

// line 6
frost$core$Int64* $tmp3222 = &param0->$rawValue;
*$tmp3222 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3223 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3223 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3224 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3224 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ASTNode* param4) {

// line 6
frost$core$Int64* $tmp3225 = &param0->$rawValue;
*$tmp3225 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3226 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3226 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3227 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3227 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3228 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3228 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3) {

// line 6
frost$core$Int64* $tmp3229 = &param0->$rawValue;
*$tmp3229 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3230 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3230 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3231 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3231 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2) {

// line 6
frost$core$Int64* $tmp3232 = &param0->$rawValue;
*$tmp3232 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3233 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3233 = param2;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$parser$Token$Kind param4, org$frostlang$frostc$ASTNode* param5) {

// line 6
frost$core$Int64* $tmp3234 = &param0->$rawValue;
*$tmp3234 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3235 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3235 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3236 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3236 = param3;
// line 6
org$frostlang$frostc$parser$Token$Kind* $tmp3237 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
*$tmp3237 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3238 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3238 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$Bit param3) {

// line 6
frost$core$Int64* $tmp3239 = &param0->$rawValue;
*$tmp3239 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3240 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3240 = param2;
// line 6
frost$core$Bit* $tmp3241 = (frost$core$Bit*) (param0->$data + 16);
*$tmp3241 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// line 6
frost$core$Int64* $tmp3242 = &param0->$rawValue;
*$tmp3242 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3243 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3243 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3244 = (frost$core$String**) (param0->$data + 16);
*$tmp3244 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp3245 = &param0->$rawValue;
*$tmp3245 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3246 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3246 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3247 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3247 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3248 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3248 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

// line 6
frost$core$Int64* $tmp3249 = &param0->$rawValue;
*$tmp3249 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3250 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3250 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3251 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3251 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3252 = (frost$core$String**) (param0->$data + 24);
*$tmp3252 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3253 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3253 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ChoiceCase$frost$core$Int64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ChoiceCase* param4, frost$core$Int64 param5) {

// line 6
frost$core$Int64* $tmp3254 = &param0->$rawValue;
*$tmp3254 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3255 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3255 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3256 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3256 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ChoiceCase** $tmp3257 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
*$tmp3257 = param4;
// line 6
frost$core$Int64* $tmp3258 = (frost$core$Int64*) (param0->$data + 32);
*$tmp3258 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ClassDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$FixedArray* param9) {

// line 6
frost$core$Int64* $tmp3259 = &param0->$rawValue;
*$tmp3259 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3260 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3260 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3261 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3261 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3262 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3262 = param4;
// line 6
org$frostlang$frostc$ClassDecl$Kind* $tmp3263 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
*$tmp3263 = param5;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
frost$core$String** $tmp3264 = (frost$core$String**) (param0->$data + 40);
*$tmp3264 = param6;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$FixedArray** $tmp3265 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
*$tmp3265 = param7;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$FixedArray** $tmp3266 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
*$tmp3266 = param8;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$FixedArray** $tmp3267 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
*$tmp3267 = param9;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 6
frost$core$Int64* $tmp3268 = &param0->$rawValue;
*$tmp3268 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3269 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3269 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3270 = (frost$core$String**) (param0->$data + 16);
*$tmp3270 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3271 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3271 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3272 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3272 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4) {

// line 6
frost$core$Int64* $tmp3273 = &param0->$rawValue;
*$tmp3273 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3274 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3274 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3275 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3275 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3276 = (frost$core$String**) (param0->$data + 24);
*$tmp3276 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

// line 6
frost$core$Int64* $tmp3277 = &param0->$rawValue;
*$tmp3277 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3278 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3278 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3279 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3279 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3280 = (frost$core$String**) (param0->$data + 24);
*$tmp3280 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3281 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3281 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 6
frost$core$Int64* $tmp3282 = &param0->$rawValue;
*$tmp3282 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3283 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3283 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3284 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3284 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3285 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3285 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3286 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3286 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$FixedArray* param2) {

// line 6
frost$core$Int64* $tmp3287 = &param0->$rawValue;
*$tmp3287 = param1;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$FixedArray** $tmp3288 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
*$tmp3288 = param2;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$FixedArray* param6) {

// line 6
frost$core$Int64* $tmp3289 = &param0->$rawValue;
*$tmp3289 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3290 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3290 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3291 = (frost$core$String**) (param0->$data + 16);
*$tmp3291 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3292 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3292 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3293 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3293 = param5;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$FixedArray** $tmp3294 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
*$tmp3294 = param6;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp3295 = &param0->$rawValue;
*$tmp3295 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3296 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3296 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3297 = (frost$core$String**) (param0->$data + 16);
*$tmp3297 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3298 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3298 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// line 6
frost$core$Int64* $tmp3299 = &param0->$rawValue;
*$tmp3299 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3300 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3300 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3301 = (frost$core$String**) (param0->$data + 16);
*$tmp3301 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 6
frost$core$Int64* $tmp3302 = &param0->$rawValue;
*$tmp3302 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3303 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3303 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3304 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3304 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3305 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3305 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3306 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3306 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$UInt64 param3) {

// line 6
frost$core$Int64* $tmp3307 = &param0->$rawValue;
*$tmp3307 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3308 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3308 = param2;
// line 6
frost$core$UInt64* $tmp3309 = (frost$core$UInt64*) (param0->$data + 16);
*$tmp3309 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3) {

// line 6
frost$core$Int64* $tmp3310 = &param0->$rawValue;
*$tmp3310 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3311 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3311 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp3312 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp3312 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp3313 = &param0->$rawValue;
*$tmp3313 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3314 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3314 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3315 = (frost$core$String**) (param0->$data + 16);
*$tmp3315 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3316 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3316 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$FixedArray* param5) {

// line 6
frost$core$Int64* $tmp3317 = &param0->$rawValue;
*$tmp3317 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3318 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3318 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3319 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3319 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3320 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3320 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3321 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3321 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$MethodDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$ASTNode* param9, org$frostlang$frostc$FixedArray* param10) {

// line 6
frost$core$Int64* $tmp3322 = &param0->$rawValue;
*$tmp3322 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3323 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3323 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3324 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3324 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3325 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3325 = param4;
// line 6
org$frostlang$frostc$MethodDecl$Kind* $tmp3326 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
*$tmp3326 = param5;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
frost$core$String** $tmp3327 = (frost$core$String**) (param0->$data + 40);
*$tmp3327 = param6;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$FixedArray** $tmp3328 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
*$tmp3328 = param7;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$FixedArray** $tmp3329 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
*$tmp3329 = param8;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$ASTNode** $tmp3330 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
*$tmp3330 = param9;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param10));
org$frostlang$frostc$FixedArray** $tmp3331 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
*$tmp3331 = param10;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$parser$Token$Kind param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 6
frost$core$Int64* $tmp3332 = &param0->$rawValue;
*$tmp3332 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3333 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3333 = param2;
// line 6
org$frostlang$frostc$parser$Token$Kind* $tmp3334 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
*$tmp3334 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3335 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3335 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3336 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3336 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4) {

// line 6
frost$core$Int64* $tmp3337 = &param0->$rawValue;
*$tmp3337 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3338 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3338 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3339 = (frost$core$String**) (param0->$data + 16);
*$tmp3339 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3340 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3340 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$parser$Token$Kind param3, org$frostlang$frostc$ASTNode* param4) {

// line 6
frost$core$Int64* $tmp3341 = &param0->$rawValue;
*$tmp3341 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3342 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3342 = param2;
// line 6
org$frostlang$frostc$parser$Token$Kind* $tmp3343 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
*$tmp3343 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3344 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3344 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$Bit$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$Bit param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$ASTNode* param6) {

// line 6
frost$core$Int64* $tmp3345 = &param0->$rawValue;
*$tmp3345 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3346 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3346 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3347 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3347 = param3;
// line 6
frost$core$Bit* $tmp3348 = (frost$core$Bit*) (param0->$data + 24);
*$tmp3348 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3349 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
*$tmp3349 = param5;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$ASTNode** $tmp3350 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
*$tmp3350 = param6;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Real64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$Real64 param3) {

// line 6
frost$core$Int64* $tmp3351 = &param0->$rawValue;
*$tmp3351 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3352 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3352 = param2;
// line 6
frost$core$Real64* $tmp3353 = (frost$core$Real64*) (param0->$data + 16);
*$tmp3353 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3) {

// line 6
frost$core$Int64* $tmp3354 = &param0->$rawValue;
*$tmp3354 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3355 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3355 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3356 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3356 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$FixedArray* param5) {

// line 6
frost$core$Int64* $tmp3357 = &param0->$rawValue;
*$tmp3357 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3358 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3358 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3359 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3359 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3360 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3360 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3361 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3361 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4) {

// line 6
frost$core$Int64* $tmp3362 = &param0->$rawValue;
*$tmp3362 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3363 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3363 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3364 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3364 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3365 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3365 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4) {

// line 6
frost$core$Int64* $tmp3366 = &param0->$rawValue;
*$tmp3366 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3367 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3367 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3368 = (frost$core$String**) (param0->$data + 16);
*$tmp3368 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3369 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3369 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$Variable$Kind param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp3370 = &param0->$rawValue;
*$tmp3370 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3371 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3371 = param2;
// line 6
org$frostlang$frostc$Variable$Kind* $tmp3372 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
*$tmp3372 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3373 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3373 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp3374 = &param0->$rawValue;
*$tmp3374 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3375 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3375 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3376 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3376 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3377 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3377 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$FixedArray* param5) {

// line 6
frost$core$Int64* $tmp3378 = &param0->$rawValue;
*$tmp3378 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3379 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3379 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3380 = (frost$core$String**) (param0->$data + 16);
*$tmp3380 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3381 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3381 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3382 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3382 = param5;
return;

}






