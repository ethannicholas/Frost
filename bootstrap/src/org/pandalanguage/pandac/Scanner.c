#include "org/pandalanguage/pandac/Scanner.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Weak.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/ListView.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/io/File.h"
#include "panda/collections/MapView.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/Stack.h"
#include "panda/collections/HashMap.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/Key.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Scanner$cleanup, org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit, org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT} };

typedef panda$collections$Iterator* (*$fn79)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn86)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn97)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn129)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn136)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn147)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn213)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn283)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn290)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn301)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn396)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn403)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn414)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn442)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn449)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn460)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn505)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn512)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn523)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn554)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn561)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn572)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn606)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn613)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn624)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn651)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn658)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn669)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn695)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn702)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn713)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn727)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn734)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn745)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn816)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn823)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn834)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn857)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn864)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn875)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn889)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn896)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn907)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn931)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn938)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn949)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn962)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn981)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn988)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn999)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1060)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1067)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1078)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1114)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1130)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1265)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1272)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1283)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1303)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1310)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1321)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1510)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1517)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1528)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1560)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn1566)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1575)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1586)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1593)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1604)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1615)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1618)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1653)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1660)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1671)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1688)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1693)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1709)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1716)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1727)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1739)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1815)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1822)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1833)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1847)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1863)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1870)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1881)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1915)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1922)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1933)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x6f\x6e\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x27", 30, -1250916154819313721, NULL };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x68\x61\x76\x65\x20\x61\x20\x62\x6f\x64\x79", 16, -7652461387112275530, NULL };
static panda$core$String $s1213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s1411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s1415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s1434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp2;
    panda$core$Weak* $tmp3;
    panda$core$Weak* $tmp4;
    self->compiler = NULL;
    {
        $tmp2 = self->compiler;
        panda$core$Weak* $tmp5 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp5, ((panda$core$Object*) p_compiler));
        $tmp4 = $tmp5;
        $tmp3 = $tmp4;
        self->compiler = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_type) {
    org$pandalanguage$pandac$ASTNode* $match$19_99 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp10;
    org$pandalanguage$pandac$Position position12;
    panda$core$String* name14 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn15;
    org$pandalanguage$pandac$Type* $tmp17;
    org$pandalanguage$pandac$Type* $tmp18;
    org$pandalanguage$pandac$Position position23;
    org$pandalanguage$pandac$ASTNode* base25 = NULL;
    panda$collections$Array* subtypes30 = NULL;
    panda$collections$Array* $tmp31;
    panda$collections$Array* $tmp32;
    org$pandalanguage$pandac$Type* $tmp34;
    org$pandalanguage$pandac$Type* $finallyReturn35;
    org$pandalanguage$pandac$Type* $tmp37;
    org$pandalanguage$pandac$Type* $tmp38;
    panda$core$String* $tmp40;
    panda$core$Object* $tmp41;
    org$pandalanguage$pandac$Position position50;
    panda$core$String* base52 = NULL;
    panda$collections$ImmutableArray* args54 = NULL;
    panda$collections$Array* subtypes59 = NULL;
    panda$collections$Array* $tmp60;
    panda$collections$Array* $tmp61;
    panda$core$MutableString* name63 = NULL;
    panda$core$MutableString* $tmp64;
    panda$core$MutableString* $tmp65;
    panda$core$Char8 $tmp67;
    panda$core$String* separator68 = NULL;
    panda$core$String* $tmp69;
    panda$collections$Iterator* Iter$31$1774 = NULL;
    panda$collections$Iterator* $tmp75;
    panda$collections$Iterator* $tmp76;
    org$pandalanguage$pandac$ASTNode* arg92 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp93;
    panda$core$Object* $tmp94;
    org$pandalanguage$pandac$Type* subtype99 = NULL;
    org$pandalanguage$pandac$Type* $tmp100;
    org$pandalanguage$pandac$Type* $tmp101;
    panda$core$String* $tmp103;
    panda$core$String* $tmp104;
    panda$core$Char8 $tmp108;
    org$pandalanguage$pandac$Type* $finallyReturn108;
    org$pandalanguage$pandac$Type* $tmp110;
    org$pandalanguage$pandac$Type* $tmp111;
    panda$core$String* $tmp113;
    int $tmp8;
    {
        $tmp10 = p_type;
        $match$19_99 = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_99->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp11.value) {
        {
            org$pandalanguage$pandac$Position* $tmp13 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_99->$data + 0));
            position12 = *$tmp13;
            panda$core$String** $tmp15 = ((panda$core$String**) ((char*) $match$19_99->$data + 16));
            name14 = *$tmp15;
            org$pandalanguage$pandac$Type* $tmp19 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp19, name14, ((panda$core$Int64) { 10 }), position12);
            $tmp18 = $tmp19;
            $tmp17 = $tmp18;
            $finallyReturn15 = $tmp17;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
            $tmp8 = 0;
            goto $l6;
            $l20:;
            return $finallyReturn15;
        }
        }
        else {
        panda$core$Bit $tmp22 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_99->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp22.value) {
        {
            org$pandalanguage$pandac$Position* $tmp24 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_99->$data + 0));
            position23 = *$tmp24;
            org$pandalanguage$pandac$ASTNode** $tmp26 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$19_99->$data + 16));
            base25 = *$tmp26;
            int $tmp29;
            {
                panda$collections$Array* $tmp33 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp33);
                $tmp32 = $tmp33;
                $tmp31 = $tmp32;
                subtypes30 = $tmp31;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp31));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
                org$pandalanguage$pandac$Type* $tmp35 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, base25);
                $tmp34 = $tmp35;
                panda$collections$Array$add$panda$collections$Array$T(subtypes30, ((panda$core$Object*) $tmp34));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
                org$pandalanguage$pandac$Type* $tmp39 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$Object* $tmp42 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes30, ((panda$core$Int64) { 0 }));
                $tmp41 = $tmp42;
                panda$core$String* $tmp44 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp41))->name, &$s43);
                $tmp40 = $tmp44;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp39, $tmp40, ((panda$core$Int64) { 11 }), position23, ((panda$collections$ListView*) subtypes30), ((panda$core$Bit) { false }));
                $tmp38 = $tmp39;
                $tmp37 = $tmp38;
                $finallyReturn35 = $tmp37;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
                panda$core$Panda$unref$panda$core$Object($tmp41);
                $tmp29 = 0;
                goto $l27;
                $l45:;
                $tmp8 = 1;
                goto $l6;
                $l46:;
                return $finallyReturn35;
            }
            $l27:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes30));
            subtypes30 = NULL;
            switch ($tmp29) {
                case 0: goto $l45;
            }
            $l48:;
        }
        }
        else {
        panda$core$Bit $tmp49 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_99->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp49.value) {
        {
            org$pandalanguage$pandac$Position* $tmp51 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_99->$data + 0));
            position50 = *$tmp51;
            panda$core$String** $tmp53 = ((panda$core$String**) ((char*) $match$19_99->$data + 16));
            base52 = *$tmp53;
            panda$collections$ImmutableArray** $tmp55 = ((panda$collections$ImmutableArray**) ((char*) $match$19_99->$data + 24));
            args54 = *$tmp55;
            int $tmp58;
            {
                panda$collections$Array* $tmp62 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp62);
                $tmp61 = $tmp62;
                $tmp60 = $tmp61;
                subtypes59 = $tmp60;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp60));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
                panda$core$MutableString* $tmp66 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp66, base52);
                $tmp65 = $tmp66;
                $tmp64 = $tmp65;
                name63 = $tmp64;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp64));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
                panda$core$Char8$init$panda$core$UInt8(&$tmp67, ((panda$core$UInt8) { 60 }));
                panda$core$MutableString$append$panda$core$Char8(name63, $tmp67);
                $tmp69 = &$s70;
                separator68 = $tmp69;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp69));
                {
                    int $tmp73;
                    {
                        ITable* $tmp77 = ((panda$collections$Iterable*) args54)->$class->itable;
                        while ($tmp77->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp77 = $tmp77->next;
                        }
                        $fn79 $tmp78 = $tmp77->methods[0];
                        panda$collections$Iterator* $tmp80 = $tmp78(((panda$collections$Iterable*) args54));
                        $tmp76 = $tmp80;
                        $tmp75 = $tmp76;
                        Iter$31$1774 = $tmp75;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp75));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp76));
                        $l81:;
                        ITable* $tmp84 = Iter$31$1774->$class->itable;
                        while ($tmp84->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp84 = $tmp84->next;
                        }
                        $fn86 $tmp85 = $tmp84->methods[0];
                        panda$core$Bit $tmp87 = $tmp85(Iter$31$1774);
                        panda$core$Bit $tmp88 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp87);
                        bool $tmp83 = $tmp88.value;
                        if (!$tmp83) goto $l82;
                        {
                            int $tmp91;
                            {
                                ITable* $tmp95 = Iter$31$1774->$class->itable;
                                while ($tmp95->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp95 = $tmp95->next;
                                }
                                $fn97 $tmp96 = $tmp95->methods[1];
                                panda$core$Object* $tmp98 = $tmp96(Iter$31$1774);
                                $tmp94 = $tmp98;
                                $tmp93 = ((org$pandalanguage$pandac$ASTNode*) $tmp94);
                                arg92 = $tmp93;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
                                panda$core$Panda$unref$panda$core$Object($tmp94);
                                org$pandalanguage$pandac$Type* $tmp102 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, arg92);
                                $tmp101 = $tmp102;
                                $tmp100 = $tmp101;
                                subtype99 = $tmp100;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
                                panda$collections$Array$add$panda$collections$Array$T(subtypes59, ((panda$core$Object*) subtype99));
                                panda$core$MutableString$append$panda$core$String(name63, separator68);
                                panda$core$MutableString$append$panda$core$String(name63, ((org$pandalanguage$pandac$Symbol*) subtype99)->name);
                                {
                                    $tmp103 = separator68;
                                    $tmp104 = &$s105;
                                    separator68 = $tmp104;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp104));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
                                }
                            }
                            $tmp91 = -1;
                            goto $l89;
                            $l89:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg92));
                            arg92 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtype99));
                            subtype99 = NULL;
                            switch ($tmp91) {
                                case -1: goto $l106;
                            }
                            $l106:;
                        }
                        goto $l81;
                        $l82:;
                    }
                    $tmp73 = -1;
                    goto $l71;
                    $l71:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$31$1774));
                    Iter$31$1774 = NULL;
                    switch ($tmp73) {
                        case -1: goto $l107;
                    }
                    $l107:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp108, ((panda$core$UInt8) { 62 }));
                panda$core$MutableString$append$panda$core$Char8(name63, $tmp108);
                org$pandalanguage$pandac$Type* $tmp112 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp114 = panda$core$MutableString$finish$R$panda$core$String(name63);
                $tmp113 = $tmp114;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp112, $tmp113, ((panda$core$Int64) { 21 }), position50, ((panda$collections$ListView*) subtypes59), ((panda$core$Bit) { false }));
                $tmp111 = $tmp112;
                $tmp110 = $tmp111;
                $finallyReturn108 = $tmp110;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp110));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp111));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp113));
                $tmp58 = 0;
                goto $l56;
                $l115:;
                $tmp8 = 2;
                goto $l6;
                $l116:;
                return $finallyReturn108;
            }
            $l56:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes59));
            subtypes59 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name63));
            name63 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator68));
            separator68 = NULL;
            switch ($tmp58) {
                case 0: goto $l115;
            }
            $l118:;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
        }
    }
    $tmp8 = -1;
    goto $l6;
    $l6:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    switch ($tmp8) {
        case -1: goto $l119;
        case 1: goto $l46;
        case 2: goto $l116;
        case 0: goto $l20;
    }
    $l119:;
}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, panda$collections$ImmutableArray* p_a) {
    panda$core$Int64 flags120;
    panda$collections$Iterator* Iter$47$9124 = NULL;
    panda$collections$Iterator* $tmp125;
    panda$collections$Iterator* $tmp126;
    org$pandalanguage$pandac$ASTNode* c142 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp143;
    panda$core$Object* $tmp144;
    org$pandalanguage$pandac$ASTNode* $match$48_13152 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp153;
    org$pandalanguage$pandac$Position position155;
    panda$core$String* text157 = NULL;
    panda$core$String* $match$50_21162 = NULL;
    panda$core$String* $tmp163;
    panda$core$Object* $tmp212;
    panda$core$String* $tmp215;
    panda$core$String* $tmp216;
    org$pandalanguage$pandac$Annotations* $finallyReturn224;
    org$pandalanguage$pandac$Annotations* $tmp226;
    org$pandalanguage$pandac$Annotations* $tmp227;
    flags120 = ((panda$core$Int64) { 0 });
    {
        int $tmp123;
        {
            ITable* $tmp127 = ((panda$collections$Iterable*) p_a)->$class->itable;
            while ($tmp127->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp127 = $tmp127->next;
            }
            $fn129 $tmp128 = $tmp127->methods[0];
            panda$collections$Iterator* $tmp130 = $tmp128(((panda$collections$Iterable*) p_a));
            $tmp126 = $tmp130;
            $tmp125 = $tmp126;
            Iter$47$9124 = $tmp125;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp125));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp126));
            $l131:;
            ITable* $tmp134 = Iter$47$9124->$class->itable;
            while ($tmp134->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp134 = $tmp134->next;
            }
            $fn136 $tmp135 = $tmp134->methods[0];
            panda$core$Bit $tmp137 = $tmp135(Iter$47$9124);
            panda$core$Bit $tmp138 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp137);
            bool $tmp133 = $tmp138.value;
            if (!$tmp133) goto $l132;
            {
                int $tmp141;
                {
                    ITable* $tmp145 = Iter$47$9124->$class->itable;
                    while ($tmp145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp145 = $tmp145->next;
                    }
                    $fn147 $tmp146 = $tmp145->methods[1];
                    panda$core$Object* $tmp148 = $tmp146(Iter$47$9124);
                    $tmp144 = $tmp148;
                    $tmp143 = ((org$pandalanguage$pandac$ASTNode*) $tmp144);
                    c142 = $tmp143;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
                    panda$core$Panda$unref$panda$core$Object($tmp144);
                    int $tmp151;
                    {
                        $tmp153 = c142;
                        $match$48_13152 = $tmp153;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp153));
                        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$48_13152->$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp154.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp156 = ((org$pandalanguage$pandac$Position*) ((char*) $match$48_13152->$data + 0));
                            position155 = *$tmp156;
                            panda$core$String** $tmp158 = ((panda$core$String**) ((char*) $match$48_13152->$data + 16));
                            text157 = *$tmp158;
                            int $tmp161;
                            {
                                $tmp163 = text157;
                                $match$50_21162 = $tmp163;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp163));
                                panda$core$Bit $tmp165 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21162, &$s164);
                                if ($tmp165.value) {
                                {
                                    panda$core$Int64 $tmp166 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                                    panda$core$Int64 $tmp167 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags120, $tmp166);
                                    flags120 = $tmp167;
                                }
                                }
                                else {
                                panda$core$Bit $tmp169 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21162, &$s168);
                                if ($tmp169.value) {
                                {
                                    panda$core$Int64 $tmp170 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                                    panda$core$Int64 $tmp171 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags120, $tmp170);
                                    flags120 = $tmp171;
                                }
                                }
                                else {
                                panda$core$Bit $tmp173 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21162, &$s172);
                                if ($tmp173.value) {
                                {
                                    panda$core$Int64 $tmp174 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                                    panda$core$Int64 $tmp175 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags120, $tmp174);
                                    flags120 = $tmp175;
                                }
                                }
                                else {
                                panda$core$Bit $tmp177 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21162, &$s176);
                                if ($tmp177.value) {
                                {
                                    panda$core$Int64 $tmp178 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                                    panda$core$Int64 $tmp179 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags120, $tmp178);
                                    flags120 = $tmp179;
                                }
                                }
                                else {
                                panda$core$Bit $tmp181 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21162, &$s180);
                                if ($tmp181.value) {
                                {
                                    panda$core$Int64 $tmp182 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                                    panda$core$Int64 $tmp183 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags120, $tmp182);
                                    flags120 = $tmp183;
                                }
                                }
                                else {
                                panda$core$Bit $tmp185 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21162, &$s184);
                                if ($tmp185.value) {
                                {
                                    panda$core$Int64 $tmp186 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                                    panda$core$Int64 $tmp187 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags120, $tmp186);
                                    flags120 = $tmp187;
                                }
                                }
                                else {
                                panda$core$Bit $tmp189 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21162, &$s188);
                                if ($tmp189.value) {
                                {
                                    panda$core$Int64 $tmp190 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                                    panda$core$Int64 $tmp191 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags120, $tmp190);
                                    flags120 = $tmp191;
                                }
                                }
                                else {
                                panda$core$Bit $tmp193 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21162, &$s192);
                                if ($tmp193.value) {
                                {
                                    panda$core$Int64 $tmp194 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                                    panda$core$Int64 $tmp195 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags120, $tmp194);
                                    flags120 = $tmp195;
                                }
                                }
                                else {
                                panda$core$Bit $tmp197 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21162, &$s196);
                                if ($tmp197.value) {
                                {
                                    panda$core$Int64 $tmp198 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                                    panda$core$Int64 $tmp199 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags120, $tmp198);
                                    flags120 = $tmp199;
                                }
                                }
                                else {
                                panda$core$Bit $tmp201 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21162, &$s200);
                                if ($tmp201.value) {
                                {
                                    panda$core$Int64 $tmp202 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                                    panda$core$Int64 $tmp203 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags120, $tmp202);
                                    flags120 = $tmp203;
                                }
                                }
                                else {
                                panda$core$Bit $tmp205 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21162, &$s204);
                                if ($tmp205.value) {
                                {
                                    panda$core$Int64 $tmp206 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                                    panda$core$Int64 $tmp207 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags120, $tmp206);
                                    flags120 = $tmp207;
                                }
                                }
                                else {
                                panda$core$Bit $tmp209 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21162, &$s208);
                                if ($tmp209.value) {
                                {
                                    panda$core$Int64 $tmp210 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 12 }));
                                    panda$core$Int64 $tmp211 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags120, $tmp210);
                                    flags120 = $tmp211;
                                }
                                }
                                else {
                                {
                                    panda$core$Object* $tmp214 = (($fn213) self->compiler->$class->vtable[2])(self->compiler);
                                    $tmp212 = $tmp214;
                                    panda$core$String* $tmp218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s217, text157);
                                    $tmp216 = $tmp218;
                                    panda$core$String* $tmp220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp216, &$s219);
                                    $tmp215 = $tmp220;
                                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp212), position155, $tmp215);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp215));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp216));
                                    panda$core$Panda$unref$panda$core$Object($tmp212);
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            $tmp161 = -1;
                            goto $l159;
                            $l159:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp163));
                            switch ($tmp161) {
                                case -1: goto $l221;
                            }
                            $l221:;
                        }
                        }
                        else {
                        {
                            PANDA_ASSERT(((panda$core$Bit) { false }).value);
                        }
                        }
                    }
                    $tmp151 = -1;
                    goto $l149;
                    $l149:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
                    switch ($tmp151) {
                        case -1: goto $l222;
                    }
                    $l222:;
                }
                $tmp141 = -1;
                goto $l139;
                $l139:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c142));
                c142 = NULL;
                switch ($tmp141) {
                    case -1: goto $l223;
                }
                $l223:;
            }
            goto $l131;
            $l132:;
        }
        $tmp123 = -1;
        goto $l121;
        $l121:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$47$9124));
        Iter$47$9124 = NULL;
        switch ($tmp123) {
            case -1: goto $l224;
        }
        $l224:;
    }
    org$pandalanguage$pandac$Annotations* $tmp228 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp228, flags120);
    $tmp227 = $tmp228;
    $tmp226 = $tmp227;
    $finallyReturn224 = $tmp226;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp226));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp227));
    return $finallyReturn224;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment233 = NULL;
    panda$core$String* $tmp234;
    panda$core$String* $tmp235;
    org$pandalanguage$pandac$ASTNode* $match$81_13239 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp240;
    org$pandalanguage$pandac$Position position242;
    panda$core$String* text244 = NULL;
    panda$core$String* $tmp246;
    panda$core$String* $tmp247;
    org$pandalanguage$pandac$Annotations* annotations249 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp250;
    org$pandalanguage$pandac$Annotations* $tmp251;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind253;
    org$pandalanguage$pandac$ASTNode* $match$90_9257 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp258;
    org$pandalanguage$pandac$Variable$Kind kind260;
    panda$collections$ImmutableArray* decls262 = NULL;
    org$pandalanguage$pandac$Variable$Kind $match$92_17264;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp266;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp268;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp270;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp274;
    panda$collections$Iterator* Iter$103$17278 = NULL;
    panda$collections$Iterator* $tmp279;
    panda$collections$Iterator* $tmp280;
    org$pandalanguage$pandac$ASTNode* decl296 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp297;
    panda$core$Object* $tmp298;
    org$pandalanguage$pandac$ASTNode* $match$104_21306 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp307;
    org$pandalanguage$pandac$Position declPosition309;
    org$pandalanguage$pandac$ASTNode* target311 = NULL;
    org$pandalanguage$pandac$ASTNode* value313 = NULL;
    panda$core$String* name318 = NULL;
    org$pandalanguage$pandac$Type* type319 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$108_29323 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp324;
    panda$core$String* id326 = NULL;
    panda$core$String* $tmp328;
    panda$core$String* $tmp329;
    org$pandalanguage$pandac$Type* $tmp330;
    org$pandalanguage$pandac$Type* $tmp331;
    org$pandalanguage$pandac$Type* $tmp332;
    panda$core$String* id335 = NULL;
    org$pandalanguage$pandac$ASTNode* idType337 = NULL;
    panda$core$String* $tmp339;
    panda$core$String* $tmp340;
    org$pandalanguage$pandac$Type* $tmp341;
    org$pandalanguage$pandac$Type* $tmp342;
    org$pandalanguage$pandac$Type* $tmp343;
    org$pandalanguage$pandac$FieldDecl* field346 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp347;
    org$pandalanguage$pandac$FieldDecl* $tmp348;
    int $tmp232;
    {
        memset(&doccomment233, 0, sizeof(doccomment233));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp234 = doccomment233;
                $tmp235 = NULL;
                doccomment233 = $tmp235;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp235));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp234));
            }
        }
        }
        else {
        {
            int $tmp238;
            {
                $tmp240 = p_rawDoccomment;
                $match$81_13239 = $tmp240;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp240));
                panda$core$Bit $tmp241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_13239->$rawValue, ((panda$core$Int64) { 34 }));
                if ($tmp241.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp243 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_13239->$data + 0));
                    position242 = *$tmp243;
                    panda$core$String** $tmp245 = ((panda$core$String**) ((char*) $match$81_13239->$data + 16));
                    text244 = *$tmp245;
                    {
                        $tmp246 = doccomment233;
                        $tmp247 = text244;
                        doccomment233 = $tmp247;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp247));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp238 = -1;
            goto $l236;
            $l236:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp240));
            switch ($tmp238) {
                case -1: goto $l248;
            }
            $l248:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp252 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp251 = $tmp252;
        $tmp250 = $tmp251;
        annotations249 = $tmp250;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp250));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp251));
        memset(&fieldKind253, 0, sizeof(fieldKind253));
        int $tmp256;
        {
            $tmp258 = p_varDecl;
            $match$90_9257 = $tmp258;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp258));
            panda$core$Bit $tmp259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_9257->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp259.value) {
            {
                org$pandalanguage$pandac$Variable$Kind* $tmp261 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$90_9257->$data + 16));
                kind260 = *$tmp261;
                panda$collections$ImmutableArray** $tmp263 = ((panda$collections$ImmutableArray**) ((char*) $match$90_9257->$data + 24));
                decls262 = *$tmp263;
                {
                    $match$92_17264 = kind260;
                    panda$core$Bit $tmp265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$92_17264.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp265.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp266, ((panda$core$Int64) { 0 }));
                        fieldKind253 = $tmp266;
                    }
                    }
                    else {
                    panda$core$Bit $tmp267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$92_17264.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp267.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp268, ((panda$core$Int64) { 1 }));
                        fieldKind253 = $tmp268;
                    }
                    }
                    else {
                    panda$core$Bit $tmp269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$92_17264.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp269.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp270, ((panda$core$Int64) { 2 }));
                        fieldKind253 = $tmp270;
                        panda$core$Int64 $tmp271 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                        panda$core$Int64 $tmp272 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations249->flags, $tmp271);
                        annotations249->flags = $tmp272;
                    }
                    }
                    else {
                    panda$core$Bit $tmp273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$92_17264.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp273.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp274, ((panda$core$Int64) { 3 }));
                        fieldKind253 = $tmp274;
                    }
                    }
                    }
                    }
                    }
                }
                {
                    int $tmp277;
                    {
                        ITable* $tmp281 = ((panda$collections$Iterable*) decls262)->$class->itable;
                        while ($tmp281->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp281 = $tmp281->next;
                        }
                        $fn283 $tmp282 = $tmp281->methods[0];
                        panda$collections$Iterator* $tmp284 = $tmp282(((panda$collections$Iterable*) decls262));
                        $tmp280 = $tmp284;
                        $tmp279 = $tmp280;
                        Iter$103$17278 = $tmp279;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp279));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp280));
                        $l285:;
                        ITable* $tmp288 = Iter$103$17278->$class->itable;
                        while ($tmp288->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp288 = $tmp288->next;
                        }
                        $fn290 $tmp289 = $tmp288->methods[0];
                        panda$core$Bit $tmp291 = $tmp289(Iter$103$17278);
                        panda$core$Bit $tmp292 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp291);
                        bool $tmp287 = $tmp292.value;
                        if (!$tmp287) goto $l286;
                        {
                            int $tmp295;
                            {
                                ITable* $tmp299 = Iter$103$17278->$class->itable;
                                while ($tmp299->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp299 = $tmp299->next;
                                }
                                $fn301 $tmp300 = $tmp299->methods[1];
                                panda$core$Object* $tmp302 = $tmp300(Iter$103$17278);
                                $tmp298 = $tmp302;
                                $tmp297 = ((org$pandalanguage$pandac$ASTNode*) $tmp298);
                                decl296 = $tmp297;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp297));
                                panda$core$Panda$unref$panda$core$Object($tmp298);
                                int $tmp305;
                                {
                                    $tmp307 = decl296;
                                    $match$104_21306 = $tmp307;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp307));
                                    panda$core$Bit $tmp308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$104_21306->$rawValue, ((panda$core$Int64) { 11 }));
                                    if ($tmp308.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp310 = ((org$pandalanguage$pandac$Position*) ((char*) $match$104_21306->$data + 0));
                                        declPosition309 = *$tmp310;
                                        org$pandalanguage$pandac$ASTNode** $tmp312 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$104_21306->$data + 16));
                                        target311 = *$tmp312;
                                        org$pandalanguage$pandac$ASTNode** $tmp314 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$104_21306->$data + 24));
                                        value313 = *$tmp314;
                                        int $tmp317;
                                        {
                                            memset(&name318, 0, sizeof(name318));
                                            memset(&type319, 0, sizeof(type319));
                                            int $tmp322;
                                            {
                                                $tmp324 = target311;
                                                $match$108_29323 = $tmp324;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp324));
                                                panda$core$Bit $tmp325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$108_29323->$rawValue, ((panda$core$Int64) { 18 }));
                                                if ($tmp325.value) {
                                                {
                                                    panda$core$String** $tmp327 = ((panda$core$String**) ((char*) $match$108_29323->$data + 16));
                                                    id326 = *$tmp327;
                                                    {
                                                        $tmp328 = name318;
                                                        $tmp329 = id326;
                                                        name318 = $tmp329;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp329));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp328));
                                                    }
                                                    {
                                                        $tmp330 = type319;
                                                        org$pandalanguage$pandac$Type* $tmp333 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                        $tmp332 = $tmp333;
                                                        $tmp331 = $tmp332;
                                                        type319 = $tmp331;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp331));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
                                                    }
                                                }
                                                }
                                                else {
                                                panda$core$Bit $tmp334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$108_29323->$rawValue, ((panda$core$Int64) { 37 }));
                                                if ($tmp334.value) {
                                                {
                                                    panda$core$String** $tmp336 = ((panda$core$String**) ((char*) $match$108_29323->$data + 16));
                                                    id335 = *$tmp336;
                                                    org$pandalanguage$pandac$ASTNode** $tmp338 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$108_29323->$data + 24));
                                                    idType337 = *$tmp338;
                                                    {
                                                        $tmp339 = name318;
                                                        $tmp340 = id335;
                                                        name318 = $tmp340;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp340));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
                                                    }
                                                    {
                                                        $tmp341 = type319;
                                                        org$pandalanguage$pandac$Type* $tmp344 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType337);
                                                        $tmp343 = $tmp344;
                                                        $tmp342 = $tmp343;
                                                        type319 = $tmp342;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp342));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp341));
                                                    }
                                                }
                                                }
                                                else {
                                                {
                                                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                                                }
                                                }
                                                }
                                            }
                                            $tmp322 = -1;
                                            goto $l320;
                                            $l320:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
                                            switch ($tmp322) {
                                                case -1: goto $l345;
                                            }
                                            $l345:;
                                            org$pandalanguage$pandac$FieldDecl* $tmp349 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp349, p_owner, declPosition309, doccomment233, annotations249, fieldKind253, name318, type319, value313);
                                            $tmp348 = $tmp349;
                                            $tmp347 = $tmp348;
                                            field346 = $tmp347;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp347));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp348));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field346));
                                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field346));
                                        }
                                        $tmp317 = -1;
                                        goto $l315;
                                        $l315:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name318));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type319));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field346));
                                        field346 = NULL;
                                        switch ($tmp317) {
                                            case -1: goto $l350;
                                        }
                                        $l350:;
                                    }
                                    }
                                    else {
                                    {
                                        PANDA_ASSERT(((panda$core$Bit) { false }).value);
                                    }
                                    }
                                }
                                $tmp305 = -1;
                                goto $l303;
                                $l303:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
                                switch ($tmp305) {
                                    case -1: goto $l351;
                                }
                                $l351:;
                            }
                            $tmp295 = -1;
                            goto $l293;
                            $l293:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl296));
                            decl296 = NULL;
                            switch ($tmp295) {
                                case -1: goto $l352;
                            }
                            $l352:;
                        }
                        goto $l285;
                        $l286:;
                    }
                    $tmp277 = -1;
                    goto $l275;
                    $l275:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$103$17278));
                    Iter$103$17278 = NULL;
                    switch ($tmp277) {
                        case -1: goto $l353;
                    }
                    $l353:;
                }
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
        $tmp256 = -1;
        goto $l254;
        $l254:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
        switch ($tmp256) {
            case -1: goto $l354;
        }
        $l354:;
    }
    $tmp232 = -1;
    goto $l230;
    $l230:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment233));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations249));
    annotations249 = NULL;
    switch ($tmp232) {
        case -1: goto $l355;
    }
    $l355:;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$133_9359 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp360;
    org$pandalanguage$pandac$ASTNode* test362 = NULL;
    panda$core$Int64 $finallyReturn363;
    org$pandalanguage$pandac$ASTNode* left369 = NULL;
    org$pandalanguage$pandac$ASTNode* right371 = NULL;
    panda$core$Int64 $finallyReturn372;
    panda$core$Int64 $finallyReturn380;
    panda$collections$ImmutableArray* statements385 = NULL;
    panda$core$Int64 result387;
    panda$collections$Iterator* Iter$142$17391 = NULL;
    panda$collections$Iterator* $tmp392;
    panda$collections$Iterator* $tmp393;
    org$pandalanguage$pandac$ASTNode* s409 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp410;
    panda$core$Object* $tmp411;
    panda$core$Int64 $finallyReturn419;
    panda$core$Int64 $finallyReturn423;
    org$pandalanguage$pandac$ASTNode* target428 = NULL;
    panda$collections$ImmutableArray* args430 = NULL;
    panda$core$Int64 result432;
    panda$collections$Iterator* Iter$150$17437 = NULL;
    panda$collections$Iterator* $tmp438;
    panda$collections$Iterator* $tmp439;
    org$pandalanguage$pandac$ASTNode* a455 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp456;
    panda$core$Object* $tmp457;
    panda$core$Int64 $finallyReturn465;
    org$pandalanguage$pandac$ASTNode* base470 = NULL;
    panda$core$Int64 $finallyReturn471;
    panda$core$Int64 $finallyReturn476;
    org$pandalanguage$pandac$ASTNode* value481 = NULL;
    panda$core$Int64 $finallyReturn482;
    panda$core$Int64 $finallyReturn485;
    panda$collections$ImmutableArray* statements491 = NULL;
    org$pandalanguage$pandac$ASTNode* test493 = NULL;
    panda$core$Int64 result495;
    panda$collections$Iterator* Iter$165$17500 = NULL;
    panda$collections$Iterator* $tmp501;
    panda$collections$Iterator* $tmp502;
    org$pandalanguage$pandac$ASTNode* s518 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp519;
    panda$core$Object* $tmp520;
    panda$core$Int64 $finallyReturn528;
    org$pandalanguage$pandac$ASTNode* base533 = NULL;
    panda$core$Int64 $finallyReturn534;
    org$pandalanguage$pandac$ASTNode* list540 = NULL;
    panda$collections$ImmutableArray* statements542 = NULL;
    panda$core$Int64 result544;
    panda$collections$Iterator* Iter$173$17549 = NULL;
    panda$collections$Iterator* $tmp550;
    panda$collections$Iterator* $tmp551;
    org$pandalanguage$pandac$ASTNode* s567 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp568;
    panda$core$Object* $tmp569;
    panda$core$Int64 $finallyReturn577;
    panda$core$Int64 $finallyReturn581;
    panda$core$Int64 $finallyReturn585;
    org$pandalanguage$pandac$ASTNode* test590 = NULL;
    panda$collections$ImmutableArray* ifTrue592 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse594 = NULL;
    panda$core$Int64 result596;
    panda$collections$Iterator* Iter$183$17601 = NULL;
    panda$collections$Iterator* $tmp602;
    panda$collections$Iterator* $tmp603;
    org$pandalanguage$pandac$ASTNode* s619 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp620;
    panda$core$Object* $tmp621;
    panda$core$Int64 $finallyReturn631;
    panda$core$Int64 $finallyReturn635;
    panda$collections$ImmutableArray* statements640 = NULL;
    panda$core$Int64 result642;
    panda$collections$Iterator* Iter$194$17646 = NULL;
    panda$collections$Iterator* $tmp647;
    panda$collections$Iterator* $tmp648;
    org$pandalanguage$pandac$ASTNode* s664 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp665;
    panda$core$Object* $tmp666;
    panda$core$Int64 $finallyReturn674;
    org$pandalanguage$pandac$ASTNode* value679 = NULL;
    panda$collections$ImmutableArray* whens681 = NULL;
    panda$collections$ImmutableArray* other683 = NULL;
    panda$core$Int64 result685;
    panda$collections$Iterator* Iter$200$17690 = NULL;
    panda$collections$Iterator* $tmp691;
    panda$collections$Iterator* $tmp692;
    org$pandalanguage$pandac$ASTNode* w708 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp709;
    panda$core$Object* $tmp710;
    panda$collections$Iterator* Iter$204$21722 = NULL;
    panda$collections$Iterator* $tmp723;
    panda$collections$Iterator* $tmp724;
    org$pandalanguage$pandac$ASTNode* s740 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp741;
    panda$core$Object* $tmp742;
    panda$core$Int64 $finallyReturn750;
    panda$core$Int64 $finallyReturn754;
    panda$core$Int64 $finallyReturn758;
    org$pandalanguage$pandac$ASTNode* base763 = NULL;
    panda$core$Int64 $finallyReturn764;
    panda$core$Int64 $finallyReturn770;
    panda$core$Int64 $finallyReturn774;
    org$pandalanguage$pandac$ASTNode* value779 = NULL;
    panda$core$Int64 $finallyReturn780;
    panda$core$Int64 $finallyReturn783;
    panda$core$Int64 $finallyReturn788;
    panda$core$Int64 $finallyReturn792;
    panda$core$Int64 $finallyReturn796;
    panda$core$Int64 $finallyReturn800;
    panda$collections$ImmutableArray* decls805 = NULL;
    panda$core$Int64 result807;
    panda$collections$Iterator* Iter$234$17811 = NULL;
    panda$collections$Iterator* $tmp812;
    panda$collections$Iterator* $tmp813;
    org$pandalanguage$pandac$ASTNode* decl829 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp830;
    panda$core$Object* $tmp831;
    panda$core$Int64 $finallyReturn839;
    panda$collections$ImmutableArray* tests844 = NULL;
    panda$collections$ImmutableArray* statements846 = NULL;
    panda$core$Int64 result848;
    panda$collections$Iterator* Iter$240$17852 = NULL;
    panda$collections$Iterator* $tmp853;
    panda$collections$Iterator* $tmp854;
    org$pandalanguage$pandac$ASTNode* test870 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp871;
    panda$core$Object* $tmp872;
    panda$collections$Iterator* Iter$243$17884 = NULL;
    panda$collections$Iterator* $tmp885;
    panda$collections$Iterator* $tmp886;
    org$pandalanguage$pandac$ASTNode* s902 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp903;
    panda$core$Object* $tmp904;
    panda$core$Int64 $finallyReturn912;
    org$pandalanguage$pandac$ASTNode* test917 = NULL;
    panda$collections$ImmutableArray* statements919 = NULL;
    panda$core$Int64 result921;
    panda$collections$Iterator* Iter$249$17926 = NULL;
    panda$collections$Iterator* $tmp927;
    panda$collections$Iterator* $tmp928;
    org$pandalanguage$pandac$ASTNode* s944 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp945;
    panda$core$Object* $tmp946;
    panda$core$Int64 $finallyReturn954;
    int $tmp358;
    {
        $tmp360 = p_node;
        $match$133_9359 = $tmp360;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp360));
        panda$core$Bit $tmp361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp361.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp363 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9359->$data + 16));
            test362 = *$tmp363;
            panda$core$Int64 $tmp365 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test362);
            $finallyReturn363 = $tmp365;
            $tmp358 = 0;
            goto $l356;
            $l366:;
            return $finallyReturn363;
        }
        }
        else {
        panda$core$Bit $tmp368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp368.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp370 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9359->$data + 16));
            left369 = *$tmp370;
            org$pandalanguage$pandac$ASTNode** $tmp372 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9359->$data + 32));
            right371 = *$tmp372;
            panda$core$Int64 $tmp374 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left369);
            panda$core$Int64 $tmp375 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp374);
            panda$core$Int64 $tmp376 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right371);
            panda$core$Int64 $tmp377 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp375, $tmp376);
            $finallyReturn372 = $tmp377;
            $tmp358 = 1;
            goto $l356;
            $l378:;
            return $finallyReturn372;
        }
        }
        else {
        panda$core$Bit $tmp380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp380.value) {
        {
            $finallyReturn380 = ((panda$core$Int64) { 1 });
            $tmp358 = 2;
            goto $l356;
            $l382:;
            return $finallyReturn380;
        }
        }
        else {
        panda$core$Bit $tmp384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp384.value) {
        {
            panda$collections$ImmutableArray** $tmp386 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9359->$data + 16));
            statements385 = *$tmp386;
            result387 = ((panda$core$Int64) { 0 });
            {
                int $tmp390;
                {
                    ITable* $tmp394 = ((panda$collections$Iterable*) statements385)->$class->itable;
                    while ($tmp394->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp394 = $tmp394->next;
                    }
                    $fn396 $tmp395 = $tmp394->methods[0];
                    panda$collections$Iterator* $tmp397 = $tmp395(((panda$collections$Iterable*) statements385));
                    $tmp393 = $tmp397;
                    $tmp392 = $tmp393;
                    Iter$142$17391 = $tmp392;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp392));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp393));
                    $l398:;
                    ITable* $tmp401 = Iter$142$17391->$class->itable;
                    while ($tmp401->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp401 = $tmp401->next;
                    }
                    $fn403 $tmp402 = $tmp401->methods[0];
                    panda$core$Bit $tmp404 = $tmp402(Iter$142$17391);
                    panda$core$Bit $tmp405 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp404);
                    bool $tmp400 = $tmp405.value;
                    if (!$tmp400) goto $l399;
                    {
                        int $tmp408;
                        {
                            ITable* $tmp412 = Iter$142$17391->$class->itable;
                            while ($tmp412->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp412 = $tmp412->next;
                            }
                            $fn414 $tmp413 = $tmp412->methods[1];
                            panda$core$Object* $tmp415 = $tmp413(Iter$142$17391);
                            $tmp411 = $tmp415;
                            $tmp410 = ((org$pandalanguage$pandac$ASTNode*) $tmp411);
                            s409 = $tmp410;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp410));
                            panda$core$Panda$unref$panda$core$Object($tmp411);
                            panda$core$Int64 $tmp416 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s409);
                            panda$core$Int64 $tmp417 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result387, $tmp416);
                            result387 = $tmp417;
                        }
                        $tmp408 = -1;
                        goto $l406;
                        $l406:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s409));
                        s409 = NULL;
                        switch ($tmp408) {
                            case -1: goto $l418;
                        }
                        $l418:;
                    }
                    goto $l398;
                    $l399:;
                }
                $tmp390 = -1;
                goto $l388;
                $l388:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$142$17391));
                Iter$142$17391 = NULL;
                switch ($tmp390) {
                    case -1: goto $l419;
                }
                $l419:;
            }
            $finallyReturn419 = result387;
            $tmp358 = 3;
            goto $l356;
            $l421:;
            return $finallyReturn419;
        }
        }
        else {
        panda$core$Bit $tmp423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp423.value) {
        {
            $finallyReturn423 = ((panda$core$Int64) { 1 });
            $tmp358 = 4;
            goto $l356;
            $l425:;
            return $finallyReturn423;
        }
        }
        else {
        panda$core$Bit $tmp427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp427.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp429 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9359->$data + 16));
            target428 = *$tmp429;
            panda$collections$ImmutableArray** $tmp431 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9359->$data + 24));
            args430 = *$tmp431;
            panda$core$Int64 $tmp433 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target428);
            result432 = $tmp433;
            {
                int $tmp436;
                {
                    ITable* $tmp440 = ((panda$collections$Iterable*) args430)->$class->itable;
                    while ($tmp440->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp440 = $tmp440->next;
                    }
                    $fn442 $tmp441 = $tmp440->methods[0];
                    panda$collections$Iterator* $tmp443 = $tmp441(((panda$collections$Iterable*) args430));
                    $tmp439 = $tmp443;
                    $tmp438 = $tmp439;
                    Iter$150$17437 = $tmp438;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp438));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp439));
                    $l444:;
                    ITable* $tmp447 = Iter$150$17437->$class->itable;
                    while ($tmp447->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp447 = $tmp447->next;
                    }
                    $fn449 $tmp448 = $tmp447->methods[0];
                    panda$core$Bit $tmp450 = $tmp448(Iter$150$17437);
                    panda$core$Bit $tmp451 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp450);
                    bool $tmp446 = $tmp451.value;
                    if (!$tmp446) goto $l445;
                    {
                        int $tmp454;
                        {
                            ITable* $tmp458 = Iter$150$17437->$class->itable;
                            while ($tmp458->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp458 = $tmp458->next;
                            }
                            $fn460 $tmp459 = $tmp458->methods[1];
                            panda$core$Object* $tmp461 = $tmp459(Iter$150$17437);
                            $tmp457 = $tmp461;
                            $tmp456 = ((org$pandalanguage$pandac$ASTNode*) $tmp457);
                            a455 = $tmp456;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp456));
                            panda$core$Panda$unref$panda$core$Object($tmp457);
                            panda$core$Int64 $tmp462 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a455);
                            panda$core$Int64 $tmp463 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result432, $tmp462);
                            result432 = $tmp463;
                        }
                        $tmp454 = -1;
                        goto $l452;
                        $l452:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a455));
                        a455 = NULL;
                        switch ($tmp454) {
                            case -1: goto $l464;
                        }
                        $l464:;
                    }
                    goto $l444;
                    $l445:;
                }
                $tmp436 = -1;
                goto $l434;
                $l434:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$150$17437));
                Iter$150$17437 = NULL;
                switch ($tmp436) {
                    case -1: goto $l465;
                }
                $l465:;
            }
            $finallyReturn465 = result432;
            $tmp358 = 5;
            goto $l356;
            $l467:;
            return $finallyReturn465;
        }
        }
        else {
        panda$core$Bit $tmp469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp469.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp471 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9359->$data + 16));
            base470 = *$tmp471;
            panda$core$Int64 $tmp473 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base470);
            $finallyReturn471 = $tmp473;
            $tmp358 = 6;
            goto $l356;
            $l474:;
            return $finallyReturn471;
        }
        }
        else {
        panda$core$Bit $tmp476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp476.value) {
        {
            $finallyReturn476 = ((panda$core$Int64) { 1 });
            $tmp358 = 7;
            goto $l356;
            $l478:;
            return $finallyReturn476;
        }
        }
        else {
        panda$core$Bit $tmp480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp480.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp482 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9359->$data + 24));
            value481 = *$tmp482;
            if (((panda$core$Bit) { value481 == NULL }).value) {
            {
                $finallyReturn482 = ((panda$core$Int64) { 0 });
                $tmp358 = 8;
                goto $l356;
                $l484:;
                return $finallyReturn482;
            }
            }
            panda$core$Int64 $tmp487 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value481);
            $finallyReturn485 = $tmp487;
            $tmp358 = 9;
            goto $l356;
            $l488:;
            return $finallyReturn485;
        }
        }
        else {
        panda$core$Bit $tmp490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp490.value) {
        {
            panda$collections$ImmutableArray** $tmp492 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9359->$data + 24));
            statements491 = *$tmp492;
            org$pandalanguage$pandac$ASTNode** $tmp494 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9359->$data + 32));
            test493 = *$tmp494;
            panda$core$Int64 $tmp496 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test493);
            result495 = $tmp496;
            {
                int $tmp499;
                {
                    ITable* $tmp503 = ((panda$collections$Iterable*) statements491)->$class->itable;
                    while ($tmp503->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp503 = $tmp503->next;
                    }
                    $fn505 $tmp504 = $tmp503->methods[0];
                    panda$collections$Iterator* $tmp506 = $tmp504(((panda$collections$Iterable*) statements491));
                    $tmp502 = $tmp506;
                    $tmp501 = $tmp502;
                    Iter$165$17500 = $tmp501;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp501));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp502));
                    $l507:;
                    ITable* $tmp510 = Iter$165$17500->$class->itable;
                    while ($tmp510->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp510 = $tmp510->next;
                    }
                    $fn512 $tmp511 = $tmp510->methods[0];
                    panda$core$Bit $tmp513 = $tmp511(Iter$165$17500);
                    panda$core$Bit $tmp514 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp513);
                    bool $tmp509 = $tmp514.value;
                    if (!$tmp509) goto $l508;
                    {
                        int $tmp517;
                        {
                            ITable* $tmp521 = Iter$165$17500->$class->itable;
                            while ($tmp521->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp521 = $tmp521->next;
                            }
                            $fn523 $tmp522 = $tmp521->methods[1];
                            panda$core$Object* $tmp524 = $tmp522(Iter$165$17500);
                            $tmp520 = $tmp524;
                            $tmp519 = ((org$pandalanguage$pandac$ASTNode*) $tmp520);
                            s518 = $tmp519;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp519));
                            panda$core$Panda$unref$panda$core$Object($tmp520);
                            panda$core$Int64 $tmp525 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s518);
                            panda$core$Int64 $tmp526 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result495, $tmp525);
                            result495 = $tmp526;
                        }
                        $tmp517 = -1;
                        goto $l515;
                        $l515:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s518));
                        s518 = NULL;
                        switch ($tmp517) {
                            case -1: goto $l527;
                        }
                        $l527:;
                    }
                    goto $l507;
                    $l508:;
                }
                $tmp499 = -1;
                goto $l497;
                $l497:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$165$17500));
                Iter$165$17500 = NULL;
                switch ($tmp499) {
                    case -1: goto $l528;
                }
                $l528:;
            }
            $finallyReturn528 = result495;
            $tmp358 = 10;
            goto $l356;
            $l530:;
            return $finallyReturn528;
        }
        }
        else {
        panda$core$Bit $tmp532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp532.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp534 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9359->$data + 16));
            base533 = *$tmp534;
            panda$core$Int64 $tmp536 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base533);
            $finallyReturn534 = $tmp536;
            $tmp358 = 11;
            goto $l356;
            $l537:;
            return $finallyReturn534;
        }
        }
        else {
        panda$core$Bit $tmp539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp539.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp541 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9359->$data + 32));
            list540 = *$tmp541;
            panda$collections$ImmutableArray** $tmp543 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9359->$data + 40));
            statements542 = *$tmp543;
            panda$core$Int64 $tmp545 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list540);
            result544 = $tmp545;
            {
                int $tmp548;
                {
                    ITable* $tmp552 = ((panda$collections$Iterable*) statements542)->$class->itable;
                    while ($tmp552->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp552 = $tmp552->next;
                    }
                    $fn554 $tmp553 = $tmp552->methods[0];
                    panda$collections$Iterator* $tmp555 = $tmp553(((panda$collections$Iterable*) statements542));
                    $tmp551 = $tmp555;
                    $tmp550 = $tmp551;
                    Iter$173$17549 = $tmp550;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp550));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp551));
                    $l556:;
                    ITable* $tmp559 = Iter$173$17549->$class->itable;
                    while ($tmp559->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp559 = $tmp559->next;
                    }
                    $fn561 $tmp560 = $tmp559->methods[0];
                    panda$core$Bit $tmp562 = $tmp560(Iter$173$17549);
                    panda$core$Bit $tmp563 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp562);
                    bool $tmp558 = $tmp563.value;
                    if (!$tmp558) goto $l557;
                    {
                        int $tmp566;
                        {
                            ITable* $tmp570 = Iter$173$17549->$class->itable;
                            while ($tmp570->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp570 = $tmp570->next;
                            }
                            $fn572 $tmp571 = $tmp570->methods[1];
                            panda$core$Object* $tmp573 = $tmp571(Iter$173$17549);
                            $tmp569 = $tmp573;
                            $tmp568 = ((org$pandalanguage$pandac$ASTNode*) $tmp569);
                            s567 = $tmp568;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp568));
                            panda$core$Panda$unref$panda$core$Object($tmp569);
                            panda$core$Int64 $tmp574 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s567);
                            panda$core$Int64 $tmp575 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result544, $tmp574);
                            result544 = $tmp575;
                        }
                        $tmp566 = -1;
                        goto $l564;
                        $l564:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s567));
                        s567 = NULL;
                        switch ($tmp566) {
                            case -1: goto $l576;
                        }
                        $l576:;
                    }
                    goto $l556;
                    $l557:;
                }
                $tmp548 = -1;
                goto $l546;
                $l546:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$173$17549));
                Iter$173$17549 = NULL;
                switch ($tmp548) {
                    case -1: goto $l577;
                }
                $l577:;
            }
            $finallyReturn577 = result544;
            $tmp358 = 12;
            goto $l356;
            $l579:;
            return $finallyReturn577;
        }
        }
        else {
        panda$core$Bit $tmp581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp581.value) {
        {
            $finallyReturn581 = ((panda$core$Int64) { 0 });
            $tmp358 = 13;
            goto $l356;
            $l583:;
            return $finallyReturn581;
        }
        }
        else {
        panda$core$Bit $tmp585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp585.value) {
        {
            $finallyReturn585 = ((panda$core$Int64) { 1 });
            $tmp358 = 14;
            goto $l356;
            $l587:;
            return $finallyReturn585;
        }
        }
        else {
        panda$core$Bit $tmp589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp589.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp591 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9359->$data + 16));
            test590 = *$tmp591;
            panda$collections$ImmutableArray** $tmp593 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9359->$data + 24));
            ifTrue592 = *$tmp593;
            org$pandalanguage$pandac$ASTNode** $tmp595 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9359->$data + 32));
            ifFalse594 = *$tmp595;
            panda$core$Int64 $tmp597 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test590);
            result596 = $tmp597;
            {
                int $tmp600;
                {
                    ITable* $tmp604 = ((panda$collections$Iterable*) ifTrue592)->$class->itable;
                    while ($tmp604->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp604 = $tmp604->next;
                    }
                    $fn606 $tmp605 = $tmp604->methods[0];
                    panda$collections$Iterator* $tmp607 = $tmp605(((panda$collections$Iterable*) ifTrue592));
                    $tmp603 = $tmp607;
                    $tmp602 = $tmp603;
                    Iter$183$17601 = $tmp602;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp602));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp603));
                    $l608:;
                    ITable* $tmp611 = Iter$183$17601->$class->itable;
                    while ($tmp611->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp611 = $tmp611->next;
                    }
                    $fn613 $tmp612 = $tmp611->methods[0];
                    panda$core$Bit $tmp614 = $tmp612(Iter$183$17601);
                    panda$core$Bit $tmp615 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp614);
                    bool $tmp610 = $tmp615.value;
                    if (!$tmp610) goto $l609;
                    {
                        int $tmp618;
                        {
                            ITable* $tmp622 = Iter$183$17601->$class->itable;
                            while ($tmp622->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp622 = $tmp622->next;
                            }
                            $fn624 $tmp623 = $tmp622->methods[1];
                            panda$core$Object* $tmp625 = $tmp623(Iter$183$17601);
                            $tmp621 = $tmp625;
                            $tmp620 = ((org$pandalanguage$pandac$ASTNode*) $tmp621);
                            s619 = $tmp620;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp620));
                            panda$core$Panda$unref$panda$core$Object($tmp621);
                            panda$core$Int64 $tmp626 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s619);
                            panda$core$Int64 $tmp627 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result596, $tmp626);
                            result596 = $tmp627;
                        }
                        $tmp618 = -1;
                        goto $l616;
                        $l616:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s619));
                        s619 = NULL;
                        switch ($tmp618) {
                            case -1: goto $l628;
                        }
                        $l628:;
                    }
                    goto $l608;
                    $l609:;
                }
                $tmp600 = -1;
                goto $l598;
                $l598:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$183$17601));
                Iter$183$17601 = NULL;
                switch ($tmp600) {
                    case -1: goto $l629;
                }
                $l629:;
            }
            if (((panda$core$Bit) { ifFalse594 != NULL }).value) {
            {
                panda$core$Int64 $tmp630 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse594);
                panda$core$Int64 $tmp631 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result596, $tmp630);
                result596 = $tmp631;
            }
            }
            $finallyReturn631 = result596;
            $tmp358 = 15;
            goto $l356;
            $l633:;
            return $finallyReturn631;
        }
        }
        else {
        panda$core$Bit $tmp635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp635.value) {
        {
            $finallyReturn635 = ((panda$core$Int64) { 1 });
            $tmp358 = 16;
            goto $l356;
            $l637:;
            return $finallyReturn635;
        }
        }
        else {
        panda$core$Bit $tmp639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp639.value) {
        {
            panda$collections$ImmutableArray** $tmp641 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9359->$data + 24));
            statements640 = *$tmp641;
            result642 = ((panda$core$Int64) { 0 });
            {
                int $tmp645;
                {
                    ITable* $tmp649 = ((panda$collections$Iterable*) statements640)->$class->itable;
                    while ($tmp649->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp649 = $tmp649->next;
                    }
                    $fn651 $tmp650 = $tmp649->methods[0];
                    panda$collections$Iterator* $tmp652 = $tmp650(((panda$collections$Iterable*) statements640));
                    $tmp648 = $tmp652;
                    $tmp647 = $tmp648;
                    Iter$194$17646 = $tmp647;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp647));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp648));
                    $l653:;
                    ITable* $tmp656 = Iter$194$17646->$class->itable;
                    while ($tmp656->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp656 = $tmp656->next;
                    }
                    $fn658 $tmp657 = $tmp656->methods[0];
                    panda$core$Bit $tmp659 = $tmp657(Iter$194$17646);
                    panda$core$Bit $tmp660 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp659);
                    bool $tmp655 = $tmp660.value;
                    if (!$tmp655) goto $l654;
                    {
                        int $tmp663;
                        {
                            ITable* $tmp667 = Iter$194$17646->$class->itable;
                            while ($tmp667->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp667 = $tmp667->next;
                            }
                            $fn669 $tmp668 = $tmp667->methods[1];
                            panda$core$Object* $tmp670 = $tmp668(Iter$194$17646);
                            $tmp666 = $tmp670;
                            $tmp665 = ((org$pandalanguage$pandac$ASTNode*) $tmp666);
                            s664 = $tmp665;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp665));
                            panda$core$Panda$unref$panda$core$Object($tmp666);
                            panda$core$Int64 $tmp671 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s664);
                            panda$core$Int64 $tmp672 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result642, $tmp671);
                            result642 = $tmp672;
                        }
                        $tmp663 = -1;
                        goto $l661;
                        $l661:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s664));
                        s664 = NULL;
                        switch ($tmp663) {
                            case -1: goto $l673;
                        }
                        $l673:;
                    }
                    goto $l653;
                    $l654:;
                }
                $tmp645 = -1;
                goto $l643;
                $l643:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$194$17646));
                Iter$194$17646 = NULL;
                switch ($tmp645) {
                    case -1: goto $l674;
                }
                $l674:;
            }
            $finallyReturn674 = result642;
            $tmp358 = 17;
            goto $l356;
            $l676:;
            return $finallyReturn674;
        }
        }
        else {
        panda$core$Bit $tmp678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp678.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp680 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9359->$data + 16));
            value679 = *$tmp680;
            panda$collections$ImmutableArray** $tmp682 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9359->$data + 24));
            whens681 = *$tmp682;
            panda$collections$ImmutableArray** $tmp684 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9359->$data + 32));
            other683 = *$tmp684;
            panda$core$Int64 $tmp686 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value679);
            result685 = $tmp686;
            {
                int $tmp689;
                {
                    ITable* $tmp693 = ((panda$collections$Iterable*) whens681)->$class->itable;
                    while ($tmp693->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp693 = $tmp693->next;
                    }
                    $fn695 $tmp694 = $tmp693->methods[0];
                    panda$collections$Iterator* $tmp696 = $tmp694(((panda$collections$Iterable*) whens681));
                    $tmp692 = $tmp696;
                    $tmp691 = $tmp692;
                    Iter$200$17690 = $tmp691;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp691));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp692));
                    $l697:;
                    ITable* $tmp700 = Iter$200$17690->$class->itable;
                    while ($tmp700->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp700 = $tmp700->next;
                    }
                    $fn702 $tmp701 = $tmp700->methods[0];
                    panda$core$Bit $tmp703 = $tmp701(Iter$200$17690);
                    panda$core$Bit $tmp704 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp703);
                    bool $tmp699 = $tmp704.value;
                    if (!$tmp699) goto $l698;
                    {
                        int $tmp707;
                        {
                            ITable* $tmp711 = Iter$200$17690->$class->itable;
                            while ($tmp711->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp711 = $tmp711->next;
                            }
                            $fn713 $tmp712 = $tmp711->methods[1];
                            panda$core$Object* $tmp714 = $tmp712(Iter$200$17690);
                            $tmp710 = $tmp714;
                            $tmp709 = ((org$pandalanguage$pandac$ASTNode*) $tmp710);
                            w708 = $tmp709;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp709));
                            panda$core$Panda$unref$panda$core$Object($tmp710);
                            panda$core$Int64 $tmp715 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w708);
                            panda$core$Int64 $tmp716 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result685, $tmp715);
                            result685 = $tmp716;
                        }
                        $tmp707 = -1;
                        goto $l705;
                        $l705:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w708));
                        w708 = NULL;
                        switch ($tmp707) {
                            case -1: goto $l717;
                        }
                        $l717:;
                    }
                    goto $l697;
                    $l698:;
                }
                $tmp689 = -1;
                goto $l687;
                $l687:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$200$17690));
                Iter$200$17690 = NULL;
                switch ($tmp689) {
                    case -1: goto $l718;
                }
                $l718:;
            }
            if (((panda$core$Bit) { other683 != NULL }).value) {
            {
                {
                    int $tmp721;
                    {
                        ITable* $tmp725 = ((panda$collections$Iterable*) other683)->$class->itable;
                        while ($tmp725->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp725 = $tmp725->next;
                        }
                        $fn727 $tmp726 = $tmp725->methods[0];
                        panda$collections$Iterator* $tmp728 = $tmp726(((panda$collections$Iterable*) other683));
                        $tmp724 = $tmp728;
                        $tmp723 = $tmp724;
                        Iter$204$21722 = $tmp723;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp723));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp724));
                        $l729:;
                        ITable* $tmp732 = Iter$204$21722->$class->itable;
                        while ($tmp732->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp732 = $tmp732->next;
                        }
                        $fn734 $tmp733 = $tmp732->methods[0];
                        panda$core$Bit $tmp735 = $tmp733(Iter$204$21722);
                        panda$core$Bit $tmp736 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp735);
                        bool $tmp731 = $tmp736.value;
                        if (!$tmp731) goto $l730;
                        {
                            int $tmp739;
                            {
                                ITable* $tmp743 = Iter$204$21722->$class->itable;
                                while ($tmp743->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp743 = $tmp743->next;
                                }
                                $fn745 $tmp744 = $tmp743->methods[1];
                                panda$core$Object* $tmp746 = $tmp744(Iter$204$21722);
                                $tmp742 = $tmp746;
                                $tmp741 = ((org$pandalanguage$pandac$ASTNode*) $tmp742);
                                s740 = $tmp741;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp741));
                                panda$core$Panda$unref$panda$core$Object($tmp742);
                                panda$core$Int64 $tmp747 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s740);
                                panda$core$Int64 $tmp748 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result685, $tmp747);
                                result685 = $tmp748;
                            }
                            $tmp739 = -1;
                            goto $l737;
                            $l737:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s740));
                            s740 = NULL;
                            switch ($tmp739) {
                                case -1: goto $l749;
                            }
                            $l749:;
                        }
                        goto $l729;
                        $l730:;
                    }
                    $tmp721 = -1;
                    goto $l719;
                    $l719:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$204$21722));
                    Iter$204$21722 = NULL;
                    switch ($tmp721) {
                        case -1: goto $l750;
                    }
                    $l750:;
                }
            }
            }
            $finallyReturn750 = result685;
            $tmp358 = 18;
            goto $l356;
            $l752:;
            return $finallyReturn750;
        }
        }
        else {
        panda$core$Bit $tmp754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp754.value) {
        {
            $finallyReturn754 = ((panda$core$Int64) { 1 });
            $tmp358 = 19;
            goto $l356;
            $l756:;
            return $finallyReturn754;
        }
        }
        else {
        panda$core$Bit $tmp758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp758.value) {
        {
            $finallyReturn758 = ((panda$core$Int64) { 0 });
            $tmp358 = 20;
            goto $l356;
            $l760:;
            return $finallyReturn758;
        }
        }
        else {
        panda$core$Bit $tmp762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp762.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp764 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9359->$data + 24));
            base763 = *$tmp764;
            panda$core$Int64 $tmp766 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base763);
            panda$core$Int64 $tmp767 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp766);
            $finallyReturn764 = $tmp767;
            $tmp358 = 21;
            goto $l356;
            $l768:;
            return $finallyReturn764;
        }
        }
        else {
        panda$core$Bit $tmp770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp770.value) {
        {
            $finallyReturn770 = ((panda$core$Int64) { 1 });
            $tmp358 = 22;
            goto $l356;
            $l772:;
            return $finallyReturn770;
        }
        }
        else {
        panda$core$Bit $tmp774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp774.value) {
        {
            $finallyReturn774 = ((panda$core$Int64) { 1 });
            $tmp358 = 23;
            goto $l356;
            $l776:;
            return $finallyReturn774;
        }
        }
        else {
        panda$core$Bit $tmp778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp778.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp780 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9359->$data + 16));
            value779 = *$tmp780;
            if (((panda$core$Bit) { value779 == NULL }).value) {
            {
                $finallyReturn780 = ((panda$core$Int64) { 0 });
                $tmp358 = 24;
                goto $l356;
                $l782:;
                return $finallyReturn780;
            }
            }
            panda$core$Int64 $tmp785 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value779);
            $finallyReturn783 = $tmp785;
            $tmp358 = 25;
            goto $l356;
            $l786:;
            return $finallyReturn783;
        }
        }
        else {
        panda$core$Bit $tmp788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp788.value) {
        {
            $finallyReturn788 = ((panda$core$Int64) { 1 });
            $tmp358 = 26;
            goto $l356;
            $l790:;
            return $finallyReturn788;
        }
        }
        else {
        panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp792.value) {
        {
            $finallyReturn792 = ((panda$core$Int64) { 1 });
            $tmp358 = 27;
            goto $l356;
            $l794:;
            return $finallyReturn792;
        }
        }
        else {
        panda$core$Bit $tmp796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp796.value) {
        {
            $finallyReturn796 = ((panda$core$Int64) { 1 });
            $tmp358 = 28;
            goto $l356;
            $l798:;
            return $finallyReturn796;
        }
        }
        else {
        panda$core$Bit $tmp800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp800.value) {
        {
            $finallyReturn800 = ((panda$core$Int64) { 0 });
            $tmp358 = 29;
            goto $l356;
            $l802:;
            return $finallyReturn800;
        }
        }
        else {
        panda$core$Bit $tmp804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp804.value) {
        {
            panda$collections$ImmutableArray** $tmp806 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9359->$data + 24));
            decls805 = *$tmp806;
            result807 = ((panda$core$Int64) { 0 });
            {
                int $tmp810;
                {
                    ITable* $tmp814 = ((panda$collections$Iterable*) decls805)->$class->itable;
                    while ($tmp814->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp814 = $tmp814->next;
                    }
                    $fn816 $tmp815 = $tmp814->methods[0];
                    panda$collections$Iterator* $tmp817 = $tmp815(((panda$collections$Iterable*) decls805));
                    $tmp813 = $tmp817;
                    $tmp812 = $tmp813;
                    Iter$234$17811 = $tmp812;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp812));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp813));
                    $l818:;
                    ITable* $tmp821 = Iter$234$17811->$class->itable;
                    while ($tmp821->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp821 = $tmp821->next;
                    }
                    $fn823 $tmp822 = $tmp821->methods[0];
                    panda$core$Bit $tmp824 = $tmp822(Iter$234$17811);
                    panda$core$Bit $tmp825 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp824);
                    bool $tmp820 = $tmp825.value;
                    if (!$tmp820) goto $l819;
                    {
                        int $tmp828;
                        {
                            ITable* $tmp832 = Iter$234$17811->$class->itable;
                            while ($tmp832->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp832 = $tmp832->next;
                            }
                            $fn834 $tmp833 = $tmp832->methods[1];
                            panda$core$Object* $tmp835 = $tmp833(Iter$234$17811);
                            $tmp831 = $tmp835;
                            $tmp830 = ((org$pandalanguage$pandac$ASTNode*) $tmp831);
                            decl829 = $tmp830;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp830));
                            panda$core$Panda$unref$panda$core$Object($tmp831);
                            panda$core$Int64 $tmp836 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl829);
                            panda$core$Int64 $tmp837 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result807, $tmp836);
                            result807 = $tmp837;
                        }
                        $tmp828 = -1;
                        goto $l826;
                        $l826:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl829));
                        decl829 = NULL;
                        switch ($tmp828) {
                            case -1: goto $l838;
                        }
                        $l838:;
                    }
                    goto $l818;
                    $l819:;
                }
                $tmp810 = -1;
                goto $l808;
                $l808:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$234$17811));
                Iter$234$17811 = NULL;
                switch ($tmp810) {
                    case -1: goto $l839;
                }
                $l839:;
            }
            $finallyReturn839 = result807;
            $tmp358 = 30;
            goto $l356;
            $l841:;
            return $finallyReturn839;
        }
        }
        else {
        panda$core$Bit $tmp843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp843.value) {
        {
            panda$collections$ImmutableArray** $tmp845 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9359->$data + 16));
            tests844 = *$tmp845;
            panda$collections$ImmutableArray** $tmp847 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9359->$data + 24));
            statements846 = *$tmp847;
            result848 = ((panda$core$Int64) { 0 });
            {
                int $tmp851;
                {
                    ITable* $tmp855 = ((panda$collections$Iterable*) tests844)->$class->itable;
                    while ($tmp855->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp855 = $tmp855->next;
                    }
                    $fn857 $tmp856 = $tmp855->methods[0];
                    panda$collections$Iterator* $tmp858 = $tmp856(((panda$collections$Iterable*) tests844));
                    $tmp854 = $tmp858;
                    $tmp853 = $tmp854;
                    Iter$240$17852 = $tmp853;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp853));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp854));
                    $l859:;
                    ITable* $tmp862 = Iter$240$17852->$class->itable;
                    while ($tmp862->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp862 = $tmp862->next;
                    }
                    $fn864 $tmp863 = $tmp862->methods[0];
                    panda$core$Bit $tmp865 = $tmp863(Iter$240$17852);
                    panda$core$Bit $tmp866 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp865);
                    bool $tmp861 = $tmp866.value;
                    if (!$tmp861) goto $l860;
                    {
                        int $tmp869;
                        {
                            ITable* $tmp873 = Iter$240$17852->$class->itable;
                            while ($tmp873->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp873 = $tmp873->next;
                            }
                            $fn875 $tmp874 = $tmp873->methods[1];
                            panda$core$Object* $tmp876 = $tmp874(Iter$240$17852);
                            $tmp872 = $tmp876;
                            $tmp871 = ((org$pandalanguage$pandac$ASTNode*) $tmp872);
                            test870 = $tmp871;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp871));
                            panda$core$Panda$unref$panda$core$Object($tmp872);
                            panda$core$Int64 $tmp877 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test870);
                            panda$core$Int64 $tmp878 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result848, $tmp877);
                            result848 = $tmp878;
                        }
                        $tmp869 = -1;
                        goto $l867;
                        $l867:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test870));
                        test870 = NULL;
                        switch ($tmp869) {
                            case -1: goto $l879;
                        }
                        $l879:;
                    }
                    goto $l859;
                    $l860:;
                }
                $tmp851 = -1;
                goto $l849;
                $l849:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$240$17852));
                Iter$240$17852 = NULL;
                switch ($tmp851) {
                    case -1: goto $l880;
                }
                $l880:;
            }
            {
                int $tmp883;
                {
                    ITable* $tmp887 = ((panda$collections$Iterable*) statements846)->$class->itable;
                    while ($tmp887->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp887 = $tmp887->next;
                    }
                    $fn889 $tmp888 = $tmp887->methods[0];
                    panda$collections$Iterator* $tmp890 = $tmp888(((panda$collections$Iterable*) statements846));
                    $tmp886 = $tmp890;
                    $tmp885 = $tmp886;
                    Iter$243$17884 = $tmp885;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp885));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp886));
                    $l891:;
                    ITable* $tmp894 = Iter$243$17884->$class->itable;
                    while ($tmp894->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp894 = $tmp894->next;
                    }
                    $fn896 $tmp895 = $tmp894->methods[0];
                    panda$core$Bit $tmp897 = $tmp895(Iter$243$17884);
                    panda$core$Bit $tmp898 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp897);
                    bool $tmp893 = $tmp898.value;
                    if (!$tmp893) goto $l892;
                    {
                        int $tmp901;
                        {
                            ITable* $tmp905 = Iter$243$17884->$class->itable;
                            while ($tmp905->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp905 = $tmp905->next;
                            }
                            $fn907 $tmp906 = $tmp905->methods[1];
                            panda$core$Object* $tmp908 = $tmp906(Iter$243$17884);
                            $tmp904 = $tmp908;
                            $tmp903 = ((org$pandalanguage$pandac$ASTNode*) $tmp904);
                            s902 = $tmp903;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp903));
                            panda$core$Panda$unref$panda$core$Object($tmp904);
                            panda$core$Int64 $tmp909 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s902);
                            panda$core$Int64 $tmp910 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result848, $tmp909);
                            result848 = $tmp910;
                        }
                        $tmp901 = -1;
                        goto $l899;
                        $l899:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s902));
                        s902 = NULL;
                        switch ($tmp901) {
                            case -1: goto $l911;
                        }
                        $l911:;
                    }
                    goto $l891;
                    $l892:;
                }
                $tmp883 = -1;
                goto $l881;
                $l881:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$243$17884));
                Iter$243$17884 = NULL;
                switch ($tmp883) {
                    case -1: goto $l912;
                }
                $l912:;
            }
            $finallyReturn912 = result848;
            $tmp358 = 31;
            goto $l356;
            $l914:;
            return $finallyReturn912;
        }
        }
        else {
        panda$core$Bit $tmp916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9359->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp916.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp918 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9359->$data + 24));
            test917 = *$tmp918;
            panda$collections$ImmutableArray** $tmp920 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9359->$data + 32));
            statements919 = *$tmp920;
            panda$core$Int64 $tmp922 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test917);
            result921 = $tmp922;
            {
                int $tmp925;
                {
                    ITable* $tmp929 = ((panda$collections$Iterable*) statements919)->$class->itable;
                    while ($tmp929->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp929 = $tmp929->next;
                    }
                    $fn931 $tmp930 = $tmp929->methods[0];
                    panda$collections$Iterator* $tmp932 = $tmp930(((panda$collections$Iterable*) statements919));
                    $tmp928 = $tmp932;
                    $tmp927 = $tmp928;
                    Iter$249$17926 = $tmp927;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp927));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp928));
                    $l933:;
                    ITable* $tmp936 = Iter$249$17926->$class->itable;
                    while ($tmp936->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp936 = $tmp936->next;
                    }
                    $fn938 $tmp937 = $tmp936->methods[0];
                    panda$core$Bit $tmp939 = $tmp937(Iter$249$17926);
                    panda$core$Bit $tmp940 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp939);
                    bool $tmp935 = $tmp940.value;
                    if (!$tmp935) goto $l934;
                    {
                        int $tmp943;
                        {
                            ITable* $tmp947 = Iter$249$17926->$class->itable;
                            while ($tmp947->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp947 = $tmp947->next;
                            }
                            $fn949 $tmp948 = $tmp947->methods[1];
                            panda$core$Object* $tmp950 = $tmp948(Iter$249$17926);
                            $tmp946 = $tmp950;
                            $tmp945 = ((org$pandalanguage$pandac$ASTNode*) $tmp946);
                            s944 = $tmp945;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp945));
                            panda$core$Panda$unref$panda$core$Object($tmp946);
                            panda$core$Int64 $tmp951 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s944);
                            panda$core$Int64 $tmp952 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result921, $tmp951);
                            result921 = $tmp952;
                        }
                        $tmp943 = -1;
                        goto $l941;
                        $l941:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s944));
                        s944 = NULL;
                        switch ($tmp943) {
                            case -1: goto $l953;
                        }
                        $l953:;
                    }
                    goto $l933;
                    $l934:;
                }
                $tmp925 = -1;
                goto $l923;
                $l923:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$249$17926));
                Iter$249$17926 = NULL;
                switch ($tmp925) {
                    case -1: goto $l954;
                }
                $l954:;
            }
            $finallyReturn954 = result921;
            $tmp358 = 32;
            goto $l356;
            $l956:;
            return $finallyReturn954;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp358 = -1;
    goto $l356;
    $l356:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp360));
    switch ($tmp358) {
        case 10: goto $l530;
        case 2: goto $l382;
        case 32: goto $l956;
        case 3: goto $l421;
        case 22: goto $l772;
        case -1: goto $l958;
        case 26: goto $l790;
        case 16: goto $l637;
        case 21: goto $l768;
        case 1: goto $l378;
        case 4: goto $l425;
        case 31: goto $l914;
        case 30: goto $l841;
        case 14: goto $l587;
        case 15: goto $l633;
        case 0: goto $l366;
        case 9: goto $l488;
        case 27: goto $l794;
        case 11: goto $l537;
        case 28: goto $l798;
        case 29: goto $l802;
        case 24: goto $l782;
        case 18: goto $l752;
        case 19: goto $l756;
        case 23: goto $l776;
        case 7: goto $l478;
        case 20: goto $l760;
        case 25: goto $l786;
        case 8: goto $l484;
        case 5: goto $l467;
        case 6: goto $l474;
        case 17: goto $l676;
        case 12: goto $l579;
        case 13: goto $l583;
    }
    $l958:;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Object* $tmp961;
    panda$core$Int64 c972;
    panda$collections$Iterator* Iter$262$13976 = NULL;
    panda$collections$Iterator* $tmp977;
    panda$collections$Iterator* $tmp978;
    org$pandalanguage$pandac$ASTNode* s994 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp995;
    panda$core$Object* $tmp996;
    panda$core$Bit $finallyReturn1003;
    panda$core$Bit $finallyReturn1009;
    panda$core$Bit $finallyReturn1011;
    panda$core$Object* $tmp963 = (($fn962) self->compiler->$class->vtable[2])(self->compiler);
    $tmp961 = $tmp963;
    panda$core$Bit $tmp964 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp961)->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp960 = $tmp964.value;
    panda$core$Panda$unref$panda$core$Object($tmp961);
    if (!$tmp960) goto $l965;
    panda$core$Bit $tmp966 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp967 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp966);
    $tmp960 = $tmp967.value;
    $l965:;
    panda$core$Bit $tmp968 = { $tmp960 };
    bool $tmp959 = $tmp968.value;
    if (!$tmp959) goto $l969;
    panda$core$Bit $tmp970 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp959 = $tmp970.value;
    $l969:;
    panda$core$Bit $tmp971 = { $tmp959 };
    if ($tmp971.value) {
    {
        c972 = ((panda$core$Int64) { 0 });
        {
            int $tmp975;
            {
                ITable* $tmp979 = ((panda$collections$Iterable*) p_statements)->$class->itable;
                while ($tmp979->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp979 = $tmp979->next;
                }
                $fn981 $tmp980 = $tmp979->methods[0];
                panda$collections$Iterator* $tmp982 = $tmp980(((panda$collections$Iterable*) p_statements));
                $tmp978 = $tmp982;
                $tmp977 = $tmp978;
                Iter$262$13976 = $tmp977;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp977));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp978));
                $l983:;
                ITable* $tmp986 = Iter$262$13976->$class->itable;
                while ($tmp986->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp986 = $tmp986->next;
                }
                $fn988 $tmp987 = $tmp986->methods[0];
                panda$core$Bit $tmp989 = $tmp987(Iter$262$13976);
                panda$core$Bit $tmp990 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp989);
                bool $tmp985 = $tmp990.value;
                if (!$tmp985) goto $l984;
                {
                    int $tmp993;
                    {
                        ITable* $tmp997 = Iter$262$13976->$class->itable;
                        while ($tmp997->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp997 = $tmp997->next;
                        }
                        $fn999 $tmp998 = $tmp997->methods[1];
                        panda$core$Object* $tmp1000 = $tmp998(Iter$262$13976);
                        $tmp996 = $tmp1000;
                        $tmp995 = ((org$pandalanguage$pandac$ASTNode*) $tmp996);
                        s994 = $tmp995;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp995));
                        panda$core$Panda$unref$panda$core$Object($tmp996);
                        panda$core$Int64 $tmp1001 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s994);
                        panda$core$Int64 $tmp1002 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c972, $tmp1001);
                        c972 = $tmp1002;
                        panda$core$Bit $tmp1003 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c972, ((panda$core$Int64) { 10 }));
                        if ($tmp1003.value) {
                        {
                            $finallyReturn1003 = ((panda$core$Bit) { false });
                            $tmp993 = 0;
                            goto $l991;
                            $l1005:;
                            $tmp975 = 0;
                            goto $l973;
                            $l1006:;
                            return $finallyReturn1003;
                        }
                        }
                    }
                    $tmp993 = -1;
                    goto $l991;
                    $l991:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s994));
                    s994 = NULL;
                    switch ($tmp993) {
                        case 0: goto $l1005;
                        case -1: goto $l1008;
                    }
                    $l1008:;
                }
                goto $l983;
                $l984:;
            }
            $tmp975 = -1;
            goto $l973;
            $l973:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$262$13976));
            Iter$262$13976 = NULL;
            switch ($tmp975) {
                case -1: goto $l1009;
                case 0: goto $l1006;
            }
            $l1009:;
        }
        $finallyReturn1009 = ((panda$core$Bit) { true });
        return $finallyReturn1009;
    }
    }
    $finallyReturn1011 = ((panda$core$Bit) { false });
    return $finallyReturn1011;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment1017 = NULL;
    panda$core$String* $tmp1018;
    panda$core$String* $tmp1019;
    org$pandalanguage$pandac$ASTNode* $match$283_131023 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1024;
    org$pandalanguage$pandac$Position position1026;
    panda$core$String* text1028 = NULL;
    panda$core$String* $tmp1030;
    panda$core$String* $tmp1031;
    org$pandalanguage$pandac$Annotations* annotations1033 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1034;
    org$pandalanguage$pandac$Annotations* $tmp1035;
    panda$collections$Array* parameters1048 = NULL;
    panda$collections$Array* $tmp1049;
    panda$collections$Array* $tmp1050;
    panda$collections$Iterator* Iter$295$91055 = NULL;
    panda$collections$Iterator* $tmp1056;
    panda$collections$Iterator* $tmp1057;
    org$pandalanguage$pandac$ASTNode* p1073 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1074;
    panda$core$Object* $tmp1075;
    org$pandalanguage$pandac$ASTNode* $match$296_131083 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1084;
    panda$core$String* name1086 = NULL;
    org$pandalanguage$pandac$ASTNode* type1088 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1090;
    org$pandalanguage$pandac$Type* $tmp1092;
    org$pandalanguage$pandac$Type* returnType1097 = NULL;
    org$pandalanguage$pandac$Type* $tmp1098;
    org$pandalanguage$pandac$Type* $tmp1099;
    org$pandalanguage$pandac$Type* $tmp1100;
    org$pandalanguage$pandac$Type* $tmp1102;
    org$pandalanguage$pandac$Type* $tmp1103;
    org$pandalanguage$pandac$Type* $tmp1104;
    org$pandalanguage$pandac$Type* $tmp1109;
    panda$core$Object* $tmp1113;
    panda$core$Object* $tmp1129;
    panda$core$String* $tmp1132;
    panda$core$String* $tmp1133;
    org$pandalanguage$pandac$MethodDecl* $finallyReturn1137;
    org$pandalanguage$pandac$MethodDecl* $tmp1139;
    org$pandalanguage$pandac$MethodDecl* $tmp1140;
    int $tmp1016;
    {
        memset(&doccomment1017, 0, sizeof(doccomment1017));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1018 = doccomment1017;
                $tmp1019 = NULL;
                doccomment1017 = $tmp1019;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1019));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1018));
            }
        }
        }
        else {
        {
            int $tmp1022;
            {
                $tmp1024 = p_rawDoccomment;
                $match$283_131023 = $tmp1024;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1024));
                panda$core$Bit $tmp1025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$283_131023->$rawValue, ((panda$core$Int64) { 34 }));
                if ($tmp1025.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1027 = ((org$pandalanguage$pandac$Position*) ((char*) $match$283_131023->$data + 0));
                    position1026 = *$tmp1027;
                    panda$core$String** $tmp1029 = ((panda$core$String**) ((char*) $match$283_131023->$data + 16));
                    text1028 = *$tmp1029;
                    {
                        $tmp1030 = doccomment1017;
                        $tmp1031 = text1028;
                        doccomment1017 = $tmp1031;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1031));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1030));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1022 = -1;
            goto $l1020;
            $l1020:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1024));
            switch ($tmp1022) {
                case -1: goto $l1032;
            }
            $l1032:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1036 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1035 = $tmp1036;
        $tmp1034 = $tmp1035;
        annotations1033 = $tmp1034;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1034));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1035));
        panda$core$Bit $tmp1039 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        bool $tmp1038 = $tmp1039.value;
        if (!$tmp1038) goto $l1040;
        panda$core$Bit $tmp1041 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
        $tmp1038 = $tmp1041.value;
        $l1040:;
        panda$core$Bit $tmp1042 = { $tmp1038 };
        bool $tmp1037 = $tmp1042.value;
        if ($tmp1037) goto $l1043;
        panda$core$Bit $tmp1044 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations1033);
        $tmp1037 = $tmp1044.value;
        $l1043:;
        panda$core$Bit $tmp1045 = { $tmp1037 };
        if ($tmp1045.value) {
        {
            panda$core$Int64 $tmp1046 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
            panda$core$Int64 $tmp1047 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1033->flags, $tmp1046);
            annotations1033->flags = $tmp1047;
        }
        }
        panda$collections$Array* $tmp1051 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1051);
        $tmp1050 = $tmp1051;
        $tmp1049 = $tmp1050;
        parameters1048 = $tmp1049;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1049));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1050));
        {
            int $tmp1054;
            {
                ITable* $tmp1058 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1058->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1058 = $tmp1058->next;
                }
                $fn1060 $tmp1059 = $tmp1058->methods[0];
                panda$collections$Iterator* $tmp1061 = $tmp1059(((panda$collections$Iterable*) p_rawParameters));
                $tmp1057 = $tmp1061;
                $tmp1056 = $tmp1057;
                Iter$295$91055 = $tmp1056;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1056));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1057));
                $l1062:;
                ITable* $tmp1065 = Iter$295$91055->$class->itable;
                while ($tmp1065->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1065 = $tmp1065->next;
                }
                $fn1067 $tmp1066 = $tmp1065->methods[0];
                panda$core$Bit $tmp1068 = $tmp1066(Iter$295$91055);
                panda$core$Bit $tmp1069 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1068);
                bool $tmp1064 = $tmp1069.value;
                if (!$tmp1064) goto $l1063;
                {
                    int $tmp1072;
                    {
                        ITable* $tmp1076 = Iter$295$91055->$class->itable;
                        while ($tmp1076->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1076 = $tmp1076->next;
                        }
                        $fn1078 $tmp1077 = $tmp1076->methods[1];
                        panda$core$Object* $tmp1079 = $tmp1077(Iter$295$91055);
                        $tmp1075 = $tmp1079;
                        $tmp1074 = ((org$pandalanguage$pandac$ASTNode*) $tmp1075);
                        p1073 = $tmp1074;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1074));
                        panda$core$Panda$unref$panda$core$Object($tmp1075);
                        int $tmp1082;
                        {
                            $tmp1084 = p1073;
                            $match$296_131083 = $tmp1084;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1084));
                            panda$core$Bit $tmp1085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$296_131083->$rawValue, ((panda$core$Int64) { 28 }));
                            if ($tmp1085.value) {
                            {
                                panda$core$String** $tmp1087 = ((panda$core$String**) ((char*) $match$296_131083->$data + 16));
                                name1086 = *$tmp1087;
                                org$pandalanguage$pandac$ASTNode** $tmp1089 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$296_131083->$data + 24));
                                type1088 = *$tmp1089;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1091 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1093 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1088);
                                $tmp1092 = $tmp1093;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1091, name1086, $tmp1092);
                                $tmp1090 = $tmp1091;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1048, ((panda$core$Object*) $tmp1090));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1090));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1092));
                            }
                            }
                            else {
                            {
                                PANDA_ASSERT(((panda$core$Bit) { false }).value);
                            }
                            }
                        }
                        $tmp1082 = -1;
                        goto $l1080;
                        $l1080:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1084));
                        switch ($tmp1082) {
                            case -1: goto $l1094;
                        }
                        $l1094:;
                    }
                    $tmp1072 = -1;
                    goto $l1070;
                    $l1070:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1073));
                    p1073 = NULL;
                    switch ($tmp1072) {
                        case -1: goto $l1095;
                    }
                    $l1095:;
                }
                goto $l1062;
                $l1063:;
            }
            $tmp1054 = -1;
            goto $l1052;
            $l1052:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$295$91055));
            Iter$295$91055 = NULL;
            switch ($tmp1054) {
                case -1: goto $l1096;
            }
            $l1096:;
        }
        memset(&returnType1097, 0, sizeof(returnType1097));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1098 = returnType1097;
                org$pandalanguage$pandac$Type* $tmp1101 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1100 = $tmp1101;
                $tmp1099 = $tmp1100;
                returnType1097 = $tmp1099;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1099));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1100));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1098));
            }
        }
        }
        else {
        {
            {
                $tmp1102 = returnType1097;
                org$pandalanguage$pandac$Type* $tmp1105 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1104 = $tmp1105;
                $tmp1103 = $tmp1104;
                returnType1097 = $tmp1103;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1103));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1104));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1102));
            }
        }
        }
        panda$core$Bit $tmp1107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
        bool $tmp1106 = $tmp1107.value;
        if (!$tmp1106) goto $l1108;
        org$pandalanguage$pandac$Type* $tmp1110 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1109 = $tmp1110;
        panda$core$Bit $tmp1111 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1097, $tmp1109);
        $tmp1106 = $tmp1111.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1109));
        $l1108:;
        panda$core$Bit $tmp1112 = { $tmp1106 };
        if ($tmp1112.value) {
        {
            panda$core$Object* $tmp1115 = (($fn1114) self->compiler->$class->vtable[2])(self->compiler);
            $tmp1113 = $tmp1115;
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1113), p_position, &$s1116);
            panda$core$Panda$unref$panda$core$Object($tmp1113);
        }
        }
        bool $tmp1117 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1117) goto $l1118;
        panda$core$Bit $tmp1119 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1033, p_statements);
        $tmp1117 = $tmp1119.value;
        $l1118:;
        panda$core$Bit $tmp1120 = { $tmp1117 };
        if ($tmp1120.value) {
        {
            panda$core$Int64 $tmp1121 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp1122 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1033->flags, $tmp1121);
            annotations1033->flags = $tmp1122;
        }
        }
        if (((panda$core$Bit) { p_statements == NULL }).value) {
        {
            panda$core$Bit $tmp1123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1123.value) {
            {
                panda$core$Int64 $tmp1124 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                panda$core$Int64 $tmp1125 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1033->flags, $tmp1124);
                annotations1033->flags = $tmp1125;
            }
            }
            else {
            panda$core$Int64 $tmp1126 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
            panda$core$Int64 $tmp1127 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1033->flags, $tmp1126);
            panda$core$Bit $tmp1128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1127, ((panda$core$Int64) { 0 }));
            if ($tmp1128.value) {
            {
                panda$core$Object* $tmp1131 = (($fn1130) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1129 = $tmp1131;
                panda$core$String* $tmp1135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1134, p_name);
                $tmp1133 = $tmp1135;
                panda$core$String* $tmp1137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1133, &$s1136);
                $tmp1132 = $tmp1137;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1129), p_position, $tmp1132);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1132));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1133));
                panda$core$Panda$unref$panda$core$Object($tmp1129);
            }
            }
            }
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1141 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1141, p_owner, p_position, doccomment1017, annotations1033, p_kind, p_name, parameters1048, returnType1097, p_statements);
        $tmp1140 = $tmp1141;
        $tmp1139 = $tmp1140;
        $finallyReturn1137 = $tmp1139;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1139));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1140));
        $tmp1016 = 0;
        goto $l1014;
        $l1142:;
        return $finallyReturn1137;
    }
    $l1014:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1017));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1033));
    annotations1033 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1048));
    parameters1048 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1097));
    switch ($tmp1016) {
        case 0: goto $l1142;
    }
    $l1144:;
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$329_91148 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1149;
    org$pandalanguage$pandac$Position position1151;
    org$pandalanguage$pandac$ASTNode* dc1153 = NULL;
    panda$collections$ImmutableArray* annotations1155 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1157 = NULL;
    org$pandalanguage$pandac$Position position1160;
    org$pandalanguage$pandac$ASTNode* dc1162 = NULL;
    panda$collections$ImmutableArray* annotations1164 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1166;
    panda$core$String* name1168 = NULL;
    panda$collections$ImmutableArray* parameters1170 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType1172 = NULL;
    panda$collections$ImmutableArray* statements1174 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1179 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1180;
    org$pandalanguage$pandac$MethodDecl* $tmp1181;
    org$pandalanguage$pandac$Position position1185;
    org$pandalanguage$pandac$ASTNode* dc1187 = NULL;
    panda$collections$ImmutableArray* annotations1189 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1191;
    panda$core$String* name1193 = NULL;
    panda$collections$ImmutableArray* generics1195 = NULL;
    panda$collections$ImmutableArray* supertypes1197 = NULL;
    panda$collections$ImmutableArray* members1199 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1204 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1205;
    org$pandalanguage$pandac$ClassDecl* $tmp1206;
    panda$core$Weak* $tmp1208;
    panda$core$Weak* $tmp1209;
    panda$core$Weak* $tmp1210;
    panda$core$String* $tmp1212;
    panda$core$String* $tmp1216;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1217;
    panda$core$String* $tmp1221;
    org$pandalanguage$pandac$Position position1225;
    org$pandalanguage$pandac$ASTNode* dc1227 = NULL;
    panda$core$String* name1229 = NULL;
    panda$collections$ImmutableArray* fields1231 = NULL;
    int $tmp1147;
    {
        $tmp1149 = p_node;
        $match$329_91148 = $tmp1149;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1149));
        panda$core$Bit $tmp1150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$329_91148->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1150.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1152 = ((org$pandalanguage$pandac$Position*) ((char*) $match$329_91148->$data + 0));
            position1151 = *$tmp1152;
            org$pandalanguage$pandac$ASTNode** $tmp1154 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$329_91148->$data + 16));
            dc1153 = *$tmp1154;
            panda$collections$ImmutableArray** $tmp1156 = ((panda$collections$ImmutableArray**) ((char*) $match$329_91148->$data + 24));
            annotations1155 = *$tmp1156;
            org$pandalanguage$pandac$ASTNode** $tmp1158 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$329_91148->$data + 32));
            varDecl1157 = *$tmp1158;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1151, dc1153, annotations1155, varDecl1157);
        }
        }
        else {
        panda$core$Bit $tmp1159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$329_91148->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1159.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1161 = ((org$pandalanguage$pandac$Position*) ((char*) $match$329_91148->$data + 0));
            position1160 = *$tmp1161;
            org$pandalanguage$pandac$ASTNode** $tmp1163 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$329_91148->$data + 16));
            dc1162 = *$tmp1163;
            panda$collections$ImmutableArray** $tmp1165 = ((panda$collections$ImmutableArray**) ((char*) $match$329_91148->$data + 24));
            annotations1164 = *$tmp1165;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1167 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$329_91148->$data + 32));
            kind1166 = *$tmp1167;
            panda$core$String** $tmp1169 = ((panda$core$String**) ((char*) $match$329_91148->$data + 40));
            name1168 = *$tmp1169;
            panda$collections$ImmutableArray** $tmp1171 = ((panda$collections$ImmutableArray**) ((char*) $match$329_91148->$data + 48));
            parameters1170 = *$tmp1171;
            org$pandalanguage$pandac$ASTNode** $tmp1173 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$329_91148->$data + 56));
            rawReturnType1172 = *$tmp1173;
            panda$collections$ImmutableArray** $tmp1175 = ((panda$collections$ImmutableArray**) ((char*) $match$329_91148->$data + 64));
            statements1174 = *$tmp1175;
            int $tmp1178;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1182 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1160, dc1162, annotations1164, kind1166, name1168, parameters1170, rawReturnType1172, statements1174);
                $tmp1181 = $tmp1182;
                $tmp1180 = $tmp1181;
                m1179 = $tmp1180;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1180));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1181));
                if (((panda$core$Bit) { m1179 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1179));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1179));
                }
                }
            }
            $tmp1178 = -1;
            goto $l1176;
            $l1176:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1179));
            m1179 = NULL;
            switch ($tmp1178) {
                case -1: goto $l1183;
            }
            $l1183:;
        }
        }
        else {
        panda$core$Bit $tmp1184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$329_91148->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1184.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1186 = ((org$pandalanguage$pandac$Position*) ((char*) $match$329_91148->$data + 0));
            position1185 = *$tmp1186;
            org$pandalanguage$pandac$ASTNode** $tmp1188 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$329_91148->$data + 16));
            dc1187 = *$tmp1188;
            panda$collections$ImmutableArray** $tmp1190 = ((panda$collections$ImmutableArray**) ((char*) $match$329_91148->$data + 24));
            annotations1189 = *$tmp1190;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1192 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$329_91148->$data + 32));
            kind1191 = *$tmp1192;
            panda$core$String** $tmp1194 = ((panda$core$String**) ((char*) $match$329_91148->$data + 40));
            name1193 = *$tmp1194;
            panda$collections$ImmutableArray** $tmp1196 = ((panda$collections$ImmutableArray**) ((char*) $match$329_91148->$data + 48));
            generics1195 = *$tmp1196;
            panda$collections$ImmutableArray** $tmp1198 = ((panda$collections$ImmutableArray**) ((char*) $match$329_91148->$data + 56));
            supertypes1197 = *$tmp1198;
            panda$collections$ImmutableArray** $tmp1200 = ((panda$collections$ImmutableArray**) ((char*) $match$329_91148->$data + 64));
            members1199 = *$tmp1200;
            int $tmp1203;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1207 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, ((org$pandalanguage$pandac$Symbol*) p_cl)->name, position1185, dc1187, annotations1189, kind1191, name1193, generics1195, supertypes1197, members1199);
                $tmp1206 = $tmp1207;
                $tmp1205 = $tmp1206;
                inner1204 = $tmp1205;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1205));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1206));
                if (((panda$core$Bit) { inner1204 != NULL }).value) {
                {
                    {
                        $tmp1208 = inner1204->owner;
                        panda$core$Weak* $tmp1211 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp1211, ((panda$core$Object*) p_cl));
                        $tmp1210 = $tmp1211;
                        $tmp1209 = $tmp1210;
                        inner1204->owner = $tmp1209;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1209));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1210));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1208));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1204));
                    panda$core$String* $tmp1214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s1213);
                    $tmp1212 = $tmp1214;
                    panda$core$Bit $tmp1215 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner1204)->name, $tmp1212);
                    PANDA_ASSERT($tmp1215.value);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1212));
                    panda$core$Int64 $tmp1218 = panda$core$String$length$R$panda$core$Int64(((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                    panda$core$Int64 $tmp1219 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1218, ((panda$core$Int64) { 1 }));
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1217, ((panda$core$Int64$nullable) { $tmp1219, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                    panda$core$String* $tmp1220 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner1204)->name, $tmp1217);
                    $tmp1216 = $tmp1220;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner1204), $tmp1216);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1216));
                    panda$core$String* $tmp1222 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1221 = $tmp1222;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner1204->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_cl), $tmp1221);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1221));
                }
                }
            }
            $tmp1203 = -1;
            goto $l1201;
            $l1201:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1204));
            inner1204 = NULL;
            switch ($tmp1203) {
                case -1: goto $l1223;
            }
            $l1223:;
        }
        }
        else {
        panda$core$Bit $tmp1224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$329_91148->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1224.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1226 = ((org$pandalanguage$pandac$Position*) ((char*) $match$329_91148->$data + 0));
            position1225 = *$tmp1226;
            org$pandalanguage$pandac$ASTNode** $tmp1228 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$329_91148->$data + 16));
            dc1227 = *$tmp1228;
            panda$core$String** $tmp1230 = ((panda$core$String**) ((char*) $match$329_91148->$data + 24));
            name1229 = *$tmp1230;
            panda$collections$ImmutableArray** $tmp1232 = ((panda$collections$ImmutableArray**) ((char*) $match$329_91148->$data + 32));
            fields1231 = *$tmp1232;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1225, dc1227, name1229, fields1231);
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
        }
        }
    }
    $tmp1147 = -1;
    goto $l1145;
    $l1145:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1149));
    switch ($tmp1147) {
        case -1: goto $l1233;
    }
    $l1233:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1237 = NULL;
    panda$core$String* $tmp1238;
    panda$core$String* $tmp1239;
    org$pandalanguage$pandac$ASTNode* $match$367_131243 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1244;
    org$pandalanguage$pandac$Position position1246;
    panda$core$String* text1248 = NULL;
    panda$core$String* $tmp1250;
    panda$core$String* $tmp1251;
    panda$collections$Array* fields1253 = NULL;
    panda$collections$Array* $tmp1254;
    panda$collections$Array* $tmp1255;
    panda$collections$Iterator* Iter$375$91260 = NULL;
    panda$collections$Iterator* $tmp1261;
    panda$collections$Iterator* $tmp1262;
    org$pandalanguage$pandac$ASTNode* t1278 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1279;
    panda$core$Object* $tmp1280;
    org$pandalanguage$pandac$Type* $tmp1285;
    org$pandalanguage$pandac$ChoiceEntry* entry1289 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1290;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1291;
    panda$core$Bit found1294;
    panda$collections$Iterator* Iter$383$161298 = NULL;
    panda$collections$Iterator* $tmp1299;
    panda$collections$Iterator* $tmp1300;
    org$pandalanguage$pandac$MethodDecl* m1316 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1317;
    panda$core$Object* $tmp1318;
    panda$core$Object* $tmp1329;
    org$pandalanguage$pandac$Type* $tmp1331;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1334;
    panda$core$Object* $tmp1349;
    panda$core$Object* $tmp1351;
    org$pandalanguage$pandac$MethodDecl* $tmp1361;
    org$pandalanguage$pandac$MethodDecl* $tmp1362;
    panda$collections$Array* parameters1370 = NULL;
    panda$collections$Array* $tmp1371;
    panda$collections$Array* $tmp1372;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1374;
    org$pandalanguage$pandac$Type* $tmp1377;
    panda$collections$Array* statements1379 = NULL;
    panda$collections$Array* $tmp1380;
    panda$collections$Array* $tmp1381;
    org$pandalanguage$pandac$ASTNode* $tmp1383;
    org$pandalanguage$pandac$ASTNode* $tmp1385;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1388;
    org$pandalanguage$pandac$ASTNode* $tmp1389;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1392;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1407;
    panda$core$String* $tmp1409;
    panda$core$String* $tmp1410;
    panda$core$Object* $tmp1412;
    panda$core$Object* $tmp1417;
    org$pandalanguage$pandac$ASTNode* $tmp1419;
    org$pandalanguage$pandac$ASTNode* $tmp1421;
    org$pandalanguage$pandac$ASTNode* $tmp1423;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1425;
    org$pandalanguage$pandac$ASTNode* $tmp1426;
    panda$core$String* $tmp1428;
    panda$core$String* $tmp1429;
    panda$core$Object* $tmp1431;
    org$pandalanguage$pandac$MethodDecl* synthetic1442 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1443;
    org$pandalanguage$pandac$MethodDecl* $tmp1444;
    org$pandalanguage$pandac$Annotations* $tmp1446;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1448;
    org$pandalanguage$pandac$Type* $tmp1450;
    panda$collections$ImmutableArray* $tmp1452;
    org$pandalanguage$pandac$MethodDecl* $tmp1454;
    org$pandalanguage$pandac$MethodDecl* $tmp1455;
    int $tmp1236;
    {
        memset(&doccomment1237, 0, sizeof(doccomment1237));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1238 = doccomment1237;
                $tmp1239 = NULL;
                doccomment1237 = $tmp1239;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1239));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1238));
            }
        }
        }
        else {
        {
            int $tmp1242;
            {
                $tmp1244 = p_rawDoccomment;
                $match$367_131243 = $tmp1244;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1244));
                panda$core$Bit $tmp1245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$367_131243->$rawValue, ((panda$core$Int64) { 34 }));
                if ($tmp1245.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1247 = ((org$pandalanguage$pandac$Position*) ((char*) $match$367_131243->$data + 0));
                    position1246 = *$tmp1247;
                    panda$core$String** $tmp1249 = ((panda$core$String**) ((char*) $match$367_131243->$data + 16));
                    text1248 = *$tmp1249;
                    {
                        $tmp1250 = doccomment1237;
                        $tmp1251 = text1248;
                        doccomment1237 = $tmp1251;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1251));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1250));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1242 = -1;
            goto $l1240;
            $l1240:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1244));
            switch ($tmp1242) {
                case -1: goto $l1252;
            }
            $l1252:;
        }
        }
        panda$collections$Array* $tmp1256 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1256);
        $tmp1255 = $tmp1256;
        $tmp1254 = $tmp1255;
        fields1253 = $tmp1254;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1254));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1255));
        {
            int $tmp1259;
            {
                ITable* $tmp1263 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1263->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1263 = $tmp1263->next;
                }
                $fn1265 $tmp1264 = $tmp1263->methods[0];
                panda$collections$Iterator* $tmp1266 = $tmp1264(((panda$collections$Iterable*) p_rawFields));
                $tmp1262 = $tmp1266;
                $tmp1261 = $tmp1262;
                Iter$375$91260 = $tmp1261;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1261));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1262));
                $l1267:;
                ITable* $tmp1270 = Iter$375$91260->$class->itable;
                while ($tmp1270->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1270 = $tmp1270->next;
                }
                $fn1272 $tmp1271 = $tmp1270->methods[0];
                panda$core$Bit $tmp1273 = $tmp1271(Iter$375$91260);
                panda$core$Bit $tmp1274 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1273);
                bool $tmp1269 = $tmp1274.value;
                if (!$tmp1269) goto $l1268;
                {
                    int $tmp1277;
                    {
                        ITable* $tmp1281 = Iter$375$91260->$class->itable;
                        while ($tmp1281->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1281 = $tmp1281->next;
                        }
                        $fn1283 $tmp1282 = $tmp1281->methods[1];
                        panda$core$Object* $tmp1284 = $tmp1282(Iter$375$91260);
                        $tmp1280 = $tmp1284;
                        $tmp1279 = ((org$pandalanguage$pandac$ASTNode*) $tmp1280);
                        t1278 = $tmp1279;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1279));
                        panda$core$Panda$unref$panda$core$Object($tmp1280);
                        org$pandalanguage$pandac$Type* $tmp1286 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1278);
                        $tmp1285 = $tmp1286;
                        panda$collections$Array$add$panda$collections$Array$T(fields1253, ((panda$core$Object*) $tmp1285));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1285));
                    }
                    $tmp1277 = -1;
                    goto $l1275;
                    $l1275:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1278));
                    t1278 = NULL;
                    switch ($tmp1277) {
                        case -1: goto $l1287;
                    }
                    $l1287:;
                }
                goto $l1267;
                $l1268:;
            }
            $tmp1259 = -1;
            goto $l1257;
            $l1257:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$375$91260));
            Iter$375$91260 = NULL;
            switch ($tmp1259) {
                case -1: goto $l1288;
            }
            $l1288:;
        }
        org$pandalanguage$pandac$ChoiceEntry* $tmp1292 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(97, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
        panda$core$Int64 $tmp1293 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
        org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1292, p_cl, p_position, p_name, doccomment1237, $tmp1293, ((panda$collections$ListView*) fields1253));
        $tmp1291 = $tmp1292;
        $tmp1290 = $tmp1291;
        entry1289 = $tmp1290;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1290));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1291));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry1289));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1289));
        found1294 = ((panda$core$Bit) { false });
        {
            int $tmp1297;
            {
                ITable* $tmp1301 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
                while ($tmp1301->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1301 = $tmp1301->next;
                }
                $fn1303 $tmp1302 = $tmp1301->methods[0];
                panda$collections$Iterator* $tmp1304 = $tmp1302(((panda$collections$Iterable*) p_cl->methods));
                $tmp1300 = $tmp1304;
                $tmp1299 = $tmp1300;
                Iter$383$161298 = $tmp1299;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1299));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1300));
                $l1305:;
                ITable* $tmp1308 = Iter$383$161298->$class->itable;
                while ($tmp1308->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1308 = $tmp1308->next;
                }
                $fn1310 $tmp1309 = $tmp1308->methods[0];
                panda$core$Bit $tmp1311 = $tmp1309(Iter$383$161298);
                panda$core$Bit $tmp1312 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1311);
                bool $tmp1307 = $tmp1312.value;
                if (!$tmp1307) goto $l1306;
                {
                    int $tmp1315;
                    {
                        ITable* $tmp1319 = Iter$383$161298->$class->itable;
                        while ($tmp1319->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1319 = $tmp1319->next;
                        }
                        $fn1321 $tmp1320 = $tmp1319->methods[1];
                        panda$core$Object* $tmp1322 = $tmp1320(Iter$383$161298);
                        $tmp1318 = $tmp1322;
                        $tmp1317 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1318);
                        m1316 = $tmp1317;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1317));
                        panda$core$Panda$unref$panda$core$Object($tmp1318);
                        panda$core$Bit $tmp1323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1316->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
                        PANDA_ASSERT($tmp1323.value);
                        panda$core$Int64 $tmp1324 = panda$collections$Array$get_count$R$panda$core$Int64(m1316->parameters);
                        panda$core$Int64 $tmp1325 = panda$collections$Array$get_count$R$panda$core$Int64(fields1253);
                        panda$core$Int64 $tmp1326 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1325, ((panda$core$Int64) { 1 }));
                        panda$core$Bit $tmp1327 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1324, $tmp1326);
                        if ($tmp1327.value) {
                        {
                            $tmp1315 = 0;
                            goto $l1313;
                            $l1328:;
                            goto $l1305;
                        }
                        }
                        panda$core$Object* $tmp1330 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1316->parameters, ((panda$core$Int64) { 0 }));
                        $tmp1329 = $tmp1330;
                        org$pandalanguage$pandac$Type* $tmp1332 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        $tmp1331 = $tmp1332;
                        panda$core$Bit $tmp1333 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1329)->type, $tmp1331);
                        PANDA_ASSERT($tmp1333.value);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1331));
                        panda$core$Panda$unref$panda$core$Object($tmp1329);
                        panda$core$Int64 $tmp1335 = panda$collections$Array$get_count$R$panda$core$Int64(fields1253);
                        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1334, ((panda$core$Int64) { 0 }), $tmp1335, ((panda$core$Bit) { false }));
                        int64_t $tmp1337 = $tmp1334.min.value;
                        panda$core$Int64 i1336 = { $tmp1337 };
                        int64_t $tmp1339 = $tmp1334.max.value;
                        bool $tmp1340 = $tmp1334.inclusive.value;
                        if ($tmp1340) goto $l1347; else goto $l1348;
                        $l1347:;
                        if ($tmp1337 <= $tmp1339) goto $l1341; else goto $l1343;
                        $l1348:;
                        if ($tmp1337 < $tmp1339) goto $l1341; else goto $l1343;
                        $l1341:;
                        {
                            panda$core$Object* $tmp1350 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields1253, i1336);
                            $tmp1349 = $tmp1350;
                            panda$core$Int64 $tmp1352 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i1336, ((panda$core$Int64) { 1 }));
                            panda$core$Object* $tmp1353 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1316->parameters, $tmp1352);
                            $tmp1351 = $tmp1353;
                            panda$core$Bit $tmp1354 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1349), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1351)->type);
                            panda$core$Panda$unref$panda$core$Object($tmp1351);
                            panda$core$Panda$unref$panda$core$Object($tmp1349);
                            if ($tmp1354.value) {
                            {
                                goto $l1305;
                            }
                            }
                        }
                        $l1344:;
                        int64_t $tmp1356 = $tmp1339 - i1336.value;
                        if ($tmp1340) goto $l1357; else goto $l1358;
                        $l1357:;
                        if ((uint64_t) $tmp1356 >= 1) goto $l1355; else goto $l1343;
                        $l1358:;
                        if ((uint64_t) $tmp1356 > 1) goto $l1355; else goto $l1343;
                        $l1355:;
                        i1336.value += 1;
                        goto $l1341;
                        $l1343:;
                        {
                            $tmp1361 = entry1289->initMethod;
                            $tmp1362 = m1316;
                            entry1289->initMethod = $tmp1362;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1362));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1361));
                        }
                        found1294 = ((panda$core$Bit) { true });
                        $tmp1315 = 1;
                        goto $l1313;
                        $l1363:;
                        goto $l1306;
                    }
                    $l1313:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1316));
                    m1316 = NULL;
                    switch ($tmp1315) {
                        case 0: goto $l1328;
                        case 1: goto $l1363;
                    }
                    $l1364:;
                }
                goto $l1305;
                $l1306:;
            }
            $tmp1297 = -1;
            goto $l1295;
            $l1295:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$383$161298));
            Iter$383$161298 = NULL;
            switch ($tmp1297) {
                case -1: goto $l1365;
            }
            $l1365:;
        }
        panda$core$Bit $tmp1366 = panda$core$Bit$$NOT$R$panda$core$Bit(found1294);
        if ($tmp1366.value) {
        {
            int $tmp1369;
            {
                panda$collections$Array* $tmp1373 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1373);
                $tmp1372 = $tmp1373;
                $tmp1371 = $tmp1372;
                parameters1370 = $tmp1371;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1371));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1372));
                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1375 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                org$pandalanguage$pandac$Type* $tmp1378 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1377 = $tmp1378;
                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1375, &$s1376, $tmp1377);
                $tmp1374 = $tmp1375;
                panda$collections$Array$add$panda$collections$Array$T(parameters1370, ((panda$core$Object*) $tmp1374));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1374));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1377));
                panda$collections$Array* $tmp1382 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1382);
                $tmp1381 = $tmp1382;
                $tmp1380 = $tmp1381;
                statements1379 = $tmp1380;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1380));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1381));
                org$pandalanguage$pandac$ASTNode* $tmp1384 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode* $tmp1386 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1386, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s1387);
                $tmp1385 = $tmp1386;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1388, ((panda$core$Int64) { 73 }));
                org$pandalanguage$pandac$ASTNode* $tmp1390 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1390, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s1391);
                $tmp1389 = $tmp1390;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1384, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp1385, $tmp1388, $tmp1389);
                $tmp1383 = $tmp1384;
                panda$collections$Array$add$panda$collections$Array$T(statements1379, ((panda$core$Object*) $tmp1383));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1383));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1389));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1385));
                panda$core$Int64 $tmp1393 = panda$collections$Array$get_count$R$panda$core$Int64(fields1253);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1392, ((panda$core$Int64) { 0 }), $tmp1393, ((panda$core$Bit) { false }));
                int64_t $tmp1395 = $tmp1392.min.value;
                panda$core$Int64 i1394 = { $tmp1395 };
                int64_t $tmp1397 = $tmp1392.max.value;
                bool $tmp1398 = $tmp1392.inclusive.value;
                if ($tmp1398) goto $l1405; else goto $l1406;
                $l1405:;
                if ($tmp1395 <= $tmp1397) goto $l1399; else goto $l1401;
                $l1406:;
                if ($tmp1395 < $tmp1397) goto $l1399; else goto $l1401;
                $l1399:;
                {
                    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1408 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                    panda$core$Int64$wrapper* $tmp1413;
                    $tmp1413 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                    $tmp1413->value = i1394;
                    $tmp1412 = ((panda$core$Object*) $tmp1413);
                    panda$core$String* $tmp1414 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1411, $tmp1412);
                    $tmp1410 = $tmp1414;
                    panda$core$String* $tmp1416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1410, &$s1415);
                    $tmp1409 = $tmp1416;
                    panda$core$Object* $tmp1418 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields1253, i1394);
                    $tmp1417 = $tmp1418;
                    org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1408, $tmp1409, ((org$pandalanguage$pandac$Type*) $tmp1417));
                    $tmp1407 = $tmp1408;
                    panda$collections$Array$add$panda$collections$Array$T(parameters1370, ((panda$core$Object*) $tmp1407));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1407));
                    panda$core$Panda$unref$panda$core$Object($tmp1417);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1409));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1410));
                    panda$core$Panda$unref$panda$core$Object($tmp1412);
                    org$pandalanguage$pandac$ASTNode* $tmp1420 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode* $tmp1422 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode* $tmp1424 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1424, ((panda$core$Int64) { 33 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position);
                    $tmp1423 = $tmp1424;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64($tmp1422, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp1423, entry1289, i1394);
                    $tmp1421 = $tmp1422;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1425, ((panda$core$Int64) { 73 }));
                    org$pandalanguage$pandac$ASTNode* $tmp1427 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$wrapper* $tmp1432;
                    $tmp1432 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                    $tmp1432->value = i1394;
                    $tmp1431 = ((panda$core$Object*) $tmp1432);
                    panda$core$String* $tmp1433 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1430, $tmp1431);
                    $tmp1429 = $tmp1433;
                    panda$core$String* $tmp1435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1429, &$s1434);
                    $tmp1428 = $tmp1435;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1427, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp1428);
                    $tmp1426 = $tmp1427;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1420, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp1421, $tmp1425, $tmp1426);
                    $tmp1419 = $tmp1420;
                    panda$collections$Array$add$panda$collections$Array$T(statements1379, ((panda$core$Object*) $tmp1419));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1419));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1426));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1428));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1429));
                    panda$core$Panda$unref$panda$core$Object($tmp1431);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1421));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1423));
                }
                $l1402:;
                int64_t $tmp1437 = $tmp1397 - i1394.value;
                if ($tmp1398) goto $l1438; else goto $l1439;
                $l1438:;
                if ((uint64_t) $tmp1437 >= 1) goto $l1436; else goto $l1401;
                $l1439:;
                if ((uint64_t) $tmp1437 > 1) goto $l1436; else goto $l1401;
                $l1436:;
                i1394.value += 1;
                goto $l1399;
                $l1401:;
                org$pandalanguage$pandac$MethodDecl* $tmp1445 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1447 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1447);
                $tmp1446 = $tmp1447;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1448, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$Type* $tmp1451 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1450 = $tmp1451;
                panda$collections$ImmutableArray* $tmp1453 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements1379);
                $tmp1452 = $tmp1453;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1445, p_cl, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, NULL, $tmp1446, $tmp1448, &$s1449, parameters1370, $tmp1450, $tmp1452);
                $tmp1444 = $tmp1445;
                $tmp1443 = $tmp1444;
                synthetic1442 = $tmp1443;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1443));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1444));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1452));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1450));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1446));
                {
                    $tmp1454 = entry1289->initMethod;
                    $tmp1455 = synthetic1442;
                    entry1289->initMethod = $tmp1455;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1455));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1454));
                }
                panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) synthetic1442));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) synthetic1442));
            }
            $tmp1369 = -1;
            goto $l1367;
            $l1367:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1370));
            parameters1370 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1379));
            statements1379 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) synthetic1442));
            synthetic1442 = NULL;
            switch ($tmp1369) {
                case -1: goto $l1456;
            }
            $l1456:;
        }
        }
    }
    $tmp1236 = -1;
    goto $l1234;
    $l1234:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1237));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1253));
    fields1253 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1289));
    entry1289 = NULL;
    switch ($tmp1236) {
        case -1: goto $l1457;
    }
    $l1457:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1461 = NULL;
    panda$core$String* $tmp1464;
    panda$core$String* $tmp1465;
    panda$core$String* $tmp1466;
    panda$core$String* $tmp1467;
    panda$core$String* $tmp1468;
    panda$core$String* $tmp1469;
    panda$core$String* $tmp1476;
    panda$core$String* $tmp1477;
    panda$core$String* doccomment1478 = NULL;
    panda$core$String* $tmp1479;
    panda$core$String* $tmp1480;
    org$pandalanguage$pandac$ASTNode* $match$442_131484 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1485;
    org$pandalanguage$pandac$Position position1487;
    panda$core$String* text1489 = NULL;
    panda$core$String* $tmp1491;
    panda$core$String* $tmp1492;
    org$pandalanguage$pandac$Annotations* annotations1494 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1495;
    org$pandalanguage$pandac$Annotations* $tmp1496;
    panda$collections$Array* parameters1498 = NULL;
    panda$collections$Array* $tmp1499;
    panda$collections$Array* $tmp1500;
    panda$collections$Iterator* Iter$452$131505 = NULL;
    panda$collections$Iterator* $tmp1506;
    panda$collections$Iterator* $tmp1507;
    org$pandalanguage$pandac$ASTNode* p1523 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1524;
    panda$core$Object* $tmp1525;
    panda$core$String* name1530 = NULL;
    org$pandalanguage$pandac$Type* bound1531 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$455_171535 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1536;
    panda$core$String* id1538 = NULL;
    panda$core$String* $tmp1540;
    panda$core$String* $tmp1541;
    org$pandalanguage$pandac$Type* $tmp1542;
    org$pandalanguage$pandac$Type* $tmp1543;
    org$pandalanguage$pandac$Type* $tmp1544;
    panda$core$String* id1547 = NULL;
    org$pandalanguage$pandac$ASTNode* type1549 = NULL;
    panda$core$String* $tmp1551;
    panda$core$String* $tmp1552;
    org$pandalanguage$pandac$Type* $tmp1553;
    org$pandalanguage$pandac$Type* $tmp1554;
    org$pandalanguage$pandac$Type* $tmp1555;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1558;
    panda$core$Object* $tmp1565;
    panda$collections$Array* supertypes1569 = NULL;
    panda$collections$Array* $tmp1570;
    panda$collections$Array* $tmp1571;
    panda$core$Object* $tmp1574;
    panda$collections$Iterator* Iter$476$131581 = NULL;
    panda$collections$Iterator* $tmp1582;
    panda$collections$Iterator* $tmp1583;
    org$pandalanguage$pandac$ASTNode* s1599 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1600;
    panda$core$Object* $tmp1601;
    org$pandalanguage$pandac$Type* $tmp1606;
    org$pandalanguage$pandac$ClassDecl* result1610 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1611;
    org$pandalanguage$pandac$ClassDecl* $tmp1612;
    panda$core$Object* $tmp1614;
    panda$core$Object* $tmp1617;
    org$pandalanguage$pandac$FieldDecl* rawValue1624 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1625;
    org$pandalanguage$pandac$FieldDecl* $tmp1626;
    org$pandalanguage$pandac$Annotations* $tmp1628;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1630;
    org$pandalanguage$pandac$Type* $tmp1632;
    org$pandalanguage$pandac$FieldDecl* data1634 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1635;
    org$pandalanguage$pandac$FieldDecl* $tmp1636;
    org$pandalanguage$pandac$Annotations* $tmp1638;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1640;
    org$pandalanguage$pandac$Type* $tmp1642;
    panda$collections$Iterator* Iter$493$91648 = NULL;
    panda$collections$Iterator* $tmp1649;
    panda$collections$Iterator* $tmp1650;
    org$pandalanguage$pandac$ASTNode* m1666 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1667;
    panda$core$Object* $tmp1668;
    org$pandalanguage$pandac$ASTNode* $match$494_131676 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1677;
    org$pandalanguage$pandac$Position mPosition1679;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1681;
    org$pandalanguage$pandac$ClassDecl$Kind $match$497_251684;
    panda$core$Object* $tmp1687;
    panda$core$Object* $tmp1692;
    panda$core$Bit foundInit1699;
    panda$core$Bit foundCleanup1700;
    panda$collections$Iterator* Iter$512$91704 = NULL;
    panda$collections$Iterator* $tmp1705;
    panda$collections$Iterator* $tmp1706;
    org$pandalanguage$pandac$MethodDecl* m1722 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1723;
    panda$core$Object* $tmp1724;
    panda$core$Object* $tmp1738;
    org$pandalanguage$pandac$MethodDecl* defaultInit1757 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1758;
    org$pandalanguage$pandac$MethodDecl* $tmp1759;
    org$pandalanguage$pandac$Annotations* $tmp1761;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1763;
    panda$collections$Array* $tmp1765;
    org$pandalanguage$pandac$Type* $tmp1767;
    panda$collections$ImmutableArray* $tmp1769;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1789 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1790;
    org$pandalanguage$pandac$MethodDecl* $tmp1791;
    org$pandalanguage$pandac$Annotations* $tmp1793;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1796;
    panda$collections$Array* $tmp1798;
    org$pandalanguage$pandac$Type* $tmp1800;
    panda$collections$ImmutableArray* $tmp1802;
    panda$core$Bit haveFields1806;
    panda$collections$Iterator* Iter$540$131810 = NULL;
    panda$collections$Iterator* $tmp1811;
    panda$collections$Iterator* $tmp1812;
    org$pandalanguage$pandac$ChoiceEntry* e1828 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1829;
    panda$core$Object* $tmp1830;
    org$pandalanguage$pandac$Type* $tmp1841;
    org$pandalanguage$pandac$Type* $tmp1842;
    org$pandalanguage$pandac$Type* $tmp1843;
    panda$core$Object* $tmp1845;
    panda$core$Object* $tmp1846;
    org$pandalanguage$pandac$ClassDecl* $finallyReturn1849;
    org$pandalanguage$pandac$ClassDecl* $tmp1851;
    int $tmp1460;
    {
        memset(&fullName1461, 0, sizeof(fullName1461));
        panda$core$Bit $tmp1463 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s1462);
        if ($tmp1463.value) {
        {
            {
                $tmp1464 = fullName1461;
                panda$core$String* $tmp1470 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1469 = $tmp1470;
                panda$core$String* $tmp1472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1469, &$s1471);
                $tmp1468 = $tmp1472;
                panda$core$String* $tmp1473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1468, p_name);
                $tmp1467 = $tmp1473;
                panda$core$String* $tmp1475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1467, &$s1474);
                $tmp1466 = $tmp1475;
                $tmp1465 = $tmp1466;
                fullName1461 = $tmp1465;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1465));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1466));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1467));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1468));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1469));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1464));
            }
        }
        }
        else {
        {
            {
                $tmp1476 = fullName1461;
                $tmp1477 = p_name;
                fullName1461 = $tmp1477;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1477));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1476));
            }
        }
        }
        memset(&doccomment1478, 0, sizeof(doccomment1478));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1479 = doccomment1478;
                $tmp1480 = NULL;
                doccomment1478 = $tmp1480;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1480));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1479));
            }
        }
        }
        else {
        {
            int $tmp1483;
            {
                $tmp1485 = p_rawDoccomment;
                $match$442_131484 = $tmp1485;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1485));
                panda$core$Bit $tmp1486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442_131484->$rawValue, ((panda$core$Int64) { 34 }));
                if ($tmp1486.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1488 = ((org$pandalanguage$pandac$Position*) ((char*) $match$442_131484->$data + 0));
                    position1487 = *$tmp1488;
                    panda$core$String** $tmp1490 = ((panda$core$String**) ((char*) $match$442_131484->$data + 16));
                    text1489 = *$tmp1490;
                    {
                        $tmp1491 = doccomment1478;
                        $tmp1492 = text1489;
                        doccomment1478 = $tmp1492;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1492));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1491));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1483 = -1;
            goto $l1481;
            $l1481:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1485));
            switch ($tmp1483) {
                case -1: goto $l1493;
            }
            $l1493:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1497 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1496 = $tmp1497;
        $tmp1495 = $tmp1496;
        annotations1494 = $tmp1495;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1495));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1496));
        panda$collections$Array* $tmp1501 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1501);
        $tmp1500 = $tmp1501;
        $tmp1499 = $tmp1500;
        parameters1498 = $tmp1499;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1499));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1500));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1504;
                {
                    ITable* $tmp1508 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1508->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1508 = $tmp1508->next;
                    }
                    $fn1510 $tmp1509 = $tmp1508->methods[0];
                    panda$collections$Iterator* $tmp1511 = $tmp1509(((panda$collections$Iterable*) p_generics));
                    $tmp1507 = $tmp1511;
                    $tmp1506 = $tmp1507;
                    Iter$452$131505 = $tmp1506;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1506));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1507));
                    $l1512:;
                    ITable* $tmp1515 = Iter$452$131505->$class->itable;
                    while ($tmp1515->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1515 = $tmp1515->next;
                    }
                    $fn1517 $tmp1516 = $tmp1515->methods[0];
                    panda$core$Bit $tmp1518 = $tmp1516(Iter$452$131505);
                    panda$core$Bit $tmp1519 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1518);
                    bool $tmp1514 = $tmp1519.value;
                    if (!$tmp1514) goto $l1513;
                    {
                        int $tmp1522;
                        {
                            ITable* $tmp1526 = Iter$452$131505->$class->itable;
                            while ($tmp1526->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1526 = $tmp1526->next;
                            }
                            $fn1528 $tmp1527 = $tmp1526->methods[1];
                            panda$core$Object* $tmp1529 = $tmp1527(Iter$452$131505);
                            $tmp1525 = $tmp1529;
                            $tmp1524 = ((org$pandalanguage$pandac$ASTNode*) $tmp1525);
                            p1523 = $tmp1524;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1524));
                            panda$core$Panda$unref$panda$core$Object($tmp1525);
                            memset(&name1530, 0, sizeof(name1530));
                            memset(&bound1531, 0, sizeof(bound1531));
                            int $tmp1534;
                            {
                                $tmp1536 = p1523;
                                $match$455_171535 = $tmp1536;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1536));
                                panda$core$Bit $tmp1537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$455_171535->$rawValue, ((panda$core$Int64) { 18 }));
                                if ($tmp1537.value) {
                                {
                                    panda$core$String** $tmp1539 = ((panda$core$String**) ((char*) $match$455_171535->$data + 16));
                                    id1538 = *$tmp1539;
                                    {
                                        $tmp1540 = name1530;
                                        $tmp1541 = id1538;
                                        name1530 = $tmp1541;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1541));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1540));
                                    }
                                    {
                                        $tmp1542 = bound1531;
                                        org$pandalanguage$pandac$Type* $tmp1545 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1544 = $tmp1545;
                                        $tmp1543 = $tmp1544;
                                        bound1531 = $tmp1543;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1543));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1544));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1542));
                                    }
                                }
                                }
                                else {
                                panda$core$Bit $tmp1546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$455_171535->$rawValue, ((panda$core$Int64) { 37 }));
                                if ($tmp1546.value) {
                                {
                                    panda$core$String** $tmp1548 = ((panda$core$String**) ((char*) $match$455_171535->$data + 16));
                                    id1547 = *$tmp1548;
                                    org$pandalanguage$pandac$ASTNode** $tmp1550 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$455_171535->$data + 24));
                                    type1549 = *$tmp1550;
                                    {
                                        $tmp1551 = name1530;
                                        $tmp1552 = id1547;
                                        name1530 = $tmp1552;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1552));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1551));
                                    }
                                    {
                                        $tmp1553 = bound1531;
                                        org$pandalanguage$pandac$Type* $tmp1556 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1549);
                                        $tmp1555 = $tmp1556;
                                        $tmp1554 = $tmp1555;
                                        bound1531 = $tmp1554;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1554));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1555));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1553));
                                    }
                                }
                                }
                                else {
                                {
                                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                                }
                                }
                                }
                            }
                            $tmp1534 = -1;
                            goto $l1532;
                            $l1532:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1536));
                            switch ($tmp1534) {
                                case -1: goto $l1557;
                            }
                            $l1557:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1559 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1561 = (($fn1560) p1523->$class->vtable[2])(p1523);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1559, $tmp1561, fullName1461, name1530, bound1531);
                            $tmp1558 = $tmp1559;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1498, ((panda$core$Object*) $tmp1558));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1558));
                        }
                        $tmp1522 = -1;
                        goto $l1520;
                        $l1520:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1523));
                        p1523 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1530));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1531));
                        switch ($tmp1522) {
                            case -1: goto $l1562;
                        }
                        $l1562:;
                    }
                    goto $l1512;
                    $l1513:;
                }
                $tmp1504 = -1;
                goto $l1502;
                $l1502:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$452$131505));
                Iter$452$131505 = NULL;
                switch ($tmp1504) {
                    case -1: goto $l1563;
                }
                $l1563:;
            }
            panda$core$Bit $tmp1564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1564.value) {
            {
                panda$core$Object* $tmp1567 = (($fn1566) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1565 = $tmp1567;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1565), p_position, &$s1568);
                panda$core$Panda$unref$panda$core$Object($tmp1565);
            }
            }
        }
        }
        panda$collections$Array* $tmp1572 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1572);
        $tmp1571 = $tmp1572;
        $tmp1570 = $tmp1571;
        supertypes1569 = $tmp1570;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1570));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1571));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Bit $tmp1573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1573.value) {
            {
                panda$core$Object* $tmp1576 = (($fn1575) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1574 = $tmp1576;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1574), p_position, &$s1577);
                panda$core$Panda$unref$panda$core$Object($tmp1574);
            }
            }
            {
                int $tmp1580;
                {
                    ITable* $tmp1584 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1584->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1584 = $tmp1584->next;
                    }
                    $fn1586 $tmp1585 = $tmp1584->methods[0];
                    panda$collections$Iterator* $tmp1587 = $tmp1585(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1583 = $tmp1587;
                    $tmp1582 = $tmp1583;
                    Iter$476$131581 = $tmp1582;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1582));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1583));
                    $l1588:;
                    ITable* $tmp1591 = Iter$476$131581->$class->itable;
                    while ($tmp1591->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1591 = $tmp1591->next;
                    }
                    $fn1593 $tmp1592 = $tmp1591->methods[0];
                    panda$core$Bit $tmp1594 = $tmp1592(Iter$476$131581);
                    panda$core$Bit $tmp1595 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1594);
                    bool $tmp1590 = $tmp1595.value;
                    if (!$tmp1590) goto $l1589;
                    {
                        int $tmp1598;
                        {
                            ITable* $tmp1602 = Iter$476$131581->$class->itable;
                            while ($tmp1602->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1602 = $tmp1602->next;
                            }
                            $fn1604 $tmp1603 = $tmp1602->methods[1];
                            panda$core$Object* $tmp1605 = $tmp1603(Iter$476$131581);
                            $tmp1601 = $tmp1605;
                            $tmp1600 = ((org$pandalanguage$pandac$ASTNode*) $tmp1601);
                            s1599 = $tmp1600;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1600));
                            panda$core$Panda$unref$panda$core$Object($tmp1601);
                            org$pandalanguage$pandac$Type* $tmp1607 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1599);
                            $tmp1606 = $tmp1607;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1569, ((panda$core$Object*) $tmp1606));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1606));
                        }
                        $tmp1598 = -1;
                        goto $l1596;
                        $l1596:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1599));
                        s1599 = NULL;
                        switch ($tmp1598) {
                            case -1: goto $l1608;
                        }
                        $l1608:;
                    }
                    goto $l1588;
                    $l1589:;
                }
                $tmp1580 = -1;
                goto $l1578;
                $l1578:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$476$131581));
                Iter$476$131581 = NULL;
                switch ($tmp1580) {
                    case -1: goto $l1609;
                }
                $l1609:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1613 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(201, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1616 = (($fn1615) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1614 = $tmp1616;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1613, p_source, p_position, p_aliases, doccomment1478, annotations1494, p_kind, fullName1461, ((panda$collections$ListView*) supertypes1569), parameters1498, ((org$pandalanguage$pandac$Compiler*) $tmp1614)->root);
        $tmp1612 = $tmp1613;
        $tmp1611 = $tmp1612;
        result1610 = $tmp1611;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1611));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1612));
        panda$core$Panda$unref$panda$core$Object($tmp1614);
        panda$core$Object* $tmp1619 = (($fn1618) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1617 = $tmp1619;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1617)->currentClass, ((panda$core$Object*) result1610));
        panda$core$Panda$unref$panda$core$Object($tmp1617);
        panda$core$Bit $tmp1620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1620.value) {
        {
            int $tmp1623;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1627 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1629 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1629);
                $tmp1628 = $tmp1629;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1630, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1633 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1632 = $tmp1633;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1627, result1610, ((org$pandalanguage$pandac$Symbol*) result1610)->position, NULL, $tmp1628, $tmp1630, &$s1631, $tmp1632, NULL);
                $tmp1626 = $tmp1627;
                $tmp1625 = $tmp1626;
                rawValue1624 = $tmp1625;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1625));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1626));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1632));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1628));
                panda$collections$Array$add$panda$collections$Array$T(result1610->fields, ((panda$core$Object*) rawValue1624));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1610->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1624));
                org$pandalanguage$pandac$FieldDecl* $tmp1637 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1639 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1639);
                $tmp1638 = $tmp1639;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1640, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1643 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1642 = $tmp1643;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1637, result1610, ((org$pandalanguage$pandac$Symbol*) result1610)->position, NULL, $tmp1638, $tmp1640, &$s1641, $tmp1642, NULL);
                $tmp1636 = $tmp1637;
                $tmp1635 = $tmp1636;
                data1634 = $tmp1635;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1635));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1636));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1642));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1638));
                panda$collections$Array$add$panda$collections$Array$T(result1610->fields, ((panda$core$Object*) data1634));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1610->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1634));
            }
            $tmp1623 = -1;
            goto $l1621;
            $l1621:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1624));
            rawValue1624 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1634));
            data1634 = NULL;
            switch ($tmp1623) {
                case -1: goto $l1644;
            }
            $l1644:;
        }
        }
        {
            int $tmp1647;
            {
                ITable* $tmp1651 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1651->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1651 = $tmp1651->next;
                }
                $fn1653 $tmp1652 = $tmp1651->methods[0];
                panda$collections$Iterator* $tmp1654 = $tmp1652(((panda$collections$Iterable*) p_members));
                $tmp1650 = $tmp1654;
                $tmp1649 = $tmp1650;
                Iter$493$91648 = $tmp1649;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1649));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1650));
                $l1655:;
                ITable* $tmp1658 = Iter$493$91648->$class->itable;
                while ($tmp1658->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1658 = $tmp1658->next;
                }
                $fn1660 $tmp1659 = $tmp1658->methods[0];
                panda$core$Bit $tmp1661 = $tmp1659(Iter$493$91648);
                panda$core$Bit $tmp1662 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1661);
                bool $tmp1657 = $tmp1662.value;
                if (!$tmp1657) goto $l1656;
                {
                    int $tmp1665;
                    {
                        ITable* $tmp1669 = Iter$493$91648->$class->itable;
                        while ($tmp1669->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1669 = $tmp1669->next;
                        }
                        $fn1671 $tmp1670 = $tmp1669->methods[1];
                        panda$core$Object* $tmp1672 = $tmp1670(Iter$493$91648);
                        $tmp1668 = $tmp1672;
                        $tmp1667 = ((org$pandalanguage$pandac$ASTNode*) $tmp1668);
                        m1666 = $tmp1667;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1667));
                        panda$core$Panda$unref$panda$core$Object($tmp1668);
                        int $tmp1675;
                        {
                            $tmp1677 = m1666;
                            $match$494_131676 = $tmp1677;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1677));
                            panda$core$Bit $tmp1678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$494_131676->$rawValue, ((panda$core$Int64) { 24 }));
                            if ($tmp1678.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp1680 = ((org$pandalanguage$pandac$Position*) ((char*) $match$494_131676->$data + 0));
                                mPosition1679 = *$tmp1680;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1682 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$494_131676->$data + 32));
                                methodKind1681 = *$tmp1682;
                                panda$core$Bit $tmp1683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1681.$rawValue, ((panda$core$Int64) { 2 }));
                                if ($tmp1683.value) {
                                {
                                    {
                                        $match$497_251684 = p_kind;
                                        panda$core$Bit $tmp1685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$497_251684.$rawValue, ((panda$core$Int64) { 0 }));
                                        if ($tmp1685.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$497_251684.$rawValue, ((panda$core$Int64) { 1 }));
                                        if ($tmp1686.value) {
                                        {
                                            panda$core$Object* $tmp1689 = (($fn1688) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp1687 = $tmp1689;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1687), mPosition1679, &$s1690);
                                            panda$core$Panda$unref$panda$core$Object($tmp1687);
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$497_251684.$rawValue, ((panda$core$Int64) { 2 }));
                                        if ($tmp1691.value) {
                                        {
                                            panda$core$Object* $tmp1694 = (($fn1693) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp1692 = $tmp1694;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1692), mPosition1679, &$s1695);
                                            panda$core$Panda$unref$panda$core$Object($tmp1692);
                                        }
                                        }
                                        }
                                        }
                                    }
                                }
                                }
                            }
                            }
                            else {
                            {
                            }
                            }
                        }
                        $tmp1675 = -1;
                        goto $l1673;
                        $l1673:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1677));
                        switch ($tmp1675) {
                            case -1: goto $l1696;
                        }
                        $l1696:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1610, m1666);
                    }
                    $tmp1665 = -1;
                    goto $l1663;
                    $l1663:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1666));
                    m1666 = NULL;
                    switch ($tmp1665) {
                        case -1: goto $l1697;
                    }
                    $l1697:;
                }
                goto $l1655;
                $l1656:;
            }
            $tmp1647 = -1;
            goto $l1645;
            $l1645:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$493$91648));
            Iter$493$91648 = NULL;
            switch ($tmp1647) {
                case -1: goto $l1698;
            }
            $l1698:;
        }
        foundInit1699 = ((panda$core$Bit) { false });
        foundCleanup1700 = ((panda$core$Bit) { false });
        {
            int $tmp1703;
            {
                ITable* $tmp1707 = ((panda$collections$Iterable*) result1610->methods)->$class->itable;
                while ($tmp1707->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1707 = $tmp1707->next;
                }
                $fn1709 $tmp1708 = $tmp1707->methods[0];
                panda$collections$Iterator* $tmp1710 = $tmp1708(((panda$collections$Iterable*) result1610->methods));
                $tmp1706 = $tmp1710;
                $tmp1705 = $tmp1706;
                Iter$512$91704 = $tmp1705;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1705));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1706));
                $l1711:;
                ITable* $tmp1714 = Iter$512$91704->$class->itable;
                while ($tmp1714->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1714 = $tmp1714->next;
                }
                $fn1716 $tmp1715 = $tmp1714->methods[0];
                panda$core$Bit $tmp1717 = $tmp1715(Iter$512$91704);
                panda$core$Bit $tmp1718 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1717);
                bool $tmp1713 = $tmp1718.value;
                if (!$tmp1713) goto $l1712;
                {
                    int $tmp1721;
                    {
                        ITable* $tmp1725 = Iter$512$91704->$class->itable;
                        while ($tmp1725->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1725 = $tmp1725->next;
                        }
                        $fn1727 $tmp1726 = $tmp1725->methods[1];
                        panda$core$Object* $tmp1728 = $tmp1726(Iter$512$91704);
                        $tmp1724 = $tmp1728;
                        $tmp1723 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1724);
                        m1722 = $tmp1723;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1723));
                        panda$core$Panda$unref$panda$core$Object($tmp1724);
                        panda$core$Bit $tmp1729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1722->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
                        if ($tmp1729.value) {
                        {
                            foundInit1699 = ((panda$core$Bit) { true });
                        }
                        }
                        panda$core$Bit $tmp1732 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1722)->name, &$s1731);
                        bool $tmp1730 = $tmp1732.value;
                        if (!$tmp1730) goto $l1733;
                        panda$core$Int64 $tmp1734 = panda$collections$Array$get_count$R$panda$core$Int64(m1722->parameters);
                        panda$core$Bit $tmp1735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1734, ((panda$core$Int64) { 0 }));
                        $tmp1730 = $tmp1735.value;
                        $l1733:;
                        panda$core$Bit $tmp1736 = { $tmp1730 };
                        if ($tmp1736.value) {
                        {
                            foundCleanup1700 = ((panda$core$Bit) { true });
                            panda$core$Bit $tmp1737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp1737.value) {
                            {
                                panda$core$Object* $tmp1740 = (($fn1739) self->compiler->$class->vtable[2])(self->compiler);
                                $tmp1738 = $tmp1740;
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1738), p_position, &$s1741);
                                panda$core$Panda$unref$panda$core$Object($tmp1738);
                            }
                            }
                        }
                        }
                    }
                    $tmp1721 = -1;
                    goto $l1719;
                    $l1719:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1722));
                    m1722 = NULL;
                    switch ($tmp1721) {
                        case -1: goto $l1742;
                    }
                    $l1742:;
                }
                goto $l1711;
                $l1712:;
            }
            $tmp1703 = -1;
            goto $l1701;
            $l1701:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$512$91704));
            Iter$512$91704 = NULL;
            switch ($tmp1703) {
                case -1: goto $l1743;
            }
            $l1743:;
        }
        panda$core$Bit $tmp1746 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1699);
        bool $tmp1745 = $tmp1746.value;
        if (!$tmp1745) goto $l1747;
        panda$core$Bit $tmp1748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        $tmp1745 = $tmp1748.value;
        $l1747:;
        panda$core$Bit $tmp1749 = { $tmp1745 };
        bool $tmp1744 = $tmp1749.value;
        if (!$tmp1744) goto $l1750;
        panda$core$Bit $tmp1752 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result1610)->name, &$s1751);
        $tmp1744 = $tmp1752.value;
        $l1750:;
        panda$core$Bit $tmp1753 = { $tmp1744 };
        if ($tmp1753.value) {
        {
            int $tmp1756;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1760 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1762 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1762);
                $tmp1761 = $tmp1762;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1763, ((panda$core$Int64) { 2 }));
                panda$collections$Array* $tmp1766 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1766);
                $tmp1765 = $tmp1766;
                org$pandalanguage$pandac$Type* $tmp1768 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1767 = $tmp1768;
                panda$collections$ImmutableArray* $tmp1770 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1770);
                $tmp1769 = $tmp1770;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1760, result1610, p_position, NULL, $tmp1761, $tmp1763, &$s1764, $tmp1765, $tmp1767, $tmp1769);
                $tmp1759 = $tmp1760;
                $tmp1758 = $tmp1759;
                defaultInit1757 = $tmp1758;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1758));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1759));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1769));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1767));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1765));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1761));
                panda$collections$Array$add$panda$collections$Array$T(result1610->methods, ((panda$core$Object*) defaultInit1757));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1610->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1757));
            }
            $tmp1756 = -1;
            goto $l1754;
            $l1754:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1757));
            defaultInit1757 = NULL;
            switch ($tmp1756) {
                case -1: goto $l1771;
            }
            $l1771:;
        }
        }
        panda$core$Bit $tmp1774 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup1700);
        bool $tmp1773 = $tmp1774.value;
        if (!$tmp1773) goto $l1775;
        panda$core$Bit $tmp1777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp1776 = $tmp1777.value;
        if ($tmp1776) goto $l1778;
        panda$core$Bit $tmp1779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        $tmp1776 = $tmp1779.value;
        $l1778:;
        panda$core$Bit $tmp1780 = { $tmp1776 };
        $tmp1773 = $tmp1780.value;
        $l1775:;
        panda$core$Bit $tmp1781 = { $tmp1773 };
        bool $tmp1772 = $tmp1781.value;
        if (!$tmp1772) goto $l1782;
        panda$core$Bit $tmp1784 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result1610)->name, &$s1783);
        $tmp1772 = $tmp1784.value;
        $l1782:;
        panda$core$Bit $tmp1785 = { $tmp1772 };
        if ($tmp1785.value) {
        {
            int $tmp1788;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1792 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1794 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64 $tmp1795 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1794, $tmp1795);
                $tmp1793 = $tmp1794;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1796, ((panda$core$Int64) { 0 }));
                panda$collections$Array* $tmp1799 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1799);
                $tmp1798 = $tmp1799;
                org$pandalanguage$pandac$Type* $tmp1801 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1800 = $tmp1801;
                panda$collections$ImmutableArray* $tmp1803 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1803);
                $tmp1802 = $tmp1803;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1792, result1610, p_position, NULL, $tmp1793, $tmp1796, &$s1797, $tmp1798, $tmp1800, $tmp1802);
                $tmp1791 = $tmp1792;
                $tmp1790 = $tmp1791;
                defaultCleanup1789 = $tmp1790;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1790));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1791));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1802));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1800));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1798));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1793));
                panda$collections$Array$add$panda$collections$Array$T(result1610->methods, ((panda$core$Object*) defaultCleanup1789));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1610->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1789));
            }
            $tmp1788 = -1;
            goto $l1786;
            $l1786:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1789));
            defaultCleanup1789 = NULL;
            switch ($tmp1788) {
                case -1: goto $l1804;
            }
            $l1804:;
        }
        }
        panda$core$Bit $tmp1805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1805.value) {
        {
            haveFields1806 = ((panda$core$Bit) { false });
            {
                int $tmp1809;
                {
                    ITable* $tmp1813 = ((panda$collections$Iterable*) result1610->choiceEntries)->$class->itable;
                    while ($tmp1813->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1813 = $tmp1813->next;
                    }
                    $fn1815 $tmp1814 = $tmp1813->methods[0];
                    panda$collections$Iterator* $tmp1816 = $tmp1814(((panda$collections$Iterable*) result1610->choiceEntries));
                    $tmp1812 = $tmp1816;
                    $tmp1811 = $tmp1812;
                    Iter$540$131810 = $tmp1811;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1811));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1812));
                    $l1817:;
                    ITable* $tmp1820 = Iter$540$131810->$class->itable;
                    while ($tmp1820->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1820 = $tmp1820->next;
                    }
                    $fn1822 $tmp1821 = $tmp1820->methods[0];
                    panda$core$Bit $tmp1823 = $tmp1821(Iter$540$131810);
                    panda$core$Bit $tmp1824 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1823);
                    bool $tmp1819 = $tmp1824.value;
                    if (!$tmp1819) goto $l1818;
                    {
                        int $tmp1827;
                        {
                            ITable* $tmp1831 = Iter$540$131810->$class->itable;
                            while ($tmp1831->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1831 = $tmp1831->next;
                            }
                            $fn1833 $tmp1832 = $tmp1831->methods[1];
                            panda$core$Object* $tmp1834 = $tmp1832(Iter$540$131810);
                            $tmp1830 = $tmp1834;
                            $tmp1829 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1830);
                            e1828 = $tmp1829;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1829));
                            panda$core$Panda$unref$panda$core$Object($tmp1830);
                            panda$core$Int64 $tmp1835 = panda$collections$Array$get_count$R$panda$core$Int64(e1828->fields);
                            panda$core$Bit $tmp1836 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1835, ((panda$core$Int64) { 0 }));
                            if ($tmp1836.value) {
                            {
                                haveFields1806 = ((panda$core$Bit) { true });
                                $tmp1827 = 0;
                                goto $l1825;
                                $l1837:;
                                goto $l1818;
                            }
                            }
                        }
                        $tmp1827 = -1;
                        goto $l1825;
                        $l1825:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1828));
                        e1828 = NULL;
                        switch ($tmp1827) {
                            case 0: goto $l1837;
                            case -1: goto $l1838;
                        }
                        $l1838:;
                    }
                    goto $l1817;
                    $l1818:;
                }
                $tmp1809 = -1;
                goto $l1807;
                $l1807:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$540$131810));
                Iter$540$131810 = NULL;
                switch ($tmp1809) {
                    case -1: goto $l1839;
                }
                $l1839:;
            }
            panda$core$Bit $tmp1840 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1806);
            if ($tmp1840.value) {
            {
                {
                    $tmp1841 = result1610->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp1844 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp1843 = $tmp1844;
                    $tmp1842 = $tmp1843;
                    result1610->rawSuper = $tmp1842;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1842));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1843));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1841));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp1848 = (($fn1847) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1846 = $tmp1848;
        panda$core$Object* $tmp1849 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1846)->currentClass);
        $tmp1845 = $tmp1849;
        panda$core$Panda$unref$panda$core$Object($tmp1845);
        panda$core$Panda$unref$panda$core$Object($tmp1846);
        $tmp1851 = result1610;
        $finallyReturn1849 = $tmp1851;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1851));
        $tmp1460 = 0;
        goto $l1458;
        $l1852:;
        return $finallyReturn1849;
    }
    $l1458:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1461));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1478));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1494));
    annotations1494 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1498));
    parameters1498 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1569));
    supertypes1569 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1610));
    result1610 = NULL;
    switch ($tmp1460) {
        case 0: goto $l1852;
    }
    $l1854:;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$556$91858 = NULL;
    panda$collections$Iterator* $tmp1859;
    panda$collections$Iterator* $tmp1860;
    org$pandalanguage$pandac$ClassDecl* inner1876 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1877;
    panda$core$Object* $tmp1878;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp1857;
        {
            ITable* $tmp1861 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp1861->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1861 = $tmp1861->next;
            }
            $fn1863 $tmp1862 = $tmp1861->methods[0];
            panda$collections$Iterator* $tmp1864 = $tmp1862(((panda$collections$Iterable*) p_cl->classes));
            $tmp1860 = $tmp1864;
            $tmp1859 = $tmp1860;
            Iter$556$91858 = $tmp1859;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1859));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1860));
            $l1865:;
            ITable* $tmp1868 = Iter$556$91858->$class->itable;
            while ($tmp1868->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1868 = $tmp1868->next;
            }
            $fn1870 $tmp1869 = $tmp1868->methods[0];
            panda$core$Bit $tmp1871 = $tmp1869(Iter$556$91858);
            panda$core$Bit $tmp1872 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1871);
            bool $tmp1867 = $tmp1872.value;
            if (!$tmp1867) goto $l1866;
            {
                int $tmp1875;
                {
                    ITable* $tmp1879 = Iter$556$91858->$class->itable;
                    while ($tmp1879->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1879 = $tmp1879->next;
                    }
                    $fn1881 $tmp1880 = $tmp1879->methods[1];
                    panda$core$Object* $tmp1882 = $tmp1880(Iter$556$91858);
                    $tmp1878 = $tmp1882;
                    $tmp1877 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1878);
                    inner1876 = $tmp1877;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1877));
                    panda$core$Panda$unref$panda$core$Object($tmp1878);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1876, p_arr);
                }
                $tmp1875 = -1;
                goto $l1873;
                $l1873:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1876));
                inner1876 = NULL;
                switch ($tmp1875) {
                    case -1: goto $l1883;
                }
                $l1883:;
            }
            goto $l1865;
            $l1866:;
        }
        $tmp1857 = -1;
        goto $l1855;
        $l1855:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$556$91858));
        Iter$556$91858 = NULL;
        switch ($tmp1857) {
            case -1: goto $l1884;
        }
        $l1884:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$562_91888 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1889;
    panda$collections$ImmutableArray* entries1891 = NULL;
    panda$collections$Array* result1896 = NULL;
    panda$collections$Array* $tmp1897;
    panda$collections$Array* $tmp1898;
    panda$core$String* currentPackage1900 = NULL;
    panda$core$String* $tmp1901;
    panda$collections$HashMap* aliases1903 = NULL;
    panda$collections$HashMap* $tmp1904;
    panda$collections$HashMap* $tmp1905;
    panda$collections$Iterator* Iter$567$171910 = NULL;
    panda$collections$Iterator* $tmp1911;
    panda$collections$Iterator* $tmp1912;
    org$pandalanguage$pandac$ASTNode* e1928 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1929;
    panda$core$Object* $tmp1930;
    org$pandalanguage$pandac$ASTNode* $match$568_211938 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1939;
    panda$core$String* name1941 = NULL;
    panda$core$String* $tmp1943;
    panda$core$String* $tmp1944;
    panda$core$String* fullName1946 = NULL;
    panda$core$String$Index$nullable idx1951;
    panda$core$String* alias1954 = NULL;
    panda$core$String* $tmp1955;
    panda$core$String* $tmp1956;
    panda$core$String* $tmp1957;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1958;
    panda$core$String* $tmp1961;
    panda$core$String* $tmp1962;
    org$pandalanguage$pandac$Position position1965;
    org$pandalanguage$pandac$ASTNode* dc1967 = NULL;
    panda$collections$ImmutableArray* annotations1969 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1971;
    panda$core$String* name1973 = NULL;
    panda$collections$ImmutableArray* generics1975 = NULL;
    panda$collections$ImmutableArray* supertypes1977 = NULL;
    panda$collections$ImmutableArray* members1979 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl1984 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1985;
    org$pandalanguage$pandac$ClassDecl* $tmp1986;
    panda$collections$ListView* $finallyReturn1991;
    panda$collections$ListView* $tmp1993;
    int $tmp1887;
    {
        $tmp1889 = p_file;
        $match$562_91888 = $tmp1889;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1889));
        panda$core$Bit $tmp1890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$562_91888->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1890.value) {
        {
            panda$collections$ImmutableArray** $tmp1892 = ((panda$collections$ImmutableArray**) ((char*) $match$562_91888->$data + 0));
            entries1891 = *$tmp1892;
            int $tmp1895;
            {
                panda$collections$Array* $tmp1899 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1899);
                $tmp1898 = $tmp1899;
                $tmp1897 = $tmp1898;
                result1896 = $tmp1897;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1897));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1898));
                $tmp1901 = &$s1902;
                currentPackage1900 = $tmp1901;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1901));
                panda$collections$HashMap* $tmp1906 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp1906);
                $tmp1905 = $tmp1906;
                $tmp1904 = $tmp1905;
                aliases1903 = $tmp1904;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1904));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1905));
                {
                    int $tmp1909;
                    {
                        ITable* $tmp1913 = ((panda$collections$Iterable*) entries1891)->$class->itable;
                        while ($tmp1913->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1913 = $tmp1913->next;
                        }
                        $fn1915 $tmp1914 = $tmp1913->methods[0];
                        panda$collections$Iterator* $tmp1916 = $tmp1914(((panda$collections$Iterable*) entries1891));
                        $tmp1912 = $tmp1916;
                        $tmp1911 = $tmp1912;
                        Iter$567$171910 = $tmp1911;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1911));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1912));
                        $l1917:;
                        ITable* $tmp1920 = Iter$567$171910->$class->itable;
                        while ($tmp1920->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1920 = $tmp1920->next;
                        }
                        $fn1922 $tmp1921 = $tmp1920->methods[0];
                        panda$core$Bit $tmp1923 = $tmp1921(Iter$567$171910);
                        panda$core$Bit $tmp1924 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1923);
                        bool $tmp1919 = $tmp1924.value;
                        if (!$tmp1919) goto $l1918;
                        {
                            int $tmp1927;
                            {
                                ITable* $tmp1931 = Iter$567$171910->$class->itable;
                                while ($tmp1931->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1931 = $tmp1931->next;
                                }
                                $fn1933 $tmp1932 = $tmp1931->methods[1];
                                panda$core$Object* $tmp1934 = $tmp1932(Iter$567$171910);
                                $tmp1930 = $tmp1934;
                                $tmp1929 = ((org$pandalanguage$pandac$ASTNode*) $tmp1930);
                                e1928 = $tmp1929;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1929));
                                panda$core$Panda$unref$panda$core$Object($tmp1930);
                                int $tmp1937;
                                {
                                    $tmp1939 = e1928;
                                    $match$568_211938 = $tmp1939;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1939));
                                    panda$core$Bit $tmp1940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568_211938->$rawValue, ((panda$core$Int64) { 27 }));
                                    if ($tmp1940.value) {
                                    {
                                        panda$core$String** $tmp1942 = ((panda$core$String**) ((char*) $match$568_211938->$data + 16));
                                        name1941 = *$tmp1942;
                                        {
                                            $tmp1943 = currentPackage1900;
                                            $tmp1944 = name1941;
                                            currentPackage1900 = $tmp1944;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1944));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1943));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568_211938->$rawValue, ((panda$core$Int64) { 38 }));
                                    if ($tmp1945.value) {
                                    {
                                        panda$core$String** $tmp1947 = ((panda$core$String**) ((char*) $match$568_211938->$data + 16));
                                        fullName1946 = *$tmp1947;
                                        int $tmp1950;
                                        {
                                            panda$core$String$Index$nullable $tmp1953 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName1946, &$s1952);
                                            idx1951 = $tmp1953;
                                            memset(&alias1954, 0, sizeof(alias1954));
                                            if (((panda$core$Bit) { idx1951.nonnull }).value) {
                                            {
                                                {
                                                    $tmp1955 = alias1954;
                                                    panda$core$String$Index $tmp1959 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName1946, ((panda$core$String$Index) idx1951.value));
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1958, ((panda$core$String$Index$nullable) { $tmp1959, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                                    panda$core$String* $tmp1960 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName1946, $tmp1958);
                                                    $tmp1957 = $tmp1960;
                                                    $tmp1956 = $tmp1957;
                                                    alias1954 = $tmp1956;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1956));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1957));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1955));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp1961 = alias1954;
                                                    $tmp1962 = fullName1946;
                                                    alias1954 = $tmp1962;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1962));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1961));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1903, ((panda$collections$Key*) alias1954), ((panda$core$Object*) fullName1946));
                                        }
                                        $tmp1950 = -1;
                                        goto $l1948;
                                        $l1948:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias1954));
                                        switch ($tmp1950) {
                                            case -1: goto $l1963;
                                        }
                                        $l1963:;
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568_211938->$rawValue, ((panda$core$Int64) { 9 }));
                                    if ($tmp1964.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp1966 = ((org$pandalanguage$pandac$Position*) ((char*) $match$568_211938->$data + 0));
                                        position1965 = *$tmp1966;
                                        org$pandalanguage$pandac$ASTNode** $tmp1968 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$568_211938->$data + 16));
                                        dc1967 = *$tmp1968;
                                        panda$collections$ImmutableArray** $tmp1970 = ((panda$collections$ImmutableArray**) ((char*) $match$568_211938->$data + 24));
                                        annotations1969 = *$tmp1970;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp1972 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$568_211938->$data + 32));
                                        kind1971 = *$tmp1972;
                                        panda$core$String** $tmp1974 = ((panda$core$String**) ((char*) $match$568_211938->$data + 40));
                                        name1973 = *$tmp1974;
                                        panda$collections$ImmutableArray** $tmp1976 = ((panda$collections$ImmutableArray**) ((char*) $match$568_211938->$data + 48));
                                        generics1975 = *$tmp1976;
                                        panda$collections$ImmutableArray** $tmp1978 = ((panda$collections$ImmutableArray**) ((char*) $match$568_211938->$data + 56));
                                        supertypes1977 = *$tmp1978;
                                        panda$collections$ImmutableArray** $tmp1980 = ((panda$collections$ImmutableArray**) ((char*) $match$568_211938->$data + 64));
                                        members1979 = *$tmp1980;
                                        int $tmp1983;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp1987 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1903), currentPackage1900, position1965, dc1967, annotations1969, kind1971, name1973, generics1975, supertypes1977, members1979);
                                            $tmp1986 = $tmp1987;
                                            $tmp1985 = $tmp1986;
                                            cl1984 = $tmp1985;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1985));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1986));
                                            if (((panda$core$Bit) { cl1984 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl1984, result1896);
                                            }
                                            }
                                        }
                                        $tmp1983 = -1;
                                        goto $l1981;
                                        $l1981:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1984));
                                        cl1984 = NULL;
                                        switch ($tmp1983) {
                                            case -1: goto $l1988;
                                        }
                                        $l1988:;
                                    }
                                    }
                                    else {
                                    {
                                        PANDA_ASSERT(((panda$core$Bit) { false }).value);
                                    }
                                    }
                                    }
                                    }
                                }
                                $tmp1937 = -1;
                                goto $l1935;
                                $l1935:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1939));
                                switch ($tmp1937) {
                                    case -1: goto $l1989;
                                }
                                $l1989:;
                            }
                            $tmp1927 = -1;
                            goto $l1925;
                            $l1925:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1928));
                            e1928 = NULL;
                            switch ($tmp1927) {
                                case -1: goto $l1990;
                            }
                            $l1990:;
                        }
                        goto $l1917;
                        $l1918:;
                    }
                    $tmp1909 = -1;
                    goto $l1907;
                    $l1907:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$567$171910));
                    Iter$567$171910 = NULL;
                    switch ($tmp1909) {
                        case -1: goto $l1991;
                    }
                    $l1991:;
                }
                $tmp1993 = ((panda$collections$ListView*) result1896);
                $finallyReturn1991 = $tmp1993;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1993));
                $tmp1895 = 0;
                goto $l1893;
                $l1994:;
                $tmp1887 = 0;
                goto $l1885;
                $l1995:;
                return $finallyReturn1991;
            }
            $l1893:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1896));
            result1896 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1900));
            currentPackage1900 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases1903));
            aliases1903 = NULL;
            switch ($tmp1895) {
                case 0: goto $l1994;
            }
            $l1997:;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp1887 = -1;
    goto $l1885;
    $l1885:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1889));
    switch ($tmp1887) {
        case 0: goto $l1995;
        case -1: goto $l1998;
    }
    $l1998:;
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp2001;
    {
    }
    $tmp2001 = -1;
    goto $l1999;
    $l1999:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2001) {
        case -1: goto $l2002;
    }
    $l2002:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
}

