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
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/ListView.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/Annotations/Expression.h"
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
#include "org/pandalanguage/pandac/Alias.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
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

typedef panda$collections$Iterator* (*$fn72)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn79)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn90)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn101)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn123)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn130)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn141)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn254)(panda$core$Weak*);
typedef panda$core$Object* (*$fn264)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn336)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn343)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn354)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn447)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn454)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn465)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn491)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn498)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn509)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn549)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn556)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn567)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn596)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn603)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn614)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn645)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn652)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn663)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn688)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn695)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn706)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn731)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn738)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn749)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn763)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn770)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn781)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn840)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn847)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn858)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn880)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn887)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn898)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn912)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn919)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn930)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn953)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn960)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn971)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn983)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1002)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1009)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1020)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1079)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1086)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1097)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1133)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1149)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1290)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1297)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1308)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1372)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1379)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1390)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1422)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn1428)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1437)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1448)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1455)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1466)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1477)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1480)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1515)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1522)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1533)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1550)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1555)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1571)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1578)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1589)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1601)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1677)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1684)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1695)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1709)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1725)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1732)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1743)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1777)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1784)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1795)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static panda$core$String $s1135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x6f\x6e\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x27", 30, -1250916154819313721, NULL };
static panda$core$String $s1155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x68\x61\x76\x65\x20\x61\x20\x62\x6f\x64\x79", 16, -7652461387112275530, NULL };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s1814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

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
    org$pandalanguage$pandac$Type* $returnValue16;
    org$pandalanguage$pandac$Type* $tmp17;
    org$pandalanguage$pandac$Type* $tmp18;
    org$pandalanguage$pandac$Type$Kind $tmp20;
    org$pandalanguage$pandac$Position position24;
    org$pandalanguage$pandac$ASTNode* base26 = NULL;
    panda$collections$Array* subtypes31 = NULL;
    panda$collections$Array* $tmp32;
    panda$collections$Array* $tmp33;
    org$pandalanguage$pandac$Type* $tmp35;
    org$pandalanguage$pandac$Type* $tmp37;
    org$pandalanguage$pandac$Type* $tmp38;
    panda$core$String* $tmp40;
    panda$core$Object* $tmp41;
    org$pandalanguage$pandac$Type$Kind $tmp45;
    org$pandalanguage$pandac$Position position51;
    panda$core$String* base53 = NULL;
    panda$collections$ImmutableArray* args55 = NULL;
    panda$collections$Array* finalArgs60 = NULL;
    panda$collections$Array* $tmp61;
    panda$collections$Array* $tmp62;
    panda$collections$Iterator* Iter$28$1767 = NULL;
    panda$collections$Iterator* $tmp68;
    panda$collections$Iterator* $tmp69;
    org$pandalanguage$pandac$ASTNode* arg85 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp86;
    panda$core$Object* $tmp87;
    org$pandalanguage$pandac$Type* $tmp92;
    org$pandalanguage$pandac$Type* $tmp96;
    org$pandalanguage$pandac$Type* $tmp97;
    org$pandalanguage$pandac$Type* $tmp98;
    org$pandalanguage$pandac$Type$Kind $tmp100;
    int $tmp8;
    {
        $tmp10 = p_type;
        $match$19_99 = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_99->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp11.value) {
        {
            org$pandalanguage$pandac$Position* $tmp13 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_99->$data + 0));
            position12 = *$tmp13;
            panda$core$String** $tmp15 = ((panda$core$String**) ((char*) $match$19_99->$data + 16));
            name14 = *$tmp15;
            org$pandalanguage$pandac$Type* $tmp19 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp20, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position($tmp19, name14, $tmp20, position12);
            $tmp18 = $tmp19;
            $tmp17 = $tmp18;
            $returnValue16 = $tmp17;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
            $tmp8 = 0;
            goto $l6;
            $l21:;
            return $returnValue16;
        }
        }
        else {
        panda$core$Bit $tmp23 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_99->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp23.value) {
        {
            org$pandalanguage$pandac$Position* $tmp25 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_99->$data + 0));
            position24 = *$tmp25;
            org$pandalanguage$pandac$ASTNode** $tmp27 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$19_99->$data + 16));
            base26 = *$tmp27;
            int $tmp30;
            {
                panda$collections$Array* $tmp34 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp34);
                $tmp33 = $tmp34;
                $tmp32 = $tmp33;
                subtypes31 = $tmp32;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp32));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
                org$pandalanguage$pandac$Type* $tmp36 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, base26);
                $tmp35 = $tmp36;
                panda$collections$Array$add$panda$collections$Array$T(subtypes31, ((panda$core$Object*) $tmp35));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
                org$pandalanguage$pandac$Type* $tmp39 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$Object* $tmp42 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes31, ((panda$core$Int64) { 0 }));
                $tmp41 = $tmp42;
                panda$core$String* $tmp44 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp41))->name, &$s43);
                $tmp40 = $tmp44;
                org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp45, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp39, $tmp40, $tmp45, position24, ((panda$collections$ListView*) subtypes31), ((panda$core$Bit) { false }));
                $tmp38 = $tmp39;
                $tmp37 = $tmp38;
                $returnValue16 = $tmp37;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
                panda$core$Panda$unref$panda$core$Object($tmp41);
                $tmp30 = 0;
                goto $l28;
                $l46:;
                $tmp8 = 1;
                goto $l6;
                $l47:;
                return $returnValue16;
            }
            $l28:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes31));
            subtypes31 = NULL;
            switch ($tmp30) {
                case 0: goto $l46;
            }
            $l49:;
        }
        }
        else {
        panda$core$Bit $tmp50 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_99->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp50.value) {
        {
            org$pandalanguage$pandac$Position* $tmp52 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_99->$data + 0));
            position51 = *$tmp52;
            panda$core$String** $tmp54 = ((panda$core$String**) ((char*) $match$19_99->$data + 16));
            base53 = *$tmp54;
            panda$collections$ImmutableArray** $tmp56 = ((panda$collections$ImmutableArray**) ((char*) $match$19_99->$data + 24));
            args55 = *$tmp56;
            int $tmp59;
            {
                panda$collections$Array* $tmp63 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp63);
                $tmp62 = $tmp63;
                $tmp61 = $tmp62;
                finalArgs60 = $tmp61;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp61));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp62));
                {
                    int $tmp66;
                    {
                        ITable* $tmp70 = ((panda$collections$Iterable*) args55)->$class->itable;
                        while ($tmp70->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp70 = $tmp70->next;
                        }
                        $fn72 $tmp71 = $tmp70->methods[0];
                        panda$collections$Iterator* $tmp73 = $tmp71(((panda$collections$Iterable*) args55));
                        $tmp69 = $tmp73;
                        $tmp68 = $tmp69;
                        Iter$28$1767 = $tmp68;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp68));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp69));
                        $l74:;
                        ITable* $tmp77 = Iter$28$1767->$class->itable;
                        while ($tmp77->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp77 = $tmp77->next;
                        }
                        $fn79 $tmp78 = $tmp77->methods[0];
                        panda$core$Bit $tmp80 = $tmp78(Iter$28$1767);
                        panda$core$Bit $tmp81 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp80);
                        bool $tmp76 = $tmp81.value;
                        if (!$tmp76) goto $l75;
                        {
                            int $tmp84;
                            {
                                ITable* $tmp88 = Iter$28$1767->$class->itable;
                                while ($tmp88->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp88 = $tmp88->next;
                                }
                                $fn90 $tmp89 = $tmp88->methods[1];
                                panda$core$Object* $tmp91 = $tmp89(Iter$28$1767);
                                $tmp87 = $tmp91;
                                $tmp86 = ((org$pandalanguage$pandac$ASTNode*) $tmp87);
                                arg85 = $tmp86;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
                                panda$core$Panda$unref$panda$core$Object($tmp87);
                                org$pandalanguage$pandac$Type* $tmp93 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, arg85);
                                $tmp92 = $tmp93;
                                panda$collections$Array$add$panda$collections$Array$T(finalArgs60, ((panda$core$Object*) $tmp92));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
                            }
                            $tmp84 = -1;
                            goto $l82;
                            $l82:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg85));
                            arg85 = NULL;
                            switch ($tmp84) {
                                case -1: goto $l94;
                            }
                            $l94:;
                        }
                        goto $l74;
                        $l75:;
                    }
                    $tmp66 = -1;
                    goto $l64;
                    $l64:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$28$1767));
                    Iter$28$1767 = NULL;
                    switch ($tmp66) {
                        case -1: goto $l95;
                    }
                    $l95:;
                }
                org$pandalanguage$pandac$Type* $tmp99 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp100, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Position $tmp102 = (($fn101) p_type->$class->vtable[2])(p_type);
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position($tmp99, base53, $tmp100, $tmp102);
                $tmp98 = $tmp99;
                org$pandalanguage$pandac$Type* $tmp103 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp98, ((panda$collections$ListView*) finalArgs60));
                $tmp97 = $tmp103;
                $tmp96 = $tmp97;
                $returnValue16 = $tmp96;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp96));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp97));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
                $tmp59 = 0;
                goto $l57;
                $l104:;
                $tmp8 = 2;
                goto $l6;
                $l105:;
                return $returnValue16;
            }
            $l57:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalArgs60));
            finalArgs60 = NULL;
            switch ($tmp59) {
                case 0: goto $l104;
            }
            $l107:;
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
        case 1: goto $l47;
        case -1: goto $l108;
        case 2: goto $l105;
        case 0: goto $l21;
    }
    $l108:;
}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, panda$collections$ImmutableArray* p_a) {
    panda$core$Int64 flags112;
    panda$collections$Array* expressions113 = NULL;
    panda$collections$Array* $tmp114;
    panda$collections$Iterator* Iter$40$9118 = NULL;
    panda$collections$Iterator* $tmp119;
    panda$collections$Iterator* $tmp120;
    org$pandalanguage$pandac$ASTNode* c136 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp137;
    panda$core$Object* $tmp138;
    org$pandalanguage$pandac$ASTNode* $match$41_13146 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp147;
    org$pandalanguage$pandac$Position position149;
    panda$core$String* text151 = NULL;
    org$pandalanguage$pandac$ASTNode* rawExpr153 = NULL;
    org$pandalanguage$pandac$ASTNode* expr158 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp159;
    panda$core$String* $match$44_21163 = NULL;
    panda$core$String* $tmp164;
    panda$collections$Array* $tmp215;
    panda$collections$Array* $tmp216;
    panda$collections$Array* $tmp217;
    org$pandalanguage$pandac$Annotations$Expression* $tmp219;
    org$pandalanguage$pandac$ASTNode* $tmp221;
    org$pandalanguage$pandac$ASTNode* $tmp222;
    panda$collections$Array* $tmp225;
    panda$collections$Array* $tmp226;
    panda$collections$Array* $tmp227;
    org$pandalanguage$pandac$Annotations$Expression* $tmp229;
    org$pandalanguage$pandac$ASTNode* $tmp231;
    org$pandalanguage$pandac$ASTNode* $tmp232;
    panda$collections$Array* $tmp235;
    panda$collections$Array* $tmp236;
    panda$collections$Array* $tmp237;
    org$pandalanguage$pandac$Annotations$Expression* $tmp239;
    org$pandalanguage$pandac$ASTNode* $tmp241;
    org$pandalanguage$pandac$ASTNode* $tmp242;
    panda$collections$Array* $tmp245;
    panda$collections$Array* $tmp246;
    panda$collections$Array* $tmp247;
    org$pandalanguage$pandac$Annotations$Expression* $tmp249;
    org$pandalanguage$pandac$ASTNode* $tmp251;
    org$pandalanguage$pandac$ASTNode* $tmp252;
    panda$core$Object* $tmp253;
    panda$core$String* $tmp256;
    panda$core$String* $tmp257;
    panda$core$Object* $tmp263;
    panda$core$String* $tmp266;
    panda$core$String* $tmp267;
    org$pandalanguage$pandac$Annotations* $returnValue276;
    org$pandalanguage$pandac$Annotations* $tmp277;
    org$pandalanguage$pandac$Annotations* $tmp278;
    int $tmp111;
    {
        flags112 = ((panda$core$Int64) { 0 });
        $tmp114 = NULL;
        expressions113 = $tmp114;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp114));
        {
            int $tmp117;
            {
                ITable* $tmp121 = ((panda$collections$Iterable*) p_a)->$class->itable;
                while ($tmp121->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp121 = $tmp121->next;
                }
                $fn123 $tmp122 = $tmp121->methods[0];
                panda$collections$Iterator* $tmp124 = $tmp122(((panda$collections$Iterable*) p_a));
                $tmp120 = $tmp124;
                $tmp119 = $tmp120;
                Iter$40$9118 = $tmp119;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp119));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp120));
                $l125:;
                ITable* $tmp128 = Iter$40$9118->$class->itable;
                while ($tmp128->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp128 = $tmp128->next;
                }
                $fn130 $tmp129 = $tmp128->methods[0];
                panda$core$Bit $tmp131 = $tmp129(Iter$40$9118);
                panda$core$Bit $tmp132 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp131);
                bool $tmp127 = $tmp132.value;
                if (!$tmp127) goto $l126;
                {
                    int $tmp135;
                    {
                        ITable* $tmp139 = Iter$40$9118->$class->itable;
                        while ($tmp139->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp139 = $tmp139->next;
                        }
                        $fn141 $tmp140 = $tmp139->methods[1];
                        panda$core$Object* $tmp142 = $tmp140(Iter$40$9118);
                        $tmp138 = $tmp142;
                        $tmp137 = ((org$pandalanguage$pandac$ASTNode*) $tmp138);
                        c136 = $tmp137;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp137));
                        panda$core$Panda$unref$panda$core$Object($tmp138);
                        int $tmp145;
                        {
                            $tmp147 = c136;
                            $match$41_13146 = $tmp147;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
                            panda$core$Bit $tmp148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$41_13146->$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp148.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp150 = ((org$pandalanguage$pandac$Position*) ((char*) $match$41_13146->$data + 0));
                                position149 = *$tmp150;
                                panda$core$String** $tmp152 = ((panda$core$String**) ((char*) $match$41_13146->$data + 16));
                                text151 = *$tmp152;
                                org$pandalanguage$pandac$ASTNode** $tmp154 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$41_13146->$data + 24));
                                rawExpr153 = *$tmp154;
                                int $tmp157;
                                {
                                    $tmp159 = rawExpr153;
                                    expr158 = $tmp159;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp159));
                                    int $tmp162;
                                    {
                                        $tmp164 = text151;
                                        $match$44_21163 = $tmp164;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp164));
                                        panda$core$Bit $tmp166 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21163, &$s165);
                                        if ($tmp166.value) {
                                        {
                                            panda$core$Int64 $tmp167 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                                            panda$core$Int64 $tmp168 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags112, $tmp167);
                                            flags112 = $tmp168;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp170 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21163, &$s169);
                                        if ($tmp170.value) {
                                        {
                                            panda$core$Int64 $tmp171 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                                            panda$core$Int64 $tmp172 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags112, $tmp171);
                                            flags112 = $tmp172;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp174 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21163, &$s173);
                                        if ($tmp174.value) {
                                        {
                                            panda$core$Int64 $tmp175 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                                            panda$core$Int64 $tmp176 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags112, $tmp175);
                                            flags112 = $tmp176;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp178 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21163, &$s177);
                                        if ($tmp178.value) {
                                        {
                                            panda$core$Int64 $tmp179 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                                            panda$core$Int64 $tmp180 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags112, $tmp179);
                                            flags112 = $tmp180;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp182 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21163, &$s181);
                                        if ($tmp182.value) {
                                        {
                                            panda$core$Int64 $tmp183 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                                            panda$core$Int64 $tmp184 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags112, $tmp183);
                                            flags112 = $tmp184;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp186 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21163, &$s185);
                                        if ($tmp186.value) {
                                        {
                                            panda$core$Int64 $tmp187 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                                            panda$core$Int64 $tmp188 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags112, $tmp187);
                                            flags112 = $tmp188;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp190 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21163, &$s189);
                                        if ($tmp190.value) {
                                        {
                                            panda$core$Int64 $tmp191 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                                            panda$core$Int64 $tmp192 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags112, $tmp191);
                                            flags112 = $tmp192;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp194 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21163, &$s193);
                                        if ($tmp194.value) {
                                        {
                                            panda$core$Int64 $tmp195 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                                            panda$core$Int64 $tmp196 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags112, $tmp195);
                                            flags112 = $tmp196;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp198 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21163, &$s197);
                                        if ($tmp198.value) {
                                        {
                                            panda$core$Int64 $tmp199 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                                            panda$core$Int64 $tmp200 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags112, $tmp199);
                                            flags112 = $tmp200;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp202 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21163, &$s201);
                                        if ($tmp202.value) {
                                        {
                                            panda$core$Int64 $tmp203 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                                            panda$core$Int64 $tmp204 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags112, $tmp203);
                                            flags112 = $tmp204;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp206 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21163, &$s205);
                                        if ($tmp206.value) {
                                        {
                                            panda$core$Int64 $tmp207 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                                            panda$core$Int64 $tmp208 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags112, $tmp207);
                                            flags112 = $tmp208;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp210 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21163, &$s209);
                                        if ($tmp210.value) {
                                        {
                                            panda$core$Int64 $tmp211 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 12 }));
                                            panda$core$Int64 $tmp212 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags112, $tmp211);
                                            flags112 = $tmp212;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp214 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21163, &$s213);
                                        if ($tmp214.value) {
                                        {
                                            if (((panda$core$Bit) { expressions113 == NULL }).value) {
                                            {
                                                {
                                                    $tmp215 = expressions113;
                                                    panda$collections$Array* $tmp218 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp218);
                                                    $tmp217 = $tmp218;
                                                    $tmp216 = $tmp217;
                                                    expressions113 = $tmp216;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp216));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp215));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp220 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp220, ((panda$core$Int64) { 0 }), expr158);
                                            $tmp219 = $tmp220;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions113, ((panda$core$Object*) $tmp219));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
                                            {
                                                $tmp221 = expr158;
                                                $tmp222 = NULL;
                                                expr158 = $tmp222;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp222));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp221));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp224 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21163, &$s223);
                                        if ($tmp224.value) {
                                        {
                                            if (((panda$core$Bit) { expressions113 == NULL }).value) {
                                            {
                                                {
                                                    $tmp225 = expressions113;
                                                    panda$collections$Array* $tmp228 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp228);
                                                    $tmp227 = $tmp228;
                                                    $tmp226 = $tmp227;
                                                    expressions113 = $tmp226;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp226));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp227));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp225));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp230 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp230, ((panda$core$Int64) { 1 }), expr158);
                                            $tmp229 = $tmp230;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions113, ((panda$core$Object*) $tmp229));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp229));
                                            {
                                                $tmp231 = expr158;
                                                $tmp232 = NULL;
                                                expr158 = $tmp232;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp232));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp231));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp234 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21163, &$s233);
                                        if ($tmp234.value) {
                                        {
                                            if (((panda$core$Bit) { expressions113 == NULL }).value) {
                                            {
                                                {
                                                    $tmp235 = expressions113;
                                                    panda$collections$Array* $tmp238 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp238);
                                                    $tmp237 = $tmp238;
                                                    $tmp236 = $tmp237;
                                                    expressions113 = $tmp236;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp236));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp237));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp235));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp240 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp240, ((panda$core$Int64) { 2 }), expr158);
                                            $tmp239 = $tmp240;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions113, ((panda$core$Object*) $tmp239));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
                                            {
                                                $tmp241 = expr158;
                                                $tmp242 = NULL;
                                                expr158 = $tmp242;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp242));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp241));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp244 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21163, &$s243);
                                        if ($tmp244.value) {
                                        {
                                            if (((panda$core$Bit) { expressions113 == NULL }).value) {
                                            {
                                                {
                                                    $tmp245 = expressions113;
                                                    panda$collections$Array* $tmp248 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp248);
                                                    $tmp247 = $tmp248;
                                                    $tmp246 = $tmp247;
                                                    expressions113 = $tmp246;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp246));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp245));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp250 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp250, ((panda$core$Int64) { 3 }), expr158);
                                            $tmp249 = $tmp250;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions113, ((panda$core$Object*) $tmp249));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
                                            {
                                                $tmp251 = expr158;
                                                $tmp252 = NULL;
                                                expr158 = $tmp252;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp252));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp251));
                                            }
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$Object* $tmp255 = (($fn254) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp253 = $tmp255;
                                            panda$core$String* $tmp259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s258, text151);
                                            $tmp257 = $tmp259;
                                            panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp257, &$s260);
                                            $tmp256 = $tmp261;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp253), position149, $tmp256);
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp256));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp257));
                                            panda$core$Panda$unref$panda$core$Object($tmp253);
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
                                    $tmp162 = -1;
                                    goto $l160;
                                    $l160:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
                                    switch ($tmp162) {
                                        case -1: goto $l262;
                                    }
                                    $l262:;
                                    if (((panda$core$Bit) { expr158 != NULL }).value) {
                                    {
                                        panda$core$Object* $tmp265 = (($fn264) self->compiler->$class->vtable[2])(self->compiler);
                                        $tmp263 = $tmp265;
                                        panda$core$String* $tmp269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s268, text151);
                                        $tmp267 = $tmp269;
                                        panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp267, &$s270);
                                        $tmp266 = $tmp271;
                                        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp263), position149, $tmp266);
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp267));
                                        panda$core$Panda$unref$panda$core$Object($tmp263);
                                    }
                                    }
                                }
                                $tmp157 = -1;
                                goto $l155;
                                $l155:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr158));
                                expr158 = NULL;
                                switch ($tmp157) {
                                    case -1: goto $l272;
                                }
                                $l272:;
                            }
                            }
                            else {
                            {
                                PANDA_ASSERT(((panda$core$Bit) { false }).value);
                            }
                            }
                        }
                        $tmp145 = -1;
                        goto $l143;
                        $l143:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp147));
                        switch ($tmp145) {
                            case -1: goto $l273;
                        }
                        $l273:;
                    }
                    $tmp135 = -1;
                    goto $l133;
                    $l133:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c136));
                    c136 = NULL;
                    switch ($tmp135) {
                        case -1: goto $l274;
                    }
                    $l274:;
                }
                goto $l125;
                $l126:;
            }
            $tmp117 = -1;
            goto $l115;
            $l115:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$40$9118));
            Iter$40$9118 = NULL;
            switch ($tmp117) {
                case -1: goto $l275;
            }
            $l275:;
        }
        org$pandalanguage$pandac$Annotations* $tmp279 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q($tmp279, flags112, ((panda$collections$ListView*) expressions113));
        $tmp278 = $tmp279;
        $tmp277 = $tmp278;
        $returnValue276 = $tmp277;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp277));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp278));
        $tmp111 = 0;
        goto $l109;
        $l280:;
        return $returnValue276;
    }
    $l109:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions113));
    switch ($tmp111) {
        case 0: goto $l280;
    }
    $l282:;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment286 = NULL;
    panda$core$String* $tmp287;
    panda$core$String* $tmp288;
    org$pandalanguage$pandac$ASTNode* $match$102_13292 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp293;
    org$pandalanguage$pandac$Position position295;
    panda$core$String* text297 = NULL;
    panda$core$String* $tmp299;
    panda$core$String* $tmp300;
    org$pandalanguage$pandac$Annotations* annotations302 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp303;
    org$pandalanguage$pandac$Annotations* $tmp304;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind306;
    org$pandalanguage$pandac$ASTNode* $match$111_9310 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp311;
    org$pandalanguage$pandac$Variable$Kind kind313;
    panda$collections$ImmutableArray* decls315 = NULL;
    org$pandalanguage$pandac$Variable$Kind $match$113_17317;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp319;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp321;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp323;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp327;
    panda$collections$Iterator* Iter$124$17331 = NULL;
    panda$collections$Iterator* $tmp332;
    panda$collections$Iterator* $tmp333;
    org$pandalanguage$pandac$ASTNode* decl349 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp350;
    panda$core$Object* $tmp351;
    org$pandalanguage$pandac$ASTNode* $match$125_21359 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp360;
    org$pandalanguage$pandac$Position declPosition362;
    org$pandalanguage$pandac$ASTNode* target364 = NULL;
    org$pandalanguage$pandac$ASTNode* value366 = NULL;
    panda$core$String* name371 = NULL;
    org$pandalanguage$pandac$Type* type372 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$129_29376 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp377;
    panda$core$String* id379 = NULL;
    panda$core$String* $tmp381;
    panda$core$String* $tmp382;
    org$pandalanguage$pandac$Type* $tmp383;
    org$pandalanguage$pandac$Type* $tmp384;
    org$pandalanguage$pandac$Type* $tmp385;
    panda$core$String* id388 = NULL;
    org$pandalanguage$pandac$ASTNode* idType390 = NULL;
    panda$core$String* $tmp392;
    panda$core$String* $tmp393;
    org$pandalanguage$pandac$Type* $tmp394;
    org$pandalanguage$pandac$Type* $tmp395;
    org$pandalanguage$pandac$Type* $tmp396;
    org$pandalanguage$pandac$FieldDecl* field399 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp400;
    org$pandalanguage$pandac$FieldDecl* $tmp401;
    int $tmp285;
    {
        memset(&doccomment286, 0, sizeof(doccomment286));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp287 = doccomment286;
                $tmp288 = NULL;
                doccomment286 = $tmp288;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp288));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp287));
            }
        }
        }
        else {
        {
            int $tmp291;
            {
                $tmp293 = p_rawDoccomment;
                $match$102_13292 = $tmp293;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp293));
                panda$core$Bit $tmp294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$102_13292->$rawValue, ((panda$core$Int64) { 36 }));
                if ($tmp294.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp296 = ((org$pandalanguage$pandac$Position*) ((char*) $match$102_13292->$data + 0));
                    position295 = *$tmp296;
                    panda$core$String** $tmp298 = ((panda$core$String**) ((char*) $match$102_13292->$data + 16));
                    text297 = *$tmp298;
                    {
                        $tmp299 = doccomment286;
                        $tmp300 = text297;
                        doccomment286 = $tmp300;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp300));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp291 = -1;
            goto $l289;
            $l289:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp293));
            switch ($tmp291) {
                case -1: goto $l301;
            }
            $l301:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp305 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp304 = $tmp305;
        $tmp303 = $tmp304;
        annotations302 = $tmp303;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp303));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp304));
        memset(&fieldKind306, 0, sizeof(fieldKind306));
        int $tmp309;
        {
            $tmp311 = p_varDecl;
            $match$111_9310 = $tmp311;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp311));
            panda$core$Bit $tmp312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$111_9310->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp312.value) {
            {
                org$pandalanguage$pandac$Variable$Kind* $tmp314 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$111_9310->$data + 16));
                kind313 = *$tmp314;
                panda$collections$ImmutableArray** $tmp316 = ((panda$collections$ImmutableArray**) ((char*) $match$111_9310->$data + 24));
                decls315 = *$tmp316;
                {
                    $match$113_17317 = kind313;
                    panda$core$Bit $tmp318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$113_17317.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp318.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp319, ((panda$core$Int64) { 0 }));
                        fieldKind306 = $tmp319;
                    }
                    }
                    else {
                    panda$core$Bit $tmp320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$113_17317.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp320.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp321, ((panda$core$Int64) { 1 }));
                        fieldKind306 = $tmp321;
                    }
                    }
                    else {
                    panda$core$Bit $tmp322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$113_17317.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp322.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp323, ((panda$core$Int64) { 2 }));
                        fieldKind306 = $tmp323;
                        panda$core$Int64 $tmp324 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                        panda$core$Int64 $tmp325 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations302->flags, $tmp324);
                        annotations302->flags = $tmp325;
                    }
                    }
                    else {
                    panda$core$Bit $tmp326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$113_17317.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp326.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp327, ((panda$core$Int64) { 3 }));
                        fieldKind306 = $tmp327;
                    }
                    }
                    }
                    }
                    }
                }
                {
                    int $tmp330;
                    {
                        ITable* $tmp334 = ((panda$collections$Iterable*) decls315)->$class->itable;
                        while ($tmp334->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp334 = $tmp334->next;
                        }
                        $fn336 $tmp335 = $tmp334->methods[0];
                        panda$collections$Iterator* $tmp337 = $tmp335(((panda$collections$Iterable*) decls315));
                        $tmp333 = $tmp337;
                        $tmp332 = $tmp333;
                        Iter$124$17331 = $tmp332;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp332));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp333));
                        $l338:;
                        ITable* $tmp341 = Iter$124$17331->$class->itable;
                        while ($tmp341->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp341 = $tmp341->next;
                        }
                        $fn343 $tmp342 = $tmp341->methods[0];
                        panda$core$Bit $tmp344 = $tmp342(Iter$124$17331);
                        panda$core$Bit $tmp345 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp344);
                        bool $tmp340 = $tmp345.value;
                        if (!$tmp340) goto $l339;
                        {
                            int $tmp348;
                            {
                                ITable* $tmp352 = Iter$124$17331->$class->itable;
                                while ($tmp352->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp352 = $tmp352->next;
                                }
                                $fn354 $tmp353 = $tmp352->methods[1];
                                panda$core$Object* $tmp355 = $tmp353(Iter$124$17331);
                                $tmp351 = $tmp355;
                                $tmp350 = ((org$pandalanguage$pandac$ASTNode*) $tmp351);
                                decl349 = $tmp350;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp350));
                                panda$core$Panda$unref$panda$core$Object($tmp351);
                                int $tmp358;
                                {
                                    $tmp360 = decl349;
                                    $match$125_21359 = $tmp360;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp360));
                                    panda$core$Bit $tmp361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_21359->$rawValue, ((panda$core$Int64) { 13 }));
                                    if ($tmp361.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp363 = ((org$pandalanguage$pandac$Position*) ((char*) $match$125_21359->$data + 0));
                                        declPosition362 = *$tmp363;
                                        org$pandalanguage$pandac$ASTNode** $tmp365 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_21359->$data + 16));
                                        target364 = *$tmp365;
                                        org$pandalanguage$pandac$ASTNode** $tmp367 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_21359->$data + 24));
                                        value366 = *$tmp367;
                                        int $tmp370;
                                        {
                                            memset(&name371, 0, sizeof(name371));
                                            memset(&type372, 0, sizeof(type372));
                                            int $tmp375;
                                            {
                                                $tmp377 = target364;
                                                $match$129_29376 = $tmp377;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp377));
                                                panda$core$Bit $tmp378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$129_29376->$rawValue, ((panda$core$Int64) { 20 }));
                                                if ($tmp378.value) {
                                                {
                                                    panda$core$String** $tmp380 = ((panda$core$String**) ((char*) $match$129_29376->$data + 16));
                                                    id379 = *$tmp380;
                                                    {
                                                        $tmp381 = name371;
                                                        $tmp382 = id379;
                                                        name371 = $tmp382;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp382));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
                                                    }
                                                    {
                                                        $tmp383 = type372;
                                                        org$pandalanguage$pandac$Type* $tmp386 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                        $tmp385 = $tmp386;
                                                        $tmp384 = $tmp385;
                                                        type372 = $tmp384;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp384));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp385));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp383));
                                                    }
                                                }
                                                }
                                                else {
                                                panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$129_29376->$rawValue, ((panda$core$Int64) { 39 }));
                                                if ($tmp387.value) {
                                                {
                                                    panda$core$String** $tmp389 = ((panda$core$String**) ((char*) $match$129_29376->$data + 16));
                                                    id388 = *$tmp389;
                                                    org$pandalanguage$pandac$ASTNode** $tmp391 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$129_29376->$data + 24));
                                                    idType390 = *$tmp391;
                                                    {
                                                        $tmp392 = name371;
                                                        $tmp393 = id388;
                                                        name371 = $tmp393;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp393));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp392));
                                                    }
                                                    {
                                                        $tmp394 = type372;
                                                        org$pandalanguage$pandac$Type* $tmp397 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType390);
                                                        $tmp396 = $tmp397;
                                                        $tmp395 = $tmp396;
                                                        type372 = $tmp395;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp395));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp394));
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
                                            $tmp375 = -1;
                                            goto $l373;
                                            $l373:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
                                            switch ($tmp375) {
                                                case -1: goto $l398;
                                            }
                                            $l398:;
                                            org$pandalanguage$pandac$FieldDecl* $tmp402 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp402, p_owner, declPosition362, doccomment286, annotations302, fieldKind306, name371, type372, value366);
                                            $tmp401 = $tmp402;
                                            $tmp400 = $tmp401;
                                            field399 = $tmp400;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp400));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp401));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field399));
                                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field399));
                                        }
                                        $tmp370 = -1;
                                        goto $l368;
                                        $l368:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name371));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type372));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field399));
                                        field399 = NULL;
                                        switch ($tmp370) {
                                            case -1: goto $l403;
                                        }
                                        $l403:;
                                    }
                                    }
                                    else {
                                    {
                                        PANDA_ASSERT(((panda$core$Bit) { false }).value);
                                    }
                                    }
                                }
                                $tmp358 = -1;
                                goto $l356;
                                $l356:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp360));
                                switch ($tmp358) {
                                    case -1: goto $l404;
                                }
                                $l404:;
                            }
                            $tmp348 = -1;
                            goto $l346;
                            $l346:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl349));
                            decl349 = NULL;
                            switch ($tmp348) {
                                case -1: goto $l405;
                            }
                            $l405:;
                        }
                        goto $l338;
                        $l339:;
                    }
                    $tmp330 = -1;
                    goto $l328;
                    $l328:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$124$17331));
                    Iter$124$17331 = NULL;
                    switch ($tmp330) {
                        case -1: goto $l406;
                    }
                    $l406:;
                }
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
        $tmp309 = -1;
        goto $l307;
        $l307:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp311));
        switch ($tmp309) {
            case -1: goto $l407;
        }
        $l407:;
    }
    $tmp285 = -1;
    goto $l283;
    $l283:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment286));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations302));
    annotations302 = NULL;
    switch ($tmp285) {
        case -1: goto $l408;
    }
    $l408:;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$154_9412 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp413;
    org$pandalanguage$pandac$ASTNode* test415 = NULL;
    panda$core$Int64 $returnValue417;
    org$pandalanguage$pandac$ASTNode* left422 = NULL;
    org$pandalanguage$pandac$ASTNode* right424 = NULL;
    panda$collections$ImmutableArray* statements436 = NULL;
    panda$core$Int64 result438;
    panda$collections$Iterator* Iter$163$17442 = NULL;
    panda$collections$Iterator* $tmp443;
    panda$collections$Iterator* $tmp444;
    org$pandalanguage$pandac$ASTNode* s460 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp461;
    panda$core$Object* $tmp462;
    org$pandalanguage$pandac$ASTNode* target477 = NULL;
    panda$collections$ImmutableArray* args479 = NULL;
    panda$core$Int64 result481;
    panda$collections$Iterator* Iter$171$17486 = NULL;
    panda$collections$Iterator* $tmp487;
    panda$collections$Iterator* $tmp488;
    org$pandalanguage$pandac$ASTNode* a504 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp505;
    panda$core$Object* $tmp506;
    org$pandalanguage$pandac$ASTNode* base518 = NULL;
    org$pandalanguage$pandac$ASTNode* value527 = NULL;
    panda$collections$ImmutableArray* statements535 = NULL;
    org$pandalanguage$pandac$ASTNode* test537 = NULL;
    panda$core$Int64 result539;
    panda$collections$Iterator* Iter$186$17544 = NULL;
    panda$collections$Iterator* $tmp545;
    panda$collections$Iterator* $tmp546;
    org$pandalanguage$pandac$ASTNode* s562 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp563;
    panda$core$Object* $tmp564;
    org$pandalanguage$pandac$ASTNode* base576 = NULL;
    org$pandalanguage$pandac$ASTNode* list582 = NULL;
    panda$collections$ImmutableArray* statements584 = NULL;
    panda$core$Int64 result586;
    panda$collections$Iterator* Iter$194$17591 = NULL;
    panda$collections$Iterator* $tmp592;
    panda$collections$Iterator* $tmp593;
    org$pandalanguage$pandac$ASTNode* s609 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp610;
    panda$core$Object* $tmp611;
    org$pandalanguage$pandac$ASTNode* test629 = NULL;
    panda$collections$ImmutableArray* ifTrue631 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse633 = NULL;
    panda$core$Int64 result635;
    panda$collections$Iterator* Iter$204$17640 = NULL;
    panda$collections$Iterator* $tmp641;
    panda$collections$Iterator* $tmp642;
    org$pandalanguage$pandac$ASTNode* s658 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp659;
    panda$core$Object* $tmp660;
    panda$collections$ImmutableArray* statements677 = NULL;
    panda$core$Int64 result679;
    panda$collections$Iterator* Iter$215$17683 = NULL;
    panda$collections$Iterator* $tmp684;
    panda$collections$Iterator* $tmp685;
    org$pandalanguage$pandac$ASTNode* s701 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp702;
    panda$core$Object* $tmp703;
    org$pandalanguage$pandac$ASTNode* value715 = NULL;
    panda$collections$ImmutableArray* whens717 = NULL;
    panda$collections$ImmutableArray* other719 = NULL;
    panda$core$Int64 result721;
    panda$collections$Iterator* Iter$221$17726 = NULL;
    panda$collections$Iterator* $tmp727;
    panda$collections$Iterator* $tmp728;
    org$pandalanguage$pandac$ASTNode* w744 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp745;
    panda$core$Object* $tmp746;
    panda$collections$Iterator* Iter$225$21758 = NULL;
    panda$collections$Iterator* $tmp759;
    panda$collections$Iterator* $tmp760;
    org$pandalanguage$pandac$ASTNode* s776 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp777;
    panda$core$Object* $tmp778;
    org$pandalanguage$pandac$ASTNode* base796 = NULL;
    org$pandalanguage$pandac$ASTNode* value809 = NULL;
    panda$collections$ImmutableArray* decls829 = NULL;
    panda$core$Int64 result831;
    panda$collections$Iterator* Iter$255$17835 = NULL;
    panda$collections$Iterator* $tmp836;
    panda$collections$Iterator* $tmp837;
    org$pandalanguage$pandac$ASTNode* decl853 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp854;
    panda$core$Object* $tmp855;
    panda$collections$ImmutableArray* tests867 = NULL;
    panda$collections$ImmutableArray* statements869 = NULL;
    panda$core$Int64 result871;
    panda$collections$Iterator* Iter$261$17875 = NULL;
    panda$collections$Iterator* $tmp876;
    panda$collections$Iterator* $tmp877;
    org$pandalanguage$pandac$ASTNode* test893 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp894;
    panda$core$Object* $tmp895;
    panda$collections$Iterator* Iter$264$17907 = NULL;
    panda$collections$Iterator* $tmp908;
    panda$collections$Iterator* $tmp909;
    org$pandalanguage$pandac$ASTNode* s925 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp926;
    panda$core$Object* $tmp927;
    org$pandalanguage$pandac$ASTNode* test939 = NULL;
    panda$collections$ImmutableArray* statements941 = NULL;
    panda$core$Int64 result943;
    panda$collections$Iterator* Iter$270$17948 = NULL;
    panda$collections$Iterator* $tmp949;
    panda$collections$Iterator* $tmp950;
    org$pandalanguage$pandac$ASTNode* s966 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp967;
    panda$core$Object* $tmp968;
    int $tmp411;
    {
        $tmp413 = p_node;
        $match$154_9412 = $tmp413;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp413));
        panda$core$Bit $tmp414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp414.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp416 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9412->$data + 16));
            test415 = *$tmp416;
            panda$core$Int64 $tmp418 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test415);
            $returnValue417 = $tmp418;
            $tmp411 = 0;
            goto $l409;
            $l419:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp421.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp423 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9412->$data + 16));
            left422 = *$tmp423;
            org$pandalanguage$pandac$ASTNode** $tmp425 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9412->$data + 32));
            right424 = *$tmp425;
            panda$core$Int64 $tmp426 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left422);
            panda$core$Int64 $tmp427 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp426);
            panda$core$Int64 $tmp428 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right424);
            panda$core$Int64 $tmp429 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp427, $tmp428);
            $returnValue417 = $tmp429;
            $tmp411 = 1;
            goto $l409;
            $l430:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp432.value) {
        {
            $returnValue417 = ((panda$core$Int64) { 1 });
            $tmp411 = 2;
            goto $l409;
            $l433:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp435.value) {
        {
            panda$collections$ImmutableArray** $tmp437 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9412->$data + 16));
            statements436 = *$tmp437;
            result438 = ((panda$core$Int64) { 0 });
            {
                int $tmp441;
                {
                    ITable* $tmp445 = ((panda$collections$Iterable*) statements436)->$class->itable;
                    while ($tmp445->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp445 = $tmp445->next;
                    }
                    $fn447 $tmp446 = $tmp445->methods[0];
                    panda$collections$Iterator* $tmp448 = $tmp446(((panda$collections$Iterable*) statements436));
                    $tmp444 = $tmp448;
                    $tmp443 = $tmp444;
                    Iter$163$17442 = $tmp443;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp443));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
                    $l449:;
                    ITable* $tmp452 = Iter$163$17442->$class->itable;
                    while ($tmp452->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp452 = $tmp452->next;
                    }
                    $fn454 $tmp453 = $tmp452->methods[0];
                    panda$core$Bit $tmp455 = $tmp453(Iter$163$17442);
                    panda$core$Bit $tmp456 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp455);
                    bool $tmp451 = $tmp456.value;
                    if (!$tmp451) goto $l450;
                    {
                        int $tmp459;
                        {
                            ITable* $tmp463 = Iter$163$17442->$class->itable;
                            while ($tmp463->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp463 = $tmp463->next;
                            }
                            $fn465 $tmp464 = $tmp463->methods[1];
                            panda$core$Object* $tmp466 = $tmp464(Iter$163$17442);
                            $tmp462 = $tmp466;
                            $tmp461 = ((org$pandalanguage$pandac$ASTNode*) $tmp462);
                            s460 = $tmp461;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp461));
                            panda$core$Panda$unref$panda$core$Object($tmp462);
                            panda$core$Int64 $tmp467 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s460);
                            panda$core$Int64 $tmp468 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result438, $tmp467);
                            result438 = $tmp468;
                        }
                        $tmp459 = -1;
                        goto $l457;
                        $l457:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s460));
                        s460 = NULL;
                        switch ($tmp459) {
                            case -1: goto $l469;
                        }
                        $l469:;
                    }
                    goto $l449;
                    $l450:;
                }
                $tmp441 = -1;
                goto $l439;
                $l439:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$163$17442));
                Iter$163$17442 = NULL;
                switch ($tmp441) {
                    case -1: goto $l470;
                }
                $l470:;
            }
            $returnValue417 = result438;
            $tmp411 = 3;
            goto $l409;
            $l471:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp473.value) {
        {
            $returnValue417 = ((panda$core$Int64) { 1 });
            $tmp411 = 4;
            goto $l409;
            $l474:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp476.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp478 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9412->$data + 16));
            target477 = *$tmp478;
            panda$collections$ImmutableArray** $tmp480 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9412->$data + 24));
            args479 = *$tmp480;
            panda$core$Int64 $tmp482 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target477);
            result481 = $tmp482;
            {
                int $tmp485;
                {
                    ITable* $tmp489 = ((panda$collections$Iterable*) args479)->$class->itable;
                    while ($tmp489->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp489 = $tmp489->next;
                    }
                    $fn491 $tmp490 = $tmp489->methods[0];
                    panda$collections$Iterator* $tmp492 = $tmp490(((panda$collections$Iterable*) args479));
                    $tmp488 = $tmp492;
                    $tmp487 = $tmp488;
                    Iter$171$17486 = $tmp487;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp487));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp488));
                    $l493:;
                    ITable* $tmp496 = Iter$171$17486->$class->itable;
                    while ($tmp496->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp496 = $tmp496->next;
                    }
                    $fn498 $tmp497 = $tmp496->methods[0];
                    panda$core$Bit $tmp499 = $tmp497(Iter$171$17486);
                    panda$core$Bit $tmp500 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp499);
                    bool $tmp495 = $tmp500.value;
                    if (!$tmp495) goto $l494;
                    {
                        int $tmp503;
                        {
                            ITable* $tmp507 = Iter$171$17486->$class->itable;
                            while ($tmp507->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp507 = $tmp507->next;
                            }
                            $fn509 $tmp508 = $tmp507->methods[1];
                            panda$core$Object* $tmp510 = $tmp508(Iter$171$17486);
                            $tmp506 = $tmp510;
                            $tmp505 = ((org$pandalanguage$pandac$ASTNode*) $tmp506);
                            a504 = $tmp505;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp505));
                            panda$core$Panda$unref$panda$core$Object($tmp506);
                            panda$core$Int64 $tmp511 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a504);
                            panda$core$Int64 $tmp512 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result481, $tmp511);
                            result481 = $tmp512;
                        }
                        $tmp503 = -1;
                        goto $l501;
                        $l501:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a504));
                        a504 = NULL;
                        switch ($tmp503) {
                            case -1: goto $l513;
                        }
                        $l513:;
                    }
                    goto $l493;
                    $l494:;
                }
                $tmp485 = -1;
                goto $l483;
                $l483:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$171$17486));
                Iter$171$17486 = NULL;
                switch ($tmp485) {
                    case -1: goto $l514;
                }
                $l514:;
            }
            $returnValue417 = result481;
            $tmp411 = 5;
            goto $l409;
            $l515:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp517.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp519 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9412->$data + 16));
            base518 = *$tmp519;
            panda$core$Int64 $tmp520 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base518);
            $returnValue417 = $tmp520;
            $tmp411 = 6;
            goto $l409;
            $l521:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp523.value) {
        {
            $returnValue417 = ((panda$core$Int64) { 1 });
            $tmp411 = 7;
            goto $l409;
            $l524:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp526.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp528 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9412->$data + 24));
            value527 = *$tmp528;
            if (((panda$core$Bit) { value527 == NULL }).value) {
            {
                $returnValue417 = ((panda$core$Int64) { 0 });
                $tmp411 = 8;
                goto $l409;
                $l529:;
                return $returnValue417;
            }
            }
            panda$core$Int64 $tmp531 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value527);
            $returnValue417 = $tmp531;
            $tmp411 = 9;
            goto $l409;
            $l532:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp534.value) {
        {
            panda$collections$ImmutableArray** $tmp536 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9412->$data + 24));
            statements535 = *$tmp536;
            org$pandalanguage$pandac$ASTNode** $tmp538 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9412->$data + 32));
            test537 = *$tmp538;
            panda$core$Int64 $tmp540 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test537);
            result539 = $tmp540;
            {
                int $tmp543;
                {
                    ITable* $tmp547 = ((panda$collections$Iterable*) statements535)->$class->itable;
                    while ($tmp547->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp547 = $tmp547->next;
                    }
                    $fn549 $tmp548 = $tmp547->methods[0];
                    panda$collections$Iterator* $tmp550 = $tmp548(((panda$collections$Iterable*) statements535));
                    $tmp546 = $tmp550;
                    $tmp545 = $tmp546;
                    Iter$186$17544 = $tmp545;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp545));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
                    $l551:;
                    ITable* $tmp554 = Iter$186$17544->$class->itable;
                    while ($tmp554->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp554 = $tmp554->next;
                    }
                    $fn556 $tmp555 = $tmp554->methods[0];
                    panda$core$Bit $tmp557 = $tmp555(Iter$186$17544);
                    panda$core$Bit $tmp558 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp557);
                    bool $tmp553 = $tmp558.value;
                    if (!$tmp553) goto $l552;
                    {
                        int $tmp561;
                        {
                            ITable* $tmp565 = Iter$186$17544->$class->itable;
                            while ($tmp565->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp565 = $tmp565->next;
                            }
                            $fn567 $tmp566 = $tmp565->methods[1];
                            panda$core$Object* $tmp568 = $tmp566(Iter$186$17544);
                            $tmp564 = $tmp568;
                            $tmp563 = ((org$pandalanguage$pandac$ASTNode*) $tmp564);
                            s562 = $tmp563;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp563));
                            panda$core$Panda$unref$panda$core$Object($tmp564);
                            panda$core$Int64 $tmp569 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s562);
                            panda$core$Int64 $tmp570 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result539, $tmp569);
                            result539 = $tmp570;
                        }
                        $tmp561 = -1;
                        goto $l559;
                        $l559:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s562));
                        s562 = NULL;
                        switch ($tmp561) {
                            case -1: goto $l571;
                        }
                        $l571:;
                    }
                    goto $l551;
                    $l552:;
                }
                $tmp543 = -1;
                goto $l541;
                $l541:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$186$17544));
                Iter$186$17544 = NULL;
                switch ($tmp543) {
                    case -1: goto $l572;
                }
                $l572:;
            }
            $returnValue417 = result539;
            $tmp411 = 10;
            goto $l409;
            $l573:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp575.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp577 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9412->$data + 16));
            base576 = *$tmp577;
            panda$core$Int64 $tmp578 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base576);
            $returnValue417 = $tmp578;
            $tmp411 = 11;
            goto $l409;
            $l579:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp581.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp583 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9412->$data + 32));
            list582 = *$tmp583;
            panda$collections$ImmutableArray** $tmp585 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9412->$data + 40));
            statements584 = *$tmp585;
            panda$core$Int64 $tmp587 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list582);
            result586 = $tmp587;
            {
                int $tmp590;
                {
                    ITable* $tmp594 = ((panda$collections$Iterable*) statements584)->$class->itable;
                    while ($tmp594->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp594 = $tmp594->next;
                    }
                    $fn596 $tmp595 = $tmp594->methods[0];
                    panda$collections$Iterator* $tmp597 = $tmp595(((panda$collections$Iterable*) statements584));
                    $tmp593 = $tmp597;
                    $tmp592 = $tmp593;
                    Iter$194$17591 = $tmp592;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp592));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp593));
                    $l598:;
                    ITable* $tmp601 = Iter$194$17591->$class->itable;
                    while ($tmp601->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp601 = $tmp601->next;
                    }
                    $fn603 $tmp602 = $tmp601->methods[0];
                    panda$core$Bit $tmp604 = $tmp602(Iter$194$17591);
                    panda$core$Bit $tmp605 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp604);
                    bool $tmp600 = $tmp605.value;
                    if (!$tmp600) goto $l599;
                    {
                        int $tmp608;
                        {
                            ITable* $tmp612 = Iter$194$17591->$class->itable;
                            while ($tmp612->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp612 = $tmp612->next;
                            }
                            $fn614 $tmp613 = $tmp612->methods[1];
                            panda$core$Object* $tmp615 = $tmp613(Iter$194$17591);
                            $tmp611 = $tmp615;
                            $tmp610 = ((org$pandalanguage$pandac$ASTNode*) $tmp611);
                            s609 = $tmp610;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp610));
                            panda$core$Panda$unref$panda$core$Object($tmp611);
                            panda$core$Int64 $tmp616 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s609);
                            panda$core$Int64 $tmp617 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result586, $tmp616);
                            result586 = $tmp617;
                        }
                        $tmp608 = -1;
                        goto $l606;
                        $l606:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s609));
                        s609 = NULL;
                        switch ($tmp608) {
                            case -1: goto $l618;
                        }
                        $l618:;
                    }
                    goto $l598;
                    $l599:;
                }
                $tmp590 = -1;
                goto $l588;
                $l588:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$194$17591));
                Iter$194$17591 = NULL;
                switch ($tmp590) {
                    case -1: goto $l619;
                }
                $l619:;
            }
            $returnValue417 = result586;
            $tmp411 = 12;
            goto $l409;
            $l620:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp622.value) {
        {
            $returnValue417 = ((panda$core$Int64) { 0 });
            $tmp411 = 13;
            goto $l409;
            $l623:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp625.value) {
        {
            $returnValue417 = ((panda$core$Int64) { 1 });
            $tmp411 = 14;
            goto $l409;
            $l626:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp628.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp630 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9412->$data + 16));
            test629 = *$tmp630;
            panda$collections$ImmutableArray** $tmp632 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9412->$data + 24));
            ifTrue631 = *$tmp632;
            org$pandalanguage$pandac$ASTNode** $tmp634 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9412->$data + 32));
            ifFalse633 = *$tmp634;
            panda$core$Int64 $tmp636 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test629);
            result635 = $tmp636;
            {
                int $tmp639;
                {
                    ITable* $tmp643 = ((panda$collections$Iterable*) ifTrue631)->$class->itable;
                    while ($tmp643->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp643 = $tmp643->next;
                    }
                    $fn645 $tmp644 = $tmp643->methods[0];
                    panda$collections$Iterator* $tmp646 = $tmp644(((panda$collections$Iterable*) ifTrue631));
                    $tmp642 = $tmp646;
                    $tmp641 = $tmp642;
                    Iter$204$17640 = $tmp641;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp641));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp642));
                    $l647:;
                    ITable* $tmp650 = Iter$204$17640->$class->itable;
                    while ($tmp650->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp650 = $tmp650->next;
                    }
                    $fn652 $tmp651 = $tmp650->methods[0];
                    panda$core$Bit $tmp653 = $tmp651(Iter$204$17640);
                    panda$core$Bit $tmp654 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp653);
                    bool $tmp649 = $tmp654.value;
                    if (!$tmp649) goto $l648;
                    {
                        int $tmp657;
                        {
                            ITable* $tmp661 = Iter$204$17640->$class->itable;
                            while ($tmp661->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp661 = $tmp661->next;
                            }
                            $fn663 $tmp662 = $tmp661->methods[1];
                            panda$core$Object* $tmp664 = $tmp662(Iter$204$17640);
                            $tmp660 = $tmp664;
                            $tmp659 = ((org$pandalanguage$pandac$ASTNode*) $tmp660);
                            s658 = $tmp659;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp659));
                            panda$core$Panda$unref$panda$core$Object($tmp660);
                            panda$core$Int64 $tmp665 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s658);
                            panda$core$Int64 $tmp666 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result635, $tmp665);
                            result635 = $tmp666;
                        }
                        $tmp657 = -1;
                        goto $l655;
                        $l655:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s658));
                        s658 = NULL;
                        switch ($tmp657) {
                            case -1: goto $l667;
                        }
                        $l667:;
                    }
                    goto $l647;
                    $l648:;
                }
                $tmp639 = -1;
                goto $l637;
                $l637:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$204$17640));
                Iter$204$17640 = NULL;
                switch ($tmp639) {
                    case -1: goto $l668;
                }
                $l668:;
            }
            if (((panda$core$Bit) { ifFalse633 != NULL }).value) {
            {
                panda$core$Int64 $tmp669 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse633);
                panda$core$Int64 $tmp670 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result635, $tmp669);
                result635 = $tmp670;
            }
            }
            $returnValue417 = result635;
            $tmp411 = 15;
            goto $l409;
            $l671:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp673.value) {
        {
            $returnValue417 = ((panda$core$Int64) { 1 });
            $tmp411 = 16;
            goto $l409;
            $l674:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp676.value) {
        {
            panda$collections$ImmutableArray** $tmp678 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9412->$data + 24));
            statements677 = *$tmp678;
            result679 = ((panda$core$Int64) { 0 });
            {
                int $tmp682;
                {
                    ITable* $tmp686 = ((panda$collections$Iterable*) statements677)->$class->itable;
                    while ($tmp686->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp686 = $tmp686->next;
                    }
                    $fn688 $tmp687 = $tmp686->methods[0];
                    panda$collections$Iterator* $tmp689 = $tmp687(((panda$collections$Iterable*) statements677));
                    $tmp685 = $tmp689;
                    $tmp684 = $tmp685;
                    Iter$215$17683 = $tmp684;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp684));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp685));
                    $l690:;
                    ITable* $tmp693 = Iter$215$17683->$class->itable;
                    while ($tmp693->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp693 = $tmp693->next;
                    }
                    $fn695 $tmp694 = $tmp693->methods[0];
                    panda$core$Bit $tmp696 = $tmp694(Iter$215$17683);
                    panda$core$Bit $tmp697 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp696);
                    bool $tmp692 = $tmp697.value;
                    if (!$tmp692) goto $l691;
                    {
                        int $tmp700;
                        {
                            ITable* $tmp704 = Iter$215$17683->$class->itable;
                            while ($tmp704->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp704 = $tmp704->next;
                            }
                            $fn706 $tmp705 = $tmp704->methods[1];
                            panda$core$Object* $tmp707 = $tmp705(Iter$215$17683);
                            $tmp703 = $tmp707;
                            $tmp702 = ((org$pandalanguage$pandac$ASTNode*) $tmp703);
                            s701 = $tmp702;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp702));
                            panda$core$Panda$unref$panda$core$Object($tmp703);
                            panda$core$Int64 $tmp708 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s701);
                            panda$core$Int64 $tmp709 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result679, $tmp708);
                            result679 = $tmp709;
                        }
                        $tmp700 = -1;
                        goto $l698;
                        $l698:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s701));
                        s701 = NULL;
                        switch ($tmp700) {
                            case -1: goto $l710;
                        }
                        $l710:;
                    }
                    goto $l690;
                    $l691:;
                }
                $tmp682 = -1;
                goto $l680;
                $l680:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$215$17683));
                Iter$215$17683 = NULL;
                switch ($tmp682) {
                    case -1: goto $l711;
                }
                $l711:;
            }
            $returnValue417 = result679;
            $tmp411 = 17;
            goto $l409;
            $l712:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp714 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp714.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp716 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9412->$data + 16));
            value715 = *$tmp716;
            panda$collections$ImmutableArray** $tmp718 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9412->$data + 24));
            whens717 = *$tmp718;
            panda$collections$ImmutableArray** $tmp720 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9412->$data + 32));
            other719 = *$tmp720;
            panda$core$Int64 $tmp722 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value715);
            result721 = $tmp722;
            {
                int $tmp725;
                {
                    ITable* $tmp729 = ((panda$collections$Iterable*) whens717)->$class->itable;
                    while ($tmp729->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp729 = $tmp729->next;
                    }
                    $fn731 $tmp730 = $tmp729->methods[0];
                    panda$collections$Iterator* $tmp732 = $tmp730(((panda$collections$Iterable*) whens717));
                    $tmp728 = $tmp732;
                    $tmp727 = $tmp728;
                    Iter$221$17726 = $tmp727;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp727));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp728));
                    $l733:;
                    ITable* $tmp736 = Iter$221$17726->$class->itable;
                    while ($tmp736->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp736 = $tmp736->next;
                    }
                    $fn738 $tmp737 = $tmp736->methods[0];
                    panda$core$Bit $tmp739 = $tmp737(Iter$221$17726);
                    panda$core$Bit $tmp740 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp739);
                    bool $tmp735 = $tmp740.value;
                    if (!$tmp735) goto $l734;
                    {
                        int $tmp743;
                        {
                            ITable* $tmp747 = Iter$221$17726->$class->itable;
                            while ($tmp747->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp747 = $tmp747->next;
                            }
                            $fn749 $tmp748 = $tmp747->methods[1];
                            panda$core$Object* $tmp750 = $tmp748(Iter$221$17726);
                            $tmp746 = $tmp750;
                            $tmp745 = ((org$pandalanguage$pandac$ASTNode*) $tmp746);
                            w744 = $tmp745;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp745));
                            panda$core$Panda$unref$panda$core$Object($tmp746);
                            panda$core$Int64 $tmp751 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w744);
                            panda$core$Int64 $tmp752 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result721, $tmp751);
                            result721 = $tmp752;
                        }
                        $tmp743 = -1;
                        goto $l741;
                        $l741:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w744));
                        w744 = NULL;
                        switch ($tmp743) {
                            case -1: goto $l753;
                        }
                        $l753:;
                    }
                    goto $l733;
                    $l734:;
                }
                $tmp725 = -1;
                goto $l723;
                $l723:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$221$17726));
                Iter$221$17726 = NULL;
                switch ($tmp725) {
                    case -1: goto $l754;
                }
                $l754:;
            }
            if (((panda$core$Bit) { other719 != NULL }).value) {
            {
                {
                    int $tmp757;
                    {
                        ITable* $tmp761 = ((panda$collections$Iterable*) other719)->$class->itable;
                        while ($tmp761->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp761 = $tmp761->next;
                        }
                        $fn763 $tmp762 = $tmp761->methods[0];
                        panda$collections$Iterator* $tmp764 = $tmp762(((panda$collections$Iterable*) other719));
                        $tmp760 = $tmp764;
                        $tmp759 = $tmp760;
                        Iter$225$21758 = $tmp759;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp759));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp760));
                        $l765:;
                        ITable* $tmp768 = Iter$225$21758->$class->itable;
                        while ($tmp768->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp768 = $tmp768->next;
                        }
                        $fn770 $tmp769 = $tmp768->methods[0];
                        panda$core$Bit $tmp771 = $tmp769(Iter$225$21758);
                        panda$core$Bit $tmp772 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp771);
                        bool $tmp767 = $tmp772.value;
                        if (!$tmp767) goto $l766;
                        {
                            int $tmp775;
                            {
                                ITable* $tmp779 = Iter$225$21758->$class->itable;
                                while ($tmp779->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp779 = $tmp779->next;
                                }
                                $fn781 $tmp780 = $tmp779->methods[1];
                                panda$core$Object* $tmp782 = $tmp780(Iter$225$21758);
                                $tmp778 = $tmp782;
                                $tmp777 = ((org$pandalanguage$pandac$ASTNode*) $tmp778);
                                s776 = $tmp777;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp777));
                                panda$core$Panda$unref$panda$core$Object($tmp778);
                                panda$core$Int64 $tmp783 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s776);
                                panda$core$Int64 $tmp784 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result721, $tmp783);
                                result721 = $tmp784;
                            }
                            $tmp775 = -1;
                            goto $l773;
                            $l773:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s776));
                            s776 = NULL;
                            switch ($tmp775) {
                                case -1: goto $l785;
                            }
                            $l785:;
                        }
                        goto $l765;
                        $l766:;
                    }
                    $tmp757 = -1;
                    goto $l755;
                    $l755:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$225$21758));
                    Iter$225$21758 = NULL;
                    switch ($tmp757) {
                        case -1: goto $l786;
                    }
                    $l786:;
                }
            }
            }
            $returnValue417 = result721;
            $tmp411 = 18;
            goto $l409;
            $l787:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp789.value) {
        {
            $returnValue417 = ((panda$core$Int64) { 1 });
            $tmp411 = 19;
            goto $l409;
            $l790:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp792.value) {
        {
            $returnValue417 = ((panda$core$Int64) { 0 });
            $tmp411 = 20;
            goto $l409;
            $l793:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp795.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp797 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9412->$data + 24));
            base796 = *$tmp797;
            panda$core$Int64 $tmp798 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base796);
            panda$core$Int64 $tmp799 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp798);
            $returnValue417 = $tmp799;
            $tmp411 = 21;
            goto $l409;
            $l800:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp802.value) {
        {
            $returnValue417 = ((panda$core$Int64) { 1 });
            $tmp411 = 22;
            goto $l409;
            $l803:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp805.value) {
        {
            $returnValue417 = ((panda$core$Int64) { 1 });
            $tmp411 = 23;
            goto $l409;
            $l806:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp808.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp810 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9412->$data + 16));
            value809 = *$tmp810;
            if (((panda$core$Bit) { value809 == NULL }).value) {
            {
                $returnValue417 = ((panda$core$Int64) { 0 });
                $tmp411 = 24;
                goto $l409;
                $l811:;
                return $returnValue417;
            }
            }
            panda$core$Int64 $tmp813 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value809);
            $returnValue417 = $tmp813;
            $tmp411 = 25;
            goto $l409;
            $l814:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp816.value) {
        {
            $returnValue417 = ((panda$core$Int64) { 1 });
            $tmp411 = 26;
            goto $l409;
            $l817:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp819.value) {
        {
            $returnValue417 = ((panda$core$Int64) { 1 });
            $tmp411 = 27;
            goto $l409;
            $l820:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp822.value) {
        {
            $returnValue417 = ((panda$core$Int64) { 1 });
            $tmp411 = 28;
            goto $l409;
            $l823:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp825.value) {
        {
            $returnValue417 = ((panda$core$Int64) { 0 });
            $tmp411 = 29;
            goto $l409;
            $l826:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp828.value) {
        {
            panda$collections$ImmutableArray** $tmp830 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9412->$data + 24));
            decls829 = *$tmp830;
            result831 = ((panda$core$Int64) { 0 });
            {
                int $tmp834;
                {
                    ITable* $tmp838 = ((panda$collections$Iterable*) decls829)->$class->itable;
                    while ($tmp838->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp838 = $tmp838->next;
                    }
                    $fn840 $tmp839 = $tmp838->methods[0];
                    panda$collections$Iterator* $tmp841 = $tmp839(((panda$collections$Iterable*) decls829));
                    $tmp837 = $tmp841;
                    $tmp836 = $tmp837;
                    Iter$255$17835 = $tmp836;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp836));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp837));
                    $l842:;
                    ITable* $tmp845 = Iter$255$17835->$class->itable;
                    while ($tmp845->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp845 = $tmp845->next;
                    }
                    $fn847 $tmp846 = $tmp845->methods[0];
                    panda$core$Bit $tmp848 = $tmp846(Iter$255$17835);
                    panda$core$Bit $tmp849 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp848);
                    bool $tmp844 = $tmp849.value;
                    if (!$tmp844) goto $l843;
                    {
                        int $tmp852;
                        {
                            ITable* $tmp856 = Iter$255$17835->$class->itable;
                            while ($tmp856->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp856 = $tmp856->next;
                            }
                            $fn858 $tmp857 = $tmp856->methods[1];
                            panda$core$Object* $tmp859 = $tmp857(Iter$255$17835);
                            $tmp855 = $tmp859;
                            $tmp854 = ((org$pandalanguage$pandac$ASTNode*) $tmp855);
                            decl853 = $tmp854;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp854));
                            panda$core$Panda$unref$panda$core$Object($tmp855);
                            panda$core$Int64 $tmp860 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl853);
                            panda$core$Int64 $tmp861 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result831, $tmp860);
                            result831 = $tmp861;
                        }
                        $tmp852 = -1;
                        goto $l850;
                        $l850:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl853));
                        decl853 = NULL;
                        switch ($tmp852) {
                            case -1: goto $l862;
                        }
                        $l862:;
                    }
                    goto $l842;
                    $l843:;
                }
                $tmp834 = -1;
                goto $l832;
                $l832:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$255$17835));
                Iter$255$17835 = NULL;
                switch ($tmp834) {
                    case -1: goto $l863;
                }
                $l863:;
            }
            $returnValue417 = result831;
            $tmp411 = 30;
            goto $l409;
            $l864:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp866.value) {
        {
            panda$collections$ImmutableArray** $tmp868 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9412->$data + 16));
            tests867 = *$tmp868;
            panda$collections$ImmutableArray** $tmp870 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9412->$data + 24));
            statements869 = *$tmp870;
            result871 = ((panda$core$Int64) { 0 });
            {
                int $tmp874;
                {
                    ITable* $tmp878 = ((panda$collections$Iterable*) tests867)->$class->itable;
                    while ($tmp878->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp878 = $tmp878->next;
                    }
                    $fn880 $tmp879 = $tmp878->methods[0];
                    panda$collections$Iterator* $tmp881 = $tmp879(((panda$collections$Iterable*) tests867));
                    $tmp877 = $tmp881;
                    $tmp876 = $tmp877;
                    Iter$261$17875 = $tmp876;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp876));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp877));
                    $l882:;
                    ITable* $tmp885 = Iter$261$17875->$class->itable;
                    while ($tmp885->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp885 = $tmp885->next;
                    }
                    $fn887 $tmp886 = $tmp885->methods[0];
                    panda$core$Bit $tmp888 = $tmp886(Iter$261$17875);
                    panda$core$Bit $tmp889 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp888);
                    bool $tmp884 = $tmp889.value;
                    if (!$tmp884) goto $l883;
                    {
                        int $tmp892;
                        {
                            ITable* $tmp896 = Iter$261$17875->$class->itable;
                            while ($tmp896->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp896 = $tmp896->next;
                            }
                            $fn898 $tmp897 = $tmp896->methods[1];
                            panda$core$Object* $tmp899 = $tmp897(Iter$261$17875);
                            $tmp895 = $tmp899;
                            $tmp894 = ((org$pandalanguage$pandac$ASTNode*) $tmp895);
                            test893 = $tmp894;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp894));
                            panda$core$Panda$unref$panda$core$Object($tmp895);
                            panda$core$Int64 $tmp900 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test893);
                            panda$core$Int64 $tmp901 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result871, $tmp900);
                            result871 = $tmp901;
                        }
                        $tmp892 = -1;
                        goto $l890;
                        $l890:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test893));
                        test893 = NULL;
                        switch ($tmp892) {
                            case -1: goto $l902;
                        }
                        $l902:;
                    }
                    goto $l882;
                    $l883:;
                }
                $tmp874 = -1;
                goto $l872;
                $l872:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$261$17875));
                Iter$261$17875 = NULL;
                switch ($tmp874) {
                    case -1: goto $l903;
                }
                $l903:;
            }
            {
                int $tmp906;
                {
                    ITable* $tmp910 = ((panda$collections$Iterable*) statements869)->$class->itable;
                    while ($tmp910->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp910 = $tmp910->next;
                    }
                    $fn912 $tmp911 = $tmp910->methods[0];
                    panda$collections$Iterator* $tmp913 = $tmp911(((panda$collections$Iterable*) statements869));
                    $tmp909 = $tmp913;
                    $tmp908 = $tmp909;
                    Iter$264$17907 = $tmp908;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp908));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp909));
                    $l914:;
                    ITable* $tmp917 = Iter$264$17907->$class->itable;
                    while ($tmp917->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp917 = $tmp917->next;
                    }
                    $fn919 $tmp918 = $tmp917->methods[0];
                    panda$core$Bit $tmp920 = $tmp918(Iter$264$17907);
                    panda$core$Bit $tmp921 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp920);
                    bool $tmp916 = $tmp921.value;
                    if (!$tmp916) goto $l915;
                    {
                        int $tmp924;
                        {
                            ITable* $tmp928 = Iter$264$17907->$class->itable;
                            while ($tmp928->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp928 = $tmp928->next;
                            }
                            $fn930 $tmp929 = $tmp928->methods[1];
                            panda$core$Object* $tmp931 = $tmp929(Iter$264$17907);
                            $tmp927 = $tmp931;
                            $tmp926 = ((org$pandalanguage$pandac$ASTNode*) $tmp927);
                            s925 = $tmp926;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp926));
                            panda$core$Panda$unref$panda$core$Object($tmp927);
                            panda$core$Int64 $tmp932 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s925);
                            panda$core$Int64 $tmp933 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result871, $tmp932);
                            result871 = $tmp933;
                        }
                        $tmp924 = -1;
                        goto $l922;
                        $l922:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s925));
                        s925 = NULL;
                        switch ($tmp924) {
                            case -1: goto $l934;
                        }
                        $l934:;
                    }
                    goto $l914;
                    $l915:;
                }
                $tmp906 = -1;
                goto $l904;
                $l904:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$264$17907));
                Iter$264$17907 = NULL;
                switch ($tmp906) {
                    case -1: goto $l935;
                }
                $l935:;
            }
            $returnValue417 = result871;
            $tmp411 = 31;
            goto $l409;
            $l936:;
            return $returnValue417;
        }
        }
        else {
        panda$core$Bit $tmp938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9412->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp938.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp940 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9412->$data + 24));
            test939 = *$tmp940;
            panda$collections$ImmutableArray** $tmp942 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9412->$data + 32));
            statements941 = *$tmp942;
            panda$core$Int64 $tmp944 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test939);
            result943 = $tmp944;
            {
                int $tmp947;
                {
                    ITable* $tmp951 = ((panda$collections$Iterable*) statements941)->$class->itable;
                    while ($tmp951->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp951 = $tmp951->next;
                    }
                    $fn953 $tmp952 = $tmp951->methods[0];
                    panda$collections$Iterator* $tmp954 = $tmp952(((panda$collections$Iterable*) statements941));
                    $tmp950 = $tmp954;
                    $tmp949 = $tmp950;
                    Iter$270$17948 = $tmp949;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp949));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp950));
                    $l955:;
                    ITable* $tmp958 = Iter$270$17948->$class->itable;
                    while ($tmp958->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp958 = $tmp958->next;
                    }
                    $fn960 $tmp959 = $tmp958->methods[0];
                    panda$core$Bit $tmp961 = $tmp959(Iter$270$17948);
                    panda$core$Bit $tmp962 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp961);
                    bool $tmp957 = $tmp962.value;
                    if (!$tmp957) goto $l956;
                    {
                        int $tmp965;
                        {
                            ITable* $tmp969 = Iter$270$17948->$class->itable;
                            while ($tmp969->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp969 = $tmp969->next;
                            }
                            $fn971 $tmp970 = $tmp969->methods[1];
                            panda$core$Object* $tmp972 = $tmp970(Iter$270$17948);
                            $tmp968 = $tmp972;
                            $tmp967 = ((org$pandalanguage$pandac$ASTNode*) $tmp968);
                            s966 = $tmp967;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp967));
                            panda$core$Panda$unref$panda$core$Object($tmp968);
                            panda$core$Int64 $tmp973 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s966);
                            panda$core$Int64 $tmp974 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result943, $tmp973);
                            result943 = $tmp974;
                        }
                        $tmp965 = -1;
                        goto $l963;
                        $l963:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s966));
                        s966 = NULL;
                        switch ($tmp965) {
                            case -1: goto $l975;
                        }
                        $l975:;
                    }
                    goto $l955;
                    $l956:;
                }
                $tmp947 = -1;
                goto $l945;
                $l945:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$270$17948));
                Iter$270$17948 = NULL;
                switch ($tmp947) {
                    case -1: goto $l976;
                }
                $l976:;
            }
            $returnValue417 = result943;
            $tmp411 = 32;
            goto $l409;
            $l977:;
            return $returnValue417;
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
    $tmp411 = -1;
    goto $l409;
    $l409:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp413));
    switch ($tmp411) {
        case 9: goto $l532;
        case 16: goto $l674;
        case 31: goto $l936;
        case 1: goto $l430;
        case 8: goto $l529;
        case 18: goto $l787;
        case 5: goto $l515;
        case 19: goto $l790;
        case 6: goto $l521;
        case -1: goto $l979;
        case 32: goto $l977;
        case 25: goto $l814;
        case 26: goto $l817;
        case 13: goto $l623;
        case 27: goto $l820;
        case 7: goto $l524;
        case 15: goto $l671;
        case 14: goto $l626;
        case 0: goto $l419;
        case 30: goto $l864;
        case 20: goto $l793;
        case 21: goto $l800;
        case 3: goto $l471;
        case 23: goto $l806;
        case 4: goto $l474;
        case 24: goto $l811;
        case 17: goto $l712;
        case 29: goto $l826;
        case 22: goto $l803;
        case 10: goto $l573;
        case 2: goto $l433;
        case 11: goto $l579;
        case 28: goto $l823;
        case 12: goto $l620;
    }
    $l979:;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Object* $tmp982;
    panda$core$Int64 c993;
    panda$collections$Iterator* Iter$283$13997 = NULL;
    panda$collections$Iterator* $tmp998;
    panda$collections$Iterator* $tmp999;
    org$pandalanguage$pandac$ASTNode* s1015 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1016;
    panda$core$Object* $tmp1017;
    panda$core$Bit $returnValue1025;
    panda$core$Object* $tmp984 = (($fn983) self->compiler->$class->vtable[2])(self->compiler);
    $tmp982 = $tmp984;
    panda$core$Bit $tmp985 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp982)->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp981 = $tmp985.value;
    panda$core$Panda$unref$panda$core$Object($tmp982);
    if (!$tmp981) goto $l986;
    panda$core$Bit $tmp987 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp988 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp987);
    $tmp981 = $tmp988.value;
    $l986:;
    panda$core$Bit $tmp989 = { $tmp981 };
    bool $tmp980 = $tmp989.value;
    if (!$tmp980) goto $l990;
    panda$core$Bit $tmp991 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp980 = $tmp991.value;
    $l990:;
    panda$core$Bit $tmp992 = { $tmp980 };
    if ($tmp992.value) {
    {
        c993 = ((panda$core$Int64) { 0 });
        {
            int $tmp996;
            {
                ITable* $tmp1000 = ((panda$collections$Iterable*) p_statements)->$class->itable;
                while ($tmp1000->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1000 = $tmp1000->next;
                }
                $fn1002 $tmp1001 = $tmp1000->methods[0];
                panda$collections$Iterator* $tmp1003 = $tmp1001(((panda$collections$Iterable*) p_statements));
                $tmp999 = $tmp1003;
                $tmp998 = $tmp999;
                Iter$283$13997 = $tmp998;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp998));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp999));
                $l1004:;
                ITable* $tmp1007 = Iter$283$13997->$class->itable;
                while ($tmp1007->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1007 = $tmp1007->next;
                }
                $fn1009 $tmp1008 = $tmp1007->methods[0];
                panda$core$Bit $tmp1010 = $tmp1008(Iter$283$13997);
                panda$core$Bit $tmp1011 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1010);
                bool $tmp1006 = $tmp1011.value;
                if (!$tmp1006) goto $l1005;
                {
                    int $tmp1014;
                    {
                        ITable* $tmp1018 = Iter$283$13997->$class->itable;
                        while ($tmp1018->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1018 = $tmp1018->next;
                        }
                        $fn1020 $tmp1019 = $tmp1018->methods[1];
                        panda$core$Object* $tmp1021 = $tmp1019(Iter$283$13997);
                        $tmp1017 = $tmp1021;
                        $tmp1016 = ((org$pandalanguage$pandac$ASTNode*) $tmp1017);
                        s1015 = $tmp1016;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1016));
                        panda$core$Panda$unref$panda$core$Object($tmp1017);
                        panda$core$Int64 $tmp1022 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1015);
                        panda$core$Int64 $tmp1023 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c993, $tmp1022);
                        c993 = $tmp1023;
                        panda$core$Bit $tmp1024 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c993, ((panda$core$Int64) { 10 }));
                        if ($tmp1024.value) {
                        {
                            $returnValue1025 = ((panda$core$Bit) { false });
                            $tmp1014 = 0;
                            goto $l1012;
                            $l1026:;
                            $tmp996 = 0;
                            goto $l994;
                            $l1027:;
                            return $returnValue1025;
                        }
                        }
                    }
                    $tmp1014 = -1;
                    goto $l1012;
                    $l1012:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1015));
                    s1015 = NULL;
                    switch ($tmp1014) {
                        case -1: goto $l1029;
                        case 0: goto $l1026;
                    }
                    $l1029:;
                }
                goto $l1004;
                $l1005:;
            }
            $tmp996 = -1;
            goto $l994;
            $l994:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$283$13997));
            Iter$283$13997 = NULL;
            switch ($tmp996) {
                case 0: goto $l1027;
                case -1: goto $l1030;
            }
            $l1030:;
        }
        $returnValue1025 = ((panda$core$Bit) { true });
        return $returnValue1025;
    }
    }
    $returnValue1025 = ((panda$core$Bit) { false });
    return $returnValue1025;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment1036 = NULL;
    panda$core$String* $tmp1037;
    panda$core$String* $tmp1038;
    org$pandalanguage$pandac$ASTNode* $match$304_131042 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1043;
    org$pandalanguage$pandac$Position position1045;
    panda$core$String* text1047 = NULL;
    panda$core$String* $tmp1049;
    panda$core$String* $tmp1050;
    org$pandalanguage$pandac$Annotations* annotations1052 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1053;
    org$pandalanguage$pandac$Annotations* $tmp1054;
    panda$collections$Array* parameters1067 = NULL;
    panda$collections$Array* $tmp1068;
    panda$collections$Array* $tmp1069;
    panda$collections$Iterator* Iter$316$91074 = NULL;
    panda$collections$Iterator* $tmp1075;
    panda$collections$Iterator* $tmp1076;
    org$pandalanguage$pandac$ASTNode* p1092 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1093;
    panda$core$Object* $tmp1094;
    org$pandalanguage$pandac$ASTNode* $match$317_131102 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1103;
    panda$core$String* name1105 = NULL;
    org$pandalanguage$pandac$ASTNode* type1107 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1109;
    org$pandalanguage$pandac$Type* $tmp1111;
    org$pandalanguage$pandac$Type* returnType1116 = NULL;
    org$pandalanguage$pandac$Type* $tmp1117;
    org$pandalanguage$pandac$Type* $tmp1118;
    org$pandalanguage$pandac$Type* $tmp1119;
    org$pandalanguage$pandac$Type* $tmp1121;
    org$pandalanguage$pandac$Type* $tmp1122;
    org$pandalanguage$pandac$Type* $tmp1123;
    org$pandalanguage$pandac$Type* $tmp1128;
    panda$core$Object* $tmp1132;
    panda$core$Object* $tmp1148;
    panda$core$String* $tmp1151;
    panda$core$String* $tmp1152;
    org$pandalanguage$pandac$MethodDecl* $returnValue1157;
    org$pandalanguage$pandac$MethodDecl* $tmp1158;
    org$pandalanguage$pandac$MethodDecl* $tmp1159;
    int $tmp1035;
    {
        memset(&doccomment1036, 0, sizeof(doccomment1036));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1037 = doccomment1036;
                $tmp1038 = NULL;
                doccomment1036 = $tmp1038;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1038));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1037));
            }
        }
        }
        else {
        {
            int $tmp1041;
            {
                $tmp1043 = p_rawDoccomment;
                $match$304_131042 = $tmp1043;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1043));
                panda$core$Bit $tmp1044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$304_131042->$rawValue, ((panda$core$Int64) { 36 }));
                if ($tmp1044.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1046 = ((org$pandalanguage$pandac$Position*) ((char*) $match$304_131042->$data + 0));
                    position1045 = *$tmp1046;
                    panda$core$String** $tmp1048 = ((panda$core$String**) ((char*) $match$304_131042->$data + 16));
                    text1047 = *$tmp1048;
                    {
                        $tmp1049 = doccomment1036;
                        $tmp1050 = text1047;
                        doccomment1036 = $tmp1050;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1050));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1049));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1041 = -1;
            goto $l1039;
            $l1039:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1043));
            switch ($tmp1041) {
                case -1: goto $l1051;
            }
            $l1051:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1055 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1054 = $tmp1055;
        $tmp1053 = $tmp1054;
        annotations1052 = $tmp1053;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1053));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1054));
        panda$core$Bit $tmp1058 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        bool $tmp1057 = $tmp1058.value;
        if (!$tmp1057) goto $l1059;
        panda$core$Bit $tmp1060 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
        $tmp1057 = $tmp1060.value;
        $l1059:;
        panda$core$Bit $tmp1061 = { $tmp1057 };
        bool $tmp1056 = $tmp1061.value;
        if ($tmp1056) goto $l1062;
        panda$core$Bit $tmp1063 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations1052);
        $tmp1056 = $tmp1063.value;
        $l1062:;
        panda$core$Bit $tmp1064 = { $tmp1056 };
        if ($tmp1064.value) {
        {
            panda$core$Int64 $tmp1065 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
            panda$core$Int64 $tmp1066 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1052->flags, $tmp1065);
            annotations1052->flags = $tmp1066;
        }
        }
        panda$collections$Array* $tmp1070 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1070);
        $tmp1069 = $tmp1070;
        $tmp1068 = $tmp1069;
        parameters1067 = $tmp1068;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1068));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1069));
        {
            int $tmp1073;
            {
                ITable* $tmp1077 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1077->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1077 = $tmp1077->next;
                }
                $fn1079 $tmp1078 = $tmp1077->methods[0];
                panda$collections$Iterator* $tmp1080 = $tmp1078(((panda$collections$Iterable*) p_rawParameters));
                $tmp1076 = $tmp1080;
                $tmp1075 = $tmp1076;
                Iter$316$91074 = $tmp1075;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1075));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1076));
                $l1081:;
                ITable* $tmp1084 = Iter$316$91074->$class->itable;
                while ($tmp1084->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1084 = $tmp1084->next;
                }
                $fn1086 $tmp1085 = $tmp1084->methods[0];
                panda$core$Bit $tmp1087 = $tmp1085(Iter$316$91074);
                panda$core$Bit $tmp1088 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1087);
                bool $tmp1083 = $tmp1088.value;
                if (!$tmp1083) goto $l1082;
                {
                    int $tmp1091;
                    {
                        ITable* $tmp1095 = Iter$316$91074->$class->itable;
                        while ($tmp1095->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1095 = $tmp1095->next;
                        }
                        $fn1097 $tmp1096 = $tmp1095->methods[1];
                        panda$core$Object* $tmp1098 = $tmp1096(Iter$316$91074);
                        $tmp1094 = $tmp1098;
                        $tmp1093 = ((org$pandalanguage$pandac$ASTNode*) $tmp1094);
                        p1092 = $tmp1093;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1093));
                        panda$core$Panda$unref$panda$core$Object($tmp1094);
                        int $tmp1101;
                        {
                            $tmp1103 = p1092;
                            $match$317_131102 = $tmp1103;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1103));
                            panda$core$Bit $tmp1104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$317_131102->$rawValue, ((panda$core$Int64) { 30 }));
                            if ($tmp1104.value) {
                            {
                                panda$core$String** $tmp1106 = ((panda$core$String**) ((char*) $match$317_131102->$data + 16));
                                name1105 = *$tmp1106;
                                org$pandalanguage$pandac$ASTNode** $tmp1108 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$317_131102->$data + 24));
                                type1107 = *$tmp1108;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1110 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1112 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1107);
                                $tmp1111 = $tmp1112;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1110, name1105, $tmp1111);
                                $tmp1109 = $tmp1110;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1067, ((panda$core$Object*) $tmp1109));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1109));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1111));
                            }
                            }
                            else {
                            {
                                PANDA_ASSERT(((panda$core$Bit) { false }).value);
                            }
                            }
                        }
                        $tmp1101 = -1;
                        goto $l1099;
                        $l1099:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1103));
                        switch ($tmp1101) {
                            case -1: goto $l1113;
                        }
                        $l1113:;
                    }
                    $tmp1091 = -1;
                    goto $l1089;
                    $l1089:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1092));
                    p1092 = NULL;
                    switch ($tmp1091) {
                        case -1: goto $l1114;
                    }
                    $l1114:;
                }
                goto $l1081;
                $l1082:;
            }
            $tmp1073 = -1;
            goto $l1071;
            $l1071:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$316$91074));
            Iter$316$91074 = NULL;
            switch ($tmp1073) {
                case -1: goto $l1115;
            }
            $l1115:;
        }
        memset(&returnType1116, 0, sizeof(returnType1116));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1117 = returnType1116;
                org$pandalanguage$pandac$Type* $tmp1120 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1119 = $tmp1120;
                $tmp1118 = $tmp1119;
                returnType1116 = $tmp1118;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1118));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1119));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1117));
            }
        }
        }
        else {
        {
            {
                $tmp1121 = returnType1116;
                org$pandalanguage$pandac$Type* $tmp1124 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1123 = $tmp1124;
                $tmp1122 = $tmp1123;
                returnType1116 = $tmp1122;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1122));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1123));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1121));
            }
        }
        }
        panda$core$Bit $tmp1126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
        bool $tmp1125 = $tmp1126.value;
        if (!$tmp1125) goto $l1127;
        org$pandalanguage$pandac$Type* $tmp1129 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1128 = $tmp1129;
        panda$core$Bit $tmp1130 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1116, $tmp1128);
        $tmp1125 = $tmp1130.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1128));
        $l1127:;
        panda$core$Bit $tmp1131 = { $tmp1125 };
        if ($tmp1131.value) {
        {
            panda$core$Object* $tmp1134 = (($fn1133) self->compiler->$class->vtable[2])(self->compiler);
            $tmp1132 = $tmp1134;
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1132), p_position, &$s1135);
            panda$core$Panda$unref$panda$core$Object($tmp1132);
        }
        }
        bool $tmp1136 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1136) goto $l1137;
        panda$core$Bit $tmp1138 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1052, p_statements);
        $tmp1136 = $tmp1138.value;
        $l1137:;
        panda$core$Bit $tmp1139 = { $tmp1136 };
        if ($tmp1139.value) {
        {
            panda$core$Int64 $tmp1140 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp1141 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1052->flags, $tmp1140);
            annotations1052->flags = $tmp1141;
        }
        }
        if (((panda$core$Bit) { p_statements == NULL }).value) {
        {
            panda$core$Bit $tmp1142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1142.value) {
            {
                panda$core$Int64 $tmp1143 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                panda$core$Int64 $tmp1144 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1052->flags, $tmp1143);
                annotations1052->flags = $tmp1144;
            }
            }
            else {
            panda$core$Int64 $tmp1145 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
            panda$core$Int64 $tmp1146 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1052->flags, $tmp1145);
            panda$core$Bit $tmp1147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1146, ((panda$core$Int64) { 0 }));
            if ($tmp1147.value) {
            {
                panda$core$Object* $tmp1150 = (($fn1149) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1148 = $tmp1150;
                panda$core$String* $tmp1154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1153, p_name);
                $tmp1152 = $tmp1154;
                panda$core$String* $tmp1156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1152, &$s1155);
                $tmp1151 = $tmp1156;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1148), p_position, $tmp1151);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1151));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1152));
                panda$core$Panda$unref$panda$core$Object($tmp1148);
            }
            }
            }
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1160 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1160, p_owner, p_position, doccomment1036, annotations1052, p_kind, p_name, parameters1067, returnType1116, p_statements);
        $tmp1159 = $tmp1160;
        $tmp1158 = $tmp1159;
        $returnValue1157 = $tmp1158;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1158));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1159));
        $tmp1035 = 0;
        goto $l1033;
        $l1161:;
        return $returnValue1157;
    }
    $l1033:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1036));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1052));
    annotations1052 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1067));
    parameters1067 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1116));
    switch ($tmp1035) {
        case 0: goto $l1161;
    }
    $l1163:;
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$350_91167 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1168;
    org$pandalanguage$pandac$Position position1170;
    org$pandalanguage$pandac$ASTNode* dc1172 = NULL;
    panda$collections$ImmutableArray* annotations1174 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1176 = NULL;
    org$pandalanguage$pandac$Position position1179;
    org$pandalanguage$pandac$ASTNode* dc1181 = NULL;
    panda$collections$ImmutableArray* annotations1183 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1185;
    panda$core$String* name1187 = NULL;
    panda$collections$ImmutableArray* parameters1189 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType1191 = NULL;
    panda$collections$ImmutableArray* statements1193 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1198 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1199;
    org$pandalanguage$pandac$MethodDecl* $tmp1200;
    org$pandalanguage$pandac$Position position1204;
    org$pandalanguage$pandac$ASTNode* dc1206 = NULL;
    panda$collections$ImmutableArray* annotations1208 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1210;
    panda$core$String* name1212 = NULL;
    panda$collections$ImmutableArray* generics1214 = NULL;
    panda$collections$ImmutableArray* supertypes1216 = NULL;
    panda$collections$ImmutableArray* members1218 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1223 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1224;
    org$pandalanguage$pandac$ClassDecl* $tmp1225;
    panda$core$Weak* $tmp1227;
    panda$core$Weak* $tmp1228;
    panda$core$Weak* $tmp1229;
    panda$core$String* $tmp1231;
    org$pandalanguage$pandac$Alias* $tmp1235;
    panda$core$String* $tmp1237;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1238;
    org$pandalanguage$pandac$Position $tmp1242;
    org$pandalanguage$pandac$Alias* $tmp1243;
    panda$core$String* $tmp1245;
    org$pandalanguage$pandac$Position $tmp1247;
    org$pandalanguage$pandac$Position position1250;
    org$pandalanguage$pandac$ASTNode* dc1252 = NULL;
    panda$core$String* name1254 = NULL;
    panda$collections$ImmutableArray* fields1256 = NULL;
    int $tmp1166;
    {
        $tmp1168 = p_node;
        $match$350_91167 = $tmp1168;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1168));
        panda$core$Bit $tmp1169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$350_91167->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1169.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1171 = ((org$pandalanguage$pandac$Position*) ((char*) $match$350_91167->$data + 0));
            position1170 = *$tmp1171;
            org$pandalanguage$pandac$ASTNode** $tmp1173 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$350_91167->$data + 16));
            dc1172 = *$tmp1173;
            panda$collections$ImmutableArray** $tmp1175 = ((panda$collections$ImmutableArray**) ((char*) $match$350_91167->$data + 24));
            annotations1174 = *$tmp1175;
            org$pandalanguage$pandac$ASTNode** $tmp1177 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$350_91167->$data + 32));
            varDecl1176 = *$tmp1177;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1170, dc1172, annotations1174, varDecl1176);
        }
        }
        else {
        panda$core$Bit $tmp1178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$350_91167->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1178.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1180 = ((org$pandalanguage$pandac$Position*) ((char*) $match$350_91167->$data + 0));
            position1179 = *$tmp1180;
            org$pandalanguage$pandac$ASTNode** $tmp1182 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$350_91167->$data + 16));
            dc1181 = *$tmp1182;
            panda$collections$ImmutableArray** $tmp1184 = ((panda$collections$ImmutableArray**) ((char*) $match$350_91167->$data + 24));
            annotations1183 = *$tmp1184;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1186 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$350_91167->$data + 32));
            kind1185 = *$tmp1186;
            panda$core$String** $tmp1188 = ((panda$core$String**) ((char*) $match$350_91167->$data + 40));
            name1187 = *$tmp1188;
            panda$collections$ImmutableArray** $tmp1190 = ((panda$collections$ImmutableArray**) ((char*) $match$350_91167->$data + 48));
            parameters1189 = *$tmp1190;
            org$pandalanguage$pandac$ASTNode** $tmp1192 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$350_91167->$data + 56));
            rawReturnType1191 = *$tmp1192;
            panda$collections$ImmutableArray** $tmp1194 = ((panda$collections$ImmutableArray**) ((char*) $match$350_91167->$data + 64));
            statements1193 = *$tmp1194;
            int $tmp1197;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1201 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1179, dc1181, annotations1183, kind1185, name1187, parameters1189, rawReturnType1191, statements1193);
                $tmp1200 = $tmp1201;
                $tmp1199 = $tmp1200;
                m1198 = $tmp1199;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1199));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1200));
                if (((panda$core$Bit) { m1198 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1198));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1198));
                }
                }
            }
            $tmp1197 = -1;
            goto $l1195;
            $l1195:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1198));
            m1198 = NULL;
            switch ($tmp1197) {
                case -1: goto $l1202;
            }
            $l1202:;
        }
        }
        else {
        panda$core$Bit $tmp1203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$350_91167->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1203.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1205 = ((org$pandalanguage$pandac$Position*) ((char*) $match$350_91167->$data + 0));
            position1204 = *$tmp1205;
            org$pandalanguage$pandac$ASTNode** $tmp1207 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$350_91167->$data + 16));
            dc1206 = *$tmp1207;
            panda$collections$ImmutableArray** $tmp1209 = ((panda$collections$ImmutableArray**) ((char*) $match$350_91167->$data + 24));
            annotations1208 = *$tmp1209;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1211 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$350_91167->$data + 32));
            kind1210 = *$tmp1211;
            panda$core$String** $tmp1213 = ((panda$core$String**) ((char*) $match$350_91167->$data + 40));
            name1212 = *$tmp1213;
            panda$collections$ImmutableArray** $tmp1215 = ((panda$collections$ImmutableArray**) ((char*) $match$350_91167->$data + 48));
            generics1214 = *$tmp1215;
            panda$collections$ImmutableArray** $tmp1217 = ((panda$collections$ImmutableArray**) ((char*) $match$350_91167->$data + 56));
            supertypes1216 = *$tmp1217;
            panda$collections$ImmutableArray** $tmp1219 = ((panda$collections$ImmutableArray**) ((char*) $match$350_91167->$data + 64));
            members1218 = *$tmp1219;
            int $tmp1222;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1226 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, p_cl->name, position1204, dc1206, annotations1208, kind1210, name1212, generics1214, supertypes1216, members1218);
                $tmp1225 = $tmp1226;
                $tmp1224 = $tmp1225;
                inner1223 = $tmp1224;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1224));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1225));
                if (((panda$core$Bit) { inner1223 != NULL }).value) {
                {
                    {
                        $tmp1227 = inner1223->owner;
                        panda$core$Weak* $tmp1230 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp1230, ((panda$core$Object*) p_cl));
                        $tmp1229 = $tmp1230;
                        $tmp1228 = $tmp1229;
                        inner1223->owner = $tmp1228;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1228));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1229));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1227));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1223));
                    panda$core$String* $tmp1233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_cl->name, &$s1232);
                    $tmp1231 = $tmp1233;
                    panda$core$Bit $tmp1234 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(inner1223->name, $tmp1231);
                    PANDA_ASSERT($tmp1234.value);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1231));
                    org$pandalanguage$pandac$Alias* $tmp1236 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$Int64 $tmp1239 = panda$core$String$length$R$panda$core$Int64(p_cl->name);
                    panda$core$Int64 $tmp1240 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1239, ((panda$core$Int64) { 1 }));
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1238, ((panda$core$Int64$nullable) { $tmp1240, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                    panda$core$String* $tmp1241 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(inner1223->name, $tmp1238);
                    $tmp1237 = $tmp1241;
                    org$pandalanguage$pandac$Position$init(&$tmp1242);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1236, $tmp1237, inner1223->name, $tmp1242);
                    $tmp1235 = $tmp1236;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1235));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1235));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1237));
                    org$pandalanguage$pandac$Alias* $tmp1244 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$String* $tmp1246 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1245 = $tmp1246;
                    org$pandalanguage$pandac$Position$init(&$tmp1247);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1244, $tmp1245, p_cl->name, $tmp1247);
                    $tmp1243 = $tmp1244;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(inner1223->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1243));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1243));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1245));
                }
                }
            }
            $tmp1222 = -1;
            goto $l1220;
            $l1220:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1223));
            inner1223 = NULL;
            switch ($tmp1222) {
                case -1: goto $l1248;
            }
            $l1248:;
        }
        }
        else {
        panda$core$Bit $tmp1249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$350_91167->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1249.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1251 = ((org$pandalanguage$pandac$Position*) ((char*) $match$350_91167->$data + 0));
            position1250 = *$tmp1251;
            org$pandalanguage$pandac$ASTNode** $tmp1253 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$350_91167->$data + 16));
            dc1252 = *$tmp1253;
            panda$core$String** $tmp1255 = ((panda$core$String**) ((char*) $match$350_91167->$data + 24));
            name1254 = *$tmp1255;
            panda$collections$ImmutableArray** $tmp1257 = ((panda$collections$ImmutableArray**) ((char*) $match$350_91167->$data + 32));
            fields1256 = *$tmp1257;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1250, dc1252, name1254, fields1256);
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
    $tmp1166 = -1;
    goto $l1164;
    $l1164:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1168));
    switch ($tmp1166) {
        case -1: goto $l1258;
    }
    $l1258:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1262 = NULL;
    panda$core$String* $tmp1263;
    panda$core$String* $tmp1264;
    org$pandalanguage$pandac$ASTNode* $match$388_131268 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1269;
    org$pandalanguage$pandac$Position position1271;
    panda$core$String* text1273 = NULL;
    panda$core$String* $tmp1275;
    panda$core$String* $tmp1276;
    panda$collections$Array* fields1278 = NULL;
    panda$collections$Array* $tmp1279;
    panda$collections$Array* $tmp1280;
    panda$collections$Iterator* Iter$396$91285 = NULL;
    panda$collections$Iterator* $tmp1286;
    panda$collections$Iterator* $tmp1287;
    org$pandalanguage$pandac$ASTNode* t1303 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1304;
    panda$core$Object* $tmp1305;
    org$pandalanguage$pandac$Type* $tmp1310;
    org$pandalanguage$pandac$ChoiceEntry* entry1314 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1315;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1316;
    int $tmp1261;
    {
        memset(&doccomment1262, 0, sizeof(doccomment1262));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1263 = doccomment1262;
                $tmp1264 = NULL;
                doccomment1262 = $tmp1264;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1264));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1263));
            }
        }
        }
        else {
        {
            int $tmp1267;
            {
                $tmp1269 = p_rawDoccomment;
                $match$388_131268 = $tmp1269;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1269));
                panda$core$Bit $tmp1270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$388_131268->$rawValue, ((panda$core$Int64) { 36 }));
                if ($tmp1270.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1272 = ((org$pandalanguage$pandac$Position*) ((char*) $match$388_131268->$data + 0));
                    position1271 = *$tmp1272;
                    panda$core$String** $tmp1274 = ((panda$core$String**) ((char*) $match$388_131268->$data + 16));
                    text1273 = *$tmp1274;
                    {
                        $tmp1275 = doccomment1262;
                        $tmp1276 = text1273;
                        doccomment1262 = $tmp1276;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1276));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1275));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1267 = -1;
            goto $l1265;
            $l1265:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1269));
            switch ($tmp1267) {
                case -1: goto $l1277;
            }
            $l1277:;
        }
        }
        panda$collections$Array* $tmp1281 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1281);
        $tmp1280 = $tmp1281;
        $tmp1279 = $tmp1280;
        fields1278 = $tmp1279;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1279));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1280));
        {
            int $tmp1284;
            {
                ITable* $tmp1288 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1288->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1288 = $tmp1288->next;
                }
                $fn1290 $tmp1289 = $tmp1288->methods[0];
                panda$collections$Iterator* $tmp1291 = $tmp1289(((panda$collections$Iterable*) p_rawFields));
                $tmp1287 = $tmp1291;
                $tmp1286 = $tmp1287;
                Iter$396$91285 = $tmp1286;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1286));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1287));
                $l1292:;
                ITable* $tmp1295 = Iter$396$91285->$class->itable;
                while ($tmp1295->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1295 = $tmp1295->next;
                }
                $fn1297 $tmp1296 = $tmp1295->methods[0];
                panda$core$Bit $tmp1298 = $tmp1296(Iter$396$91285);
                panda$core$Bit $tmp1299 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1298);
                bool $tmp1294 = $tmp1299.value;
                if (!$tmp1294) goto $l1293;
                {
                    int $tmp1302;
                    {
                        ITable* $tmp1306 = Iter$396$91285->$class->itable;
                        while ($tmp1306->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1306 = $tmp1306->next;
                        }
                        $fn1308 $tmp1307 = $tmp1306->methods[1];
                        panda$core$Object* $tmp1309 = $tmp1307(Iter$396$91285);
                        $tmp1305 = $tmp1309;
                        $tmp1304 = ((org$pandalanguage$pandac$ASTNode*) $tmp1305);
                        t1303 = $tmp1304;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1304));
                        panda$core$Panda$unref$panda$core$Object($tmp1305);
                        org$pandalanguage$pandac$Type* $tmp1311 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1303);
                        $tmp1310 = $tmp1311;
                        panda$collections$Array$add$panda$collections$Array$T(fields1278, ((panda$core$Object*) $tmp1310));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1310));
                    }
                    $tmp1302 = -1;
                    goto $l1300;
                    $l1300:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1303));
                    t1303 = NULL;
                    switch ($tmp1302) {
                        case -1: goto $l1312;
                    }
                    $l1312:;
                }
                goto $l1292;
                $l1293:;
            }
            $tmp1284 = -1;
            goto $l1282;
            $l1282:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$396$91285));
            Iter$396$91285 = NULL;
            switch ($tmp1284) {
                case -1: goto $l1313;
            }
            $l1313:;
        }
        org$pandalanguage$pandac$ChoiceEntry* $tmp1317 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(97, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
        panda$core$Int64 $tmp1318 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
        org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1317, p_cl, p_position, p_name, doccomment1262, $tmp1318, ((panda$collections$ListView*) fields1278));
        $tmp1316 = $tmp1317;
        $tmp1315 = $tmp1316;
        entry1314 = $tmp1315;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1315));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1316));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry1314));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1314));
    }
    $tmp1261 = -1;
    goto $l1259;
    $l1259:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1262));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1278));
    fields1278 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1314));
    entry1314 = NULL;
    switch ($tmp1261) {
        case -1: goto $l1319;
    }
    $l1319:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1323 = NULL;
    panda$core$String* $tmp1326;
    panda$core$String* $tmp1327;
    panda$core$String* $tmp1328;
    panda$core$String* $tmp1329;
    panda$core$String* $tmp1330;
    panda$core$String* $tmp1331;
    panda$core$String* $tmp1338;
    panda$core$String* $tmp1339;
    panda$core$String* doccomment1340 = NULL;
    panda$core$String* $tmp1341;
    panda$core$String* $tmp1342;
    org$pandalanguage$pandac$ASTNode* $match$422_131346 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1347;
    org$pandalanguage$pandac$Position position1349;
    panda$core$String* text1351 = NULL;
    panda$core$String* $tmp1353;
    panda$core$String* $tmp1354;
    org$pandalanguage$pandac$Annotations* annotations1356 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1357;
    org$pandalanguage$pandac$Annotations* $tmp1358;
    panda$collections$Array* parameters1360 = NULL;
    panda$collections$Array* $tmp1361;
    panda$collections$Array* $tmp1362;
    panda$collections$Iterator* Iter$432$131367 = NULL;
    panda$collections$Iterator* $tmp1368;
    panda$collections$Iterator* $tmp1369;
    org$pandalanguage$pandac$ASTNode* p1385 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1386;
    panda$core$Object* $tmp1387;
    panda$core$String* name1392 = NULL;
    org$pandalanguage$pandac$Type* bound1393 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$435_171397 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1398;
    panda$core$String* id1400 = NULL;
    panda$core$String* $tmp1402;
    panda$core$String* $tmp1403;
    org$pandalanguage$pandac$Type* $tmp1404;
    org$pandalanguage$pandac$Type* $tmp1405;
    org$pandalanguage$pandac$Type* $tmp1406;
    panda$core$String* id1409 = NULL;
    org$pandalanguage$pandac$ASTNode* type1411 = NULL;
    panda$core$String* $tmp1413;
    panda$core$String* $tmp1414;
    org$pandalanguage$pandac$Type* $tmp1415;
    org$pandalanguage$pandac$Type* $tmp1416;
    org$pandalanguage$pandac$Type* $tmp1417;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1420;
    panda$core$Object* $tmp1427;
    panda$collections$Array* supertypes1431 = NULL;
    panda$collections$Array* $tmp1432;
    panda$collections$Array* $tmp1433;
    panda$core$Object* $tmp1436;
    panda$collections$Iterator* Iter$456$131443 = NULL;
    panda$collections$Iterator* $tmp1444;
    panda$collections$Iterator* $tmp1445;
    org$pandalanguage$pandac$ASTNode* s1461 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1462;
    panda$core$Object* $tmp1463;
    org$pandalanguage$pandac$Type* $tmp1468;
    org$pandalanguage$pandac$ClassDecl* result1472 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1473;
    org$pandalanguage$pandac$ClassDecl* $tmp1474;
    panda$core$Object* $tmp1476;
    panda$core$Object* $tmp1479;
    org$pandalanguage$pandac$FieldDecl* rawValue1486 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1487;
    org$pandalanguage$pandac$FieldDecl* $tmp1488;
    org$pandalanguage$pandac$Annotations* $tmp1490;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1492;
    org$pandalanguage$pandac$Type* $tmp1494;
    org$pandalanguage$pandac$FieldDecl* data1496 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1497;
    org$pandalanguage$pandac$FieldDecl* $tmp1498;
    org$pandalanguage$pandac$Annotations* $tmp1500;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1502;
    org$pandalanguage$pandac$Type* $tmp1504;
    panda$collections$Iterator* Iter$473$91510 = NULL;
    panda$collections$Iterator* $tmp1511;
    panda$collections$Iterator* $tmp1512;
    org$pandalanguage$pandac$ASTNode* m1528 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1529;
    panda$core$Object* $tmp1530;
    org$pandalanguage$pandac$ASTNode* $match$474_131538 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1539;
    org$pandalanguage$pandac$Position mPosition1541;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1543;
    org$pandalanguage$pandac$ClassDecl$Kind $match$477_251546;
    panda$core$Object* $tmp1549;
    panda$core$Object* $tmp1554;
    panda$core$Bit foundInit1561;
    panda$core$Bit foundCleanup1562;
    panda$collections$Iterator* Iter$492$91566 = NULL;
    panda$collections$Iterator* $tmp1567;
    panda$collections$Iterator* $tmp1568;
    org$pandalanguage$pandac$MethodDecl* m1584 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1585;
    panda$core$Object* $tmp1586;
    panda$core$Object* $tmp1600;
    org$pandalanguage$pandac$MethodDecl* defaultInit1619 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1620;
    org$pandalanguage$pandac$MethodDecl* $tmp1621;
    org$pandalanguage$pandac$Annotations* $tmp1623;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1625;
    panda$collections$Array* $tmp1627;
    org$pandalanguage$pandac$Type* $tmp1629;
    panda$collections$ImmutableArray* $tmp1631;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1651 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1652;
    org$pandalanguage$pandac$MethodDecl* $tmp1653;
    org$pandalanguage$pandac$Annotations* $tmp1655;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1658;
    panda$collections$Array* $tmp1660;
    org$pandalanguage$pandac$Type* $tmp1662;
    panda$collections$ImmutableArray* $tmp1664;
    panda$core$Bit haveFields1668;
    panda$collections$Iterator* Iter$520$131672 = NULL;
    panda$collections$Iterator* $tmp1673;
    panda$collections$Iterator* $tmp1674;
    org$pandalanguage$pandac$ChoiceEntry* e1690 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1691;
    panda$core$Object* $tmp1692;
    org$pandalanguage$pandac$Type* $tmp1703;
    org$pandalanguage$pandac$Type* $tmp1704;
    org$pandalanguage$pandac$Type* $tmp1705;
    panda$core$Object* $tmp1707;
    panda$core$Object* $tmp1708;
    org$pandalanguage$pandac$ClassDecl* $returnValue1712;
    org$pandalanguage$pandac$ClassDecl* $tmp1713;
    int $tmp1322;
    {
        memset(&fullName1323, 0, sizeof(fullName1323));
        panda$core$Bit $tmp1325 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s1324);
        if ($tmp1325.value) {
        {
            {
                $tmp1326 = fullName1323;
                panda$core$String* $tmp1332 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1331 = $tmp1332;
                panda$core$String* $tmp1334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1331, &$s1333);
                $tmp1330 = $tmp1334;
                panda$core$String* $tmp1335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1330, p_name);
                $tmp1329 = $tmp1335;
                panda$core$String* $tmp1337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1329, &$s1336);
                $tmp1328 = $tmp1337;
                $tmp1327 = $tmp1328;
                fullName1323 = $tmp1327;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1327));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1328));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1329));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1330));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1331));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1326));
            }
        }
        }
        else {
        {
            {
                $tmp1338 = fullName1323;
                $tmp1339 = p_name;
                fullName1323 = $tmp1339;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1339));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1338));
            }
        }
        }
        memset(&doccomment1340, 0, sizeof(doccomment1340));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1341 = doccomment1340;
                $tmp1342 = NULL;
                doccomment1340 = $tmp1342;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1342));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1341));
            }
        }
        }
        else {
        {
            int $tmp1345;
            {
                $tmp1347 = p_rawDoccomment;
                $match$422_131346 = $tmp1347;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1347));
                panda$core$Bit $tmp1348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_131346->$rawValue, ((panda$core$Int64) { 36 }));
                if ($tmp1348.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1350 = ((org$pandalanguage$pandac$Position*) ((char*) $match$422_131346->$data + 0));
                    position1349 = *$tmp1350;
                    panda$core$String** $tmp1352 = ((panda$core$String**) ((char*) $match$422_131346->$data + 16));
                    text1351 = *$tmp1352;
                    {
                        $tmp1353 = doccomment1340;
                        $tmp1354 = text1351;
                        doccomment1340 = $tmp1354;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1354));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1353));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1345 = -1;
            goto $l1343;
            $l1343:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1347));
            switch ($tmp1345) {
                case -1: goto $l1355;
            }
            $l1355:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1359 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1358 = $tmp1359;
        $tmp1357 = $tmp1358;
        annotations1356 = $tmp1357;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1357));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1358));
        panda$collections$Array* $tmp1363 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1363);
        $tmp1362 = $tmp1363;
        $tmp1361 = $tmp1362;
        parameters1360 = $tmp1361;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1361));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1362));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1366;
                {
                    ITable* $tmp1370 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1370->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1370 = $tmp1370->next;
                    }
                    $fn1372 $tmp1371 = $tmp1370->methods[0];
                    panda$collections$Iterator* $tmp1373 = $tmp1371(((panda$collections$Iterable*) p_generics));
                    $tmp1369 = $tmp1373;
                    $tmp1368 = $tmp1369;
                    Iter$432$131367 = $tmp1368;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1368));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1369));
                    $l1374:;
                    ITable* $tmp1377 = Iter$432$131367->$class->itable;
                    while ($tmp1377->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1377 = $tmp1377->next;
                    }
                    $fn1379 $tmp1378 = $tmp1377->methods[0];
                    panda$core$Bit $tmp1380 = $tmp1378(Iter$432$131367);
                    panda$core$Bit $tmp1381 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1380);
                    bool $tmp1376 = $tmp1381.value;
                    if (!$tmp1376) goto $l1375;
                    {
                        int $tmp1384;
                        {
                            ITable* $tmp1388 = Iter$432$131367->$class->itable;
                            while ($tmp1388->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1388 = $tmp1388->next;
                            }
                            $fn1390 $tmp1389 = $tmp1388->methods[1];
                            panda$core$Object* $tmp1391 = $tmp1389(Iter$432$131367);
                            $tmp1387 = $tmp1391;
                            $tmp1386 = ((org$pandalanguage$pandac$ASTNode*) $tmp1387);
                            p1385 = $tmp1386;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1386));
                            panda$core$Panda$unref$panda$core$Object($tmp1387);
                            memset(&name1392, 0, sizeof(name1392));
                            memset(&bound1393, 0, sizeof(bound1393));
                            int $tmp1396;
                            {
                                $tmp1398 = p1385;
                                $match$435_171397 = $tmp1398;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1398));
                                panda$core$Bit $tmp1399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435_171397->$rawValue, ((panda$core$Int64) { 20 }));
                                if ($tmp1399.value) {
                                {
                                    panda$core$String** $tmp1401 = ((panda$core$String**) ((char*) $match$435_171397->$data + 16));
                                    id1400 = *$tmp1401;
                                    {
                                        $tmp1402 = name1392;
                                        $tmp1403 = id1400;
                                        name1392 = $tmp1403;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1403));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1402));
                                    }
                                    {
                                        $tmp1404 = bound1393;
                                        org$pandalanguage$pandac$Type* $tmp1407 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1406 = $tmp1407;
                                        $tmp1405 = $tmp1406;
                                        bound1393 = $tmp1405;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1405));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1406));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1404));
                                    }
                                }
                                }
                                else {
                                panda$core$Bit $tmp1408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435_171397->$rawValue, ((panda$core$Int64) { 39 }));
                                if ($tmp1408.value) {
                                {
                                    panda$core$String** $tmp1410 = ((panda$core$String**) ((char*) $match$435_171397->$data + 16));
                                    id1409 = *$tmp1410;
                                    org$pandalanguage$pandac$ASTNode** $tmp1412 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$435_171397->$data + 24));
                                    type1411 = *$tmp1412;
                                    {
                                        $tmp1413 = name1392;
                                        $tmp1414 = id1409;
                                        name1392 = $tmp1414;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1414));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1413));
                                    }
                                    {
                                        $tmp1415 = bound1393;
                                        org$pandalanguage$pandac$Type* $tmp1418 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1411);
                                        $tmp1417 = $tmp1418;
                                        $tmp1416 = $tmp1417;
                                        bound1393 = $tmp1416;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1416));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1417));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1415));
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
                            $tmp1396 = -1;
                            goto $l1394;
                            $l1394:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1398));
                            switch ($tmp1396) {
                                case -1: goto $l1419;
                            }
                            $l1419:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1421 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1423 = (($fn1422) p1385->$class->vtable[2])(p1385);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1421, $tmp1423, fullName1323, name1392, bound1393);
                            $tmp1420 = $tmp1421;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1360, ((panda$core$Object*) $tmp1420));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1420));
                        }
                        $tmp1384 = -1;
                        goto $l1382;
                        $l1382:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1385));
                        p1385 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1392));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1393));
                        switch ($tmp1384) {
                            case -1: goto $l1424;
                        }
                        $l1424:;
                    }
                    goto $l1374;
                    $l1375:;
                }
                $tmp1366 = -1;
                goto $l1364;
                $l1364:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$432$131367));
                Iter$432$131367 = NULL;
                switch ($tmp1366) {
                    case -1: goto $l1425;
                }
                $l1425:;
            }
            panda$core$Bit $tmp1426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1426.value) {
            {
                panda$core$Object* $tmp1429 = (($fn1428) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1427 = $tmp1429;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1427), p_position, &$s1430);
                panda$core$Panda$unref$panda$core$Object($tmp1427);
            }
            }
        }
        }
        panda$collections$Array* $tmp1434 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1434);
        $tmp1433 = $tmp1434;
        $tmp1432 = $tmp1433;
        supertypes1431 = $tmp1432;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1432));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1433));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Bit $tmp1435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1435.value) {
            {
                panda$core$Object* $tmp1438 = (($fn1437) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1436 = $tmp1438;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1436), p_position, &$s1439);
                panda$core$Panda$unref$panda$core$Object($tmp1436);
            }
            }
            {
                int $tmp1442;
                {
                    ITable* $tmp1446 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1446->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1446 = $tmp1446->next;
                    }
                    $fn1448 $tmp1447 = $tmp1446->methods[0];
                    panda$collections$Iterator* $tmp1449 = $tmp1447(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1445 = $tmp1449;
                    $tmp1444 = $tmp1445;
                    Iter$456$131443 = $tmp1444;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1444));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1445));
                    $l1450:;
                    ITable* $tmp1453 = Iter$456$131443->$class->itable;
                    while ($tmp1453->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1453 = $tmp1453->next;
                    }
                    $fn1455 $tmp1454 = $tmp1453->methods[0];
                    panda$core$Bit $tmp1456 = $tmp1454(Iter$456$131443);
                    panda$core$Bit $tmp1457 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1456);
                    bool $tmp1452 = $tmp1457.value;
                    if (!$tmp1452) goto $l1451;
                    {
                        int $tmp1460;
                        {
                            ITable* $tmp1464 = Iter$456$131443->$class->itable;
                            while ($tmp1464->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1464 = $tmp1464->next;
                            }
                            $fn1466 $tmp1465 = $tmp1464->methods[1];
                            panda$core$Object* $tmp1467 = $tmp1465(Iter$456$131443);
                            $tmp1463 = $tmp1467;
                            $tmp1462 = ((org$pandalanguage$pandac$ASTNode*) $tmp1463);
                            s1461 = $tmp1462;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1462));
                            panda$core$Panda$unref$panda$core$Object($tmp1463);
                            org$pandalanguage$pandac$Type* $tmp1469 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1461);
                            $tmp1468 = $tmp1469;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1431, ((panda$core$Object*) $tmp1468));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1468));
                        }
                        $tmp1460 = -1;
                        goto $l1458;
                        $l1458:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1461));
                        s1461 = NULL;
                        switch ($tmp1460) {
                            case -1: goto $l1470;
                        }
                        $l1470:;
                    }
                    goto $l1450;
                    $l1451:;
                }
                $tmp1442 = -1;
                goto $l1440;
                $l1440:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$456$131443));
                Iter$456$131443 = NULL;
                switch ($tmp1442) {
                    case -1: goto $l1471;
                }
                $l1471:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1475 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1478 = (($fn1477) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1476 = $tmp1478;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1475, p_source, p_position, p_aliases, doccomment1340, annotations1356, p_kind, fullName1323, ((panda$collections$ListView*) supertypes1431), parameters1360, ((org$pandalanguage$pandac$Compiler*) $tmp1476)->root);
        $tmp1474 = $tmp1475;
        $tmp1473 = $tmp1474;
        result1472 = $tmp1473;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1473));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1474));
        panda$core$Panda$unref$panda$core$Object($tmp1476);
        panda$core$Object* $tmp1481 = (($fn1480) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1479 = $tmp1481;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1479)->currentClass, ((panda$core$Object*) result1472));
        panda$core$Panda$unref$panda$core$Object($tmp1479);
        panda$core$Bit $tmp1482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1482.value) {
        {
            int $tmp1485;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1489 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1491 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1491);
                $tmp1490 = $tmp1491;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1492, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1495 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1494 = $tmp1495;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1489, result1472, result1472->position, NULL, $tmp1490, $tmp1492, &$s1493, $tmp1494, NULL);
                $tmp1488 = $tmp1489;
                $tmp1487 = $tmp1488;
                rawValue1486 = $tmp1487;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1487));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1488));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1494));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1490));
                panda$collections$Array$add$panda$collections$Array$T(result1472->fields, ((panda$core$Object*) rawValue1486));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1472->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1486));
                org$pandalanguage$pandac$FieldDecl* $tmp1499 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1501 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1501);
                $tmp1500 = $tmp1501;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1502, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1505 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1504 = $tmp1505;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1499, result1472, result1472->position, NULL, $tmp1500, $tmp1502, &$s1503, $tmp1504, NULL);
                $tmp1498 = $tmp1499;
                $tmp1497 = $tmp1498;
                data1496 = $tmp1497;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1497));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1498));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1504));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1500));
                panda$collections$Array$add$panda$collections$Array$T(result1472->fields, ((panda$core$Object*) data1496));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1472->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1496));
            }
            $tmp1485 = -1;
            goto $l1483;
            $l1483:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1486));
            rawValue1486 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1496));
            data1496 = NULL;
            switch ($tmp1485) {
                case -1: goto $l1506;
            }
            $l1506:;
        }
        }
        {
            int $tmp1509;
            {
                ITable* $tmp1513 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1513->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1513 = $tmp1513->next;
                }
                $fn1515 $tmp1514 = $tmp1513->methods[0];
                panda$collections$Iterator* $tmp1516 = $tmp1514(((panda$collections$Iterable*) p_members));
                $tmp1512 = $tmp1516;
                $tmp1511 = $tmp1512;
                Iter$473$91510 = $tmp1511;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1511));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1512));
                $l1517:;
                ITable* $tmp1520 = Iter$473$91510->$class->itable;
                while ($tmp1520->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1520 = $tmp1520->next;
                }
                $fn1522 $tmp1521 = $tmp1520->methods[0];
                panda$core$Bit $tmp1523 = $tmp1521(Iter$473$91510);
                panda$core$Bit $tmp1524 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1523);
                bool $tmp1519 = $tmp1524.value;
                if (!$tmp1519) goto $l1518;
                {
                    int $tmp1527;
                    {
                        ITable* $tmp1531 = Iter$473$91510->$class->itable;
                        while ($tmp1531->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1531 = $tmp1531->next;
                        }
                        $fn1533 $tmp1532 = $tmp1531->methods[1];
                        panda$core$Object* $tmp1534 = $tmp1532(Iter$473$91510);
                        $tmp1530 = $tmp1534;
                        $tmp1529 = ((org$pandalanguage$pandac$ASTNode*) $tmp1530);
                        m1528 = $tmp1529;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1529));
                        panda$core$Panda$unref$panda$core$Object($tmp1530);
                        int $tmp1537;
                        {
                            $tmp1539 = m1528;
                            $match$474_131538 = $tmp1539;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1539));
                            panda$core$Bit $tmp1540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$474_131538->$rawValue, ((panda$core$Int64) { 26 }));
                            if ($tmp1540.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp1542 = ((org$pandalanguage$pandac$Position*) ((char*) $match$474_131538->$data + 0));
                                mPosition1541 = *$tmp1542;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1544 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$474_131538->$data + 32));
                                methodKind1543 = *$tmp1544;
                                panda$core$Bit $tmp1545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1543.$rawValue, ((panda$core$Int64) { 2 }));
                                if ($tmp1545.value) {
                                {
                                    {
                                        $match$477_251546 = p_kind;
                                        panda$core$Bit $tmp1547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$477_251546.$rawValue, ((panda$core$Int64) { 0 }));
                                        if ($tmp1547.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$477_251546.$rawValue, ((panda$core$Int64) { 1 }));
                                        if ($tmp1548.value) {
                                        {
                                            panda$core$Object* $tmp1551 = (($fn1550) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp1549 = $tmp1551;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1549), mPosition1541, &$s1552);
                                            panda$core$Panda$unref$panda$core$Object($tmp1549);
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$477_251546.$rawValue, ((panda$core$Int64) { 2 }));
                                        if ($tmp1553.value) {
                                        {
                                            panda$core$Object* $tmp1556 = (($fn1555) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp1554 = $tmp1556;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1554), mPosition1541, &$s1557);
                                            panda$core$Panda$unref$panda$core$Object($tmp1554);
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
                        $tmp1537 = -1;
                        goto $l1535;
                        $l1535:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1539));
                        switch ($tmp1537) {
                            case -1: goto $l1558;
                        }
                        $l1558:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1472, m1528);
                    }
                    $tmp1527 = -1;
                    goto $l1525;
                    $l1525:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1528));
                    m1528 = NULL;
                    switch ($tmp1527) {
                        case -1: goto $l1559;
                    }
                    $l1559:;
                }
                goto $l1517;
                $l1518:;
            }
            $tmp1509 = -1;
            goto $l1507;
            $l1507:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$473$91510));
            Iter$473$91510 = NULL;
            switch ($tmp1509) {
                case -1: goto $l1560;
            }
            $l1560:;
        }
        foundInit1561 = ((panda$core$Bit) { false });
        foundCleanup1562 = ((panda$core$Bit) { false });
        {
            int $tmp1565;
            {
                ITable* $tmp1569 = ((panda$collections$Iterable*) result1472->methods)->$class->itable;
                while ($tmp1569->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1569 = $tmp1569->next;
                }
                $fn1571 $tmp1570 = $tmp1569->methods[0];
                panda$collections$Iterator* $tmp1572 = $tmp1570(((panda$collections$Iterable*) result1472->methods));
                $tmp1568 = $tmp1572;
                $tmp1567 = $tmp1568;
                Iter$492$91566 = $tmp1567;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1567));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1568));
                $l1573:;
                ITable* $tmp1576 = Iter$492$91566->$class->itable;
                while ($tmp1576->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1576 = $tmp1576->next;
                }
                $fn1578 $tmp1577 = $tmp1576->methods[0];
                panda$core$Bit $tmp1579 = $tmp1577(Iter$492$91566);
                panda$core$Bit $tmp1580 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1579);
                bool $tmp1575 = $tmp1580.value;
                if (!$tmp1575) goto $l1574;
                {
                    int $tmp1583;
                    {
                        ITable* $tmp1587 = Iter$492$91566->$class->itable;
                        while ($tmp1587->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1587 = $tmp1587->next;
                        }
                        $fn1589 $tmp1588 = $tmp1587->methods[1];
                        panda$core$Object* $tmp1590 = $tmp1588(Iter$492$91566);
                        $tmp1586 = $tmp1590;
                        $tmp1585 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1586);
                        m1584 = $tmp1585;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1585));
                        panda$core$Panda$unref$panda$core$Object($tmp1586);
                        panda$core$Bit $tmp1591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1584->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
                        if ($tmp1591.value) {
                        {
                            foundInit1561 = ((panda$core$Bit) { true });
                        }
                        }
                        panda$core$Bit $tmp1594 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1584)->name, &$s1593);
                        bool $tmp1592 = $tmp1594.value;
                        if (!$tmp1592) goto $l1595;
                        panda$core$Int64 $tmp1596 = panda$collections$Array$get_count$R$panda$core$Int64(m1584->parameters);
                        panda$core$Bit $tmp1597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1596, ((panda$core$Int64) { 0 }));
                        $tmp1592 = $tmp1597.value;
                        $l1595:;
                        panda$core$Bit $tmp1598 = { $tmp1592 };
                        if ($tmp1598.value) {
                        {
                            foundCleanup1562 = ((panda$core$Bit) { true });
                            panda$core$Bit $tmp1599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp1599.value) {
                            {
                                panda$core$Object* $tmp1602 = (($fn1601) self->compiler->$class->vtable[2])(self->compiler);
                                $tmp1600 = $tmp1602;
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1600), p_position, &$s1603);
                                panda$core$Panda$unref$panda$core$Object($tmp1600);
                            }
                            }
                        }
                        }
                    }
                    $tmp1583 = -1;
                    goto $l1581;
                    $l1581:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1584));
                    m1584 = NULL;
                    switch ($tmp1583) {
                        case -1: goto $l1604;
                    }
                    $l1604:;
                }
                goto $l1573;
                $l1574:;
            }
            $tmp1565 = -1;
            goto $l1563;
            $l1563:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$492$91566));
            Iter$492$91566 = NULL;
            switch ($tmp1565) {
                case -1: goto $l1605;
            }
            $l1605:;
        }
        panda$core$Bit $tmp1608 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1561);
        bool $tmp1607 = $tmp1608.value;
        if (!$tmp1607) goto $l1609;
        panda$core$Bit $tmp1610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        $tmp1607 = $tmp1610.value;
        $l1609:;
        panda$core$Bit $tmp1611 = { $tmp1607 };
        bool $tmp1606 = $tmp1611.value;
        if (!$tmp1606) goto $l1612;
        panda$core$Bit $tmp1614 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1472->name, &$s1613);
        $tmp1606 = $tmp1614.value;
        $l1612:;
        panda$core$Bit $tmp1615 = { $tmp1606 };
        if ($tmp1615.value) {
        {
            int $tmp1618;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1622 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1624 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1624);
                $tmp1623 = $tmp1624;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1625, ((panda$core$Int64) { 2 }));
                panda$collections$Array* $tmp1628 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1628);
                $tmp1627 = $tmp1628;
                org$pandalanguage$pandac$Type* $tmp1630 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1629 = $tmp1630;
                panda$collections$ImmutableArray* $tmp1632 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1632);
                $tmp1631 = $tmp1632;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1622, result1472, p_position, NULL, $tmp1623, $tmp1625, &$s1626, $tmp1627, $tmp1629, $tmp1631);
                $tmp1621 = $tmp1622;
                $tmp1620 = $tmp1621;
                defaultInit1619 = $tmp1620;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1620));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1621));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1631));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1629));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1627));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1623));
                panda$collections$Array$add$panda$collections$Array$T(result1472->methods, ((panda$core$Object*) defaultInit1619));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1472->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1619));
            }
            $tmp1618 = -1;
            goto $l1616;
            $l1616:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1619));
            defaultInit1619 = NULL;
            switch ($tmp1618) {
                case -1: goto $l1633;
            }
            $l1633:;
        }
        }
        panda$core$Bit $tmp1636 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup1562);
        bool $tmp1635 = $tmp1636.value;
        if (!$tmp1635) goto $l1637;
        panda$core$Bit $tmp1639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp1638 = $tmp1639.value;
        if ($tmp1638) goto $l1640;
        panda$core$Bit $tmp1641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        $tmp1638 = $tmp1641.value;
        $l1640:;
        panda$core$Bit $tmp1642 = { $tmp1638 };
        $tmp1635 = $tmp1642.value;
        $l1637:;
        panda$core$Bit $tmp1643 = { $tmp1635 };
        bool $tmp1634 = $tmp1643.value;
        if (!$tmp1634) goto $l1644;
        panda$core$Bit $tmp1646 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1472->name, &$s1645);
        $tmp1634 = $tmp1646.value;
        $l1644:;
        panda$core$Bit $tmp1647 = { $tmp1634 };
        if ($tmp1647.value) {
        {
            int $tmp1650;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1654 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1656 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64 $tmp1657 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1656, $tmp1657);
                $tmp1655 = $tmp1656;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1658, ((panda$core$Int64) { 0 }));
                panda$collections$Array* $tmp1661 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1661);
                $tmp1660 = $tmp1661;
                org$pandalanguage$pandac$Type* $tmp1663 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1662 = $tmp1663;
                panda$collections$ImmutableArray* $tmp1665 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1665);
                $tmp1664 = $tmp1665;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1654, result1472, p_position, NULL, $tmp1655, $tmp1658, &$s1659, $tmp1660, $tmp1662, $tmp1664);
                $tmp1653 = $tmp1654;
                $tmp1652 = $tmp1653;
                defaultCleanup1651 = $tmp1652;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1652));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1653));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1664));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1662));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1660));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1655));
                panda$collections$Array$add$panda$collections$Array$T(result1472->methods, ((panda$core$Object*) defaultCleanup1651));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1472->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1651));
            }
            $tmp1650 = -1;
            goto $l1648;
            $l1648:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1651));
            defaultCleanup1651 = NULL;
            switch ($tmp1650) {
                case -1: goto $l1666;
            }
            $l1666:;
        }
        }
        panda$core$Bit $tmp1667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1667.value) {
        {
            haveFields1668 = ((panda$core$Bit) { false });
            {
                int $tmp1671;
                {
                    ITable* $tmp1675 = ((panda$collections$Iterable*) result1472->choiceEntries)->$class->itable;
                    while ($tmp1675->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1675 = $tmp1675->next;
                    }
                    $fn1677 $tmp1676 = $tmp1675->methods[0];
                    panda$collections$Iterator* $tmp1678 = $tmp1676(((panda$collections$Iterable*) result1472->choiceEntries));
                    $tmp1674 = $tmp1678;
                    $tmp1673 = $tmp1674;
                    Iter$520$131672 = $tmp1673;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1673));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1674));
                    $l1679:;
                    ITable* $tmp1682 = Iter$520$131672->$class->itable;
                    while ($tmp1682->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1682 = $tmp1682->next;
                    }
                    $fn1684 $tmp1683 = $tmp1682->methods[0];
                    panda$core$Bit $tmp1685 = $tmp1683(Iter$520$131672);
                    panda$core$Bit $tmp1686 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1685);
                    bool $tmp1681 = $tmp1686.value;
                    if (!$tmp1681) goto $l1680;
                    {
                        int $tmp1689;
                        {
                            ITable* $tmp1693 = Iter$520$131672->$class->itable;
                            while ($tmp1693->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1693 = $tmp1693->next;
                            }
                            $fn1695 $tmp1694 = $tmp1693->methods[1];
                            panda$core$Object* $tmp1696 = $tmp1694(Iter$520$131672);
                            $tmp1692 = $tmp1696;
                            $tmp1691 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1692);
                            e1690 = $tmp1691;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1691));
                            panda$core$Panda$unref$panda$core$Object($tmp1692);
                            panda$core$Int64 $tmp1697 = panda$collections$Array$get_count$R$panda$core$Int64(e1690->fields);
                            panda$core$Bit $tmp1698 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1697, ((panda$core$Int64) { 0 }));
                            if ($tmp1698.value) {
                            {
                                haveFields1668 = ((panda$core$Bit) { true });
                                $tmp1689 = 0;
                                goto $l1687;
                                $l1699:;
                                goto $l1680;
                            }
                            }
                        }
                        $tmp1689 = -1;
                        goto $l1687;
                        $l1687:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1690));
                        e1690 = NULL;
                        switch ($tmp1689) {
                            case -1: goto $l1700;
                            case 0: goto $l1699;
                        }
                        $l1700:;
                    }
                    goto $l1679;
                    $l1680:;
                }
                $tmp1671 = -1;
                goto $l1669;
                $l1669:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$520$131672));
                Iter$520$131672 = NULL;
                switch ($tmp1671) {
                    case -1: goto $l1701;
                }
                $l1701:;
            }
            panda$core$Bit $tmp1702 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1668);
            if ($tmp1702.value) {
            {
                {
                    $tmp1703 = result1472->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp1706 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp1705 = $tmp1706;
                    $tmp1704 = $tmp1705;
                    result1472->rawSuper = $tmp1704;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1704));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1705));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1703));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp1710 = (($fn1709) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1708 = $tmp1710;
        panda$core$Object* $tmp1711 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1708)->currentClass);
        $tmp1707 = $tmp1711;
        panda$core$Panda$unref$panda$core$Object($tmp1707);
        panda$core$Panda$unref$panda$core$Object($tmp1708);
        $tmp1713 = result1472;
        $returnValue1712 = $tmp1713;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1713));
        $tmp1322 = 0;
        goto $l1320;
        $l1714:;
        return $returnValue1712;
    }
    $l1320:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1323));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1340));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1356));
    annotations1356 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1360));
    parameters1360 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1431));
    supertypes1431 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1472));
    result1472 = NULL;
    switch ($tmp1322) {
        case 0: goto $l1714;
    }
    $l1716:;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$536$91720 = NULL;
    panda$collections$Iterator* $tmp1721;
    panda$collections$Iterator* $tmp1722;
    org$pandalanguage$pandac$ClassDecl* inner1738 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1739;
    panda$core$Object* $tmp1740;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp1719;
        {
            ITable* $tmp1723 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp1723->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1723 = $tmp1723->next;
            }
            $fn1725 $tmp1724 = $tmp1723->methods[0];
            panda$collections$Iterator* $tmp1726 = $tmp1724(((panda$collections$Iterable*) p_cl->classes));
            $tmp1722 = $tmp1726;
            $tmp1721 = $tmp1722;
            Iter$536$91720 = $tmp1721;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1721));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1722));
            $l1727:;
            ITable* $tmp1730 = Iter$536$91720->$class->itable;
            while ($tmp1730->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1730 = $tmp1730->next;
            }
            $fn1732 $tmp1731 = $tmp1730->methods[0];
            panda$core$Bit $tmp1733 = $tmp1731(Iter$536$91720);
            panda$core$Bit $tmp1734 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1733);
            bool $tmp1729 = $tmp1734.value;
            if (!$tmp1729) goto $l1728;
            {
                int $tmp1737;
                {
                    ITable* $tmp1741 = Iter$536$91720->$class->itable;
                    while ($tmp1741->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1741 = $tmp1741->next;
                    }
                    $fn1743 $tmp1742 = $tmp1741->methods[1];
                    panda$core$Object* $tmp1744 = $tmp1742(Iter$536$91720);
                    $tmp1740 = $tmp1744;
                    $tmp1739 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1740);
                    inner1738 = $tmp1739;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1739));
                    panda$core$Panda$unref$panda$core$Object($tmp1740);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1738, p_arr);
                }
                $tmp1737 = -1;
                goto $l1735;
                $l1735:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1738));
                inner1738 = NULL;
                switch ($tmp1737) {
                    case -1: goto $l1745;
                }
                $l1745:;
            }
            goto $l1727;
            $l1728:;
        }
        $tmp1719 = -1;
        goto $l1717;
        $l1717:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$536$91720));
        Iter$536$91720 = NULL;
        switch ($tmp1719) {
            case -1: goto $l1746;
        }
        $l1746:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$542_91750 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1751;
    panda$collections$ImmutableArray* entries1753 = NULL;
    panda$collections$Array* result1758 = NULL;
    panda$collections$Array* $tmp1759;
    panda$collections$Array* $tmp1760;
    panda$core$String* currentPackage1762 = NULL;
    panda$core$String* $tmp1763;
    panda$collections$HashMap* aliases1765 = NULL;
    panda$collections$HashMap* $tmp1766;
    panda$collections$HashMap* $tmp1767;
    panda$collections$Iterator* Iter$547$171772 = NULL;
    panda$collections$Iterator* $tmp1773;
    panda$collections$Iterator* $tmp1774;
    org$pandalanguage$pandac$ASTNode* e1790 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1791;
    panda$core$Object* $tmp1792;
    org$pandalanguage$pandac$ASTNode* $match$548_211800 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1801;
    panda$core$String* name1803 = NULL;
    panda$core$String* $tmp1805;
    panda$core$String* $tmp1806;
    panda$core$String* fullName1808 = NULL;
    panda$core$String$Index$nullable idx1813;
    panda$core$String* alias1816 = NULL;
    panda$core$String* $tmp1817;
    panda$core$String* $tmp1818;
    panda$core$String* $tmp1819;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1820;
    panda$core$String* $tmp1823;
    panda$core$String* $tmp1824;
    org$pandalanguage$pandac$Position position1827;
    org$pandalanguage$pandac$ASTNode* dc1829 = NULL;
    panda$collections$ImmutableArray* annotations1831 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1833;
    panda$core$String* name1835 = NULL;
    panda$collections$ImmutableArray* generics1837 = NULL;
    panda$collections$ImmutableArray* supertypes1839 = NULL;
    panda$collections$ImmutableArray* members1841 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl1846 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1847;
    org$pandalanguage$pandac$ClassDecl* $tmp1848;
    panda$collections$ListView* $returnValue1854;
    panda$collections$ListView* $tmp1855;
    int $tmp1749;
    {
        $tmp1751 = p_file;
        $match$542_91750 = $tmp1751;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1751));
        panda$core$Bit $tmp1752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$542_91750->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1752.value) {
        {
            panda$collections$ImmutableArray** $tmp1754 = ((panda$collections$ImmutableArray**) ((char*) $match$542_91750->$data + 0));
            entries1753 = *$tmp1754;
            int $tmp1757;
            {
                panda$collections$Array* $tmp1761 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1761);
                $tmp1760 = $tmp1761;
                $tmp1759 = $tmp1760;
                result1758 = $tmp1759;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1759));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1760));
                $tmp1763 = &$s1764;
                currentPackage1762 = $tmp1763;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1763));
                panda$collections$HashMap* $tmp1768 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp1768);
                $tmp1767 = $tmp1768;
                $tmp1766 = $tmp1767;
                aliases1765 = $tmp1766;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1766));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1767));
                {
                    int $tmp1771;
                    {
                        ITable* $tmp1775 = ((panda$collections$Iterable*) entries1753)->$class->itable;
                        while ($tmp1775->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1775 = $tmp1775->next;
                        }
                        $fn1777 $tmp1776 = $tmp1775->methods[0];
                        panda$collections$Iterator* $tmp1778 = $tmp1776(((panda$collections$Iterable*) entries1753));
                        $tmp1774 = $tmp1778;
                        $tmp1773 = $tmp1774;
                        Iter$547$171772 = $tmp1773;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1773));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1774));
                        $l1779:;
                        ITable* $tmp1782 = Iter$547$171772->$class->itable;
                        while ($tmp1782->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1782 = $tmp1782->next;
                        }
                        $fn1784 $tmp1783 = $tmp1782->methods[0];
                        panda$core$Bit $tmp1785 = $tmp1783(Iter$547$171772);
                        panda$core$Bit $tmp1786 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1785);
                        bool $tmp1781 = $tmp1786.value;
                        if (!$tmp1781) goto $l1780;
                        {
                            int $tmp1789;
                            {
                                ITable* $tmp1793 = Iter$547$171772->$class->itable;
                                while ($tmp1793->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1793 = $tmp1793->next;
                                }
                                $fn1795 $tmp1794 = $tmp1793->methods[1];
                                panda$core$Object* $tmp1796 = $tmp1794(Iter$547$171772);
                                $tmp1792 = $tmp1796;
                                $tmp1791 = ((org$pandalanguage$pandac$ASTNode*) $tmp1792);
                                e1790 = $tmp1791;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1791));
                                panda$core$Panda$unref$panda$core$Object($tmp1792);
                                int $tmp1799;
                                {
                                    $tmp1801 = e1790;
                                    $match$548_211800 = $tmp1801;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1801));
                                    panda$core$Bit $tmp1802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$548_211800->$rawValue, ((panda$core$Int64) { 29 }));
                                    if ($tmp1802.value) {
                                    {
                                        panda$core$String** $tmp1804 = ((panda$core$String**) ((char*) $match$548_211800->$data + 16));
                                        name1803 = *$tmp1804;
                                        {
                                            $tmp1805 = currentPackage1762;
                                            $tmp1806 = name1803;
                                            currentPackage1762 = $tmp1806;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1806));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1805));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$548_211800->$rawValue, ((panda$core$Int64) { 40 }));
                                    if ($tmp1807.value) {
                                    {
                                        panda$core$String** $tmp1809 = ((panda$core$String**) ((char*) $match$548_211800->$data + 16));
                                        fullName1808 = *$tmp1809;
                                        int $tmp1812;
                                        {
                                            panda$core$String$Index$nullable $tmp1815 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName1808, &$s1814);
                                            idx1813 = $tmp1815;
                                            memset(&alias1816, 0, sizeof(alias1816));
                                            if (((panda$core$Bit) { idx1813.nonnull }).value) {
                                            {
                                                {
                                                    $tmp1817 = alias1816;
                                                    panda$core$String$Index $tmp1821 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName1808, ((panda$core$String$Index) idx1813.value));
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1820, ((panda$core$String$Index$nullable) { $tmp1821, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                                    panda$core$String* $tmp1822 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName1808, $tmp1820);
                                                    $tmp1819 = $tmp1822;
                                                    $tmp1818 = $tmp1819;
                                                    alias1816 = $tmp1818;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1818));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1819));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1817));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp1823 = alias1816;
                                                    $tmp1824 = fullName1808;
                                                    alias1816 = $tmp1824;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1824));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1823));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1765, ((panda$collections$Key*) alias1816), ((panda$core$Object*) fullName1808));
                                        }
                                        $tmp1812 = -1;
                                        goto $l1810;
                                        $l1810:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias1816));
                                        switch ($tmp1812) {
                                            case -1: goto $l1825;
                                        }
                                        $l1825:;
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$548_211800->$rawValue, ((panda$core$Int64) { 11 }));
                                    if ($tmp1826.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp1828 = ((org$pandalanguage$pandac$Position*) ((char*) $match$548_211800->$data + 0));
                                        position1827 = *$tmp1828;
                                        org$pandalanguage$pandac$ASTNode** $tmp1830 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$548_211800->$data + 16));
                                        dc1829 = *$tmp1830;
                                        panda$collections$ImmutableArray** $tmp1832 = ((panda$collections$ImmutableArray**) ((char*) $match$548_211800->$data + 24));
                                        annotations1831 = *$tmp1832;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp1834 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$548_211800->$data + 32));
                                        kind1833 = *$tmp1834;
                                        panda$core$String** $tmp1836 = ((panda$core$String**) ((char*) $match$548_211800->$data + 40));
                                        name1835 = *$tmp1836;
                                        panda$collections$ImmutableArray** $tmp1838 = ((panda$collections$ImmutableArray**) ((char*) $match$548_211800->$data + 48));
                                        generics1837 = *$tmp1838;
                                        panda$collections$ImmutableArray** $tmp1840 = ((panda$collections$ImmutableArray**) ((char*) $match$548_211800->$data + 56));
                                        supertypes1839 = *$tmp1840;
                                        panda$collections$ImmutableArray** $tmp1842 = ((panda$collections$ImmutableArray**) ((char*) $match$548_211800->$data + 64));
                                        members1841 = *$tmp1842;
                                        int $tmp1845;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp1849 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1765), currentPackage1762, position1827, dc1829, annotations1831, kind1833, name1835, generics1837, supertypes1839, members1841);
                                            $tmp1848 = $tmp1849;
                                            $tmp1847 = $tmp1848;
                                            cl1846 = $tmp1847;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1847));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1848));
                                            if (((panda$core$Bit) { cl1846 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl1846, result1758);
                                            }
                                            }
                                        }
                                        $tmp1845 = -1;
                                        goto $l1843;
                                        $l1843:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1846));
                                        cl1846 = NULL;
                                        switch ($tmp1845) {
                                            case -1: goto $l1850;
                                        }
                                        $l1850:;
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
                                $tmp1799 = -1;
                                goto $l1797;
                                $l1797:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1801));
                                switch ($tmp1799) {
                                    case -1: goto $l1851;
                                }
                                $l1851:;
                            }
                            $tmp1789 = -1;
                            goto $l1787;
                            $l1787:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1790));
                            e1790 = NULL;
                            switch ($tmp1789) {
                                case -1: goto $l1852;
                            }
                            $l1852:;
                        }
                        goto $l1779;
                        $l1780:;
                    }
                    $tmp1771 = -1;
                    goto $l1769;
                    $l1769:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$547$171772));
                    Iter$547$171772 = NULL;
                    switch ($tmp1771) {
                        case -1: goto $l1853;
                    }
                    $l1853:;
                }
                $tmp1855 = ((panda$collections$ListView*) result1758);
                $returnValue1854 = $tmp1855;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1855));
                $tmp1757 = 0;
                goto $l1755;
                $l1856:;
                $tmp1749 = 0;
                goto $l1747;
                $l1857:;
                return $returnValue1854;
            }
            $l1755:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1758));
            result1758 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1762));
            currentPackage1762 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases1765));
            aliases1765 = NULL;
            switch ($tmp1757) {
                case 0: goto $l1856;
            }
            $l1859:;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp1749 = -1;
    goto $l1747;
    $l1747:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1751));
    switch ($tmp1749) {
        case 0: goto $l1857;
        case -1: goto $l1860;
    }
    $l1860:;
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp1863;
    {
    }
    $tmp1863 = -1;
    goto $l1861;
    $l1861:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1863) {
        case -1: goto $l1864;
    }
    $l1864:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
}

