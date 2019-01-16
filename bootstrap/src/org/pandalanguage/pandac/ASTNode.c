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

typedef panda$collections$Iterator* (*$fn694)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn698)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn703)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn755)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn762)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn810)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn836)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn893)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn897)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn902)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn941)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn959)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn970)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn974)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn979)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1039)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn1056)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1094)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1098)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1103)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1136)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn1162)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn1173)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1213)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1217)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1222)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1249)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1253)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1258)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1314)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1318)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1323)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1358)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1394)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1425)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1429)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1434)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1483)(org$pandalanguage$pandac$IR$Value*);
typedef panda$collections$Iterator* (*$fn1517)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1521)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1526)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1565)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1569)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1574)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1647)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1651)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1656)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1693)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1703)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1736)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1740)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1745)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1807)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2056)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2074)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2137)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2163)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2223)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2249)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2253)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2258)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2276)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2280)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2285)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2337)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2341)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2346)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 32, -9211815390615587804, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x6f\x73\x69\x74\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 111, 8956204005101181995, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 88, 7377117409628100408, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 88, 7377117409628100408, NULL };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 88, 7377117409628100408, NULL };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 140, 4568732349819355832, NULL };
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 88, 7377117409628100408, NULL };
static panda$core$String $s889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s916 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 140, 4568732349819355832, NULL };
static panda$core$String $s944 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 140, 4568732349819355832, NULL };
static panda$core$String $s962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s988 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s1014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s1016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s1018 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1022 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1047 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s1048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 88, 7377117409628100408, NULL };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s1085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s1088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s1207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 88, 7377117409628100408, NULL };
static panda$core$String $s1209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s1298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s1300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s1306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s1310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52\x5f\x47\x45\x4e\x45\x52\x49\x43\x53\x28", 20, -4089576957169252493, NULL };
static panda$core$String $s1390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x29", 2, 16504, NULL };
static panda$core$String $s1418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s1453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 88, 7377117409628100408, NULL };
static panda$core$String $s1455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s1508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s1511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s1591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 125, 9060177252160679126, NULL };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 88, 7377117409628100408, NULL };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s1689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s1690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 140, 4568732349819355832, NULL };
static panda$core$String $s1696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 88, 7377117409628100408, NULL };
static panda$core$String $s1720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x27", 168, 565827917388174030, NULL };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static panda$core$String $s1789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static panda$core$String $s1791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static panda$core$String $s1795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static panda$core$String $s1797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static panda$core$String $s1801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static panda$core$String $s1803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static panda$core$String $s1810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1829 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s1830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 88, 7377117409628100408, NULL };
static panda$core$String $s1833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x29", 2, 14282, NULL };
static panda$core$String $s1849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1911 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s1940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 88, 7377117409628100408, NULL };
static panda$core$String $s1944 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s1956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 88, 7377117409628100408, NULL };
static panda$core$String $s1965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 88, 7377117409628100408, NULL };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s2013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s2014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 88, 7377117409628100408, NULL };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s2022 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s2026 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static panda$core$String $s2043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2061 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s2113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s2114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 88, 7377117409628100408, NULL };
static panda$core$String $s2117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s2146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s2208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s2324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x41\x53\x54\x4e\x6f\x64\x65\x3a\x20", 21, -8877512154781713630, NULL };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s2376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 13, -8809212396488475561, NULL };
static panda$core$String $s2377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 94, -4884667081240384487, NULL };

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
org$pandalanguage$pandac$Position local51;
// line 90
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
// line 92
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
// line 95
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
// line 98
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
// line 101
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
// line 104
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
// line 107
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
// line 110
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
// line 113
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
// line 116
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
// line 119
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
// line 122
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
// line 125
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
// line 128
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
// line 131
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
// line 134
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
// line 137
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
// line 140
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
// line 143
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
// line 146
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
// line 149
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
// line 152
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
// line 155
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
// line 158
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
panda$core$String** $tmp245 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp246 = *$tmp245;
org$pandalanguage$pandac$FixedArray** $tmp247 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp248 = *$tmp247;
// line 161
org$pandalanguage$pandac$Position $tmp249 = *(&local22);
return $tmp249;
block49:;
panda$core$Int64 $tmp250 = (panda$core$Int64) {24};
panda$core$Bit $tmp251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp250);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block50; else goto block51;
block50:;
org$pandalanguage$pandac$Position* $tmp253 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp254 = *$tmp253;
*(&local23) = $tmp254;
org$pandalanguage$pandac$ASTNode** $tmp255 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp256 = *$tmp255;
org$pandalanguage$pandac$FixedArray** $tmp257 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp258 = *$tmp257;
org$pandalanguage$pandac$ASTNode** $tmp259 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp260 = *$tmp259;
// line 164
org$pandalanguage$pandac$Position $tmp261 = *(&local23);
return $tmp261;
block51:;
panda$core$Int64 $tmp262 = (panda$core$Int64) {25};
panda$core$Bit $tmp263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp262);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block52; else goto block53;
block52:;
org$pandalanguage$pandac$Position* $tmp265 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp266 = *$tmp265;
*(&local24) = $tmp266;
panda$core$UInt64* $tmp267 = (panda$core$UInt64*) (param0->$data + 16);
panda$core$UInt64 $tmp268 = *$tmp267;
// line 167
org$pandalanguage$pandac$Position $tmp269 = *(&local24);
return $tmp269;
block53:;
panda$core$Int64 $tmp270 = (panda$core$Int64) {26};
panda$core$Bit $tmp271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp270);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block54; else goto block55;
block54:;
org$pandalanguage$pandac$Position* $tmp273 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp274 = *$tmp273;
*(&local25) = $tmp274;
org$pandalanguage$pandac$IR$Value** $tmp275 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp276 = *$tmp275;
// line 170
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
panda$core$String** $tmp283 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp284 = *$tmp283;
org$pandalanguage$pandac$FixedArray** $tmp285 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp286 = *$tmp285;
// line 173
org$pandalanguage$pandac$Position $tmp287 = *(&local26);
return $tmp287;
block57:;
panda$core$Int64 $tmp288 = (panda$core$Int64) {28};
panda$core$Bit $tmp289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp288);
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block58; else goto block59;
block58:;
org$pandalanguage$pandac$Position* $tmp291 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp292 = *$tmp291;
*(&local27) = $tmp292;
org$pandalanguage$pandac$ASTNode** $tmp293 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp294 = *$tmp293;
org$pandalanguage$pandac$FixedArray** $tmp295 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp296 = *$tmp295;
org$pandalanguage$pandac$FixedArray** $tmp297 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp298 = *$tmp297;
// line 176
org$pandalanguage$pandac$Position $tmp299 = *(&local27);
return $tmp299;
block59:;
panda$core$Int64 $tmp300 = (panda$core$Int64) {29};
panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp300);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block60; else goto block61;
block60:;
org$pandalanguage$pandac$Position* $tmp303 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp304 = *$tmp303;
*(&local28) = $tmp304;
org$pandalanguage$pandac$ASTNode** $tmp305 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp306 = *$tmp305;
org$pandalanguage$pandac$FixedArray** $tmp307 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp308 = *$tmp307;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp309 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp310 = *$tmp309;
panda$core$String** $tmp311 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp312 = *$tmp311;
org$pandalanguage$pandac$FixedArray** $tmp313 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp314 = *$tmp313;
org$pandalanguage$pandac$FixedArray** $tmp315 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp316 = *$tmp315;
org$pandalanguage$pandac$ASTNode** $tmp317 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp318 = *$tmp317;
org$pandalanguage$pandac$FixedArray** $tmp319 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 72);
org$pandalanguage$pandac$FixedArray* $tmp320 = *$tmp319;
// line 179
org$pandalanguage$pandac$Position $tmp321 = *(&local28);
return $tmp321;
block61:;
panda$core$Int64 $tmp322 = (panda$core$Int64) {30};
panda$core$Bit $tmp323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp322);
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block62; else goto block63;
block62:;
org$pandalanguage$pandac$Position* $tmp325 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp326 = *$tmp325;
*(&local29) = $tmp326;
org$pandalanguage$pandac$parser$Token$Kind* $tmp327 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp328 = *$tmp327;
org$pandalanguage$pandac$FixedArray** $tmp329 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp330 = *$tmp329;
org$pandalanguage$pandac$ASTNode** $tmp331 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp332 = *$tmp331;
// line 182
org$pandalanguage$pandac$Position $tmp333 = *(&local29);
return $tmp333;
block63:;
panda$core$Int64 $tmp334 = (panda$core$Int64) {31};
panda$core$Bit $tmp335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp334);
bool $tmp336 = $tmp335.value;
if ($tmp336) goto block64; else goto block65;
block64:;
org$pandalanguage$pandac$Position* $tmp337 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp338 = *$tmp337;
*(&local30) = $tmp338;
// line 185
org$pandalanguage$pandac$Position $tmp339 = *(&local30);
return $tmp339;
block65:;
panda$core$Int64 $tmp340 = (panda$core$Int64) {32};
panda$core$Bit $tmp341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp340);
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block66; else goto block67;
block66:;
org$pandalanguage$pandac$Position* $tmp343 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp344 = *$tmp343;
*(&local31) = $tmp344;
org$pandalanguage$pandac$ASTNode** $tmp345 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp346 = *$tmp345;
// line 188
org$pandalanguage$pandac$Position $tmp347 = *(&local31);
return $tmp347;
block67:;
panda$core$Int64 $tmp348 = (panda$core$Int64) {33};
panda$core$Bit $tmp349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp348);
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block68; else goto block69;
block68:;
org$pandalanguage$pandac$Position* $tmp351 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp352 = *$tmp351;
*(&local32) = $tmp352;
panda$core$String** $tmp353 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp354 = *$tmp353;
// line 191
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
panda$core$String** $tmp361 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp362 = *$tmp361;
org$pandalanguage$pandac$ASTNode** $tmp363 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp364 = *$tmp363;
// line 194
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
org$pandalanguage$pandac$parser$Token$Kind* $tmp371 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp372 = *$tmp371;
org$pandalanguage$pandac$ASTNode** $tmp373 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp374 = *$tmp373;
// line 197
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
org$pandalanguage$pandac$ASTNode** $tmp381 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp382 = *$tmp381;
panda$core$Bit* $tmp383 = (panda$core$Bit*) (param0->$data + 24);
panda$core$Bit $tmp384 = *$tmp383;
org$pandalanguage$pandac$ASTNode** $tmp385 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 25);
org$pandalanguage$pandac$ASTNode* $tmp386 = *$tmp385;
org$pandalanguage$pandac$ASTNode** $tmp387 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 33);
org$pandalanguage$pandac$ASTNode* $tmp388 = *$tmp387;
// line 200
org$pandalanguage$pandac$Position $tmp389 = *(&local35);
return $tmp389;
block75:;
panda$core$Int64 $tmp390 = (panda$core$Int64) {37};
panda$core$Bit $tmp391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp390);
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block76; else goto block77;
block76:;
org$pandalanguage$pandac$Position* $tmp393 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp394 = *$tmp393;
*(&local36) = $tmp394;
panda$core$Real64* $tmp395 = (panda$core$Real64*) (param0->$data + 16);
panda$core$Real64 $tmp396 = *$tmp395;
// line 203
org$pandalanguage$pandac$Position $tmp397 = *(&local36);
return $tmp397;
block77:;
panda$core$Int64 $tmp398 = (panda$core$Int64) {38};
panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp398);
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block78; else goto block79;
block78:;
org$pandalanguage$pandac$Position* $tmp401 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp402 = *$tmp401;
*(&local37) = $tmp402;
panda$core$String** $tmp403 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp404 = *$tmp403;
// line 206
org$pandalanguage$pandac$Position $tmp405 = *(&local37);
return $tmp405;
block79:;
panda$core$Int64 $tmp406 = (panda$core$Int64) {39};
panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp406);
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block80; else goto block81;
block80:;
org$pandalanguage$pandac$Position* $tmp409 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp410 = *$tmp409;
*(&local38) = $tmp410;
org$pandalanguage$pandac$ASTNode** $tmp411 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp412 = *$tmp411;
// line 209
org$pandalanguage$pandac$Position $tmp413 = *(&local38);
return $tmp413;
block81:;
panda$core$Int64 $tmp414 = (panda$core$Int64) {40};
panda$core$Bit $tmp415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp414);
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block82; else goto block83;
block82:;
org$pandalanguage$pandac$Position* $tmp417 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp418 = *$tmp417;
*(&local39) = $tmp418;
// line 212
org$pandalanguage$pandac$Position $tmp419 = *(&local39);
return $tmp419;
block83:;
panda$core$Int64 $tmp420 = (panda$core$Int64) {41};
panda$core$Bit $tmp421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp420);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block84; else goto block85;
block84:;
org$pandalanguage$pandac$Position* $tmp423 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp424 = *$tmp423;
*(&local40) = $tmp424;
panda$core$String** $tmp425 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp426 = *$tmp425;
// line 215
org$pandalanguage$pandac$Position $tmp427 = *(&local40);
return $tmp427;
block85:;
panda$core$Int64 $tmp428 = (panda$core$Int64) {42};
panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp428);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block86; else goto block87;
block86:;
org$pandalanguage$pandac$Position* $tmp431 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp432 = *$tmp431;
*(&local41) = $tmp432;
// line 218
org$pandalanguage$pandac$Position $tmp433 = *(&local41);
return $tmp433;
block87:;
panda$core$Int64 $tmp434 = (panda$core$Int64) {43};
panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp434);
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block88; else goto block89;
block88:;
org$pandalanguage$pandac$Position* $tmp437 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp438 = *$tmp437;
*(&local42) = $tmp438;
org$pandalanguage$pandac$FixedArray** $tmp439 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp440 = *$tmp439;
// line 221
org$pandalanguage$pandac$Position $tmp441 = *(&local42);
return $tmp441;
block89:;
panda$core$Int64 $tmp442 = (panda$core$Int64) {44};
panda$core$Bit $tmp443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp442);
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block90; else goto block91;
block90:;
org$pandalanguage$pandac$Position* $tmp445 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp446 = *$tmp445;
*(&local43) = $tmp446;
org$pandalanguage$pandac$FixedArray** $tmp447 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp448 = *$tmp447;
// line 224
org$pandalanguage$pandac$Position $tmp449 = *(&local43);
return $tmp449;
block91:;
panda$core$Int64 $tmp450 = (panda$core$Int64) {45};
panda$core$Bit $tmp451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp450);
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block92; else goto block93;
block92:;
org$pandalanguage$pandac$Position* $tmp453 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp454 = *$tmp453;
*(&local44) = $tmp454;
panda$core$String** $tmp455 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp456 = *$tmp455;
// line 227
org$pandalanguage$pandac$Position $tmp457 = *(&local44);
return $tmp457;
block93:;
panda$core$Int64 $tmp458 = (panda$core$Int64) {47};
panda$core$Bit $tmp459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp458);
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block94; else goto block95;
block94:;
org$pandalanguage$pandac$Position* $tmp461 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp462 = *$tmp461;
*(&local45) = $tmp462;
panda$core$String** $tmp463 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp464 = *$tmp463;
org$pandalanguage$pandac$ASTNode** $tmp465 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp466 = *$tmp465;
// line 230
org$pandalanguage$pandac$Position $tmp467 = *(&local45);
return $tmp467;
block95:;
panda$core$Int64 $tmp468 = (panda$core$Int64) {46};
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
// line 233
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
org$pandalanguage$pandac$FixedArray** $tmp483 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp484 = *$tmp483;
org$pandalanguage$pandac$ASTNode** $tmp485 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp486 = *$tmp485;
// line 236
org$pandalanguage$pandac$Position $tmp487 = *(&local47);
return $tmp487;
block99:;
panda$core$Int64 $tmp488 = (panda$core$Int64) {49};
panda$core$Bit $tmp489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp488);
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block100; else goto block101;
block100:;
org$pandalanguage$pandac$Position* $tmp491 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp492 = *$tmp491;
*(&local48) = $tmp492;
panda$core$String** $tmp493 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp494 = *$tmp493;
// line 239
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
org$pandalanguage$pandac$Variable$Kind* $tmp501 = (org$pandalanguage$pandac$Variable$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp502 = *$tmp501;
org$pandalanguage$pandac$FixedArray** $tmp503 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp504 = *$tmp503;
// line 242
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
org$pandalanguage$pandac$FixedArray** $tmp511 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp512 = *$tmp511;
org$pandalanguage$pandac$FixedArray** $tmp513 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp514 = *$tmp513;
// line 245
org$pandalanguage$pandac$Position $tmp515 = *(&local50);
return $tmp515;
block105:;
panda$core$Int64 $tmp516 = (panda$core$Int64) {52};
panda$core$Bit $tmp517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp516);
bool $tmp518 = $tmp517.value;
if ($tmp518) goto block106; else goto block107;
block106:;
org$pandalanguage$pandac$Position* $tmp519 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp520 = *$tmp519;
*(&local51) = $tmp520;
panda$core$String** $tmp521 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp522 = *$tmp521;
org$pandalanguage$pandac$ASTNode** $tmp523 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp524 = *$tmp523;
org$pandalanguage$pandac$FixedArray** $tmp525 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp526 = *$tmp525;
// line 248
org$pandalanguage$pandac$Position $tmp527 = *(&local51);
return $tmp527;
block107:;
// line 251
panda$core$Bit $tmp528 = panda$core$Bit$init$builtin_bit(false);
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block108; else goto block109;
block109:;
panda$core$Int64 $tmp530 = (panda$core$Int64) {251};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s531, $tmp530);
abort(); // unreachable
block108:;
goto block1;
block1:;
panda$core$Bit $tmp532 = panda$core$Bit$init$builtin_bit(false);
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block110; else goto block111;
block111:;
panda$core$Int64 $tmp534 = (panda$core$Int64) {89};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s535, $tmp534, &$s536);
abort(); // unreachable
block110:;
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
panda$core$String* local63 = NULL;
org$pandalanguage$pandac$FixedArray* local64 = NULL;
org$pandalanguage$pandac$ASTNode* local65 = NULL;
org$pandalanguage$pandac$FixedArray* local66 = NULL;
org$pandalanguage$pandac$ASTNode* local67 = NULL;
panda$core$MutableString* local68 = NULL;
org$pandalanguage$pandac$ASTNode* local69 = NULL;
panda$core$UInt64 local70;
org$pandalanguage$pandac$IR$Value* local71 = NULL;
panda$core$String* local72 = NULL;
org$pandalanguage$pandac$FixedArray* local73 = NULL;
panda$core$MutableString* local74 = NULL;
org$pandalanguage$pandac$ASTNode* local75 = NULL;
org$pandalanguage$pandac$ASTNode* local76 = NULL;
org$pandalanguage$pandac$FixedArray* local77 = NULL;
org$pandalanguage$pandac$FixedArray* local78 = NULL;
panda$core$MutableString* local79 = NULL;
org$pandalanguage$pandac$ASTNode* local80 = NULL;
org$pandalanguage$pandac$ASTNode* local81 = NULL;
org$pandalanguage$pandac$FixedArray* local82 = NULL;
org$pandalanguage$pandac$MethodDecl$Kind local83;
panda$core$String* local84 = NULL;
org$pandalanguage$pandac$FixedArray* local85 = NULL;
org$pandalanguage$pandac$FixedArray* local86 = NULL;
org$pandalanguage$pandac$ASTNode* local87 = NULL;
org$pandalanguage$pandac$FixedArray* local88 = NULL;
panda$core$MutableString* local89 = NULL;
org$pandalanguage$pandac$ASTNode* local90 = NULL;
org$pandalanguage$pandac$ASTNode* local91 = NULL;
org$pandalanguage$pandac$parser$Token$Kind local92;
org$pandalanguage$pandac$FixedArray* local93 = NULL;
org$pandalanguage$pandac$ASTNode* local94 = NULL;
panda$core$String* local95 = NULL;
panda$core$String* local96 = NULL;
org$pandalanguage$pandac$ASTNode* local97 = NULL;
panda$core$String* local98 = NULL;
panda$core$String* local99 = NULL;
org$pandalanguage$pandac$ASTNode* local100 = NULL;
org$pandalanguage$pandac$parser$Token$Kind local101;
org$pandalanguage$pandac$ASTNode* local102 = NULL;
org$pandalanguage$pandac$ASTNode* local103 = NULL;
panda$core$Bit local104;
org$pandalanguage$pandac$ASTNode* local105 = NULL;
org$pandalanguage$pandac$ASTNode* local106 = NULL;
panda$core$MutableString* local107 = NULL;
panda$core$Real64 local108;
panda$core$String* local109 = NULL;
org$pandalanguage$pandac$ASTNode* local110 = NULL;
panda$core$String* local111 = NULL;
org$pandalanguage$pandac$FixedArray* local112 = NULL;
org$pandalanguage$pandac$FixedArray* local113 = NULL;
panda$core$String* local114 = NULL;
panda$core$String* local115 = NULL;
org$pandalanguage$pandac$ASTNode* local116 = NULL;
org$pandalanguage$pandac$FixedArray* local117 = NULL;
org$pandalanguage$pandac$ASTNode* local118 = NULL;
org$pandalanguage$pandac$FixedArray* local119 = NULL;
org$pandalanguage$pandac$ASTNode* local120 = NULL;
panda$core$String* local121 = NULL;
org$pandalanguage$pandac$Variable$Kind local122;
org$pandalanguage$pandac$FixedArray* local123 = NULL;
panda$core$MutableString* local124 = NULL;
org$pandalanguage$pandac$FixedArray* local125 = NULL;
org$pandalanguage$pandac$FixedArray* local126 = NULL;
panda$core$MutableString* local127 = NULL;
panda$core$String* local128 = NULL;
org$pandalanguage$pandac$ASTNode* local129 = NULL;
org$pandalanguage$pandac$ASTNode* local130 = NULL;
panda$core$String* local131 = NULL;
org$pandalanguage$pandac$ASTNode* local132 = NULL;
org$pandalanguage$pandac$FixedArray* local133 = NULL;
panda$core$MutableString* local134 = NULL;
org$pandalanguage$pandac$ASTNode* local135 = NULL;
// line 258
panda$core$Int64* $tmp537 = &param0->$rawValue;
panda$core$Int64 $tmp538 = *$tmp537;
panda$core$Int64 $tmp539 = (panda$core$Int64) {0};
panda$core$Bit $tmp540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp539);
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp542 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp543 = *$tmp542;
panda$core$String** $tmp544 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp545 = *$tmp544;
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
panda$core$String* $tmp546 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
*(&local0) = $tmp545;
panda$core$String** $tmp547 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp548 = *$tmp547;
org$pandalanguage$pandac$ASTNode** $tmp549 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp550 = *$tmp549;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp550));
org$pandalanguage$pandac$ASTNode* $tmp551 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp551));
*(&local1) = $tmp550;
// line 260
org$pandalanguage$pandac$ASTNode* $tmp552 = *(&local1);
panda$core$Bit $tmp553 = panda$core$Bit$init$builtin_bit($tmp552 != NULL);
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block4; else goto block5;
block4:;
// line 261
panda$core$String* $tmp555 = *(&local0);
panda$core$String* $tmp556 = panda$core$String$convert$R$panda$core$String($tmp555);
panda$core$String* $tmp557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp556, &$s558);
org$pandalanguage$pandac$ASTNode* $tmp559 = *(&local1);
panda$core$Bit $tmp560 = panda$core$Bit$init$builtin_bit($tmp559 != NULL);
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp562 = (panda$core$Int64) {261};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s563, $tmp562, &$s564);
abort(); // unreachable
block6:;
panda$core$String* $tmp565 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp557, ((panda$core$Object*) $tmp559));
panda$core$String* $tmp566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp565, &$s567);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
// unreffing REF($49:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
// unreffing REF($48:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp557));
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
// unreffing REF($37:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp568 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp569 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp569));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp566;
block5:;
// line 263
panda$core$String* $tmp570 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp570));
org$pandalanguage$pandac$ASTNode* $tmp571 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp572 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp570;
block3:;
panda$core$Int64 $tmp573 = (panda$core$Int64) {1};
panda$core$Bit $tmp574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp573);
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp576 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp577 = *$tmp576;
org$pandalanguage$pandac$FixedArray** $tmp578 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp579 = *$tmp578;
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
org$pandalanguage$pandac$FixedArray* $tmp580 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp580));
*(&local2) = $tmp579;
// line 266
org$pandalanguage$pandac$FixedArray* $tmp581 = *(&local2);
panda$core$String* $tmp582 = org$pandalanguage$pandac$FixedArray$convert$R$panda$core$String($tmp581);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp582));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp582));
// unreffing REF($108:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp583 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp583));
// unreffing elements
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp582;
block9:;
panda$core$Int64 $tmp584 = (panda$core$Int64) {2};
panda$core$Bit $tmp585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp584);
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp587 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp588 = *$tmp587;
org$pandalanguage$pandac$ASTNode** $tmp589 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp590 = *$tmp589;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp590));
org$pandalanguage$pandac$ASTNode* $tmp591 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp591));
*(&local3) = $tmp590;
org$pandalanguage$pandac$ASTNode** $tmp592 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp593 = *$tmp592;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp593));
org$pandalanguage$pandac$ASTNode* $tmp594 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp594));
*(&local4) = $tmp593;
// line 269
org$pandalanguage$pandac$ASTNode* $tmp595 = *(&local4);
panda$core$Bit $tmp596 = panda$core$Bit$init$builtin_bit($tmp595 == NULL);
bool $tmp597 = $tmp596.value;
if ($tmp597) goto block12; else goto block13;
block12:;
// line 270
org$pandalanguage$pandac$ASTNode* $tmp598 = *(&local3);
panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s600, ((panda$core$Object*) $tmp598));
panda$core$String* $tmp601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp599, &$s602);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
// unreffing REF($154:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
// unreffing REF($153:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp603 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp603));
// unreffing msg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp604 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp604));
// unreffing test
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp601;
block13:;
// line 272
org$pandalanguage$pandac$ASTNode* $tmp605 = *(&local3);
panda$core$String* $tmp606 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s607, ((panda$core$Object*) $tmp605));
panda$core$String* $tmp608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp606, &$s609);
org$pandalanguage$pandac$ASTNode* $tmp610 = *(&local4);
panda$core$Bit $tmp611 = panda$core$Bit$init$builtin_bit($tmp610 != NULL);
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp613 = (panda$core$Int64) {272};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s614, $tmp613, &$s615);
abort(); // unreachable
block14:;
panda$core$String* $tmp616 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp608, ((panda$core$Object*) $tmp610));
panda$core$String* $tmp617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp616, &$s618);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp617));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp617));
// unreffing REF($189:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp616));
// unreffing REF($188:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp608));
// unreffing REF($178:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp606));
// unreffing REF($177:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp619 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
// unreffing msg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp620 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp620));
// unreffing test
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp617;
block11:;
panda$core$Int64 $tmp621 = (panda$core$Int64) {3};
panda$core$Bit $tmp622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp621);
bool $tmp623 = $tmp622.value;
if ($tmp623) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp624 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp625 = *$tmp624;
org$pandalanguage$pandac$ASTNode** $tmp626 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp627 = *$tmp626;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp627));
org$pandalanguage$pandac$ASTNode* $tmp628 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp628));
*(&local5) = $tmp627;
// line 275
org$pandalanguage$pandac$ASTNode* $tmp629 = *(&local5);
panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s631, ((panda$core$Object*) $tmp629));
panda$core$String* $tmp632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp630, &$s633);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
// unreffing REF($234:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp630));
// unreffing REF($233:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp634 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp634));
// unreffing expr
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp632;
block17:;
panda$core$Int64 $tmp635 = (panda$core$Int64) {4};
panda$core$Bit $tmp636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp635);
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp638 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp639 = *$tmp638;
// line 278
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s640));
return &$s641;
block19:;
panda$core$Int64 $tmp642 = (panda$core$Int64) {5};
panda$core$Bit $tmp643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp642);
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp645 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp646 = *$tmp645;
org$pandalanguage$pandac$ASTNode** $tmp647 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp648 = *$tmp647;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
org$pandalanguage$pandac$ASTNode* $tmp649 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp649));
*(&local6) = $tmp648;
org$pandalanguage$pandac$parser$Token$Kind* $tmp650 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp651 = *$tmp650;
*(&local7) = $tmp651;
org$pandalanguage$pandac$ASTNode** $tmp652 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp653 = *$tmp652;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
org$pandalanguage$pandac$ASTNode* $tmp654 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp654));
*(&local8) = $tmp653;
// line 281
org$pandalanguage$pandac$ASTNode* $tmp655 = *(&local6);
panda$core$String* $tmp656 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s657, ((panda$core$Object*) $tmp655));
panda$core$String* $tmp658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp656, &$s659);
org$pandalanguage$pandac$parser$Token$Kind $tmp660 = *(&local7);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp661;
$tmp661 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp661->value = $tmp660;
panda$core$String* $tmp662 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp658, ((panda$core$Object*) $tmp661));
panda$core$String* $tmp663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp662, &$s664);
org$pandalanguage$pandac$ASTNode* $tmp665 = *(&local8);
panda$core$String* $tmp666 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp663, ((panda$core$Object*) $tmp665));
panda$core$String* $tmp667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp666, &$s668);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
// unreffing REF($298:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
// unreffing REF($297:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp663));
// unreffing REF($294:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp662));
// unreffing REF($293:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp661));
// unreffing REF($292:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp658));
// unreffing REF($290:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp656));
// unreffing REF($289:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp669 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
// unreffing right
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp670 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
// unreffing left
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp667;
block21:;
panda$core$Int64 $tmp671 = (panda$core$Int64) {6};
panda$core$Bit $tmp672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp671);
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Position* $tmp674 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp675 = *$tmp674;
panda$core$Bit* $tmp676 = (panda$core$Bit*) (param0->$data + 16);
panda$core$Bit $tmp677 = *$tmp676;
*(&local9) = $tmp677;
// line 284
panda$core$Bit $tmp678 = *(&local9);
panda$core$String* $tmp679 = panda$core$Bit$convert$R$panda$core$String($tmp678);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp679));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp679));
// unreffing REF($344:panda.core.String)
return $tmp679;
block23:;
panda$core$Int64 $tmp680 = (panda$core$Int64) {7};
panda$core$Bit $tmp681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp680);
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp683 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp684 = *$tmp683;
org$pandalanguage$pandac$FixedArray** $tmp685 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp686 = *$tmp685;
*(&local10) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp686));
org$pandalanguage$pandac$FixedArray* $tmp687 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp687));
*(&local10) = $tmp686;
// line 287
panda$core$MutableString* $tmp688 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp688, &$s689);
*(&local11) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp688));
panda$core$MutableString* $tmp690 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp690));
*(&local11) = $tmp688;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp688));
// unreffing REF($367:panda.core.MutableString)
// line 288
org$pandalanguage$pandac$FixedArray* $tmp691 = *(&local10);
ITable* $tmp692 = ((panda$collections$Iterable*) $tmp691)->$class->itable;
while ($tmp692->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp692 = $tmp692->next;
}
$fn694 $tmp693 = $tmp692->methods[0];
panda$collections$Iterator* $tmp695 = $tmp693(((panda$collections$Iterable*) $tmp691));
goto block26;
block26:;
ITable* $tmp696 = $tmp695->$class->itable;
while ($tmp696->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp696 = $tmp696->next;
}
$fn698 $tmp697 = $tmp696->methods[0];
panda$core$Bit $tmp699 = $tmp697($tmp695);
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block28; else goto block27;
block27:;
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp701 = $tmp695->$class->itable;
while ($tmp701->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp701 = $tmp701->next;
}
$fn703 $tmp702 = $tmp701->methods[1];
panda$core$Object* $tmp704 = $tmp702($tmp695);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp704)));
org$pandalanguage$pandac$ASTNode* $tmp705 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp705));
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) $tmp704);
// line 289
panda$core$MutableString* $tmp706 = *(&local11);
org$pandalanguage$pandac$ASTNode* $tmp707 = *(&local12);
panda$core$String* $tmp708 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp707), &$s709);
panda$core$MutableString$append$panda$core$String($tmp706, $tmp708);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp708));
// unreffing REF($407:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp704);
// unreffing REF($395:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp710 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp710));
// unreffing s
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block26;
block28:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp695));
// unreffing REF($384:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 291
panda$core$MutableString* $tmp711 = *(&local11);
panda$core$MutableString$append$panda$core$String($tmp711, &$s712);
// line 292
panda$core$MutableString* $tmp713 = *(&local11);
panda$core$String* $tmp714 = panda$core$MutableString$finish$R$panda$core$String($tmp713);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp714));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp714));
// unreffing REF($429:panda.core.String)
panda$core$MutableString* $tmp715 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp715));
// unreffing result
*(&local11) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp716 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp716));
// unreffing statements
*(&local10) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp714;
block25:;
panda$core$Int64 $tmp717 = (panda$core$Int64) {8};
panda$core$Bit $tmp718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp717);
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block29; else goto block30;
block29:;
org$pandalanguage$pandac$Position* $tmp720 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp721 = *$tmp720;
panda$core$String** $tmp722 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp723 = *$tmp722;
*(&local13) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
panda$core$String* $tmp724 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp724));
*(&local13) = $tmp723;
// line 295
panda$core$String* $tmp725 = *(&local13);
panda$core$Bit $tmp726 = panda$core$Bit$init$builtin_bit($tmp725 != NULL);
bool $tmp727 = $tmp726.value;
if ($tmp727) goto block31; else goto block32;
block31:;
// line 296
panda$core$String* $tmp728 = *(&local13);
panda$core$Bit $tmp729 = panda$core$Bit$init$builtin_bit($tmp728 != NULL);
bool $tmp730 = $tmp729.value;
if ($tmp730) goto block33; else goto block34;
block34:;
panda$core$Int64 $tmp731 = (panda$core$Int64) {296};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s732, $tmp731, &$s733);
abort(); // unreachable
block33:;
panda$core$String* $tmp734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s735, $tmp728);
panda$core$String* $tmp736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp734, &$s737);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp736));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp736));
// unreffing REF($478:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp734));
// unreffing REF($477:panda.core.String)
panda$core$String* $tmp738 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp738));
// unreffing label
*(&local13) = ((panda$core$String*) NULL);
return $tmp736;
block32:;
// line 298
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s739));
panda$core$String* $tmp740 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp740));
// unreffing label
*(&local13) = ((panda$core$String*) NULL);
return &$s741;
block30:;
panda$core$Int64 $tmp742 = (panda$core$Int64) {9};
panda$core$Bit $tmp743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp742);
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block35; else goto block36;
block35:;
org$pandalanguage$pandac$Position* $tmp745 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp746 = *$tmp745;
org$pandalanguage$pandac$ASTNode** $tmp747 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp748 = *$tmp747;
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp748));
org$pandalanguage$pandac$ASTNode* $tmp749 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp749));
*(&local14) = $tmp748;
org$pandalanguage$pandac$FixedArray** $tmp750 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp751 = *$tmp750;
*(&local15) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp751));
org$pandalanguage$pandac$FixedArray* $tmp752 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp752));
*(&local15) = $tmp751;
// line 301
org$pandalanguage$pandac$ASTNode* $tmp753 = *(&local14);
$fn755 $tmp754 = ($fn755) $tmp753->$class->vtable[0];
panda$core$String* $tmp756 = $tmp754($tmp753);
panda$core$String* $tmp757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp756, &$s758);
org$pandalanguage$pandac$FixedArray* $tmp759 = *(&local15);
ITable* $tmp760 = ((panda$collections$CollectionView*) $tmp759)->$class->itable;
while ($tmp760->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp760 = $tmp760->next;
}
$fn762 $tmp761 = $tmp760->methods[1];
panda$core$String* $tmp763 = $tmp761(((panda$collections$CollectionView*) $tmp759));
panda$core$String* $tmp764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp757, $tmp763);
panda$core$String* $tmp765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp764, &$s766);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
// unreffing REF($536:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp764));
// unreffing REF($535:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp763));
// unreffing REF($534:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp757));
// unreffing REF($530:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp756));
// unreffing REF($529:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp767 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
// unreffing args
*(&local15) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp768 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp768));
// unreffing target
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp765;
block36:;
panda$core$Int64 $tmp769 = (panda$core$Int64) {10};
panda$core$Bit $tmp770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp769);
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block37; else goto block38;
block37:;
org$pandalanguage$pandac$Position* $tmp772 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp773 = *$tmp772;
org$pandalanguage$pandac$ASTNode** $tmp774 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp775 = *$tmp774;
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp775));
org$pandalanguage$pandac$ASTNode* $tmp776 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp776));
*(&local16) = $tmp775;
panda$core$String** $tmp777 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp778 = *$tmp777;
*(&local17) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp778));
panda$core$String* $tmp779 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp779));
*(&local17) = $tmp778;
org$pandalanguage$pandac$FixedArray** $tmp780 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp781 = *$tmp780;
*(&local18) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp781));
org$pandalanguage$pandac$FixedArray* $tmp782 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp782));
*(&local18) = $tmp781;
// line 304
panda$core$MutableString* $tmp783 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp783);
*(&local19) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp783));
panda$core$MutableString* $tmp784 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp784));
*(&local19) = $tmp783;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp783));
// unreffing REF($599:panda.core.MutableString)
// line 305
org$pandalanguage$pandac$ASTNode* $tmp785 = *(&local16);
panda$core$Bit $tmp786 = panda$core$Bit$init$builtin_bit($tmp785 != NULL);
bool $tmp787 = $tmp786.value;
if ($tmp787) goto block39; else goto block40;
block39:;
// line 306
panda$core$MutableString* $tmp788 = *(&local19);
org$pandalanguage$pandac$ASTNode* $tmp789 = *(&local16);
panda$core$Bit $tmp790 = panda$core$Bit$init$builtin_bit($tmp789 != NULL);
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block41; else goto block42;
block42:;
panda$core$Int64 $tmp792 = (panda$core$Int64) {306};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s793, $tmp792, &$s794);
abort(); // unreachable
block41:;
panda$core$String* $tmp795 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp789), &$s796);
panda$core$MutableString$append$panda$core$String($tmp788, $tmp795);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp795));
// unreffing REF($628:panda.core.String)
goto block40;
block40:;
// line 308
panda$core$MutableString* $tmp797 = *(&local19);
panda$core$String* $tmp798 = *(&local17);
panda$core$String* $tmp799 = panda$core$String$convert$R$panda$core$String($tmp798);
panda$core$String* $tmp800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp799, &$s801);
org$pandalanguage$pandac$FixedArray* $tmp802 = *(&local18);
panda$core$Bit $tmp803 = panda$core$Bit$init$builtin_bit($tmp802 != NULL);
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block43; else goto block44;
block44:;
panda$core$Int64 $tmp805 = (panda$core$Int64) {308};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s806, $tmp805, &$s807);
abort(); // unreachable
block43:;
ITable* $tmp808 = ((panda$collections$CollectionView*) $tmp802)->$class->itable;
while ($tmp808->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp808 = $tmp808->next;
}
$fn810 $tmp809 = $tmp808->methods[1];
panda$core$String* $tmp811 = $tmp809(((panda$collections$CollectionView*) $tmp802));
panda$core$String* $tmp812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp800, $tmp811);
panda$core$String* $tmp813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp812, &$s814);
panda$core$MutableString$append$panda$core$String($tmp797, $tmp813);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp813));
// unreffing REF($651:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp812));
// unreffing REF($650:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
// unreffing REF($649:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp800));
// unreffing REF($638:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp799));
// unreffing REF($637:panda.core.String)
// line 309
panda$core$MutableString* $tmp815 = *(&local19);
panda$core$String* $tmp816 = panda$core$MutableString$finish$R$panda$core$String($tmp815);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp816));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp816));
// unreffing REF($670:panda.core.String)
panda$core$MutableString* $tmp817 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp817));
// unreffing result
*(&local19) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp818 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp818));
// unreffing fields
*(&local18) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp819 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp819));
// unreffing name
*(&local17) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp820 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp820));
// unreffing dc
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp816;
block38:;
panda$core$Int64 $tmp821 = (panda$core$Int64) {11};
panda$core$Bit $tmp822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp821);
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block45; else goto block46;
block45:;
org$pandalanguage$pandac$Position* $tmp824 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp825 = *$tmp824;
org$pandalanguage$pandac$ASTNode** $tmp826 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp827 = *$tmp826;
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp827));
org$pandalanguage$pandac$ASTNode* $tmp828 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
*(&local20) = $tmp827;
org$pandalanguage$pandac$ChoiceCase** $tmp829 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp830 = *$tmp829;
*(&local21) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp830));
org$pandalanguage$pandac$ChoiceCase* $tmp831 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp831));
*(&local21) = $tmp830;
panda$core$Int64* $tmp832 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp833 = *$tmp832;
*(&local22) = $tmp833;
// line 312
org$pandalanguage$pandac$ASTNode* $tmp834 = *(&local20);
$fn836 $tmp835 = ($fn836) $tmp834->$class->vtable[0];
panda$core$String* $tmp837 = $tmp835($tmp834);
panda$core$String* $tmp838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp837, &$s839);
org$pandalanguage$pandac$ChoiceCase* $tmp840 = *(&local21);
panda$core$String* $tmp841 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp838, ((panda$core$Object*) $tmp840));
panda$core$String* $tmp842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp841, &$s843);
panda$core$Int64 $tmp844 = *(&local22);
panda$core$Int64$wrapper* $tmp845;
$tmp845 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp845->value = $tmp844;
panda$core$String* $tmp846 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp842, ((panda$core$Object*) $tmp845));
panda$core$String* $tmp847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp846, &$s848);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp847));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp847));
// unreffing REF($736:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp846));
// unreffing REF($735:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp845));
// unreffing REF($734:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp842));
// unreffing REF($732:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp841));
// unreffing REF($731:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp838));
// unreffing REF($728:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp837));
// unreffing REF($727:panda.core.String)
org$pandalanguage$pandac$ChoiceCase* $tmp849 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp849));
// unreffing ce
*(&local21) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp850 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp850));
// unreffing base
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp847;
block46:;
panda$core$Int64 $tmp851 = (panda$core$Int64) {12};
panda$core$Bit $tmp852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp851);
bool $tmp853 = $tmp852.value;
if ($tmp853) goto block47; else goto block48;
block47:;
org$pandalanguage$pandac$Position* $tmp854 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp855 = *$tmp854;
org$pandalanguage$pandac$ASTNode** $tmp856 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp857 = *$tmp856;
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp857));
org$pandalanguage$pandac$ASTNode* $tmp858 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp858));
*(&local23) = $tmp857;
org$pandalanguage$pandac$FixedArray** $tmp859 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp860 = *$tmp859;
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
org$pandalanguage$pandac$FixedArray* $tmp861 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
*(&local24) = $tmp860;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp862 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp863 = *$tmp862;
*(&local25) = $tmp863;
panda$core$String** $tmp864 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp865 = *$tmp864;
*(&local26) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
panda$core$String* $tmp866 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp866));
*(&local26) = $tmp865;
org$pandalanguage$pandac$FixedArray** $tmp867 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp868 = *$tmp867;
*(&local27) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp868));
org$pandalanguage$pandac$FixedArray* $tmp869 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp869));
*(&local27) = $tmp868;
org$pandalanguage$pandac$FixedArray** $tmp870 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp871 = *$tmp870;
*(&local28) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp871));
org$pandalanguage$pandac$FixedArray* $tmp872 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp872));
*(&local28) = $tmp871;
org$pandalanguage$pandac$FixedArray** $tmp873 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 64);
org$pandalanguage$pandac$FixedArray* $tmp874 = *$tmp873;
*(&local29) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp874));
org$pandalanguage$pandac$FixedArray* $tmp875 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp875));
*(&local29) = $tmp874;
// line 315
panda$core$MutableString* $tmp876 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp876);
*(&local30) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp876));
panda$core$MutableString* $tmp877 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp877));
*(&local30) = $tmp876;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp876));
// unreffing REF($835:panda.core.MutableString)
// line 316
org$pandalanguage$pandac$ASTNode* $tmp878 = *(&local23);
panda$core$Bit $tmp879 = panda$core$Bit$init$builtin_bit($tmp878 != NULL);
bool $tmp880 = $tmp879.value;
if ($tmp880) goto block49; else goto block50;
block49:;
// line 317
panda$core$MutableString* $tmp881 = *(&local30);
org$pandalanguage$pandac$ASTNode* $tmp882 = *(&local23);
panda$core$Bit $tmp883 = panda$core$Bit$init$builtin_bit($tmp882 != NULL);
bool $tmp884 = $tmp883.value;
if ($tmp884) goto block51; else goto block52;
block52:;
panda$core$Int64 $tmp885 = (panda$core$Int64) {317};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s886, $tmp885, &$s887);
abort(); // unreachable
block51:;
panda$core$String* $tmp888 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp882), &$s889);
panda$core$MutableString$append$panda$core$String($tmp881, $tmp888);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp888));
// unreffing REF($864:panda.core.String)
goto block50;
block50:;
// line 319
org$pandalanguage$pandac$FixedArray* $tmp890 = *(&local24);
ITable* $tmp891 = ((panda$collections$Iterable*) $tmp890)->$class->itable;
while ($tmp891->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp891 = $tmp891->next;
}
$fn893 $tmp892 = $tmp891->methods[0];
panda$collections$Iterator* $tmp894 = $tmp892(((panda$collections$Iterable*) $tmp890));
goto block53;
block53:;
ITable* $tmp895 = $tmp894->$class->itable;
while ($tmp895->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp895 = $tmp895->next;
}
$fn897 $tmp896 = $tmp895->methods[0];
panda$core$Bit $tmp898 = $tmp896($tmp894);
bool $tmp899 = $tmp898.value;
if ($tmp899) goto block55; else goto block54;
block54:;
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp900 = $tmp894->$class->itable;
while ($tmp900->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp900 = $tmp900->next;
}
$fn902 $tmp901 = $tmp900->methods[1];
panda$core$Object* $tmp903 = $tmp901($tmp894);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp903)));
org$pandalanguage$pandac$ASTNode* $tmp904 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp904));
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) $tmp903);
// line 320
panda$core$MutableString* $tmp905 = *(&local30);
org$pandalanguage$pandac$ASTNode* $tmp906 = *(&local31);
panda$core$String* $tmp907 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp906), &$s908);
panda$core$MutableString$append$panda$core$String($tmp905, $tmp907);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp907));
// unreffing REF($898:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp903);
// unreffing REF($886:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp909 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp909));
// unreffing a
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block53;
block55:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp894));
// unreffing REF($875:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 322
org$pandalanguage$pandac$ClassDecl$Kind $tmp910 = *(&local25);
panda$core$Int64 $tmp911 = $tmp910.$rawValue;
panda$core$Int64 $tmp912 = (panda$core$Int64) {0};
panda$core$Bit $tmp913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp911, $tmp912);
bool $tmp914 = $tmp913.value;
if ($tmp914) goto block57; else goto block58;
block57:;
// line 323
panda$core$MutableString* $tmp915 = *(&local30);
panda$core$MutableString$append$panda$core$String($tmp915, &$s916);
goto block56;
block58:;
panda$core$Int64 $tmp917 = (panda$core$Int64) {1};
panda$core$Bit $tmp918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp911, $tmp917);
bool $tmp919 = $tmp918.value;
if ($tmp919) goto block59; else goto block60;
block59:;
// line 324
panda$core$MutableString* $tmp920 = *(&local30);
panda$core$MutableString$append$panda$core$String($tmp920, &$s921);
goto block56;
block60:;
panda$core$Int64 $tmp922 = (panda$core$Int64) {2};
panda$core$Bit $tmp923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp911, $tmp922);
bool $tmp924 = $tmp923.value;
if ($tmp924) goto block61; else goto block56;
block61:;
// line 325
panda$core$MutableString* $tmp925 = *(&local30);
panda$core$MutableString$append$panda$core$String($tmp925, &$s926);
goto block56;
block56:;
// line 327
panda$core$MutableString* $tmp927 = *(&local30);
panda$core$String* $tmp928 = *(&local26);
panda$core$MutableString$append$panda$core$String($tmp927, $tmp928);
// line 328
org$pandalanguage$pandac$FixedArray* $tmp929 = *(&local27);
panda$core$Bit $tmp930 = panda$core$Bit$init$builtin_bit($tmp929 != NULL);
bool $tmp931 = $tmp930.value;
if ($tmp931) goto block62; else goto block63;
block62:;
// line 329
panda$core$MutableString* $tmp932 = *(&local30);
org$pandalanguage$pandac$FixedArray* $tmp933 = *(&local27);
panda$core$Bit $tmp934 = panda$core$Bit$init$builtin_bit($tmp933 != NULL);
bool $tmp935 = $tmp934.value;
if ($tmp935) goto block64; else goto block65;
block65:;
panda$core$Int64 $tmp936 = (panda$core$Int64) {329};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s937, $tmp936, &$s938);
abort(); // unreachable
block64:;
ITable* $tmp939 = ((panda$collections$CollectionView*) $tmp933)->$class->itable;
while ($tmp939->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp939 = $tmp939->next;
}
$fn941 $tmp940 = $tmp939->methods[1];
panda$core$String* $tmp942 = $tmp940(((panda$collections$CollectionView*) $tmp933));
panda$core$String* $tmp943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s944, $tmp942);
panda$core$String* $tmp945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp943, &$s946);
panda$core$MutableString$append$panda$core$String($tmp932, $tmp945);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp945));
// unreffing REF($966:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp943));
// unreffing REF($965:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp942));
// unreffing REF($964:panda.core.String)
goto block63;
block63:;
// line 331
org$pandalanguage$pandac$FixedArray* $tmp947 = *(&local28);
panda$core$Bit $tmp948 = panda$core$Bit$init$builtin_bit($tmp947 != NULL);
bool $tmp949 = $tmp948.value;
if ($tmp949) goto block66; else goto block67;
block66:;
// line 332
panda$core$MutableString* $tmp950 = *(&local30);
org$pandalanguage$pandac$FixedArray* $tmp951 = *(&local28);
panda$core$Bit $tmp952 = panda$core$Bit$init$builtin_bit($tmp951 != NULL);
bool $tmp953 = $tmp952.value;
if ($tmp953) goto block68; else goto block69;
block69:;
panda$core$Int64 $tmp954 = (panda$core$Int64) {332};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s955, $tmp954, &$s956);
abort(); // unreachable
block68:;
ITable* $tmp957 = ((panda$collections$CollectionView*) $tmp951)->$class->itable;
while ($tmp957->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp957 = $tmp957->next;
}
$fn959 $tmp958 = $tmp957->methods[1];
panda$core$String* $tmp960 = $tmp958(((panda$collections$CollectionView*) $tmp951));
panda$core$String* $tmp961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s962, $tmp960);
panda$core$String* $tmp963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp961, &$s964);
panda$core$MutableString$append$panda$core$String($tmp950, $tmp963);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp963));
// unreffing REF($998:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp961));
// unreffing REF($997:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp960));
// unreffing REF($996:panda.core.String)
goto block67;
block67:;
// line 334
panda$core$MutableString* $tmp965 = *(&local30);
panda$core$MutableString$append$panda$core$String($tmp965, &$s966);
// line 335
org$pandalanguage$pandac$FixedArray* $tmp967 = *(&local29);
ITable* $tmp968 = ((panda$collections$Iterable*) $tmp967)->$class->itable;
while ($tmp968->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp968 = $tmp968->next;
}
$fn970 $tmp969 = $tmp968->methods[0];
panda$collections$Iterator* $tmp971 = $tmp969(((panda$collections$Iterable*) $tmp967));
goto block70;
block70:;
ITable* $tmp972 = $tmp971->$class->itable;
while ($tmp972->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp972 = $tmp972->next;
}
$fn974 $tmp973 = $tmp972->methods[0];
panda$core$Bit $tmp975 = $tmp973($tmp971);
bool $tmp976 = $tmp975.value;
if ($tmp976) goto block72; else goto block71;
block71:;
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp977 = $tmp971->$class->itable;
while ($tmp977->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp977 = $tmp977->next;
}
$fn979 $tmp978 = $tmp977->methods[1];
panda$core$Object* $tmp980 = $tmp978($tmp971);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp980)));
org$pandalanguage$pandac$ASTNode* $tmp981 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp981));
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) $tmp980);
// line 336
panda$core$MutableString* $tmp982 = *(&local30);
org$pandalanguage$pandac$ASTNode* $tmp983 = *(&local32);
panda$core$String* $tmp984 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp983), &$s985);
panda$core$MutableString$append$panda$core$String($tmp982, $tmp984);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp984));
// unreffing REF($1041:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp980);
// unreffing REF($1029:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp986 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp986));
// unreffing m
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block70;
block72:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp971));
// unreffing REF($1018:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 338
panda$core$MutableString* $tmp987 = *(&local30);
panda$core$MutableString$append$panda$core$String($tmp987, &$s988);
// line 339
panda$core$MutableString* $tmp989 = *(&local30);
panda$core$String* $tmp990 = panda$core$MutableString$finish$R$panda$core$String($tmp989);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp990));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp990));
// unreffing REF($1063:panda.core.String)
panda$core$MutableString* $tmp991 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp991));
// unreffing result
*(&local30) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp992 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp992));
// unreffing members
*(&local29) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp993 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp993));
// unreffing supertypes
*(&local28) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp994 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp994));
// unreffing generics
*(&local27) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp995 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp995));
// unreffing name
*(&local26) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp996 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp996));
// unreffing annotations
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp997 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp997));
// unreffing dc
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp990;
block48:;
panda$core$Int64 $tmp998 = (panda$core$Int64) {13};
panda$core$Bit $tmp999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp998);
bool $tmp1000 = $tmp999.value;
if ($tmp1000) goto block73; else goto block74;
block73:;
org$pandalanguage$pandac$Position* $tmp1001 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1002 = *$tmp1001;
panda$core$String** $tmp1003 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1004 = *$tmp1003;
*(&local33) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1004));
panda$core$String* $tmp1005 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1005));
*(&local33) = $tmp1004;
// line 342
panda$core$String* $tmp1006 = *(&local33);
panda$core$Bit $tmp1007 = panda$core$Bit$init$builtin_bit($tmp1006 != NULL);
bool $tmp1008 = $tmp1007.value;
if ($tmp1008) goto block75; else goto block76;
block75:;
// line 343
panda$core$String* $tmp1009 = *(&local33);
panda$core$Bit $tmp1010 = panda$core$Bit$init$builtin_bit($tmp1009 != NULL);
bool $tmp1011 = $tmp1010.value;
if ($tmp1011) goto block77; else goto block78;
block78:;
panda$core$Int64 $tmp1012 = (panda$core$Int64) {343};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1013, $tmp1012, &$s1014);
abort(); // unreachable
block77:;
panda$core$String* $tmp1015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1016, $tmp1009);
panda$core$String* $tmp1017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1015, &$s1018);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1017));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1017));
// unreffing REF($1137:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1015));
// unreffing REF($1136:panda.core.String)
panda$core$String* $tmp1019 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
// unreffing label
*(&local33) = ((panda$core$String*) NULL);
return $tmp1017;
block76:;
// line 345
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1020));
panda$core$String* $tmp1021 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1021));
// unreffing label
*(&local33) = ((panda$core$String*) NULL);
return &$s1022;
block74:;
panda$core$Int64 $tmp1023 = (panda$core$Int64) {14};
panda$core$Bit $tmp1024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1023);
bool $tmp1025 = $tmp1024.value;
if ($tmp1025) goto block79; else goto block80;
block79:;
org$pandalanguage$pandac$Position* $tmp1026 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1027 = *$tmp1026;
org$pandalanguage$pandac$ASTNode** $tmp1028 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1029 = *$tmp1028;
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1029));
org$pandalanguage$pandac$ASTNode* $tmp1030 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1030));
*(&local34) = $tmp1029;
org$pandalanguage$pandac$ASTNode** $tmp1031 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1032 = *$tmp1031;
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1032));
org$pandalanguage$pandac$ASTNode* $tmp1033 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1033));
*(&local35) = $tmp1032;
// line 348
org$pandalanguage$pandac$ASTNode* $tmp1034 = *(&local35);
panda$core$Bit $tmp1035 = panda$core$Bit$init$builtin_bit($tmp1034 != NULL);
bool $tmp1036 = $tmp1035.value;
if ($tmp1036) goto block81; else goto block82;
block81:;
// line 349
org$pandalanguage$pandac$ASTNode* $tmp1037 = *(&local34);
$fn1039 $tmp1038 = ($fn1039) $tmp1037->$class->vtable[0];
panda$core$String* $tmp1040 = $tmp1038($tmp1037);
panda$core$String* $tmp1041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1040, &$s1042);
org$pandalanguage$pandac$ASTNode* $tmp1043 = *(&local35);
panda$core$Bit $tmp1044 = panda$core$Bit$init$builtin_bit($tmp1043 != NULL);
bool $tmp1045 = $tmp1044.value;
if ($tmp1045) goto block83; else goto block84;
block84:;
panda$core$Int64 $tmp1046 = (panda$core$Int64) {349};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1047, $tmp1046, &$s1048);
abort(); // unreachable
block83:;
panda$core$String* $tmp1049 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1041, ((panda$core$Object*) $tmp1043));
panda$core$String* $tmp1050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1049, &$s1051);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1050));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1050));
// unreffing REF($1206:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1049));
// unreffing REF($1205:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1041));
// unreffing REF($1195:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1040));
// unreffing REF($1194:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1052 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1052));
// unreffing value
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1053 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1053));
// unreffing target
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1050;
block82:;
// line 351
org$pandalanguage$pandac$ASTNode* $tmp1054 = *(&local34);
$fn1056 $tmp1055 = ($fn1056) $tmp1054->$class->vtable[0];
panda$core$String* $tmp1057 = $tmp1055($tmp1054);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1057));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1057));
// unreffing REF($1235:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1058 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1058));
// unreffing value
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1059 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1059));
// unreffing target
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1057;
block80:;
panda$core$Int64 $tmp1060 = (panda$core$Int64) {15};
panda$core$Bit $tmp1061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1060);
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block85; else goto block86;
block85:;
org$pandalanguage$pandac$Position* $tmp1063 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1064 = *$tmp1063;
panda$core$String** $tmp1065 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1066 = *$tmp1065;
*(&local36) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1066));
panda$core$String* $tmp1067 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1067));
*(&local36) = $tmp1066;
org$pandalanguage$pandac$FixedArray** $tmp1068 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1069 = *$tmp1068;
*(&local37) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1069));
org$pandalanguage$pandac$FixedArray* $tmp1070 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1070));
*(&local37) = $tmp1069;
org$pandalanguage$pandac$ASTNode** $tmp1071 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1072 = *$tmp1071;
*(&local38) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1072));
org$pandalanguage$pandac$ASTNode* $tmp1073 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1073));
*(&local38) = $tmp1072;
// line 354
panda$core$MutableString* $tmp1074 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1074);
*(&local39) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1074));
panda$core$MutableString* $tmp1075 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1075));
*(&local39) = $tmp1074;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1074));
// unreffing REF($1286:panda.core.MutableString)
// line 355
panda$core$String* $tmp1076 = *(&local36);
panda$core$Bit $tmp1077 = panda$core$Bit$init$builtin_bit($tmp1076 != NULL);
bool $tmp1078 = $tmp1077.value;
if ($tmp1078) goto block87; else goto block88;
block87:;
// line 356
panda$core$MutableString* $tmp1079 = *(&local39);
panda$core$String* $tmp1080 = *(&local36);
panda$core$Bit $tmp1081 = panda$core$Bit$init$builtin_bit($tmp1080 != NULL);
bool $tmp1082 = $tmp1081.value;
if ($tmp1082) goto block89; else goto block90;
block90:;
panda$core$Int64 $tmp1083 = (panda$core$Int64) {356};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1084, $tmp1083, &$s1085);
abort(); // unreachable
block89:;
panda$core$String* $tmp1086 = panda$core$String$convert$R$panda$core$String($tmp1080);
panda$core$String* $tmp1087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1086, &$s1088);
panda$core$MutableString$append$panda$core$String($tmp1079, $tmp1087);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1087));
// unreffing REF($1316:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1086));
// unreffing REF($1315:panda.core.String)
goto block88;
block88:;
// line 358
panda$core$MutableString* $tmp1089 = *(&local39);
panda$core$MutableString$append$panda$core$String($tmp1089, &$s1090);
// line 359
org$pandalanguage$pandac$FixedArray* $tmp1091 = *(&local37);
ITable* $tmp1092 = ((panda$collections$Iterable*) $tmp1091)->$class->itable;
while ($tmp1092->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1092 = $tmp1092->next;
}
$fn1094 $tmp1093 = $tmp1092->methods[0];
panda$collections$Iterator* $tmp1095 = $tmp1093(((panda$collections$Iterable*) $tmp1091));
goto block91;
block91:;
ITable* $tmp1096 = $tmp1095->$class->itable;
while ($tmp1096->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1096 = $tmp1096->next;
}
$fn1098 $tmp1097 = $tmp1096->methods[0];
panda$core$Bit $tmp1099 = $tmp1097($tmp1095);
bool $tmp1100 = $tmp1099.value;
if ($tmp1100) goto block93; else goto block92;
block92:;
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1101 = $tmp1095->$class->itable;
while ($tmp1101->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1101 = $tmp1101->next;
}
$fn1103 $tmp1102 = $tmp1101->methods[1];
panda$core$Object* $tmp1104 = $tmp1102($tmp1095);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1104)));
org$pandalanguage$pandac$ASTNode* $tmp1105 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1105));
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) $tmp1104);
// line 360
panda$core$MutableString* $tmp1106 = *(&local39);
org$pandalanguage$pandac$ASTNode* $tmp1107 = *(&local40);
panda$core$String* $tmp1108 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1107), &$s1109);
panda$core$MutableString$append$panda$core$String($tmp1106, $tmp1108);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1108));
// unreffing REF($1356:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1104);
// unreffing REF($1344:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1110 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1110));
// unreffing s
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block91;
block93:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1095));
// unreffing REF($1333:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 362
panda$core$MutableString* $tmp1111 = *(&local39);
org$pandalanguage$pandac$ASTNode* $tmp1112 = *(&local38);
panda$core$String* $tmp1113 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1114, ((panda$core$Object*) $tmp1112));
panda$core$String* $tmp1115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1113, &$s1116);
panda$core$MutableString$append$panda$core$String($tmp1111, $tmp1115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1115));
// unreffing REF($1378:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1113));
// unreffing REF($1377:panda.core.String)
// line 363
panda$core$MutableString* $tmp1117 = *(&local39);
panda$core$String* $tmp1118 = panda$core$MutableString$finish$R$panda$core$String($tmp1117);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1118));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1118));
// unreffing REF($1388:panda.core.String)
panda$core$MutableString* $tmp1119 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1119));
// unreffing result
*(&local39) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1120 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1120));
// unreffing test
*(&local38) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1121 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1121));
// unreffing statements
*(&local37) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1122 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1122));
// unreffing label
*(&local36) = ((panda$core$String*) NULL);
return $tmp1118;
block86:;
panda$core$Int64 $tmp1123 = (panda$core$Int64) {16};
panda$core$Bit $tmp1124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1123);
bool $tmp1125 = $tmp1124.value;
if ($tmp1125) goto block94; else goto block95;
block94:;
org$pandalanguage$pandac$Position* $tmp1126 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1127 = *$tmp1126;
org$pandalanguage$pandac$ASTNode** $tmp1128 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1129 = *$tmp1128;
*(&local41) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1129));
org$pandalanguage$pandac$ASTNode* $tmp1130 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1130));
*(&local41) = $tmp1129;
panda$core$String** $tmp1131 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp1132 = *$tmp1131;
*(&local42) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1132));
panda$core$String* $tmp1133 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1133));
*(&local42) = $tmp1132;
// line 366
org$pandalanguage$pandac$ASTNode* $tmp1134 = *(&local41);
$fn1136 $tmp1135 = ($fn1136) $tmp1134->$class->vtable[0];
panda$core$String* $tmp1137 = $tmp1135($tmp1134);
panda$core$String* $tmp1138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1137, &$s1139);
panda$core$String* $tmp1140 = *(&local42);
panda$core$String* $tmp1141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1138, $tmp1140);
panda$core$String* $tmp1142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1141, &$s1143);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1142));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1142));
// unreffing REF($1446:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1141));
// unreffing REF($1445:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1138));
// unreffing REF($1443:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1137));
// unreffing REF($1442:panda.core.String)
panda$core$String* $tmp1144 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1144));
// unreffing field
*(&local42) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1145 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1145));
// unreffing base
*(&local41) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1142;
block95:;
panda$core$Int64 $tmp1146 = (panda$core$Int64) {17};
panda$core$Bit $tmp1147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1146);
bool $tmp1148 = $tmp1147.value;
if ($tmp1148) goto block96; else goto block97;
block96:;
org$pandalanguage$pandac$Position* $tmp1149 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1150 = *$tmp1149;
org$pandalanguage$pandac$ASTNode** $tmp1151 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1152 = *$tmp1151;
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1152));
org$pandalanguage$pandac$ASTNode* $tmp1153 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1153));
*(&local43) = $tmp1152;
panda$core$String** $tmp1154 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp1155 = *$tmp1154;
*(&local44) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1155));
panda$core$String* $tmp1156 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1156));
*(&local44) = $tmp1155;
org$pandalanguage$pandac$FixedArray** $tmp1157 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp1158 = *$tmp1157;
*(&local45) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1158));
org$pandalanguage$pandac$FixedArray* $tmp1159 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1159));
*(&local45) = $tmp1158;
// line 369
org$pandalanguage$pandac$ASTNode* $tmp1160 = *(&local43);
$fn1162 $tmp1161 = ($fn1162) $tmp1160->$class->vtable[0];
panda$core$String* $tmp1163 = $tmp1161($tmp1160);
panda$core$String* $tmp1164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1163, &$s1165);
panda$core$String* $tmp1166 = *(&local44);
panda$core$String* $tmp1167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1164, $tmp1166);
panda$core$String* $tmp1168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1167, &$s1169);
org$pandalanguage$pandac$FixedArray* $tmp1170 = *(&local45);
ITable* $tmp1171 = ((panda$collections$CollectionView*) $tmp1170)->$class->itable;
while ($tmp1171->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1171 = $tmp1171->next;
}
$fn1173 $tmp1172 = $tmp1171->methods[2];
panda$core$String* $tmp1174 = $tmp1172(((panda$collections$CollectionView*) $tmp1170), &$s1175);
panda$core$String* $tmp1176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1168, $tmp1174);
panda$core$String* $tmp1177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1176, &$s1178);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1177));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1177));
// unreffing REF($1518:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1176));
// unreffing REF($1517:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1174));
// unreffing REF($1516:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1168));
// unreffing REF($1512:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1167));
// unreffing REF($1511:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1164));
// unreffing REF($1509:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1163));
// unreffing REF($1508:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp1179 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1179));
// unreffing types
*(&local45) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1180 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1180));
// unreffing field
*(&local44) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1181 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1181));
// unreffing base
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1177;
block97:;
panda$core$Int64 $tmp1182 = (panda$core$Int64) {18};
panda$core$Bit $tmp1183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1182);
bool $tmp1184 = $tmp1183.value;
if ($tmp1184) goto block98; else goto block99;
block98:;
org$pandalanguage$pandac$Position* $tmp1185 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1186 = *$tmp1185;
org$pandalanguage$pandac$ASTNode** $tmp1187 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1188 = *$tmp1187;
*(&local46) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1188));
org$pandalanguage$pandac$ASTNode* $tmp1189 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1189));
*(&local46) = $tmp1188;
org$pandalanguage$pandac$FixedArray** $tmp1190 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1191 = *$tmp1190;
*(&local47) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1191));
org$pandalanguage$pandac$FixedArray* $tmp1192 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1192));
*(&local47) = $tmp1191;
org$pandalanguage$pandac$ASTNode** $tmp1193 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1194 = *$tmp1193;
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1194));
org$pandalanguage$pandac$ASTNode* $tmp1195 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1195));
*(&local48) = $tmp1194;
// line 372
panda$core$MutableString* $tmp1196 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1196);
*(&local49) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1196));
panda$core$MutableString* $tmp1197 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1197));
*(&local49) = $tmp1196;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1196));
// unreffing REF($1592:panda.core.MutableString)
// line 373
org$pandalanguage$pandac$ASTNode* $tmp1198 = *(&local46);
panda$core$Bit $tmp1199 = panda$core$Bit$init$builtin_bit($tmp1198 != NULL);
bool $tmp1200 = $tmp1199.value;
if ($tmp1200) goto block100; else goto block101;
block100:;
// line 374
panda$core$MutableString* $tmp1201 = *(&local49);
org$pandalanguage$pandac$ASTNode* $tmp1202 = *(&local46);
panda$core$Bit $tmp1203 = panda$core$Bit$init$builtin_bit($tmp1202 != NULL);
bool $tmp1204 = $tmp1203.value;
if ($tmp1204) goto block102; else goto block103;
block103:;
panda$core$Int64 $tmp1205 = (panda$core$Int64) {374};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1206, $tmp1205, &$s1207);
abort(); // unreachable
block102:;
panda$core$String* $tmp1208 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1202), &$s1209);
panda$core$MutableString$append$panda$core$String($tmp1201, $tmp1208);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($1621:panda.core.String)
goto block101;
block101:;
// line 376
org$pandalanguage$pandac$FixedArray* $tmp1210 = *(&local47);
ITable* $tmp1211 = ((panda$collections$Iterable*) $tmp1210)->$class->itable;
while ($tmp1211->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1211 = $tmp1211->next;
}
$fn1213 $tmp1212 = $tmp1211->methods[0];
panda$collections$Iterator* $tmp1214 = $tmp1212(((panda$collections$Iterable*) $tmp1210));
goto block104;
block104:;
ITable* $tmp1215 = $tmp1214->$class->itable;
while ($tmp1215->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1215 = $tmp1215->next;
}
$fn1217 $tmp1216 = $tmp1215->methods[0];
panda$core$Bit $tmp1218 = $tmp1216($tmp1214);
bool $tmp1219 = $tmp1218.value;
if ($tmp1219) goto block106; else goto block105;
block105:;
*(&local50) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1220 = $tmp1214->$class->itable;
while ($tmp1220->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1220 = $tmp1220->next;
}
$fn1222 $tmp1221 = $tmp1220->methods[1];
panda$core$Object* $tmp1223 = $tmp1221($tmp1214);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1223)));
org$pandalanguage$pandac$ASTNode* $tmp1224 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1224));
*(&local50) = ((org$pandalanguage$pandac$ASTNode*) $tmp1223);
// line 377
panda$core$MutableString* $tmp1225 = *(&local49);
org$pandalanguage$pandac$ASTNode* $tmp1226 = *(&local50);
panda$core$String* $tmp1227 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1226), &$s1228);
panda$core$MutableString$append$panda$core$String($tmp1225, $tmp1227);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1227));
// unreffing REF($1655:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1223);
// unreffing REF($1643:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1229 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1229));
// unreffing a
*(&local50) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block104;
block106:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1214));
// unreffing REF($1632:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 379
panda$core$MutableString* $tmp1230 = *(&local49);
org$pandalanguage$pandac$ASTNode* $tmp1231 = *(&local48);
panda$core$MutableString$append$panda$core$Object($tmp1230, ((panda$core$Object*) $tmp1231));
// line 380
panda$core$MutableString* $tmp1232 = *(&local49);
panda$core$String* $tmp1233 = panda$core$MutableString$finish$R$panda$core$String($tmp1232);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1233));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1233));
// unreffing REF($1679:panda.core.String)
panda$core$MutableString* $tmp1234 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1234));
// unreffing result
*(&local49) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1235 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1235));
// unreffing decl
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1236 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1236));
// unreffing annotations
*(&local47) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1237 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1237));
// unreffing dc
*(&local46) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1233;
block99:;
panda$core$Int64 $tmp1238 = (panda$core$Int64) {19};
panda$core$Bit $tmp1239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1238);
bool $tmp1240 = $tmp1239.value;
if ($tmp1240) goto block107; else goto block108;
block107:;
org$pandalanguage$pandac$FixedArray** $tmp1241 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 0);
org$pandalanguage$pandac$FixedArray* $tmp1242 = *$tmp1241;
*(&local51) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1242));
org$pandalanguage$pandac$FixedArray* $tmp1243 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1243));
*(&local51) = $tmp1242;
// line 383
panda$core$MutableString* $tmp1244 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1244);
*(&local52) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1244));
panda$core$MutableString* $tmp1245 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1245));
*(&local52) = $tmp1244;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1244));
// unreffing REF($1720:panda.core.MutableString)
// line 384
org$pandalanguage$pandac$FixedArray* $tmp1246 = *(&local51);
ITable* $tmp1247 = ((panda$collections$Iterable*) $tmp1246)->$class->itable;
while ($tmp1247->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1247 = $tmp1247->next;
}
$fn1249 $tmp1248 = $tmp1247->methods[0];
panda$collections$Iterator* $tmp1250 = $tmp1248(((panda$collections$Iterable*) $tmp1246));
goto block109;
block109:;
ITable* $tmp1251 = $tmp1250->$class->itable;
while ($tmp1251->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1251 = $tmp1251->next;
}
$fn1253 $tmp1252 = $tmp1251->methods[0];
panda$core$Bit $tmp1254 = $tmp1252($tmp1250);
bool $tmp1255 = $tmp1254.value;
if ($tmp1255) goto block111; else goto block110;
block110:;
*(&local53) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1256 = $tmp1250->$class->itable;
while ($tmp1256->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1256 = $tmp1256->next;
}
$fn1258 $tmp1257 = $tmp1256->methods[1];
panda$core$Object* $tmp1259 = $tmp1257($tmp1250);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1259)));
org$pandalanguage$pandac$ASTNode* $tmp1260 = *(&local53);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1260));
*(&local53) = ((org$pandalanguage$pandac$ASTNode*) $tmp1259);
// line 385
panda$core$MutableString* $tmp1261 = *(&local52);
org$pandalanguage$pandac$ASTNode* $tmp1262 = *(&local53);
panda$core$String* $tmp1263 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1262), &$s1264);
panda$core$MutableString$append$panda$core$String($tmp1261, $tmp1263);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1263));
// unreffing REF($1760:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1259);
// unreffing REF($1748:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1265 = *(&local53);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1265));
// unreffing e
*(&local53) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block109;
block111:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1250));
// unreffing REF($1737:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 387
panda$core$MutableString* $tmp1266 = *(&local52);
panda$core$String* $tmp1267 = panda$core$MutableString$finish$R$panda$core$String($tmp1266);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1267));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1267));
// unreffing REF($1779:panda.core.String)
panda$core$MutableString* $tmp1268 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1268));
// unreffing result
*(&local52) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1269 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1269));
// unreffing entries
*(&local51) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1267;
block108:;
panda$core$Int64 $tmp1270 = (panda$core$Int64) {20};
panda$core$Bit $tmp1271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1270);
bool $tmp1272 = $tmp1271.value;
if ($tmp1272) goto block112; else goto block113;
block112:;
org$pandalanguage$pandac$Position* $tmp1273 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1274 = *$tmp1273;
panda$core$String** $tmp1275 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1276 = *$tmp1275;
*(&local54) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1276));
panda$core$String* $tmp1277 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1277));
*(&local54) = $tmp1276;
org$pandalanguage$pandac$ASTNode** $tmp1278 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1279 = *$tmp1278;
*(&local55) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1279));
org$pandalanguage$pandac$ASTNode* $tmp1280 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1280));
*(&local55) = $tmp1279;
org$pandalanguage$pandac$ASTNode** $tmp1281 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1282 = *$tmp1281;
*(&local56) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1282));
org$pandalanguage$pandac$ASTNode* $tmp1283 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1283));
*(&local56) = $tmp1282;
org$pandalanguage$pandac$FixedArray** $tmp1284 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 40);
org$pandalanguage$pandac$FixedArray* $tmp1285 = *$tmp1284;
*(&local57) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1285));
org$pandalanguage$pandac$FixedArray* $tmp1286 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1286));
*(&local57) = $tmp1285;
// line 390
panda$core$MutableString* $tmp1287 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1287);
*(&local58) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1287));
panda$core$MutableString* $tmp1288 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1288));
*(&local58) = $tmp1287;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1287));
// unreffing REF($1839:panda.core.MutableString)
// line 391
panda$core$String* $tmp1289 = *(&local54);
panda$core$Bit $tmp1290 = panda$core$Bit$init$builtin_bit($tmp1289 != NULL);
bool $tmp1291 = $tmp1290.value;
if ($tmp1291) goto block114; else goto block115;
block114:;
// line 392
panda$core$MutableString* $tmp1292 = *(&local58);
panda$core$String* $tmp1293 = *(&local54);
panda$core$Bit $tmp1294 = panda$core$Bit$init$builtin_bit($tmp1293 != NULL);
bool $tmp1295 = $tmp1294.value;
if ($tmp1295) goto block116; else goto block117;
block117:;
panda$core$Int64 $tmp1296 = (panda$core$Int64) {392};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1297, $tmp1296, &$s1298);
abort(); // unreachable
block116:;
panda$core$String* $tmp1299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1293, &$s1300);
panda$core$MutableString$append$panda$core$String($tmp1292, $tmp1299);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1299));
// unreffing REF($1868:panda.core.String)
goto block115;
block115:;
// line 394
panda$core$MutableString* $tmp1301 = *(&local58);
org$pandalanguage$pandac$ASTNode* $tmp1302 = *(&local55);
panda$core$String* $tmp1303 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1304, ((panda$core$Object*) $tmp1302));
panda$core$String* $tmp1305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1303, &$s1306);
org$pandalanguage$pandac$ASTNode* $tmp1307 = *(&local56);
panda$core$String* $tmp1308 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1305, ((panda$core$Object*) $tmp1307));
panda$core$String* $tmp1309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1308, &$s1310);
panda$core$MutableString$append$panda$core$String($tmp1301, $tmp1309);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1309));
// unreffing REF($1883:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1308));
// unreffing REF($1882:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1305));
// unreffing REF($1879:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1303));
// unreffing REF($1878:panda.core.String)
// line 395
org$pandalanguage$pandac$FixedArray* $tmp1311 = *(&local57);
ITable* $tmp1312 = ((panda$collections$Iterable*) $tmp1311)->$class->itable;
while ($tmp1312->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1312 = $tmp1312->next;
}
$fn1314 $tmp1313 = $tmp1312->methods[0];
panda$collections$Iterator* $tmp1315 = $tmp1313(((panda$collections$Iterable*) $tmp1311));
goto block118;
block118:;
ITable* $tmp1316 = $tmp1315->$class->itable;
while ($tmp1316->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1316 = $tmp1316->next;
}
$fn1318 $tmp1317 = $tmp1316->methods[0];
panda$core$Bit $tmp1319 = $tmp1317($tmp1315);
bool $tmp1320 = $tmp1319.value;
if ($tmp1320) goto block120; else goto block119;
block119:;
*(&local59) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1321 = $tmp1315->$class->itable;
while ($tmp1321->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1321 = $tmp1321->next;
}
$fn1323 $tmp1322 = $tmp1321->methods[1];
panda$core$Object* $tmp1324 = $tmp1322($tmp1315);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1324)));
org$pandalanguage$pandac$ASTNode* $tmp1325 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1325));
*(&local59) = ((org$pandalanguage$pandac$ASTNode*) $tmp1324);
// line 396
panda$core$MutableString* $tmp1326 = *(&local58);
org$pandalanguage$pandac$ASTNode* $tmp1327 = *(&local59);
panda$core$String* $tmp1328 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1327), &$s1329);
panda$core$MutableString$append$panda$core$String($tmp1326, $tmp1328);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1328));
// unreffing REF($1925:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1324);
// unreffing REF($1913:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1330 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1330));
// unreffing s
*(&local59) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block118;
block120:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1315));
// unreffing REF($1902:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 398
panda$core$MutableString* $tmp1331 = *(&local58);
panda$core$MutableString$append$panda$core$String($tmp1331, &$s1332);
// line 399
panda$core$MutableString* $tmp1333 = *(&local58);
panda$core$String* $tmp1334 = panda$core$MutableString$finish$R$panda$core$String($tmp1333);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1334));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1334));
// unreffing REF($1947:panda.core.String)
panda$core$MutableString* $tmp1335 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1335));
// unreffing result
*(&local58) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1336 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1336));
// unreffing statements
*(&local57) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1337 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1337));
// unreffing list
*(&local56) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1338 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1338));
// unreffing target
*(&local55) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1339 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1339));
// unreffing label
*(&local54) = ((panda$core$String*) NULL);
return $tmp1334;
block113:;
panda$core$Int64 $tmp1340 = (panda$core$Int64) {21};
panda$core$Bit $tmp1341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1340);
bool $tmp1342 = $tmp1341.value;
if ($tmp1342) goto block121; else goto block122;
block121:;
org$pandalanguage$pandac$Position* $tmp1343 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1344 = *$tmp1343;
panda$core$String** $tmp1345 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1346 = *$tmp1345;
*(&local60) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1346));
panda$core$String* $tmp1347 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1347));
*(&local60) = $tmp1346;
org$pandalanguage$pandac$FixedArray** $tmp1348 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1349 = *$tmp1348;
*(&local61) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1349));
org$pandalanguage$pandac$FixedArray* $tmp1350 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1350));
*(&local61) = $tmp1349;
// line 402
panda$core$String* $tmp1351 = *(&local60);
panda$core$String* $tmp1352 = panda$core$String$convert$R$panda$core$String($tmp1351);
panda$core$String* $tmp1353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1352, &$s1354);
org$pandalanguage$pandac$FixedArray* $tmp1355 = *(&local61);
ITable* $tmp1356 = ((panda$collections$CollectionView*) $tmp1355)->$class->itable;
while ($tmp1356->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1356 = $tmp1356->next;
}
$fn1358 $tmp1357 = $tmp1356->methods[1];
panda$core$String* $tmp1359 = $tmp1357(((panda$collections$CollectionView*) $tmp1355));
panda$core$String* $tmp1360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1353, $tmp1359);
panda$core$String* $tmp1361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1360, &$s1362);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1361));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1361));
// unreffing REF($2012:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1360));
// unreffing REF($2011:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1359));
// unreffing REF($2010:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1353));
// unreffing REF($2006:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1352));
// unreffing REF($2005:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp1363 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1363));
// unreffing subtypes
*(&local61) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1364 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1364));
// unreffing name
*(&local60) = ((panda$core$String*) NULL);
return $tmp1361;
block122:;
panda$core$Int64 $tmp1365 = (panda$core$Int64) {22};
panda$core$Bit $tmp1366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1365);
bool $tmp1367 = $tmp1366.value;
if ($tmp1367) goto block123; else goto block124;
block123:;
org$pandalanguage$pandac$Position* $tmp1368 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1369 = *$tmp1368;
panda$core$String** $tmp1370 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1371 = *$tmp1370;
*(&local62) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1371));
panda$core$String* $tmp1372 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1372));
*(&local62) = $tmp1371;
// line 405
panda$core$String* $tmp1373 = *(&local62);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1373));
panda$core$String* $tmp1374 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1374));
// unreffing name
*(&local62) = ((panda$core$String*) NULL);
return $tmp1373;
block124:;
panda$core$Int64 $tmp1375 = (panda$core$Int64) {23};
panda$core$Bit $tmp1376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1375);
bool $tmp1377 = $tmp1376.value;
if ($tmp1377) goto block125; else goto block126;
block125:;
org$pandalanguage$pandac$Position* $tmp1378 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1379 = *$tmp1378;
panda$core$String** $tmp1380 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1381 = *$tmp1380;
*(&local63) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1381));
panda$core$String* $tmp1382 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1382));
*(&local63) = $tmp1381;
org$pandalanguage$pandac$FixedArray** $tmp1383 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1384 = *$tmp1383;
*(&local64) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1384));
org$pandalanguage$pandac$FixedArray* $tmp1385 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1385));
*(&local64) = $tmp1384;
// line 408
panda$core$String* $tmp1386 = *(&local63);
panda$core$String* $tmp1387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1388, $tmp1386);
panda$core$String* $tmp1389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1387, &$s1390);
org$pandalanguage$pandac$FixedArray* $tmp1391 = *(&local64);
ITable* $tmp1392 = ((panda$collections$CollectionView*) $tmp1391)->$class->itable;
while ($tmp1392->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1392 = $tmp1392->next;
}
$fn1394 $tmp1393 = $tmp1392->methods[1];
panda$core$String* $tmp1395 = $tmp1393(((panda$collections$CollectionView*) $tmp1391));
panda$core$String* $tmp1396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1389, $tmp1395);
panda$core$String* $tmp1397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1396, &$s1398);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1397));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1397));
// unreffing REF($2099:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1396));
// unreffing REF($2098:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1395));
// unreffing REF($2097:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1389));
// unreffing REF($2093:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1387));
// unreffing REF($2092:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp1399 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1399));
// unreffing types
*(&local64) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1400 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1400));
// unreffing name
*(&local63) = ((panda$core$String*) NULL);
return $tmp1397;
block126:;
panda$core$Int64 $tmp1401 = (panda$core$Int64) {24};
panda$core$Bit $tmp1402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1401);
bool $tmp1403 = $tmp1402.value;
if ($tmp1403) goto block127; else goto block128;
block127:;
org$pandalanguage$pandac$Position* $tmp1404 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1405 = *$tmp1404;
org$pandalanguage$pandac$ASTNode** $tmp1406 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1407 = *$tmp1406;
*(&local65) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1407));
org$pandalanguage$pandac$ASTNode* $tmp1408 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1408));
*(&local65) = $tmp1407;
org$pandalanguage$pandac$FixedArray** $tmp1409 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1410 = *$tmp1409;
*(&local66) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1410));
org$pandalanguage$pandac$FixedArray* $tmp1411 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1411));
*(&local66) = $tmp1410;
org$pandalanguage$pandac$ASTNode** $tmp1412 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1413 = *$tmp1412;
*(&local67) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1413));
org$pandalanguage$pandac$ASTNode* $tmp1414 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1414));
*(&local67) = $tmp1413;
// line 411
panda$core$MutableString* $tmp1415 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$ASTNode* $tmp1416 = *(&local65);
panda$core$String* $tmp1417 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1418, ((panda$core$Object*) $tmp1416));
panda$core$String* $tmp1419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1417, &$s1420);
panda$core$MutableString$init$panda$core$String($tmp1415, $tmp1419);
*(&local68) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1415));
panda$core$MutableString* $tmp1421 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1421));
*(&local68) = $tmp1415;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1419));
// unreffing REF($2166:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1417));
// unreffing REF($2165:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1415));
// unreffing REF($2162:panda.core.MutableString)
// line 412
org$pandalanguage$pandac$FixedArray* $tmp1422 = *(&local66);
ITable* $tmp1423 = ((panda$collections$Iterable*) $tmp1422)->$class->itable;
while ($tmp1423->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1423 = $tmp1423->next;
}
$fn1425 $tmp1424 = $tmp1423->methods[0];
panda$collections$Iterator* $tmp1426 = $tmp1424(((panda$collections$Iterable*) $tmp1422));
goto block129;
block129:;
ITable* $tmp1427 = $tmp1426->$class->itable;
while ($tmp1427->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1427 = $tmp1427->next;
}
$fn1429 $tmp1428 = $tmp1427->methods[0];
panda$core$Bit $tmp1430 = $tmp1428($tmp1426);
bool $tmp1431 = $tmp1430.value;
if ($tmp1431) goto block131; else goto block130;
block130:;
*(&local69) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1432 = $tmp1426->$class->itable;
while ($tmp1432->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1432 = $tmp1432->next;
}
$fn1434 $tmp1433 = $tmp1432->methods[1];
panda$core$Object* $tmp1435 = $tmp1433($tmp1426);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1435)));
org$pandalanguage$pandac$ASTNode* $tmp1436 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1436));
*(&local69) = ((org$pandalanguage$pandac$ASTNode*) $tmp1435);
// line 413
panda$core$MutableString* $tmp1437 = *(&local68);
org$pandalanguage$pandac$ASTNode* $tmp1438 = *(&local69);
panda$core$String* $tmp1439 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1438), &$s1440);
panda$core$MutableString$append$panda$core$String($tmp1437, $tmp1439);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1439));
// unreffing REF($2212:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1435);
// unreffing REF($2200:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1441 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1441));
// unreffing s
*(&local69) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block129;
block131:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1426));
// unreffing REF($2189:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 415
panda$core$MutableString* $tmp1442 = *(&local68);
panda$core$MutableString$append$panda$core$String($tmp1442, &$s1443);
// line 416
org$pandalanguage$pandac$ASTNode* $tmp1444 = *(&local67);
panda$core$Bit $tmp1445 = panda$core$Bit$init$builtin_bit($tmp1444 != NULL);
bool $tmp1446 = $tmp1445.value;
if ($tmp1446) goto block132; else goto block133;
block132:;
// line 417
panda$core$MutableString* $tmp1447 = *(&local68);
org$pandalanguage$pandac$ASTNode* $tmp1448 = *(&local67);
panda$core$Bit $tmp1449 = panda$core$Bit$init$builtin_bit($tmp1448 != NULL);
bool $tmp1450 = $tmp1449.value;
if ($tmp1450) goto block134; else goto block135;
block135:;
panda$core$Int64 $tmp1451 = (panda$core$Int64) {417};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1452, $tmp1451, &$s1453);
abort(); // unreachable
block134:;
panda$core$String* $tmp1454 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1455, ((panda$core$Object*) $tmp1448));
panda$core$String* $tmp1456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1454, &$s1457);
panda$core$MutableString$append$panda$core$String($tmp1447, $tmp1456);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1456));
// unreffing REF($2250:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1454));
// unreffing REF($2249:panda.core.String)
goto block133;
block133:;
// line 419
panda$core$MutableString* $tmp1458 = *(&local68);
panda$core$String* $tmp1459 = panda$core$MutableString$finish$R$panda$core$String($tmp1458);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1459));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1459));
// unreffing REF($2261:panda.core.String)
panda$core$MutableString* $tmp1460 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1460));
// unreffing result
*(&local68) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1461 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1461));
// unreffing ifFalse
*(&local67) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1462 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1462));
// unreffing ifTrue
*(&local66) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1463 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1463));
// unreffing test
*(&local65) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1459;
block128:;
panda$core$Int64 $tmp1464 = (panda$core$Int64) {25};
panda$core$Bit $tmp1465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1464);
bool $tmp1466 = $tmp1465.value;
if ($tmp1466) goto block136; else goto block137;
block136:;
org$pandalanguage$pandac$Position* $tmp1467 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1468 = *$tmp1467;
panda$core$UInt64* $tmp1469 = (panda$core$UInt64*) (param0->$data + 16);
panda$core$UInt64 $tmp1470 = *$tmp1469;
*(&local70) = $tmp1470;
// line 422
panda$core$UInt64 $tmp1471 = *(&local70);
panda$core$String* $tmp1472 = panda$core$UInt64$convert$R$panda$core$String($tmp1471);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1472));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1472));
// unreffing REF($2299:panda.core.String)
return $tmp1472;
block137:;
panda$core$Int64 $tmp1473 = (panda$core$Int64) {26};
panda$core$Bit $tmp1474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1473);
bool $tmp1475 = $tmp1474.value;
if ($tmp1475) goto block138; else goto block139;
block138:;
org$pandalanguage$pandac$Position* $tmp1476 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1477 = *$tmp1476;
org$pandalanguage$pandac$IR$Value** $tmp1478 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp1479 = *$tmp1478;
*(&local71) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1479));
org$pandalanguage$pandac$IR$Value* $tmp1480 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1480));
*(&local71) = $tmp1479;
// line 425
org$pandalanguage$pandac$IR$Value* $tmp1481 = *(&local71);
$fn1483 $tmp1482 = ($fn1483) $tmp1481->$class->vtable[0];
panda$core$String* $tmp1484 = $tmp1482($tmp1481);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1484));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1484));
// unreffing REF($2324:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp1485 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1485));
// unreffing value
*(&local71) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp1484;
block139:;
panda$core$Int64 $tmp1486 = (panda$core$Int64) {27};
panda$core$Bit $tmp1487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1486);
bool $tmp1488 = $tmp1487.value;
if ($tmp1488) goto block140; else goto block141;
block140:;
org$pandalanguage$pandac$Position* $tmp1489 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1490 = *$tmp1489;
panda$core$String** $tmp1491 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1492 = *$tmp1491;
*(&local72) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1492));
panda$core$String* $tmp1493 = *(&local72);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1493));
*(&local72) = $tmp1492;
org$pandalanguage$pandac$FixedArray** $tmp1494 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1495 = *$tmp1494;
*(&local73) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1495));
org$pandalanguage$pandac$FixedArray* $tmp1496 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1496));
*(&local73) = $tmp1495;
// line 428
panda$core$MutableString* $tmp1497 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1497);
*(&local74) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1497));
panda$core$MutableString* $tmp1498 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1498));
*(&local74) = $tmp1497;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1497));
// unreffing REF($2361:panda.core.MutableString)
// line 429
panda$core$String* $tmp1499 = *(&local72);
panda$core$Bit $tmp1500 = panda$core$Bit$init$builtin_bit($tmp1499 != NULL);
bool $tmp1501 = $tmp1500.value;
if ($tmp1501) goto block142; else goto block143;
block142:;
// line 430
panda$core$MutableString* $tmp1502 = *(&local74);
panda$core$String* $tmp1503 = *(&local72);
panda$core$Bit $tmp1504 = panda$core$Bit$init$builtin_bit($tmp1503 != NULL);
bool $tmp1505 = $tmp1504.value;
if ($tmp1505) goto block144; else goto block145;
block145:;
panda$core$Int64 $tmp1506 = (panda$core$Int64) {430};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1507, $tmp1506, &$s1508);
abort(); // unreachable
block144:;
panda$core$String* $tmp1509 = panda$core$String$convert$R$panda$core$String($tmp1503);
panda$core$String* $tmp1510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1509, &$s1511);
panda$core$MutableString$append$panda$core$String($tmp1502, $tmp1510);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1510));
// unreffing REF($2391:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1509));
// unreffing REF($2390:panda.core.String)
goto block143;
block143:;
// line 432
panda$core$MutableString* $tmp1512 = *(&local74);
panda$core$MutableString$append$panda$core$String($tmp1512, &$s1513);
// line 433
org$pandalanguage$pandac$FixedArray* $tmp1514 = *(&local73);
ITable* $tmp1515 = ((panda$collections$Iterable*) $tmp1514)->$class->itable;
while ($tmp1515->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1515 = $tmp1515->next;
}
$fn1517 $tmp1516 = $tmp1515->methods[0];
panda$collections$Iterator* $tmp1518 = $tmp1516(((panda$collections$Iterable*) $tmp1514));
goto block146;
block146:;
ITable* $tmp1519 = $tmp1518->$class->itable;
while ($tmp1519->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1519 = $tmp1519->next;
}
$fn1521 $tmp1520 = $tmp1519->methods[0];
panda$core$Bit $tmp1522 = $tmp1520($tmp1518);
bool $tmp1523 = $tmp1522.value;
if ($tmp1523) goto block148; else goto block147;
block147:;
*(&local75) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1524 = $tmp1518->$class->itable;
while ($tmp1524->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1524 = $tmp1524->next;
}
$fn1526 $tmp1525 = $tmp1524->methods[1];
panda$core$Object* $tmp1527 = $tmp1525($tmp1518);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1527)));
org$pandalanguage$pandac$ASTNode* $tmp1528 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1528));
*(&local75) = ((org$pandalanguage$pandac$ASTNode*) $tmp1527);
// line 434
panda$core$MutableString* $tmp1529 = *(&local74);
org$pandalanguage$pandac$ASTNode* $tmp1530 = *(&local75);
panda$core$String* $tmp1531 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1530), &$s1532);
panda$core$MutableString$append$panda$core$String($tmp1529, $tmp1531);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1531));
// unreffing REF($2431:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1527);
// unreffing REF($2419:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1533 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1533));
// unreffing s
*(&local75) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block146;
block148:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1518));
// unreffing REF($2408:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 436
panda$core$MutableString* $tmp1534 = *(&local74);
panda$core$MutableString$append$panda$core$String($tmp1534, &$s1535);
// line 437
panda$core$MutableString* $tmp1536 = *(&local74);
panda$core$String* $tmp1537 = panda$core$MutableString$finish$R$panda$core$String($tmp1536);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1537));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1537));
// unreffing REF($2453:panda.core.String)
panda$core$MutableString* $tmp1538 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1538));
// unreffing result
*(&local74) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1539 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1539));
// unreffing statements
*(&local73) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1540 = *(&local72);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1540));
// unreffing label
*(&local72) = ((panda$core$String*) NULL);
return $tmp1537;
block141:;
panda$core$Int64 $tmp1541 = (panda$core$Int64) {28};
panda$core$Bit $tmp1542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1541);
bool $tmp1543 = $tmp1542.value;
if ($tmp1543) goto block149; else goto block150;
block149:;
org$pandalanguage$pandac$Position* $tmp1544 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1545 = *$tmp1544;
org$pandalanguage$pandac$ASTNode** $tmp1546 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1547 = *$tmp1546;
*(&local76) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1547));
org$pandalanguage$pandac$ASTNode* $tmp1548 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1548));
*(&local76) = $tmp1547;
org$pandalanguage$pandac$FixedArray** $tmp1549 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1550 = *$tmp1549;
*(&local77) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1550));
org$pandalanguage$pandac$FixedArray* $tmp1551 = *(&local77);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1551));
*(&local77) = $tmp1550;
org$pandalanguage$pandac$FixedArray** $tmp1552 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp1553 = *$tmp1552;
*(&local78) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1553));
org$pandalanguage$pandac$FixedArray* $tmp1554 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1554));
*(&local78) = $tmp1553;
// line 440
panda$core$MutableString* $tmp1555 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$ASTNode* $tmp1556 = *(&local76);
panda$core$String* $tmp1557 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1558, ((panda$core$Object*) $tmp1556));
panda$core$String* $tmp1559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1557, &$s1560);
panda$core$MutableString$init$panda$core$String($tmp1555, $tmp1559);
*(&local79) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1555));
panda$core$MutableString* $tmp1561 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1561));
*(&local79) = $tmp1555;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1559));
// unreffing REF($2513:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1557));
// unreffing REF($2512:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1555));
// unreffing REF($2509:panda.core.MutableString)
// line 441
org$pandalanguage$pandac$FixedArray* $tmp1562 = *(&local77);
ITable* $tmp1563 = ((panda$collections$Iterable*) $tmp1562)->$class->itable;
while ($tmp1563->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1563 = $tmp1563->next;
}
$fn1565 $tmp1564 = $tmp1563->methods[0];
panda$collections$Iterator* $tmp1566 = $tmp1564(((panda$collections$Iterable*) $tmp1562));
goto block151;
block151:;
ITable* $tmp1567 = $tmp1566->$class->itable;
while ($tmp1567->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1567 = $tmp1567->next;
}
$fn1569 $tmp1568 = $tmp1567->methods[0];
panda$core$Bit $tmp1570 = $tmp1568($tmp1566);
bool $tmp1571 = $tmp1570.value;
if ($tmp1571) goto block153; else goto block152;
block152:;
*(&local80) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1572 = $tmp1566->$class->itable;
while ($tmp1572->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1572 = $tmp1572->next;
}
$fn1574 $tmp1573 = $tmp1572->methods[1];
panda$core$Object* $tmp1575 = $tmp1573($tmp1566);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1575)));
org$pandalanguage$pandac$ASTNode* $tmp1576 = *(&local80);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1576));
*(&local80) = ((org$pandalanguage$pandac$ASTNode*) $tmp1575);
// line 442
panda$core$MutableString* $tmp1577 = *(&local79);
org$pandalanguage$pandac$ASTNode* $tmp1578 = *(&local80);
panda$core$String* $tmp1579 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1578), &$s1580);
panda$core$MutableString$append$panda$core$String($tmp1577, $tmp1579);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1579));
// unreffing REF($2559:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1575);
// unreffing REF($2547:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1581 = *(&local80);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1581));
// unreffing w
*(&local80) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block151;
block153:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1566));
// unreffing REF($2536:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 444
org$pandalanguage$pandac$FixedArray* $tmp1582 = *(&local78);
panda$core$Bit $tmp1583 = panda$core$Bit$init$builtin_bit($tmp1582 != NULL);
bool $tmp1584 = $tmp1583.value;
if ($tmp1584) goto block154; else goto block155;
block154:;
// line 445
panda$core$MutableString* $tmp1585 = *(&local79);
org$pandalanguage$pandac$FixedArray* $tmp1586 = *(&local78);
panda$core$Bit $tmp1587 = panda$core$Bit$init$builtin_bit($tmp1586 != NULL);
bool $tmp1588 = $tmp1587.value;
if ($tmp1588) goto block156; else goto block157;
block157:;
panda$core$Int64 $tmp1589 = (panda$core$Int64) {445};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1590, $tmp1589, &$s1591);
abort(); // unreachable
block156:;
panda$core$String* $tmp1592 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1586), &$s1593);
panda$core$MutableString$append$panda$core$String($tmp1585, $tmp1592);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1592));
// unreffing REF($2593:panda.core.String)
goto block155;
block155:;
// line 447
panda$core$MutableString* $tmp1594 = *(&local79);
panda$core$MutableString$append$panda$core$String($tmp1594, &$s1595);
// line 448
panda$core$MutableString* $tmp1596 = *(&local79);
panda$core$String* $tmp1597 = panda$core$MutableString$finish$R$panda$core$String($tmp1596);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1597));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1597));
// unreffing REF($2604:panda.core.String)
panda$core$MutableString* $tmp1598 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1598));
// unreffing result
*(&local79) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1599 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1599));
// unreffing other
*(&local78) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1600 = *(&local77);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1600));
// unreffing whens
*(&local77) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1601 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1601));
// unreffing value
*(&local76) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1597;
block150:;
panda$core$Int64 $tmp1602 = (panda$core$Int64) {29};
panda$core$Bit $tmp1603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1602);
bool $tmp1604 = $tmp1603.value;
if ($tmp1604) goto block158; else goto block159;
block158:;
org$pandalanguage$pandac$Position* $tmp1605 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1606 = *$tmp1605;
org$pandalanguage$pandac$ASTNode** $tmp1607 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1608 = *$tmp1607;
*(&local81) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1608));
org$pandalanguage$pandac$ASTNode* $tmp1609 = *(&local81);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1609));
*(&local81) = $tmp1608;
org$pandalanguage$pandac$FixedArray** $tmp1610 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1611 = *$tmp1610;
*(&local82) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1611));
org$pandalanguage$pandac$FixedArray* $tmp1612 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1612));
*(&local82) = $tmp1611;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp1613 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp1614 = *$tmp1613;
*(&local83) = $tmp1614;
panda$core$String** $tmp1615 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp1616 = *$tmp1615;
*(&local84) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1616));
panda$core$String* $tmp1617 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1617));
*(&local84) = $tmp1616;
org$pandalanguage$pandac$FixedArray** $tmp1618 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp1619 = *$tmp1618;
*(&local85) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1619));
org$pandalanguage$pandac$FixedArray* $tmp1620 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1620));
*(&local85) = $tmp1619;
org$pandalanguage$pandac$FixedArray** $tmp1621 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp1622 = *$tmp1621;
*(&local86) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1622));
org$pandalanguage$pandac$FixedArray* $tmp1623 = *(&local86);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1623));
*(&local86) = $tmp1622;
org$pandalanguage$pandac$ASTNode** $tmp1624 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp1625 = *$tmp1624;
*(&local87) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1625));
org$pandalanguage$pandac$ASTNode* $tmp1626 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1626));
*(&local87) = $tmp1625;
org$pandalanguage$pandac$FixedArray** $tmp1627 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 72);
org$pandalanguage$pandac$FixedArray* $tmp1628 = *$tmp1627;
*(&local88) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
org$pandalanguage$pandac$FixedArray* $tmp1629 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1629));
*(&local88) = $tmp1628;
// line 452
panda$core$MutableString* $tmp1630 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1630);
*(&local89) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1630));
panda$core$MutableString* $tmp1631 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1631));
*(&local89) = $tmp1630;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1630));
// unreffing REF($2704:panda.core.MutableString)
// line 453
org$pandalanguage$pandac$ASTNode* $tmp1632 = *(&local81);
panda$core$Bit $tmp1633 = panda$core$Bit$init$builtin_bit($tmp1632 != NULL);
bool $tmp1634 = $tmp1633.value;
if ($tmp1634) goto block160; else goto block161;
block160:;
// line 454
panda$core$MutableString* $tmp1635 = *(&local89);
org$pandalanguage$pandac$ASTNode* $tmp1636 = *(&local81);
panda$core$Bit $tmp1637 = panda$core$Bit$init$builtin_bit($tmp1636 != NULL);
bool $tmp1638 = $tmp1637.value;
if ($tmp1638) goto block162; else goto block163;
block163:;
panda$core$Int64 $tmp1639 = (panda$core$Int64) {454};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1640, $tmp1639, &$s1641);
abort(); // unreachable
block162:;
panda$core$String* $tmp1642 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1636), &$s1643);
panda$core$MutableString$append$panda$core$String($tmp1635, $tmp1642);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1642));
// unreffing REF($2733:panda.core.String)
goto block161;
block161:;
// line 456
org$pandalanguage$pandac$FixedArray* $tmp1644 = *(&local82);
ITable* $tmp1645 = ((panda$collections$Iterable*) $tmp1644)->$class->itable;
while ($tmp1645->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1645 = $tmp1645->next;
}
$fn1647 $tmp1646 = $tmp1645->methods[0];
panda$collections$Iterator* $tmp1648 = $tmp1646(((panda$collections$Iterable*) $tmp1644));
goto block164;
block164:;
ITable* $tmp1649 = $tmp1648->$class->itable;
while ($tmp1649->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1649 = $tmp1649->next;
}
$fn1651 $tmp1650 = $tmp1649->methods[0];
panda$core$Bit $tmp1652 = $tmp1650($tmp1648);
bool $tmp1653 = $tmp1652.value;
if ($tmp1653) goto block166; else goto block165;
block165:;
*(&local90) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1654 = $tmp1648->$class->itable;
while ($tmp1654->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1654 = $tmp1654->next;
}
$fn1656 $tmp1655 = $tmp1654->methods[1];
panda$core$Object* $tmp1657 = $tmp1655($tmp1648);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1657)));
org$pandalanguage$pandac$ASTNode* $tmp1658 = *(&local90);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1658));
*(&local90) = ((org$pandalanguage$pandac$ASTNode*) $tmp1657);
// line 457
panda$core$MutableString* $tmp1659 = *(&local89);
org$pandalanguage$pandac$ASTNode* $tmp1660 = *(&local90);
panda$core$String* $tmp1661 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1660), &$s1662);
panda$core$MutableString$append$panda$core$String($tmp1659, $tmp1661);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1661));
// unreffing REF($2767:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1657);
// unreffing REF($2755:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1663 = *(&local90);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1663));
// unreffing a
*(&local90) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block164;
block166:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1648));
// unreffing REF($2744:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 459
org$pandalanguage$pandac$MethodDecl$Kind $tmp1664 = *(&local83);
panda$core$Int64 $tmp1665 = $tmp1664.$rawValue;
panda$core$Int64 $tmp1666 = (panda$core$Int64) {0};
panda$core$Bit $tmp1667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1665, $tmp1666);
bool $tmp1668 = $tmp1667.value;
if ($tmp1668) goto block168; else goto block169;
block168:;
// line 460
panda$core$MutableString* $tmp1669 = *(&local89);
panda$core$MutableString$append$panda$core$String($tmp1669, &$s1670);
goto block167;
block169:;
panda$core$Int64 $tmp1671 = (panda$core$Int64) {1};
panda$core$Bit $tmp1672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1665, $tmp1671);
bool $tmp1673 = $tmp1672.value;
if ($tmp1673) goto block170; else goto block171;
block170:;
// line 461
panda$core$MutableString* $tmp1674 = *(&local89);
panda$core$MutableString$append$panda$core$String($tmp1674, &$s1675);
goto block167;
block171:;
panda$core$Int64 $tmp1676 = (panda$core$Int64) {2};
panda$core$Bit $tmp1677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1665, $tmp1676);
bool $tmp1678 = $tmp1677.value;
if ($tmp1678) goto block172; else goto block167;
block172:;
goto block167;
block167:;
// line 464
panda$core$MutableString* $tmp1679 = *(&local89);
panda$core$String* $tmp1680 = *(&local84);
panda$core$MutableString$append$panda$core$String($tmp1679, $tmp1680);
// line 465
org$pandalanguage$pandac$FixedArray* $tmp1681 = *(&local85);
panda$core$Bit $tmp1682 = panda$core$Bit$init$builtin_bit($tmp1681 != NULL);
bool $tmp1683 = $tmp1682.value;
if ($tmp1683) goto block173; else goto block174;
block173:;
// line 466
panda$core$MutableString* $tmp1684 = *(&local89);
org$pandalanguage$pandac$FixedArray* $tmp1685 = *(&local85);
panda$core$Bit $tmp1686 = panda$core$Bit$init$builtin_bit($tmp1685 != NULL);
bool $tmp1687 = $tmp1686.value;
if ($tmp1687) goto block175; else goto block176;
block176:;
panda$core$Int64 $tmp1688 = (panda$core$Int64) {466};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1689, $tmp1688, &$s1690);
abort(); // unreachable
block175:;
ITable* $tmp1691 = ((panda$collections$CollectionView*) $tmp1685)->$class->itable;
while ($tmp1691->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1691 = $tmp1691->next;
}
$fn1693 $tmp1692 = $tmp1691->methods[1];
panda$core$String* $tmp1694 = $tmp1692(((panda$collections$CollectionView*) $tmp1685));
panda$core$String* $tmp1695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1696, $tmp1694);
panda$core$String* $tmp1697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1695, &$s1698);
panda$core$MutableString$append$panda$core$String($tmp1684, $tmp1697);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1697));
// unreffing REF($2832:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1695));
// unreffing REF($2831:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1694));
// unreffing REF($2830:panda.core.String)
goto block174;
block174:;
// line 468
panda$core$MutableString* $tmp1699 = *(&local89);
org$pandalanguage$pandac$FixedArray* $tmp1700 = *(&local86);
ITable* $tmp1701 = ((panda$collections$CollectionView*) $tmp1700)->$class->itable;
while ($tmp1701->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1701 = $tmp1701->next;
}
$fn1703 $tmp1702 = $tmp1701->methods[1];
panda$core$String* $tmp1704 = $tmp1702(((panda$collections$CollectionView*) $tmp1700));
panda$core$String* $tmp1705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1706, $tmp1704);
panda$core$String* $tmp1707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1705, &$s1708);
panda$core$MutableString$append$panda$core$String($tmp1699, $tmp1707);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1707));
// unreffing REF($2851:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1705));
// unreffing REF($2850:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1704));
// unreffing REF($2849:panda.core.String)
// line 469
org$pandalanguage$pandac$ASTNode* $tmp1709 = *(&local87);
panda$core$Bit $tmp1710 = panda$core$Bit$init$builtin_bit($tmp1709 != NULL);
bool $tmp1711 = $tmp1710.value;
if ($tmp1711) goto block177; else goto block178;
block177:;
// line 470
panda$core$MutableString* $tmp1712 = *(&local89);
org$pandalanguage$pandac$ASTNode* $tmp1713 = *(&local87);
panda$core$Bit $tmp1714 = panda$core$Bit$init$builtin_bit($tmp1713 != NULL);
bool $tmp1715 = $tmp1714.value;
if ($tmp1715) goto block179; else goto block180;
block180:;
panda$core$Int64 $tmp1716 = (panda$core$Int64) {470};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1717, $tmp1716, &$s1718);
abort(); // unreachable
block179:;
panda$core$String* $tmp1719 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1720, ((panda$core$Object*) $tmp1713));
panda$core$String* $tmp1721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1719, &$s1722);
panda$core$MutableString$append$panda$core$String($tmp1712, $tmp1721);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1721));
// unreffing REF($2880:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1719));
// unreffing REF($2879:panda.core.String)
goto block178;
block178:;
// line 472
org$pandalanguage$pandac$FixedArray* $tmp1723 = *(&local88);
panda$core$Bit $tmp1724 = panda$core$Bit$init$builtin_bit($tmp1723 != NULL);
bool $tmp1725 = $tmp1724.value;
if ($tmp1725) goto block181; else goto block182;
block181:;
// line 473
panda$core$MutableString* $tmp1726 = *(&local89);
panda$core$MutableString$append$panda$core$String($tmp1726, &$s1727);
// line 474
org$pandalanguage$pandac$FixedArray* $tmp1728 = *(&local88);
panda$core$Bit $tmp1729 = panda$core$Bit$init$builtin_bit($tmp1728 != NULL);
bool $tmp1730 = $tmp1729.value;
if ($tmp1730) goto block183; else goto block184;
block184:;
panda$core$Int64 $tmp1731 = (panda$core$Int64) {474};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1732, $tmp1731, &$s1733);
abort(); // unreachable
block183:;
ITable* $tmp1734 = ((panda$collections$Iterable*) $tmp1728)->$class->itable;
while ($tmp1734->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1734 = $tmp1734->next;
}
$fn1736 $tmp1735 = $tmp1734->methods[0];
panda$collections$Iterator* $tmp1737 = $tmp1735(((panda$collections$Iterable*) $tmp1728));
goto block185;
block185:;
ITable* $tmp1738 = $tmp1737->$class->itable;
while ($tmp1738->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1738 = $tmp1738->next;
}
$fn1740 $tmp1739 = $tmp1738->methods[0];
panda$core$Bit $tmp1741 = $tmp1739($tmp1737);
bool $tmp1742 = $tmp1741.value;
if ($tmp1742) goto block187; else goto block186;
block186:;
*(&local91) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1743 = $tmp1737->$class->itable;
while ($tmp1743->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1743 = $tmp1743->next;
}
$fn1745 $tmp1744 = $tmp1743->methods[1];
panda$core$Object* $tmp1746 = $tmp1744($tmp1737);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1746)));
org$pandalanguage$pandac$ASTNode* $tmp1747 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1747));
*(&local91) = ((org$pandalanguage$pandac$ASTNode*) $tmp1746);
// line 475
panda$core$MutableString* $tmp1748 = *(&local89);
org$pandalanguage$pandac$ASTNode* $tmp1749 = *(&local91);
panda$core$String* $tmp1750 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1749), &$s1751);
panda$core$MutableString$append$panda$core$String($tmp1748, $tmp1750);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1750));
// unreffing REF($2933:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1746);
// unreffing REF($2921:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1752 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1752));
// unreffing s
*(&local91) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block185;
block187:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1737));
// unreffing REF($2910:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 477
panda$core$MutableString* $tmp1753 = *(&local89);
panda$core$MutableString$append$panda$core$String($tmp1753, &$s1754);
goto block182;
block182:;
// line 479
panda$core$MutableString* $tmp1755 = *(&local89);
panda$core$String* $tmp1756 = panda$core$MutableString$finish$R$panda$core$String($tmp1755);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1756));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1756));
// unreffing REF($2956:panda.core.String)
panda$core$MutableString* $tmp1757 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1757));
// unreffing result
*(&local89) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1758 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1758));
// unreffing statements
*(&local88) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1759 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1759));
// unreffing returnType
*(&local87) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1760 = *(&local86);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1760));
// unreffing parameters
*(&local86) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1761 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1761));
// unreffing generics
*(&local85) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1762 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1762));
// unreffing name
*(&local84) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1763 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1763));
// unreffing annotations
*(&local82) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1764 = *(&local81);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1764));
// unreffing dc
*(&local81) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1756;
block159:;
panda$core$Int64 $tmp1765 = (panda$core$Int64) {30};
panda$core$Bit $tmp1766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1765);
bool $tmp1767 = $tmp1766.value;
if ($tmp1767) goto block188; else goto block189;
block188:;
org$pandalanguage$pandac$Position* $tmp1768 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1769 = *$tmp1768;
org$pandalanguage$pandac$parser$Token$Kind* $tmp1770 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp1771 = *$tmp1770;
*(&local92) = $tmp1771;
org$pandalanguage$pandac$FixedArray** $tmp1772 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1773 = *$tmp1772;
*(&local93) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1773));
org$pandalanguage$pandac$FixedArray* $tmp1774 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1774));
*(&local93) = $tmp1773;
org$pandalanguage$pandac$ASTNode** $tmp1775 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1776 = *$tmp1775;
*(&local94) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1776));
org$pandalanguage$pandac$ASTNode* $tmp1777 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1777));
*(&local94) = $tmp1776;
// line 482
*(&local95) = ((panda$core$String*) NULL);
// line 483
org$pandalanguage$pandac$parser$Token$Kind $tmp1778 = *(&local92);
panda$core$Int64 $tmp1779 = $tmp1778.$rawValue;
panda$core$Int64 $tmp1780 = (panda$core$Int64) {91};
panda$core$Bit $tmp1781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1779, $tmp1780);
bool $tmp1782 = $tmp1781.value;
if ($tmp1782) goto block191; else goto block192;
block191:;
// line 485
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1783));
panda$core$String* $tmp1784 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1784));
*(&local95) = &$s1785;
goto block190;
block192:;
panda$core$Int64 $tmp1786 = (panda$core$Int64) {92};
panda$core$Bit $tmp1787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1779, $tmp1786);
bool $tmp1788 = $tmp1787.value;
if ($tmp1788) goto block193; else goto block194;
block193:;
// line 488
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1789));
panda$core$String* $tmp1790 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1790));
*(&local95) = &$s1791;
goto block190;
block194:;
panda$core$Int64 $tmp1792 = (panda$core$Int64) {93};
panda$core$Bit $tmp1793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1779, $tmp1792);
bool $tmp1794 = $tmp1793.value;
if ($tmp1794) goto block195; else goto block196;
block195:;
// line 491
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1795));
panda$core$String* $tmp1796 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1796));
*(&local95) = &$s1797;
goto block190;
block196:;
panda$core$Int64 $tmp1798 = (panda$core$Int64) {94};
panda$core$Bit $tmp1799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1779, $tmp1798);
bool $tmp1800 = $tmp1799.value;
if ($tmp1800) goto block197; else goto block190;
block197:;
// line 494
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1801));
panda$core$String* $tmp1802 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1802));
*(&local95) = &$s1803;
goto block190;
block190:;
// line 497
org$pandalanguage$pandac$FixedArray* $tmp1804 = *(&local93);
ITable* $tmp1805 = ((panda$collections$CollectionView*) $tmp1804)->$class->itable;
while ($tmp1805->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1805 = $tmp1805->next;
}
$fn1807 $tmp1806 = $tmp1805->methods[1];
panda$core$String* $tmp1808 = $tmp1806(((panda$collections$CollectionView*) $tmp1804));
panda$core$String* $tmp1809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1810, $tmp1808);
panda$core$String* $tmp1811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1809, &$s1812);
panda$core$String* $tmp1813 = *(&local95);
panda$core$String* $tmp1814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1811, $tmp1813);
panda$core$String* $tmp1815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1814, &$s1816);
*(&local96) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1815));
panda$core$String* $tmp1817 = *(&local96);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1817));
*(&local96) = $tmp1815;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1815));
// unreffing REF($3092:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1814));
// unreffing REF($3091:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1811));
// unreffing REF($3089:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1809));
// unreffing REF($3088:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1808));
// unreffing REF($3087:panda.core.String)
// line 498
org$pandalanguage$pandac$ASTNode* $tmp1818 = *(&local94);
panda$core$Bit $tmp1819 = panda$core$Bit$init$builtin_bit($tmp1818 != NULL);
bool $tmp1820 = $tmp1819.value;
if ($tmp1820) goto block198; else goto block199;
block198:;
// line 499
panda$core$String* $tmp1821 = *(&local96);
panda$core$String* $tmp1822 = panda$core$String$convert$R$panda$core$String($tmp1821);
panda$core$String* $tmp1823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1822, &$s1824);
org$pandalanguage$pandac$ASTNode* $tmp1825 = *(&local94);
panda$core$Bit $tmp1826 = panda$core$Bit$init$builtin_bit($tmp1825 != NULL);
bool $tmp1827 = $tmp1826.value;
if ($tmp1827) goto block200; else goto block201;
block201:;
panda$core$Int64 $tmp1828 = (panda$core$Int64) {499};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1829, $tmp1828, &$s1830);
abort(); // unreachable
block200:;
panda$core$String* $tmp1831 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1823, ((panda$core$Object*) $tmp1825));
panda$core$String* $tmp1832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1831, &$s1833);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1832));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1832));
// unreffing REF($3135:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1831));
// unreffing REF($3134:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1823));
// unreffing REF($3124:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1822));
// unreffing REF($3123:panda.core.String)
panda$core$String* $tmp1834 = *(&local96);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1834));
// unreffing partial
*(&local96) = ((panda$core$String*) NULL);
panda$core$String* $tmp1835 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1835));
// unreffing yield
*(&local95) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1836 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1836));
// unreffing returnType
*(&local94) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1837 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1837));
// unreffing paramTypes
*(&local93) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1832;
block199:;
// line 501
panda$core$String* $tmp1838 = *(&local96);
panda$core$String* $tmp1839 = panda$core$String$convert$R$panda$core$String($tmp1838);
panda$core$String* $tmp1840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1839, &$s1841);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1840));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1840));
// unreffing REF($3174:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1839));
// unreffing REF($3173:panda.core.String)
panda$core$String* $tmp1842 = *(&local96);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1842));
// unreffing partial
*(&local96) = ((panda$core$String*) NULL);
panda$core$String* $tmp1843 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1843));
// unreffing yield
*(&local95) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1844 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1844));
// unreffing returnType
*(&local94) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1845 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1845));
// unreffing paramTypes
*(&local93) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1840;
block189:;
panda$core$Int64 $tmp1846 = (panda$core$Int64) {31};
panda$core$Bit $tmp1847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1846);
bool $tmp1848 = $tmp1847.value;
if ($tmp1848) goto block202; else goto block203;
block202:;
// line 504
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1849));
return &$s1850;
block203:;
panda$core$Int64 $tmp1851 = (panda$core$Int64) {32};
panda$core$Bit $tmp1852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1851);
bool $tmp1853 = $tmp1852.value;
if ($tmp1853) goto block204; else goto block205;
block204:;
org$pandalanguage$pandac$Position* $tmp1854 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1855 = *$tmp1854;
org$pandalanguage$pandac$ASTNode** $tmp1856 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1857 = *$tmp1856;
*(&local97) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1857));
org$pandalanguage$pandac$ASTNode* $tmp1858 = *(&local97);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1858));
*(&local97) = $tmp1857;
// line 507
org$pandalanguage$pandac$ASTNode* $tmp1859 = *(&local97);
panda$core$String* $tmp1860 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1859), &$s1861);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1860));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1860));
// unreffing REF($3230:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1862 = *(&local97);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1862));
// unreffing base
*(&local97) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1860;
block205:;
panda$core$Int64 $tmp1863 = (panda$core$Int64) {33};
panda$core$Bit $tmp1864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1863);
bool $tmp1865 = $tmp1864.value;
if ($tmp1865) goto block206; else goto block207;
block206:;
org$pandalanguage$pandac$Position* $tmp1866 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1867 = *$tmp1866;
panda$core$String** $tmp1868 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1869 = *$tmp1868;
*(&local98) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1869));
panda$core$String* $tmp1870 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1870));
*(&local98) = $tmp1869;
// line 510
panda$core$String* $tmp1871 = *(&local98);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1871));
panda$core$String* $tmp1872 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1872));
// unreffing name
*(&local98) = ((panda$core$String*) NULL);
return $tmp1871;
block207:;
panda$core$Int64 $tmp1873 = (panda$core$Int64) {34};
panda$core$Bit $tmp1874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1873);
bool $tmp1875 = $tmp1874.value;
if ($tmp1875) goto block208; else goto block209;
block208:;
org$pandalanguage$pandac$Position* $tmp1876 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1877 = *$tmp1876;
panda$core$String** $tmp1878 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1879 = *$tmp1878;
*(&local99) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1879));
panda$core$String* $tmp1880 = *(&local99);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1880));
*(&local99) = $tmp1879;
org$pandalanguage$pandac$ASTNode** $tmp1881 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1882 = *$tmp1881;
*(&local100) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1882));
org$pandalanguage$pandac$ASTNode* $tmp1883 = *(&local100);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1883));
*(&local100) = $tmp1882;
// line 513
panda$core$String* $tmp1884 = *(&local99);
panda$core$String* $tmp1885 = panda$core$String$convert$R$panda$core$String($tmp1884);
panda$core$String* $tmp1886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1885, &$s1887);
org$pandalanguage$pandac$ASTNode* $tmp1888 = *(&local100);
panda$core$String* $tmp1889 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1886, ((panda$core$Object*) $tmp1888));
panda$core$String* $tmp1890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1889, &$s1891);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1890));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1890));
// unreffing REF($3298:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1889));
// unreffing REF($3297:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1886));
// unreffing REF($3294:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1885));
// unreffing REF($3293:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1892 = *(&local100);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1892));
// unreffing type
*(&local100) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1893 = *(&local99);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1893));
// unreffing name
*(&local99) = ((panda$core$String*) NULL);
return $tmp1890;
block209:;
panda$core$Int64 $tmp1894 = (panda$core$Int64) {35};
panda$core$Bit $tmp1895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1894);
bool $tmp1896 = $tmp1895.value;
if ($tmp1896) goto block210; else goto block211;
block210:;
org$pandalanguage$pandac$Position* $tmp1897 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1898 = *$tmp1897;
org$pandalanguage$pandac$parser$Token$Kind* $tmp1899 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp1900 = *$tmp1899;
*(&local101) = $tmp1900;
org$pandalanguage$pandac$ASTNode** $tmp1901 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1902 = *$tmp1901;
*(&local102) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1902));
org$pandalanguage$pandac$ASTNode* $tmp1903 = *(&local102);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1903));
*(&local102) = $tmp1902;
// line 516
org$pandalanguage$pandac$parser$Token$Kind $tmp1904 = *(&local101);
panda$core$String* $tmp1905 = org$pandalanguage$pandac$parser$Token$Kind$convert$R$panda$core$String($tmp1904);
panda$core$String* $tmp1906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1905, &$s1907);
org$pandalanguage$pandac$ASTNode* $tmp1908 = *(&local102);
panda$core$String* $tmp1909 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1906, ((panda$core$Object*) $tmp1908));
panda$core$String* $tmp1910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1909, &$s1911);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1910));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1910));
// unreffing REF($3349:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1909));
// unreffing REF($3348:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1906));
// unreffing REF($3345:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1905));
// unreffing REF($3344:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1912 = *(&local102);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1912));
// unreffing base
*(&local102) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1910;
block211:;
panda$core$Int64 $tmp1913 = (panda$core$Int64) {36};
panda$core$Bit $tmp1914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1913);
bool $tmp1915 = $tmp1914.value;
if ($tmp1915) goto block212; else goto block213;
block212:;
org$pandalanguage$pandac$Position* $tmp1916 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1917 = *$tmp1916;
org$pandalanguage$pandac$ASTNode** $tmp1918 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1919 = *$tmp1918;
*(&local103) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1919));
org$pandalanguage$pandac$ASTNode* $tmp1920 = *(&local103);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1920));
*(&local103) = $tmp1919;
panda$core$Bit* $tmp1921 = (panda$core$Bit*) (param0->$data + 24);
panda$core$Bit $tmp1922 = *$tmp1921;
*(&local104) = $tmp1922;
org$pandalanguage$pandac$ASTNode** $tmp1923 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 25);
org$pandalanguage$pandac$ASTNode* $tmp1924 = *$tmp1923;
*(&local105) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1924));
org$pandalanguage$pandac$ASTNode* $tmp1925 = *(&local105);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1925));
*(&local105) = $tmp1924;
org$pandalanguage$pandac$ASTNode** $tmp1926 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 33);
org$pandalanguage$pandac$ASTNode* $tmp1927 = *$tmp1926;
*(&local106) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1927));
org$pandalanguage$pandac$ASTNode* $tmp1928 = *(&local106);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1928));
*(&local106) = $tmp1927;
// line 519
panda$core$MutableString* $tmp1929 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1929);
*(&local107) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1929));
panda$core$MutableString* $tmp1930 = *(&local107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1930));
*(&local107) = $tmp1929;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1929));
// unreffing REF($3407:panda.core.MutableString)
// line 520
org$pandalanguage$pandac$ASTNode* $tmp1931 = *(&local103);
panda$core$Bit $tmp1932 = panda$core$Bit$init$builtin_bit($tmp1931 != NULL);
bool $tmp1933 = $tmp1932.value;
if ($tmp1933) goto block214; else goto block215;
block214:;
// line 521
panda$core$MutableString* $tmp1934 = *(&local107);
org$pandalanguage$pandac$ASTNode* $tmp1935 = *(&local103);
panda$core$Bit $tmp1936 = panda$core$Bit$init$builtin_bit($tmp1935 != NULL);
bool $tmp1937 = $tmp1936.value;
if ($tmp1937) goto block216; else goto block217;
block217:;
panda$core$Int64 $tmp1938 = (panda$core$Int64) {521};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1939, $tmp1938, &$s1940);
abort(); // unreachable
block216:;
panda$core$MutableString$append$panda$core$Object($tmp1934, ((panda$core$Object*) $tmp1935));
goto block215;
block215:;
// line 523
panda$core$Bit $tmp1941 = *(&local104);
bool $tmp1942 = $tmp1941.value;
if ($tmp1942) goto block218; else goto block220;
block218:;
// line 524
panda$core$MutableString* $tmp1943 = *(&local107);
panda$core$MutableString$append$panda$core$String($tmp1943, &$s1944);
goto block219;
block220:;
// line 1
// line 527
panda$core$MutableString* $tmp1945 = *(&local107);
panda$core$MutableString$append$panda$core$String($tmp1945, &$s1946);
goto block219;
block219:;
// line 529
org$pandalanguage$pandac$ASTNode* $tmp1947 = *(&local105);
panda$core$Bit $tmp1948 = panda$core$Bit$init$builtin_bit($tmp1947 != NULL);
bool $tmp1949 = $tmp1948.value;
if ($tmp1949) goto block221; else goto block222;
block221:;
// line 530
panda$core$MutableString* $tmp1950 = *(&local107);
org$pandalanguage$pandac$ASTNode* $tmp1951 = *(&local105);
panda$core$Bit $tmp1952 = panda$core$Bit$init$builtin_bit($tmp1951 != NULL);
bool $tmp1953 = $tmp1952.value;
if ($tmp1953) goto block223; else goto block224;
block224:;
panda$core$Int64 $tmp1954 = (panda$core$Int64) {530};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1955, $tmp1954, &$s1956);
abort(); // unreachable
block223:;
panda$core$MutableString$append$panda$core$Object($tmp1950, ((panda$core$Object*) $tmp1951));
goto block222;
block222:;
// line 532
org$pandalanguage$pandac$ASTNode* $tmp1957 = *(&local106);
panda$core$Bit $tmp1958 = panda$core$Bit$init$builtin_bit($tmp1957 != NULL);
bool $tmp1959 = $tmp1958.value;
if ($tmp1959) goto block225; else goto block226;
block225:;
// line 533
panda$core$MutableString* $tmp1960 = *(&local107);
org$pandalanguage$pandac$ASTNode* $tmp1961 = *(&local106);
panda$core$Bit $tmp1962 = panda$core$Bit$init$builtin_bit($tmp1961 != NULL);
bool $tmp1963 = $tmp1962.value;
if ($tmp1963) goto block227; else goto block228;
block228:;
panda$core$Int64 $tmp1964 = (panda$core$Int64) {533};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1965, $tmp1964, &$s1966);
abort(); // unreachable
block227:;
panda$core$String* $tmp1967 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1968, ((panda$core$Object*) $tmp1961));
panda$core$MutableString$append$panda$core$String($tmp1960, $tmp1967);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1967));
// unreffing REF($3487:panda.core.String)
goto block226;
block226:;
// line 535
panda$core$MutableString* $tmp1969 = *(&local107);
panda$core$String* $tmp1970 = panda$core$MutableString$finish$R$panda$core$String($tmp1969);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1970));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1970));
// unreffing REF($3495:panda.core.String)
panda$core$MutableString* $tmp1971 = *(&local107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1971));
// unreffing result
*(&local107) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1972 = *(&local106);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1972));
// unreffing step
*(&local106) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1973 = *(&local105);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1973));
// unreffing end
*(&local105) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1974 = *(&local103);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1974));
// unreffing start
*(&local103) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1970;
block213:;
panda$core$Int64 $tmp1975 = (panda$core$Int64) {37};
panda$core$Bit $tmp1976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1975);
bool $tmp1977 = $tmp1976.value;
if ($tmp1977) goto block229; else goto block230;
block229:;
org$pandalanguage$pandac$Position* $tmp1978 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1979 = *$tmp1978;
panda$core$Real64* $tmp1980 = (panda$core$Real64*) (param0->$data + 16);
panda$core$Real64 $tmp1981 = *$tmp1980;
*(&local108) = $tmp1981;
// line 538
panda$core$Real64 $tmp1982 = *(&local108);
panda$core$String* $tmp1983 = panda$core$Real64$convert$R$panda$core$String($tmp1982);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1983));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1983));
// unreffing REF($3533:panda.core.String)
return $tmp1983;
block230:;
panda$core$Int64 $tmp1984 = (panda$core$Int64) {38};
panda$core$Bit $tmp1985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1984);
bool $tmp1986 = $tmp1985.value;
if ($tmp1986) goto block231; else goto block232;
block231:;
org$pandalanguage$pandac$Position* $tmp1987 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1988 = *$tmp1987;
panda$core$String** $tmp1989 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1990 = *$tmp1989;
*(&local109) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1990));
panda$core$String* $tmp1991 = *(&local109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1991));
*(&local109) = $tmp1990;
// line 541
panda$core$String* $tmp1992 = *(&local109);
panda$core$String* $tmp1993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1994, $tmp1992);
panda$core$String* $tmp1995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1993, &$s1996);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1995));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1995));
// unreffing REF($3558:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1993));
// unreffing REF($3557:panda.core.String)
panda$core$String* $tmp1997 = *(&local109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1997));
// unreffing src
*(&local109) = ((panda$core$String*) NULL);
return $tmp1995;
block232:;
panda$core$Int64 $tmp1998 = (panda$core$Int64) {39};
panda$core$Bit $tmp1999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1998);
bool $tmp2000 = $tmp1999.value;
if ($tmp2000) goto block233; else goto block234;
block233:;
org$pandalanguage$pandac$Position* $tmp2001 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2002 = *$tmp2001;
org$pandalanguage$pandac$ASTNode** $tmp2003 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2004 = *$tmp2003;
*(&local110) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2004));
org$pandalanguage$pandac$ASTNode* $tmp2005 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2005));
*(&local110) = $tmp2004;
// line 544
org$pandalanguage$pandac$ASTNode* $tmp2006 = *(&local110);
panda$core$Bit $tmp2007 = panda$core$Bit$init$builtin_bit($tmp2006 != NULL);
bool $tmp2008 = $tmp2007.value;
if ($tmp2008) goto block235; else goto block236;
block235:;
// line 545
org$pandalanguage$pandac$ASTNode* $tmp2009 = *(&local110);
panda$core$Bit $tmp2010 = panda$core$Bit$init$builtin_bit($tmp2009 != NULL);
bool $tmp2011 = $tmp2010.value;
if ($tmp2011) goto block237; else goto block238;
block238:;
panda$core$Int64 $tmp2012 = (panda$core$Int64) {545};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2013, $tmp2012, &$s2014);
abort(); // unreachable
block237:;
panda$core$String* $tmp2015 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2016, ((panda$core$Object*) $tmp2009));
panda$core$String* $tmp2017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2015, &$s2018);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2017));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2017));
// unreffing REF($3605:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2015));
// unreffing REF($3604:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp2019 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2019));
// unreffing value
*(&local110) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2017;
block236:;
// line 547
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2020));
org$pandalanguage$pandac$ASTNode* $tmp2021 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2021));
// unreffing value
*(&local110) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return &$s2022;
block234:;
panda$core$Int64 $tmp2023 = (panda$core$Int64) {40};
panda$core$Bit $tmp2024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp2023);
bool $tmp2025 = $tmp2024.value;
if ($tmp2025) goto block239; else goto block240;
block239:;
// line 550
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2026));
return &$s2027;
block240:;
panda$core$Int64 $tmp2028 = (panda$core$Int64) {41};
panda$core$Bit $tmp2029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp2028);
bool $tmp2030 = $tmp2029.value;
if ($tmp2030) goto block241; else goto block242;
block241:;
org$pandalanguage$pandac$Position* $tmp2031 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2032 = *$tmp2031;
panda$core$String** $tmp2033 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2034 = *$tmp2033;
*(&local111) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2034));
panda$core$String* $tmp2035 = *(&local111);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2035));
*(&local111) = $tmp2034;
// line 553
panda$core$String* $tmp2036 = *(&local111);
panda$core$String* $tmp2037 = panda$core$String$format$panda$core$String$R$panda$core$String($tmp2036, &$s2038);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2037));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2037));
// unreffing REF($3654:panda.core.String)
panda$core$String* $tmp2039 = *(&local111);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2039));
// unreffing str
*(&local111) = ((panda$core$String*) NULL);
return $tmp2037;
block242:;
panda$core$Int64 $tmp2040 = (panda$core$Int64) {42};
panda$core$Bit $tmp2041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp2040);
bool $tmp2042 = $tmp2041.value;
if ($tmp2042) goto block243; else goto block244;
block243:;
// line 556
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2043));
return &$s2044;
block244:;
panda$core$Int64 $tmp2045 = (panda$core$Int64) {43};
panda$core$Bit $tmp2046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp2045);
bool $tmp2047 = $tmp2046.value;
if ($tmp2047) goto block245; else goto block246;
block245:;
org$pandalanguage$pandac$Position* $tmp2048 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2049 = *$tmp2048;
org$pandalanguage$pandac$FixedArray** $tmp2050 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2051 = *$tmp2050;
*(&local112) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2051));
org$pandalanguage$pandac$FixedArray* $tmp2052 = *(&local112);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2052));
*(&local112) = $tmp2051;
// line 559
org$pandalanguage$pandac$FixedArray* $tmp2053 = *(&local112);
ITable* $tmp2054 = ((panda$collections$CollectionView*) $tmp2053)->$class->itable;
while ($tmp2054->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2054 = $tmp2054->next;
}
$fn2056 $tmp2055 = $tmp2054->methods[1];
panda$core$String* $tmp2057 = $tmp2055(((panda$collections$CollectionView*) $tmp2053));
panda$core$String* $tmp2058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2059, $tmp2057);
panda$core$String* $tmp2060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2058, &$s2061);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2060));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2060));
// unreffing REF($3695:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2058));
// unreffing REF($3694:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2057));
// unreffing REF($3693:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp2062 = *(&local112);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2062));
// unreffing arguments
*(&local112) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp2060;
block246:;
panda$core$Int64 $tmp2063 = (panda$core$Int64) {44};
panda$core$Bit $tmp2064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp2063);
bool $tmp2065 = $tmp2064.value;
if ($tmp2065) goto block247; else goto block248;
block247:;
org$pandalanguage$pandac$Position* $tmp2066 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2067 = *$tmp2066;
org$pandalanguage$pandac$FixedArray** $tmp2068 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2069 = *$tmp2068;
*(&local113) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2069));
org$pandalanguage$pandac$FixedArray* $tmp2070 = *(&local113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2070));
*(&local113) = $tmp2069;
// line 562
org$pandalanguage$pandac$FixedArray* $tmp2071 = *(&local113);
ITable* $tmp2072 = ((panda$collections$CollectionView*) $tmp2071)->$class->itable;
while ($tmp2072->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2072 = $tmp2072->next;
}
$fn2074 $tmp2073 = $tmp2072->methods[1];
panda$core$String* $tmp2075 = $tmp2073(((panda$collections$CollectionView*) $tmp2071));
panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2077, $tmp2075);
panda$core$String* $tmp2078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2076, &$s2079);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2078));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2078));
// unreffing REF($3734:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2076));
// unreffing REF($3733:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2075));
// unreffing REF($3732:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp2080 = *(&local113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2080));
// unreffing parameters
*(&local113) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp2078;
block248:;
panda$core$Int64 $tmp2081 = (panda$core$Int64) {45};
panda$core$Bit $tmp2082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp2081);
bool $tmp2083 = $tmp2082.value;
if ($tmp2083) goto block249; else goto block250;
block249:;
org$pandalanguage$pandac$Position* $tmp2084 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2085 = *$tmp2084;
panda$core$String** $tmp2086 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2087 = *$tmp2086;
*(&local114) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2087));
panda$core$String* $tmp2088 = *(&local114);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2088));
*(&local114) = $tmp2087;
// line 565
panda$core$String* $tmp2089 = *(&local114);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2089));
panda$core$String* $tmp2090 = *(&local114);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2090));
// unreffing name
*(&local114) = ((panda$core$String*) NULL);
return $tmp2089;
block250:;
panda$core$Int64 $tmp2091 = (panda$core$Int64) {47};
panda$core$Bit $tmp2092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp2091);
bool $tmp2093 = $tmp2092.value;
if ($tmp2093) goto block251; else goto block252;
block251:;
org$pandalanguage$pandac$Position* $tmp2094 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2095 = *$tmp2094;
panda$core$String** $tmp2096 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2097 = *$tmp2096;
*(&local115) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2097));
panda$core$String* $tmp2098 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2098));
*(&local115) = $tmp2097;
org$pandalanguage$pandac$ASTNode** $tmp2099 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2100 = *$tmp2099;
*(&local116) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2100));
org$pandalanguage$pandac$ASTNode* $tmp2101 = *(&local116);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2101));
*(&local116) = $tmp2100;
// line 568
org$pandalanguage$pandac$ASTNode* $tmp2102 = *(&local116);
panda$core$Bit $tmp2103 = panda$core$Bit$init$builtin_bit($tmp2102 != NULL);
bool $tmp2104 = $tmp2103.value;
if ($tmp2104) goto block253; else goto block254;
block253:;
// line 569
panda$core$String* $tmp2105 = *(&local115);
panda$core$String* $tmp2106 = panda$core$String$convert$R$panda$core$String($tmp2105);
panda$core$String* $tmp2107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2106, &$s2108);
org$pandalanguage$pandac$ASTNode* $tmp2109 = *(&local116);
panda$core$Bit $tmp2110 = panda$core$Bit$init$builtin_bit($tmp2109 != NULL);
bool $tmp2111 = $tmp2110.value;
if ($tmp2111) goto block255; else goto block256;
block256:;
panda$core$Int64 $tmp2112 = (panda$core$Int64) {569};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2113, $tmp2112, &$s2114);
abort(); // unreachable
block255:;
panda$core$String* $tmp2115 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2107, ((panda$core$Object*) $tmp2109));
panda$core$String* $tmp2116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2115, &$s2117);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2116));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2116));
// unreffing REF($3821:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2115));
// unreffing REF($3820:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2107));
// unreffing REF($3810:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2106));
// unreffing REF($3809:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp2118 = *(&local116);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2118));
// unreffing type
*(&local116) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2119 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2119));
// unreffing name
*(&local115) = ((panda$core$String*) NULL);
return $tmp2116;
block254:;
// line 571
panda$core$String* $tmp2120 = *(&local115);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2120));
org$pandalanguage$pandac$ASTNode* $tmp2121 = *(&local116);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2121));
// unreffing type
*(&local116) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2122 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2122));
// unreffing name
*(&local115) = ((panda$core$String*) NULL);
return $tmp2120;
block252:;
panda$core$Int64 $tmp2123 = (panda$core$Int64) {46};
panda$core$Bit $tmp2124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp2123);
bool $tmp2125 = $tmp2124.value;
if ($tmp2125) goto block257; else goto block258;
block257:;
org$pandalanguage$pandac$Position* $tmp2126 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2127 = *$tmp2126;
org$pandalanguage$pandac$FixedArray** $tmp2128 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2129 = *$tmp2128;
*(&local117) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2129));
org$pandalanguage$pandac$FixedArray* $tmp2130 = *(&local117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2130));
*(&local117) = $tmp2129;
org$pandalanguage$pandac$ASTNode** $tmp2131 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2132 = *$tmp2131;
*(&local118) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2132));
org$pandalanguage$pandac$ASTNode* $tmp2133 = *(&local118);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2133));
*(&local118) = $tmp2132;
// line 574
org$pandalanguage$pandac$FixedArray* $tmp2134 = *(&local117);
ITable* $tmp2135 = ((panda$collections$CollectionView*) $tmp2134)->$class->itable;
while ($tmp2135->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2135 = $tmp2135->next;
}
$fn2137 $tmp2136 = $tmp2135->methods[1];
panda$core$String* $tmp2138 = $tmp2136(((panda$collections$CollectionView*) $tmp2134));
panda$core$String* $tmp2139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2140, $tmp2138);
panda$core$String* $tmp2141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2139, &$s2142);
org$pandalanguage$pandac$ASTNode* $tmp2143 = *(&local118);
panda$core$String* $tmp2144 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2141, ((panda$core$Object*) $tmp2143));
panda$core$String* $tmp2145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2144, &$s2146);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2145));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2145));
// unreffing REF($3896:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2144));
// unreffing REF($3895:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2141));
// unreffing REF($3892:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2139));
// unreffing REF($3891:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2138));
// unreffing REF($3890:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp2147 = *(&local118);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2147));
// unreffing body
*(&local118) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2148 = *(&local117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2148));
// unreffing parameters
*(&local117) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp2145;
block258:;
panda$core$Int64 $tmp2149 = (panda$core$Int64) {48};
panda$core$Bit $tmp2150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp2149);
bool $tmp2151 = $tmp2150.value;
if ($tmp2151) goto block259; else goto block260;
block259:;
org$pandalanguage$pandac$Position* $tmp2152 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2153 = *$tmp2152;
org$pandalanguage$pandac$FixedArray** $tmp2154 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2155 = *$tmp2154;
*(&local119) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2155));
org$pandalanguage$pandac$FixedArray* $tmp2156 = *(&local119);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2156));
*(&local119) = $tmp2155;
org$pandalanguage$pandac$ASTNode** $tmp2157 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2158 = *$tmp2157;
*(&local120) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2158));
org$pandalanguage$pandac$ASTNode* $tmp2159 = *(&local120);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2159));
*(&local120) = $tmp2158;
// line 577
org$pandalanguage$pandac$FixedArray* $tmp2160 = *(&local119);
ITable* $tmp2161 = ((panda$collections$CollectionView*) $tmp2160)->$class->itable;
while ($tmp2161->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2161 = $tmp2161->next;
}
$fn2163 $tmp2162 = $tmp2161->methods[1];
panda$core$String* $tmp2164 = $tmp2162(((panda$collections$CollectionView*) $tmp2160));
panda$core$String* $tmp2165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2166, $tmp2164);
panda$core$String* $tmp2167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2165, &$s2168);
org$pandalanguage$pandac$ASTNode* $tmp2169 = *(&local120);
panda$core$String* $tmp2170 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2167, ((panda$core$Object*) $tmp2169));
panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2170, &$s2172);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2171));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2171));
// unreffing REF($3959:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2170));
// unreffing REF($3958:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2167));
// unreffing REF($3955:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2165));
// unreffing REF($3954:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2164));
// unreffing REF($3953:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp2173 = *(&local120);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2173));
// unreffing body
*(&local120) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2174 = *(&local119);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2174));
// unreffing parameters
*(&local119) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp2171;
block260:;
panda$core$Int64 $tmp2175 = (panda$core$Int64) {49};
panda$core$Bit $tmp2176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp2175);
bool $tmp2177 = $tmp2176.value;
if ($tmp2177) goto block261; else goto block262;
block261:;
org$pandalanguage$pandac$Position* $tmp2178 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2179 = *$tmp2178;
panda$core$String** $tmp2180 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2181 = *$tmp2180;
*(&local121) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2181));
panda$core$String* $tmp2182 = *(&local121);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2182));
*(&local121) = $tmp2181;
// line 580
panda$core$String* $tmp2183 = *(&local121);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2183));
panda$core$String* $tmp2184 = *(&local121);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2184));
// unreffing name
*(&local121) = ((panda$core$String*) NULL);
return $tmp2183;
block262:;
panda$core$Int64 $tmp2185 = (panda$core$Int64) {50};
panda$core$Bit $tmp2186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp2185);
bool $tmp2187 = $tmp2186.value;
if ($tmp2187) goto block263; else goto block264;
block263:;
org$pandalanguage$pandac$Position* $tmp2188 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2189 = *$tmp2188;
org$pandalanguage$pandac$Variable$Kind* $tmp2190 = (org$pandalanguage$pandac$Variable$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp2191 = *$tmp2190;
*(&local122) = $tmp2191;
org$pandalanguage$pandac$FixedArray** $tmp2192 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2193 = *$tmp2192;
*(&local123) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2193));
org$pandalanguage$pandac$FixedArray* $tmp2194 = *(&local123);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2194));
*(&local123) = $tmp2193;
// line 583
panda$core$MutableString* $tmp2195 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2195);
*(&local124) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2195));
panda$core$MutableString* $tmp2196 = *(&local124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2196));
*(&local124) = $tmp2195;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2195));
// unreffing REF($4032:panda.core.MutableString)
// line 584
org$pandalanguage$pandac$Variable$Kind $tmp2197 = *(&local122);
panda$core$Int64 $tmp2198 = $tmp2197.$rawValue;
panda$core$Int64 $tmp2199 = (panda$core$Int64) {0};
panda$core$Bit $tmp2200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2198, $tmp2199);
bool $tmp2201 = $tmp2200.value;
if ($tmp2201) goto block266; else goto block267;
block266:;
// line 585
panda$core$MutableString* $tmp2202 = *(&local124);
panda$core$MutableString$append$panda$core$String($tmp2202, &$s2203);
goto block265;
block267:;
panda$core$Int64 $tmp2204 = (panda$core$Int64) {1};
panda$core$Bit $tmp2205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2198, $tmp2204);
bool $tmp2206 = $tmp2205.value;
if ($tmp2206) goto block268; else goto block269;
block268:;
// line 586
panda$core$MutableString* $tmp2207 = *(&local124);
panda$core$MutableString$append$panda$core$String($tmp2207, &$s2208);
goto block265;
block269:;
panda$core$Int64 $tmp2209 = (panda$core$Int64) {2};
panda$core$Bit $tmp2210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2198, $tmp2209);
bool $tmp2211 = $tmp2210.value;
if ($tmp2211) goto block270; else goto block271;
block270:;
// line 587
panda$core$MutableString* $tmp2212 = *(&local124);
panda$core$MutableString$append$panda$core$String($tmp2212, &$s2213);
goto block265;
block271:;
panda$core$Int64 $tmp2214 = (panda$core$Int64) {3};
panda$core$Bit $tmp2215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2198, $tmp2214);
bool $tmp2216 = $tmp2215.value;
if ($tmp2216) goto block272; else goto block265;
block272:;
// line 588
panda$core$MutableString* $tmp2217 = *(&local124);
panda$core$MutableString$append$panda$core$String($tmp2217, &$s2218);
goto block265;
block265:;
// line 590
panda$core$MutableString* $tmp2219 = *(&local124);
org$pandalanguage$pandac$FixedArray* $tmp2220 = *(&local123);
ITable* $tmp2221 = ((panda$collections$CollectionView*) $tmp2220)->$class->itable;
while ($tmp2221->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2221 = $tmp2221->next;
}
$fn2223 $tmp2222 = $tmp2221->methods[1];
panda$core$String* $tmp2224 = $tmp2222(((panda$collections$CollectionView*) $tmp2220));
panda$core$MutableString$append$panda$core$String($tmp2219, $tmp2224);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2224));
// unreffing REF($4084:panda.core.String)
// line 591
panda$core$MutableString* $tmp2225 = *(&local124);
panda$core$String* $tmp2226 = panda$core$MutableString$finish$R$panda$core$String($tmp2225);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2226));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2226));
// unreffing REF($4091:panda.core.String)
panda$core$MutableString* $tmp2227 = *(&local124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2227));
// unreffing result
*(&local124) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2228 = *(&local123);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2228));
// unreffing decls
*(&local123) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp2226;
block264:;
panda$core$Int64 $tmp2229 = (panda$core$Int64) {51};
panda$core$Bit $tmp2230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp2229);
bool $tmp2231 = $tmp2230.value;
if ($tmp2231) goto block273; else goto block274;
block273:;
org$pandalanguage$pandac$Position* $tmp2232 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2233 = *$tmp2232;
org$pandalanguage$pandac$FixedArray** $tmp2234 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2235 = *$tmp2234;
*(&local125) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2235));
org$pandalanguage$pandac$FixedArray* $tmp2236 = *(&local125);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2236));
*(&local125) = $tmp2235;
org$pandalanguage$pandac$FixedArray** $tmp2237 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2238 = *$tmp2237;
*(&local126) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2238));
org$pandalanguage$pandac$FixedArray* $tmp2239 = *(&local126);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2239));
*(&local126) = $tmp2238;
// line 594
panda$core$MutableString* $tmp2240 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp2240, &$s2241);
*(&local127) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2240));
panda$core$MutableString* $tmp2242 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2242));
*(&local127) = $tmp2240;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2240));
// unreffing REF($4133:panda.core.MutableString)
// line 595
*(&local128) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2243));
panda$core$String* $tmp2244 = *(&local128);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2244));
*(&local128) = &$s2245;
// line 596
org$pandalanguage$pandac$FixedArray* $tmp2246 = *(&local125);
ITable* $tmp2247 = ((panda$collections$Iterable*) $tmp2246)->$class->itable;
while ($tmp2247->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2247 = $tmp2247->next;
}
$fn2249 $tmp2248 = $tmp2247->methods[0];
panda$collections$Iterator* $tmp2250 = $tmp2248(((panda$collections$Iterable*) $tmp2246));
goto block275;
block275:;
ITable* $tmp2251 = $tmp2250->$class->itable;
while ($tmp2251->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2251 = $tmp2251->next;
}
$fn2253 $tmp2252 = $tmp2251->methods[0];
panda$core$Bit $tmp2254 = $tmp2252($tmp2250);
bool $tmp2255 = $tmp2254.value;
if ($tmp2255) goto block277; else goto block276;
block276:;
*(&local129) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2256 = $tmp2250->$class->itable;
while ($tmp2256->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2256 = $tmp2256->next;
}
$fn2258 $tmp2257 = $tmp2256->methods[1];
panda$core$Object* $tmp2259 = $tmp2257($tmp2250);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2259)));
org$pandalanguage$pandac$ASTNode* $tmp2260 = *(&local129);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2260));
*(&local129) = ((org$pandalanguage$pandac$ASTNode*) $tmp2259);
// line 597
panda$core$MutableString* $tmp2261 = *(&local127);
panda$core$String* $tmp2262 = *(&local128);
panda$core$String* $tmp2263 = panda$core$String$convert$R$panda$core$String($tmp2262);
panda$core$String* $tmp2264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2263, &$s2265);
org$pandalanguage$pandac$ASTNode* $tmp2266 = *(&local129);
panda$core$String* $tmp2267 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2264, ((panda$core$Object*) $tmp2266));
panda$core$String* $tmp2268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2267, &$s2269);
panda$core$MutableString$append$panda$core$String($tmp2261, $tmp2268);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2268));
// unreffing REF($4185:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2267));
// unreffing REF($4184:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2264));
// unreffing REF($4181:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2263));
// unreffing REF($4180:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2259);
// unreffing REF($4169:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2270 = *(&local129);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2270));
// unreffing t
*(&local129) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block275;
block277:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2250));
// unreffing REF($4158:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 599
panda$core$MutableString* $tmp2271 = *(&local127);
panda$core$MutableString$append$panda$core$String($tmp2271, &$s2272);
// line 600
org$pandalanguage$pandac$FixedArray* $tmp2273 = *(&local126);
ITable* $tmp2274 = ((panda$collections$Iterable*) $tmp2273)->$class->itable;
while ($tmp2274->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2274 = $tmp2274->next;
}
$fn2276 $tmp2275 = $tmp2274->methods[0];
panda$collections$Iterator* $tmp2277 = $tmp2275(((panda$collections$Iterable*) $tmp2273));
goto block278;
block278:;
ITable* $tmp2278 = $tmp2277->$class->itable;
while ($tmp2278->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2278 = $tmp2278->next;
}
$fn2280 $tmp2279 = $tmp2278->methods[0];
panda$core$Bit $tmp2281 = $tmp2279($tmp2277);
bool $tmp2282 = $tmp2281.value;
if ($tmp2282) goto block280; else goto block279;
block279:;
*(&local130) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2283 = $tmp2277->$class->itable;
while ($tmp2283->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2283 = $tmp2283->next;
}
$fn2285 $tmp2284 = $tmp2283->methods[1];
panda$core$Object* $tmp2286 = $tmp2284($tmp2277);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2286)));
org$pandalanguage$pandac$ASTNode* $tmp2287 = *(&local130);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2287));
*(&local130) = ((org$pandalanguage$pandac$ASTNode*) $tmp2286);
// line 601
panda$core$MutableString* $tmp2288 = *(&local127);
org$pandalanguage$pandac$ASTNode* $tmp2289 = *(&local130);
panda$core$String* $tmp2290 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2291, ((panda$core$Object*) $tmp2289));
panda$core$MutableString$append$panda$core$String($tmp2288, $tmp2290);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2290));
// unreffing REF($4242:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2286);
// unreffing REF($4230:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2292 = *(&local130);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2292));
// unreffing s
*(&local130) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block278;
block280:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2277));
// unreffing REF($4219:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 603
panda$core$MutableString* $tmp2293 = *(&local127);
panda$core$String* $tmp2294 = panda$core$MutableString$finish$R$panda$core$String($tmp2293);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2294));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2294));
// unreffing REF($4261:panda.core.String)
panda$core$String* $tmp2295 = *(&local128);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2295));
// unreffing separator
*(&local128) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2296 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2296));
// unreffing result
*(&local127) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2297 = *(&local126);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2297));
// unreffing statements
*(&local126) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2298 = *(&local125);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2298));
// unreffing tests
*(&local125) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp2294;
block274:;
panda$core$Int64 $tmp2299 = (panda$core$Int64) {52};
panda$core$Bit $tmp2300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp2299);
bool $tmp2301 = $tmp2300.value;
if ($tmp2301) goto block281; else goto block282;
block281:;
org$pandalanguage$pandac$Position* $tmp2302 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2303 = *$tmp2302;
panda$core$String** $tmp2304 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2305 = *$tmp2304;
*(&local131) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2305));
panda$core$String* $tmp2306 = *(&local131);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2306));
*(&local131) = $tmp2305;
org$pandalanguage$pandac$ASTNode** $tmp2307 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2308 = *$tmp2307;
*(&local132) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2308));
org$pandalanguage$pandac$ASTNode* $tmp2309 = *(&local132);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2309));
*(&local132) = $tmp2308;
org$pandalanguage$pandac$FixedArray** $tmp2310 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp2311 = *$tmp2310;
*(&local133) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2311));
org$pandalanguage$pandac$FixedArray* $tmp2312 = *(&local133);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2312));
*(&local133) = $tmp2311;
// line 606
panda$core$MutableString* $tmp2313 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2313);
*(&local134) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2313));
panda$core$MutableString* $tmp2314 = *(&local134);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2314));
*(&local134) = $tmp2313;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2313));
// unreffing REF($4322:panda.core.MutableString)
// line 607
panda$core$String* $tmp2315 = *(&local131);
panda$core$Bit $tmp2316 = panda$core$Bit$init$builtin_bit($tmp2315 != NULL);
bool $tmp2317 = $tmp2316.value;
if ($tmp2317) goto block283; else goto block284;
block283:;
// line 608
panda$core$MutableString* $tmp2318 = *(&local134);
panda$core$String* $tmp2319 = *(&local131);
panda$core$Bit $tmp2320 = panda$core$Bit$init$builtin_bit($tmp2319 != NULL);
bool $tmp2321 = $tmp2320.value;
if ($tmp2321) goto block285; else goto block286;
block286:;
panda$core$Int64 $tmp2322 = (panda$core$Int64) {608};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2323, $tmp2322, &$s2324);
abort(); // unreachable
block285:;
panda$core$String* $tmp2325 = panda$core$String$convert$R$panda$core$String($tmp2319);
panda$core$String* $tmp2326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2325, &$s2327);
panda$core$MutableString$append$panda$core$String($tmp2318, $tmp2326);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2326));
// unreffing REF($4352:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2325));
// unreffing REF($4351:panda.core.String)
goto block284;
block284:;
// line 610
panda$core$MutableString* $tmp2328 = *(&local134);
org$pandalanguage$pandac$ASTNode* $tmp2329 = *(&local132);
panda$core$String* $tmp2330 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2331, ((panda$core$Object*) $tmp2329));
panda$core$String* $tmp2332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2330, &$s2333);
panda$core$MutableString$append$panda$core$String($tmp2328, $tmp2332);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2332));
// unreffing REF($4366:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2330));
// unreffing REF($4365:panda.core.String)
// line 611
org$pandalanguage$pandac$FixedArray* $tmp2334 = *(&local133);
ITable* $tmp2335 = ((panda$collections$Iterable*) $tmp2334)->$class->itable;
while ($tmp2335->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2335 = $tmp2335->next;
}
$fn2337 $tmp2336 = $tmp2335->methods[0];
panda$collections$Iterator* $tmp2338 = $tmp2336(((panda$collections$Iterable*) $tmp2334));
goto block287;
block287:;
ITable* $tmp2339 = $tmp2338->$class->itable;
while ($tmp2339->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2339 = $tmp2339->next;
}
$fn2341 $tmp2340 = $tmp2339->methods[0];
panda$core$Bit $tmp2342 = $tmp2340($tmp2338);
bool $tmp2343 = $tmp2342.value;
if ($tmp2343) goto block289; else goto block288;
block288:;
*(&local135) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2344 = $tmp2338->$class->itable;
while ($tmp2344->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2344 = $tmp2344->next;
}
$fn2346 $tmp2345 = $tmp2344->methods[1];
panda$core$Object* $tmp2347 = $tmp2345($tmp2338);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2347)));
org$pandalanguage$pandac$ASTNode* $tmp2348 = *(&local135);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2348));
*(&local135) = ((org$pandalanguage$pandac$ASTNode*) $tmp2347);
// line 612
panda$core$MutableString* $tmp2349 = *(&local134);
org$pandalanguage$pandac$ASTNode* $tmp2350 = *(&local135);
panda$core$String* $tmp2351 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp2350), &$s2352);
panda$core$MutableString$append$panda$core$String($tmp2349, $tmp2351);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2351));
// unreffing REF($4402:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2347);
// unreffing REF($4390:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2353 = *(&local135);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2353));
// unreffing s
*(&local135) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block287;
block289:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2338));
// unreffing REF($4379:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 614
panda$core$MutableString* $tmp2354 = *(&local134);
panda$core$MutableString$append$panda$core$String($tmp2354, &$s2355);
// line 615
panda$core$MutableString* $tmp2356 = *(&local134);
panda$core$String* $tmp2357 = panda$core$MutableString$finish$R$panda$core$String($tmp2356);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2357));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2357));
// unreffing REF($4424:panda.core.String)
panda$core$MutableString* $tmp2358 = *(&local134);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2358));
// unreffing result
*(&local134) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2359 = *(&local133);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2359));
// unreffing statements
*(&local133) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2360 = *(&local132);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2360));
// unreffing test
*(&local132) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2361 = *(&local131);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2361));
// unreffing label
*(&local131) = ((panda$core$String*) NULL);
return $tmp2357;
block282:;
// line 618
panda$core$Bit $tmp2362 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2363 = $tmp2362.value;
if ($tmp2363) goto block290; else goto block291;
block291:;
panda$core$Int64 $tmp2364 = (panda$core$Int64) {618};
panda$core$Int64* $tmp2365 = &param0->$rawValue;
panda$core$Int64 $tmp2366 = *$tmp2365;
panda$core$Int64$wrapper* $tmp2367;
$tmp2367 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2367->value = $tmp2366;
panda$core$String* $tmp2368 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2369, ((panda$core$Object*) $tmp2367));
panda$core$String* $tmp2370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2368, &$s2371);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2372, $tmp2364, $tmp2370);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2370));
// unreffing REF($4460:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2368));
// unreffing REF($4459:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2367));
// unreffing REF($4458:panda.core.Object)
abort(); // unreachable
block290:;
goto block1;
block1:;
panda$core$Bit $tmp2373 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2374 = $tmp2373.value;
if ($tmp2374) goto block292; else goto block293;
block293:;
panda$core$Int64 $tmp2375 = (panda$core$Int64) {257};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2376, $tmp2375, &$s2377);
abort(); // unreachable
block292:;
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
panda$core$String* local73 = NULL;
org$pandalanguage$pandac$FixedArray* local74 = NULL;
org$pandalanguage$pandac$Position local75;
org$pandalanguage$pandac$ASTNode* local76 = NULL;
org$pandalanguage$pandac$FixedArray* local77 = NULL;
org$pandalanguage$pandac$ASTNode* local78 = NULL;
org$pandalanguage$pandac$Position local79;
panda$core$UInt64 local80;
org$pandalanguage$pandac$Position local81;
org$pandalanguage$pandac$IR$Value* local82 = NULL;
org$pandalanguage$pandac$Position local83;
panda$core$String* local84 = NULL;
org$pandalanguage$pandac$FixedArray* local85 = NULL;
org$pandalanguage$pandac$Position local86;
org$pandalanguage$pandac$ASTNode* local87 = NULL;
org$pandalanguage$pandac$FixedArray* local88 = NULL;
org$pandalanguage$pandac$FixedArray* local89 = NULL;
org$pandalanguage$pandac$Position local90;
org$pandalanguage$pandac$ASTNode* local91 = NULL;
org$pandalanguage$pandac$FixedArray* local92 = NULL;
org$pandalanguage$pandac$MethodDecl$Kind local93;
panda$core$String* local94 = NULL;
org$pandalanguage$pandac$FixedArray* local95 = NULL;
org$pandalanguage$pandac$FixedArray* local96 = NULL;
org$pandalanguage$pandac$ASTNode* local97 = NULL;
org$pandalanguage$pandac$FixedArray* local98 = NULL;
org$pandalanguage$pandac$Position local99;
org$pandalanguage$pandac$parser$Token$Kind local100;
org$pandalanguage$pandac$FixedArray* local101 = NULL;
org$pandalanguage$pandac$ASTNode* local102 = NULL;
org$pandalanguage$pandac$Position local103;
org$pandalanguage$pandac$Position local104;
org$pandalanguage$pandac$ASTNode* local105 = NULL;
org$pandalanguage$pandac$Position local106;
panda$core$String* local107 = NULL;
org$pandalanguage$pandac$Position local108;
panda$core$String* local109 = NULL;
org$pandalanguage$pandac$ASTNode* local110 = NULL;
org$pandalanguage$pandac$Position local111;
org$pandalanguage$pandac$parser$Token$Kind local112;
org$pandalanguage$pandac$ASTNode* local113 = NULL;
org$pandalanguage$pandac$Position local114;
org$pandalanguage$pandac$ASTNode* local115 = NULL;
panda$core$Bit local116;
org$pandalanguage$pandac$ASTNode* local117 = NULL;
org$pandalanguage$pandac$ASTNode* local118 = NULL;
org$pandalanguage$pandac$Position local119;
panda$core$Real64 local120;
org$pandalanguage$pandac$Position local121;
panda$core$String* local122 = NULL;
org$pandalanguage$pandac$Position local123;
org$pandalanguage$pandac$ASTNode* local124 = NULL;
org$pandalanguage$pandac$Position local125;
org$pandalanguage$pandac$Position local126;
panda$core$String* local127 = NULL;
org$pandalanguage$pandac$Position local128;
org$pandalanguage$pandac$Position local129;
org$pandalanguage$pandac$FixedArray* local130 = NULL;
org$pandalanguage$pandac$Position local131;
org$pandalanguage$pandac$FixedArray* local132 = NULL;
org$pandalanguage$pandac$Position local133;
panda$core$String* local134 = NULL;
org$pandalanguage$pandac$Position local135;
org$pandalanguage$pandac$FixedArray* local136 = NULL;
org$pandalanguage$pandac$ASTNode* local137 = NULL;
org$pandalanguage$pandac$Position local138;
panda$core$String* local139 = NULL;
org$pandalanguage$pandac$ASTNode* local140 = NULL;
org$pandalanguage$pandac$Position local141;
org$pandalanguage$pandac$FixedArray* local142 = NULL;
org$pandalanguage$pandac$ASTNode* local143 = NULL;
org$pandalanguage$pandac$Position local144;
panda$core$String* local145 = NULL;
org$pandalanguage$pandac$Position local146;
org$pandalanguage$pandac$Variable$Kind local147;
org$pandalanguage$pandac$FixedArray* local148 = NULL;
org$pandalanguage$pandac$Position local149;
org$pandalanguage$pandac$FixedArray* local150 = NULL;
org$pandalanguage$pandac$FixedArray* local151 = NULL;
org$pandalanguage$pandac$Position local152;
panda$core$String* local153 = NULL;
org$pandalanguage$pandac$ASTNode* local154 = NULL;
org$pandalanguage$pandac$FixedArray* local155 = NULL;
// line 6
panda$core$Int64* $tmp2378 = &param0->$rawValue;
panda$core$Int64 $tmp2379 = *$tmp2378;
panda$core$Int64 $tmp2380 = (panda$core$Int64) {0};
panda$core$Bit $tmp2381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2380);
bool $tmp2382 = $tmp2381.value;
if ($tmp2382) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp2383 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2384 = *$tmp2383;
*(&local0) = $tmp2384;
panda$core$String** $tmp2385 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2386 = *$tmp2385;
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2386));
panda$core$String* $tmp2387 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2387));
*(&local1) = $tmp2386;
panda$core$String** $tmp2388 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp2389 = *$tmp2388;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2389));
panda$core$String* $tmp2390 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2390));
*(&local2) = $tmp2389;
org$pandalanguage$pandac$ASTNode** $tmp2391 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2392 = *$tmp2391;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2392));
org$pandalanguage$pandac$ASTNode* $tmp2393 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2393));
*(&local3) = $tmp2392;
// line 1
panda$core$String* $tmp2394 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2394));
// line 1
panda$core$String* $tmp2395 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2395));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2396 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2396));
org$pandalanguage$pandac$ASTNode* $tmp2397 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2397));
// unreffing _f3
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2398 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2398));
// unreffing _f2
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2399 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2399));
// unreffing _f1
*(&local1) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp2400 = (panda$core$Int64) {1};
panda$core$Bit $tmp2401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2400);
bool $tmp2402 = $tmp2401.value;
if ($tmp2402) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp2403 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2404 = *$tmp2403;
*(&local4) = $tmp2404;
org$pandalanguage$pandac$FixedArray** $tmp2405 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2406 = *$tmp2405;
*(&local5) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2406));
org$pandalanguage$pandac$FixedArray* $tmp2407 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2407));
*(&local5) = $tmp2406;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2408 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2408));
org$pandalanguage$pandac$FixedArray* $tmp2409 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2409));
// unreffing _f1
*(&local5) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block5:;
panda$core$Int64 $tmp2410 = (panda$core$Int64) {2};
panda$core$Bit $tmp2411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2410);
bool $tmp2412 = $tmp2411.value;
if ($tmp2412) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp2413 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2414 = *$tmp2413;
*(&local6) = $tmp2414;
org$pandalanguage$pandac$ASTNode** $tmp2415 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2416 = *$tmp2415;
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2416));
org$pandalanguage$pandac$ASTNode* $tmp2417 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2417));
*(&local7) = $tmp2416;
org$pandalanguage$pandac$ASTNode** $tmp2418 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2419 = *$tmp2418;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2419));
org$pandalanguage$pandac$ASTNode* $tmp2420 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2420));
*(&local8) = $tmp2419;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2421 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2421));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2422 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2422));
org$pandalanguage$pandac$ASTNode* $tmp2423 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2423));
// unreffing _f2
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2424 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2424));
// unreffing _f1
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block7:;
panda$core$Int64 $tmp2425 = (panda$core$Int64) {3};
panda$core$Bit $tmp2426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2425);
bool $tmp2427 = $tmp2426.value;
if ($tmp2427) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp2428 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2429 = *$tmp2428;
*(&local9) = $tmp2429;
org$pandalanguage$pandac$ASTNode** $tmp2430 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2431 = *$tmp2430;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2431));
org$pandalanguage$pandac$ASTNode* $tmp2432 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2432));
*(&local10) = $tmp2431;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2433 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2433));
org$pandalanguage$pandac$ASTNode* $tmp2434 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2434));
// unreffing _f1
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block9:;
panda$core$Int64 $tmp2435 = (panda$core$Int64) {4};
panda$core$Bit $tmp2436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2435);
bool $tmp2437 = $tmp2436.value;
if ($tmp2437) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp2438 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2439 = *$tmp2438;
*(&local11) = $tmp2439;
goto block1;
block11:;
panda$core$Int64 $tmp2440 = (panda$core$Int64) {5};
panda$core$Bit $tmp2441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2440);
bool $tmp2442 = $tmp2441.value;
if ($tmp2442) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp2443 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2444 = *$tmp2443;
*(&local12) = $tmp2444;
org$pandalanguage$pandac$ASTNode** $tmp2445 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2446 = *$tmp2445;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2446));
org$pandalanguage$pandac$ASTNode* $tmp2447 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2447));
*(&local13) = $tmp2446;
org$pandalanguage$pandac$parser$Token$Kind* $tmp2448 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp2449 = *$tmp2448;
*(&local14) = $tmp2449;
org$pandalanguage$pandac$ASTNode** $tmp2450 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2451 = *$tmp2450;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2451));
org$pandalanguage$pandac$ASTNode* $tmp2452 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2452));
*(&local15) = $tmp2451;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2453 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2453));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2454 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2454));
org$pandalanguage$pandac$ASTNode* $tmp2455 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2455));
// unreffing _f3
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2456 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2456));
// unreffing _f1
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block13:;
panda$core$Int64 $tmp2457 = (panda$core$Int64) {6};
panda$core$Bit $tmp2458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2457);
bool $tmp2459 = $tmp2458.value;
if ($tmp2459) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp2460 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2461 = *$tmp2460;
*(&local16) = $tmp2461;
panda$core$Bit* $tmp2462 = (panda$core$Bit*) (param0->$data + 16);
panda$core$Bit $tmp2463 = *$tmp2462;
*(&local17) = $tmp2463;
goto block1;
block15:;
panda$core$Int64 $tmp2464 = (panda$core$Int64) {7};
panda$core$Bit $tmp2465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2464);
bool $tmp2466 = $tmp2465.value;
if ($tmp2466) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp2467 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2468 = *$tmp2467;
*(&local18) = $tmp2468;
org$pandalanguage$pandac$FixedArray** $tmp2469 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2470 = *$tmp2469;
*(&local19) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2470));
org$pandalanguage$pandac$FixedArray* $tmp2471 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2471));
*(&local19) = $tmp2470;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2472 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2472));
org$pandalanguage$pandac$FixedArray* $tmp2473 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2473));
// unreffing _f1
*(&local19) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block17:;
panda$core$Int64 $tmp2474 = (panda$core$Int64) {8};
panda$core$Bit $tmp2475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2474);
bool $tmp2476 = $tmp2475.value;
if ($tmp2476) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp2477 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2478 = *$tmp2477;
*(&local20) = $tmp2478;
panda$core$String** $tmp2479 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2480 = *$tmp2479;
*(&local21) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2480));
panda$core$String* $tmp2481 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2481));
*(&local21) = $tmp2480;
// line 1
panda$core$String* $tmp2482 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2482));
panda$core$String* $tmp2483 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2483));
// unreffing _f1
*(&local21) = ((panda$core$String*) NULL);
goto block1;
block19:;
panda$core$Int64 $tmp2484 = (panda$core$Int64) {9};
panda$core$Bit $tmp2485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2484);
bool $tmp2486 = $tmp2485.value;
if ($tmp2486) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp2487 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2488 = *$tmp2487;
*(&local22) = $tmp2488;
org$pandalanguage$pandac$ASTNode** $tmp2489 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2490 = *$tmp2489;
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2490));
org$pandalanguage$pandac$ASTNode* $tmp2491 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2491));
*(&local23) = $tmp2490;
org$pandalanguage$pandac$FixedArray** $tmp2492 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2493 = *$tmp2492;
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2493));
org$pandalanguage$pandac$FixedArray* $tmp2494 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2494));
*(&local24) = $tmp2493;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2495 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2495));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2496 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2496));
org$pandalanguage$pandac$FixedArray* $tmp2497 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2497));
// unreffing _f2
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2498 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2498));
// unreffing _f1
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block21:;
panda$core$Int64 $tmp2499 = (panda$core$Int64) {10};
panda$core$Bit $tmp2500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2499);
bool $tmp2501 = $tmp2500.value;
if ($tmp2501) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Position* $tmp2502 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2503 = *$tmp2502;
*(&local25) = $tmp2503;
org$pandalanguage$pandac$ASTNode** $tmp2504 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2505 = *$tmp2504;
*(&local26) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2505));
org$pandalanguage$pandac$ASTNode* $tmp2506 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2506));
*(&local26) = $tmp2505;
panda$core$String** $tmp2507 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp2508 = *$tmp2507;
*(&local27) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2508));
panda$core$String* $tmp2509 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2509));
*(&local27) = $tmp2508;
org$pandalanguage$pandac$FixedArray** $tmp2510 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp2511 = *$tmp2510;
*(&local28) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2511));
org$pandalanguage$pandac$FixedArray* $tmp2512 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2512));
*(&local28) = $tmp2511;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2513 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2513));
// line 1
panda$core$String* $tmp2514 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2514));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2515 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2515));
org$pandalanguage$pandac$FixedArray* $tmp2516 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2516));
// unreffing _f3
*(&local28) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2517 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2517));
// unreffing _f2
*(&local27) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2518 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2518));
// unreffing _f1
*(&local26) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block23:;
panda$core$Int64 $tmp2519 = (panda$core$Int64) {11};
panda$core$Bit $tmp2520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2519);
bool $tmp2521 = $tmp2520.value;
if ($tmp2521) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp2522 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2523 = *$tmp2522;
*(&local29) = $tmp2523;
org$pandalanguage$pandac$ASTNode** $tmp2524 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2525 = *$tmp2524;
*(&local30) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2525));
org$pandalanguage$pandac$ASTNode* $tmp2526 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2526));
*(&local30) = $tmp2525;
org$pandalanguage$pandac$ChoiceCase** $tmp2527 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp2528 = *$tmp2527;
*(&local31) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2528));
org$pandalanguage$pandac$ChoiceCase* $tmp2529 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2529));
*(&local31) = $tmp2528;
panda$core$Int64* $tmp2530 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp2531 = *$tmp2530;
*(&local32) = $tmp2531;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2532 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2532));
// line 1
org$pandalanguage$pandac$ChoiceCase* $tmp2533 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2533));
org$pandalanguage$pandac$ChoiceCase* $tmp2534 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2534));
// unreffing _f2
*(&local31) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2535 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2535));
// unreffing _f1
*(&local30) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block25:;
panda$core$Int64 $tmp2536 = (panda$core$Int64) {12};
panda$core$Bit $tmp2537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2536);
bool $tmp2538 = $tmp2537.value;
if ($tmp2538) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp2539 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2540 = *$tmp2539;
*(&local33) = $tmp2540;
org$pandalanguage$pandac$ASTNode** $tmp2541 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2542 = *$tmp2541;
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2542));
org$pandalanguage$pandac$ASTNode* $tmp2543 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2543));
*(&local34) = $tmp2542;
org$pandalanguage$pandac$FixedArray** $tmp2544 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2545 = *$tmp2544;
*(&local35) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2545));
org$pandalanguage$pandac$FixedArray* $tmp2546 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2546));
*(&local35) = $tmp2545;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp2547 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp2548 = *$tmp2547;
*(&local36) = $tmp2548;
panda$core$String** $tmp2549 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp2550 = *$tmp2549;
*(&local37) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2550));
panda$core$String* $tmp2551 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2551));
*(&local37) = $tmp2550;
org$pandalanguage$pandac$FixedArray** $tmp2552 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp2553 = *$tmp2552;
*(&local38) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2553));
org$pandalanguage$pandac$FixedArray* $tmp2554 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2554));
*(&local38) = $tmp2553;
org$pandalanguage$pandac$FixedArray** $tmp2555 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp2556 = *$tmp2555;
*(&local39) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2556));
org$pandalanguage$pandac$FixedArray* $tmp2557 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2557));
*(&local39) = $tmp2556;
org$pandalanguage$pandac$FixedArray** $tmp2558 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 64);
org$pandalanguage$pandac$FixedArray* $tmp2559 = *$tmp2558;
*(&local40) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2559));
org$pandalanguage$pandac$FixedArray* $tmp2560 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2560));
*(&local40) = $tmp2559;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2561 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2561));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2562 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2562));
// line 1
panda$core$String* $tmp2563 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2563));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2564 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2564));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2565 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2565));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2566 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2566));
org$pandalanguage$pandac$FixedArray* $tmp2567 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2567));
// unreffing _f7
*(&local40) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2568 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2568));
// unreffing _f6
*(&local39) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2569 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2569));
// unreffing _f5
*(&local38) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2570 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2570));
// unreffing _f4
*(&local37) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2571 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2571));
// unreffing _f2
*(&local35) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2572 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2572));
// unreffing _f1
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block27:;
panda$core$Int64 $tmp2573 = (panda$core$Int64) {13};
panda$core$Bit $tmp2574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2573);
bool $tmp2575 = $tmp2574.value;
if ($tmp2575) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Position* $tmp2576 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2577 = *$tmp2576;
*(&local41) = $tmp2577;
panda$core$String** $tmp2578 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2579 = *$tmp2578;
*(&local42) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2579));
panda$core$String* $tmp2580 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2580));
*(&local42) = $tmp2579;
// line 1
panda$core$String* $tmp2581 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2581));
panda$core$String* $tmp2582 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2582));
// unreffing _f1
*(&local42) = ((panda$core$String*) NULL);
goto block1;
block29:;
panda$core$Int64 $tmp2583 = (panda$core$Int64) {14};
panda$core$Bit $tmp2584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2583);
bool $tmp2585 = $tmp2584.value;
if ($tmp2585) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp2586 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2587 = *$tmp2586;
*(&local43) = $tmp2587;
org$pandalanguage$pandac$ASTNode** $tmp2588 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2589 = *$tmp2588;
*(&local44) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2589));
org$pandalanguage$pandac$ASTNode* $tmp2590 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2590));
*(&local44) = $tmp2589;
org$pandalanguage$pandac$ASTNode** $tmp2591 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2592 = *$tmp2591;
*(&local45) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2592));
org$pandalanguage$pandac$ASTNode* $tmp2593 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2593));
*(&local45) = $tmp2592;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2594 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2594));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2595 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2595));
org$pandalanguage$pandac$ASTNode* $tmp2596 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2596));
// unreffing _f2
*(&local45) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2597 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2597));
// unreffing _f1
*(&local44) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block31:;
panda$core$Int64 $tmp2598 = (panda$core$Int64) {15};
panda$core$Bit $tmp2599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2598);
bool $tmp2600 = $tmp2599.value;
if ($tmp2600) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$Position* $tmp2601 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2602 = *$tmp2601;
*(&local46) = $tmp2602;
panda$core$String** $tmp2603 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2604 = *$tmp2603;
*(&local47) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2604));
panda$core$String* $tmp2605 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2605));
*(&local47) = $tmp2604;
org$pandalanguage$pandac$FixedArray** $tmp2606 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2607 = *$tmp2606;
*(&local48) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2607));
org$pandalanguage$pandac$FixedArray* $tmp2608 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2608));
*(&local48) = $tmp2607;
org$pandalanguage$pandac$ASTNode** $tmp2609 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2610 = *$tmp2609;
*(&local49) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2610));
org$pandalanguage$pandac$ASTNode* $tmp2611 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2611));
*(&local49) = $tmp2610;
// line 1
panda$core$String* $tmp2612 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2612));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2613 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2613));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2614 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2614));
org$pandalanguage$pandac$ASTNode* $tmp2615 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2615));
// unreffing _f3
*(&local49) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2616 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2616));
// unreffing _f2
*(&local48) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2617 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2617));
// unreffing _f1
*(&local47) = ((panda$core$String*) NULL);
goto block1;
block33:;
panda$core$Int64 $tmp2618 = (panda$core$Int64) {16};
panda$core$Bit $tmp2619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2618);
bool $tmp2620 = $tmp2619.value;
if ($tmp2620) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp2621 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2622 = *$tmp2621;
*(&local50) = $tmp2622;
org$pandalanguage$pandac$ASTNode** $tmp2623 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2624 = *$tmp2623;
*(&local51) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2624));
org$pandalanguage$pandac$ASTNode* $tmp2625 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2625));
*(&local51) = $tmp2624;
panda$core$String** $tmp2626 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp2627 = *$tmp2626;
*(&local52) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2627));
panda$core$String* $tmp2628 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2628));
*(&local52) = $tmp2627;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2629 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2629));
// line 1
panda$core$String* $tmp2630 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2630));
panda$core$String* $tmp2631 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2631));
// unreffing _f2
*(&local52) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2632 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2632));
// unreffing _f1
*(&local51) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block35:;
panda$core$Int64 $tmp2633 = (panda$core$Int64) {17};
panda$core$Bit $tmp2634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2633);
bool $tmp2635 = $tmp2634.value;
if ($tmp2635) goto block36; else goto block37;
block36:;
org$pandalanguage$pandac$Position* $tmp2636 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2637 = *$tmp2636;
*(&local53) = $tmp2637;
org$pandalanguage$pandac$ASTNode** $tmp2638 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2639 = *$tmp2638;
*(&local54) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2639));
org$pandalanguage$pandac$ASTNode* $tmp2640 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2640));
*(&local54) = $tmp2639;
panda$core$String** $tmp2641 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp2642 = *$tmp2641;
*(&local55) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2642));
panda$core$String* $tmp2643 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2643));
*(&local55) = $tmp2642;
org$pandalanguage$pandac$FixedArray** $tmp2644 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp2645 = *$tmp2644;
*(&local56) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2645));
org$pandalanguage$pandac$FixedArray* $tmp2646 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2646));
*(&local56) = $tmp2645;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2647 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2647));
// line 1
panda$core$String* $tmp2648 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2648));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2649 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2649));
org$pandalanguage$pandac$FixedArray* $tmp2650 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2650));
// unreffing _f3
*(&local56) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2651 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2651));
// unreffing _f2
*(&local55) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2652 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2652));
// unreffing _f1
*(&local54) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block37:;
panda$core$Int64 $tmp2653 = (panda$core$Int64) {18};
panda$core$Bit $tmp2654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2653);
bool $tmp2655 = $tmp2654.value;
if ($tmp2655) goto block38; else goto block39;
block38:;
org$pandalanguage$pandac$Position* $tmp2656 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2657 = *$tmp2656;
*(&local57) = $tmp2657;
org$pandalanguage$pandac$ASTNode** $tmp2658 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2659 = *$tmp2658;
*(&local58) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2659));
org$pandalanguage$pandac$ASTNode* $tmp2660 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2660));
*(&local58) = $tmp2659;
org$pandalanguage$pandac$FixedArray** $tmp2661 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2662 = *$tmp2661;
*(&local59) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2662));
org$pandalanguage$pandac$FixedArray* $tmp2663 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2663));
*(&local59) = $tmp2662;
org$pandalanguage$pandac$ASTNode** $tmp2664 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2665 = *$tmp2664;
*(&local60) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2665));
org$pandalanguage$pandac$ASTNode* $tmp2666 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2666));
*(&local60) = $tmp2665;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2667 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2667));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2668 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2668));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2669 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2669));
org$pandalanguage$pandac$ASTNode* $tmp2670 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2670));
// unreffing _f3
*(&local60) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2671 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2671));
// unreffing _f2
*(&local59) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2672 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2672));
// unreffing _f1
*(&local58) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block39:;
panda$core$Int64 $tmp2673 = (panda$core$Int64) {19};
panda$core$Bit $tmp2674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2673);
bool $tmp2675 = $tmp2674.value;
if ($tmp2675) goto block40; else goto block41;
block40:;
org$pandalanguage$pandac$FixedArray** $tmp2676 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 0);
org$pandalanguage$pandac$FixedArray* $tmp2677 = *$tmp2676;
*(&local61) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2677));
org$pandalanguage$pandac$FixedArray* $tmp2678 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2678));
*(&local61) = $tmp2677;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2679 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2679));
org$pandalanguage$pandac$FixedArray* $tmp2680 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2680));
// unreffing _f0
*(&local61) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block41:;
panda$core$Int64 $tmp2681 = (panda$core$Int64) {20};
panda$core$Bit $tmp2682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2681);
bool $tmp2683 = $tmp2682.value;
if ($tmp2683) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Position* $tmp2684 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2685 = *$tmp2684;
*(&local62) = $tmp2685;
panda$core$String** $tmp2686 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2687 = *$tmp2686;
*(&local63) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2687));
panda$core$String* $tmp2688 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2688));
*(&local63) = $tmp2687;
org$pandalanguage$pandac$ASTNode** $tmp2689 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2690 = *$tmp2689;
*(&local64) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2690));
org$pandalanguage$pandac$ASTNode* $tmp2691 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2691));
*(&local64) = $tmp2690;
org$pandalanguage$pandac$ASTNode** $tmp2692 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2693 = *$tmp2692;
*(&local65) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2693));
org$pandalanguage$pandac$ASTNode* $tmp2694 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2694));
*(&local65) = $tmp2693;
org$pandalanguage$pandac$FixedArray** $tmp2695 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 40);
org$pandalanguage$pandac$FixedArray* $tmp2696 = *$tmp2695;
*(&local66) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2696));
org$pandalanguage$pandac$FixedArray* $tmp2697 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2697));
*(&local66) = $tmp2696;
// line 1
panda$core$String* $tmp2698 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2698));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2699 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2699));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2700 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2700));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2701 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2701));
org$pandalanguage$pandac$FixedArray* $tmp2702 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2702));
// unreffing _f4
*(&local66) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2703 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2703));
// unreffing _f3
*(&local65) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2704 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2704));
// unreffing _f2
*(&local64) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2705 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2705));
// unreffing _f1
*(&local63) = ((panda$core$String*) NULL);
goto block1;
block43:;
panda$core$Int64 $tmp2706 = (panda$core$Int64) {21};
panda$core$Bit $tmp2707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2706);
bool $tmp2708 = $tmp2707.value;
if ($tmp2708) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Position* $tmp2709 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2710 = *$tmp2709;
*(&local67) = $tmp2710;
panda$core$String** $tmp2711 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2712 = *$tmp2711;
*(&local68) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2712));
panda$core$String* $tmp2713 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2713));
*(&local68) = $tmp2712;
org$pandalanguage$pandac$FixedArray** $tmp2714 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2715 = *$tmp2714;
*(&local69) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2715));
org$pandalanguage$pandac$FixedArray* $tmp2716 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2716));
*(&local69) = $tmp2715;
// line 1
panda$core$String* $tmp2717 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2717));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2718 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2718));
org$pandalanguage$pandac$FixedArray* $tmp2719 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2719));
// unreffing _f2
*(&local69) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2720 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2720));
// unreffing _f1
*(&local68) = ((panda$core$String*) NULL);
goto block1;
block45:;
panda$core$Int64 $tmp2721 = (panda$core$Int64) {22};
panda$core$Bit $tmp2722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2721);
bool $tmp2723 = $tmp2722.value;
if ($tmp2723) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Position* $tmp2724 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2725 = *$tmp2724;
*(&local70) = $tmp2725;
panda$core$String** $tmp2726 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2727 = *$tmp2726;
*(&local71) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2727));
panda$core$String* $tmp2728 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2728));
*(&local71) = $tmp2727;
// line 1
panda$core$String* $tmp2729 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2729));
panda$core$String* $tmp2730 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2730));
// unreffing _f1
*(&local71) = ((panda$core$String*) NULL);
goto block1;
block47:;
panda$core$Int64 $tmp2731 = (panda$core$Int64) {23};
panda$core$Bit $tmp2732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2731);
bool $tmp2733 = $tmp2732.value;
if ($tmp2733) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Position* $tmp2734 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2735 = *$tmp2734;
*(&local72) = $tmp2735;
panda$core$String** $tmp2736 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2737 = *$tmp2736;
*(&local73) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2737));
panda$core$String* $tmp2738 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2738));
*(&local73) = $tmp2737;
org$pandalanguage$pandac$FixedArray** $tmp2739 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2740 = *$tmp2739;
*(&local74) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2740));
org$pandalanguage$pandac$FixedArray* $tmp2741 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2741));
*(&local74) = $tmp2740;
// line 1
panda$core$String* $tmp2742 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2742));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2743 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2743));
org$pandalanguage$pandac$FixedArray* $tmp2744 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2744));
// unreffing _f2
*(&local74) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2745 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2745));
// unreffing _f1
*(&local73) = ((panda$core$String*) NULL);
goto block1;
block49:;
panda$core$Int64 $tmp2746 = (panda$core$Int64) {24};
panda$core$Bit $tmp2747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2746);
bool $tmp2748 = $tmp2747.value;
if ($tmp2748) goto block50; else goto block51;
block50:;
org$pandalanguage$pandac$Position* $tmp2749 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2750 = *$tmp2749;
*(&local75) = $tmp2750;
org$pandalanguage$pandac$ASTNode** $tmp2751 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2752 = *$tmp2751;
*(&local76) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2752));
org$pandalanguage$pandac$ASTNode* $tmp2753 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2753));
*(&local76) = $tmp2752;
org$pandalanguage$pandac$FixedArray** $tmp2754 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2755 = *$tmp2754;
*(&local77) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2755));
org$pandalanguage$pandac$FixedArray* $tmp2756 = *(&local77);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2756));
*(&local77) = $tmp2755;
org$pandalanguage$pandac$ASTNode** $tmp2757 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2758 = *$tmp2757;
*(&local78) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2758));
org$pandalanguage$pandac$ASTNode* $tmp2759 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2759));
*(&local78) = $tmp2758;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2760 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2760));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2761 = *(&local77);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2761));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2762 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2762));
org$pandalanguage$pandac$ASTNode* $tmp2763 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2763));
// unreffing _f3
*(&local78) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2764 = *(&local77);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2764));
// unreffing _f2
*(&local77) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2765 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2765));
// unreffing _f1
*(&local76) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block51:;
panda$core$Int64 $tmp2766 = (panda$core$Int64) {25};
panda$core$Bit $tmp2767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2766);
bool $tmp2768 = $tmp2767.value;
if ($tmp2768) goto block52; else goto block53;
block52:;
org$pandalanguage$pandac$Position* $tmp2769 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2770 = *$tmp2769;
*(&local79) = $tmp2770;
panda$core$UInt64* $tmp2771 = (panda$core$UInt64*) (param0->$data + 16);
panda$core$UInt64 $tmp2772 = *$tmp2771;
*(&local80) = $tmp2772;
goto block1;
block53:;
panda$core$Int64 $tmp2773 = (panda$core$Int64) {26};
panda$core$Bit $tmp2774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2773);
bool $tmp2775 = $tmp2774.value;
if ($tmp2775) goto block54; else goto block55;
block54:;
org$pandalanguage$pandac$Position* $tmp2776 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2777 = *$tmp2776;
*(&local81) = $tmp2777;
org$pandalanguage$pandac$IR$Value** $tmp2778 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp2779 = *$tmp2778;
*(&local82) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2779));
org$pandalanguage$pandac$IR$Value* $tmp2780 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2780));
*(&local82) = $tmp2779;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp2781 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2781));
org$pandalanguage$pandac$IR$Value* $tmp2782 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2782));
// unreffing _f1
*(&local82) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block55:;
panda$core$Int64 $tmp2783 = (panda$core$Int64) {27};
panda$core$Bit $tmp2784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2783);
bool $tmp2785 = $tmp2784.value;
if ($tmp2785) goto block56; else goto block57;
block56:;
org$pandalanguage$pandac$Position* $tmp2786 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2787 = *$tmp2786;
*(&local83) = $tmp2787;
panda$core$String** $tmp2788 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2789 = *$tmp2788;
*(&local84) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2789));
panda$core$String* $tmp2790 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2790));
*(&local84) = $tmp2789;
org$pandalanguage$pandac$FixedArray** $tmp2791 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2792 = *$tmp2791;
*(&local85) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2792));
org$pandalanguage$pandac$FixedArray* $tmp2793 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2793));
*(&local85) = $tmp2792;
// line 1
panda$core$String* $tmp2794 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2794));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2795 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2795));
org$pandalanguage$pandac$FixedArray* $tmp2796 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2796));
// unreffing _f2
*(&local85) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2797 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2797));
// unreffing _f1
*(&local84) = ((panda$core$String*) NULL);
goto block1;
block57:;
panda$core$Int64 $tmp2798 = (panda$core$Int64) {28};
panda$core$Bit $tmp2799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2798);
bool $tmp2800 = $tmp2799.value;
if ($tmp2800) goto block58; else goto block59;
block58:;
org$pandalanguage$pandac$Position* $tmp2801 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2802 = *$tmp2801;
*(&local86) = $tmp2802;
org$pandalanguage$pandac$ASTNode** $tmp2803 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2804 = *$tmp2803;
*(&local87) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2804));
org$pandalanguage$pandac$ASTNode* $tmp2805 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2805));
*(&local87) = $tmp2804;
org$pandalanguage$pandac$FixedArray** $tmp2806 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2807 = *$tmp2806;
*(&local88) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2807));
org$pandalanguage$pandac$FixedArray* $tmp2808 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2808));
*(&local88) = $tmp2807;
org$pandalanguage$pandac$FixedArray** $tmp2809 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp2810 = *$tmp2809;
*(&local89) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2810));
org$pandalanguage$pandac$FixedArray* $tmp2811 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2811));
*(&local89) = $tmp2810;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2812 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2812));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2813 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2813));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2814 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2814));
org$pandalanguage$pandac$FixedArray* $tmp2815 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2815));
// unreffing _f3
*(&local89) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2816 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2816));
// unreffing _f2
*(&local88) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2817 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2817));
// unreffing _f1
*(&local87) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block59:;
panda$core$Int64 $tmp2818 = (panda$core$Int64) {29};
panda$core$Bit $tmp2819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2818);
bool $tmp2820 = $tmp2819.value;
if ($tmp2820) goto block60; else goto block61;
block60:;
org$pandalanguage$pandac$Position* $tmp2821 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2822 = *$tmp2821;
*(&local90) = $tmp2822;
org$pandalanguage$pandac$ASTNode** $tmp2823 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2824 = *$tmp2823;
*(&local91) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2824));
org$pandalanguage$pandac$ASTNode* $tmp2825 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2825));
*(&local91) = $tmp2824;
org$pandalanguage$pandac$FixedArray** $tmp2826 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2827 = *$tmp2826;
*(&local92) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2827));
org$pandalanguage$pandac$FixedArray* $tmp2828 = *(&local92);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2828));
*(&local92) = $tmp2827;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2829 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2830 = *$tmp2829;
*(&local93) = $tmp2830;
panda$core$String** $tmp2831 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp2832 = *$tmp2831;
*(&local94) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2832));
panda$core$String* $tmp2833 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2833));
*(&local94) = $tmp2832;
org$pandalanguage$pandac$FixedArray** $tmp2834 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp2835 = *$tmp2834;
*(&local95) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2835));
org$pandalanguage$pandac$FixedArray* $tmp2836 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2836));
*(&local95) = $tmp2835;
org$pandalanguage$pandac$FixedArray** $tmp2837 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp2838 = *$tmp2837;
*(&local96) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2838));
org$pandalanguage$pandac$FixedArray* $tmp2839 = *(&local96);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2839));
*(&local96) = $tmp2838;
org$pandalanguage$pandac$ASTNode** $tmp2840 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp2841 = *$tmp2840;
*(&local97) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2841));
org$pandalanguage$pandac$ASTNode* $tmp2842 = *(&local97);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2842));
*(&local97) = $tmp2841;
org$pandalanguage$pandac$FixedArray** $tmp2843 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 72);
org$pandalanguage$pandac$FixedArray* $tmp2844 = *$tmp2843;
*(&local98) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2844));
org$pandalanguage$pandac$FixedArray* $tmp2845 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2845));
*(&local98) = $tmp2844;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2846 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2846));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2847 = *(&local92);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2847));
// line 1
panda$core$String* $tmp2848 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2848));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2849 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2849));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2850 = *(&local96);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2850));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2851 = *(&local97);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2851));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2852 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2852));
org$pandalanguage$pandac$FixedArray* $tmp2853 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2853));
// unreffing _f8
*(&local98) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2854 = *(&local97);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2854));
// unreffing _f7
*(&local97) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2855 = *(&local96);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2855));
// unreffing _f6
*(&local96) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2856 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2856));
// unreffing _f5
*(&local95) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2857 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2857));
// unreffing _f4
*(&local94) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2858 = *(&local92);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2858));
// unreffing _f2
*(&local92) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2859 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2859));
// unreffing _f1
*(&local91) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block61:;
panda$core$Int64 $tmp2860 = (panda$core$Int64) {30};
panda$core$Bit $tmp2861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2860);
bool $tmp2862 = $tmp2861.value;
if ($tmp2862) goto block62; else goto block63;
block62:;
org$pandalanguage$pandac$Position* $tmp2863 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2864 = *$tmp2863;
*(&local99) = $tmp2864;
org$pandalanguage$pandac$parser$Token$Kind* $tmp2865 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp2866 = *$tmp2865;
*(&local100) = $tmp2866;
org$pandalanguage$pandac$FixedArray** $tmp2867 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2868 = *$tmp2867;
*(&local101) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2868));
org$pandalanguage$pandac$FixedArray* $tmp2869 = *(&local101);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2869));
*(&local101) = $tmp2868;
org$pandalanguage$pandac$ASTNode** $tmp2870 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2871 = *$tmp2870;
*(&local102) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2871));
org$pandalanguage$pandac$ASTNode* $tmp2872 = *(&local102);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2872));
*(&local102) = $tmp2871;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2873 = *(&local101);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2873));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2874 = *(&local102);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2874));
org$pandalanguage$pandac$ASTNode* $tmp2875 = *(&local102);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2875));
// unreffing _f3
*(&local102) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2876 = *(&local101);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2876));
// unreffing _f2
*(&local101) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block63:;
panda$core$Int64 $tmp2877 = (panda$core$Int64) {31};
panda$core$Bit $tmp2878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2877);
bool $tmp2879 = $tmp2878.value;
if ($tmp2879) goto block64; else goto block65;
block64:;
org$pandalanguage$pandac$Position* $tmp2880 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2881 = *$tmp2880;
*(&local103) = $tmp2881;
goto block1;
block65:;
panda$core$Int64 $tmp2882 = (panda$core$Int64) {32};
panda$core$Bit $tmp2883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2882);
bool $tmp2884 = $tmp2883.value;
if ($tmp2884) goto block66; else goto block67;
block66:;
org$pandalanguage$pandac$Position* $tmp2885 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2886 = *$tmp2885;
*(&local104) = $tmp2886;
org$pandalanguage$pandac$ASTNode** $tmp2887 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2888 = *$tmp2887;
*(&local105) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2888));
org$pandalanguage$pandac$ASTNode* $tmp2889 = *(&local105);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2889));
*(&local105) = $tmp2888;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2890 = *(&local105);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2890));
org$pandalanguage$pandac$ASTNode* $tmp2891 = *(&local105);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2891));
// unreffing _f1
*(&local105) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block67:;
panda$core$Int64 $tmp2892 = (panda$core$Int64) {33};
panda$core$Bit $tmp2893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2892);
bool $tmp2894 = $tmp2893.value;
if ($tmp2894) goto block68; else goto block69;
block68:;
org$pandalanguage$pandac$Position* $tmp2895 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2896 = *$tmp2895;
*(&local106) = $tmp2896;
panda$core$String** $tmp2897 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2898 = *$tmp2897;
*(&local107) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2898));
panda$core$String* $tmp2899 = *(&local107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2899));
*(&local107) = $tmp2898;
// line 1
panda$core$String* $tmp2900 = *(&local107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2900));
panda$core$String* $tmp2901 = *(&local107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2901));
// unreffing _f1
*(&local107) = ((panda$core$String*) NULL);
goto block1;
block69:;
panda$core$Int64 $tmp2902 = (panda$core$Int64) {34};
panda$core$Bit $tmp2903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2902);
bool $tmp2904 = $tmp2903.value;
if ($tmp2904) goto block70; else goto block71;
block70:;
org$pandalanguage$pandac$Position* $tmp2905 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2906 = *$tmp2905;
*(&local108) = $tmp2906;
panda$core$String** $tmp2907 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2908 = *$tmp2907;
*(&local109) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2908));
panda$core$String* $tmp2909 = *(&local109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2909));
*(&local109) = $tmp2908;
org$pandalanguage$pandac$ASTNode** $tmp2910 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2911 = *$tmp2910;
*(&local110) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2911));
org$pandalanguage$pandac$ASTNode* $tmp2912 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2912));
*(&local110) = $tmp2911;
// line 1
panda$core$String* $tmp2913 = *(&local109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2913));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2914 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2914));
org$pandalanguage$pandac$ASTNode* $tmp2915 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2915));
// unreffing _f2
*(&local110) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2916 = *(&local109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2916));
// unreffing _f1
*(&local109) = ((panda$core$String*) NULL);
goto block1;
block71:;
panda$core$Int64 $tmp2917 = (panda$core$Int64) {35};
panda$core$Bit $tmp2918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2917);
bool $tmp2919 = $tmp2918.value;
if ($tmp2919) goto block72; else goto block73;
block72:;
org$pandalanguage$pandac$Position* $tmp2920 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2921 = *$tmp2920;
*(&local111) = $tmp2921;
org$pandalanguage$pandac$parser$Token$Kind* $tmp2922 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp2923 = *$tmp2922;
*(&local112) = $tmp2923;
org$pandalanguage$pandac$ASTNode** $tmp2924 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2925 = *$tmp2924;
*(&local113) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2925));
org$pandalanguage$pandac$ASTNode* $tmp2926 = *(&local113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2926));
*(&local113) = $tmp2925;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2927 = *(&local113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2927));
org$pandalanguage$pandac$ASTNode* $tmp2928 = *(&local113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2928));
// unreffing _f2
*(&local113) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block73:;
panda$core$Int64 $tmp2929 = (panda$core$Int64) {36};
panda$core$Bit $tmp2930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2929);
bool $tmp2931 = $tmp2930.value;
if ($tmp2931) goto block74; else goto block75;
block74:;
org$pandalanguage$pandac$Position* $tmp2932 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2933 = *$tmp2932;
*(&local114) = $tmp2933;
org$pandalanguage$pandac$ASTNode** $tmp2934 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2935 = *$tmp2934;
*(&local115) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2935));
org$pandalanguage$pandac$ASTNode* $tmp2936 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2936));
*(&local115) = $tmp2935;
panda$core$Bit* $tmp2937 = (panda$core$Bit*) (param0->$data + 24);
panda$core$Bit $tmp2938 = *$tmp2937;
*(&local116) = $tmp2938;
org$pandalanguage$pandac$ASTNode** $tmp2939 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 25);
org$pandalanguage$pandac$ASTNode* $tmp2940 = *$tmp2939;
*(&local117) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2940));
org$pandalanguage$pandac$ASTNode* $tmp2941 = *(&local117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2941));
*(&local117) = $tmp2940;
org$pandalanguage$pandac$ASTNode** $tmp2942 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 33);
org$pandalanguage$pandac$ASTNode* $tmp2943 = *$tmp2942;
*(&local118) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2943));
org$pandalanguage$pandac$ASTNode* $tmp2944 = *(&local118);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2944));
*(&local118) = $tmp2943;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2945 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2945));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2946 = *(&local117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2946));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2947 = *(&local118);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2947));
org$pandalanguage$pandac$ASTNode* $tmp2948 = *(&local118);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2948));
// unreffing _f4
*(&local118) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2949 = *(&local117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2949));
// unreffing _f3
*(&local117) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2950 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2950));
// unreffing _f1
*(&local115) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block75:;
panda$core$Int64 $tmp2951 = (panda$core$Int64) {37};
panda$core$Bit $tmp2952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2951);
bool $tmp2953 = $tmp2952.value;
if ($tmp2953) goto block76; else goto block77;
block76:;
org$pandalanguage$pandac$Position* $tmp2954 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2955 = *$tmp2954;
*(&local119) = $tmp2955;
panda$core$Real64* $tmp2956 = (panda$core$Real64*) (param0->$data + 16);
panda$core$Real64 $tmp2957 = *$tmp2956;
*(&local120) = $tmp2957;
goto block1;
block77:;
panda$core$Int64 $tmp2958 = (panda$core$Int64) {38};
panda$core$Bit $tmp2959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2958);
bool $tmp2960 = $tmp2959.value;
if ($tmp2960) goto block78; else goto block79;
block78:;
org$pandalanguage$pandac$Position* $tmp2961 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2962 = *$tmp2961;
*(&local121) = $tmp2962;
panda$core$String** $tmp2963 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2964 = *$tmp2963;
*(&local122) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2964));
panda$core$String* $tmp2965 = *(&local122);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2965));
*(&local122) = $tmp2964;
// line 1
panda$core$String* $tmp2966 = *(&local122);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2966));
panda$core$String* $tmp2967 = *(&local122);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2967));
// unreffing _f1
*(&local122) = ((panda$core$String*) NULL);
goto block1;
block79:;
panda$core$Int64 $tmp2968 = (panda$core$Int64) {39};
panda$core$Bit $tmp2969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2968);
bool $tmp2970 = $tmp2969.value;
if ($tmp2970) goto block80; else goto block81;
block80:;
org$pandalanguage$pandac$Position* $tmp2971 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2972 = *$tmp2971;
*(&local123) = $tmp2972;
org$pandalanguage$pandac$ASTNode** $tmp2973 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2974 = *$tmp2973;
*(&local124) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2974));
org$pandalanguage$pandac$ASTNode* $tmp2975 = *(&local124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2975));
*(&local124) = $tmp2974;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2976 = *(&local124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2976));
org$pandalanguage$pandac$ASTNode* $tmp2977 = *(&local124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2977));
// unreffing _f1
*(&local124) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block81:;
panda$core$Int64 $tmp2978 = (panda$core$Int64) {40};
panda$core$Bit $tmp2979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2978);
bool $tmp2980 = $tmp2979.value;
if ($tmp2980) goto block82; else goto block83;
block82:;
org$pandalanguage$pandac$Position* $tmp2981 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2982 = *$tmp2981;
*(&local125) = $tmp2982;
goto block1;
block83:;
panda$core$Int64 $tmp2983 = (panda$core$Int64) {41};
panda$core$Bit $tmp2984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2983);
bool $tmp2985 = $tmp2984.value;
if ($tmp2985) goto block84; else goto block85;
block84:;
org$pandalanguage$pandac$Position* $tmp2986 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2987 = *$tmp2986;
*(&local126) = $tmp2987;
panda$core$String** $tmp2988 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2989 = *$tmp2988;
*(&local127) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2989));
panda$core$String* $tmp2990 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2990));
*(&local127) = $tmp2989;
// line 1
panda$core$String* $tmp2991 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2991));
panda$core$String* $tmp2992 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2992));
// unreffing _f1
*(&local127) = ((panda$core$String*) NULL);
goto block1;
block85:;
panda$core$Int64 $tmp2993 = (panda$core$Int64) {42};
panda$core$Bit $tmp2994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2993);
bool $tmp2995 = $tmp2994.value;
if ($tmp2995) goto block86; else goto block87;
block86:;
org$pandalanguage$pandac$Position* $tmp2996 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2997 = *$tmp2996;
*(&local128) = $tmp2997;
goto block1;
block87:;
panda$core$Int64 $tmp2998 = (panda$core$Int64) {43};
panda$core$Bit $tmp2999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp2998);
bool $tmp3000 = $tmp2999.value;
if ($tmp3000) goto block88; else goto block89;
block88:;
org$pandalanguage$pandac$Position* $tmp3001 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp3002 = *$tmp3001;
*(&local129) = $tmp3002;
org$pandalanguage$pandac$FixedArray** $tmp3003 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp3004 = *$tmp3003;
*(&local130) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3004));
org$pandalanguage$pandac$FixedArray* $tmp3005 = *(&local130);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3005));
*(&local130) = $tmp3004;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp3006 = *(&local130);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3006));
org$pandalanguage$pandac$FixedArray* $tmp3007 = *(&local130);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3007));
// unreffing _f1
*(&local130) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block89:;
panda$core$Int64 $tmp3008 = (panda$core$Int64) {44};
panda$core$Bit $tmp3009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp3008);
bool $tmp3010 = $tmp3009.value;
if ($tmp3010) goto block90; else goto block91;
block90:;
org$pandalanguage$pandac$Position* $tmp3011 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp3012 = *$tmp3011;
*(&local131) = $tmp3012;
org$pandalanguage$pandac$FixedArray** $tmp3013 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp3014 = *$tmp3013;
*(&local132) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3014));
org$pandalanguage$pandac$FixedArray* $tmp3015 = *(&local132);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3015));
*(&local132) = $tmp3014;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp3016 = *(&local132);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3016));
org$pandalanguage$pandac$FixedArray* $tmp3017 = *(&local132);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3017));
// unreffing _f1
*(&local132) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block91:;
panda$core$Int64 $tmp3018 = (panda$core$Int64) {45};
panda$core$Bit $tmp3019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp3018);
bool $tmp3020 = $tmp3019.value;
if ($tmp3020) goto block92; else goto block93;
block92:;
org$pandalanguage$pandac$Position* $tmp3021 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp3022 = *$tmp3021;
*(&local133) = $tmp3022;
panda$core$String** $tmp3023 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp3024 = *$tmp3023;
*(&local134) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3024));
panda$core$String* $tmp3025 = *(&local134);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3025));
*(&local134) = $tmp3024;
// line 1
panda$core$String* $tmp3026 = *(&local134);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3026));
panda$core$String* $tmp3027 = *(&local134);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3027));
// unreffing _f1
*(&local134) = ((panda$core$String*) NULL);
goto block1;
block93:;
panda$core$Int64 $tmp3028 = (panda$core$Int64) {46};
panda$core$Bit $tmp3029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp3028);
bool $tmp3030 = $tmp3029.value;
if ($tmp3030) goto block94; else goto block95;
block94:;
org$pandalanguage$pandac$Position* $tmp3031 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp3032 = *$tmp3031;
*(&local135) = $tmp3032;
org$pandalanguage$pandac$FixedArray** $tmp3033 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp3034 = *$tmp3033;
*(&local136) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3034));
org$pandalanguage$pandac$FixedArray* $tmp3035 = *(&local136);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3035));
*(&local136) = $tmp3034;
org$pandalanguage$pandac$ASTNode** $tmp3036 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp3037 = *$tmp3036;
*(&local137) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3037));
org$pandalanguage$pandac$ASTNode* $tmp3038 = *(&local137);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3038));
*(&local137) = $tmp3037;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp3039 = *(&local136);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3039));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp3040 = *(&local137);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3040));
org$pandalanguage$pandac$ASTNode* $tmp3041 = *(&local137);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3041));
// unreffing _f2
*(&local137) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3042 = *(&local136);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3042));
// unreffing _f1
*(&local136) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block95:;
panda$core$Int64 $tmp3043 = (panda$core$Int64) {47};
panda$core$Bit $tmp3044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp3043);
bool $tmp3045 = $tmp3044.value;
if ($tmp3045) goto block96; else goto block97;
block96:;
org$pandalanguage$pandac$Position* $tmp3046 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp3047 = *$tmp3046;
*(&local138) = $tmp3047;
panda$core$String** $tmp3048 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp3049 = *$tmp3048;
*(&local139) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3049));
panda$core$String* $tmp3050 = *(&local139);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3050));
*(&local139) = $tmp3049;
org$pandalanguage$pandac$ASTNode** $tmp3051 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp3052 = *$tmp3051;
*(&local140) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3052));
org$pandalanguage$pandac$ASTNode* $tmp3053 = *(&local140);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3053));
*(&local140) = $tmp3052;
// line 1
panda$core$String* $tmp3054 = *(&local139);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3054));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp3055 = *(&local140);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3055));
org$pandalanguage$pandac$ASTNode* $tmp3056 = *(&local140);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3056));
// unreffing _f2
*(&local140) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp3057 = *(&local139);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3057));
// unreffing _f1
*(&local139) = ((panda$core$String*) NULL);
goto block1;
block97:;
panda$core$Int64 $tmp3058 = (panda$core$Int64) {48};
panda$core$Bit $tmp3059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp3058);
bool $tmp3060 = $tmp3059.value;
if ($tmp3060) goto block98; else goto block99;
block98:;
org$pandalanguage$pandac$Position* $tmp3061 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp3062 = *$tmp3061;
*(&local141) = $tmp3062;
org$pandalanguage$pandac$FixedArray** $tmp3063 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp3064 = *$tmp3063;
*(&local142) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3064));
org$pandalanguage$pandac$FixedArray* $tmp3065 = *(&local142);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3065));
*(&local142) = $tmp3064;
org$pandalanguage$pandac$ASTNode** $tmp3066 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp3067 = *$tmp3066;
*(&local143) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3067));
org$pandalanguage$pandac$ASTNode* $tmp3068 = *(&local143);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3068));
*(&local143) = $tmp3067;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp3069 = *(&local142);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3069));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp3070 = *(&local143);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3070));
org$pandalanguage$pandac$ASTNode* $tmp3071 = *(&local143);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3071));
// unreffing _f2
*(&local143) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3072 = *(&local142);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3072));
// unreffing _f1
*(&local142) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block99:;
panda$core$Int64 $tmp3073 = (panda$core$Int64) {49};
panda$core$Bit $tmp3074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp3073);
bool $tmp3075 = $tmp3074.value;
if ($tmp3075) goto block100; else goto block101;
block100:;
org$pandalanguage$pandac$Position* $tmp3076 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp3077 = *$tmp3076;
*(&local144) = $tmp3077;
panda$core$String** $tmp3078 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp3079 = *$tmp3078;
*(&local145) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3079));
panda$core$String* $tmp3080 = *(&local145);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3080));
*(&local145) = $tmp3079;
// line 1
panda$core$String* $tmp3081 = *(&local145);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3081));
panda$core$String* $tmp3082 = *(&local145);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3082));
// unreffing _f1
*(&local145) = ((panda$core$String*) NULL);
goto block1;
block101:;
panda$core$Int64 $tmp3083 = (panda$core$Int64) {50};
panda$core$Bit $tmp3084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp3083);
bool $tmp3085 = $tmp3084.value;
if ($tmp3085) goto block102; else goto block103;
block102:;
org$pandalanguage$pandac$Position* $tmp3086 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp3087 = *$tmp3086;
*(&local146) = $tmp3087;
org$pandalanguage$pandac$Variable$Kind* $tmp3088 = (org$pandalanguage$pandac$Variable$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp3089 = *$tmp3088;
*(&local147) = $tmp3089;
org$pandalanguage$pandac$FixedArray** $tmp3090 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp3091 = *$tmp3090;
*(&local148) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3091));
org$pandalanguage$pandac$FixedArray* $tmp3092 = *(&local148);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3092));
*(&local148) = $tmp3091;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp3093 = *(&local148);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3093));
org$pandalanguage$pandac$FixedArray* $tmp3094 = *(&local148);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3094));
// unreffing _f2
*(&local148) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block103:;
panda$core$Int64 $tmp3095 = (panda$core$Int64) {51};
panda$core$Bit $tmp3096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp3095);
bool $tmp3097 = $tmp3096.value;
if ($tmp3097) goto block104; else goto block105;
block104:;
org$pandalanguage$pandac$Position* $tmp3098 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp3099 = *$tmp3098;
*(&local149) = $tmp3099;
org$pandalanguage$pandac$FixedArray** $tmp3100 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp3101 = *$tmp3100;
*(&local150) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3101));
org$pandalanguage$pandac$FixedArray* $tmp3102 = *(&local150);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3102));
*(&local150) = $tmp3101;
org$pandalanguage$pandac$FixedArray** $tmp3103 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp3104 = *$tmp3103;
*(&local151) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3104));
org$pandalanguage$pandac$FixedArray* $tmp3105 = *(&local151);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3105));
*(&local151) = $tmp3104;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp3106 = *(&local150);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3106));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp3107 = *(&local151);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3107));
org$pandalanguage$pandac$FixedArray* $tmp3108 = *(&local151);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3108));
// unreffing _f2
*(&local151) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3109 = *(&local150);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3109));
// unreffing _f1
*(&local150) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block105:;
panda$core$Int64 $tmp3110 = (panda$core$Int64) {52};
panda$core$Bit $tmp3111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, $tmp3110);
bool $tmp3112 = $tmp3111.value;
if ($tmp3112) goto block106; else goto block1;
block106:;
org$pandalanguage$pandac$Position* $tmp3113 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp3114 = *$tmp3113;
*(&local152) = $tmp3114;
panda$core$String** $tmp3115 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp3116 = *$tmp3115;
*(&local153) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3116));
panda$core$String* $tmp3117 = *(&local153);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3117));
*(&local153) = $tmp3116;
org$pandalanguage$pandac$ASTNode** $tmp3118 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp3119 = *$tmp3118;
*(&local154) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3119));
org$pandalanguage$pandac$ASTNode* $tmp3120 = *(&local154);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3120));
*(&local154) = $tmp3119;
org$pandalanguage$pandac$FixedArray** $tmp3121 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp3122 = *$tmp3121;
*(&local155) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3122));
org$pandalanguage$pandac$FixedArray* $tmp3123 = *(&local155);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3123));
*(&local155) = $tmp3122;
// line 1
panda$core$String* $tmp3124 = *(&local153);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3124));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp3125 = *(&local154);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3125));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp3126 = *(&local155);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3126));
org$pandalanguage$pandac$FixedArray* $tmp3127 = *(&local155);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3127));
// unreffing _f3
*(&local155) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3128 = *(&local154);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3128));
// unreffing _f2
*(&local154) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp3129 = *(&local153);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3129));
// unreffing _f1
*(&local153) = ((panda$core$String*) NULL);
goto block1;
block1:;
// line 6
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, panda$core$String* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp3130 = &param0->$rawValue;
*$tmp3130 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3131 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3131 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3132 = (panda$core$String**) (param0->$data + 16);
*$tmp3132 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp3133 = (panda$core$String**) (param0->$data + 24);
*$tmp3133 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3134 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp3134 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$FixedArray* param3) {

// line 6
panda$core$Int64* $tmp3135 = &param0->$rawValue;
*$tmp3135 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3136 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3136 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$FixedArray** $tmp3137 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
*$tmp3137 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp3138 = &param0->$rawValue;
*$tmp3138 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3139 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3139 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3140 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3140 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3141 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3141 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3) {

// line 6
panda$core$Int64* $tmp3142 = &param0->$rawValue;
*$tmp3142 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3143 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3143 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3144 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3144 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2) {

// line 6
panda$core$Int64* $tmp3145 = &param0->$rawValue;
*$tmp3145 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3146 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3146 = param2;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$parser$Token$Kind param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp3147 = &param0->$rawValue;
*$tmp3147 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3148 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3148 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3149 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3149 = param3;
// line 6
org$pandalanguage$pandac$parser$Token$Kind* $tmp3150 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
*$tmp3150 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3151 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp3151 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$Bit param3) {

// line 6
panda$core$Int64* $tmp3152 = &param0->$rawValue;
*$tmp3152 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3153 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3153 = param2;
// line 6
panda$core$Bit* $tmp3154 = (panda$core$Bit*) (param0->$data + 16);
*$tmp3154 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3) {

// line 6
panda$core$Int64* $tmp3155 = &param0->$rawValue;
*$tmp3155 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3156 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3156 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3157 = (panda$core$String**) (param0->$data + 16);
*$tmp3157 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 6
panda$core$Int64* $tmp3158 = &param0->$rawValue;
*$tmp3158 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3159 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3159 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3160 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3160 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3161 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3161 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$core$String* param4, org$pandalanguage$pandac$FixedArray* param5) {

// line 6
panda$core$Int64* $tmp3162 = &param0->$rawValue;
*$tmp3162 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3163 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3163 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3164 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3164 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp3165 = (panda$core$String**) (param0->$data + 24);
*$tmp3165 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$FixedArray** $tmp3166 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
*$tmp3166 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$ChoiceCase* param4, panda$core$Int64 param5) {

// line 6
panda$core$Int64* $tmp3167 = &param0->$rawValue;
*$tmp3167 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3168 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3168 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3169 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3169 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ChoiceCase** $tmp3170 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
*$tmp3170 = param4;
// line 6
panda$core$Int64* $tmp3171 = (panda$core$Int64*) (param0->$data + 32);
*$tmp3171 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$ClassDecl$Kind param5, panda$core$String* param6, org$pandalanguage$pandac$FixedArray* param7, org$pandalanguage$pandac$FixedArray* param8, org$pandalanguage$pandac$FixedArray* param9) {

// line 6
panda$core$Int64* $tmp3172 = &param0->$rawValue;
*$tmp3172 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3173 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3173 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3174 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3174 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3175 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3175 = param4;
// line 6
org$pandalanguage$pandac$ClassDecl$Kind* $tmp3176 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param0->$data + 32);
*$tmp3176 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
panda$core$String** $tmp3177 = (panda$core$String**) (param0->$data + 40);
*$tmp3177 = param6;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param7));
org$pandalanguage$pandac$FixedArray** $tmp3178 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
*$tmp3178 = param7;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
org$pandalanguage$pandac$FixedArray** $tmp3179 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
*$tmp3179 = param8;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param9));
org$pandalanguage$pandac$FixedArray** $tmp3180 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 64);
*$tmp3180 = param9;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp3181 = &param0->$rawValue;
*$tmp3181 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3182 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3182 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3183 = (panda$core$String**) (param0->$data + 16);
*$tmp3183 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3184 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3184 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3185 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp3185 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$core$String* param4) {

// line 6
panda$core$Int64* $tmp3186 = &param0->$rawValue;
*$tmp3186 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3187 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3187 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3188 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3188 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp3189 = (panda$core$String**) (param0->$data + 24);
*$tmp3189 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$core$String* param4, org$pandalanguage$pandac$FixedArray* param5) {

// line 6
panda$core$Int64* $tmp3190 = &param0->$rawValue;
*$tmp3190 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3191 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3191 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3192 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3192 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp3193 = (panda$core$String**) (param0->$data + 24);
*$tmp3193 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$FixedArray** $tmp3194 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
*$tmp3194 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp3195 = &param0->$rawValue;
*$tmp3195 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3196 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3196 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3197 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3197 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3198 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3198 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3199 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp3199 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$FixedArray* param2) {

// line 6
panda$core$Int64* $tmp3200 = &param0->$rawValue;
*$tmp3200 = param1;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$FixedArray** $tmp3201 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 0);
*$tmp3201 = param2;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$ASTNode* param4, org$pandalanguage$pandac$ASTNode* param5, org$pandalanguage$pandac$FixedArray* param6) {

// line 6
panda$core$Int64* $tmp3202 = &param0->$rawValue;
*$tmp3202 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3203 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3203 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3204 = (panda$core$String**) (param0->$data + 16);
*$tmp3204 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3205 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3205 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3206 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp3206 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
org$pandalanguage$pandac$FixedArray** $tmp3207 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 40);
*$tmp3207 = param6;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 6
panda$core$Int64* $tmp3208 = &param0->$rawValue;
*$tmp3208 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3209 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3209 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3210 = (panda$core$String**) (param0->$data + 16);
*$tmp3210 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3211 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3211 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3) {

// line 6
panda$core$Int64* $tmp3212 = &param0->$rawValue;
*$tmp3212 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3213 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3213 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3214 = (panda$core$String**) (param0->$data + 16);
*$tmp3214 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp3215 = &param0->$rawValue;
*$tmp3215 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3216 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3216 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3217 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3217 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3218 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3218 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3219 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp3219 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$UInt64 param3) {

// line 6
panda$core$Int64* $tmp3220 = &param0->$rawValue;
*$tmp3220 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3221 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3221 = param2;
// line 6
panda$core$UInt64* $tmp3222 = (panda$core$UInt64*) (param0->$data + 16);
*$tmp3222 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3) {

// line 6
panda$core$Int64* $tmp3223 = &param0->$rawValue;
*$tmp3223 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3224 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3224 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp3225 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp3225 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 6
panda$core$Int64* $tmp3226 = &param0->$rawValue;
*$tmp3226 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3227 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3227 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3228 = (panda$core$String**) (param0->$data + 16);
*$tmp3228 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3229 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3229 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$FixedArray* param5) {

// line 6
panda$core$Int64* $tmp3230 = &param0->$rawValue;
*$tmp3230 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3231 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3231 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3232 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3232 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3233 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3233 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$FixedArray** $tmp3234 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
*$tmp3234 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$MethodDecl$Kind param5, panda$core$String* param6, org$pandalanguage$pandac$FixedArray* param7, org$pandalanguage$pandac$FixedArray* param8, org$pandalanguage$pandac$ASTNode* param9, org$pandalanguage$pandac$FixedArray* param10) {

// line 6
panda$core$Int64* $tmp3235 = &param0->$rawValue;
*$tmp3235 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3236 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3236 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3237 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3237 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3238 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3238 = param4;
// line 6
org$pandalanguage$pandac$MethodDecl$Kind* $tmp3239 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param0->$data + 32);
*$tmp3239 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
panda$core$String** $tmp3240 = (panda$core$String**) (param0->$data + 40);
*$tmp3240 = param6;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param7));
org$pandalanguage$pandac$FixedArray** $tmp3241 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
*$tmp3241 = param7;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
org$pandalanguage$pandac$FixedArray** $tmp3242 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
*$tmp3242 = param8;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param9));
org$pandalanguage$pandac$ASTNode** $tmp3243 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 64);
*$tmp3243 = param9;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param10));
org$pandalanguage$pandac$FixedArray** $tmp3244 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 72);
*$tmp3244 = param10;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$parser$Token$Kind param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp3245 = &param0->$rawValue;
*$tmp3245 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3246 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3246 = param2;
// line 6
org$pandalanguage$pandac$parser$Token$Kind* $tmp3247 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
*$tmp3247 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3248 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3248 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3249 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp3249 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp3250 = &param0->$rawValue;
*$tmp3250 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3251 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3251 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3252 = (panda$core$String**) (param0->$data + 16);
*$tmp3252 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3253 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3253 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$parser$Token$Kind param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp3254 = &param0->$rawValue;
*$tmp3254 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3255 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3255 = param2;
// line 6
org$pandalanguage$pandac$parser$Token$Kind* $tmp3256 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
*$tmp3256 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3257 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3257 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$core$Bit param4, org$pandalanguage$pandac$ASTNode* param5, org$pandalanguage$pandac$ASTNode* param6) {

// line 6
panda$core$Int64* $tmp3258 = &param0->$rawValue;
*$tmp3258 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3259 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3259 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3260 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3260 = param3;
// line 6
panda$core$Bit* $tmp3261 = (panda$core$Bit*) (param0->$data + 24);
*$tmp3261 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3262 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 25);
*$tmp3262 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
org$pandalanguage$pandac$ASTNode** $tmp3263 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 33);
*$tmp3263 = param6;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$Real64 param3) {

// line 6
panda$core$Int64* $tmp3264 = &param0->$rawValue;
*$tmp3264 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3265 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3265 = param2;
// line 6
panda$core$Real64* $tmp3266 = (panda$core$Real64*) (param0->$data + 16);
*$tmp3266 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3) {

// line 6
panda$core$Int64* $tmp3267 = &param0->$rawValue;
*$tmp3267 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3268 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3268 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3269 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3269 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$FixedArray* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp3270 = &param0->$rawValue;
*$tmp3270 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3271 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3271 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$FixedArray** $tmp3272 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
*$tmp3272 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3273 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3273 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp3274 = &param0->$rawValue;
*$tmp3274 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3275 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3275 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3276 = (panda$core$String**) (param0->$data + 16);
*$tmp3276 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3277 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3277 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$Variable$Kind param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 6
panda$core$Int64* $tmp3278 = &param0->$rawValue;
*$tmp3278 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3279 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3279 = param2;
// line 6
org$pandalanguage$pandac$Variable$Kind* $tmp3280 = (org$pandalanguage$pandac$Variable$Kind*) (param0->$data + 16);
*$tmp3280 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3281 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3281 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$FixedArray* param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 6
panda$core$Int64* $tmp3282 = &param0->$rawValue;
*$tmp3282 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3283 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3283 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$FixedArray** $tmp3284 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
*$tmp3284 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3285 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3285 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$ASTNode* param4, org$pandalanguage$pandac$FixedArray* param5) {

// line 6
panda$core$Int64* $tmp3286 = &param0->$rawValue;
*$tmp3286 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3287 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3287 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3288 = (panda$core$String**) (param0->$data + 16);
*$tmp3288 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3289 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3289 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$FixedArray** $tmp3290 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
*$tmp3290 = param5;
return;

}






