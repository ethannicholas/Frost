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
typedef panda$collections$Iterator* (*$fn1263)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1270)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1281)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1301)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1308)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1319)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1508)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1515)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1526)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1558)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn1564)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1573)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1584)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1591)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1602)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1613)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1616)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1651)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1658)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1669)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1686)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1691)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1707)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1714)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1725)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1737)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1813)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1820)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1831)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1845)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1861)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1868)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1879)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1913)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1920)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1931)(panda$collections$Iterator*);

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
static panda$core$String $s1211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s1385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s1409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s1413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s1432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1762 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s1950 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

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
            org$pandalanguage$pandac$Type* $tmp19 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
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
                org$pandalanguage$pandac$Type* $tmp39 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
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
                org$pandalanguage$pandac$Type* $tmp112 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
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
    org$pandalanguage$pandac$ClassDecl* $tmp1208;
    org$pandalanguage$pandac$ClassDecl* $tmp1209;
    panda$core$String* $tmp1210;
    panda$core$String* $tmp1214;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1215;
    panda$core$String* $tmp1219;
    org$pandalanguage$pandac$Position position1223;
    org$pandalanguage$pandac$ASTNode* dc1225 = NULL;
    panda$core$String* name1227 = NULL;
    panda$collections$ImmutableArray* fields1229 = NULL;
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
                        $tmp1209 = p_cl;
                        inner1204->owner = $tmp1209;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1209));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1208));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1204));
                    panda$core$String* $tmp1212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s1211);
                    $tmp1210 = $tmp1212;
                    panda$core$Bit $tmp1213 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner1204)->name, $tmp1210);
                    PANDA_ASSERT($tmp1213.value);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1210));
                    panda$core$Int64 $tmp1216 = panda$core$String$length$R$panda$core$Int64(((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                    panda$core$Int64 $tmp1217 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1216, ((panda$core$Int64) { 1 }));
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1215, ((panda$core$Int64$nullable) { $tmp1217, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                    panda$core$String* $tmp1218 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner1204)->name, $tmp1215);
                    $tmp1214 = $tmp1218;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner1204), $tmp1214);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1214));
                    panda$core$String* $tmp1220 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1219 = $tmp1220;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner1204->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_cl), $tmp1219);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1219));
                }
                }
            }
            $tmp1203 = -1;
            goto $l1201;
            $l1201:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1204));
            inner1204 = NULL;
            switch ($tmp1203) {
                case -1: goto $l1221;
            }
            $l1221:;
        }
        }
        else {
        panda$core$Bit $tmp1222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$329_91148->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1222.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1224 = ((org$pandalanguage$pandac$Position*) ((char*) $match$329_91148->$data + 0));
            position1223 = *$tmp1224;
            org$pandalanguage$pandac$ASTNode** $tmp1226 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$329_91148->$data + 16));
            dc1225 = *$tmp1226;
            panda$core$String** $tmp1228 = ((panda$core$String**) ((char*) $match$329_91148->$data + 24));
            name1227 = *$tmp1228;
            panda$collections$ImmutableArray** $tmp1230 = ((panda$collections$ImmutableArray**) ((char*) $match$329_91148->$data + 32));
            fields1229 = *$tmp1230;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1223, dc1225, name1227, fields1229);
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
        case -1: goto $l1231;
    }
    $l1231:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1235 = NULL;
    panda$core$String* $tmp1236;
    panda$core$String* $tmp1237;
    org$pandalanguage$pandac$ASTNode* $match$367_131241 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1242;
    org$pandalanguage$pandac$Position position1244;
    panda$core$String* text1246 = NULL;
    panda$core$String* $tmp1248;
    panda$core$String* $tmp1249;
    panda$collections$Array* fields1251 = NULL;
    panda$collections$Array* $tmp1252;
    panda$collections$Array* $tmp1253;
    panda$collections$Iterator* Iter$375$91258 = NULL;
    panda$collections$Iterator* $tmp1259;
    panda$collections$Iterator* $tmp1260;
    org$pandalanguage$pandac$ASTNode* t1276 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1277;
    panda$core$Object* $tmp1278;
    org$pandalanguage$pandac$Type* $tmp1283;
    org$pandalanguage$pandac$ChoiceEntry* entry1287 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1288;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1289;
    panda$core$Bit found1292;
    panda$collections$Iterator* Iter$383$161296 = NULL;
    panda$collections$Iterator* $tmp1297;
    panda$collections$Iterator* $tmp1298;
    org$pandalanguage$pandac$MethodDecl* m1314 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1315;
    panda$core$Object* $tmp1316;
    panda$core$Object* $tmp1327;
    org$pandalanguage$pandac$Type* $tmp1329;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1332;
    panda$core$Object* $tmp1347;
    panda$core$Object* $tmp1349;
    org$pandalanguage$pandac$MethodDecl* $tmp1359;
    org$pandalanguage$pandac$MethodDecl* $tmp1360;
    panda$collections$Array* parameters1368 = NULL;
    panda$collections$Array* $tmp1369;
    panda$collections$Array* $tmp1370;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1372;
    org$pandalanguage$pandac$Type* $tmp1375;
    panda$collections$Array* statements1377 = NULL;
    panda$collections$Array* $tmp1378;
    panda$collections$Array* $tmp1379;
    org$pandalanguage$pandac$ASTNode* $tmp1381;
    org$pandalanguage$pandac$ASTNode* $tmp1383;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1386;
    org$pandalanguage$pandac$ASTNode* $tmp1387;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1390;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1405;
    panda$core$String* $tmp1407;
    panda$core$String* $tmp1408;
    panda$core$Object* $tmp1410;
    panda$core$Object* $tmp1415;
    org$pandalanguage$pandac$ASTNode* $tmp1417;
    org$pandalanguage$pandac$ASTNode* $tmp1419;
    org$pandalanguage$pandac$ASTNode* $tmp1421;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1423;
    org$pandalanguage$pandac$ASTNode* $tmp1424;
    panda$core$String* $tmp1426;
    panda$core$String* $tmp1427;
    panda$core$Object* $tmp1429;
    org$pandalanguage$pandac$MethodDecl* synthetic1440 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1441;
    org$pandalanguage$pandac$MethodDecl* $tmp1442;
    org$pandalanguage$pandac$Annotations* $tmp1444;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1446;
    org$pandalanguage$pandac$Type* $tmp1448;
    panda$collections$ImmutableArray* $tmp1450;
    org$pandalanguage$pandac$MethodDecl* $tmp1452;
    org$pandalanguage$pandac$MethodDecl* $tmp1453;
    int $tmp1234;
    {
        memset(&doccomment1235, 0, sizeof(doccomment1235));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1236 = doccomment1235;
                $tmp1237 = NULL;
                doccomment1235 = $tmp1237;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1237));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1236));
            }
        }
        }
        else {
        {
            int $tmp1240;
            {
                $tmp1242 = p_rawDoccomment;
                $match$367_131241 = $tmp1242;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1242));
                panda$core$Bit $tmp1243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$367_131241->$rawValue, ((panda$core$Int64) { 34 }));
                if ($tmp1243.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1245 = ((org$pandalanguage$pandac$Position*) ((char*) $match$367_131241->$data + 0));
                    position1244 = *$tmp1245;
                    panda$core$String** $tmp1247 = ((panda$core$String**) ((char*) $match$367_131241->$data + 16));
                    text1246 = *$tmp1247;
                    {
                        $tmp1248 = doccomment1235;
                        $tmp1249 = text1246;
                        doccomment1235 = $tmp1249;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1249));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1248));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1240 = -1;
            goto $l1238;
            $l1238:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1242));
            switch ($tmp1240) {
                case -1: goto $l1250;
            }
            $l1250:;
        }
        }
        panda$collections$Array* $tmp1254 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1254);
        $tmp1253 = $tmp1254;
        $tmp1252 = $tmp1253;
        fields1251 = $tmp1252;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1252));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1253));
        {
            int $tmp1257;
            {
                ITable* $tmp1261 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1261->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1261 = $tmp1261->next;
                }
                $fn1263 $tmp1262 = $tmp1261->methods[0];
                panda$collections$Iterator* $tmp1264 = $tmp1262(((panda$collections$Iterable*) p_rawFields));
                $tmp1260 = $tmp1264;
                $tmp1259 = $tmp1260;
                Iter$375$91258 = $tmp1259;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1259));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1260));
                $l1265:;
                ITable* $tmp1268 = Iter$375$91258->$class->itable;
                while ($tmp1268->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1268 = $tmp1268->next;
                }
                $fn1270 $tmp1269 = $tmp1268->methods[0];
                panda$core$Bit $tmp1271 = $tmp1269(Iter$375$91258);
                panda$core$Bit $tmp1272 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1271);
                bool $tmp1267 = $tmp1272.value;
                if (!$tmp1267) goto $l1266;
                {
                    int $tmp1275;
                    {
                        ITable* $tmp1279 = Iter$375$91258->$class->itable;
                        while ($tmp1279->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1279 = $tmp1279->next;
                        }
                        $fn1281 $tmp1280 = $tmp1279->methods[1];
                        panda$core$Object* $tmp1282 = $tmp1280(Iter$375$91258);
                        $tmp1278 = $tmp1282;
                        $tmp1277 = ((org$pandalanguage$pandac$ASTNode*) $tmp1278);
                        t1276 = $tmp1277;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1277));
                        panda$core$Panda$unref$panda$core$Object($tmp1278);
                        org$pandalanguage$pandac$Type* $tmp1284 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1276);
                        $tmp1283 = $tmp1284;
                        panda$collections$Array$add$panda$collections$Array$T(fields1251, ((panda$core$Object*) $tmp1283));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1283));
                    }
                    $tmp1275 = -1;
                    goto $l1273;
                    $l1273:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1276));
                    t1276 = NULL;
                    switch ($tmp1275) {
                        case -1: goto $l1285;
                    }
                    $l1285:;
                }
                goto $l1265;
                $l1266:;
            }
            $tmp1257 = -1;
            goto $l1255;
            $l1255:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$375$91258));
            Iter$375$91258 = NULL;
            switch ($tmp1257) {
                case -1: goto $l1286;
            }
            $l1286:;
        }
        org$pandalanguage$pandac$ChoiceEntry* $tmp1290 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(97, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
        panda$core$Int64 $tmp1291 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
        org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1290, p_cl, p_position, p_name, doccomment1235, $tmp1291, ((panda$collections$ListView*) fields1251));
        $tmp1289 = $tmp1290;
        $tmp1288 = $tmp1289;
        entry1287 = $tmp1288;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1288));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1289));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry1287));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1287));
        found1292 = ((panda$core$Bit) { false });
        {
            int $tmp1295;
            {
                ITable* $tmp1299 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
                while ($tmp1299->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1299 = $tmp1299->next;
                }
                $fn1301 $tmp1300 = $tmp1299->methods[0];
                panda$collections$Iterator* $tmp1302 = $tmp1300(((panda$collections$Iterable*) p_cl->methods));
                $tmp1298 = $tmp1302;
                $tmp1297 = $tmp1298;
                Iter$383$161296 = $tmp1297;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1297));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1298));
                $l1303:;
                ITable* $tmp1306 = Iter$383$161296->$class->itable;
                while ($tmp1306->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1306 = $tmp1306->next;
                }
                $fn1308 $tmp1307 = $tmp1306->methods[0];
                panda$core$Bit $tmp1309 = $tmp1307(Iter$383$161296);
                panda$core$Bit $tmp1310 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1309);
                bool $tmp1305 = $tmp1310.value;
                if (!$tmp1305) goto $l1304;
                {
                    int $tmp1313;
                    {
                        ITable* $tmp1317 = Iter$383$161296->$class->itable;
                        while ($tmp1317->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1317 = $tmp1317->next;
                        }
                        $fn1319 $tmp1318 = $tmp1317->methods[1];
                        panda$core$Object* $tmp1320 = $tmp1318(Iter$383$161296);
                        $tmp1316 = $tmp1320;
                        $tmp1315 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1316);
                        m1314 = $tmp1315;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1315));
                        panda$core$Panda$unref$panda$core$Object($tmp1316);
                        panda$core$Bit $tmp1321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1314->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
                        PANDA_ASSERT($tmp1321.value);
                        panda$core$Int64 $tmp1322 = panda$collections$Array$get_count$R$panda$core$Int64(m1314->parameters);
                        panda$core$Int64 $tmp1323 = panda$collections$Array$get_count$R$panda$core$Int64(fields1251);
                        panda$core$Int64 $tmp1324 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1323, ((panda$core$Int64) { 1 }));
                        panda$core$Bit $tmp1325 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1322, $tmp1324);
                        if ($tmp1325.value) {
                        {
                            $tmp1313 = 0;
                            goto $l1311;
                            $l1326:;
                            goto $l1303;
                        }
                        }
                        panda$core$Object* $tmp1328 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1314->parameters, ((panda$core$Int64) { 0 }));
                        $tmp1327 = $tmp1328;
                        org$pandalanguage$pandac$Type* $tmp1330 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        $tmp1329 = $tmp1330;
                        panda$core$Bit $tmp1331 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1327)->type, $tmp1329);
                        PANDA_ASSERT($tmp1331.value);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1329));
                        panda$core$Panda$unref$panda$core$Object($tmp1327);
                        panda$core$Int64 $tmp1333 = panda$collections$Array$get_count$R$panda$core$Int64(fields1251);
                        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1332, ((panda$core$Int64) { 0 }), $tmp1333, ((panda$core$Bit) { false }));
                        int64_t $tmp1335 = $tmp1332.min.value;
                        panda$core$Int64 i1334 = { $tmp1335 };
                        int64_t $tmp1337 = $tmp1332.max.value;
                        bool $tmp1338 = $tmp1332.inclusive.value;
                        if ($tmp1338) goto $l1345; else goto $l1346;
                        $l1345:;
                        if ($tmp1335 <= $tmp1337) goto $l1339; else goto $l1341;
                        $l1346:;
                        if ($tmp1335 < $tmp1337) goto $l1339; else goto $l1341;
                        $l1339:;
                        {
                            panda$core$Object* $tmp1348 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields1251, i1334);
                            $tmp1347 = $tmp1348;
                            panda$core$Int64 $tmp1350 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i1334, ((panda$core$Int64) { 1 }));
                            panda$core$Object* $tmp1351 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1314->parameters, $tmp1350);
                            $tmp1349 = $tmp1351;
                            panda$core$Bit $tmp1352 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1347), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1349)->type);
                            panda$core$Panda$unref$panda$core$Object($tmp1349);
                            panda$core$Panda$unref$panda$core$Object($tmp1347);
                            if ($tmp1352.value) {
                            {
                                goto $l1303;
                            }
                            }
                        }
                        $l1342:;
                        int64_t $tmp1354 = $tmp1337 - i1334.value;
                        if ($tmp1338) goto $l1355; else goto $l1356;
                        $l1355:;
                        if ((uint64_t) $tmp1354 >= 1) goto $l1353; else goto $l1341;
                        $l1356:;
                        if ((uint64_t) $tmp1354 > 1) goto $l1353; else goto $l1341;
                        $l1353:;
                        i1334.value += 1;
                        goto $l1339;
                        $l1341:;
                        {
                            $tmp1359 = entry1287->initMethod;
                            $tmp1360 = m1314;
                            entry1287->initMethod = $tmp1360;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1360));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1359));
                        }
                        found1292 = ((panda$core$Bit) { true });
                        $tmp1313 = 1;
                        goto $l1311;
                        $l1361:;
                        goto $l1304;
                    }
                    $l1311:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1314));
                    m1314 = NULL;
                    switch ($tmp1313) {
                        case 0: goto $l1326;
                        case 1: goto $l1361;
                    }
                    $l1362:;
                }
                goto $l1303;
                $l1304:;
            }
            $tmp1295 = -1;
            goto $l1293;
            $l1293:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$383$161296));
            Iter$383$161296 = NULL;
            switch ($tmp1295) {
                case -1: goto $l1363;
            }
            $l1363:;
        }
        panda$core$Bit $tmp1364 = panda$core$Bit$$NOT$R$panda$core$Bit(found1292);
        if ($tmp1364.value) {
        {
            int $tmp1367;
            {
                panda$collections$Array* $tmp1371 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1371);
                $tmp1370 = $tmp1371;
                $tmp1369 = $tmp1370;
                parameters1368 = $tmp1369;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1369));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1370));
                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1373 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                org$pandalanguage$pandac$Type* $tmp1376 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1375 = $tmp1376;
                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1373, &$s1374, $tmp1375);
                $tmp1372 = $tmp1373;
                panda$collections$Array$add$panda$collections$Array$T(parameters1368, ((panda$core$Object*) $tmp1372));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1372));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1375));
                panda$collections$Array* $tmp1380 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1380);
                $tmp1379 = $tmp1380;
                $tmp1378 = $tmp1379;
                statements1377 = $tmp1378;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1378));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1379));
                org$pandalanguage$pandac$ASTNode* $tmp1382 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode* $tmp1384 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1384, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s1385);
                $tmp1383 = $tmp1384;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1386, ((panda$core$Int64) { 73 }));
                org$pandalanguage$pandac$ASTNode* $tmp1388 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1388, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s1389);
                $tmp1387 = $tmp1388;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1382, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp1383, $tmp1386, $tmp1387);
                $tmp1381 = $tmp1382;
                panda$collections$Array$add$panda$collections$Array$T(statements1377, ((panda$core$Object*) $tmp1381));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1381));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1387));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1383));
                panda$core$Int64 $tmp1391 = panda$collections$Array$get_count$R$panda$core$Int64(fields1251);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1390, ((panda$core$Int64) { 0 }), $tmp1391, ((panda$core$Bit) { false }));
                int64_t $tmp1393 = $tmp1390.min.value;
                panda$core$Int64 i1392 = { $tmp1393 };
                int64_t $tmp1395 = $tmp1390.max.value;
                bool $tmp1396 = $tmp1390.inclusive.value;
                if ($tmp1396) goto $l1403; else goto $l1404;
                $l1403:;
                if ($tmp1393 <= $tmp1395) goto $l1397; else goto $l1399;
                $l1404:;
                if ($tmp1393 < $tmp1395) goto $l1397; else goto $l1399;
                $l1397:;
                {
                    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1406 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                    panda$core$Int64$wrapper* $tmp1411;
                    $tmp1411 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                    $tmp1411->value = i1392;
                    $tmp1410 = ((panda$core$Object*) $tmp1411);
                    panda$core$String* $tmp1412 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1409, $tmp1410);
                    $tmp1408 = $tmp1412;
                    panda$core$String* $tmp1414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1408, &$s1413);
                    $tmp1407 = $tmp1414;
                    panda$core$Object* $tmp1416 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields1251, i1392);
                    $tmp1415 = $tmp1416;
                    org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1406, $tmp1407, ((org$pandalanguage$pandac$Type*) $tmp1415));
                    $tmp1405 = $tmp1406;
                    panda$collections$Array$add$panda$collections$Array$T(parameters1368, ((panda$core$Object*) $tmp1405));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1405));
                    panda$core$Panda$unref$panda$core$Object($tmp1415);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1407));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1408));
                    panda$core$Panda$unref$panda$core$Object($tmp1410);
                    org$pandalanguage$pandac$ASTNode* $tmp1418 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode* $tmp1420 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode* $tmp1422 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1422, ((panda$core$Int64) { 33 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position);
                    $tmp1421 = $tmp1422;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64($tmp1420, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp1421, entry1287, i1392);
                    $tmp1419 = $tmp1420;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1423, ((panda$core$Int64) { 73 }));
                    org$pandalanguage$pandac$ASTNode* $tmp1425 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$wrapper* $tmp1430;
                    $tmp1430 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                    $tmp1430->value = i1392;
                    $tmp1429 = ((panda$core$Object*) $tmp1430);
                    panda$core$String* $tmp1431 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1428, $tmp1429);
                    $tmp1427 = $tmp1431;
                    panda$core$String* $tmp1433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1427, &$s1432);
                    $tmp1426 = $tmp1433;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1425, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp1426);
                    $tmp1424 = $tmp1425;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1418, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp1419, $tmp1423, $tmp1424);
                    $tmp1417 = $tmp1418;
                    panda$collections$Array$add$panda$collections$Array$T(statements1377, ((panda$core$Object*) $tmp1417));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1417));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1424));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1426));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1427));
                    panda$core$Panda$unref$panda$core$Object($tmp1429);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1419));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1421));
                }
                $l1400:;
                int64_t $tmp1435 = $tmp1395 - i1392.value;
                if ($tmp1396) goto $l1436; else goto $l1437;
                $l1436:;
                if ((uint64_t) $tmp1435 >= 1) goto $l1434; else goto $l1399;
                $l1437:;
                if ((uint64_t) $tmp1435 > 1) goto $l1434; else goto $l1399;
                $l1434:;
                i1392.value += 1;
                goto $l1397;
                $l1399:;
                org$pandalanguage$pandac$MethodDecl* $tmp1443 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1445 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1445);
                $tmp1444 = $tmp1445;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1446, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$Type* $tmp1449 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1448 = $tmp1449;
                panda$collections$ImmutableArray* $tmp1451 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements1377);
                $tmp1450 = $tmp1451;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1443, p_cl, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, NULL, $tmp1444, $tmp1446, &$s1447, parameters1368, $tmp1448, $tmp1450);
                $tmp1442 = $tmp1443;
                $tmp1441 = $tmp1442;
                synthetic1440 = $tmp1441;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1441));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1442));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1450));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1448));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1444));
                {
                    $tmp1452 = entry1287->initMethod;
                    $tmp1453 = synthetic1440;
                    entry1287->initMethod = $tmp1453;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1453));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1452));
                }
                panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) synthetic1440));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) synthetic1440));
            }
            $tmp1367 = -1;
            goto $l1365;
            $l1365:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1368));
            parameters1368 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1377));
            statements1377 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) synthetic1440));
            synthetic1440 = NULL;
            switch ($tmp1367) {
                case -1: goto $l1454;
            }
            $l1454:;
        }
        }
    }
    $tmp1234 = -1;
    goto $l1232;
    $l1232:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1235));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1251));
    fields1251 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1287));
    entry1287 = NULL;
    switch ($tmp1234) {
        case -1: goto $l1455;
    }
    $l1455:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1459 = NULL;
    panda$core$String* $tmp1462;
    panda$core$String* $tmp1463;
    panda$core$String* $tmp1464;
    panda$core$String* $tmp1465;
    panda$core$String* $tmp1466;
    panda$core$String* $tmp1467;
    panda$core$String* $tmp1474;
    panda$core$String* $tmp1475;
    panda$core$String* doccomment1476 = NULL;
    panda$core$String* $tmp1477;
    panda$core$String* $tmp1478;
    org$pandalanguage$pandac$ASTNode* $match$442_131482 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1483;
    org$pandalanguage$pandac$Position position1485;
    panda$core$String* text1487 = NULL;
    panda$core$String* $tmp1489;
    panda$core$String* $tmp1490;
    org$pandalanguage$pandac$Annotations* annotations1492 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1493;
    org$pandalanguage$pandac$Annotations* $tmp1494;
    panda$collections$Array* parameters1496 = NULL;
    panda$collections$Array* $tmp1497;
    panda$collections$Array* $tmp1498;
    panda$collections$Iterator* Iter$452$131503 = NULL;
    panda$collections$Iterator* $tmp1504;
    panda$collections$Iterator* $tmp1505;
    org$pandalanguage$pandac$ASTNode* p1521 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1522;
    panda$core$Object* $tmp1523;
    panda$core$String* name1528 = NULL;
    org$pandalanguage$pandac$Type* bound1529 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$455_171533 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1534;
    panda$core$String* id1536 = NULL;
    panda$core$String* $tmp1538;
    panda$core$String* $tmp1539;
    org$pandalanguage$pandac$Type* $tmp1540;
    org$pandalanguage$pandac$Type* $tmp1541;
    org$pandalanguage$pandac$Type* $tmp1542;
    panda$core$String* id1545 = NULL;
    org$pandalanguage$pandac$ASTNode* type1547 = NULL;
    panda$core$String* $tmp1549;
    panda$core$String* $tmp1550;
    org$pandalanguage$pandac$Type* $tmp1551;
    org$pandalanguage$pandac$Type* $tmp1552;
    org$pandalanguage$pandac$Type* $tmp1553;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1556;
    panda$core$Object* $tmp1563;
    panda$collections$Array* supertypes1567 = NULL;
    panda$collections$Array* $tmp1568;
    panda$collections$Array* $tmp1569;
    panda$core$Object* $tmp1572;
    panda$collections$Iterator* Iter$476$131579 = NULL;
    panda$collections$Iterator* $tmp1580;
    panda$collections$Iterator* $tmp1581;
    org$pandalanguage$pandac$ASTNode* s1597 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1598;
    panda$core$Object* $tmp1599;
    org$pandalanguage$pandac$Type* $tmp1604;
    org$pandalanguage$pandac$ClassDecl* result1608 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1609;
    org$pandalanguage$pandac$ClassDecl* $tmp1610;
    panda$core$Object* $tmp1612;
    panda$core$Object* $tmp1615;
    org$pandalanguage$pandac$FieldDecl* rawValue1622 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1623;
    org$pandalanguage$pandac$FieldDecl* $tmp1624;
    org$pandalanguage$pandac$Annotations* $tmp1626;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1628;
    org$pandalanguage$pandac$Type* $tmp1630;
    org$pandalanguage$pandac$FieldDecl* data1632 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1633;
    org$pandalanguage$pandac$FieldDecl* $tmp1634;
    org$pandalanguage$pandac$Annotations* $tmp1636;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1638;
    org$pandalanguage$pandac$Type* $tmp1640;
    panda$collections$Iterator* Iter$493$91646 = NULL;
    panda$collections$Iterator* $tmp1647;
    panda$collections$Iterator* $tmp1648;
    org$pandalanguage$pandac$ASTNode* m1664 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1665;
    panda$core$Object* $tmp1666;
    org$pandalanguage$pandac$ASTNode* $match$494_131674 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1675;
    org$pandalanguage$pandac$Position mPosition1677;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1679;
    org$pandalanguage$pandac$ClassDecl$Kind $match$497_251682;
    panda$core$Object* $tmp1685;
    panda$core$Object* $tmp1690;
    panda$core$Bit foundInit1697;
    panda$core$Bit foundCleanup1698;
    panda$collections$Iterator* Iter$512$91702 = NULL;
    panda$collections$Iterator* $tmp1703;
    panda$collections$Iterator* $tmp1704;
    org$pandalanguage$pandac$MethodDecl* m1720 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1721;
    panda$core$Object* $tmp1722;
    panda$core$Object* $tmp1736;
    org$pandalanguage$pandac$MethodDecl* defaultInit1755 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1756;
    org$pandalanguage$pandac$MethodDecl* $tmp1757;
    org$pandalanguage$pandac$Annotations* $tmp1759;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1761;
    panda$collections$Array* $tmp1763;
    org$pandalanguage$pandac$Type* $tmp1765;
    panda$collections$ImmutableArray* $tmp1767;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1787 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1788;
    org$pandalanguage$pandac$MethodDecl* $tmp1789;
    org$pandalanguage$pandac$Annotations* $tmp1791;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1794;
    panda$collections$Array* $tmp1796;
    org$pandalanguage$pandac$Type* $tmp1798;
    panda$collections$ImmutableArray* $tmp1800;
    panda$core$Bit haveFields1804;
    panda$collections$Iterator* Iter$540$131808 = NULL;
    panda$collections$Iterator* $tmp1809;
    panda$collections$Iterator* $tmp1810;
    org$pandalanguage$pandac$ChoiceEntry* e1826 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1827;
    panda$core$Object* $tmp1828;
    org$pandalanguage$pandac$Type* $tmp1839;
    org$pandalanguage$pandac$Type* $tmp1840;
    org$pandalanguage$pandac$Type* $tmp1841;
    panda$core$Object* $tmp1843;
    panda$core$Object* $tmp1844;
    org$pandalanguage$pandac$ClassDecl* $finallyReturn1847;
    org$pandalanguage$pandac$ClassDecl* $tmp1849;
    int $tmp1458;
    {
        memset(&fullName1459, 0, sizeof(fullName1459));
        panda$core$Bit $tmp1461 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s1460);
        if ($tmp1461.value) {
        {
            {
                $tmp1462 = fullName1459;
                panda$core$String* $tmp1468 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1467 = $tmp1468;
                panda$core$String* $tmp1470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1467, &$s1469);
                $tmp1466 = $tmp1470;
                panda$core$String* $tmp1471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1466, p_name);
                $tmp1465 = $tmp1471;
                panda$core$String* $tmp1473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1465, &$s1472);
                $tmp1464 = $tmp1473;
                $tmp1463 = $tmp1464;
                fullName1459 = $tmp1463;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1463));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1464));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1465));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1466));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1467));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1462));
            }
        }
        }
        else {
        {
            {
                $tmp1474 = fullName1459;
                $tmp1475 = p_name;
                fullName1459 = $tmp1475;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1475));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1474));
            }
        }
        }
        memset(&doccomment1476, 0, sizeof(doccomment1476));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1477 = doccomment1476;
                $tmp1478 = NULL;
                doccomment1476 = $tmp1478;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1478));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1477));
            }
        }
        }
        else {
        {
            int $tmp1481;
            {
                $tmp1483 = p_rawDoccomment;
                $match$442_131482 = $tmp1483;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1483));
                panda$core$Bit $tmp1484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442_131482->$rawValue, ((panda$core$Int64) { 34 }));
                if ($tmp1484.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1486 = ((org$pandalanguage$pandac$Position*) ((char*) $match$442_131482->$data + 0));
                    position1485 = *$tmp1486;
                    panda$core$String** $tmp1488 = ((panda$core$String**) ((char*) $match$442_131482->$data + 16));
                    text1487 = *$tmp1488;
                    {
                        $tmp1489 = doccomment1476;
                        $tmp1490 = text1487;
                        doccomment1476 = $tmp1490;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1490));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1489));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1481 = -1;
            goto $l1479;
            $l1479:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1483));
            switch ($tmp1481) {
                case -1: goto $l1491;
            }
            $l1491:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1495 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1494 = $tmp1495;
        $tmp1493 = $tmp1494;
        annotations1492 = $tmp1493;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1493));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1494));
        panda$collections$Array* $tmp1499 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1499);
        $tmp1498 = $tmp1499;
        $tmp1497 = $tmp1498;
        parameters1496 = $tmp1497;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1497));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1498));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1502;
                {
                    ITable* $tmp1506 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1506->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1506 = $tmp1506->next;
                    }
                    $fn1508 $tmp1507 = $tmp1506->methods[0];
                    panda$collections$Iterator* $tmp1509 = $tmp1507(((panda$collections$Iterable*) p_generics));
                    $tmp1505 = $tmp1509;
                    $tmp1504 = $tmp1505;
                    Iter$452$131503 = $tmp1504;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1504));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1505));
                    $l1510:;
                    ITable* $tmp1513 = Iter$452$131503->$class->itable;
                    while ($tmp1513->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1513 = $tmp1513->next;
                    }
                    $fn1515 $tmp1514 = $tmp1513->methods[0];
                    panda$core$Bit $tmp1516 = $tmp1514(Iter$452$131503);
                    panda$core$Bit $tmp1517 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1516);
                    bool $tmp1512 = $tmp1517.value;
                    if (!$tmp1512) goto $l1511;
                    {
                        int $tmp1520;
                        {
                            ITable* $tmp1524 = Iter$452$131503->$class->itable;
                            while ($tmp1524->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1524 = $tmp1524->next;
                            }
                            $fn1526 $tmp1525 = $tmp1524->methods[1];
                            panda$core$Object* $tmp1527 = $tmp1525(Iter$452$131503);
                            $tmp1523 = $tmp1527;
                            $tmp1522 = ((org$pandalanguage$pandac$ASTNode*) $tmp1523);
                            p1521 = $tmp1522;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1522));
                            panda$core$Panda$unref$panda$core$Object($tmp1523);
                            memset(&name1528, 0, sizeof(name1528));
                            memset(&bound1529, 0, sizeof(bound1529));
                            int $tmp1532;
                            {
                                $tmp1534 = p1521;
                                $match$455_171533 = $tmp1534;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1534));
                                panda$core$Bit $tmp1535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$455_171533->$rawValue, ((panda$core$Int64) { 18 }));
                                if ($tmp1535.value) {
                                {
                                    panda$core$String** $tmp1537 = ((panda$core$String**) ((char*) $match$455_171533->$data + 16));
                                    id1536 = *$tmp1537;
                                    {
                                        $tmp1538 = name1528;
                                        $tmp1539 = id1536;
                                        name1528 = $tmp1539;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1539));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1538));
                                    }
                                    {
                                        $tmp1540 = bound1529;
                                        org$pandalanguage$pandac$Type* $tmp1543 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1542 = $tmp1543;
                                        $tmp1541 = $tmp1542;
                                        bound1529 = $tmp1541;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1541));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1542));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1540));
                                    }
                                }
                                }
                                else {
                                panda$core$Bit $tmp1544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$455_171533->$rawValue, ((panda$core$Int64) { 37 }));
                                if ($tmp1544.value) {
                                {
                                    panda$core$String** $tmp1546 = ((panda$core$String**) ((char*) $match$455_171533->$data + 16));
                                    id1545 = *$tmp1546;
                                    org$pandalanguage$pandac$ASTNode** $tmp1548 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$455_171533->$data + 24));
                                    type1547 = *$tmp1548;
                                    {
                                        $tmp1549 = name1528;
                                        $tmp1550 = id1545;
                                        name1528 = $tmp1550;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1550));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1549));
                                    }
                                    {
                                        $tmp1551 = bound1529;
                                        org$pandalanguage$pandac$Type* $tmp1554 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1547);
                                        $tmp1553 = $tmp1554;
                                        $tmp1552 = $tmp1553;
                                        bound1529 = $tmp1552;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1552));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1553));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1551));
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
                            $tmp1532 = -1;
                            goto $l1530;
                            $l1530:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1534));
                            switch ($tmp1532) {
                                case -1: goto $l1555;
                            }
                            $l1555:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1557 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1559 = (($fn1558) p1521->$class->vtable[2])(p1521);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1557, $tmp1559, fullName1459, name1528, bound1529);
                            $tmp1556 = $tmp1557;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1496, ((panda$core$Object*) $tmp1556));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1556));
                        }
                        $tmp1520 = -1;
                        goto $l1518;
                        $l1518:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1521));
                        p1521 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1528));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1529));
                        switch ($tmp1520) {
                            case -1: goto $l1560;
                        }
                        $l1560:;
                    }
                    goto $l1510;
                    $l1511:;
                }
                $tmp1502 = -1;
                goto $l1500;
                $l1500:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$452$131503));
                Iter$452$131503 = NULL;
                switch ($tmp1502) {
                    case -1: goto $l1561;
                }
                $l1561:;
            }
            panda$core$Bit $tmp1562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1562.value) {
            {
                panda$core$Object* $tmp1565 = (($fn1564) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1563 = $tmp1565;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1563), p_position, &$s1566);
                panda$core$Panda$unref$panda$core$Object($tmp1563);
            }
            }
        }
        }
        panda$collections$Array* $tmp1570 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1570);
        $tmp1569 = $tmp1570;
        $tmp1568 = $tmp1569;
        supertypes1567 = $tmp1568;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1568));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1569));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Bit $tmp1571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1571.value) {
            {
                panda$core$Object* $tmp1574 = (($fn1573) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1572 = $tmp1574;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1572), p_position, &$s1575);
                panda$core$Panda$unref$panda$core$Object($tmp1572);
            }
            }
            {
                int $tmp1578;
                {
                    ITable* $tmp1582 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1582->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1582 = $tmp1582->next;
                    }
                    $fn1584 $tmp1583 = $tmp1582->methods[0];
                    panda$collections$Iterator* $tmp1585 = $tmp1583(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1581 = $tmp1585;
                    $tmp1580 = $tmp1581;
                    Iter$476$131579 = $tmp1580;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1580));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1581));
                    $l1586:;
                    ITable* $tmp1589 = Iter$476$131579->$class->itable;
                    while ($tmp1589->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1589 = $tmp1589->next;
                    }
                    $fn1591 $tmp1590 = $tmp1589->methods[0];
                    panda$core$Bit $tmp1592 = $tmp1590(Iter$476$131579);
                    panda$core$Bit $tmp1593 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1592);
                    bool $tmp1588 = $tmp1593.value;
                    if (!$tmp1588) goto $l1587;
                    {
                        int $tmp1596;
                        {
                            ITable* $tmp1600 = Iter$476$131579->$class->itable;
                            while ($tmp1600->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1600 = $tmp1600->next;
                            }
                            $fn1602 $tmp1601 = $tmp1600->methods[1];
                            panda$core$Object* $tmp1603 = $tmp1601(Iter$476$131579);
                            $tmp1599 = $tmp1603;
                            $tmp1598 = ((org$pandalanguage$pandac$ASTNode*) $tmp1599);
                            s1597 = $tmp1598;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1598));
                            panda$core$Panda$unref$panda$core$Object($tmp1599);
                            org$pandalanguage$pandac$Type* $tmp1605 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1597);
                            $tmp1604 = $tmp1605;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1567, ((panda$core$Object*) $tmp1604));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1604));
                        }
                        $tmp1596 = -1;
                        goto $l1594;
                        $l1594:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1597));
                        s1597 = NULL;
                        switch ($tmp1596) {
                            case -1: goto $l1606;
                        }
                        $l1606:;
                    }
                    goto $l1586;
                    $l1587:;
                }
                $tmp1578 = -1;
                goto $l1576;
                $l1576:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$476$131579));
                Iter$476$131579 = NULL;
                switch ($tmp1578) {
                    case -1: goto $l1607;
                }
                $l1607:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1611 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(201, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1614 = (($fn1613) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1612 = $tmp1614;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1611, p_source, p_position, p_aliases, doccomment1476, annotations1492, p_kind, fullName1459, ((panda$collections$ListView*) supertypes1567), parameters1496, ((org$pandalanguage$pandac$Compiler*) $tmp1612)->root);
        $tmp1610 = $tmp1611;
        $tmp1609 = $tmp1610;
        result1608 = $tmp1609;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1609));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1610));
        panda$core$Panda$unref$panda$core$Object($tmp1612);
        panda$core$Object* $tmp1617 = (($fn1616) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1615 = $tmp1617;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1615)->currentClass, ((panda$core$Object*) result1608));
        panda$core$Panda$unref$panda$core$Object($tmp1615);
        panda$core$Bit $tmp1618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1618.value) {
        {
            int $tmp1621;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1625 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1627 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1627);
                $tmp1626 = $tmp1627;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1628, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1631 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1630 = $tmp1631;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1625, result1608, ((org$pandalanguage$pandac$Symbol*) result1608)->position, NULL, $tmp1626, $tmp1628, &$s1629, $tmp1630, NULL);
                $tmp1624 = $tmp1625;
                $tmp1623 = $tmp1624;
                rawValue1622 = $tmp1623;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1623));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1624));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1630));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1626));
                panda$collections$Array$add$panda$collections$Array$T(result1608->fields, ((panda$core$Object*) rawValue1622));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1608->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1622));
                org$pandalanguage$pandac$FieldDecl* $tmp1635 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1637 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1637);
                $tmp1636 = $tmp1637;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1638, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1641 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1640 = $tmp1641;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1635, result1608, ((org$pandalanguage$pandac$Symbol*) result1608)->position, NULL, $tmp1636, $tmp1638, &$s1639, $tmp1640, NULL);
                $tmp1634 = $tmp1635;
                $tmp1633 = $tmp1634;
                data1632 = $tmp1633;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1633));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1634));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1640));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1636));
                panda$collections$Array$add$panda$collections$Array$T(result1608->fields, ((panda$core$Object*) data1632));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1608->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1632));
            }
            $tmp1621 = -1;
            goto $l1619;
            $l1619:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1622));
            rawValue1622 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1632));
            data1632 = NULL;
            switch ($tmp1621) {
                case -1: goto $l1642;
            }
            $l1642:;
        }
        }
        {
            int $tmp1645;
            {
                ITable* $tmp1649 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1649->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1649 = $tmp1649->next;
                }
                $fn1651 $tmp1650 = $tmp1649->methods[0];
                panda$collections$Iterator* $tmp1652 = $tmp1650(((panda$collections$Iterable*) p_members));
                $tmp1648 = $tmp1652;
                $tmp1647 = $tmp1648;
                Iter$493$91646 = $tmp1647;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1647));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1648));
                $l1653:;
                ITable* $tmp1656 = Iter$493$91646->$class->itable;
                while ($tmp1656->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1656 = $tmp1656->next;
                }
                $fn1658 $tmp1657 = $tmp1656->methods[0];
                panda$core$Bit $tmp1659 = $tmp1657(Iter$493$91646);
                panda$core$Bit $tmp1660 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1659);
                bool $tmp1655 = $tmp1660.value;
                if (!$tmp1655) goto $l1654;
                {
                    int $tmp1663;
                    {
                        ITable* $tmp1667 = Iter$493$91646->$class->itable;
                        while ($tmp1667->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1667 = $tmp1667->next;
                        }
                        $fn1669 $tmp1668 = $tmp1667->methods[1];
                        panda$core$Object* $tmp1670 = $tmp1668(Iter$493$91646);
                        $tmp1666 = $tmp1670;
                        $tmp1665 = ((org$pandalanguage$pandac$ASTNode*) $tmp1666);
                        m1664 = $tmp1665;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1665));
                        panda$core$Panda$unref$panda$core$Object($tmp1666);
                        int $tmp1673;
                        {
                            $tmp1675 = m1664;
                            $match$494_131674 = $tmp1675;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1675));
                            panda$core$Bit $tmp1676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$494_131674->$rawValue, ((panda$core$Int64) { 24 }));
                            if ($tmp1676.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp1678 = ((org$pandalanguage$pandac$Position*) ((char*) $match$494_131674->$data + 0));
                                mPosition1677 = *$tmp1678;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1680 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$494_131674->$data + 32));
                                methodKind1679 = *$tmp1680;
                                panda$core$Bit $tmp1681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1679.$rawValue, ((panda$core$Int64) { 2 }));
                                if ($tmp1681.value) {
                                {
                                    {
                                        $match$497_251682 = p_kind;
                                        panda$core$Bit $tmp1683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$497_251682.$rawValue, ((panda$core$Int64) { 0 }));
                                        if ($tmp1683.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$497_251682.$rawValue, ((panda$core$Int64) { 1 }));
                                        if ($tmp1684.value) {
                                        {
                                            panda$core$Object* $tmp1687 = (($fn1686) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp1685 = $tmp1687;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1685), mPosition1677, &$s1688);
                                            panda$core$Panda$unref$panda$core$Object($tmp1685);
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$497_251682.$rawValue, ((panda$core$Int64) { 2 }));
                                        if ($tmp1689.value) {
                                        {
                                            panda$core$Object* $tmp1692 = (($fn1691) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp1690 = $tmp1692;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1690), mPosition1677, &$s1693);
                                            panda$core$Panda$unref$panda$core$Object($tmp1690);
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
                        $tmp1673 = -1;
                        goto $l1671;
                        $l1671:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1675));
                        switch ($tmp1673) {
                            case -1: goto $l1694;
                        }
                        $l1694:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1608, m1664);
                    }
                    $tmp1663 = -1;
                    goto $l1661;
                    $l1661:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1664));
                    m1664 = NULL;
                    switch ($tmp1663) {
                        case -1: goto $l1695;
                    }
                    $l1695:;
                }
                goto $l1653;
                $l1654:;
            }
            $tmp1645 = -1;
            goto $l1643;
            $l1643:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$493$91646));
            Iter$493$91646 = NULL;
            switch ($tmp1645) {
                case -1: goto $l1696;
            }
            $l1696:;
        }
        foundInit1697 = ((panda$core$Bit) { false });
        foundCleanup1698 = ((panda$core$Bit) { false });
        {
            int $tmp1701;
            {
                ITable* $tmp1705 = ((panda$collections$Iterable*) result1608->methods)->$class->itable;
                while ($tmp1705->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1705 = $tmp1705->next;
                }
                $fn1707 $tmp1706 = $tmp1705->methods[0];
                panda$collections$Iterator* $tmp1708 = $tmp1706(((panda$collections$Iterable*) result1608->methods));
                $tmp1704 = $tmp1708;
                $tmp1703 = $tmp1704;
                Iter$512$91702 = $tmp1703;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1703));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1704));
                $l1709:;
                ITable* $tmp1712 = Iter$512$91702->$class->itable;
                while ($tmp1712->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1712 = $tmp1712->next;
                }
                $fn1714 $tmp1713 = $tmp1712->methods[0];
                panda$core$Bit $tmp1715 = $tmp1713(Iter$512$91702);
                panda$core$Bit $tmp1716 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1715);
                bool $tmp1711 = $tmp1716.value;
                if (!$tmp1711) goto $l1710;
                {
                    int $tmp1719;
                    {
                        ITable* $tmp1723 = Iter$512$91702->$class->itable;
                        while ($tmp1723->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1723 = $tmp1723->next;
                        }
                        $fn1725 $tmp1724 = $tmp1723->methods[1];
                        panda$core$Object* $tmp1726 = $tmp1724(Iter$512$91702);
                        $tmp1722 = $tmp1726;
                        $tmp1721 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1722);
                        m1720 = $tmp1721;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1721));
                        panda$core$Panda$unref$panda$core$Object($tmp1722);
                        panda$core$Bit $tmp1727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1720->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
                        if ($tmp1727.value) {
                        {
                            foundInit1697 = ((panda$core$Bit) { true });
                        }
                        }
                        panda$core$Bit $tmp1730 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1720)->name, &$s1729);
                        bool $tmp1728 = $tmp1730.value;
                        if (!$tmp1728) goto $l1731;
                        panda$core$Int64 $tmp1732 = panda$collections$Array$get_count$R$panda$core$Int64(m1720->parameters);
                        panda$core$Bit $tmp1733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1732, ((panda$core$Int64) { 0 }));
                        $tmp1728 = $tmp1733.value;
                        $l1731:;
                        panda$core$Bit $tmp1734 = { $tmp1728 };
                        if ($tmp1734.value) {
                        {
                            foundCleanup1698 = ((panda$core$Bit) { true });
                            panda$core$Bit $tmp1735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp1735.value) {
                            {
                                panda$core$Object* $tmp1738 = (($fn1737) self->compiler->$class->vtable[2])(self->compiler);
                                $tmp1736 = $tmp1738;
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1736), p_position, &$s1739);
                                panda$core$Panda$unref$panda$core$Object($tmp1736);
                            }
                            }
                        }
                        }
                    }
                    $tmp1719 = -1;
                    goto $l1717;
                    $l1717:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1720));
                    m1720 = NULL;
                    switch ($tmp1719) {
                        case -1: goto $l1740;
                    }
                    $l1740:;
                }
                goto $l1709;
                $l1710:;
            }
            $tmp1701 = -1;
            goto $l1699;
            $l1699:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$512$91702));
            Iter$512$91702 = NULL;
            switch ($tmp1701) {
                case -1: goto $l1741;
            }
            $l1741:;
        }
        panda$core$Bit $tmp1744 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1697);
        bool $tmp1743 = $tmp1744.value;
        if (!$tmp1743) goto $l1745;
        panda$core$Bit $tmp1746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        $tmp1743 = $tmp1746.value;
        $l1745:;
        panda$core$Bit $tmp1747 = { $tmp1743 };
        bool $tmp1742 = $tmp1747.value;
        if (!$tmp1742) goto $l1748;
        panda$core$Bit $tmp1750 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result1608)->name, &$s1749);
        $tmp1742 = $tmp1750.value;
        $l1748:;
        panda$core$Bit $tmp1751 = { $tmp1742 };
        if ($tmp1751.value) {
        {
            int $tmp1754;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1758 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1760 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1760);
                $tmp1759 = $tmp1760;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1761, ((panda$core$Int64) { 2 }));
                panda$collections$Array* $tmp1764 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1764);
                $tmp1763 = $tmp1764;
                org$pandalanguage$pandac$Type* $tmp1766 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1765 = $tmp1766;
                panda$collections$ImmutableArray* $tmp1768 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1768);
                $tmp1767 = $tmp1768;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1758, result1608, p_position, NULL, $tmp1759, $tmp1761, &$s1762, $tmp1763, $tmp1765, $tmp1767);
                $tmp1757 = $tmp1758;
                $tmp1756 = $tmp1757;
                defaultInit1755 = $tmp1756;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1756));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1757));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1767));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1765));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1763));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1759));
                panda$collections$Array$add$panda$collections$Array$T(result1608->methods, ((panda$core$Object*) defaultInit1755));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1608->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1755));
            }
            $tmp1754 = -1;
            goto $l1752;
            $l1752:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1755));
            defaultInit1755 = NULL;
            switch ($tmp1754) {
                case -1: goto $l1769;
            }
            $l1769:;
        }
        }
        panda$core$Bit $tmp1772 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup1698);
        bool $tmp1771 = $tmp1772.value;
        if (!$tmp1771) goto $l1773;
        panda$core$Bit $tmp1775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp1774 = $tmp1775.value;
        if ($tmp1774) goto $l1776;
        panda$core$Bit $tmp1777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        $tmp1774 = $tmp1777.value;
        $l1776:;
        panda$core$Bit $tmp1778 = { $tmp1774 };
        $tmp1771 = $tmp1778.value;
        $l1773:;
        panda$core$Bit $tmp1779 = { $tmp1771 };
        bool $tmp1770 = $tmp1779.value;
        if (!$tmp1770) goto $l1780;
        panda$core$Bit $tmp1782 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result1608)->name, &$s1781);
        $tmp1770 = $tmp1782.value;
        $l1780:;
        panda$core$Bit $tmp1783 = { $tmp1770 };
        if ($tmp1783.value) {
        {
            int $tmp1786;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1790 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1792 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64 $tmp1793 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1792, $tmp1793);
                $tmp1791 = $tmp1792;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1794, ((panda$core$Int64) { 0 }));
                panda$collections$Array* $tmp1797 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1797);
                $tmp1796 = $tmp1797;
                org$pandalanguage$pandac$Type* $tmp1799 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1798 = $tmp1799;
                panda$collections$ImmutableArray* $tmp1801 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1801);
                $tmp1800 = $tmp1801;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1790, result1608, p_position, NULL, $tmp1791, $tmp1794, &$s1795, $tmp1796, $tmp1798, $tmp1800);
                $tmp1789 = $tmp1790;
                $tmp1788 = $tmp1789;
                defaultCleanup1787 = $tmp1788;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1788));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1789));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1800));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1798));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1796));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1791));
                panda$collections$Array$add$panda$collections$Array$T(result1608->methods, ((panda$core$Object*) defaultCleanup1787));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1608->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1787));
            }
            $tmp1786 = -1;
            goto $l1784;
            $l1784:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1787));
            defaultCleanup1787 = NULL;
            switch ($tmp1786) {
                case -1: goto $l1802;
            }
            $l1802:;
        }
        }
        panda$core$Bit $tmp1803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1803.value) {
        {
            haveFields1804 = ((panda$core$Bit) { false });
            {
                int $tmp1807;
                {
                    ITable* $tmp1811 = ((panda$collections$Iterable*) result1608->choiceEntries)->$class->itable;
                    while ($tmp1811->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1811 = $tmp1811->next;
                    }
                    $fn1813 $tmp1812 = $tmp1811->methods[0];
                    panda$collections$Iterator* $tmp1814 = $tmp1812(((panda$collections$Iterable*) result1608->choiceEntries));
                    $tmp1810 = $tmp1814;
                    $tmp1809 = $tmp1810;
                    Iter$540$131808 = $tmp1809;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1809));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1810));
                    $l1815:;
                    ITable* $tmp1818 = Iter$540$131808->$class->itable;
                    while ($tmp1818->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1818 = $tmp1818->next;
                    }
                    $fn1820 $tmp1819 = $tmp1818->methods[0];
                    panda$core$Bit $tmp1821 = $tmp1819(Iter$540$131808);
                    panda$core$Bit $tmp1822 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1821);
                    bool $tmp1817 = $tmp1822.value;
                    if (!$tmp1817) goto $l1816;
                    {
                        int $tmp1825;
                        {
                            ITable* $tmp1829 = Iter$540$131808->$class->itable;
                            while ($tmp1829->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1829 = $tmp1829->next;
                            }
                            $fn1831 $tmp1830 = $tmp1829->methods[1];
                            panda$core$Object* $tmp1832 = $tmp1830(Iter$540$131808);
                            $tmp1828 = $tmp1832;
                            $tmp1827 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1828);
                            e1826 = $tmp1827;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1827));
                            panda$core$Panda$unref$panda$core$Object($tmp1828);
                            panda$core$Int64 $tmp1833 = panda$collections$Array$get_count$R$panda$core$Int64(e1826->fields);
                            panda$core$Bit $tmp1834 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1833, ((panda$core$Int64) { 0 }));
                            if ($tmp1834.value) {
                            {
                                haveFields1804 = ((panda$core$Bit) { true });
                                $tmp1825 = 0;
                                goto $l1823;
                                $l1835:;
                                goto $l1816;
                            }
                            }
                        }
                        $tmp1825 = -1;
                        goto $l1823;
                        $l1823:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1826));
                        e1826 = NULL;
                        switch ($tmp1825) {
                            case 0: goto $l1835;
                            case -1: goto $l1836;
                        }
                        $l1836:;
                    }
                    goto $l1815;
                    $l1816:;
                }
                $tmp1807 = -1;
                goto $l1805;
                $l1805:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$540$131808));
                Iter$540$131808 = NULL;
                switch ($tmp1807) {
                    case -1: goto $l1837;
                }
                $l1837:;
            }
            panda$core$Bit $tmp1838 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1804);
            if ($tmp1838.value) {
            {
                {
                    $tmp1839 = result1608->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp1842 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp1841 = $tmp1842;
                    $tmp1840 = $tmp1841;
                    result1608->rawSuper = $tmp1840;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1840));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1841));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1839));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp1846 = (($fn1845) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1844 = $tmp1846;
        panda$core$Object* $tmp1847 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1844)->currentClass);
        $tmp1843 = $tmp1847;
        panda$core$Panda$unref$panda$core$Object($tmp1843);
        panda$core$Panda$unref$panda$core$Object($tmp1844);
        $tmp1849 = result1608;
        $finallyReturn1847 = $tmp1849;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1849));
        $tmp1458 = 0;
        goto $l1456;
        $l1850:;
        return $finallyReturn1847;
    }
    $l1456:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1459));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1476));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1492));
    annotations1492 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1496));
    parameters1496 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1567));
    supertypes1567 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1608));
    result1608 = NULL;
    switch ($tmp1458) {
        case 0: goto $l1850;
    }
    $l1852:;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$556$91856 = NULL;
    panda$collections$Iterator* $tmp1857;
    panda$collections$Iterator* $tmp1858;
    org$pandalanguage$pandac$ClassDecl* inner1874 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1875;
    panda$core$Object* $tmp1876;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp1855;
        {
            ITable* $tmp1859 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp1859->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1859 = $tmp1859->next;
            }
            $fn1861 $tmp1860 = $tmp1859->methods[0];
            panda$collections$Iterator* $tmp1862 = $tmp1860(((panda$collections$Iterable*) p_cl->classes));
            $tmp1858 = $tmp1862;
            $tmp1857 = $tmp1858;
            Iter$556$91856 = $tmp1857;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1857));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1858));
            $l1863:;
            ITable* $tmp1866 = Iter$556$91856->$class->itable;
            while ($tmp1866->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1866 = $tmp1866->next;
            }
            $fn1868 $tmp1867 = $tmp1866->methods[0];
            panda$core$Bit $tmp1869 = $tmp1867(Iter$556$91856);
            panda$core$Bit $tmp1870 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1869);
            bool $tmp1865 = $tmp1870.value;
            if (!$tmp1865) goto $l1864;
            {
                int $tmp1873;
                {
                    ITable* $tmp1877 = Iter$556$91856->$class->itable;
                    while ($tmp1877->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1877 = $tmp1877->next;
                    }
                    $fn1879 $tmp1878 = $tmp1877->methods[1];
                    panda$core$Object* $tmp1880 = $tmp1878(Iter$556$91856);
                    $tmp1876 = $tmp1880;
                    $tmp1875 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1876);
                    inner1874 = $tmp1875;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1875));
                    panda$core$Panda$unref$panda$core$Object($tmp1876);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1874, p_arr);
                }
                $tmp1873 = -1;
                goto $l1871;
                $l1871:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1874));
                inner1874 = NULL;
                switch ($tmp1873) {
                    case -1: goto $l1881;
                }
                $l1881:;
            }
            goto $l1863;
            $l1864:;
        }
        $tmp1855 = -1;
        goto $l1853;
        $l1853:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$556$91856));
        Iter$556$91856 = NULL;
        switch ($tmp1855) {
            case -1: goto $l1882;
        }
        $l1882:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$562_91886 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1887;
    panda$collections$ImmutableArray* entries1889 = NULL;
    panda$collections$Array* result1894 = NULL;
    panda$collections$Array* $tmp1895;
    panda$collections$Array* $tmp1896;
    panda$core$String* currentPackage1898 = NULL;
    panda$core$String* $tmp1899;
    panda$collections$HashMap* aliases1901 = NULL;
    panda$collections$HashMap* $tmp1902;
    panda$collections$HashMap* $tmp1903;
    panda$collections$Iterator* Iter$567$171908 = NULL;
    panda$collections$Iterator* $tmp1909;
    panda$collections$Iterator* $tmp1910;
    org$pandalanguage$pandac$ASTNode* e1926 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1927;
    panda$core$Object* $tmp1928;
    org$pandalanguage$pandac$ASTNode* $match$568_211936 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1937;
    panda$core$String* name1939 = NULL;
    panda$core$String* $tmp1941;
    panda$core$String* $tmp1942;
    panda$core$String* fullName1944 = NULL;
    panda$core$String$Index$nullable idx1949;
    panda$core$String* alias1952 = NULL;
    panda$core$String* $tmp1953;
    panda$core$String* $tmp1954;
    panda$core$String* $tmp1955;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1956;
    panda$core$String* $tmp1959;
    panda$core$String* $tmp1960;
    org$pandalanguage$pandac$Position position1963;
    org$pandalanguage$pandac$ASTNode* dc1965 = NULL;
    panda$collections$ImmutableArray* annotations1967 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1969;
    panda$core$String* name1971 = NULL;
    panda$collections$ImmutableArray* generics1973 = NULL;
    panda$collections$ImmutableArray* supertypes1975 = NULL;
    panda$collections$ImmutableArray* members1977 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl1982 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1983;
    org$pandalanguage$pandac$ClassDecl* $tmp1984;
    panda$collections$ListView* $finallyReturn1989;
    panda$collections$ListView* $tmp1991;
    int $tmp1885;
    {
        $tmp1887 = p_file;
        $match$562_91886 = $tmp1887;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1887));
        panda$core$Bit $tmp1888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$562_91886->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1888.value) {
        {
            panda$collections$ImmutableArray** $tmp1890 = ((panda$collections$ImmutableArray**) ((char*) $match$562_91886->$data + 0));
            entries1889 = *$tmp1890;
            int $tmp1893;
            {
                panda$collections$Array* $tmp1897 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1897);
                $tmp1896 = $tmp1897;
                $tmp1895 = $tmp1896;
                result1894 = $tmp1895;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1895));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1896));
                $tmp1899 = &$s1900;
                currentPackage1898 = $tmp1899;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1899));
                panda$collections$HashMap* $tmp1904 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp1904);
                $tmp1903 = $tmp1904;
                $tmp1902 = $tmp1903;
                aliases1901 = $tmp1902;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1902));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1903));
                {
                    int $tmp1907;
                    {
                        ITable* $tmp1911 = ((panda$collections$Iterable*) entries1889)->$class->itable;
                        while ($tmp1911->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1911 = $tmp1911->next;
                        }
                        $fn1913 $tmp1912 = $tmp1911->methods[0];
                        panda$collections$Iterator* $tmp1914 = $tmp1912(((panda$collections$Iterable*) entries1889));
                        $tmp1910 = $tmp1914;
                        $tmp1909 = $tmp1910;
                        Iter$567$171908 = $tmp1909;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1909));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1910));
                        $l1915:;
                        ITable* $tmp1918 = Iter$567$171908->$class->itable;
                        while ($tmp1918->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1918 = $tmp1918->next;
                        }
                        $fn1920 $tmp1919 = $tmp1918->methods[0];
                        panda$core$Bit $tmp1921 = $tmp1919(Iter$567$171908);
                        panda$core$Bit $tmp1922 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1921);
                        bool $tmp1917 = $tmp1922.value;
                        if (!$tmp1917) goto $l1916;
                        {
                            int $tmp1925;
                            {
                                ITable* $tmp1929 = Iter$567$171908->$class->itable;
                                while ($tmp1929->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1929 = $tmp1929->next;
                                }
                                $fn1931 $tmp1930 = $tmp1929->methods[1];
                                panda$core$Object* $tmp1932 = $tmp1930(Iter$567$171908);
                                $tmp1928 = $tmp1932;
                                $tmp1927 = ((org$pandalanguage$pandac$ASTNode*) $tmp1928);
                                e1926 = $tmp1927;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1927));
                                panda$core$Panda$unref$panda$core$Object($tmp1928);
                                int $tmp1935;
                                {
                                    $tmp1937 = e1926;
                                    $match$568_211936 = $tmp1937;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1937));
                                    panda$core$Bit $tmp1938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568_211936->$rawValue, ((panda$core$Int64) { 27 }));
                                    if ($tmp1938.value) {
                                    {
                                        panda$core$String** $tmp1940 = ((panda$core$String**) ((char*) $match$568_211936->$data + 16));
                                        name1939 = *$tmp1940;
                                        {
                                            $tmp1941 = currentPackage1898;
                                            $tmp1942 = name1939;
                                            currentPackage1898 = $tmp1942;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1942));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1941));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568_211936->$rawValue, ((panda$core$Int64) { 38 }));
                                    if ($tmp1943.value) {
                                    {
                                        panda$core$String** $tmp1945 = ((panda$core$String**) ((char*) $match$568_211936->$data + 16));
                                        fullName1944 = *$tmp1945;
                                        int $tmp1948;
                                        {
                                            panda$core$String$Index$nullable $tmp1951 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName1944, &$s1950);
                                            idx1949 = $tmp1951;
                                            memset(&alias1952, 0, sizeof(alias1952));
                                            if (((panda$core$Bit) { idx1949.nonnull }).value) {
                                            {
                                                {
                                                    $tmp1953 = alias1952;
                                                    panda$core$String$Index $tmp1957 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName1944, ((panda$core$String$Index) idx1949.value));
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1956, ((panda$core$String$Index$nullable) { $tmp1957, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                                    panda$core$String* $tmp1958 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName1944, $tmp1956);
                                                    $tmp1955 = $tmp1958;
                                                    $tmp1954 = $tmp1955;
                                                    alias1952 = $tmp1954;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1954));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1955));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1953));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp1959 = alias1952;
                                                    $tmp1960 = fullName1944;
                                                    alias1952 = $tmp1960;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1960));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1959));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1901, ((panda$collections$Key*) alias1952), ((panda$core$Object*) fullName1944));
                                        }
                                        $tmp1948 = -1;
                                        goto $l1946;
                                        $l1946:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias1952));
                                        switch ($tmp1948) {
                                            case -1: goto $l1961;
                                        }
                                        $l1961:;
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568_211936->$rawValue, ((panda$core$Int64) { 9 }));
                                    if ($tmp1962.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp1964 = ((org$pandalanguage$pandac$Position*) ((char*) $match$568_211936->$data + 0));
                                        position1963 = *$tmp1964;
                                        org$pandalanguage$pandac$ASTNode** $tmp1966 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$568_211936->$data + 16));
                                        dc1965 = *$tmp1966;
                                        panda$collections$ImmutableArray** $tmp1968 = ((panda$collections$ImmutableArray**) ((char*) $match$568_211936->$data + 24));
                                        annotations1967 = *$tmp1968;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp1970 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$568_211936->$data + 32));
                                        kind1969 = *$tmp1970;
                                        panda$core$String** $tmp1972 = ((panda$core$String**) ((char*) $match$568_211936->$data + 40));
                                        name1971 = *$tmp1972;
                                        panda$collections$ImmutableArray** $tmp1974 = ((panda$collections$ImmutableArray**) ((char*) $match$568_211936->$data + 48));
                                        generics1973 = *$tmp1974;
                                        panda$collections$ImmutableArray** $tmp1976 = ((panda$collections$ImmutableArray**) ((char*) $match$568_211936->$data + 56));
                                        supertypes1975 = *$tmp1976;
                                        panda$collections$ImmutableArray** $tmp1978 = ((panda$collections$ImmutableArray**) ((char*) $match$568_211936->$data + 64));
                                        members1977 = *$tmp1978;
                                        int $tmp1981;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp1985 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1901), currentPackage1898, position1963, dc1965, annotations1967, kind1969, name1971, generics1973, supertypes1975, members1977);
                                            $tmp1984 = $tmp1985;
                                            $tmp1983 = $tmp1984;
                                            cl1982 = $tmp1983;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1983));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1984));
                                            if (((panda$core$Bit) { cl1982 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl1982, result1894);
                                            }
                                            }
                                        }
                                        $tmp1981 = -1;
                                        goto $l1979;
                                        $l1979:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1982));
                                        cl1982 = NULL;
                                        switch ($tmp1981) {
                                            case -1: goto $l1986;
                                        }
                                        $l1986:;
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
                                $tmp1935 = -1;
                                goto $l1933;
                                $l1933:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1937));
                                switch ($tmp1935) {
                                    case -1: goto $l1987;
                                }
                                $l1987:;
                            }
                            $tmp1925 = -1;
                            goto $l1923;
                            $l1923:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1926));
                            e1926 = NULL;
                            switch ($tmp1925) {
                                case -1: goto $l1988;
                            }
                            $l1988:;
                        }
                        goto $l1915;
                        $l1916:;
                    }
                    $tmp1907 = -1;
                    goto $l1905;
                    $l1905:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$567$171908));
                    Iter$567$171908 = NULL;
                    switch ($tmp1907) {
                        case -1: goto $l1989;
                    }
                    $l1989:;
                }
                $tmp1991 = ((panda$collections$ListView*) result1894);
                $finallyReturn1989 = $tmp1991;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1991));
                $tmp1893 = 0;
                goto $l1891;
                $l1992:;
                $tmp1885 = 0;
                goto $l1883;
                $l1993:;
                return $finallyReturn1989;
            }
            $l1891:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1894));
            result1894 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1898));
            currentPackage1898 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases1901));
            aliases1901 = NULL;
            switch ($tmp1893) {
                case 0: goto $l1992;
            }
            $l1995:;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp1885 = -1;
    goto $l1883;
    $l1883:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1887));
    switch ($tmp1885) {
        case 0: goto $l1993;
        case -1: goto $l1996;
    }
    $l1996:;
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp1999;
    {
    }
    $tmp1999 = -1;
    goto $l1997;
    $l1997:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1999) {
        case -1: goto $l2000;
    }
    $l2000:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
}

