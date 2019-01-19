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
org$frostlang$frostc$ASTNode$class_type org$frostlang$frostc$ASTNode$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$ASTNode$get_asString$R$frost$core$String, org$frostlang$frostc$ASTNode$cleanup, org$frostlang$frostc$ASTNode$position$R$org$frostlang$frostc$Position} };

typedef frost$core$String* (*$fn595)(frost$core$Object*);
typedef frost$core$String* (*$fn695)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn711)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn715)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn720)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn772)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn779)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn827)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn853)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn910)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn914)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn919)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn958)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn976)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn987)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn991)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn996)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1056)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1073)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1111)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1115)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1120)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1153)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1179)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn1190)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1230)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1234)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1239)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1266)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1270)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1275)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1331)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1335)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1340)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1375)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1411)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1442)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1446)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1451)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1491)(frost$core$Object*);
typedef frost$core$String* (*$fn1503)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn1537)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1541)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1546)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1585)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1589)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1594)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1667)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1671)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1676)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1713)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1723)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1756)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1760)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1765)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn1827)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2005)(frost$core$Object*);
typedef frost$core$String* (*$fn2079)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2097)(frost$collections$CollectionView*);
typedef void (*$fn2123)(frost$core$MutableString*, frost$core$Object*);
typedef void (*$fn2127)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef void (*$fn2146)(frost$core$MutableString*, frost$core$Object*);
typedef void (*$fn2150)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn2215)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2241)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2301)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2327)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2331)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2336)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2354)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2358)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2363)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2415)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2419)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2424)(frost$collections$Iterator*);

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
static frost$core$String $s671 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s673 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s678 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s706 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static frost$core$String $s726 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s729 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s749 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s750 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s752 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static frost$core$String $s754 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s756 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static frost$core$String $s758 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static frost$core$String $s775 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s783 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s810 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s811 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s813 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s818 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s823 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s824 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, -5998790560547262156, NULL };
static frost$core$String $s831 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s856 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s903 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s904 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s906 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s925 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s933 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static frost$core$String $s938 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static frost$core$String $s943 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static frost$core$String $s954 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s955 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, -5998790560547262156, NULL };
static frost$core$String $s961 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s963 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s972 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s973 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, -5998790560547262156, NULL };
static frost$core$String $s979 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s981 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s983 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1002 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1005 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1030 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1031 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s1033 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static frost$core$String $s1035 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1037 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static frost$core$String $s1039 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static frost$core$String $s1059 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static frost$core$String $s1064 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1065 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1068 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s1105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1107 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static frost$core$String $s1126 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1131 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static frost$core$String $s1133 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1156 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1186 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1223 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1281 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1314 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s1317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s1321 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static frost$core$String $s1323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static frost$core$String $s1327 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1349 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1379 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1405 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52\x5f\x47\x45\x4e\x45\x52\x49\x43\x53\x28", 20, -4089576957169252493, NULL };
static frost$core$String $s1407 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1415 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x29", 2, 16504, NULL };
static frost$core$String $s1435 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static frost$core$String $s1437 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1457 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1460 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1469 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1470 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1472 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static frost$core$String $s1474 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1527 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1528 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s1531 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1533 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static frost$core$String $s1552 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1555 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1578 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static frost$core$String $s1580 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1600 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1610 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1611 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 117, 3362627311464111926, NULL };
static frost$core$String $s1613 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1615 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1660 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1661 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1663 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1682 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1690 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static frost$core$String $s1695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static frost$core$String $s1709 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1710 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 132, -5998790560547262156, NULL };
static frost$core$String $s1716 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1718 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1726 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1728 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1737 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1738 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1740 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1742 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1747 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s1752 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1753 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 8545549524367827092, NULL };
static frost$core$String $s1771 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1774 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1803 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s1805 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s1809 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s1811 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s1815 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s1817 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s1821 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s1823 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s1830 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1832 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1836 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1844 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1849 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1850 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1853 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s1861 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x29", 2, 14282, NULL };
static frost$core$String $s1869 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s1870 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s1881 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s1907 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1911 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1927 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1931 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1959 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1960 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1964 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static frost$core$String $s1966 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s1975 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1976 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1985 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s1986 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s1988 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static frost$core$String $s2017 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2019 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2036 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2037 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s2039 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s2041 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2043 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static frost$core$String $s2045 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static frost$core$String $s2049 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s2050 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s2061 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s2066 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static frost$core$String $s2067 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static frost$core$String $s2082 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2084 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static frost$core$String $s2136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s2139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x0a\x66\x61\x69\x6c\x28", 7, 240019370222988, NULL };
static frost$core$String $s2141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x20\x7b\x0a", 4, 146641607, NULL };
static frost$core$String $s2143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d\x0a\x66\x61\x69\x6c\x20\x7b\x0a", 9, 2448437595644631413, NULL };
static frost$core$String $s2152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2186 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 4416450806347501802, NULL };
static frost$core$String $s2195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static frost$core$String $s2224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static frost$core$String $s2250 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2281 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static frost$core$String $s2286 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static frost$core$String $s2291 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static frost$core$String $s2296 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static frost$core$String $s2319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static frost$core$String $s2321 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2347 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2350 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s2401 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2402 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s2405 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s2409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static frost$core$String $s2411 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s2430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s2433 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x41\x53\x54\x4e\x6f\x64\x65\x3a\x20", 21, -8877512154781713630, NULL };
static frost$core$String $s2449 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2450 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2454 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static frost$core$String $s2455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2e\x67\x65\x74\x5f\x61\x73\x53\x74\x72\x69\x6e\x67\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 95, 2618023629491959162, NULL };

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
frost$core$String* org$frostlang$frostc$ASTNode$get_asString$R$frost$core$String(org$frostlang$frostc$ASTNode* param0) {

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
frost$core$String* $tmp568 = frost$core$String$get_asString$R$frost$core$String($tmp567);
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
// line 274
org$frostlang$frostc$ASTNode* $tmp609 = *(&local4);
frost$core$Bit $tmp610 = frost$core$Bit$init$builtin_bit($tmp609 == NULL);
bool $tmp611 = $tmp610.value;
if ($tmp611) goto block12; else goto block13;
block12:;
// line 275
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
// line 277
org$frostlang$frostc$ASTNode* $tmp619 = *(&local3);
frost$core$String* $tmp620 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s621, ((frost$core$Object*) $tmp619));
frost$core$String* $tmp622 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp620, &$s623);
org$frostlang$frostc$ASTNode* $tmp624 = *(&local4);
frost$core$Bit $tmp625 = frost$core$Bit$init$builtin_bit($tmp624 != NULL);
bool $tmp626 = $tmp625.value;
if ($tmp626) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp627 = (frost$core$Int64) {277};
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
// line 280
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
// line 283
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
org$frostlang$frostc$parser$Token$Kind* $tmp664 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp665 = *$tmp664;
*(&local7) = $tmp665;
org$frostlang$frostc$ASTNode** $tmp666 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp667 = *$tmp666;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
org$frostlang$frostc$ASTNode* $tmp668 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
*(&local8) = $tmp667;
// line 286
org$frostlang$frostc$ASTNode* $tmp669 = *(&local6);
frost$core$String* $tmp670 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s671, ((frost$core$Object*) $tmp669));
frost$core$String* $tmp672 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp670, &$s673);
org$frostlang$frostc$parser$Token$Kind $tmp674 = *(&local7);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp675;
$tmp675 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp675->value = $tmp674;
frost$core$String* $tmp676 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp672, ((frost$core$Object*) $tmp675));
frost$core$String* $tmp677 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp676, &$s678);
org$frostlang$frostc$ASTNode* $tmp679 = *(&local8);
frost$core$String* $tmp680 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp677, ((frost$core$Object*) $tmp679));
frost$core$String* $tmp681 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp680, &$s682);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
// unreffing REF($299:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
// unreffing REF($298:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
// unreffing REF($295:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
// unreffing REF($294:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
// unreffing REF($293:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
// unreffing REF($291:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
// unreffing REF($290:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp683 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
// unreffing right
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp684 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
// unreffing left
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp681;
block21:;
frost$core$Int64 $tmp685 = (frost$core$Int64) {6};
frost$core$Bit $tmp686 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp685);
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp688 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp689 = *$tmp688;
frost$core$Bit* $tmp690 = (frost$core$Bit*) (param0->$data + 16);
frost$core$Bit $tmp691 = *$tmp690;
*(&local9) = $tmp691;
// line 289
frost$core$Bit $tmp692 = *(&local9);
frost$core$Bit$wrapper* $tmp693;
$tmp693 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp693->value = $tmp692;
$fn695 $tmp694 = ($fn695) ((frost$core$Object*) $tmp693)->$class->vtable[0];
frost$core$String* $tmp696 = $tmp694(((frost$core$Object*) $tmp693));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
// unreffing REF($347:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
// unreffing REF($345:frost.core.Object)
return $tmp696;
block23:;
frost$core$Int64 $tmp697 = (frost$core$Int64) {7};
frost$core$Bit $tmp698 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp697);
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp700 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp701 = *$tmp700;
org$frostlang$frostc$FixedArray** $tmp702 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp703 = *$tmp702;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
org$frostlang$frostc$FixedArray* $tmp704 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
*(&local10) = $tmp703;
// line 292
frost$core$MutableString* $tmp705 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp705, &$s706);
*(&local11) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$core$MutableString* $tmp707 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
*(&local11) = $tmp705;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
// unreffing REF($373:frost.core.MutableString)
// line 293
org$frostlang$frostc$FixedArray* $tmp708 = *(&local10);
ITable* $tmp709 = ((frost$collections$Iterable*) $tmp708)->$class->itable;
while ($tmp709->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp709 = $tmp709->next;
}
$fn711 $tmp710 = $tmp709->methods[0];
frost$collections$Iterator* $tmp712 = $tmp710(((frost$collections$Iterable*) $tmp708));
goto block26;
block26:;
ITable* $tmp713 = $tmp712->$class->itable;
while ($tmp713->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp713 = $tmp713->next;
}
$fn715 $tmp714 = $tmp713->methods[0];
frost$core$Bit $tmp716 = $tmp714($tmp712);
bool $tmp717 = $tmp716.value;
if ($tmp717) goto block28; else goto block27;
block27:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp718 = $tmp712->$class->itable;
while ($tmp718->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp718 = $tmp718->next;
}
$fn720 $tmp719 = $tmp718->methods[1];
frost$core$Object* $tmp721 = $tmp719($tmp712);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp721)));
org$frostlang$frostc$ASTNode* $tmp722 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp721);
// line 294
frost$core$MutableString* $tmp723 = *(&local11);
org$frostlang$frostc$ASTNode* $tmp724 = *(&local12);
frost$core$String* $tmp725 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp724), &$s726);
frost$core$MutableString$append$frost$core$String($tmp723, $tmp725);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
// unreffing REF($413:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp721);
// unreffing REF($401:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp727 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
// unreffing s
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
// unreffing REF($390:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 296
frost$core$MutableString* $tmp728 = *(&local11);
frost$core$MutableString$append$frost$core$String($tmp728, &$s729);
// line 297
frost$core$MutableString* $tmp730 = *(&local11);
frost$core$String* $tmp731 = frost$core$MutableString$finish$R$frost$core$String($tmp730);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
// unreffing REF($435:frost.core.String)
frost$core$MutableString* $tmp732 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
// unreffing result
*(&local11) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp733 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
// unreffing statements
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp731;
block25:;
frost$core$Int64 $tmp734 = (frost$core$Int64) {8};
frost$core$Bit $tmp735 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp734);
bool $tmp736 = $tmp735.value;
if ($tmp736) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Position* $tmp737 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp738 = *$tmp737;
frost$core$String** $tmp739 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp740 = *$tmp739;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
frost$core$String* $tmp741 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
*(&local13) = $tmp740;
// line 300
frost$core$String* $tmp742 = *(&local13);
frost$core$Bit $tmp743 = frost$core$Bit$init$builtin_bit($tmp742 != NULL);
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block31; else goto block32;
block31:;
// line 301
frost$core$String* $tmp745 = *(&local13);
frost$core$Bit $tmp746 = frost$core$Bit$init$builtin_bit($tmp745 != NULL);
bool $tmp747 = $tmp746.value;
if ($tmp747) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp748 = (frost$core$Int64) {301};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s749, $tmp748, &$s750);
abort(); // unreachable
block33:;
frost$core$String* $tmp751 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s752, $tmp745);
frost$core$String* $tmp753 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp751, &$s754);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
// unreffing REF($484:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
// unreffing REF($483:frost.core.String)
frost$core$String* $tmp755 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
// unreffing label
*(&local13) = ((frost$core$String*) NULL);
return $tmp753;
block32:;
// line 303
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s756));
frost$core$String* $tmp757 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
// unreffing label
*(&local13) = ((frost$core$String*) NULL);
return &$s758;
block30:;
frost$core$Int64 $tmp759 = (frost$core$Int64) {9};
frost$core$Bit $tmp760 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp759);
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block35; else goto block36;
block35:;
org$frostlang$frostc$Position* $tmp762 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp763 = *$tmp762;
org$frostlang$frostc$ASTNode** $tmp764 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp765 = *$tmp764;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
org$frostlang$frostc$ASTNode* $tmp766 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
*(&local14) = $tmp765;
org$frostlang$frostc$FixedArray** $tmp767 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp768 = *$tmp767;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
org$frostlang$frostc$FixedArray* $tmp769 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
*(&local15) = $tmp768;
// line 306
org$frostlang$frostc$ASTNode* $tmp770 = *(&local14);
$fn772 $tmp771 = ($fn772) $tmp770->$class->vtable[0];
frost$core$String* $tmp773 = $tmp771($tmp770);
frost$core$String* $tmp774 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp773, &$s775);
org$frostlang$frostc$FixedArray* $tmp776 = *(&local15);
ITable* $tmp777 = ((frost$collections$CollectionView*) $tmp776)->$class->itable;
while ($tmp777->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp777 = $tmp777->next;
}
$fn779 $tmp778 = $tmp777->methods[1];
frost$core$String* $tmp780 = $tmp778(((frost$collections$CollectionView*) $tmp776));
frost$core$String* $tmp781 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp774, $tmp780);
frost$core$String* $tmp782 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp781, &$s783);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
// unreffing REF($542:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
// unreffing REF($541:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
// unreffing REF($540:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
// unreffing REF($536:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
// unreffing REF($535:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp784 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
// unreffing args
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp785 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
// unreffing target
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp782;
block36:;
frost$core$Int64 $tmp786 = (frost$core$Int64) {10};
frost$core$Bit $tmp787 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp786);
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Position* $tmp789 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp790 = *$tmp789;
org$frostlang$frostc$ASTNode** $tmp791 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp792 = *$tmp791;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
org$frostlang$frostc$ASTNode* $tmp793 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
*(&local16) = $tmp792;
frost$core$String** $tmp794 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp795 = *$tmp794;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$String* $tmp796 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
*(&local17) = $tmp795;
org$frostlang$frostc$FixedArray** $tmp797 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp798 = *$tmp797;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
org$frostlang$frostc$FixedArray* $tmp799 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
*(&local18) = $tmp798;
// line 309
frost$core$MutableString* $tmp800 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp800);
*(&local19) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$core$MutableString* $tmp801 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
*(&local19) = $tmp800;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
// unreffing REF($605:frost.core.MutableString)
// line 310
org$frostlang$frostc$ASTNode* $tmp802 = *(&local16);
frost$core$Bit $tmp803 = frost$core$Bit$init$builtin_bit($tmp802 != NULL);
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block39; else goto block40;
block39:;
// line 311
frost$core$MutableString* $tmp805 = *(&local19);
org$frostlang$frostc$ASTNode* $tmp806 = *(&local16);
frost$core$Bit $tmp807 = frost$core$Bit$init$builtin_bit($tmp806 != NULL);
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp809 = (frost$core$Int64) {311};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s810, $tmp809, &$s811);
abort(); // unreachable
block41:;
frost$core$String* $tmp812 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp806), &$s813);
frost$core$MutableString$append$frost$core$String($tmp805, $tmp812);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
// unreffing REF($634:frost.core.String)
goto block40;
block40:;
// line 313
frost$core$MutableString* $tmp814 = *(&local19);
frost$core$String* $tmp815 = *(&local17);
frost$core$String* $tmp816 = frost$core$String$get_asString$R$frost$core$String($tmp815);
frost$core$String* $tmp817 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp816, &$s818);
org$frostlang$frostc$FixedArray* $tmp819 = *(&local18);
frost$core$Bit $tmp820 = frost$core$Bit$init$builtin_bit($tmp819 != NULL);
bool $tmp821 = $tmp820.value;
if ($tmp821) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp822 = (frost$core$Int64) {313};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s823, $tmp822, &$s824);
abort(); // unreachable
block43:;
ITable* $tmp825 = ((frost$collections$CollectionView*) $tmp819)->$class->itable;
while ($tmp825->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp825 = $tmp825->next;
}
$fn827 $tmp826 = $tmp825->methods[1];
frost$core$String* $tmp828 = $tmp826(((frost$collections$CollectionView*) $tmp819));
frost$core$String* $tmp829 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp817, $tmp828);
frost$core$String* $tmp830 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp829, &$s831);
frost$core$MutableString$append$frost$core$String($tmp814, $tmp830);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
// unreffing REF($657:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
// unreffing REF($656:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
// unreffing REF($655:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
// unreffing REF($644:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
// unreffing REF($643:frost.core.String)
// line 314
frost$core$MutableString* $tmp832 = *(&local19);
frost$core$String* $tmp833 = frost$core$MutableString$finish$R$frost$core$String($tmp832);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
// unreffing REF($676:frost.core.String)
frost$core$MutableString* $tmp834 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
// unreffing result
*(&local19) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp835 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
// unreffing fields
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp836 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
// unreffing name
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp837 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
// unreffing dc
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp833;
block38:;
frost$core$Int64 $tmp838 = (frost$core$Int64) {11};
frost$core$Bit $tmp839 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp838);
bool $tmp840 = $tmp839.value;
if ($tmp840) goto block45; else goto block46;
block45:;
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
// line 317
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
// unreffing REF($742:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
// unreffing REF($741:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
// unreffing REF($740:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
// unreffing REF($738:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
// unreffing REF($737:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
// unreffing REF($734:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
// unreffing REF($733:frost.core.String)
org$frostlang$frostc$ChoiceCase* $tmp866 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
// unreffing ce
*(&local21) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp867 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
// unreffing base
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp864;
block46:;
frost$core$Int64 $tmp868 = (frost$core$Int64) {12};
frost$core$Bit $tmp869 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp868);
bool $tmp870 = $tmp869.value;
if ($tmp870) goto block47; else goto block48;
block47:;
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
// line 320
frost$core$MutableString* $tmp893 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp893);
*(&local30) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
frost$core$MutableString* $tmp894 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
*(&local30) = $tmp893;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
// unreffing REF($841:frost.core.MutableString)
// line 321
org$frostlang$frostc$ASTNode* $tmp895 = *(&local23);
frost$core$Bit $tmp896 = frost$core$Bit$init$builtin_bit($tmp895 != NULL);
bool $tmp897 = $tmp896.value;
if ($tmp897) goto block49; else goto block50;
block49:;
// line 322
frost$core$MutableString* $tmp898 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp899 = *(&local23);
frost$core$Bit $tmp900 = frost$core$Bit$init$builtin_bit($tmp899 != NULL);
bool $tmp901 = $tmp900.value;
if ($tmp901) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp902 = (frost$core$Int64) {322};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s903, $tmp902, &$s904);
abort(); // unreachable
block51:;
frost$core$String* $tmp905 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp899), &$s906);
frost$core$MutableString$append$frost$core$String($tmp898, $tmp905);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
// unreffing REF($870:frost.core.String)
goto block50;
block50:;
// line 324
org$frostlang$frostc$FixedArray* $tmp907 = *(&local24);
ITable* $tmp908 = ((frost$collections$Iterable*) $tmp907)->$class->itable;
while ($tmp908->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp908 = $tmp908->next;
}
$fn910 $tmp909 = $tmp908->methods[0];
frost$collections$Iterator* $tmp911 = $tmp909(((frost$collections$Iterable*) $tmp907));
goto block53;
block53:;
ITable* $tmp912 = $tmp911->$class->itable;
while ($tmp912->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp912 = $tmp912->next;
}
$fn914 $tmp913 = $tmp912->methods[0];
frost$core$Bit $tmp915 = $tmp913($tmp911);
bool $tmp916 = $tmp915.value;
if ($tmp916) goto block55; else goto block54;
block54:;
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp917 = $tmp911->$class->itable;
while ($tmp917->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp917 = $tmp917->next;
}
$fn919 $tmp918 = $tmp917->methods[1];
frost$core$Object* $tmp920 = $tmp918($tmp911);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp920)));
org$frostlang$frostc$ASTNode* $tmp921 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
*(&local31) = ((org$frostlang$frostc$ASTNode*) $tmp920);
// line 325
frost$core$MutableString* $tmp922 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp923 = *(&local31);
frost$core$String* $tmp924 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp923), &$s925);
frost$core$MutableString$append$frost$core$String($tmp922, $tmp924);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
// unreffing REF($904:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp920);
// unreffing REF($892:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp926 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
// unreffing a
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block53;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
// unreffing REF($881:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 327
org$frostlang$frostc$ClassDecl$Kind $tmp927 = *(&local25);
frost$core$Int64 $tmp928 = $tmp927.$rawValue;
frost$core$Int64 $tmp929 = (frost$core$Int64) {0};
frost$core$Bit $tmp930 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp928, $tmp929);
bool $tmp931 = $tmp930.value;
if ($tmp931) goto block57; else goto block58;
block57:;
// line 328
frost$core$MutableString* $tmp932 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp932, &$s933);
goto block56;
block58:;
frost$core$Int64 $tmp934 = (frost$core$Int64) {1};
frost$core$Bit $tmp935 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp928, $tmp934);
bool $tmp936 = $tmp935.value;
if ($tmp936) goto block59; else goto block60;
block59:;
// line 329
frost$core$MutableString* $tmp937 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp937, &$s938);
goto block56;
block60:;
frost$core$Int64 $tmp939 = (frost$core$Int64) {2};
frost$core$Bit $tmp940 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp928, $tmp939);
bool $tmp941 = $tmp940.value;
if ($tmp941) goto block61; else goto block56;
block61:;
// line 330
frost$core$MutableString* $tmp942 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp942, &$s943);
goto block56;
block56:;
// line 332
frost$core$MutableString* $tmp944 = *(&local30);
frost$core$String* $tmp945 = *(&local26);
frost$core$MutableString$append$frost$core$String($tmp944, $tmp945);
// line 333
org$frostlang$frostc$FixedArray* $tmp946 = *(&local27);
frost$core$Bit $tmp947 = frost$core$Bit$init$builtin_bit($tmp946 != NULL);
bool $tmp948 = $tmp947.value;
if ($tmp948) goto block62; else goto block63;
block62:;
// line 334
frost$core$MutableString* $tmp949 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp950 = *(&local27);
frost$core$Bit $tmp951 = frost$core$Bit$init$builtin_bit($tmp950 != NULL);
bool $tmp952 = $tmp951.value;
if ($tmp952) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp953 = (frost$core$Int64) {334};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s954, $tmp953, &$s955);
abort(); // unreachable
block64:;
ITable* $tmp956 = ((frost$collections$CollectionView*) $tmp950)->$class->itable;
while ($tmp956->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp956 = $tmp956->next;
}
$fn958 $tmp957 = $tmp956->methods[1];
frost$core$String* $tmp959 = $tmp957(((frost$collections$CollectionView*) $tmp950));
frost$core$String* $tmp960 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s961, $tmp959);
frost$core$String* $tmp962 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp960, &$s963);
frost$core$MutableString$append$frost$core$String($tmp949, $tmp962);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
// unreffing REF($972:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
// unreffing REF($971:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
// unreffing REF($970:frost.core.String)
goto block63;
block63:;
// line 336
org$frostlang$frostc$FixedArray* $tmp964 = *(&local28);
frost$core$Bit $tmp965 = frost$core$Bit$init$builtin_bit($tmp964 != NULL);
bool $tmp966 = $tmp965.value;
if ($tmp966) goto block66; else goto block67;
block66:;
// line 337
frost$core$MutableString* $tmp967 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp968 = *(&local28);
frost$core$Bit $tmp969 = frost$core$Bit$init$builtin_bit($tmp968 != NULL);
bool $tmp970 = $tmp969.value;
if ($tmp970) goto block68; else goto block69;
block69:;
frost$core$Int64 $tmp971 = (frost$core$Int64) {337};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s972, $tmp971, &$s973);
abort(); // unreachable
block68:;
ITable* $tmp974 = ((frost$collections$CollectionView*) $tmp968)->$class->itable;
while ($tmp974->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp974 = $tmp974->next;
}
$fn976 $tmp975 = $tmp974->methods[1];
frost$core$String* $tmp977 = $tmp975(((frost$collections$CollectionView*) $tmp968));
frost$core$String* $tmp978 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s979, $tmp977);
frost$core$String* $tmp980 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp978, &$s981);
frost$core$MutableString$append$frost$core$String($tmp967, $tmp980);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
// unreffing REF($1004:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
// unreffing REF($1003:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
// unreffing REF($1002:frost.core.String)
goto block67;
block67:;
// line 339
frost$core$MutableString* $tmp982 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp982, &$s983);
// line 340
org$frostlang$frostc$FixedArray* $tmp984 = *(&local29);
ITable* $tmp985 = ((frost$collections$Iterable*) $tmp984)->$class->itable;
while ($tmp985->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp985 = $tmp985->next;
}
$fn987 $tmp986 = $tmp985->methods[0];
frost$collections$Iterator* $tmp988 = $tmp986(((frost$collections$Iterable*) $tmp984));
goto block70;
block70:;
ITable* $tmp989 = $tmp988->$class->itable;
while ($tmp989->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp989 = $tmp989->next;
}
$fn991 $tmp990 = $tmp989->methods[0];
frost$core$Bit $tmp992 = $tmp990($tmp988);
bool $tmp993 = $tmp992.value;
if ($tmp993) goto block72; else goto block71;
block71:;
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp994 = $tmp988->$class->itable;
while ($tmp994->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp994 = $tmp994->next;
}
$fn996 $tmp995 = $tmp994->methods[1];
frost$core$Object* $tmp997 = $tmp995($tmp988);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp997)));
org$frostlang$frostc$ASTNode* $tmp998 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
*(&local32) = ((org$frostlang$frostc$ASTNode*) $tmp997);
// line 341
frost$core$MutableString* $tmp999 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp1000 = *(&local32);
frost$core$String* $tmp1001 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1000), &$s1002);
frost$core$MutableString$append$frost$core$String($tmp999, $tmp1001);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
// unreffing REF($1047:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp997);
// unreffing REF($1035:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1003 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
// unreffing m
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block70;
block72:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
// unreffing REF($1024:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 343
frost$core$MutableString* $tmp1004 = *(&local30);
frost$core$MutableString$append$frost$core$String($tmp1004, &$s1005);
// line 344
frost$core$MutableString* $tmp1006 = *(&local30);
frost$core$String* $tmp1007 = frost$core$MutableString$finish$R$frost$core$String($tmp1006);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
// unreffing REF($1069:frost.core.String)
frost$core$MutableString* $tmp1008 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
// unreffing result
*(&local30) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1009 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
// unreffing members
*(&local29) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1010 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
// unreffing supertypes
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1011 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
// unreffing generics
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1012 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
// unreffing name
*(&local26) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1013 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
// unreffing annotations
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1014 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
// unreffing dc
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1007;
block48:;
frost$core$Int64 $tmp1015 = (frost$core$Int64) {13};
frost$core$Bit $tmp1016 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1015);
bool $tmp1017 = $tmp1016.value;
if ($tmp1017) goto block73; else goto block74;
block73:;
org$frostlang$frostc$Position* $tmp1018 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1019 = *$tmp1018;
frost$core$String** $tmp1020 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1021 = *$tmp1020;
*(&local33) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
frost$core$String* $tmp1022 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
*(&local33) = $tmp1021;
// line 347
frost$core$String* $tmp1023 = *(&local33);
frost$core$Bit $tmp1024 = frost$core$Bit$init$builtin_bit($tmp1023 != NULL);
bool $tmp1025 = $tmp1024.value;
if ($tmp1025) goto block75; else goto block76;
block75:;
// line 348
frost$core$String* $tmp1026 = *(&local33);
frost$core$Bit $tmp1027 = frost$core$Bit$init$builtin_bit($tmp1026 != NULL);
bool $tmp1028 = $tmp1027.value;
if ($tmp1028) goto block77; else goto block78;
block78:;
frost$core$Int64 $tmp1029 = (frost$core$Int64) {348};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1030, $tmp1029, &$s1031);
abort(); // unreachable
block77:;
frost$core$String* $tmp1032 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1033, $tmp1026);
frost$core$String* $tmp1034 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1032, &$s1035);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
// unreffing REF($1143:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
// unreffing REF($1142:frost.core.String)
frost$core$String* $tmp1036 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
// unreffing label
*(&local33) = ((frost$core$String*) NULL);
return $tmp1034;
block76:;
// line 350
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1037));
frost$core$String* $tmp1038 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
// unreffing label
*(&local33) = ((frost$core$String*) NULL);
return &$s1039;
block74:;
frost$core$Int64 $tmp1040 = (frost$core$Int64) {14};
frost$core$Bit $tmp1041 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1040);
bool $tmp1042 = $tmp1041.value;
if ($tmp1042) goto block79; else goto block80;
block79:;
org$frostlang$frostc$Position* $tmp1043 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1044 = *$tmp1043;
org$frostlang$frostc$ASTNode** $tmp1045 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1046 = *$tmp1045;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
org$frostlang$frostc$ASTNode* $tmp1047 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
*(&local34) = $tmp1046;
org$frostlang$frostc$ASTNode** $tmp1048 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1049 = *$tmp1048;
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
org$frostlang$frostc$ASTNode* $tmp1050 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
*(&local35) = $tmp1049;
// line 353
org$frostlang$frostc$ASTNode* $tmp1051 = *(&local35);
frost$core$Bit $tmp1052 = frost$core$Bit$init$builtin_bit($tmp1051 != NULL);
bool $tmp1053 = $tmp1052.value;
if ($tmp1053) goto block81; else goto block82;
block81:;
// line 354
org$frostlang$frostc$ASTNode* $tmp1054 = *(&local34);
$fn1056 $tmp1055 = ($fn1056) $tmp1054->$class->vtable[0];
frost$core$String* $tmp1057 = $tmp1055($tmp1054);
frost$core$String* $tmp1058 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1057, &$s1059);
org$frostlang$frostc$ASTNode* $tmp1060 = *(&local35);
frost$core$Bit $tmp1061 = frost$core$Bit$init$builtin_bit($tmp1060 != NULL);
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block83; else goto block84;
block84:;
frost$core$Int64 $tmp1063 = (frost$core$Int64) {354};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1064, $tmp1063, &$s1065);
abort(); // unreachable
block83:;
frost$core$String* $tmp1066 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1058, ((frost$core$Object*) $tmp1060));
frost$core$String* $tmp1067 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1066, &$s1068);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
// unreffing REF($1212:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
// unreffing REF($1211:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
// unreffing REF($1201:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
// unreffing REF($1200:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1069 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
// unreffing value
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1070 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
// unreffing target
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1067;
block82:;
// line 356
org$frostlang$frostc$ASTNode* $tmp1071 = *(&local34);
$fn1073 $tmp1072 = ($fn1073) ((frost$core$Object*) $tmp1071)->$class->vtable[0];
frost$core$String* $tmp1074 = $tmp1072(((frost$core$Object*) $tmp1071));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
// unreffing REF($1242:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1075 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
// unreffing value
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1076 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
// unreffing target
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1074;
block80:;
frost$core$Int64 $tmp1077 = (frost$core$Int64) {15};
frost$core$Bit $tmp1078 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1077);
bool $tmp1079 = $tmp1078.value;
if ($tmp1079) goto block85; else goto block86;
block85:;
org$frostlang$frostc$Position* $tmp1080 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1081 = *$tmp1080;
frost$core$String** $tmp1082 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1083 = *$tmp1082;
*(&local36) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
frost$core$String* $tmp1084 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
*(&local36) = $tmp1083;
org$frostlang$frostc$FixedArray** $tmp1085 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1086 = *$tmp1085;
*(&local37) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
org$frostlang$frostc$FixedArray* $tmp1087 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
*(&local37) = $tmp1086;
org$frostlang$frostc$ASTNode** $tmp1088 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1089 = *$tmp1088;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
org$frostlang$frostc$ASTNode* $tmp1090 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
*(&local38) = $tmp1089;
// line 359
frost$core$MutableString* $tmp1091 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1091);
*(&local39) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
frost$core$MutableString* $tmp1092 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
*(&local39) = $tmp1091;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
// unreffing REF($1293:frost.core.MutableString)
// line 360
frost$core$String* $tmp1093 = *(&local36);
frost$core$Bit $tmp1094 = frost$core$Bit$init$builtin_bit($tmp1093 != NULL);
bool $tmp1095 = $tmp1094.value;
if ($tmp1095) goto block87; else goto block88;
block87:;
// line 361
frost$core$MutableString* $tmp1096 = *(&local39);
frost$core$String* $tmp1097 = *(&local36);
frost$core$Bit $tmp1098 = frost$core$Bit$init$builtin_bit($tmp1097 != NULL);
bool $tmp1099 = $tmp1098.value;
if ($tmp1099) goto block89; else goto block90;
block90:;
frost$core$Int64 $tmp1100 = (frost$core$Int64) {361};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1101, $tmp1100, &$s1102);
abort(); // unreachable
block89:;
frost$core$String* $tmp1103 = frost$core$String$get_asString$R$frost$core$String($tmp1097);
frost$core$String* $tmp1104 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1103, &$s1105);
frost$core$MutableString$append$frost$core$String($tmp1096, $tmp1104);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
// unreffing REF($1323:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
// unreffing REF($1322:frost.core.String)
goto block88;
block88:;
// line 363
frost$core$MutableString* $tmp1106 = *(&local39);
frost$core$MutableString$append$frost$core$String($tmp1106, &$s1107);
// line 364
org$frostlang$frostc$FixedArray* $tmp1108 = *(&local37);
ITable* $tmp1109 = ((frost$collections$Iterable*) $tmp1108)->$class->itable;
while ($tmp1109->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1109 = $tmp1109->next;
}
$fn1111 $tmp1110 = $tmp1109->methods[0];
frost$collections$Iterator* $tmp1112 = $tmp1110(((frost$collections$Iterable*) $tmp1108));
goto block91;
block91:;
ITable* $tmp1113 = $tmp1112->$class->itable;
while ($tmp1113->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1113 = $tmp1113->next;
}
$fn1115 $tmp1114 = $tmp1113->methods[0];
frost$core$Bit $tmp1116 = $tmp1114($tmp1112);
bool $tmp1117 = $tmp1116.value;
if ($tmp1117) goto block93; else goto block92;
block92:;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1118 = $tmp1112->$class->itable;
while ($tmp1118->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1118 = $tmp1118->next;
}
$fn1120 $tmp1119 = $tmp1118->methods[1];
frost$core$Object* $tmp1121 = $tmp1119($tmp1112);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1121)));
org$frostlang$frostc$ASTNode* $tmp1122 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
*(&local40) = ((org$frostlang$frostc$ASTNode*) $tmp1121);
// line 365
frost$core$MutableString* $tmp1123 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp1124 = *(&local40);
frost$core$String* $tmp1125 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1124), &$s1126);
frost$core$MutableString$append$frost$core$String($tmp1123, $tmp1125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
// unreffing REF($1363:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1121);
// unreffing REF($1351:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1127 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
// unreffing s
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block91;
block93:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
// unreffing REF($1340:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 367
frost$core$MutableString* $tmp1128 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp1129 = *(&local38);
frost$core$String* $tmp1130 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1131, ((frost$core$Object*) $tmp1129));
frost$core$String* $tmp1132 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1130, &$s1133);
frost$core$MutableString$append$frost$core$String($tmp1128, $tmp1132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
// unreffing REF($1385:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
// unreffing REF($1384:frost.core.String)
// line 368
frost$core$MutableString* $tmp1134 = *(&local39);
frost$core$String* $tmp1135 = frost$core$MutableString$finish$R$frost$core$String($tmp1134);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
// unreffing REF($1395:frost.core.String)
frost$core$MutableString* $tmp1136 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
// unreffing result
*(&local39) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1137 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
// unreffing test
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1138 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
// unreffing statements
*(&local37) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1139 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
// unreffing label
*(&local36) = ((frost$core$String*) NULL);
return $tmp1135;
block86:;
frost$core$Int64 $tmp1140 = (frost$core$Int64) {16};
frost$core$Bit $tmp1141 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1140);
bool $tmp1142 = $tmp1141.value;
if ($tmp1142) goto block94; else goto block95;
block94:;
org$frostlang$frostc$Position* $tmp1143 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1144 = *$tmp1143;
org$frostlang$frostc$ASTNode** $tmp1145 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1146 = *$tmp1145;
*(&local41) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
org$frostlang$frostc$ASTNode* $tmp1147 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
*(&local41) = $tmp1146;
frost$core$String** $tmp1148 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1149 = *$tmp1148;
*(&local42) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
frost$core$String* $tmp1150 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
*(&local42) = $tmp1149;
// line 371
org$frostlang$frostc$ASTNode* $tmp1151 = *(&local41);
$fn1153 $tmp1152 = ($fn1153) $tmp1151->$class->vtable[0];
frost$core$String* $tmp1154 = $tmp1152($tmp1151);
frost$core$String* $tmp1155 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1154, &$s1156);
frost$core$String* $tmp1157 = *(&local42);
frost$core$String* $tmp1158 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1155, $tmp1157);
frost$core$String* $tmp1159 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1158, &$s1160);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
// unreffing REF($1453:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
// unreffing REF($1452:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
// unreffing REF($1450:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
// unreffing REF($1449:frost.core.String)
frost$core$String* $tmp1161 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
// unreffing field
*(&local42) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1162 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
// unreffing base
*(&local41) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1159;
block95:;
frost$core$Int64 $tmp1163 = (frost$core$Int64) {17};
frost$core$Bit $tmp1164 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1163);
bool $tmp1165 = $tmp1164.value;
if ($tmp1165) goto block96; else goto block97;
block96:;
org$frostlang$frostc$Position* $tmp1166 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1167 = *$tmp1166;
org$frostlang$frostc$ASTNode** $tmp1168 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1169 = *$tmp1168;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
org$frostlang$frostc$ASTNode* $tmp1170 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
*(&local43) = $tmp1169;
frost$core$String** $tmp1171 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp1172 = *$tmp1171;
*(&local44) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
frost$core$String* $tmp1173 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
*(&local44) = $tmp1172;
org$frostlang$frostc$FixedArray** $tmp1174 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1175 = *$tmp1174;
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
org$frostlang$frostc$FixedArray* $tmp1176 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
*(&local45) = $tmp1175;
// line 374
org$frostlang$frostc$ASTNode* $tmp1177 = *(&local43);
$fn1179 $tmp1178 = ($fn1179) $tmp1177->$class->vtable[0];
frost$core$String* $tmp1180 = $tmp1178($tmp1177);
frost$core$String* $tmp1181 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1180, &$s1182);
frost$core$String* $tmp1183 = *(&local44);
frost$core$String* $tmp1184 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1181, $tmp1183);
frost$core$String* $tmp1185 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1184, &$s1186);
org$frostlang$frostc$FixedArray* $tmp1187 = *(&local45);
ITable* $tmp1188 = ((frost$collections$CollectionView*) $tmp1187)->$class->itable;
while ($tmp1188->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1188 = $tmp1188->next;
}
$fn1190 $tmp1189 = $tmp1188->methods[2];
frost$core$String* $tmp1191 = $tmp1189(((frost$collections$CollectionView*) $tmp1187), &$s1192);
frost$core$String* $tmp1193 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1185, $tmp1191);
frost$core$String* $tmp1194 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1193, &$s1195);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
// unreffing REF($1525:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
// unreffing REF($1524:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
// unreffing REF($1523:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
// unreffing REF($1519:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
// unreffing REF($1518:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
// unreffing REF($1516:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
// unreffing REF($1515:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp1196 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
// unreffing types
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1197 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
// unreffing field
*(&local44) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1198 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
// unreffing base
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1194;
block97:;
frost$core$Int64 $tmp1199 = (frost$core$Int64) {18};
frost$core$Bit $tmp1200 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1199);
bool $tmp1201 = $tmp1200.value;
if ($tmp1201) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp1202 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1203 = *$tmp1202;
org$frostlang$frostc$ASTNode** $tmp1204 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1205 = *$tmp1204;
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
org$frostlang$frostc$ASTNode* $tmp1206 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
*(&local46) = $tmp1205;
org$frostlang$frostc$FixedArray** $tmp1207 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1208 = *$tmp1207;
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
org$frostlang$frostc$FixedArray* $tmp1209 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
*(&local47) = $tmp1208;
org$frostlang$frostc$ASTNode** $tmp1210 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1211 = *$tmp1210;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
org$frostlang$frostc$ASTNode* $tmp1212 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
*(&local48) = $tmp1211;
// line 377
frost$core$MutableString* $tmp1213 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1213);
*(&local49) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
frost$core$MutableString* $tmp1214 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
*(&local49) = $tmp1213;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
// unreffing REF($1599:frost.core.MutableString)
// line 378
org$frostlang$frostc$ASTNode* $tmp1215 = *(&local46);
frost$core$Bit $tmp1216 = frost$core$Bit$init$builtin_bit($tmp1215 != NULL);
bool $tmp1217 = $tmp1216.value;
if ($tmp1217) goto block100; else goto block101;
block100:;
// line 379
frost$core$MutableString* $tmp1218 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1219 = *(&local46);
frost$core$Bit $tmp1220 = frost$core$Bit$init$builtin_bit($tmp1219 != NULL);
bool $tmp1221 = $tmp1220.value;
if ($tmp1221) goto block102; else goto block103;
block103:;
frost$core$Int64 $tmp1222 = (frost$core$Int64) {379};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1223, $tmp1222, &$s1224);
abort(); // unreachable
block102:;
frost$core$String* $tmp1225 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1219), &$s1226);
frost$core$MutableString$append$frost$core$String($tmp1218, $tmp1225);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
// unreffing REF($1628:frost.core.String)
goto block101;
block101:;
// line 381
org$frostlang$frostc$FixedArray* $tmp1227 = *(&local47);
ITable* $tmp1228 = ((frost$collections$Iterable*) $tmp1227)->$class->itable;
while ($tmp1228->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1228 = $tmp1228->next;
}
$fn1230 $tmp1229 = $tmp1228->methods[0];
frost$collections$Iterator* $tmp1231 = $tmp1229(((frost$collections$Iterable*) $tmp1227));
goto block104;
block104:;
ITable* $tmp1232 = $tmp1231->$class->itable;
while ($tmp1232->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1232 = $tmp1232->next;
}
$fn1234 $tmp1233 = $tmp1232->methods[0];
frost$core$Bit $tmp1235 = $tmp1233($tmp1231);
bool $tmp1236 = $tmp1235.value;
if ($tmp1236) goto block106; else goto block105;
block105:;
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1237 = $tmp1231->$class->itable;
while ($tmp1237->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1237 = $tmp1237->next;
}
$fn1239 $tmp1238 = $tmp1237->methods[1];
frost$core$Object* $tmp1240 = $tmp1238($tmp1231);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1240)));
org$frostlang$frostc$ASTNode* $tmp1241 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
*(&local50) = ((org$frostlang$frostc$ASTNode*) $tmp1240);
// line 382
frost$core$MutableString* $tmp1242 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1243 = *(&local50);
frost$core$String* $tmp1244 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1243), &$s1245);
frost$core$MutableString$append$frost$core$String($tmp1242, $tmp1244);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
// unreffing REF($1662:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1240);
// unreffing REF($1650:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1246 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
// unreffing a
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block104;
block106:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
// unreffing REF($1639:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 384
frost$core$MutableString* $tmp1247 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp1248 = *(&local48);
frost$core$MutableString$append$frost$core$Object($tmp1247, ((frost$core$Object*) $tmp1248));
// line 385
frost$core$MutableString* $tmp1249 = *(&local49);
frost$core$String* $tmp1250 = frost$core$MutableString$finish$R$frost$core$String($tmp1249);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
// unreffing REF($1686:frost.core.String)
frost$core$MutableString* $tmp1251 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
// unreffing result
*(&local49) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1252 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
// unreffing decl
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1253 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
// unreffing annotations
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1254 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
// unreffing dc
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1250;
block99:;
frost$core$Int64 $tmp1255 = (frost$core$Int64) {19};
frost$core$Bit $tmp1256 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1255);
bool $tmp1257 = $tmp1256.value;
if ($tmp1257) goto block107; else goto block108;
block107:;
org$frostlang$frostc$FixedArray** $tmp1258 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp1259 = *$tmp1258;
*(&local51) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
org$frostlang$frostc$FixedArray* $tmp1260 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
*(&local51) = $tmp1259;
// line 388
frost$core$MutableString* $tmp1261 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1261);
*(&local52) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
frost$core$MutableString* $tmp1262 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
*(&local52) = $tmp1261;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
// unreffing REF($1727:frost.core.MutableString)
// line 389
org$frostlang$frostc$FixedArray* $tmp1263 = *(&local51);
ITable* $tmp1264 = ((frost$collections$Iterable*) $tmp1263)->$class->itable;
while ($tmp1264->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1264 = $tmp1264->next;
}
$fn1266 $tmp1265 = $tmp1264->methods[0];
frost$collections$Iterator* $tmp1267 = $tmp1265(((frost$collections$Iterable*) $tmp1263));
goto block109;
block109:;
ITable* $tmp1268 = $tmp1267->$class->itable;
while ($tmp1268->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1268 = $tmp1268->next;
}
$fn1270 $tmp1269 = $tmp1268->methods[0];
frost$core$Bit $tmp1271 = $tmp1269($tmp1267);
bool $tmp1272 = $tmp1271.value;
if ($tmp1272) goto block111; else goto block110;
block110:;
*(&local53) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1273 = $tmp1267->$class->itable;
while ($tmp1273->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1273 = $tmp1273->next;
}
$fn1275 $tmp1274 = $tmp1273->methods[1];
frost$core$Object* $tmp1276 = $tmp1274($tmp1267);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1276)));
org$frostlang$frostc$ASTNode* $tmp1277 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
*(&local53) = ((org$frostlang$frostc$ASTNode*) $tmp1276);
// line 390
frost$core$MutableString* $tmp1278 = *(&local52);
org$frostlang$frostc$ASTNode* $tmp1279 = *(&local53);
frost$core$String* $tmp1280 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1279), &$s1281);
frost$core$MutableString$append$frost$core$String($tmp1278, $tmp1280);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
// unreffing REF($1767:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1276);
// unreffing REF($1755:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1282 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
// unreffing e
*(&local53) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block109;
block111:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
// unreffing REF($1744:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 392
frost$core$MutableString* $tmp1283 = *(&local52);
frost$core$String* $tmp1284 = frost$core$MutableString$finish$R$frost$core$String($tmp1283);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
// unreffing REF($1786:frost.core.String)
frost$core$MutableString* $tmp1285 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
// unreffing result
*(&local52) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1286 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
// unreffing entries
*(&local51) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1284;
block108:;
frost$core$Int64 $tmp1287 = (frost$core$Int64) {20};
frost$core$Bit $tmp1288 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1287);
bool $tmp1289 = $tmp1288.value;
if ($tmp1289) goto block112; else goto block113;
block112:;
org$frostlang$frostc$Position* $tmp1290 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1291 = *$tmp1290;
frost$core$String** $tmp1292 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1293 = *$tmp1292;
*(&local54) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
frost$core$String* $tmp1294 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
*(&local54) = $tmp1293;
org$frostlang$frostc$ASTNode** $tmp1295 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1296 = *$tmp1295;
*(&local55) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
org$frostlang$frostc$ASTNode* $tmp1297 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
*(&local55) = $tmp1296;
org$frostlang$frostc$ASTNode** $tmp1298 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1299 = *$tmp1298;
*(&local56) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
org$frostlang$frostc$ASTNode* $tmp1300 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
*(&local56) = $tmp1299;
org$frostlang$frostc$FixedArray** $tmp1301 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1302 = *$tmp1301;
*(&local57) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
org$frostlang$frostc$FixedArray* $tmp1303 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
*(&local57) = $tmp1302;
// line 395
frost$core$MutableString* $tmp1304 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1304);
*(&local58) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
frost$core$MutableString* $tmp1305 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
*(&local58) = $tmp1304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
// unreffing REF($1846:frost.core.MutableString)
// line 396
frost$core$String* $tmp1306 = *(&local54);
frost$core$Bit $tmp1307 = frost$core$Bit$init$builtin_bit($tmp1306 != NULL);
bool $tmp1308 = $tmp1307.value;
if ($tmp1308) goto block114; else goto block115;
block114:;
// line 397
frost$core$MutableString* $tmp1309 = *(&local58);
frost$core$String* $tmp1310 = *(&local54);
frost$core$Bit $tmp1311 = frost$core$Bit$init$builtin_bit($tmp1310 != NULL);
bool $tmp1312 = $tmp1311.value;
if ($tmp1312) goto block116; else goto block117;
block117:;
frost$core$Int64 $tmp1313 = (frost$core$Int64) {397};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1314, $tmp1313, &$s1315);
abort(); // unreachable
block116:;
frost$core$String* $tmp1316 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1310, &$s1317);
frost$core$MutableString$append$frost$core$String($tmp1309, $tmp1316);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
// unreffing REF($1875:frost.core.String)
goto block115;
block115:;
// line 399
frost$core$MutableString* $tmp1318 = *(&local58);
org$frostlang$frostc$ASTNode* $tmp1319 = *(&local55);
frost$core$String* $tmp1320 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1321, ((frost$core$Object*) $tmp1319));
frost$core$String* $tmp1322 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1320, &$s1323);
org$frostlang$frostc$ASTNode* $tmp1324 = *(&local56);
frost$core$String* $tmp1325 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1322, ((frost$core$Object*) $tmp1324));
frost$core$String* $tmp1326 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1325, &$s1327);
frost$core$MutableString$append$frost$core$String($tmp1318, $tmp1326);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
// unreffing REF($1890:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
// unreffing REF($1889:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
// unreffing REF($1886:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
// unreffing REF($1885:frost.core.String)
// line 400
org$frostlang$frostc$FixedArray* $tmp1328 = *(&local57);
ITable* $tmp1329 = ((frost$collections$Iterable*) $tmp1328)->$class->itable;
while ($tmp1329->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1329 = $tmp1329->next;
}
$fn1331 $tmp1330 = $tmp1329->methods[0];
frost$collections$Iterator* $tmp1332 = $tmp1330(((frost$collections$Iterable*) $tmp1328));
goto block118;
block118:;
ITable* $tmp1333 = $tmp1332->$class->itable;
while ($tmp1333->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1333 = $tmp1333->next;
}
$fn1335 $tmp1334 = $tmp1333->methods[0];
frost$core$Bit $tmp1336 = $tmp1334($tmp1332);
bool $tmp1337 = $tmp1336.value;
if ($tmp1337) goto block120; else goto block119;
block119:;
*(&local59) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1338 = $tmp1332->$class->itable;
while ($tmp1338->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1338 = $tmp1338->next;
}
$fn1340 $tmp1339 = $tmp1338->methods[1];
frost$core$Object* $tmp1341 = $tmp1339($tmp1332);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1341)));
org$frostlang$frostc$ASTNode* $tmp1342 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
*(&local59) = ((org$frostlang$frostc$ASTNode*) $tmp1341);
// line 401
frost$core$MutableString* $tmp1343 = *(&local58);
org$frostlang$frostc$ASTNode* $tmp1344 = *(&local59);
frost$core$String* $tmp1345 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1344), &$s1346);
frost$core$MutableString$append$frost$core$String($tmp1343, $tmp1345);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
// unreffing REF($1932:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1341);
// unreffing REF($1920:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1347 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
// unreffing s
*(&local59) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block118;
block120:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
// unreffing REF($1909:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 403
frost$core$MutableString* $tmp1348 = *(&local58);
frost$core$MutableString$append$frost$core$String($tmp1348, &$s1349);
// line 404
frost$core$MutableString* $tmp1350 = *(&local58);
frost$core$String* $tmp1351 = frost$core$MutableString$finish$R$frost$core$String($tmp1350);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
// unreffing REF($1954:frost.core.String)
frost$core$MutableString* $tmp1352 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
// unreffing result
*(&local58) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1353 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
// unreffing statements
*(&local57) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1354 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
// unreffing list
*(&local56) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1355 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
// unreffing target
*(&local55) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1356 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
// unreffing label
*(&local54) = ((frost$core$String*) NULL);
return $tmp1351;
block113:;
frost$core$Int64 $tmp1357 = (frost$core$Int64) {21};
frost$core$Bit $tmp1358 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1357);
bool $tmp1359 = $tmp1358.value;
if ($tmp1359) goto block121; else goto block122;
block121:;
org$frostlang$frostc$Position* $tmp1360 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1361 = *$tmp1360;
frost$core$String** $tmp1362 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1363 = *$tmp1362;
*(&local60) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
frost$core$String* $tmp1364 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
*(&local60) = $tmp1363;
org$frostlang$frostc$FixedArray** $tmp1365 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1366 = *$tmp1365;
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
org$frostlang$frostc$FixedArray* $tmp1367 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
*(&local61) = $tmp1366;
// line 407
frost$core$String* $tmp1368 = *(&local60);
frost$core$String* $tmp1369 = frost$core$String$get_asString$R$frost$core$String($tmp1368);
frost$core$String* $tmp1370 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1369, &$s1371);
org$frostlang$frostc$FixedArray* $tmp1372 = *(&local61);
ITable* $tmp1373 = ((frost$collections$CollectionView*) $tmp1372)->$class->itable;
while ($tmp1373->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1373 = $tmp1373->next;
}
$fn1375 $tmp1374 = $tmp1373->methods[1];
frost$core$String* $tmp1376 = $tmp1374(((frost$collections$CollectionView*) $tmp1372));
frost$core$String* $tmp1377 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1370, $tmp1376);
frost$core$String* $tmp1378 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1377, &$s1379);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
// unreffing REF($2019:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
// unreffing REF($2018:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
// unreffing REF($2017:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
// unreffing REF($2013:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
// unreffing REF($2012:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp1380 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
// unreffing subtypes
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1381 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1381));
// unreffing name
*(&local60) = ((frost$core$String*) NULL);
return $tmp1378;
block122:;
frost$core$Int64 $tmp1382 = (frost$core$Int64) {22};
frost$core$Bit $tmp1383 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1382);
bool $tmp1384 = $tmp1383.value;
if ($tmp1384) goto block123; else goto block124;
block123:;
org$frostlang$frostc$Position* $tmp1385 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1386 = *$tmp1385;
frost$core$String** $tmp1387 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1388 = *$tmp1387;
*(&local62) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
frost$core$String* $tmp1389 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
*(&local62) = $tmp1388;
// line 410
frost$core$String* $tmp1390 = *(&local62);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
frost$core$String* $tmp1391 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
// unreffing name
*(&local62) = ((frost$core$String*) NULL);
return $tmp1390;
block124:;
frost$core$Int64 $tmp1392 = (frost$core$Int64) {23};
frost$core$Bit $tmp1393 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1392);
bool $tmp1394 = $tmp1393.value;
if ($tmp1394) goto block125; else goto block126;
block125:;
org$frostlang$frostc$Position* $tmp1395 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1396 = *$tmp1395;
frost$core$String** $tmp1397 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1398 = *$tmp1397;
*(&local63) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
frost$core$String* $tmp1399 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
*(&local63) = $tmp1398;
org$frostlang$frostc$FixedArray** $tmp1400 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1401 = *$tmp1400;
*(&local64) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
org$frostlang$frostc$FixedArray* $tmp1402 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
*(&local64) = $tmp1401;
// line 413
frost$core$String* $tmp1403 = *(&local63);
frost$core$String* $tmp1404 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1405, $tmp1403);
frost$core$String* $tmp1406 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1404, &$s1407);
org$frostlang$frostc$FixedArray* $tmp1408 = *(&local64);
ITable* $tmp1409 = ((frost$collections$CollectionView*) $tmp1408)->$class->itable;
while ($tmp1409->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1409 = $tmp1409->next;
}
$fn1411 $tmp1410 = $tmp1409->methods[1];
frost$core$String* $tmp1412 = $tmp1410(((frost$collections$CollectionView*) $tmp1408));
frost$core$String* $tmp1413 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1406, $tmp1412);
frost$core$String* $tmp1414 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1413, &$s1415);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
// unreffing REF($2106:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
// unreffing REF($2105:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
// unreffing REF($2104:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
// unreffing REF($2100:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
// unreffing REF($2099:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp1416 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
// unreffing types
*(&local64) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1417 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
// unreffing name
*(&local63) = ((frost$core$String*) NULL);
return $tmp1414;
block126:;
frost$core$Int64 $tmp1418 = (frost$core$Int64) {24};
frost$core$Bit $tmp1419 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1418);
bool $tmp1420 = $tmp1419.value;
if ($tmp1420) goto block127; else goto block128;
block127:;
org$frostlang$frostc$Position* $tmp1421 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1422 = *$tmp1421;
org$frostlang$frostc$ASTNode** $tmp1423 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1424 = *$tmp1423;
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
org$frostlang$frostc$ASTNode* $tmp1425 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
*(&local65) = $tmp1424;
org$frostlang$frostc$FixedArray** $tmp1426 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1427 = *$tmp1426;
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
org$frostlang$frostc$FixedArray* $tmp1428 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
*(&local66) = $tmp1427;
org$frostlang$frostc$ASTNode** $tmp1429 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1430 = *$tmp1429;
*(&local67) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
org$frostlang$frostc$ASTNode* $tmp1431 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
*(&local67) = $tmp1430;
// line 416
frost$core$MutableString* $tmp1432 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$ASTNode* $tmp1433 = *(&local65);
frost$core$String* $tmp1434 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1435, ((frost$core$Object*) $tmp1433));
frost$core$String* $tmp1436 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1434, &$s1437);
frost$core$MutableString$init$frost$core$String($tmp1432, $tmp1436);
*(&local68) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
frost$core$MutableString* $tmp1438 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
*(&local68) = $tmp1432;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
// unreffing REF($2173:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
// unreffing REF($2172:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
// unreffing REF($2169:frost.core.MutableString)
// line 417
org$frostlang$frostc$FixedArray* $tmp1439 = *(&local66);
ITable* $tmp1440 = ((frost$collections$Iterable*) $tmp1439)->$class->itable;
while ($tmp1440->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1440 = $tmp1440->next;
}
$fn1442 $tmp1441 = $tmp1440->methods[0];
frost$collections$Iterator* $tmp1443 = $tmp1441(((frost$collections$Iterable*) $tmp1439));
goto block129;
block129:;
ITable* $tmp1444 = $tmp1443->$class->itable;
while ($tmp1444->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1444 = $tmp1444->next;
}
$fn1446 $tmp1445 = $tmp1444->methods[0];
frost$core$Bit $tmp1447 = $tmp1445($tmp1443);
bool $tmp1448 = $tmp1447.value;
if ($tmp1448) goto block131; else goto block130;
block130:;
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1449 = $tmp1443->$class->itable;
while ($tmp1449->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1449 = $tmp1449->next;
}
$fn1451 $tmp1450 = $tmp1449->methods[1];
frost$core$Object* $tmp1452 = $tmp1450($tmp1443);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1452)));
org$frostlang$frostc$ASTNode* $tmp1453 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
*(&local69) = ((org$frostlang$frostc$ASTNode*) $tmp1452);
// line 418
frost$core$MutableString* $tmp1454 = *(&local68);
org$frostlang$frostc$ASTNode* $tmp1455 = *(&local69);
frost$core$String* $tmp1456 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1455), &$s1457);
frost$core$MutableString$append$frost$core$String($tmp1454, $tmp1456);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
// unreffing REF($2219:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1452);
// unreffing REF($2207:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1458 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
// unreffing s
*(&local69) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block129;
block131:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
// unreffing REF($2196:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 420
frost$core$MutableString* $tmp1459 = *(&local68);
frost$core$MutableString$append$frost$core$String($tmp1459, &$s1460);
// line 421
org$frostlang$frostc$ASTNode* $tmp1461 = *(&local67);
frost$core$Bit $tmp1462 = frost$core$Bit$init$builtin_bit($tmp1461 != NULL);
bool $tmp1463 = $tmp1462.value;
if ($tmp1463) goto block132; else goto block133;
block132:;
// line 422
frost$core$MutableString* $tmp1464 = *(&local68);
org$frostlang$frostc$ASTNode* $tmp1465 = *(&local67);
frost$core$Bit $tmp1466 = frost$core$Bit$init$builtin_bit($tmp1465 != NULL);
bool $tmp1467 = $tmp1466.value;
if ($tmp1467) goto block134; else goto block135;
block135:;
frost$core$Int64 $tmp1468 = (frost$core$Int64) {422};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1469, $tmp1468, &$s1470);
abort(); // unreachable
block134:;
frost$core$String* $tmp1471 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1472, ((frost$core$Object*) $tmp1465));
frost$core$String* $tmp1473 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1471, &$s1474);
frost$core$MutableString$append$frost$core$String($tmp1464, $tmp1473);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
// unreffing REF($2257:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
// unreffing REF($2256:frost.core.String)
goto block133;
block133:;
// line 424
frost$core$MutableString* $tmp1475 = *(&local68);
frost$core$String* $tmp1476 = frost$core$MutableString$finish$R$frost$core$String($tmp1475);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
// unreffing REF($2268:frost.core.String)
frost$core$MutableString* $tmp1477 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
// unreffing result
*(&local68) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1478 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
// unreffing ifFalse
*(&local67) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1479 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
// unreffing ifTrue
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1480 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
// unreffing test
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1476;
block128:;
frost$core$Int64 $tmp1481 = (frost$core$Int64) {25};
frost$core$Bit $tmp1482 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1481);
bool $tmp1483 = $tmp1482.value;
if ($tmp1483) goto block136; else goto block137;
block136:;
org$frostlang$frostc$Position* $tmp1484 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1485 = *$tmp1484;
frost$core$UInt64* $tmp1486 = (frost$core$UInt64*) (param0->$data + 16);
frost$core$UInt64 $tmp1487 = *$tmp1486;
*(&local70) = $tmp1487;
// line 427
frost$core$UInt64 $tmp1488 = *(&local70);
frost$core$UInt64$wrapper* $tmp1489;
$tmp1489 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp1489->value = $tmp1488;
$fn1491 $tmp1490 = ($fn1491) ((frost$core$Object*) $tmp1489)->$class->vtable[0];
frost$core$String* $tmp1492 = $tmp1490(((frost$core$Object*) $tmp1489));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
// unreffing REF($2308:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
// unreffing REF($2306:frost.core.Object)
return $tmp1492;
block137:;
frost$core$Int64 $tmp1493 = (frost$core$Int64) {26};
frost$core$Bit $tmp1494 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1493);
bool $tmp1495 = $tmp1494.value;
if ($tmp1495) goto block138; else goto block139;
block138:;
org$frostlang$frostc$Position* $tmp1496 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1497 = *$tmp1496;
org$frostlang$frostc$IR$Value** $tmp1498 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp1499 = *$tmp1498;
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
org$frostlang$frostc$IR$Value* $tmp1500 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
*(&local71) = $tmp1499;
// line 430
org$frostlang$frostc$IR$Value* $tmp1501 = *(&local71);
$fn1503 $tmp1502 = ($fn1503) ((frost$core$Object*) $tmp1501)->$class->vtable[0];
frost$core$String* $tmp1504 = $tmp1502(((frost$core$Object*) $tmp1501));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
// unreffing REF($2337:frost.core.String)
org$frostlang$frostc$IR$Value* $tmp1505 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
// unreffing value
*(&local71) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp1504;
block139:;
frost$core$Int64 $tmp1506 = (frost$core$Int64) {27};
frost$core$Bit $tmp1507 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1506);
bool $tmp1508 = $tmp1507.value;
if ($tmp1508) goto block140; else goto block141;
block140:;
org$frostlang$frostc$Position* $tmp1509 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1510 = *$tmp1509;
frost$core$String** $tmp1511 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1512 = *$tmp1511;
*(&local72) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
frost$core$String* $tmp1513 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
*(&local72) = $tmp1512;
org$frostlang$frostc$FixedArray** $tmp1514 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1515 = *$tmp1514;
*(&local73) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
org$frostlang$frostc$FixedArray* $tmp1516 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1516));
*(&local73) = $tmp1515;
// line 433
frost$core$MutableString* $tmp1517 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1517);
*(&local74) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
frost$core$MutableString* $tmp1518 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
*(&local74) = $tmp1517;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
// unreffing REF($2374:frost.core.MutableString)
// line 434
frost$core$String* $tmp1519 = *(&local72);
frost$core$Bit $tmp1520 = frost$core$Bit$init$builtin_bit($tmp1519 != NULL);
bool $tmp1521 = $tmp1520.value;
if ($tmp1521) goto block142; else goto block143;
block142:;
// line 435
frost$core$MutableString* $tmp1522 = *(&local74);
frost$core$String* $tmp1523 = *(&local72);
frost$core$Bit $tmp1524 = frost$core$Bit$init$builtin_bit($tmp1523 != NULL);
bool $tmp1525 = $tmp1524.value;
if ($tmp1525) goto block144; else goto block145;
block145:;
frost$core$Int64 $tmp1526 = (frost$core$Int64) {435};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1527, $tmp1526, &$s1528);
abort(); // unreachable
block144:;
frost$core$String* $tmp1529 = frost$core$String$get_asString$R$frost$core$String($tmp1523);
frost$core$String* $tmp1530 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1529, &$s1531);
frost$core$MutableString$append$frost$core$String($tmp1522, $tmp1530);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
// unreffing REF($2404:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
// unreffing REF($2403:frost.core.String)
goto block143;
block143:;
// line 437
frost$core$MutableString* $tmp1532 = *(&local74);
frost$core$MutableString$append$frost$core$String($tmp1532, &$s1533);
// line 438
org$frostlang$frostc$FixedArray* $tmp1534 = *(&local73);
ITable* $tmp1535 = ((frost$collections$Iterable*) $tmp1534)->$class->itable;
while ($tmp1535->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1535 = $tmp1535->next;
}
$fn1537 $tmp1536 = $tmp1535->methods[0];
frost$collections$Iterator* $tmp1538 = $tmp1536(((frost$collections$Iterable*) $tmp1534));
goto block146;
block146:;
ITable* $tmp1539 = $tmp1538->$class->itable;
while ($tmp1539->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1539 = $tmp1539->next;
}
$fn1541 $tmp1540 = $tmp1539->methods[0];
frost$core$Bit $tmp1542 = $tmp1540($tmp1538);
bool $tmp1543 = $tmp1542.value;
if ($tmp1543) goto block148; else goto block147;
block147:;
*(&local75) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1544 = $tmp1538->$class->itable;
while ($tmp1544->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1544 = $tmp1544->next;
}
$fn1546 $tmp1545 = $tmp1544->methods[1];
frost$core$Object* $tmp1547 = $tmp1545($tmp1538);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1547)));
org$frostlang$frostc$ASTNode* $tmp1548 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1548));
*(&local75) = ((org$frostlang$frostc$ASTNode*) $tmp1547);
// line 439
frost$core$MutableString* $tmp1549 = *(&local74);
org$frostlang$frostc$ASTNode* $tmp1550 = *(&local75);
frost$core$String* $tmp1551 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1550), &$s1552);
frost$core$MutableString$append$frost$core$String($tmp1549, $tmp1551);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
// unreffing REF($2444:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1547);
// unreffing REF($2432:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1553 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1553));
// unreffing s
*(&local75) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block146;
block148:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1538));
// unreffing REF($2421:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 441
frost$core$MutableString* $tmp1554 = *(&local74);
frost$core$MutableString$append$frost$core$String($tmp1554, &$s1555);
// line 442
frost$core$MutableString* $tmp1556 = *(&local74);
frost$core$String* $tmp1557 = frost$core$MutableString$finish$R$frost$core$String($tmp1556);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
// unreffing REF($2466:frost.core.String)
frost$core$MutableString* $tmp1558 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1558));
// unreffing result
*(&local74) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1559 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
// unreffing statements
*(&local73) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1560 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
// unreffing label
*(&local72) = ((frost$core$String*) NULL);
return $tmp1557;
block141:;
frost$core$Int64 $tmp1561 = (frost$core$Int64) {28};
frost$core$Bit $tmp1562 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1561);
bool $tmp1563 = $tmp1562.value;
if ($tmp1563) goto block149; else goto block150;
block149:;
org$frostlang$frostc$Position* $tmp1564 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1565 = *$tmp1564;
org$frostlang$frostc$ASTNode** $tmp1566 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1567 = *$tmp1566;
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
org$frostlang$frostc$ASTNode* $tmp1568 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
*(&local76) = $tmp1567;
org$frostlang$frostc$FixedArray** $tmp1569 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1570 = *$tmp1569;
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1570));
org$frostlang$frostc$FixedArray* $tmp1571 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1571));
*(&local77) = $tmp1570;
org$frostlang$frostc$FixedArray** $tmp1572 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1573 = *$tmp1572;
*(&local78) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1573));
org$frostlang$frostc$FixedArray* $tmp1574 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
*(&local78) = $tmp1573;
// line 445
frost$core$MutableString* $tmp1575 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$ASTNode* $tmp1576 = *(&local76);
frost$core$String* $tmp1577 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1578, ((frost$core$Object*) $tmp1576));
frost$core$String* $tmp1579 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1577, &$s1580);
frost$core$MutableString$init$frost$core$String($tmp1575, $tmp1579);
*(&local79) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
frost$core$MutableString* $tmp1581 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1581));
*(&local79) = $tmp1575;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
// unreffing REF($2526:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
// unreffing REF($2525:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
// unreffing REF($2522:frost.core.MutableString)
// line 446
org$frostlang$frostc$FixedArray* $tmp1582 = *(&local77);
ITable* $tmp1583 = ((frost$collections$Iterable*) $tmp1582)->$class->itable;
while ($tmp1583->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1583 = $tmp1583->next;
}
$fn1585 $tmp1584 = $tmp1583->methods[0];
frost$collections$Iterator* $tmp1586 = $tmp1584(((frost$collections$Iterable*) $tmp1582));
goto block151;
block151:;
ITable* $tmp1587 = $tmp1586->$class->itable;
while ($tmp1587->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1587 = $tmp1587->next;
}
$fn1589 $tmp1588 = $tmp1587->methods[0];
frost$core$Bit $tmp1590 = $tmp1588($tmp1586);
bool $tmp1591 = $tmp1590.value;
if ($tmp1591) goto block153; else goto block152;
block152:;
*(&local80) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1592 = $tmp1586->$class->itable;
while ($tmp1592->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1592 = $tmp1592->next;
}
$fn1594 $tmp1593 = $tmp1592->methods[1];
frost$core$Object* $tmp1595 = $tmp1593($tmp1586);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1595)));
org$frostlang$frostc$ASTNode* $tmp1596 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
*(&local80) = ((org$frostlang$frostc$ASTNode*) $tmp1595);
// line 447
frost$core$MutableString* $tmp1597 = *(&local79);
org$frostlang$frostc$ASTNode* $tmp1598 = *(&local80);
frost$core$String* $tmp1599 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1598), &$s1600);
frost$core$MutableString$append$frost$core$String($tmp1597, $tmp1599);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1599));
// unreffing REF($2572:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1595);
// unreffing REF($2560:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1601 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
// unreffing w
*(&local80) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block151;
block153:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1586));
// unreffing REF($2549:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 449
org$frostlang$frostc$FixedArray* $tmp1602 = *(&local78);
frost$core$Bit $tmp1603 = frost$core$Bit$init$builtin_bit($tmp1602 != NULL);
bool $tmp1604 = $tmp1603.value;
if ($tmp1604) goto block154; else goto block155;
block154:;
// line 450
frost$core$MutableString* $tmp1605 = *(&local79);
org$frostlang$frostc$FixedArray* $tmp1606 = *(&local78);
frost$core$Bit $tmp1607 = frost$core$Bit$init$builtin_bit($tmp1606 != NULL);
bool $tmp1608 = $tmp1607.value;
if ($tmp1608) goto block156; else goto block157;
block157:;
frost$core$Int64 $tmp1609 = (frost$core$Int64) {450};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1610, $tmp1609, &$s1611);
abort(); // unreachable
block156:;
frost$core$String* $tmp1612 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1606), &$s1613);
frost$core$MutableString$append$frost$core$String($tmp1605, $tmp1612);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
// unreffing REF($2606:frost.core.String)
goto block155;
block155:;
// line 452
frost$core$MutableString* $tmp1614 = *(&local79);
frost$core$MutableString$append$frost$core$String($tmp1614, &$s1615);
// line 453
frost$core$MutableString* $tmp1616 = *(&local79);
frost$core$String* $tmp1617 = frost$core$MutableString$finish$R$frost$core$String($tmp1616);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
// unreffing REF($2617:frost.core.String)
frost$core$MutableString* $tmp1618 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
// unreffing result
*(&local79) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1619 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1619));
// unreffing other
*(&local78) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1620 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
// unreffing whens
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1621 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
// unreffing value
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1617;
block150:;
frost$core$Int64 $tmp1622 = (frost$core$Int64) {29};
frost$core$Bit $tmp1623 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1622);
bool $tmp1624 = $tmp1623.value;
if ($tmp1624) goto block158; else goto block159;
block158:;
org$frostlang$frostc$Position* $tmp1625 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1626 = *$tmp1625;
org$frostlang$frostc$ASTNode** $tmp1627 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1628 = *$tmp1627;
*(&local81) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1628));
org$frostlang$frostc$ASTNode* $tmp1629 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
*(&local81) = $tmp1628;
org$frostlang$frostc$FixedArray** $tmp1630 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1631 = *$tmp1630;
*(&local82) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1631));
org$frostlang$frostc$FixedArray* $tmp1632 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1632));
*(&local82) = $tmp1631;
org$frostlang$frostc$MethodDecl$Kind* $tmp1633 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp1634 = *$tmp1633;
*(&local83) = $tmp1634;
frost$core$String** $tmp1635 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp1636 = *$tmp1635;
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1636));
frost$core$String* $tmp1637 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1637));
*(&local84) = $tmp1636;
org$frostlang$frostc$FixedArray** $tmp1638 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1639 = *$tmp1638;
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
org$frostlang$frostc$FixedArray* $tmp1640 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
*(&local85) = $tmp1639;
org$frostlang$frostc$FixedArray** $tmp1641 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp1642 = *$tmp1641;
*(&local86) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
org$frostlang$frostc$FixedArray* $tmp1643 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
*(&local86) = $tmp1642;
org$frostlang$frostc$ASTNode** $tmp1644 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
org$frostlang$frostc$ASTNode* $tmp1645 = *$tmp1644;
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1645));
org$frostlang$frostc$ASTNode* $tmp1646 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
*(&local87) = $tmp1645;
org$frostlang$frostc$FixedArray** $tmp1647 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp1648 = *$tmp1647;
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
org$frostlang$frostc$FixedArray* $tmp1649 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1649));
*(&local88) = $tmp1648;
// line 457
frost$core$MutableString* $tmp1650 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1650);
*(&local89) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
frost$core$MutableString* $tmp1651 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
*(&local89) = $tmp1650;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
// unreffing REF($2717:frost.core.MutableString)
// line 458
org$frostlang$frostc$ASTNode* $tmp1652 = *(&local81);
frost$core$Bit $tmp1653 = frost$core$Bit$init$builtin_bit($tmp1652 != NULL);
bool $tmp1654 = $tmp1653.value;
if ($tmp1654) goto block160; else goto block161;
block160:;
// line 459
frost$core$MutableString* $tmp1655 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1656 = *(&local81);
frost$core$Bit $tmp1657 = frost$core$Bit$init$builtin_bit($tmp1656 != NULL);
bool $tmp1658 = $tmp1657.value;
if ($tmp1658) goto block162; else goto block163;
block163:;
frost$core$Int64 $tmp1659 = (frost$core$Int64) {459};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1660, $tmp1659, &$s1661);
abort(); // unreachable
block162:;
frost$core$String* $tmp1662 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1656), &$s1663);
frost$core$MutableString$append$frost$core$String($tmp1655, $tmp1662);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
// unreffing REF($2746:frost.core.String)
goto block161;
block161:;
// line 461
org$frostlang$frostc$FixedArray* $tmp1664 = *(&local82);
ITable* $tmp1665 = ((frost$collections$Iterable*) $tmp1664)->$class->itable;
while ($tmp1665->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1665 = $tmp1665->next;
}
$fn1667 $tmp1666 = $tmp1665->methods[0];
frost$collections$Iterator* $tmp1668 = $tmp1666(((frost$collections$Iterable*) $tmp1664));
goto block164;
block164:;
ITable* $tmp1669 = $tmp1668->$class->itable;
while ($tmp1669->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1669 = $tmp1669->next;
}
$fn1671 $tmp1670 = $tmp1669->methods[0];
frost$core$Bit $tmp1672 = $tmp1670($tmp1668);
bool $tmp1673 = $tmp1672.value;
if ($tmp1673) goto block166; else goto block165;
block165:;
*(&local90) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1674 = $tmp1668->$class->itable;
while ($tmp1674->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1674 = $tmp1674->next;
}
$fn1676 $tmp1675 = $tmp1674->methods[1];
frost$core$Object* $tmp1677 = $tmp1675($tmp1668);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1677)));
org$frostlang$frostc$ASTNode* $tmp1678 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1678));
*(&local90) = ((org$frostlang$frostc$ASTNode*) $tmp1677);
// line 462
frost$core$MutableString* $tmp1679 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1680 = *(&local90);
frost$core$String* $tmp1681 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1680), &$s1682);
frost$core$MutableString$append$frost$core$String($tmp1679, $tmp1681);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
// unreffing REF($2780:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1677);
// unreffing REF($2768:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1683 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1683));
// unreffing a
*(&local90) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block164;
block166:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
// unreffing REF($2757:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 464
org$frostlang$frostc$MethodDecl$Kind $tmp1684 = *(&local83);
frost$core$Int64 $tmp1685 = $tmp1684.$rawValue;
frost$core$Int64 $tmp1686 = (frost$core$Int64) {0};
frost$core$Bit $tmp1687 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1685, $tmp1686);
bool $tmp1688 = $tmp1687.value;
if ($tmp1688) goto block168; else goto block169;
block168:;
// line 465
frost$core$MutableString* $tmp1689 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1689, &$s1690);
goto block167;
block169:;
frost$core$Int64 $tmp1691 = (frost$core$Int64) {1};
frost$core$Bit $tmp1692 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1685, $tmp1691);
bool $tmp1693 = $tmp1692.value;
if ($tmp1693) goto block170; else goto block171;
block170:;
// line 466
frost$core$MutableString* $tmp1694 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1694, &$s1695);
goto block167;
block171:;
frost$core$Int64 $tmp1696 = (frost$core$Int64) {2};
frost$core$Bit $tmp1697 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1685, $tmp1696);
bool $tmp1698 = $tmp1697.value;
if ($tmp1698) goto block172; else goto block167;
block172:;
goto block167;
block167:;
// line 469
frost$core$MutableString* $tmp1699 = *(&local89);
frost$core$String* $tmp1700 = *(&local84);
frost$core$MutableString$append$frost$core$String($tmp1699, $tmp1700);
// line 470
org$frostlang$frostc$FixedArray* $tmp1701 = *(&local85);
frost$core$Bit $tmp1702 = frost$core$Bit$init$builtin_bit($tmp1701 != NULL);
bool $tmp1703 = $tmp1702.value;
if ($tmp1703) goto block173; else goto block174;
block173:;
// line 471
frost$core$MutableString* $tmp1704 = *(&local89);
org$frostlang$frostc$FixedArray* $tmp1705 = *(&local85);
frost$core$Bit $tmp1706 = frost$core$Bit$init$builtin_bit($tmp1705 != NULL);
bool $tmp1707 = $tmp1706.value;
if ($tmp1707) goto block175; else goto block176;
block176:;
frost$core$Int64 $tmp1708 = (frost$core$Int64) {471};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1709, $tmp1708, &$s1710);
abort(); // unreachable
block175:;
ITable* $tmp1711 = ((frost$collections$CollectionView*) $tmp1705)->$class->itable;
while ($tmp1711->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1711 = $tmp1711->next;
}
$fn1713 $tmp1712 = $tmp1711->methods[1];
frost$core$String* $tmp1714 = $tmp1712(((frost$collections$CollectionView*) $tmp1705));
frost$core$String* $tmp1715 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1716, $tmp1714);
frost$core$String* $tmp1717 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1715, &$s1718);
frost$core$MutableString$append$frost$core$String($tmp1704, $tmp1717);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
// unreffing REF($2845:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
// unreffing REF($2844:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
// unreffing REF($2843:frost.core.String)
goto block174;
block174:;
// line 473
frost$core$MutableString* $tmp1719 = *(&local89);
org$frostlang$frostc$FixedArray* $tmp1720 = *(&local86);
ITable* $tmp1721 = ((frost$collections$CollectionView*) $tmp1720)->$class->itable;
while ($tmp1721->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1721 = $tmp1721->next;
}
$fn1723 $tmp1722 = $tmp1721->methods[1];
frost$core$String* $tmp1724 = $tmp1722(((frost$collections$CollectionView*) $tmp1720));
frost$core$String* $tmp1725 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1726, $tmp1724);
frost$core$String* $tmp1727 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1725, &$s1728);
frost$core$MutableString$append$frost$core$String($tmp1719, $tmp1727);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
// unreffing REF($2864:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
// unreffing REF($2863:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
// unreffing REF($2862:frost.core.String)
// line 474
org$frostlang$frostc$ASTNode* $tmp1729 = *(&local87);
frost$core$Bit $tmp1730 = frost$core$Bit$init$builtin_bit($tmp1729 != NULL);
bool $tmp1731 = $tmp1730.value;
if ($tmp1731) goto block177; else goto block178;
block177:;
// line 475
frost$core$MutableString* $tmp1732 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1733 = *(&local87);
frost$core$Bit $tmp1734 = frost$core$Bit$init$builtin_bit($tmp1733 != NULL);
bool $tmp1735 = $tmp1734.value;
if ($tmp1735) goto block179; else goto block180;
block180:;
frost$core$Int64 $tmp1736 = (frost$core$Int64) {475};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1737, $tmp1736, &$s1738);
abort(); // unreachable
block179:;
frost$core$String* $tmp1739 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1740, ((frost$core$Object*) $tmp1733));
frost$core$String* $tmp1741 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1739, &$s1742);
frost$core$MutableString$append$frost$core$String($tmp1732, $tmp1741);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1741));
// unreffing REF($2893:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
// unreffing REF($2892:frost.core.String)
goto block178;
block178:;
// line 477
org$frostlang$frostc$FixedArray* $tmp1743 = *(&local88);
frost$core$Bit $tmp1744 = frost$core$Bit$init$builtin_bit($tmp1743 != NULL);
bool $tmp1745 = $tmp1744.value;
if ($tmp1745) goto block181; else goto block182;
block181:;
// line 478
frost$core$MutableString* $tmp1746 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1746, &$s1747);
// line 479
org$frostlang$frostc$FixedArray* $tmp1748 = *(&local88);
frost$core$Bit $tmp1749 = frost$core$Bit$init$builtin_bit($tmp1748 != NULL);
bool $tmp1750 = $tmp1749.value;
if ($tmp1750) goto block183; else goto block184;
block184:;
frost$core$Int64 $tmp1751 = (frost$core$Int64) {479};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1752, $tmp1751, &$s1753);
abort(); // unreachable
block183:;
ITable* $tmp1754 = ((frost$collections$Iterable*) $tmp1748)->$class->itable;
while ($tmp1754->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1754 = $tmp1754->next;
}
$fn1756 $tmp1755 = $tmp1754->methods[0];
frost$collections$Iterator* $tmp1757 = $tmp1755(((frost$collections$Iterable*) $tmp1748));
goto block185;
block185:;
ITable* $tmp1758 = $tmp1757->$class->itable;
while ($tmp1758->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1758 = $tmp1758->next;
}
$fn1760 $tmp1759 = $tmp1758->methods[0];
frost$core$Bit $tmp1761 = $tmp1759($tmp1757);
bool $tmp1762 = $tmp1761.value;
if ($tmp1762) goto block187; else goto block186;
block186:;
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1763 = $tmp1757->$class->itable;
while ($tmp1763->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1763 = $tmp1763->next;
}
$fn1765 $tmp1764 = $tmp1763->methods[1];
frost$core$Object* $tmp1766 = $tmp1764($tmp1757);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1766)));
org$frostlang$frostc$ASTNode* $tmp1767 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
*(&local91) = ((org$frostlang$frostc$ASTNode*) $tmp1766);
// line 480
frost$core$MutableString* $tmp1768 = *(&local89);
org$frostlang$frostc$ASTNode* $tmp1769 = *(&local91);
frost$core$String* $tmp1770 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1769), &$s1771);
frost$core$MutableString$append$frost$core$String($tmp1768, $tmp1770);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
// unreffing REF($2946:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1766);
// unreffing REF($2934:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1772 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
// unreffing s
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block185;
block187:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1757));
// unreffing REF($2923:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 482
frost$core$MutableString* $tmp1773 = *(&local89);
frost$core$MutableString$append$frost$core$String($tmp1773, &$s1774);
goto block182;
block182:;
// line 484
frost$core$MutableString* $tmp1775 = *(&local89);
frost$core$String* $tmp1776 = frost$core$MutableString$finish$R$frost$core$String($tmp1775);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
// unreffing REF($2969:frost.core.String)
frost$core$MutableString* $tmp1777 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1777));
// unreffing result
*(&local89) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp1778 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
// unreffing statements
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1779 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1779));
// unreffing returnType
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1780 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1780));
// unreffing parameters
*(&local86) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1781 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1781));
// unreffing generics
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1782 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
// unreffing name
*(&local84) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1783 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
// unreffing annotations
*(&local82) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1784 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
// unreffing dc
*(&local81) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1776;
block159:;
frost$core$Int64 $tmp1785 = (frost$core$Int64) {30};
frost$core$Bit $tmp1786 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1785);
bool $tmp1787 = $tmp1786.value;
if ($tmp1787) goto block188; else goto block189;
block188:;
org$frostlang$frostc$Position* $tmp1788 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1789 = *$tmp1788;
org$frostlang$frostc$parser$Token$Kind* $tmp1790 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp1791 = *$tmp1790;
*(&local92) = $tmp1791;
org$frostlang$frostc$FixedArray** $tmp1792 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1793 = *$tmp1792;
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
org$frostlang$frostc$FixedArray* $tmp1794 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1794));
*(&local93) = $tmp1793;
org$frostlang$frostc$ASTNode** $tmp1795 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1796 = *$tmp1795;
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
org$frostlang$frostc$ASTNode* $tmp1797 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
*(&local94) = $tmp1796;
// line 487
*(&local95) = ((frost$core$String*) NULL);
// line 488
org$frostlang$frostc$parser$Token$Kind $tmp1798 = *(&local92);
frost$core$Int64 $tmp1799 = $tmp1798.$rawValue;
frost$core$Int64 $tmp1800 = (frost$core$Int64) {94};
frost$core$Bit $tmp1801 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1799, $tmp1800);
bool $tmp1802 = $tmp1801.value;
if ($tmp1802) goto block191; else goto block192;
block191:;
// line 490
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1803));
frost$core$String* $tmp1804 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1804));
*(&local95) = &$s1805;
goto block190;
block192:;
frost$core$Int64 $tmp1806 = (frost$core$Int64) {95};
frost$core$Bit $tmp1807 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1799, $tmp1806);
bool $tmp1808 = $tmp1807.value;
if ($tmp1808) goto block193; else goto block194;
block193:;
// line 493
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1809));
frost$core$String* $tmp1810 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1810));
*(&local95) = &$s1811;
goto block190;
block194:;
frost$core$Int64 $tmp1812 = (frost$core$Int64) {96};
frost$core$Bit $tmp1813 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1799, $tmp1812);
bool $tmp1814 = $tmp1813.value;
if ($tmp1814) goto block195; else goto block196;
block195:;
// line 496
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1815));
frost$core$String* $tmp1816 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
*(&local95) = &$s1817;
goto block190;
block196:;
frost$core$Int64 $tmp1818 = (frost$core$Int64) {97};
frost$core$Bit $tmp1819 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1799, $tmp1818);
bool $tmp1820 = $tmp1819.value;
if ($tmp1820) goto block197; else goto block190;
block197:;
// line 499
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1821));
frost$core$String* $tmp1822 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
*(&local95) = &$s1823;
goto block190;
block190:;
// line 502
org$frostlang$frostc$FixedArray* $tmp1824 = *(&local93);
ITable* $tmp1825 = ((frost$collections$CollectionView*) $tmp1824)->$class->itable;
while ($tmp1825->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1825 = $tmp1825->next;
}
$fn1827 $tmp1826 = $tmp1825->methods[1];
frost$core$String* $tmp1828 = $tmp1826(((frost$collections$CollectionView*) $tmp1824));
frost$core$String* $tmp1829 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1830, $tmp1828);
frost$core$String* $tmp1831 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1829, &$s1832);
frost$core$String* $tmp1833 = *(&local95);
frost$core$String* $tmp1834 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1831, $tmp1833);
frost$core$String* $tmp1835 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1834, &$s1836);
*(&local96) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
frost$core$String* $tmp1837 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1837));
*(&local96) = $tmp1835;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
// unreffing REF($3105:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
// unreffing REF($3104:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
// unreffing REF($3102:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
// unreffing REF($3101:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
// unreffing REF($3100:frost.core.String)
// line 503
org$frostlang$frostc$ASTNode* $tmp1838 = *(&local94);
frost$core$Bit $tmp1839 = frost$core$Bit$init$builtin_bit($tmp1838 != NULL);
bool $tmp1840 = $tmp1839.value;
if ($tmp1840) goto block198; else goto block199;
block198:;
// line 504
frost$core$String* $tmp1841 = *(&local96);
frost$core$String* $tmp1842 = frost$core$String$get_asString$R$frost$core$String($tmp1841);
frost$core$String* $tmp1843 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1842, &$s1844);
org$frostlang$frostc$ASTNode* $tmp1845 = *(&local94);
frost$core$Bit $tmp1846 = frost$core$Bit$init$builtin_bit($tmp1845 != NULL);
bool $tmp1847 = $tmp1846.value;
if ($tmp1847) goto block200; else goto block201;
block201:;
frost$core$Int64 $tmp1848 = (frost$core$Int64) {504};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1849, $tmp1848, &$s1850);
abort(); // unreachable
block200:;
frost$core$String* $tmp1851 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1843, ((frost$core$Object*) $tmp1845));
frost$core$String* $tmp1852 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1851, &$s1853);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
// unreffing REF($3148:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
// unreffing REF($3147:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1843));
// unreffing REF($3137:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
// unreffing REF($3136:frost.core.String)
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
block199:;
// line 506
frost$core$String* $tmp1858 = *(&local96);
frost$core$String* $tmp1859 = frost$core$String$get_asString$R$frost$core$String($tmp1858);
frost$core$String* $tmp1860 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1859, &$s1861);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
// unreffing REF($3187:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
// unreffing REF($3186:frost.core.String)
frost$core$String* $tmp1862 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
// unreffing partial
*(&local96) = ((frost$core$String*) NULL);
frost$core$String* $tmp1863 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
// unreffing yield
*(&local95) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1864 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
// unreffing returnType
*(&local94) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1865 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
// unreffing paramTypes
*(&local93) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1860;
block189:;
frost$core$Int64 $tmp1866 = (frost$core$Int64) {31};
frost$core$Bit $tmp1867 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1866);
bool $tmp1868 = $tmp1867.value;
if ($tmp1868) goto block202; else goto block203;
block202:;
// line 509
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1869));
return &$s1870;
block203:;
frost$core$Int64 $tmp1871 = (frost$core$Int64) {32};
frost$core$Bit $tmp1872 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1871);
bool $tmp1873 = $tmp1872.value;
if ($tmp1873) goto block204; else goto block205;
block204:;
org$frostlang$frostc$Position* $tmp1874 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1875 = *$tmp1874;
org$frostlang$frostc$ASTNode** $tmp1876 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1877 = *$tmp1876;
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1877));
org$frostlang$frostc$ASTNode* $tmp1878 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1878));
*(&local97) = $tmp1877;
// line 512
org$frostlang$frostc$ASTNode* $tmp1879 = *(&local97);
frost$core$String* $tmp1880 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp1879), &$s1881);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
// unreffing REF($3243:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1882 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
// unreffing base
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1880;
block205:;
frost$core$Int64 $tmp1883 = (frost$core$Int64) {33};
frost$core$Bit $tmp1884 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1883);
bool $tmp1885 = $tmp1884.value;
if ($tmp1885) goto block206; else goto block207;
block206:;
org$frostlang$frostc$Position* $tmp1886 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1887 = *$tmp1886;
frost$core$String** $tmp1888 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1889 = *$tmp1888;
*(&local98) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1889));
frost$core$String* $tmp1890 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
*(&local98) = $tmp1889;
// line 515
frost$core$String* $tmp1891 = *(&local98);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
frost$core$String* $tmp1892 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
// unreffing name
*(&local98) = ((frost$core$String*) NULL);
return $tmp1891;
block207:;
frost$core$Int64 $tmp1893 = (frost$core$Int64) {34};
frost$core$Bit $tmp1894 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1893);
bool $tmp1895 = $tmp1894.value;
if ($tmp1895) goto block208; else goto block209;
block208:;
org$frostlang$frostc$Position* $tmp1896 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1897 = *$tmp1896;
frost$core$String** $tmp1898 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp1899 = *$tmp1898;
*(&local99) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
frost$core$String* $tmp1900 = *(&local99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
*(&local99) = $tmp1899;
org$frostlang$frostc$ASTNode** $tmp1901 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1902 = *$tmp1901;
*(&local100) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
org$frostlang$frostc$ASTNode* $tmp1903 = *(&local100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
*(&local100) = $tmp1902;
// line 518
frost$core$String* $tmp1904 = *(&local99);
frost$core$String* $tmp1905 = frost$core$String$get_asString$R$frost$core$String($tmp1904);
frost$core$String* $tmp1906 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1905, &$s1907);
org$frostlang$frostc$ASTNode* $tmp1908 = *(&local100);
frost$core$String* $tmp1909 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1906, ((frost$core$Object*) $tmp1908));
frost$core$String* $tmp1910 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1909, &$s1911);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
// unreffing REF($3311:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1909));
// unreffing REF($3310:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
// unreffing REF($3307:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
// unreffing REF($3306:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1912 = *(&local100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
// unreffing type
*(&local100) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1913 = *(&local99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1913));
// unreffing name
*(&local99) = ((frost$core$String*) NULL);
return $tmp1910;
block209:;
frost$core$Int64 $tmp1914 = (frost$core$Int64) {35};
frost$core$Bit $tmp1915 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1914);
bool $tmp1916 = $tmp1915.value;
if ($tmp1916) goto block210; else goto block211;
block210:;
org$frostlang$frostc$Position* $tmp1917 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1918 = *$tmp1917;
org$frostlang$frostc$parser$Token$Kind* $tmp1919 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp1920 = *$tmp1919;
*(&local101) = $tmp1920;
org$frostlang$frostc$ASTNode** $tmp1921 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1922 = *$tmp1921;
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
org$frostlang$frostc$ASTNode* $tmp1923 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
*(&local102) = $tmp1922;
// line 521
org$frostlang$frostc$parser$Token$Kind $tmp1924 = *(&local101);
frost$core$String* $tmp1925 = org$frostlang$frostc$parser$Token$Kind$get_asString$R$frost$core$String($tmp1924);
frost$core$String* $tmp1926 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1925, &$s1927);
org$frostlang$frostc$ASTNode* $tmp1928 = *(&local102);
frost$core$String* $tmp1929 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1926, ((frost$core$Object*) $tmp1928));
frost$core$String* $tmp1930 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1929, &$s1931);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1930));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1930));
// unreffing REF($3362:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
// unreffing REF($3361:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1926));
// unreffing REF($3358:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
// unreffing REF($3357:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp1932 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
// unreffing base
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1930;
block211:;
frost$core$Int64 $tmp1933 = (frost$core$Int64) {36};
frost$core$Bit $tmp1934 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1933);
bool $tmp1935 = $tmp1934.value;
if ($tmp1935) goto block212; else goto block213;
block212:;
org$frostlang$frostc$Position* $tmp1936 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1937 = *$tmp1936;
org$frostlang$frostc$ASTNode** $tmp1938 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1939 = *$tmp1938;
*(&local103) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
org$frostlang$frostc$ASTNode* $tmp1940 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1940));
*(&local103) = $tmp1939;
frost$core$Bit* $tmp1941 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp1942 = *$tmp1941;
*(&local104) = $tmp1942;
org$frostlang$frostc$ASTNode** $tmp1943 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
org$frostlang$frostc$ASTNode* $tmp1944 = *$tmp1943;
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
org$frostlang$frostc$ASTNode* $tmp1945 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1945));
*(&local105) = $tmp1944;
org$frostlang$frostc$ASTNode** $tmp1946 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp1947 = *$tmp1946;
*(&local106) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1947));
org$frostlang$frostc$ASTNode* $tmp1948 = *(&local106);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1948));
*(&local106) = $tmp1947;
// line 524
frost$core$MutableString* $tmp1949 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1949);
*(&local107) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
frost$core$MutableString* $tmp1950 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1950));
*(&local107) = $tmp1949;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
// unreffing REF($3420:frost.core.MutableString)
// line 525
org$frostlang$frostc$ASTNode* $tmp1951 = *(&local103);
frost$core$Bit $tmp1952 = frost$core$Bit$init$builtin_bit($tmp1951 != NULL);
bool $tmp1953 = $tmp1952.value;
if ($tmp1953) goto block214; else goto block215;
block214:;
// line 526
frost$core$MutableString* $tmp1954 = *(&local107);
org$frostlang$frostc$ASTNode* $tmp1955 = *(&local103);
frost$core$Bit $tmp1956 = frost$core$Bit$init$builtin_bit($tmp1955 != NULL);
bool $tmp1957 = $tmp1956.value;
if ($tmp1957) goto block216; else goto block217;
block217:;
frost$core$Int64 $tmp1958 = (frost$core$Int64) {526};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1959, $tmp1958, &$s1960);
abort(); // unreachable
block216:;
frost$core$MutableString$append$frost$core$Object($tmp1954, ((frost$core$Object*) $tmp1955));
goto block215;
block215:;
// line 528
frost$core$Bit $tmp1961 = *(&local104);
bool $tmp1962 = $tmp1961.value;
if ($tmp1962) goto block218; else goto block220;
block218:;
// line 529
frost$core$MutableString* $tmp1963 = *(&local107);
frost$core$MutableString$append$frost$core$String($tmp1963, &$s1964);
goto block219;
block220:;
// line 1
// line 532
frost$core$MutableString* $tmp1965 = *(&local107);
frost$core$MutableString$append$frost$core$String($tmp1965, &$s1966);
goto block219;
block219:;
// line 534
org$frostlang$frostc$ASTNode* $tmp1967 = *(&local105);
frost$core$Bit $tmp1968 = frost$core$Bit$init$builtin_bit($tmp1967 != NULL);
bool $tmp1969 = $tmp1968.value;
if ($tmp1969) goto block221; else goto block222;
block221:;
// line 535
frost$core$MutableString* $tmp1970 = *(&local107);
org$frostlang$frostc$ASTNode* $tmp1971 = *(&local105);
frost$core$Bit $tmp1972 = frost$core$Bit$init$builtin_bit($tmp1971 != NULL);
bool $tmp1973 = $tmp1972.value;
if ($tmp1973) goto block223; else goto block224;
block224:;
frost$core$Int64 $tmp1974 = (frost$core$Int64) {535};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1975, $tmp1974, &$s1976);
abort(); // unreachable
block223:;
frost$core$MutableString$append$frost$core$Object($tmp1970, ((frost$core$Object*) $tmp1971));
goto block222;
block222:;
// line 537
org$frostlang$frostc$ASTNode* $tmp1977 = *(&local106);
frost$core$Bit $tmp1978 = frost$core$Bit$init$builtin_bit($tmp1977 != NULL);
bool $tmp1979 = $tmp1978.value;
if ($tmp1979) goto block225; else goto block226;
block225:;
// line 538
frost$core$MutableString* $tmp1980 = *(&local107);
org$frostlang$frostc$ASTNode* $tmp1981 = *(&local106);
frost$core$Bit $tmp1982 = frost$core$Bit$init$builtin_bit($tmp1981 != NULL);
bool $tmp1983 = $tmp1982.value;
if ($tmp1983) goto block227; else goto block228;
block228:;
frost$core$Int64 $tmp1984 = (frost$core$Int64) {538};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1985, $tmp1984, &$s1986);
abort(); // unreachable
block227:;
frost$core$String* $tmp1987 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1988, ((frost$core$Object*) $tmp1981));
frost$core$MutableString$append$frost$core$String($tmp1980, $tmp1987);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1987));
// unreffing REF($3500:frost.core.String)
goto block226;
block226:;
// line 540
frost$core$MutableString* $tmp1989 = *(&local107);
frost$core$String* $tmp1990 = frost$core$MutableString$finish$R$frost$core$String($tmp1989);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
// unreffing REF($3508:frost.core.String)
frost$core$MutableString* $tmp1991 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1991));
// unreffing result
*(&local107) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$ASTNode* $tmp1992 = *(&local106);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
// unreffing step
*(&local106) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1993 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
// unreffing end
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1994 = *(&local103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
// unreffing start
*(&local103) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1990;
block213:;
frost$core$Int64 $tmp1995 = (frost$core$Int64) {37};
frost$core$Bit $tmp1996 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp1995);
bool $tmp1997 = $tmp1996.value;
if ($tmp1997) goto block229; else goto block230;
block229:;
org$frostlang$frostc$Position* $tmp1998 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp1999 = *$tmp1998;
frost$core$Real64* $tmp2000 = (frost$core$Real64*) (param0->$data + 16);
frost$core$Real64 $tmp2001 = *$tmp2000;
*(&local108) = $tmp2001;
// line 543
frost$core$Real64 $tmp2002 = *(&local108);
frost$core$Real64$wrapper* $tmp2003;
$tmp2003 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp2003->value = $tmp2002;
$fn2005 $tmp2004 = ($fn2005) ((frost$core$Object*) $tmp2003)->$class->vtable[0];
frost$core$String* $tmp2006 = $tmp2004(((frost$core$Object*) $tmp2003));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2006));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2006));
// unreffing REF($3548:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2003));
// unreffing REF($3546:frost.core.Object)
return $tmp2006;
block230:;
frost$core$Int64 $tmp2007 = (frost$core$Int64) {38};
frost$core$Bit $tmp2008 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2007);
bool $tmp2009 = $tmp2008.value;
if ($tmp2009) goto block231; else goto block232;
block231:;
org$frostlang$frostc$Position* $tmp2010 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2011 = *$tmp2010;
frost$core$String** $tmp2012 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2013 = *$tmp2012;
*(&local109) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
frost$core$String* $tmp2014 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2014));
*(&local109) = $tmp2013;
// line 546
frost$core$String* $tmp2015 = *(&local109);
frost$core$String* $tmp2016 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2017, $tmp2015);
frost$core$String* $tmp2018 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2016, &$s2019);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2018));
// unreffing REF($3576:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2016));
// unreffing REF($3575:frost.core.String)
frost$core$String* $tmp2020 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2020));
// unreffing src
*(&local109) = ((frost$core$String*) NULL);
return $tmp2018;
block232:;
frost$core$Int64 $tmp2021 = (frost$core$Int64) {39};
frost$core$Bit $tmp2022 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2021);
bool $tmp2023 = $tmp2022.value;
if ($tmp2023) goto block233; else goto block234;
block233:;
org$frostlang$frostc$Position* $tmp2024 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2025 = *$tmp2024;
org$frostlang$frostc$ASTNode** $tmp2026 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2027 = *$tmp2026;
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2027));
org$frostlang$frostc$ASTNode* $tmp2028 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
*(&local110) = $tmp2027;
// line 549
org$frostlang$frostc$ASTNode* $tmp2029 = *(&local110);
frost$core$Bit $tmp2030 = frost$core$Bit$init$builtin_bit($tmp2029 != NULL);
bool $tmp2031 = $tmp2030.value;
if ($tmp2031) goto block235; else goto block236;
block235:;
// line 550
org$frostlang$frostc$ASTNode* $tmp2032 = *(&local110);
frost$core$Bit $tmp2033 = frost$core$Bit$init$builtin_bit($tmp2032 != NULL);
bool $tmp2034 = $tmp2033.value;
if ($tmp2034) goto block237; else goto block238;
block238:;
frost$core$Int64 $tmp2035 = (frost$core$Int64) {550};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2036, $tmp2035, &$s2037);
abort(); // unreachable
block237:;
frost$core$String* $tmp2038 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2039, ((frost$core$Object*) $tmp2032));
frost$core$String* $tmp2040 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2038, &$s2041);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2040));
// unreffing REF($3623:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2038));
// unreffing REF($3622:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp2042 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2042));
// unreffing value
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2040;
block236:;
// line 552
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2043));
org$frostlang$frostc$ASTNode* $tmp2044 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2044));
// unreffing value
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
return &$s2045;
block234:;
frost$core$Int64 $tmp2046 = (frost$core$Int64) {40};
frost$core$Bit $tmp2047 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2046);
bool $tmp2048 = $tmp2047.value;
if ($tmp2048) goto block239; else goto block240;
block239:;
// line 555
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2049));
return &$s2050;
block240:;
frost$core$Int64 $tmp2051 = (frost$core$Int64) {41};
frost$core$Bit $tmp2052 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2051);
bool $tmp2053 = $tmp2052.value;
if ($tmp2053) goto block241; else goto block242;
block241:;
org$frostlang$frostc$Position* $tmp2054 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2055 = *$tmp2054;
frost$core$String** $tmp2056 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2057 = *$tmp2056;
*(&local111) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
frost$core$String* $tmp2058 = *(&local111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2058));
*(&local111) = $tmp2057;
// line 558
frost$core$String* $tmp2059 = *(&local111);
frost$core$String* $tmp2060 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp2059, &$s2061);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
// unreffing REF($3672:frost.core.String)
frost$core$String* $tmp2062 = *(&local111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
// unreffing str
*(&local111) = ((frost$core$String*) NULL);
return $tmp2060;
block242:;
frost$core$Int64 $tmp2063 = (frost$core$Int64) {42};
frost$core$Bit $tmp2064 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2063);
bool $tmp2065 = $tmp2064.value;
if ($tmp2065) goto block243; else goto block244;
block243:;
// line 561
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2066));
return &$s2067;
block244:;
frost$core$Int64 $tmp2068 = (frost$core$Int64) {44};
frost$core$Bit $tmp2069 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2068);
bool $tmp2070 = $tmp2069.value;
if ($tmp2070) goto block245; else goto block246;
block245:;
org$frostlang$frostc$Position* $tmp2071 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2072 = *$tmp2071;
org$frostlang$frostc$FixedArray** $tmp2073 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2074 = *$tmp2073;
*(&local112) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2074));
org$frostlang$frostc$FixedArray* $tmp2075 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
*(&local112) = $tmp2074;
// line 564
org$frostlang$frostc$FixedArray* $tmp2076 = *(&local112);
ITable* $tmp2077 = ((frost$collections$CollectionView*) $tmp2076)->$class->itable;
while ($tmp2077->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2077 = $tmp2077->next;
}
$fn2079 $tmp2078 = $tmp2077->methods[1];
frost$core$String* $tmp2080 = $tmp2078(((frost$collections$CollectionView*) $tmp2076));
frost$core$String* $tmp2081 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2082, $tmp2080);
frost$core$String* $tmp2083 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2081, &$s2084);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
// unreffing REF($3713:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
// unreffing REF($3712:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2080));
// unreffing REF($3711:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp2085 = *(&local112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2085));
// unreffing arguments
*(&local112) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2083;
block246:;
frost$core$Int64 $tmp2086 = (frost$core$Int64) {45};
frost$core$Bit $tmp2087 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2086);
bool $tmp2088 = $tmp2087.value;
if ($tmp2088) goto block247; else goto block248;
block247:;
org$frostlang$frostc$Position* $tmp2089 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2090 = *$tmp2089;
org$frostlang$frostc$FixedArray** $tmp2091 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2092 = *$tmp2091;
*(&local113) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
org$frostlang$frostc$FixedArray* $tmp2093 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2093));
*(&local113) = $tmp2092;
// line 567
org$frostlang$frostc$FixedArray* $tmp2094 = *(&local113);
ITable* $tmp2095 = ((frost$collections$CollectionView*) $tmp2094)->$class->itable;
while ($tmp2095->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2095 = $tmp2095->next;
}
$fn2097 $tmp2096 = $tmp2095->methods[1];
frost$core$String* $tmp2098 = $tmp2096(((frost$collections$CollectionView*) $tmp2094));
frost$core$String* $tmp2099 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2100, $tmp2098);
frost$core$String* $tmp2101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2099, &$s2102);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2101));
// unreffing REF($3752:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
// unreffing REF($3751:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
// unreffing REF($3750:frost.core.String)
org$frostlang$frostc$FixedArray* $tmp2103 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2103));
// unreffing parameters
*(&local113) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2101;
block248:;
frost$core$Int64 $tmp2104 = (frost$core$Int64) {43};
frost$core$Bit $tmp2105 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2104);
bool $tmp2106 = $tmp2105.value;
if ($tmp2106) goto block249; else goto block250;
block249:;
org$frostlang$frostc$Position* $tmp2107 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2108 = *$tmp2107;
org$frostlang$frostc$FixedArray** $tmp2109 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2110 = *$tmp2109;
*(&local114) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
org$frostlang$frostc$FixedArray* $tmp2111 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
*(&local114) = $tmp2110;
org$frostlang$frostc$ASTNode** $tmp2112 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2113 = *$tmp2112;
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
org$frostlang$frostc$ASTNode* $tmp2114 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
*(&local115) = $tmp2113;
org$frostlang$frostc$FixedArray** $tmp2115 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2116 = *$tmp2115;
*(&local116) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2116));
org$frostlang$frostc$FixedArray* $tmp2117 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
*(&local116) = $tmp2116;
// line 570
frost$core$MutableString* $tmp2118 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2118, &$s2119);
*(&local117) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
frost$core$MutableString* $tmp2120 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
*(&local117) = $tmp2118;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
// unreffing REF($3804:frost.core.MutableString)
// line 571
org$frostlang$frostc$FixedArray* $tmp2121 = *(&local114);
frost$core$MutableString* $tmp2122 = *(&local117);
frost$core$MutableMethod* $tmp2124 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp2124, ((frost$core$Int8*) frost$core$MutableString$append$frost$core$Object), ((frost$core$Object*) $tmp2122));
ITable* $tmp2125 = ((frost$collections$CollectionView*) $tmp2121)->$class->itable;
while ($tmp2125->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2125 = $tmp2125->next;
}
$fn2127 $tmp2126 = $tmp2125->methods[7];
$tmp2126(((frost$collections$CollectionView*) $tmp2121), $tmp2124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
// unreffing REF($3821:frost.core.MutableMethod)
// line 572
org$frostlang$frostc$ASTNode* $tmp2128 = *(&local115);
frost$core$Bit $tmp2129 = frost$core$Bit$init$builtin_bit($tmp2128 != NULL);
bool $tmp2130 = $tmp2129.value;
if ($tmp2130) goto block251; else goto block253;
block251:;
// line 573
frost$core$MutableString* $tmp2131 = *(&local117);
org$frostlang$frostc$ASTNode* $tmp2132 = *(&local115);
frost$core$Bit $tmp2133 = frost$core$Bit$init$builtin_bit($tmp2132 != NULL);
bool $tmp2134 = $tmp2133.value;
if ($tmp2134) goto block254; else goto block255;
block255:;
frost$core$Int64 $tmp2135 = (frost$core$Int64) {573};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2136, $tmp2135, &$s2137);
abort(); // unreachable
block254:;
frost$core$String* $tmp2138 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2139, ((frost$core$Object*) $tmp2132));
frost$core$String* $tmp2140 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2138, &$s2141);
frost$core$MutableString$append$frost$core$String($tmp2131, $tmp2140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2140));
// unreffing REF($3850:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
// unreffing REF($3849:frost.core.String)
goto block252;
block253:;
// line 1
// line 576
frost$core$MutableString* $tmp2142 = *(&local117);
frost$core$MutableString$append$frost$core$String($tmp2142, &$s2143);
goto block252;
block252:;
// line 578
org$frostlang$frostc$FixedArray* $tmp2144 = *(&local116);
frost$core$MutableString* $tmp2145 = *(&local117);
frost$core$MutableMethod* $tmp2147 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp2147, ((frost$core$Int8*) frost$core$MutableString$append$frost$core$Object), ((frost$core$Object*) $tmp2145));
ITable* $tmp2148 = ((frost$collections$CollectionView*) $tmp2144)->$class->itable;
while ($tmp2148->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2148 = $tmp2148->next;
}
$fn2150 $tmp2149 = $tmp2148->methods[7];
$tmp2149(((frost$collections$CollectionView*) $tmp2144), $tmp2147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
// unreffing REF($3869:frost.core.MutableMethod)
// line 579
frost$core$MutableString* $tmp2151 = *(&local117);
frost$core$MutableString$append$frost$core$String($tmp2151, &$s2152);
// line 580
frost$core$MutableString* $tmp2153 = *(&local117);
frost$core$String* $tmp2154 = frost$core$MutableString$finish$R$frost$core$String($tmp2153);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
// unreffing REF($3885:frost.core.String)
frost$core$MutableString* $tmp2155 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
// unreffing result
*(&local117) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2156 = *(&local116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
// unreffing failBlock
*(&local116) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2157 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
// unreffing error
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2158 = *(&local114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
// unreffing block
*(&local114) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2154;
block250:;
frost$core$Int64 $tmp2159 = (frost$core$Int64) {46};
frost$core$Bit $tmp2160 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2159);
bool $tmp2161 = $tmp2160.value;
if ($tmp2161) goto block256; else goto block257;
block256:;
org$frostlang$frostc$Position* $tmp2162 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2163 = *$tmp2162;
frost$core$String** $tmp2164 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2165 = *$tmp2164;
*(&local118) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2165));
frost$core$String* $tmp2166 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2166));
*(&local118) = $tmp2165;
// line 583
frost$core$String* $tmp2167 = *(&local118);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2167));
frost$core$String* $tmp2168 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
// unreffing name
*(&local118) = ((frost$core$String*) NULL);
return $tmp2167;
block257:;
frost$core$Int64 $tmp2169 = (frost$core$Int64) {48};
frost$core$Bit $tmp2170 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2169);
bool $tmp2171 = $tmp2170.value;
if ($tmp2171) goto block258; else goto block259;
block258:;
org$frostlang$frostc$Position* $tmp2172 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2173 = *$tmp2172;
frost$core$String** $tmp2174 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2175 = *$tmp2174;
*(&local119) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2175));
frost$core$String* $tmp2176 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2176));
*(&local119) = $tmp2175;
org$frostlang$frostc$ASTNode** $tmp2177 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2178 = *$tmp2177;
*(&local120) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2178));
org$frostlang$frostc$ASTNode* $tmp2179 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2179));
*(&local120) = $tmp2178;
// line 586
org$frostlang$frostc$ASTNode* $tmp2180 = *(&local120);
frost$core$Bit $tmp2181 = frost$core$Bit$init$builtin_bit($tmp2180 != NULL);
bool $tmp2182 = $tmp2181.value;
if ($tmp2182) goto block260; else goto block261;
block260:;
// line 587
frost$core$String* $tmp2183 = *(&local119);
frost$core$String* $tmp2184 = frost$core$String$get_asString$R$frost$core$String($tmp2183);
frost$core$String* $tmp2185 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2184, &$s2186);
org$frostlang$frostc$ASTNode* $tmp2187 = *(&local120);
frost$core$Bit $tmp2188 = frost$core$Bit$init$builtin_bit($tmp2187 != NULL);
bool $tmp2189 = $tmp2188.value;
if ($tmp2189) goto block262; else goto block263;
block263:;
frost$core$Int64 $tmp2190 = (frost$core$Int64) {587};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2191, $tmp2190, &$s2192);
abort(); // unreachable
block262:;
frost$core$String* $tmp2193 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2185, ((frost$core$Object*) $tmp2187));
frost$core$String* $tmp2194 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2193, &$s2195);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
// unreffing REF($3981:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2193));
// unreffing REF($3980:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
// unreffing REF($3970:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
// unreffing REF($3969:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp2196 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
// unreffing type
*(&local120) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2197 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
// unreffing name
*(&local119) = ((frost$core$String*) NULL);
return $tmp2194;
block261:;
// line 589
frost$core$String* $tmp2198 = *(&local119);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2198));
org$frostlang$frostc$ASTNode* $tmp2199 = *(&local120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2199));
// unreffing type
*(&local120) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2200 = *(&local119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
// unreffing name
*(&local119) = ((frost$core$String*) NULL);
return $tmp2198;
block259:;
frost$core$Int64 $tmp2201 = (frost$core$Int64) {47};
frost$core$Bit $tmp2202 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2201);
bool $tmp2203 = $tmp2202.value;
if ($tmp2203) goto block264; else goto block265;
block264:;
org$frostlang$frostc$Position* $tmp2204 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2205 = *$tmp2204;
org$frostlang$frostc$FixedArray** $tmp2206 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2207 = *$tmp2206;
*(&local121) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2207));
org$frostlang$frostc$FixedArray* $tmp2208 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
*(&local121) = $tmp2207;
org$frostlang$frostc$ASTNode** $tmp2209 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2210 = *$tmp2209;
*(&local122) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2210));
org$frostlang$frostc$ASTNode* $tmp2211 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2211));
*(&local122) = $tmp2210;
// line 592
org$frostlang$frostc$FixedArray* $tmp2212 = *(&local121);
ITable* $tmp2213 = ((frost$collections$CollectionView*) $tmp2212)->$class->itable;
while ($tmp2213->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2213 = $tmp2213->next;
}
$fn2215 $tmp2214 = $tmp2213->methods[1];
frost$core$String* $tmp2216 = $tmp2214(((frost$collections$CollectionView*) $tmp2212));
frost$core$String* $tmp2217 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2218, $tmp2216);
frost$core$String* $tmp2219 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2217, &$s2220);
org$frostlang$frostc$ASTNode* $tmp2221 = *(&local122);
frost$core$String* $tmp2222 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2219, ((frost$core$Object*) $tmp2221));
frost$core$String* $tmp2223 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2222, &$s2224);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2223));
// unreffing REF($4056:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
// unreffing REF($4055:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2219));
// unreffing REF($4052:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
// unreffing REF($4051:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
// unreffing REF($4050:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp2225 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2225));
// unreffing body
*(&local122) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2226 = *(&local121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
// unreffing parameters
*(&local121) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2223;
block265:;
frost$core$Int64 $tmp2227 = (frost$core$Int64) {49};
frost$core$Bit $tmp2228 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2227);
bool $tmp2229 = $tmp2228.value;
if ($tmp2229) goto block266; else goto block267;
block266:;
org$frostlang$frostc$Position* $tmp2230 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2231 = *$tmp2230;
org$frostlang$frostc$FixedArray** $tmp2232 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2233 = *$tmp2232;
*(&local123) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2233));
org$frostlang$frostc$FixedArray* $tmp2234 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2234));
*(&local123) = $tmp2233;
org$frostlang$frostc$ASTNode** $tmp2235 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2236 = *$tmp2235;
*(&local124) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2236));
org$frostlang$frostc$ASTNode* $tmp2237 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2237));
*(&local124) = $tmp2236;
// line 595
org$frostlang$frostc$FixedArray* $tmp2238 = *(&local123);
ITable* $tmp2239 = ((frost$collections$CollectionView*) $tmp2238)->$class->itable;
while ($tmp2239->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2239 = $tmp2239->next;
}
$fn2241 $tmp2240 = $tmp2239->methods[1];
frost$core$String* $tmp2242 = $tmp2240(((frost$collections$CollectionView*) $tmp2238));
frost$core$String* $tmp2243 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2244, $tmp2242);
frost$core$String* $tmp2245 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2243, &$s2246);
org$frostlang$frostc$ASTNode* $tmp2247 = *(&local124);
frost$core$String* $tmp2248 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2245, ((frost$core$Object*) $tmp2247));
frost$core$String* $tmp2249 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2248, &$s2250);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2249));
// unreffing REF($4119:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
// unreffing REF($4118:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2245));
// unreffing REF($4115:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2243));
// unreffing REF($4114:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2242));
// unreffing REF($4113:frost.core.String)
org$frostlang$frostc$ASTNode* $tmp2251 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2251));
// unreffing body
*(&local124) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2252 = *(&local123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
// unreffing parameters
*(&local123) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2249;
block267:;
frost$core$Int64 $tmp2253 = (frost$core$Int64) {50};
frost$core$Bit $tmp2254 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2253);
bool $tmp2255 = $tmp2254.value;
if ($tmp2255) goto block268; else goto block269;
block268:;
org$frostlang$frostc$Position* $tmp2256 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2257 = *$tmp2256;
frost$core$String** $tmp2258 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2259 = *$tmp2258;
*(&local125) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2259));
frost$core$String* $tmp2260 = *(&local125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
*(&local125) = $tmp2259;
// line 598
frost$core$String* $tmp2261 = *(&local125);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2261));
frost$core$String* $tmp2262 = *(&local125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2262));
// unreffing name
*(&local125) = ((frost$core$String*) NULL);
return $tmp2261;
block269:;
frost$core$Int64 $tmp2263 = (frost$core$Int64) {51};
frost$core$Bit $tmp2264 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2263);
bool $tmp2265 = $tmp2264.value;
if ($tmp2265) goto block270; else goto block271;
block270:;
org$frostlang$frostc$Position* $tmp2266 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2267 = *$tmp2266;
org$frostlang$frostc$Variable$Kind* $tmp2268 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp2269 = *$tmp2268;
*(&local126) = $tmp2269;
org$frostlang$frostc$FixedArray** $tmp2270 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2271 = *$tmp2270;
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
org$frostlang$frostc$FixedArray* $tmp2272 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
*(&local127) = $tmp2271;
// line 601
frost$core$MutableString* $tmp2273 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2273);
*(&local128) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
frost$core$MutableString* $tmp2274 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2274));
*(&local128) = $tmp2273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
// unreffing REF($4192:frost.core.MutableString)
// line 602
org$frostlang$frostc$Variable$Kind $tmp2275 = *(&local126);
frost$core$Int64 $tmp2276 = $tmp2275.$rawValue;
frost$core$Int64 $tmp2277 = (frost$core$Int64) {0};
frost$core$Bit $tmp2278 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2276, $tmp2277);
bool $tmp2279 = $tmp2278.value;
if ($tmp2279) goto block273; else goto block274;
block273:;
// line 603
frost$core$MutableString* $tmp2280 = *(&local128);
frost$core$MutableString$append$frost$core$String($tmp2280, &$s2281);
goto block272;
block274:;
frost$core$Int64 $tmp2282 = (frost$core$Int64) {1};
frost$core$Bit $tmp2283 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2276, $tmp2282);
bool $tmp2284 = $tmp2283.value;
if ($tmp2284) goto block275; else goto block276;
block275:;
// line 604
frost$core$MutableString* $tmp2285 = *(&local128);
frost$core$MutableString$append$frost$core$String($tmp2285, &$s2286);
goto block272;
block276:;
frost$core$Int64 $tmp2287 = (frost$core$Int64) {2};
frost$core$Bit $tmp2288 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2276, $tmp2287);
bool $tmp2289 = $tmp2288.value;
if ($tmp2289) goto block277; else goto block278;
block277:;
// line 605
frost$core$MutableString* $tmp2290 = *(&local128);
frost$core$MutableString$append$frost$core$String($tmp2290, &$s2291);
goto block272;
block278:;
frost$core$Int64 $tmp2292 = (frost$core$Int64) {3};
frost$core$Bit $tmp2293 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2276, $tmp2292);
bool $tmp2294 = $tmp2293.value;
if ($tmp2294) goto block279; else goto block272;
block279:;
// line 606
frost$core$MutableString* $tmp2295 = *(&local128);
frost$core$MutableString$append$frost$core$String($tmp2295, &$s2296);
goto block272;
block272:;
// line 608
frost$core$MutableString* $tmp2297 = *(&local128);
org$frostlang$frostc$FixedArray* $tmp2298 = *(&local127);
ITable* $tmp2299 = ((frost$collections$CollectionView*) $tmp2298)->$class->itable;
while ($tmp2299->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2299 = $tmp2299->next;
}
$fn2301 $tmp2300 = $tmp2299->methods[1];
frost$core$String* $tmp2302 = $tmp2300(((frost$collections$CollectionView*) $tmp2298));
frost$core$MutableString$append$frost$core$String($tmp2297, $tmp2302);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
// unreffing REF($4244:frost.core.String)
// line 609
frost$core$MutableString* $tmp2303 = *(&local128);
frost$core$String* $tmp2304 = frost$core$MutableString$finish$R$frost$core$String($tmp2303);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
// unreffing REF($4251:frost.core.String)
frost$core$MutableString* $tmp2305 = *(&local128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
// unreffing result
*(&local128) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2306 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2306));
// unreffing decls
*(&local127) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2304;
block271:;
frost$core$Int64 $tmp2307 = (frost$core$Int64) {52};
frost$core$Bit $tmp2308 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2307);
bool $tmp2309 = $tmp2308.value;
if ($tmp2309) goto block280; else goto block281;
block280:;
org$frostlang$frostc$Position* $tmp2310 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2311 = *$tmp2310;
org$frostlang$frostc$FixedArray** $tmp2312 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2313 = *$tmp2312;
*(&local129) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
org$frostlang$frostc$FixedArray* $tmp2314 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2314));
*(&local129) = $tmp2313;
org$frostlang$frostc$FixedArray** $tmp2315 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2316 = *$tmp2315;
*(&local130) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
org$frostlang$frostc$FixedArray* $tmp2317 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
*(&local130) = $tmp2316;
// line 612
frost$core$MutableString* $tmp2318 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2318, &$s2319);
*(&local131) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2318));
frost$core$MutableString* $tmp2320 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2320));
*(&local131) = $tmp2318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2318));
// unreffing REF($4293:frost.core.MutableString)
// line 613
*(&local132) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2321));
frost$core$String* $tmp2322 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
*(&local132) = &$s2323;
// line 614
org$frostlang$frostc$FixedArray* $tmp2324 = *(&local129);
ITable* $tmp2325 = ((frost$collections$Iterable*) $tmp2324)->$class->itable;
while ($tmp2325->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2325 = $tmp2325->next;
}
$fn2327 $tmp2326 = $tmp2325->methods[0];
frost$collections$Iterator* $tmp2328 = $tmp2326(((frost$collections$Iterable*) $tmp2324));
goto block282;
block282:;
ITable* $tmp2329 = $tmp2328->$class->itable;
while ($tmp2329->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2329 = $tmp2329->next;
}
$fn2331 $tmp2330 = $tmp2329->methods[0];
frost$core$Bit $tmp2332 = $tmp2330($tmp2328);
bool $tmp2333 = $tmp2332.value;
if ($tmp2333) goto block284; else goto block283;
block283:;
*(&local133) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2334 = $tmp2328->$class->itable;
while ($tmp2334->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2334 = $tmp2334->next;
}
$fn2336 $tmp2335 = $tmp2334->methods[1];
frost$core$Object* $tmp2337 = $tmp2335($tmp2328);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2337)));
org$frostlang$frostc$ASTNode* $tmp2338 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2338));
*(&local133) = ((org$frostlang$frostc$ASTNode*) $tmp2337);
// line 615
frost$core$MutableString* $tmp2339 = *(&local131);
frost$core$String* $tmp2340 = *(&local132);
frost$core$String* $tmp2341 = frost$core$String$get_asString$R$frost$core$String($tmp2340);
frost$core$String* $tmp2342 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2341, &$s2343);
org$frostlang$frostc$ASTNode* $tmp2344 = *(&local133);
frost$core$String* $tmp2345 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2342, ((frost$core$Object*) $tmp2344));
frost$core$String* $tmp2346 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2345, &$s2347);
frost$core$MutableString$append$frost$core$String($tmp2339, $tmp2346);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2346));
// unreffing REF($4345:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2345));
// unreffing REF($4344:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
// unreffing REF($4341:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
// unreffing REF($4340:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2337);
// unreffing REF($4329:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2348 = *(&local133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2348));
// unreffing t
*(&local133) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block282;
block284:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2328));
// unreffing REF($4318:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 617
frost$core$MutableString* $tmp2349 = *(&local131);
frost$core$MutableString$append$frost$core$String($tmp2349, &$s2350);
// line 618
org$frostlang$frostc$FixedArray* $tmp2351 = *(&local130);
ITable* $tmp2352 = ((frost$collections$Iterable*) $tmp2351)->$class->itable;
while ($tmp2352->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2352 = $tmp2352->next;
}
$fn2354 $tmp2353 = $tmp2352->methods[0];
frost$collections$Iterator* $tmp2355 = $tmp2353(((frost$collections$Iterable*) $tmp2351));
goto block285;
block285:;
ITable* $tmp2356 = $tmp2355->$class->itable;
while ($tmp2356->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2356 = $tmp2356->next;
}
$fn2358 $tmp2357 = $tmp2356->methods[0];
frost$core$Bit $tmp2359 = $tmp2357($tmp2355);
bool $tmp2360 = $tmp2359.value;
if ($tmp2360) goto block287; else goto block286;
block286:;
*(&local134) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2361 = $tmp2355->$class->itable;
while ($tmp2361->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2361 = $tmp2361->next;
}
$fn2363 $tmp2362 = $tmp2361->methods[1];
frost$core$Object* $tmp2364 = $tmp2362($tmp2355);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2364)));
org$frostlang$frostc$ASTNode* $tmp2365 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2365));
*(&local134) = ((org$frostlang$frostc$ASTNode*) $tmp2364);
// line 619
frost$core$MutableString* $tmp2366 = *(&local131);
org$frostlang$frostc$ASTNode* $tmp2367 = *(&local134);
frost$core$String* $tmp2368 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2369, ((frost$core$Object*) $tmp2367));
frost$core$MutableString$append$frost$core$String($tmp2366, $tmp2368);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2368));
// unreffing REF($4402:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2364);
// unreffing REF($4390:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2370 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2370));
// unreffing s
*(&local134) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block285;
block287:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2355));
// unreffing REF($4379:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 621
frost$core$MutableString* $tmp2371 = *(&local131);
frost$core$String* $tmp2372 = frost$core$MutableString$finish$R$frost$core$String($tmp2371);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
// unreffing REF($4421:frost.core.String)
frost$core$String* $tmp2373 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2373));
// unreffing separator
*(&local132) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2374 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2374));
// unreffing result
*(&local131) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2375 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2375));
// unreffing statements
*(&local130) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2376 = *(&local129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
// unreffing tests
*(&local129) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2372;
block281:;
frost$core$Int64 $tmp2377 = (frost$core$Int64) {53};
frost$core$Bit $tmp2378 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp550, $tmp2377);
bool $tmp2379 = $tmp2378.value;
if ($tmp2379) goto block288; else goto block289;
block288:;
org$frostlang$frostc$Position* $tmp2380 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2381 = *$tmp2380;
frost$core$String** $tmp2382 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2383 = *$tmp2382;
*(&local135) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2383));
frost$core$String* $tmp2384 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
*(&local135) = $tmp2383;
org$frostlang$frostc$ASTNode** $tmp2385 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2386 = *$tmp2385;
*(&local136) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
org$frostlang$frostc$ASTNode* $tmp2387 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2387));
*(&local136) = $tmp2386;
org$frostlang$frostc$FixedArray** $tmp2388 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2389 = *$tmp2388;
*(&local137) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2389));
org$frostlang$frostc$FixedArray* $tmp2390 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
*(&local137) = $tmp2389;
// line 624
frost$core$MutableString* $tmp2391 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2391);
*(&local138) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2391));
frost$core$MutableString* $tmp2392 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
*(&local138) = $tmp2391;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2391));
// unreffing REF($4482:frost.core.MutableString)
// line 625
frost$core$String* $tmp2393 = *(&local135);
frost$core$Bit $tmp2394 = frost$core$Bit$init$builtin_bit($tmp2393 != NULL);
bool $tmp2395 = $tmp2394.value;
if ($tmp2395) goto block290; else goto block291;
block290:;
// line 626
frost$core$MutableString* $tmp2396 = *(&local138);
frost$core$String* $tmp2397 = *(&local135);
frost$core$Bit $tmp2398 = frost$core$Bit$init$builtin_bit($tmp2397 != NULL);
bool $tmp2399 = $tmp2398.value;
if ($tmp2399) goto block292; else goto block293;
block293:;
frost$core$Int64 $tmp2400 = (frost$core$Int64) {626};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2401, $tmp2400, &$s2402);
abort(); // unreachable
block292:;
frost$core$String* $tmp2403 = frost$core$String$get_asString$R$frost$core$String($tmp2397);
frost$core$String* $tmp2404 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2403, &$s2405);
frost$core$MutableString$append$frost$core$String($tmp2396, $tmp2404);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2404));
// unreffing REF($4512:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2403));
// unreffing REF($4511:frost.core.String)
goto block291;
block291:;
// line 628
frost$core$MutableString* $tmp2406 = *(&local138);
org$frostlang$frostc$ASTNode* $tmp2407 = *(&local136);
frost$core$String* $tmp2408 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2409, ((frost$core$Object*) $tmp2407));
frost$core$String* $tmp2410 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2408, &$s2411);
frost$core$MutableString$append$frost$core$String($tmp2406, $tmp2410);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
// unreffing REF($4526:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2408));
// unreffing REF($4525:frost.core.String)
// line 629
org$frostlang$frostc$FixedArray* $tmp2412 = *(&local137);
ITable* $tmp2413 = ((frost$collections$Iterable*) $tmp2412)->$class->itable;
while ($tmp2413->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2413 = $tmp2413->next;
}
$fn2415 $tmp2414 = $tmp2413->methods[0];
frost$collections$Iterator* $tmp2416 = $tmp2414(((frost$collections$Iterable*) $tmp2412));
goto block294;
block294:;
ITable* $tmp2417 = $tmp2416->$class->itable;
while ($tmp2417->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2417 = $tmp2417->next;
}
$fn2419 $tmp2418 = $tmp2417->methods[0];
frost$core$Bit $tmp2420 = $tmp2418($tmp2416);
bool $tmp2421 = $tmp2420.value;
if ($tmp2421) goto block296; else goto block295;
block295:;
*(&local139) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2422 = $tmp2416->$class->itable;
while ($tmp2422->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2422 = $tmp2422->next;
}
$fn2424 $tmp2423 = $tmp2422->methods[1];
frost$core$Object* $tmp2425 = $tmp2423($tmp2416);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2425)));
org$frostlang$frostc$ASTNode* $tmp2426 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2426));
*(&local139) = ((org$frostlang$frostc$ASTNode*) $tmp2425);
// line 630
frost$core$MutableString* $tmp2427 = *(&local138);
org$frostlang$frostc$ASTNode* $tmp2428 = *(&local139);
frost$core$String* $tmp2429 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp2428), &$s2430);
frost$core$MutableString$append$frost$core$String($tmp2427, $tmp2429);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2429));
// unreffing REF($4562:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2425);
// unreffing REF($4550:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2431 = *(&local139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2431));
// unreffing s
*(&local139) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block294;
block296:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2416));
// unreffing REF($4539:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 632
frost$core$MutableString* $tmp2432 = *(&local138);
frost$core$MutableString$append$frost$core$String($tmp2432, &$s2433);
// line 633
frost$core$MutableString* $tmp2434 = *(&local138);
frost$core$String* $tmp2435 = frost$core$MutableString$finish$R$frost$core$String($tmp2434);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
// unreffing REF($4584:frost.core.String)
frost$core$MutableString* $tmp2436 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2436));
// unreffing result
*(&local138) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$FixedArray* $tmp2437 = *(&local137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2437));
// unreffing statements
*(&local137) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2438 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
// unreffing test
*(&local136) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2439 = *(&local135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
// unreffing label
*(&local135) = ((frost$core$String*) NULL);
return $tmp2435;
block289:;
// line 636
frost$core$Bit $tmp2440 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2441 = $tmp2440.value;
if ($tmp2441) goto block297; else goto block298;
block298:;
frost$core$Int64 $tmp2442 = (frost$core$Int64) {636};
frost$core$Int64* $tmp2443 = &param0->$rawValue;
frost$core$Int64 $tmp2444 = *$tmp2443;
frost$core$Int64$wrapper* $tmp2445;
$tmp2445 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2445->value = $tmp2444;
frost$core$String* $tmp2446 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2447, ((frost$core$Object*) $tmp2445));
frost$core$String* $tmp2448 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2446, &$s2449);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2450, $tmp2442, $tmp2448);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
// unreffing REF($4620:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2446));
// unreffing REF($4619:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2445));
// unreffing REF($4618:frost.core.Object)
abort(); // unreachable
block297:;
goto block1;
block1:;
frost$core$Bit $tmp2451 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2452 = $tmp2451.value;
if ($tmp2452) goto block299; else goto block300;
block300:;
frost$core$Int64 $tmp2453 = (frost$core$Int64) {262};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2454, $tmp2453, &$s2455);
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
frost$core$Int64* $tmp2456 = &param0->$rawValue;
frost$core$Int64 $tmp2457 = *$tmp2456;
frost$core$Int64 $tmp2458 = (frost$core$Int64) {0};
frost$core$Bit $tmp2459 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2458);
bool $tmp2460 = $tmp2459.value;
if ($tmp2460) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp2461 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2462 = *$tmp2461;
*(&local0) = $tmp2462;
frost$core$String** $tmp2463 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2464 = *$tmp2463;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
frost$core$String* $tmp2465 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2465));
*(&local1) = $tmp2464;
frost$core$String** $tmp2466 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2467 = *$tmp2466;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2467));
frost$core$String* $tmp2468 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2468));
*(&local2) = $tmp2467;
org$frostlang$frostc$ASTNode** $tmp2469 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2470 = *$tmp2469;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2470));
org$frostlang$frostc$ASTNode* $tmp2471 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2471));
*(&local3) = $tmp2470;
// line 1
frost$core$String* $tmp2472 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2472));
// line 1
frost$core$String* $tmp2473 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
// line 1
org$frostlang$frostc$ASTNode* $tmp2474 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2474));
org$frostlang$frostc$ASTNode* $tmp2475 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2475));
// unreffing _f3
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2476 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2476));
// unreffing _f2
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2477 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2477));
// unreffing _f1
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp2478 = (frost$core$Int64) {1};
frost$core$Bit $tmp2479 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2478);
bool $tmp2480 = $tmp2479.value;
if ($tmp2480) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp2481 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2482 = *$tmp2481;
*(&local4) = $tmp2482;
org$frostlang$frostc$FixedArray** $tmp2483 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2484 = *$tmp2483;
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
org$frostlang$frostc$FixedArray* $tmp2485 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2485));
*(&local5) = $tmp2484;
// line 1
org$frostlang$frostc$FixedArray* $tmp2486 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2486));
org$frostlang$frostc$FixedArray* $tmp2487 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2487));
// unreffing _f1
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp2488 = (frost$core$Int64) {2};
frost$core$Bit $tmp2489 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2488);
bool $tmp2490 = $tmp2489.value;
if ($tmp2490) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp2491 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2492 = *$tmp2491;
*(&local6) = $tmp2492;
org$frostlang$frostc$ASTNode** $tmp2493 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2494 = *$tmp2493;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2494));
org$frostlang$frostc$ASTNode* $tmp2495 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
*(&local7) = $tmp2494;
org$frostlang$frostc$ASTNode** $tmp2496 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2497 = *$tmp2496;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
org$frostlang$frostc$ASTNode* $tmp2498 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
*(&local8) = $tmp2497;
// line 1
org$frostlang$frostc$ASTNode* $tmp2499 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
// line 1
org$frostlang$frostc$ASTNode* $tmp2500 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2500));
org$frostlang$frostc$ASTNode* $tmp2501 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2501));
// unreffing _f2
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2502 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2502));
// unreffing _f1
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp2503 = (frost$core$Int64) {3};
frost$core$Bit $tmp2504 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2503);
bool $tmp2505 = $tmp2504.value;
if ($tmp2505) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp2506 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2507 = *$tmp2506;
*(&local9) = $tmp2507;
org$frostlang$frostc$ASTNode** $tmp2508 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2509 = *$tmp2508;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
org$frostlang$frostc$ASTNode* $tmp2510 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2510));
*(&local10) = $tmp2509;
// line 1
org$frostlang$frostc$ASTNode* $tmp2511 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2511));
org$frostlang$frostc$ASTNode* $tmp2512 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
// unreffing _f1
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp2513 = (frost$core$Int64) {4};
frost$core$Bit $tmp2514 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2513);
bool $tmp2515 = $tmp2514.value;
if ($tmp2515) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp2516 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2517 = *$tmp2516;
*(&local11) = $tmp2517;
goto block1;
block11:;
frost$core$Int64 $tmp2518 = (frost$core$Int64) {5};
frost$core$Bit $tmp2519 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2518);
bool $tmp2520 = $tmp2519.value;
if ($tmp2520) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp2521 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2522 = *$tmp2521;
*(&local12) = $tmp2522;
org$frostlang$frostc$ASTNode** $tmp2523 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2524 = *$tmp2523;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
org$frostlang$frostc$ASTNode* $tmp2525 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2525));
*(&local13) = $tmp2524;
org$frostlang$frostc$parser$Token$Kind* $tmp2526 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp2527 = *$tmp2526;
*(&local14) = $tmp2527;
org$frostlang$frostc$ASTNode** $tmp2528 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2529 = *$tmp2528;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2529));
org$frostlang$frostc$ASTNode* $tmp2530 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
*(&local15) = $tmp2529;
// line 1
org$frostlang$frostc$ASTNode* $tmp2531 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
// line 1
org$frostlang$frostc$ASTNode* $tmp2532 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2532));
org$frostlang$frostc$ASTNode* $tmp2533 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
// unreffing _f3
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2534 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
// unreffing _f1
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp2535 = (frost$core$Int64) {6};
frost$core$Bit $tmp2536 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2535);
bool $tmp2537 = $tmp2536.value;
if ($tmp2537) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp2538 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2539 = *$tmp2538;
*(&local16) = $tmp2539;
frost$core$Bit* $tmp2540 = (frost$core$Bit*) (param0->$data + 16);
frost$core$Bit $tmp2541 = *$tmp2540;
*(&local17) = $tmp2541;
goto block1;
block15:;
frost$core$Int64 $tmp2542 = (frost$core$Int64) {7};
frost$core$Bit $tmp2543 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2542);
bool $tmp2544 = $tmp2543.value;
if ($tmp2544) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp2545 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2546 = *$tmp2545;
*(&local18) = $tmp2546;
org$frostlang$frostc$FixedArray** $tmp2547 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2548 = *$tmp2547;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2548));
org$frostlang$frostc$FixedArray* $tmp2549 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2549));
*(&local19) = $tmp2548;
// line 1
org$frostlang$frostc$FixedArray* $tmp2550 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2550));
org$frostlang$frostc$FixedArray* $tmp2551 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2551));
// unreffing _f1
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block17:;
frost$core$Int64 $tmp2552 = (frost$core$Int64) {8};
frost$core$Bit $tmp2553 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2552);
bool $tmp2554 = $tmp2553.value;
if ($tmp2554) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp2555 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2556 = *$tmp2555;
*(&local20) = $tmp2556;
frost$core$String** $tmp2557 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2558 = *$tmp2557;
*(&local21) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2558));
frost$core$String* $tmp2559 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2559));
*(&local21) = $tmp2558;
// line 1
frost$core$String* $tmp2560 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2560));
frost$core$String* $tmp2561 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
// unreffing _f1
*(&local21) = ((frost$core$String*) NULL);
goto block1;
block19:;
frost$core$Int64 $tmp2562 = (frost$core$Int64) {9};
frost$core$Bit $tmp2563 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2562);
bool $tmp2564 = $tmp2563.value;
if ($tmp2564) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp2565 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2566 = *$tmp2565;
*(&local22) = $tmp2566;
org$frostlang$frostc$ASTNode** $tmp2567 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2568 = *$tmp2567;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
org$frostlang$frostc$ASTNode* $tmp2569 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2569));
*(&local23) = $tmp2568;
org$frostlang$frostc$FixedArray** $tmp2570 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2571 = *$tmp2570;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2571));
org$frostlang$frostc$FixedArray* $tmp2572 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2572));
*(&local24) = $tmp2571;
// line 1
org$frostlang$frostc$ASTNode* $tmp2573 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2573));
// line 1
org$frostlang$frostc$FixedArray* $tmp2574 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2574));
org$frostlang$frostc$FixedArray* $tmp2575 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2575));
// unreffing _f2
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2576 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2576));
// unreffing _f1
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block21:;
frost$core$Int64 $tmp2577 = (frost$core$Int64) {10};
frost$core$Bit $tmp2578 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2577);
bool $tmp2579 = $tmp2578.value;
if ($tmp2579) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp2580 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2581 = *$tmp2580;
*(&local25) = $tmp2581;
org$frostlang$frostc$ASTNode** $tmp2582 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2583 = *$tmp2582;
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2583));
org$frostlang$frostc$ASTNode* $tmp2584 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2584));
*(&local26) = $tmp2583;
frost$core$String** $tmp2585 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2586 = *$tmp2585;
*(&local27) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2586));
frost$core$String* $tmp2587 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2587));
*(&local27) = $tmp2586;
org$frostlang$frostc$FixedArray** $tmp2588 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2589 = *$tmp2588;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2589));
org$frostlang$frostc$FixedArray* $tmp2590 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
*(&local28) = $tmp2589;
// line 1
org$frostlang$frostc$ASTNode* $tmp2591 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2591));
// line 1
frost$core$String* $tmp2592 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
// line 1
org$frostlang$frostc$FixedArray* $tmp2593 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2593));
org$frostlang$frostc$FixedArray* $tmp2594 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2594));
// unreffing _f3
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2595 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
// unreffing _f2
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2596 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
// unreffing _f1
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block23:;
frost$core$Int64 $tmp2597 = (frost$core$Int64) {11};
frost$core$Bit $tmp2598 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2597);
bool $tmp2599 = $tmp2598.value;
if ($tmp2599) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp2600 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2601 = *$tmp2600;
*(&local29) = $tmp2601;
org$frostlang$frostc$ASTNode** $tmp2602 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2603 = *$tmp2602;
*(&local30) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2603));
org$frostlang$frostc$ASTNode* $tmp2604 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2604));
*(&local30) = $tmp2603;
org$frostlang$frostc$ChoiceCase** $tmp2605 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp2606 = *$tmp2605;
*(&local31) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2606));
org$frostlang$frostc$ChoiceCase* $tmp2607 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2607));
*(&local31) = $tmp2606;
frost$core$Int64* $tmp2608 = (frost$core$Int64*) (param0->$data + 32);
frost$core$Int64 $tmp2609 = *$tmp2608;
*(&local32) = $tmp2609;
// line 1
org$frostlang$frostc$ASTNode* $tmp2610 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
// line 1
org$frostlang$frostc$ChoiceCase* $tmp2611 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2611));
org$frostlang$frostc$ChoiceCase* $tmp2612 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2612));
// unreffing _f2
*(&local31) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp2613 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2613));
// unreffing _f1
*(&local30) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block25:;
frost$core$Int64 $tmp2614 = (frost$core$Int64) {12};
frost$core$Bit $tmp2615 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2614);
bool $tmp2616 = $tmp2615.value;
if ($tmp2616) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp2617 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2618 = *$tmp2617;
*(&local33) = $tmp2618;
org$frostlang$frostc$ASTNode** $tmp2619 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2620 = *$tmp2619;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2620));
org$frostlang$frostc$ASTNode* $tmp2621 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2621));
*(&local34) = $tmp2620;
org$frostlang$frostc$FixedArray** $tmp2622 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2623 = *$tmp2622;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
org$frostlang$frostc$FixedArray* $tmp2624 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2624));
*(&local35) = $tmp2623;
org$frostlang$frostc$ClassDecl$Kind* $tmp2625 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp2626 = *$tmp2625;
*(&local36) = $tmp2626;
frost$core$String** $tmp2627 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp2628 = *$tmp2627;
*(&local37) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
frost$core$String* $tmp2629 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
*(&local37) = $tmp2628;
org$frostlang$frostc$FixedArray** $tmp2630 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2631 = *$tmp2630;
*(&local38) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2631));
org$frostlang$frostc$FixedArray* $tmp2632 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2632));
*(&local38) = $tmp2631;
org$frostlang$frostc$FixedArray** $tmp2633 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2634 = *$tmp2633;
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2634));
org$frostlang$frostc$FixedArray* $tmp2635 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2635));
*(&local39) = $tmp2634;
org$frostlang$frostc$FixedArray** $tmp2636 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2637 = *$tmp2636;
*(&local40) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2637));
org$frostlang$frostc$FixedArray* $tmp2638 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
*(&local40) = $tmp2637;
// line 1
org$frostlang$frostc$ASTNode* $tmp2639 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2639));
// line 1
org$frostlang$frostc$FixedArray* $tmp2640 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2640));
// line 1
frost$core$String* $tmp2641 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2641));
// line 1
org$frostlang$frostc$FixedArray* $tmp2642 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2642));
// line 1
org$frostlang$frostc$FixedArray* $tmp2643 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2643));
// line 1
org$frostlang$frostc$FixedArray* $tmp2644 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2644));
org$frostlang$frostc$FixedArray* $tmp2645 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2645));
// unreffing _f7
*(&local40) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2646 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
// unreffing _f6
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2647 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
// unreffing _f5
*(&local38) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2648 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2648));
// unreffing _f4
*(&local37) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2649 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2649));
// unreffing _f2
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2650 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
// unreffing _f1
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block27:;
frost$core$Int64 $tmp2651 = (frost$core$Int64) {13};
frost$core$Bit $tmp2652 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2651);
bool $tmp2653 = $tmp2652.value;
if ($tmp2653) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp2654 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2655 = *$tmp2654;
*(&local41) = $tmp2655;
frost$core$String** $tmp2656 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2657 = *$tmp2656;
*(&local42) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
frost$core$String* $tmp2658 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2658));
*(&local42) = $tmp2657;
// line 1
frost$core$String* $tmp2659 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
frost$core$String* $tmp2660 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
// unreffing _f1
*(&local42) = ((frost$core$String*) NULL);
goto block1;
block29:;
frost$core$Int64 $tmp2661 = (frost$core$Int64) {14};
frost$core$Bit $tmp2662 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2661);
bool $tmp2663 = $tmp2662.value;
if ($tmp2663) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp2664 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2665 = *$tmp2664;
*(&local43) = $tmp2665;
org$frostlang$frostc$ASTNode** $tmp2666 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2667 = *$tmp2666;
*(&local44) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2667));
org$frostlang$frostc$ASTNode* $tmp2668 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2668));
*(&local44) = $tmp2667;
org$frostlang$frostc$ASTNode** $tmp2669 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2670 = *$tmp2669;
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2670));
org$frostlang$frostc$ASTNode* $tmp2671 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
*(&local45) = $tmp2670;
// line 1
org$frostlang$frostc$ASTNode* $tmp2672 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2672));
// line 1
org$frostlang$frostc$ASTNode* $tmp2673 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2673));
org$frostlang$frostc$ASTNode* $tmp2674 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2674));
// unreffing _f2
*(&local45) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2675 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2675));
// unreffing _f1
*(&local44) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block31:;
frost$core$Int64 $tmp2676 = (frost$core$Int64) {15};
frost$core$Bit $tmp2677 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2676);
bool $tmp2678 = $tmp2677.value;
if ($tmp2678) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp2679 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2680 = *$tmp2679;
*(&local46) = $tmp2680;
frost$core$String** $tmp2681 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2682 = *$tmp2681;
*(&local47) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
frost$core$String* $tmp2683 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
*(&local47) = $tmp2682;
org$frostlang$frostc$FixedArray** $tmp2684 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2685 = *$tmp2684;
*(&local48) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2685));
org$frostlang$frostc$FixedArray* $tmp2686 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2686));
*(&local48) = $tmp2685;
org$frostlang$frostc$ASTNode** $tmp2687 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2688 = *$tmp2687;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
org$frostlang$frostc$ASTNode* $tmp2689 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2689));
*(&local49) = $tmp2688;
// line 1
frost$core$String* $tmp2690 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2690));
// line 1
org$frostlang$frostc$FixedArray* $tmp2691 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2691));
// line 1
org$frostlang$frostc$ASTNode* $tmp2692 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2692));
org$frostlang$frostc$ASTNode* $tmp2693 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2693));
// unreffing _f3
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2694 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
// unreffing _f2
*(&local48) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2695 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2695));
// unreffing _f1
*(&local47) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Int64 $tmp2696 = (frost$core$Int64) {16};
frost$core$Bit $tmp2697 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2696);
bool $tmp2698 = $tmp2697.value;
if ($tmp2698) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp2699 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2700 = *$tmp2699;
*(&local50) = $tmp2700;
org$frostlang$frostc$ASTNode** $tmp2701 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2702 = *$tmp2701;
*(&local51) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
org$frostlang$frostc$ASTNode* $tmp2703 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
*(&local51) = $tmp2702;
frost$core$String** $tmp2704 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2705 = *$tmp2704;
*(&local52) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
frost$core$String* $tmp2706 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2706));
*(&local52) = $tmp2705;
// line 1
org$frostlang$frostc$ASTNode* $tmp2707 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
// line 1
frost$core$String* $tmp2708 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2708));
frost$core$String* $tmp2709 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2709));
// unreffing _f2
*(&local52) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2710 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
// unreffing _f1
*(&local51) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block35:;
frost$core$Int64 $tmp2711 = (frost$core$Int64) {17};
frost$core$Bit $tmp2712 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2711);
bool $tmp2713 = $tmp2712.value;
if ($tmp2713) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp2714 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2715 = *$tmp2714;
*(&local53) = $tmp2715;
org$frostlang$frostc$ASTNode** $tmp2716 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2717 = *$tmp2716;
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
org$frostlang$frostc$ASTNode* $tmp2718 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
*(&local54) = $tmp2717;
frost$core$String** $tmp2719 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp2720 = *$tmp2719;
*(&local55) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
frost$core$String* $tmp2721 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
*(&local55) = $tmp2720;
org$frostlang$frostc$FixedArray** $tmp2722 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2723 = *$tmp2722;
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2723));
org$frostlang$frostc$FixedArray* $tmp2724 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
*(&local56) = $tmp2723;
// line 1
org$frostlang$frostc$ASTNode* $tmp2725 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
// line 1
frost$core$String* $tmp2726 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
// line 1
org$frostlang$frostc$FixedArray* $tmp2727 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
org$frostlang$frostc$FixedArray* $tmp2728 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2728));
// unreffing _f3
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2729 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
// unreffing _f2
*(&local55) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2730 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
// unreffing _f1
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block37:;
frost$core$Int64 $tmp2731 = (frost$core$Int64) {18};
frost$core$Bit $tmp2732 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2731);
bool $tmp2733 = $tmp2732.value;
if ($tmp2733) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp2734 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2735 = *$tmp2734;
*(&local57) = $tmp2735;
org$frostlang$frostc$ASTNode** $tmp2736 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2737 = *$tmp2736;
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
org$frostlang$frostc$ASTNode* $tmp2738 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
*(&local58) = $tmp2737;
org$frostlang$frostc$FixedArray** $tmp2739 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2740 = *$tmp2739;
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2740));
org$frostlang$frostc$FixedArray* $tmp2741 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2741));
*(&local59) = $tmp2740;
org$frostlang$frostc$ASTNode** $tmp2742 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2743 = *$tmp2742;
*(&local60) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2743));
org$frostlang$frostc$ASTNode* $tmp2744 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2744));
*(&local60) = $tmp2743;
// line 1
org$frostlang$frostc$ASTNode* $tmp2745 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
// line 1
org$frostlang$frostc$FixedArray* $tmp2746 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2746));
// line 1
org$frostlang$frostc$ASTNode* $tmp2747 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2747));
org$frostlang$frostc$ASTNode* $tmp2748 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2748));
// unreffing _f3
*(&local60) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2749 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2749));
// unreffing _f2
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2750 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2750));
// unreffing _f1
*(&local58) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block39:;
frost$core$Int64 $tmp2751 = (frost$core$Int64) {19};
frost$core$Bit $tmp2752 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2751);
bool $tmp2753 = $tmp2752.value;
if ($tmp2753) goto block40; else goto block41;
block40:;
org$frostlang$frostc$FixedArray** $tmp2754 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp2755 = *$tmp2754;
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2755));
org$frostlang$frostc$FixedArray* $tmp2756 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2756));
*(&local61) = $tmp2755;
// line 1
org$frostlang$frostc$FixedArray* $tmp2757 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
org$frostlang$frostc$FixedArray* $tmp2758 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
// unreffing _f0
*(&local61) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block41:;
frost$core$Int64 $tmp2759 = (frost$core$Int64) {20};
frost$core$Bit $tmp2760 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2759);
bool $tmp2761 = $tmp2760.value;
if ($tmp2761) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp2762 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2763 = *$tmp2762;
*(&local62) = $tmp2763;
frost$core$String** $tmp2764 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2765 = *$tmp2764;
*(&local63) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2765));
frost$core$String* $tmp2766 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2766));
*(&local63) = $tmp2765;
org$frostlang$frostc$ASTNode** $tmp2767 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2768 = *$tmp2767;
*(&local64) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2768));
org$frostlang$frostc$ASTNode* $tmp2769 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2769));
*(&local64) = $tmp2768;
org$frostlang$frostc$ASTNode** $tmp2770 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2771 = *$tmp2770;
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
org$frostlang$frostc$ASTNode* $tmp2772 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2772));
*(&local65) = $tmp2771;
org$frostlang$frostc$FixedArray** $tmp2773 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
org$frostlang$frostc$FixedArray* $tmp2774 = *$tmp2773;
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2774));
org$frostlang$frostc$FixedArray* $tmp2775 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2775));
*(&local66) = $tmp2774;
// line 1
frost$core$String* $tmp2776 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2776));
// line 1
org$frostlang$frostc$ASTNode* $tmp2777 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2777));
// line 1
org$frostlang$frostc$ASTNode* $tmp2778 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2778));
// line 1
org$frostlang$frostc$FixedArray* $tmp2779 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
org$frostlang$frostc$FixedArray* $tmp2780 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
// unreffing _f4
*(&local66) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2781 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
// unreffing _f3
*(&local65) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp2782 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
// unreffing _f2
*(&local64) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2783 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2783));
// unreffing _f1
*(&local63) = ((frost$core$String*) NULL);
goto block1;
block43:;
frost$core$Int64 $tmp2784 = (frost$core$Int64) {21};
frost$core$Bit $tmp2785 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2784);
bool $tmp2786 = $tmp2785.value;
if ($tmp2786) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp2787 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2788 = *$tmp2787;
*(&local67) = $tmp2788;
frost$core$String** $tmp2789 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2790 = *$tmp2789;
*(&local68) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
frost$core$String* $tmp2791 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
*(&local68) = $tmp2790;
org$frostlang$frostc$FixedArray** $tmp2792 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2793 = *$tmp2792;
*(&local69) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2793));
org$frostlang$frostc$FixedArray* $tmp2794 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2794));
*(&local69) = $tmp2793;
// line 1
frost$core$String* $tmp2795 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
// line 1
org$frostlang$frostc$FixedArray* $tmp2796 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
org$frostlang$frostc$FixedArray* $tmp2797 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
// unreffing _f2
*(&local69) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2798 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2798));
// unreffing _f1
*(&local68) = ((frost$core$String*) NULL);
goto block1;
block45:;
frost$core$Int64 $tmp2799 = (frost$core$Int64) {22};
frost$core$Bit $tmp2800 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2799);
bool $tmp2801 = $tmp2800.value;
if ($tmp2801) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp2802 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2803 = *$tmp2802;
*(&local70) = $tmp2803;
frost$core$String** $tmp2804 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2805 = *$tmp2804;
*(&local71) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
frost$core$String* $tmp2806 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
*(&local71) = $tmp2805;
// line 1
frost$core$String* $tmp2807 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2807));
frost$core$String* $tmp2808 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
// unreffing _f1
*(&local71) = ((frost$core$String*) NULL);
goto block1;
block47:;
frost$core$Int64 $tmp2809 = (frost$core$Int64) {23};
frost$core$Bit $tmp2810 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2809);
bool $tmp2811 = $tmp2810.value;
if ($tmp2811) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp2812 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2813 = *$tmp2812;
*(&local72) = $tmp2813;
frost$core$String** $tmp2814 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2815 = *$tmp2814;
*(&local73) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2815));
frost$core$String* $tmp2816 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2816));
*(&local73) = $tmp2815;
org$frostlang$frostc$FixedArray** $tmp2817 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2818 = *$tmp2817;
*(&local74) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2818));
org$frostlang$frostc$FixedArray* $tmp2819 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2819));
*(&local74) = $tmp2818;
// line 1
frost$core$String* $tmp2820 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2820));
// line 1
org$frostlang$frostc$FixedArray* $tmp2821 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
org$frostlang$frostc$FixedArray* $tmp2822 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
// unreffing _f2
*(&local74) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2823 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
// unreffing _f1
*(&local73) = ((frost$core$String*) NULL);
goto block1;
block49:;
frost$core$Int64 $tmp2824 = (frost$core$Int64) {24};
frost$core$Bit $tmp2825 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2824);
bool $tmp2826 = $tmp2825.value;
if ($tmp2826) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp2827 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2828 = *$tmp2827;
*(&local75) = $tmp2828;
org$frostlang$frostc$ASTNode** $tmp2829 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2830 = *$tmp2829;
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
org$frostlang$frostc$ASTNode* $tmp2831 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2831));
*(&local76) = $tmp2830;
org$frostlang$frostc$FixedArray** $tmp2832 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2833 = *$tmp2832;
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
org$frostlang$frostc$FixedArray* $tmp2834 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
*(&local77) = $tmp2833;
org$frostlang$frostc$ASTNode** $tmp2835 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2836 = *$tmp2835;
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
org$frostlang$frostc$ASTNode* $tmp2837 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2837));
*(&local78) = $tmp2836;
// line 1
org$frostlang$frostc$ASTNode* $tmp2838 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2838));
// line 1
org$frostlang$frostc$FixedArray* $tmp2839 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2839));
// line 1
org$frostlang$frostc$ASTNode* $tmp2840 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2840));
org$frostlang$frostc$ASTNode* $tmp2841 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
// unreffing _f3
*(&local78) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2842 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
// unreffing _f2
*(&local77) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2843 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2843));
// unreffing _f1
*(&local76) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block51:;
frost$core$Int64 $tmp2844 = (frost$core$Int64) {25};
frost$core$Bit $tmp2845 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2844);
bool $tmp2846 = $tmp2845.value;
if ($tmp2846) goto block52; else goto block53;
block52:;
org$frostlang$frostc$Position* $tmp2847 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2848 = *$tmp2847;
*(&local79) = $tmp2848;
frost$core$UInt64* $tmp2849 = (frost$core$UInt64*) (param0->$data + 16);
frost$core$UInt64 $tmp2850 = *$tmp2849;
*(&local80) = $tmp2850;
goto block1;
block53:;
frost$core$Int64 $tmp2851 = (frost$core$Int64) {26};
frost$core$Bit $tmp2852 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2851);
bool $tmp2853 = $tmp2852.value;
if ($tmp2853) goto block54; else goto block55;
block54:;
org$frostlang$frostc$Position* $tmp2854 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2855 = *$tmp2854;
*(&local81) = $tmp2855;
org$frostlang$frostc$IR$Value** $tmp2856 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
org$frostlang$frostc$IR$Value* $tmp2857 = *$tmp2856;
*(&local82) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
org$frostlang$frostc$IR$Value* $tmp2858 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2858));
*(&local82) = $tmp2857;
// line 1
org$frostlang$frostc$IR$Value* $tmp2859 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
org$frostlang$frostc$IR$Value* $tmp2860 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2860));
// unreffing _f1
*(&local82) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block55:;
frost$core$Int64 $tmp2861 = (frost$core$Int64) {27};
frost$core$Bit $tmp2862 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2861);
bool $tmp2863 = $tmp2862.value;
if ($tmp2863) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp2864 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2865 = *$tmp2864;
*(&local83) = $tmp2865;
frost$core$String** $tmp2866 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2867 = *$tmp2866;
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
frost$core$String* $tmp2868 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2868));
*(&local84) = $tmp2867;
org$frostlang$frostc$FixedArray** $tmp2869 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2870 = *$tmp2869;
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2870));
org$frostlang$frostc$FixedArray* $tmp2871 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2871));
*(&local85) = $tmp2870;
// line 1
frost$core$String* $tmp2872 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2872));
// line 1
org$frostlang$frostc$FixedArray* $tmp2873 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2873));
org$frostlang$frostc$FixedArray* $tmp2874 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
// unreffing _f2
*(&local85) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2875 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
// unreffing _f1
*(&local84) = ((frost$core$String*) NULL);
goto block1;
block57:;
frost$core$Int64 $tmp2876 = (frost$core$Int64) {28};
frost$core$Bit $tmp2877 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2876);
bool $tmp2878 = $tmp2877.value;
if ($tmp2878) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp2879 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2880 = *$tmp2879;
*(&local86) = $tmp2880;
org$frostlang$frostc$ASTNode** $tmp2881 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2882 = *$tmp2881;
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
org$frostlang$frostc$ASTNode* $tmp2883 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2883));
*(&local87) = $tmp2882;
org$frostlang$frostc$FixedArray** $tmp2884 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2885 = *$tmp2884;
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2885));
org$frostlang$frostc$FixedArray* $tmp2886 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2886));
*(&local88) = $tmp2885;
org$frostlang$frostc$FixedArray** $tmp2887 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2888 = *$tmp2887;
*(&local89) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2888));
org$frostlang$frostc$FixedArray* $tmp2889 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
*(&local89) = $tmp2888;
// line 1
org$frostlang$frostc$ASTNode* $tmp2890 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2890));
// line 1
org$frostlang$frostc$FixedArray* $tmp2891 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
// line 1
org$frostlang$frostc$FixedArray* $tmp2892 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
org$frostlang$frostc$FixedArray* $tmp2893 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
// unreffing _f3
*(&local89) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2894 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
// unreffing _f2
*(&local88) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2895 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2895));
// unreffing _f1
*(&local87) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block59:;
frost$core$Int64 $tmp2896 = (frost$core$Int64) {29};
frost$core$Bit $tmp2897 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2896);
bool $tmp2898 = $tmp2897.value;
if ($tmp2898) goto block60; else goto block61;
block60:;
org$frostlang$frostc$Position* $tmp2899 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2900 = *$tmp2899;
*(&local90) = $tmp2900;
org$frostlang$frostc$ASTNode** $tmp2901 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2902 = *$tmp2901;
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
org$frostlang$frostc$ASTNode* $tmp2903 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2903));
*(&local91) = $tmp2902;
org$frostlang$frostc$FixedArray** $tmp2904 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2905 = *$tmp2904;
*(&local92) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2905));
org$frostlang$frostc$FixedArray* $tmp2906 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2906));
*(&local92) = $tmp2905;
org$frostlang$frostc$MethodDecl$Kind* $tmp2907 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp2908 = *$tmp2907;
*(&local93) = $tmp2908;
frost$core$String** $tmp2909 = (frost$core$String**) (param0->$data + 40);
frost$core$String* $tmp2910 = *$tmp2909;
*(&local94) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2910));
frost$core$String* $tmp2911 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
*(&local94) = $tmp2910;
org$frostlang$frostc$FixedArray** $tmp2912 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2913 = *$tmp2912;
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
org$frostlang$frostc$FixedArray* $tmp2914 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
*(&local95) = $tmp2913;
org$frostlang$frostc$FixedArray** $tmp2915 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2916 = *$tmp2915;
*(&local96) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
org$frostlang$frostc$FixedArray* $tmp2917 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2917));
*(&local96) = $tmp2916;
org$frostlang$frostc$ASTNode** $tmp2918 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
org$frostlang$frostc$ASTNode* $tmp2919 = *$tmp2918;
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2919));
org$frostlang$frostc$ASTNode* $tmp2920 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2920));
*(&local97) = $tmp2919;
org$frostlang$frostc$FixedArray** $tmp2921 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2922 = *$tmp2921;
*(&local98) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
org$frostlang$frostc$FixedArray* $tmp2923 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2923));
*(&local98) = $tmp2922;
// line 1
org$frostlang$frostc$ASTNode* $tmp2924 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2924));
// line 1
org$frostlang$frostc$FixedArray* $tmp2925 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
// line 1
frost$core$String* $tmp2926 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2926));
// line 1
org$frostlang$frostc$FixedArray* $tmp2927 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2927));
// line 1
org$frostlang$frostc$FixedArray* $tmp2928 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2928));
// line 1
org$frostlang$frostc$ASTNode* $tmp2929 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
// line 1
org$frostlang$frostc$FixedArray* $tmp2930 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2930));
org$frostlang$frostc$FixedArray* $tmp2931 = *(&local98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2931));
// unreffing _f8
*(&local98) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2932 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2932));
// unreffing _f7
*(&local97) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2933 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2933));
// unreffing _f6
*(&local96) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2934 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2934));
// unreffing _f5
*(&local95) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2935 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2935));
// unreffing _f4
*(&local94) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2936 = *(&local92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2936));
// unreffing _f2
*(&local92) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2937 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2937));
// unreffing _f1
*(&local91) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block61:;
frost$core$Int64 $tmp2938 = (frost$core$Int64) {30};
frost$core$Bit $tmp2939 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2938);
bool $tmp2940 = $tmp2939.value;
if ($tmp2940) goto block62; else goto block63;
block62:;
org$frostlang$frostc$Position* $tmp2941 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2942 = *$tmp2941;
*(&local99) = $tmp2942;
org$frostlang$frostc$parser$Token$Kind* $tmp2943 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp2944 = *$tmp2943;
*(&local100) = $tmp2944;
org$frostlang$frostc$FixedArray** $tmp2945 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2946 = *$tmp2945;
*(&local101) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2946));
org$frostlang$frostc$FixedArray* $tmp2947 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
*(&local101) = $tmp2946;
org$frostlang$frostc$ASTNode** $tmp2948 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2949 = *$tmp2948;
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
org$frostlang$frostc$ASTNode* $tmp2950 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2950));
*(&local102) = $tmp2949;
// line 1
org$frostlang$frostc$FixedArray* $tmp2951 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2951));
// line 1
org$frostlang$frostc$ASTNode* $tmp2952 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2952));
org$frostlang$frostc$ASTNode* $tmp2953 = *(&local102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2953));
// unreffing _f3
*(&local102) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2954 = *(&local101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
// unreffing _f2
*(&local101) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block63:;
frost$core$Int64 $tmp2955 = (frost$core$Int64) {31};
frost$core$Bit $tmp2956 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2955);
bool $tmp2957 = $tmp2956.value;
if ($tmp2957) goto block64; else goto block65;
block64:;
org$frostlang$frostc$Position* $tmp2958 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2959 = *$tmp2958;
*(&local103) = $tmp2959;
goto block1;
block65:;
frost$core$Int64 $tmp2960 = (frost$core$Int64) {32};
frost$core$Bit $tmp2961 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2960);
bool $tmp2962 = $tmp2961.value;
if ($tmp2962) goto block66; else goto block67;
block66:;
org$frostlang$frostc$Position* $tmp2963 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2964 = *$tmp2963;
*(&local104) = $tmp2964;
org$frostlang$frostc$ASTNode** $tmp2965 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2966 = *$tmp2965;
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2966));
org$frostlang$frostc$ASTNode* $tmp2967 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2967));
*(&local105) = $tmp2966;
// line 1
org$frostlang$frostc$ASTNode* $tmp2968 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
org$frostlang$frostc$ASTNode* $tmp2969 = *(&local105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
// unreffing _f1
*(&local105) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block67:;
frost$core$Int64 $tmp2970 = (frost$core$Int64) {33};
frost$core$Bit $tmp2971 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2970);
bool $tmp2972 = $tmp2971.value;
if ($tmp2972) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Position* $tmp2973 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2974 = *$tmp2973;
*(&local106) = $tmp2974;
frost$core$String** $tmp2975 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2976 = *$tmp2975;
*(&local107) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2976));
frost$core$String* $tmp2977 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
*(&local107) = $tmp2976;
// line 1
frost$core$String* $tmp2978 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2978));
frost$core$String* $tmp2979 = *(&local107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2979));
// unreffing _f1
*(&local107) = ((frost$core$String*) NULL);
goto block1;
block69:;
frost$core$Int64 $tmp2980 = (frost$core$Int64) {34};
frost$core$Bit $tmp2981 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2980);
bool $tmp2982 = $tmp2981.value;
if ($tmp2982) goto block70; else goto block71;
block70:;
org$frostlang$frostc$Position* $tmp2983 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2984 = *$tmp2983;
*(&local108) = $tmp2984;
frost$core$String** $tmp2985 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp2986 = *$tmp2985;
*(&local109) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2986));
frost$core$String* $tmp2987 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2987));
*(&local109) = $tmp2986;
org$frostlang$frostc$ASTNode** $tmp2988 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2989 = *$tmp2988;
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2989));
org$frostlang$frostc$ASTNode* $tmp2990 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2990));
*(&local110) = $tmp2989;
// line 1
frost$core$String* $tmp2991 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2991));
// line 1
org$frostlang$frostc$ASTNode* $tmp2992 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
org$frostlang$frostc$ASTNode* $tmp2993 = *(&local110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2993));
// unreffing _f2
*(&local110) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2994 = *(&local109);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2994));
// unreffing _f1
*(&local109) = ((frost$core$String*) NULL);
goto block1;
block71:;
frost$core$Int64 $tmp2995 = (frost$core$Int64) {35};
frost$core$Bit $tmp2996 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp2995);
bool $tmp2997 = $tmp2996.value;
if ($tmp2997) goto block72; else goto block73;
block72:;
org$frostlang$frostc$Position* $tmp2998 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp2999 = *$tmp2998;
*(&local111) = $tmp2999;
org$frostlang$frostc$parser$Token$Kind* $tmp3000 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp3001 = *$tmp3000;
*(&local112) = $tmp3001;
org$frostlang$frostc$ASTNode** $tmp3002 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3003 = *$tmp3002;
*(&local113) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3003));
org$frostlang$frostc$ASTNode* $tmp3004 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3004));
*(&local113) = $tmp3003;
// line 1
org$frostlang$frostc$ASTNode* $tmp3005 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3005));
org$frostlang$frostc$ASTNode* $tmp3006 = *(&local113);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3006));
// unreffing _f2
*(&local113) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block73:;
frost$core$Int64 $tmp3007 = (frost$core$Int64) {36};
frost$core$Bit $tmp3008 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp3007);
bool $tmp3009 = $tmp3008.value;
if ($tmp3009) goto block74; else goto block75;
block74:;
org$frostlang$frostc$Position* $tmp3010 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3011 = *$tmp3010;
*(&local114) = $tmp3011;
org$frostlang$frostc$ASTNode** $tmp3012 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3013 = *$tmp3012;
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
org$frostlang$frostc$ASTNode* $tmp3014 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3014));
*(&local115) = $tmp3013;
frost$core$Bit* $tmp3015 = (frost$core$Bit*) (param0->$data + 24);
frost$core$Bit $tmp3016 = *$tmp3015;
*(&local116) = $tmp3016;
org$frostlang$frostc$ASTNode** $tmp3017 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
org$frostlang$frostc$ASTNode* $tmp3018 = *$tmp3017;
*(&local117) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3018));
org$frostlang$frostc$ASTNode* $tmp3019 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3019));
*(&local117) = $tmp3018;
org$frostlang$frostc$ASTNode** $tmp3020 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
org$frostlang$frostc$ASTNode* $tmp3021 = *$tmp3020;
*(&local118) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3021));
org$frostlang$frostc$ASTNode* $tmp3022 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3022));
*(&local118) = $tmp3021;
// line 1
org$frostlang$frostc$ASTNode* $tmp3023 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3023));
// line 1
org$frostlang$frostc$ASTNode* $tmp3024 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3024));
// line 1
org$frostlang$frostc$ASTNode* $tmp3025 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
org$frostlang$frostc$ASTNode* $tmp3026 = *(&local118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3026));
// unreffing _f4
*(&local118) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3027 = *(&local117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3027));
// unreffing _f3
*(&local117) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp3028 = *(&local115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3028));
// unreffing _f1
*(&local115) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block75:;
frost$core$Int64 $tmp3029 = (frost$core$Int64) {37};
frost$core$Bit $tmp3030 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp3029);
bool $tmp3031 = $tmp3030.value;
if ($tmp3031) goto block76; else goto block77;
block76:;
org$frostlang$frostc$Position* $tmp3032 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3033 = *$tmp3032;
*(&local119) = $tmp3033;
frost$core$Real64* $tmp3034 = (frost$core$Real64*) (param0->$data + 16);
frost$core$Real64 $tmp3035 = *$tmp3034;
*(&local120) = $tmp3035;
goto block1;
block77:;
frost$core$Int64 $tmp3036 = (frost$core$Int64) {38};
frost$core$Bit $tmp3037 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp3036);
bool $tmp3038 = $tmp3037.value;
if ($tmp3038) goto block78; else goto block79;
block78:;
org$frostlang$frostc$Position* $tmp3039 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3040 = *$tmp3039;
*(&local121) = $tmp3040;
frost$core$String** $tmp3041 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3042 = *$tmp3041;
*(&local122) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3042));
frost$core$String* $tmp3043 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3043));
*(&local122) = $tmp3042;
// line 1
frost$core$String* $tmp3044 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3044));
frost$core$String* $tmp3045 = *(&local122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3045));
// unreffing _f1
*(&local122) = ((frost$core$String*) NULL);
goto block1;
block79:;
frost$core$Int64 $tmp3046 = (frost$core$Int64) {39};
frost$core$Bit $tmp3047 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp3046);
bool $tmp3048 = $tmp3047.value;
if ($tmp3048) goto block80; else goto block81;
block80:;
org$frostlang$frostc$Position* $tmp3049 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3050 = *$tmp3049;
*(&local123) = $tmp3050;
org$frostlang$frostc$ASTNode** $tmp3051 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3052 = *$tmp3051;
*(&local124) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3052));
org$frostlang$frostc$ASTNode* $tmp3053 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3053));
*(&local124) = $tmp3052;
// line 1
org$frostlang$frostc$ASTNode* $tmp3054 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3054));
org$frostlang$frostc$ASTNode* $tmp3055 = *(&local124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3055));
// unreffing _f1
*(&local124) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block81:;
frost$core$Int64 $tmp3056 = (frost$core$Int64) {40};
frost$core$Bit $tmp3057 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp3056);
bool $tmp3058 = $tmp3057.value;
if ($tmp3058) goto block82; else goto block83;
block82:;
org$frostlang$frostc$Position* $tmp3059 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3060 = *$tmp3059;
*(&local125) = $tmp3060;
goto block1;
block83:;
frost$core$Int64 $tmp3061 = (frost$core$Int64) {41};
frost$core$Bit $tmp3062 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp3061);
bool $tmp3063 = $tmp3062.value;
if ($tmp3063) goto block84; else goto block85;
block84:;
org$frostlang$frostc$Position* $tmp3064 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3065 = *$tmp3064;
*(&local126) = $tmp3065;
frost$core$String** $tmp3066 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3067 = *$tmp3066;
*(&local127) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3067));
frost$core$String* $tmp3068 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3068));
*(&local127) = $tmp3067;
// line 1
frost$core$String* $tmp3069 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3069));
frost$core$String* $tmp3070 = *(&local127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3070));
// unreffing _f1
*(&local127) = ((frost$core$String*) NULL);
goto block1;
block85:;
frost$core$Int64 $tmp3071 = (frost$core$Int64) {42};
frost$core$Bit $tmp3072 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp3071);
bool $tmp3073 = $tmp3072.value;
if ($tmp3073) goto block86; else goto block87;
block86:;
org$frostlang$frostc$Position* $tmp3074 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3075 = *$tmp3074;
*(&local128) = $tmp3075;
goto block1;
block87:;
frost$core$Int64 $tmp3076 = (frost$core$Int64) {43};
frost$core$Bit $tmp3077 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp3076);
bool $tmp3078 = $tmp3077.value;
if ($tmp3078) goto block88; else goto block89;
block88:;
org$frostlang$frostc$Position* $tmp3079 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3080 = *$tmp3079;
*(&local129) = $tmp3080;
org$frostlang$frostc$FixedArray** $tmp3081 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3082 = *$tmp3081;
*(&local130) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3082));
org$frostlang$frostc$FixedArray* $tmp3083 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3083));
*(&local130) = $tmp3082;
org$frostlang$frostc$ASTNode** $tmp3084 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3085 = *$tmp3084;
*(&local131) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3085));
org$frostlang$frostc$ASTNode* $tmp3086 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3086));
*(&local131) = $tmp3085;
org$frostlang$frostc$FixedArray** $tmp3087 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3088 = *$tmp3087;
*(&local132) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
org$frostlang$frostc$FixedArray* $tmp3089 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3089));
*(&local132) = $tmp3088;
// line 1
org$frostlang$frostc$FixedArray* $tmp3090 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
// line 1
org$frostlang$frostc$ASTNode* $tmp3091 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3091));
// line 1
org$frostlang$frostc$FixedArray* $tmp3092 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3092));
org$frostlang$frostc$FixedArray* $tmp3093 = *(&local132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3093));
// unreffing _f3
*(&local132) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3094 = *(&local131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3094));
// unreffing _f2
*(&local131) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3095 = *(&local130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3095));
// unreffing _f1
*(&local130) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block89:;
frost$core$Int64 $tmp3096 = (frost$core$Int64) {44};
frost$core$Bit $tmp3097 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp3096);
bool $tmp3098 = $tmp3097.value;
if ($tmp3098) goto block90; else goto block91;
block90:;
org$frostlang$frostc$Position* $tmp3099 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3100 = *$tmp3099;
*(&local133) = $tmp3100;
org$frostlang$frostc$FixedArray** $tmp3101 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3102 = *$tmp3101;
*(&local134) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3102));
org$frostlang$frostc$FixedArray* $tmp3103 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3103));
*(&local134) = $tmp3102;
// line 1
org$frostlang$frostc$FixedArray* $tmp3104 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3104));
org$frostlang$frostc$FixedArray* $tmp3105 = *(&local134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
// unreffing _f1
*(&local134) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block91:;
frost$core$Int64 $tmp3106 = (frost$core$Int64) {45};
frost$core$Bit $tmp3107 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp3106);
bool $tmp3108 = $tmp3107.value;
if ($tmp3108) goto block92; else goto block93;
block92:;
org$frostlang$frostc$Position* $tmp3109 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3110 = *$tmp3109;
*(&local135) = $tmp3110;
org$frostlang$frostc$FixedArray** $tmp3111 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3112 = *$tmp3111;
*(&local136) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3112));
org$frostlang$frostc$FixedArray* $tmp3113 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3113));
*(&local136) = $tmp3112;
// line 1
org$frostlang$frostc$FixedArray* $tmp3114 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3114));
org$frostlang$frostc$FixedArray* $tmp3115 = *(&local136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3115));
// unreffing _f1
*(&local136) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block93:;
frost$core$Int64 $tmp3116 = (frost$core$Int64) {46};
frost$core$Bit $tmp3117 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp3116);
bool $tmp3118 = $tmp3117.value;
if ($tmp3118) goto block94; else goto block95;
block94:;
org$frostlang$frostc$Position* $tmp3119 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3120 = *$tmp3119;
*(&local137) = $tmp3120;
frost$core$String** $tmp3121 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3122 = *$tmp3121;
*(&local138) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3122));
frost$core$String* $tmp3123 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3123));
*(&local138) = $tmp3122;
// line 1
frost$core$String* $tmp3124 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3124));
frost$core$String* $tmp3125 = *(&local138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
// unreffing _f1
*(&local138) = ((frost$core$String*) NULL);
goto block1;
block95:;
frost$core$Int64 $tmp3126 = (frost$core$Int64) {47};
frost$core$Bit $tmp3127 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp3126);
bool $tmp3128 = $tmp3127.value;
if ($tmp3128) goto block96; else goto block97;
block96:;
org$frostlang$frostc$Position* $tmp3129 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3130 = *$tmp3129;
*(&local139) = $tmp3130;
org$frostlang$frostc$FixedArray** $tmp3131 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3132 = *$tmp3131;
*(&local140) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3132));
org$frostlang$frostc$FixedArray* $tmp3133 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3133));
*(&local140) = $tmp3132;
org$frostlang$frostc$ASTNode** $tmp3134 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3135 = *$tmp3134;
*(&local141) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3135));
org$frostlang$frostc$ASTNode* $tmp3136 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3136));
*(&local141) = $tmp3135;
// line 1
org$frostlang$frostc$FixedArray* $tmp3137 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
// line 1
org$frostlang$frostc$ASTNode* $tmp3138 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3138));
org$frostlang$frostc$ASTNode* $tmp3139 = *(&local141);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3139));
// unreffing _f2
*(&local141) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3140 = *(&local140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3140));
// unreffing _f1
*(&local140) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block97:;
frost$core$Int64 $tmp3141 = (frost$core$Int64) {48};
frost$core$Bit $tmp3142 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp3141);
bool $tmp3143 = $tmp3142.value;
if ($tmp3143) goto block98; else goto block99;
block98:;
org$frostlang$frostc$Position* $tmp3144 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3145 = *$tmp3144;
*(&local142) = $tmp3145;
frost$core$String** $tmp3146 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3147 = *$tmp3146;
*(&local143) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3147));
frost$core$String* $tmp3148 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3148));
*(&local143) = $tmp3147;
org$frostlang$frostc$ASTNode** $tmp3149 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3150 = *$tmp3149;
*(&local144) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3150));
org$frostlang$frostc$ASTNode* $tmp3151 = *(&local144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3151));
*(&local144) = $tmp3150;
// line 1
frost$core$String* $tmp3152 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3152));
// line 1
org$frostlang$frostc$ASTNode* $tmp3153 = *(&local144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3153));
org$frostlang$frostc$ASTNode* $tmp3154 = *(&local144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3154));
// unreffing _f2
*(&local144) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3155 = *(&local143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3155));
// unreffing _f1
*(&local143) = ((frost$core$String*) NULL);
goto block1;
block99:;
frost$core$Int64 $tmp3156 = (frost$core$Int64) {49};
frost$core$Bit $tmp3157 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp3156);
bool $tmp3158 = $tmp3157.value;
if ($tmp3158) goto block100; else goto block101;
block100:;
org$frostlang$frostc$Position* $tmp3159 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3160 = *$tmp3159;
*(&local145) = $tmp3160;
org$frostlang$frostc$FixedArray** $tmp3161 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3162 = *$tmp3161;
*(&local146) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3162));
org$frostlang$frostc$FixedArray* $tmp3163 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3163));
*(&local146) = $tmp3162;
org$frostlang$frostc$ASTNode** $tmp3164 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3165 = *$tmp3164;
*(&local147) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3165));
org$frostlang$frostc$ASTNode* $tmp3166 = *(&local147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3166));
*(&local147) = $tmp3165;
// line 1
org$frostlang$frostc$FixedArray* $tmp3167 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3167));
// line 1
org$frostlang$frostc$ASTNode* $tmp3168 = *(&local147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3168));
org$frostlang$frostc$ASTNode* $tmp3169 = *(&local147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3169));
// unreffing _f2
*(&local147) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3170 = *(&local146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3170));
// unreffing _f1
*(&local146) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block101:;
frost$core$Int64 $tmp3171 = (frost$core$Int64) {50};
frost$core$Bit $tmp3172 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp3171);
bool $tmp3173 = $tmp3172.value;
if ($tmp3173) goto block102; else goto block103;
block102:;
org$frostlang$frostc$Position* $tmp3174 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3175 = *$tmp3174;
*(&local148) = $tmp3175;
frost$core$String** $tmp3176 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3177 = *$tmp3176;
*(&local149) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3177));
frost$core$String* $tmp3178 = *(&local149);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3178));
*(&local149) = $tmp3177;
// line 1
frost$core$String* $tmp3179 = *(&local149);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3179));
frost$core$String* $tmp3180 = *(&local149);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3180));
// unreffing _f1
*(&local149) = ((frost$core$String*) NULL);
goto block1;
block103:;
frost$core$Int64 $tmp3181 = (frost$core$Int64) {51};
frost$core$Bit $tmp3182 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp3181);
bool $tmp3183 = $tmp3182.value;
if ($tmp3183) goto block104; else goto block105;
block104:;
org$frostlang$frostc$Position* $tmp3184 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3185 = *$tmp3184;
*(&local150) = $tmp3185;
org$frostlang$frostc$Variable$Kind* $tmp3186 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp3187 = *$tmp3186;
*(&local151) = $tmp3187;
org$frostlang$frostc$FixedArray** $tmp3188 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3189 = *$tmp3188;
*(&local152) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
org$frostlang$frostc$FixedArray* $tmp3190 = *(&local152);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3190));
*(&local152) = $tmp3189;
// line 1
org$frostlang$frostc$FixedArray* $tmp3191 = *(&local152);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
org$frostlang$frostc$FixedArray* $tmp3192 = *(&local152);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
// unreffing _f2
*(&local152) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block105:;
frost$core$Int64 $tmp3193 = (frost$core$Int64) {52};
frost$core$Bit $tmp3194 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp3193);
bool $tmp3195 = $tmp3194.value;
if ($tmp3195) goto block106; else goto block107;
block106:;
org$frostlang$frostc$Position* $tmp3196 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3197 = *$tmp3196;
*(&local153) = $tmp3197;
org$frostlang$frostc$FixedArray** $tmp3198 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp3199 = *$tmp3198;
*(&local154) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3199));
org$frostlang$frostc$FixedArray* $tmp3200 = *(&local154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3200));
*(&local154) = $tmp3199;
org$frostlang$frostc$FixedArray** $tmp3201 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3202 = *$tmp3201;
*(&local155) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3202));
org$frostlang$frostc$FixedArray* $tmp3203 = *(&local155);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3203));
*(&local155) = $tmp3202;
// line 1
org$frostlang$frostc$FixedArray* $tmp3204 = *(&local154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3204));
// line 1
org$frostlang$frostc$FixedArray* $tmp3205 = *(&local155);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3205));
org$frostlang$frostc$FixedArray* $tmp3206 = *(&local155);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3206));
// unreffing _f2
*(&local155) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3207 = *(&local154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3207));
// unreffing _f1
*(&local154) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block107:;
frost$core$Int64 $tmp3208 = (frost$core$Int64) {53};
frost$core$Bit $tmp3209 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2457, $tmp3208);
bool $tmp3210 = $tmp3209.value;
if ($tmp3210) goto block108; else goto block1;
block108:;
org$frostlang$frostc$Position* $tmp3211 = (org$frostlang$frostc$Position*) (param0->$data + 0);
org$frostlang$frostc$Position $tmp3212 = *$tmp3211;
*(&local156) = $tmp3212;
frost$core$String** $tmp3213 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp3214 = *$tmp3213;
*(&local157) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
frost$core$String* $tmp3215 = *(&local157);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3215));
*(&local157) = $tmp3214;
org$frostlang$frostc$ASTNode** $tmp3216 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3217 = *$tmp3216;
*(&local158) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3217));
org$frostlang$frostc$ASTNode* $tmp3218 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3218));
*(&local158) = $tmp3217;
org$frostlang$frostc$FixedArray** $tmp3219 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3220 = *$tmp3219;
*(&local159) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3220));
org$frostlang$frostc$FixedArray* $tmp3221 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3221));
*(&local159) = $tmp3220;
// line 1
frost$core$String* $tmp3222 = *(&local157);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3222));
// line 1
org$frostlang$frostc$ASTNode* $tmp3223 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3223));
// line 1
org$frostlang$frostc$FixedArray* $tmp3224 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3224));
org$frostlang$frostc$FixedArray* $tmp3225 = *(&local159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3225));
// unreffing _f3
*(&local159) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3226 = *(&local158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3226));
// unreffing _f2
*(&local158) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3227 = *(&local157);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3227));
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
frost$core$Int64* $tmp3228 = &param0->$rawValue;
*$tmp3228 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3229 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3229 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3230 = (frost$core$String**) (param0->$data + 16);
*$tmp3230 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3231 = (frost$core$String**) (param0->$data + 24);
*$tmp3231 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3232 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3232 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3) {

// line 6
frost$core$Int64* $tmp3233 = &param0->$rawValue;
*$tmp3233 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3234 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3234 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3235 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3235 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ASTNode* param4) {

// line 6
frost$core$Int64* $tmp3236 = &param0->$rawValue;
*$tmp3236 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3237 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3237 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3238 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3238 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3239 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3239 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3) {

// line 6
frost$core$Int64* $tmp3240 = &param0->$rawValue;
*$tmp3240 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3241 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3241 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3242 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3242 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2) {

// line 6
frost$core$Int64* $tmp3243 = &param0->$rawValue;
*$tmp3243 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3244 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3244 = param2;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$parser$Token$Kind param4, org$frostlang$frostc$ASTNode* param5) {

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
org$frostlang$frostc$parser$Token$Kind* $tmp3248 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 24);
*$tmp3248 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3249 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3249 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Bit(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$Bit param3) {

// line 6
frost$core$Int64* $tmp3250 = &param0->$rawValue;
*$tmp3250 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3251 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3251 = param2;
// line 6
frost$core$Bit* $tmp3252 = (frost$core$Bit*) (param0->$data + 16);
*$tmp3252 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// line 6
frost$core$Int64* $tmp3253 = &param0->$rawValue;
*$tmp3253 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3254 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3254 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3255 = (frost$core$String**) (param0->$data + 16);
*$tmp3255 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp3256 = &param0->$rawValue;
*$tmp3256 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3257 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3257 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3258 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3258 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3259 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3259 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

// line 6
frost$core$Int64* $tmp3260 = &param0->$rawValue;
*$tmp3260 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3261 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3261 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3262 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3262 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3263 = (frost$core$String**) (param0->$data + 24);
*$tmp3263 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3264 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3264 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ChoiceCase$frost$core$Int64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ChoiceCase* param4, frost$core$Int64 param5) {

// line 6
frost$core$Int64* $tmp3265 = &param0->$rawValue;
*$tmp3265 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3266 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3266 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3267 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3267 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ChoiceCase** $tmp3268 = (org$frostlang$frostc$ChoiceCase**) (param0->$data + 24);
*$tmp3268 = param4;
// line 6
frost$core$Int64* $tmp3269 = (frost$core$Int64*) (param0->$data + 32);
*$tmp3269 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ClassDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$FixedArray* param9) {

// line 6
frost$core$Int64* $tmp3270 = &param0->$rawValue;
*$tmp3270 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3271 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3271 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3272 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3272 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3273 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3273 = param4;
// line 6
org$frostlang$frostc$ClassDecl$Kind* $tmp3274 = (org$frostlang$frostc$ClassDecl$Kind*) (param0->$data + 32);
*$tmp3274 = param5;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
frost$core$String** $tmp3275 = (frost$core$String**) (param0->$data + 40);
*$tmp3275 = param6;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$FixedArray** $tmp3276 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
*$tmp3276 = param7;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$FixedArray** $tmp3277 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
*$tmp3277 = param8;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$FixedArray** $tmp3278 = (org$frostlang$frostc$FixedArray**) (param0->$data + 64);
*$tmp3278 = param9;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 6
frost$core$Int64* $tmp3279 = &param0->$rawValue;
*$tmp3279 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3280 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3280 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3281 = (frost$core$String**) (param0->$data + 16);
*$tmp3281 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3282 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3282 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3283 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3283 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4) {

// line 6
frost$core$Int64* $tmp3284 = &param0->$rawValue;
*$tmp3284 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3285 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3285 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3286 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3286 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3287 = (frost$core$String**) (param0->$data + 24);
*$tmp3287 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

// line 6
frost$core$Int64* $tmp3288 = &param0->$rawValue;
*$tmp3288 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3289 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3289 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3290 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3290 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp3291 = (frost$core$String**) (param0->$data + 24);
*$tmp3291 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3292 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3292 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 6
frost$core$Int64* $tmp3293 = &param0->$rawValue;
*$tmp3293 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3294 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3294 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3295 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3295 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3296 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3296 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3297 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3297 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$FixedArray* param2) {

// line 6
frost$core$Int64* $tmp3298 = &param0->$rawValue;
*$tmp3298 = param1;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$FixedArray** $tmp3299 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
*$tmp3299 = param2;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$FixedArray* param6) {

// line 6
frost$core$Int64* $tmp3300 = &param0->$rawValue;
*$tmp3300 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3301 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3301 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3302 = (frost$core$String**) (param0->$data + 16);
*$tmp3302 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3303 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3303 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3304 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3304 = param5;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$FixedArray** $tmp3305 = (org$frostlang$frostc$FixedArray**) (param0->$data + 40);
*$tmp3305 = param6;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp3306 = &param0->$rawValue;
*$tmp3306 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3307 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3307 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3308 = (frost$core$String**) (param0->$data + 16);
*$tmp3308 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3309 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3309 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {

// line 6
frost$core$Int64* $tmp3310 = &param0->$rawValue;
*$tmp3310 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3311 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3311 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3312 = (frost$core$String**) (param0->$data + 16);
*$tmp3312 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 6
frost$core$Int64* $tmp3313 = &param0->$rawValue;
*$tmp3313 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3314 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3314 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3315 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3315 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3316 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3316 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3317 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3317 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$UInt64 param3) {

// line 6
frost$core$Int64* $tmp3318 = &param0->$rawValue;
*$tmp3318 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3319 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3319 = param2;
// line 6
frost$core$UInt64* $tmp3320 = (frost$core$UInt64*) (param0->$data + 16);
*$tmp3320 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3) {

// line 6
frost$core$Int64* $tmp3321 = &param0->$rawValue;
*$tmp3321 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3322 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3322 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp3323 = (org$frostlang$frostc$IR$Value**) (param0->$data + 16);
*$tmp3323 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp3324 = &param0->$rawValue;
*$tmp3324 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3325 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3325 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3326 = (frost$core$String**) (param0->$data + 16);
*$tmp3326 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3327 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3327 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$FixedArray* param5) {

// line 6
frost$core$Int64* $tmp3328 = &param0->$rawValue;
*$tmp3328 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3329 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3329 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3330 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3330 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3331 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3331 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3332 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3332 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$MethodDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$ASTNode* param9, org$frostlang$frostc$FixedArray* param10) {

// line 6
frost$core$Int64* $tmp3333 = &param0->$rawValue;
*$tmp3333 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3334 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3334 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3335 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3335 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3336 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3336 = param4;
// line 6
org$frostlang$frostc$MethodDecl$Kind* $tmp3337 = (org$frostlang$frostc$MethodDecl$Kind*) (param0->$data + 32);
*$tmp3337 = param5;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
frost$core$String** $tmp3338 = (frost$core$String**) (param0->$data + 40);
*$tmp3338 = param6;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$FixedArray** $tmp3339 = (org$frostlang$frostc$FixedArray**) (param0->$data + 48);
*$tmp3339 = param7;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
org$frostlang$frostc$FixedArray** $tmp3340 = (org$frostlang$frostc$FixedArray**) (param0->$data + 56);
*$tmp3340 = param8;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$ASTNode** $tmp3341 = (org$frostlang$frostc$ASTNode**) (param0->$data + 64);
*$tmp3341 = param9;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param10));
org$frostlang$frostc$FixedArray** $tmp3342 = (org$frostlang$frostc$FixedArray**) (param0->$data + 72);
*$tmp3342 = param10;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$parser$Token$Kind param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

// line 6
frost$core$Int64* $tmp3343 = &param0->$rawValue;
*$tmp3343 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3344 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3344 = param2;
// line 6
org$frostlang$frostc$parser$Token$Kind* $tmp3345 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
*$tmp3345 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3346 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3346 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3347 = (org$frostlang$frostc$ASTNode**) (param0->$data + 32);
*$tmp3347 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4) {

// line 6
frost$core$Int64* $tmp3348 = &param0->$rawValue;
*$tmp3348 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3349 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3349 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3350 = (frost$core$String**) (param0->$data + 16);
*$tmp3350 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3351 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3351 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$parser$Token$Kind param3, org$frostlang$frostc$ASTNode* param4) {

// line 6
frost$core$Int64* $tmp3352 = &param0->$rawValue;
*$tmp3352 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3353 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3353 = param2;
// line 6
org$frostlang$frostc$parser$Token$Kind* $tmp3354 = (org$frostlang$frostc$parser$Token$Kind*) (param0->$data + 16);
*$tmp3354 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3355 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3355 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$Bit$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$Bit param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$ASTNode* param6) {

// line 6
frost$core$Int64* $tmp3356 = &param0->$rawValue;
*$tmp3356 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3357 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3357 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3358 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3358 = param3;
// line 6
frost$core$Bit* $tmp3359 = (frost$core$Bit*) (param0->$data + 24);
*$tmp3359 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$ASTNode** $tmp3360 = (org$frostlang$frostc$ASTNode**) (param0->$data + 25);
*$tmp3360 = param5;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param6));
org$frostlang$frostc$ASTNode** $tmp3361 = (org$frostlang$frostc$ASTNode**) (param0->$data + 33);
*$tmp3361 = param6;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$Real64(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$Real64 param3) {

// line 6
frost$core$Int64* $tmp3362 = &param0->$rawValue;
*$tmp3362 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3363 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3363 = param2;
// line 6
frost$core$Real64* $tmp3364 = (frost$core$Real64*) (param0->$data + 16);
*$tmp3364 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3) {

// line 6
frost$core$Int64* $tmp3365 = &param0->$rawValue;
*$tmp3365 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3366 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3366 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp3367 = (org$frostlang$frostc$ASTNode**) (param0->$data + 16);
*$tmp3367 = param3;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$FixedArray* param5) {

// line 6
frost$core$Int64* $tmp3368 = &param0->$rawValue;
*$tmp3368 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3369 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3369 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3370 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3370 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3371 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3371 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3372 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3372 = param5;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4) {

// line 6
frost$core$Int64* $tmp3373 = &param0->$rawValue;
*$tmp3373 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3374 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3374 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3375 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3375 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3376 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3376 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4) {

// line 6
frost$core$Int64* $tmp3377 = &param0->$rawValue;
*$tmp3377 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3378 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3378 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3379 = (frost$core$String**) (param0->$data + 16);
*$tmp3379 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3380 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3380 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$Variable$Kind param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp3381 = &param0->$rawValue;
*$tmp3381 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3382 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3382 = param2;
// line 6
org$frostlang$frostc$Variable$Kind* $tmp3383 = (org$frostlang$frostc$Variable$Kind*) (param0->$data + 16);
*$tmp3383 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3384 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3384 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

// line 6
frost$core$Int64* $tmp3385 = &param0->$rawValue;
*$tmp3385 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3386 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3386 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp3387 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp3387 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp3388 = (org$frostlang$frostc$FixedArray**) (param0->$data + 24);
*$tmp3388 = param4;
return;

}
void org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$ASTNode* param0, frost$core$Int64 param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$ASTNode* param4, org$frostlang$frostc$FixedArray* param5) {

// line 6
frost$core$Int64* $tmp3389 = &param0->$rawValue;
*$tmp3389 = param1;
// line 6
org$frostlang$frostc$Position* $tmp3390 = (org$frostlang$frostc$Position*) (param0->$data + 0);
*$tmp3390 = param2;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp3391 = (frost$core$String**) (param0->$data + 16);
*$tmp3391 = param3;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp3392 = (org$frostlang$frostc$ASTNode**) (param0->$data + 24);
*$tmp3392 = param4;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$FixedArray** $tmp3393 = (org$frostlang$frostc$FixedArray**) (param0->$data + 32);
*$tmp3393 = param5;
return;

}






