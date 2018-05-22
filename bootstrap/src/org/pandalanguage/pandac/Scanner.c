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
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/ListView.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Method.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
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

typedef panda$collections$Iterator* (*$fn88)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn95)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn106)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn117)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn154)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn161)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn172)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn189)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn213)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn220)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn231)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn344)(panda$core$Weak*);
typedef panda$core$Object* (*$fn354)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn426)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn433)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn444)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn537)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn544)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn555)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn581)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn588)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn599)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn639)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn646)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn657)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn686)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn693)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn704)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn735)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn742)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn753)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn778)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn785)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn796)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn821)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn828)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn839)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn853)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn860)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn871)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn930)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn937)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn948)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn970)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn977)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn988)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1002)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1009)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1020)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1043)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1050)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1061)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1073)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1092)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1099)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1110)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1169)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1176)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1187)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1223)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1239)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1380)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1387)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1398)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1462)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1469)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1480)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1512)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn1518)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1527)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1538)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1545)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1556)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1567)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1570)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1605)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1612)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1623)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1640)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1645)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1661)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1668)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1679)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1691)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1767)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1774)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1785)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1799)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1815)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1822)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1833)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1867)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1874)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1885)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static panda$core$String $s1225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x6f\x6e\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x27", 30, -1250916154819313721, NULL };
static panda$core$String $s1245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x68\x61\x76\x65\x20\x61\x20\x62\x6f\x64\x79", 16, -7652461387112275530, NULL };
static panda$core$String $s1322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s1703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s1904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

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
    org$pandalanguage$pandac$IRNode* node12 = NULL;
    org$pandalanguage$pandac$IRNode* $match$21_1717 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp18;
    org$pandalanguage$pandac$Type* type20 = NULL;
    org$pandalanguage$pandac$Type* $returnValue22;
    org$pandalanguage$pandac$Type* $tmp23;
    org$pandalanguage$pandac$Position position29;
    panda$core$String* name31 = NULL;
    org$pandalanguage$pandac$Type* $tmp33;
    org$pandalanguage$pandac$Type* $tmp34;
    org$pandalanguage$pandac$Type$Kind $tmp36;
    org$pandalanguage$pandac$Position position40;
    org$pandalanguage$pandac$ASTNode* base42 = NULL;
    panda$collections$Array* subtypes47 = NULL;
    panda$collections$Array* $tmp48;
    panda$collections$Array* $tmp49;
    org$pandalanguage$pandac$Type* $tmp51;
    org$pandalanguage$pandac$Type* $tmp53;
    org$pandalanguage$pandac$Type* $tmp54;
    panda$core$String* $tmp56;
    panda$core$Object* $tmp57;
    org$pandalanguage$pandac$Type$Kind $tmp61;
    org$pandalanguage$pandac$Position position67;
    panda$core$String* base69 = NULL;
    panda$collections$ImmutableArray* args71 = NULL;
    panda$collections$Array* finalArgs76 = NULL;
    panda$collections$Array* $tmp77;
    panda$collections$Array* $tmp78;
    panda$collections$Iterator* Iter$35$1783 = NULL;
    panda$collections$Iterator* $tmp84;
    panda$collections$Iterator* $tmp85;
    org$pandalanguage$pandac$ASTNode* arg101 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp102;
    panda$core$Object* $tmp103;
    org$pandalanguage$pandac$Type* $tmp108;
    org$pandalanguage$pandac$Type* $tmp112;
    org$pandalanguage$pandac$Type* $tmp113;
    org$pandalanguage$pandac$Type* $tmp114;
    org$pandalanguage$pandac$Type$Kind $tmp116;
    org$pandalanguage$pandac$Position position125;
    org$pandalanguage$pandac$parser$Token$Kind kind127;
    panda$collections$ImmutableArray* rawParameters129 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType131 = NULL;
    org$pandalanguage$pandac$Type$Kind typeKind136;
    org$pandalanguage$pandac$parser$Token$Kind $match$41_17137;
    org$pandalanguage$pandac$Type$Kind $tmp139;
    org$pandalanguage$pandac$Type$Kind $tmp141;
    panda$collections$Array* parameters142 = NULL;
    panda$collections$Array* $tmp143;
    panda$collections$Array* $tmp144;
    panda$collections$Iterator* Iter$50$17149 = NULL;
    panda$collections$Iterator* $tmp150;
    panda$collections$Iterator* $tmp151;
    org$pandalanguage$pandac$ASTNode* p167 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp168;
    panda$core$Object* $tmp169;
    org$pandalanguage$pandac$Type* $tmp174;
    org$pandalanguage$pandac$Type* returnType178 = NULL;
    org$pandalanguage$pandac$Type* $tmp179;
    org$pandalanguage$pandac$Type* $tmp180;
    org$pandalanguage$pandac$Type* $tmp181;
    org$pandalanguage$pandac$Type* $tmp183;
    org$pandalanguage$pandac$Type* $tmp184;
    org$pandalanguage$pandac$Type* $tmp185;
    org$pandalanguage$pandac$Type* $tmp187;
    org$pandalanguage$pandac$Type* $tmp188;
    panda$collections$ImmutableArray* $tmp191;
    int $tmp8;
    {
        $tmp10 = p_type;
        $match$19_99 = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_99->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp11.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp13 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$19_99->$data + 0));
            node12 = *$tmp13;
            int $tmp16;
            {
                $tmp18 = node12;
                $match$21_1717 = $tmp18;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
                panda$core$Bit $tmp19 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$21_1717->$rawValue, ((panda$core$Int64) { 38 }));
                if ($tmp19.value) {
                {
                    org$pandalanguage$pandac$Type** $tmp21 = ((org$pandalanguage$pandac$Type**) ((char*) $match$21_1717->$data + 16));
                    type20 = *$tmp21;
                    $tmp23 = type20;
                    $returnValue22 = $tmp23;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
                    $tmp16 = 0;
                    goto $l14;
                    $l24:;
                    $tmp8 = 0;
                    goto $l6;
                    $l25:;
                    return $returnValue22;
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp16 = -1;
            goto $l14;
            $l14:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
            switch ($tmp16) {
                case -1: goto $l27;
                case 0: goto $l24;
            }
            $l27:;
        }
        }
        else {
        panda$core$Bit $tmp28 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_99->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp28.value) {
        {
            org$pandalanguage$pandac$Position* $tmp30 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_99->$data + 0));
            position29 = *$tmp30;
            panda$core$String** $tmp32 = ((panda$core$String**) ((char*) $match$19_99->$data + 16));
            name31 = *$tmp32;
            org$pandalanguage$pandac$Type* $tmp35 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp36, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position($tmp35, name31, $tmp36, position29);
            $tmp34 = $tmp35;
            $tmp33 = $tmp34;
            $returnValue22 = $tmp33;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp33));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
            $tmp8 = 1;
            goto $l6;
            $l37:;
            return $returnValue22;
        }
        }
        else {
        panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_99->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp39.value) {
        {
            org$pandalanguage$pandac$Position* $tmp41 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_99->$data + 0));
            position40 = *$tmp41;
            org$pandalanguage$pandac$ASTNode** $tmp43 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$19_99->$data + 16));
            base42 = *$tmp43;
            int $tmp46;
            {
                panda$collections$Array* $tmp50 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp50);
                $tmp49 = $tmp50;
                $tmp48 = $tmp49;
                subtypes47 = $tmp48;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp48));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp49));
                org$pandalanguage$pandac$Type* $tmp52 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, base42);
                $tmp51 = $tmp52;
                panda$collections$Array$add$panda$collections$Array$T(subtypes47, ((panda$core$Object*) $tmp51));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp51));
                org$pandalanguage$pandac$Type* $tmp55 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$Object* $tmp58 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes47, ((panda$core$Int64) { 0 }));
                $tmp57 = $tmp58;
                panda$core$String* $tmp60 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp57))->name, &$s59);
                $tmp56 = $tmp60;
                org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp61, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp55, $tmp56, $tmp61, position40, ((panda$collections$ListView*) subtypes47), ((panda$core$Bit) { false }));
                $tmp54 = $tmp55;
                $tmp53 = $tmp54;
                $returnValue22 = $tmp53;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp53));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp54));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp56));
                panda$core$Panda$unref$panda$core$Object($tmp57);
                $tmp46 = 0;
                goto $l44;
                $l62:;
                $tmp8 = 2;
                goto $l6;
                $l63:;
                return $returnValue22;
            }
            $l44:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes47));
            subtypes47 = NULL;
            switch ($tmp46) {
                case 0: goto $l62;
            }
            $l65:;
        }
        }
        else {
        panda$core$Bit $tmp66 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_99->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp66.value) {
        {
            org$pandalanguage$pandac$Position* $tmp68 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_99->$data + 0));
            position67 = *$tmp68;
            panda$core$String** $tmp70 = ((panda$core$String**) ((char*) $match$19_99->$data + 16));
            base69 = *$tmp70;
            panda$collections$ImmutableArray** $tmp72 = ((panda$collections$ImmutableArray**) ((char*) $match$19_99->$data + 24));
            args71 = *$tmp72;
            int $tmp75;
            {
                panda$collections$Array* $tmp79 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp79);
                $tmp78 = $tmp79;
                $tmp77 = $tmp78;
                finalArgs76 = $tmp77;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp77));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp78));
                {
                    int $tmp82;
                    {
                        ITable* $tmp86 = ((panda$collections$Iterable*) args71)->$class->itable;
                        while ($tmp86->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp86 = $tmp86->next;
                        }
                        $fn88 $tmp87 = $tmp86->methods[0];
                        panda$collections$Iterator* $tmp89 = $tmp87(((panda$collections$Iterable*) args71));
                        $tmp85 = $tmp89;
                        $tmp84 = $tmp85;
                        Iter$35$1783 = $tmp84;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp84));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
                        $l90:;
                        ITable* $tmp93 = Iter$35$1783->$class->itable;
                        while ($tmp93->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp93 = $tmp93->next;
                        }
                        $fn95 $tmp94 = $tmp93->methods[0];
                        panda$core$Bit $tmp96 = $tmp94(Iter$35$1783);
                        panda$core$Bit $tmp97 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp96);
                        bool $tmp92 = $tmp97.value;
                        if (!$tmp92) goto $l91;
                        {
                            int $tmp100;
                            {
                                ITable* $tmp104 = Iter$35$1783->$class->itable;
                                while ($tmp104->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp104 = $tmp104->next;
                                }
                                $fn106 $tmp105 = $tmp104->methods[1];
                                panda$core$Object* $tmp107 = $tmp105(Iter$35$1783);
                                $tmp103 = $tmp107;
                                $tmp102 = ((org$pandalanguage$pandac$ASTNode*) $tmp103);
                                arg101 = $tmp102;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp102));
                                panda$core$Panda$unref$panda$core$Object($tmp103);
                                org$pandalanguage$pandac$Type* $tmp109 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, arg101);
                                $tmp108 = $tmp109;
                                panda$collections$Array$add$panda$collections$Array$T(finalArgs76, ((panda$core$Object*) $tmp108));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp108));
                            }
                            $tmp100 = -1;
                            goto $l98;
                            $l98:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg101));
                            arg101 = NULL;
                            switch ($tmp100) {
                                case -1: goto $l110;
                            }
                            $l110:;
                        }
                        goto $l90;
                        $l91:;
                    }
                    $tmp82 = -1;
                    goto $l80;
                    $l80:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$35$1783));
                    Iter$35$1783 = NULL;
                    switch ($tmp82) {
                        case -1: goto $l111;
                    }
                    $l111:;
                }
                org$pandalanguage$pandac$Type* $tmp115 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp116, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Position $tmp118 = (($fn117) p_type->$class->vtable[2])(p_type);
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position($tmp115, base69, $tmp116, $tmp118);
                $tmp114 = $tmp115;
                org$pandalanguage$pandac$Type* $tmp119 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp114, ((panda$collections$ListView*) finalArgs76));
                $tmp113 = $tmp119;
                $tmp112 = $tmp113;
                $returnValue22 = $tmp112;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp112));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp113));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
                $tmp75 = 0;
                goto $l73;
                $l120:;
                $tmp8 = 3;
                goto $l6;
                $l121:;
                return $returnValue22;
            }
            $l73:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalArgs76));
            finalArgs76 = NULL;
            switch ($tmp75) {
                case 0: goto $l120;
            }
            $l123:;
        }
        }
        else {
        panda$core$Bit $tmp124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_99->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp124.value) {
        {
            org$pandalanguage$pandac$Position* $tmp126 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_99->$data + 0));
            position125 = *$tmp126;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp128 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$19_99->$data + 16));
            kind127 = *$tmp128;
            panda$collections$ImmutableArray** $tmp130 = ((panda$collections$ImmutableArray**) ((char*) $match$19_99->$data + 24));
            rawParameters129 = *$tmp130;
            org$pandalanguage$pandac$ASTNode** $tmp132 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$19_99->$data + 32));
            rawReturnType131 = *$tmp132;
            int $tmp135;
            {
                memset(&typeKind136, 0, sizeof(typeKind136));
                {
                    $match$41_17137 = kind127;
                    panda$core$Bit $tmp138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$41_17137.$rawValue, ((panda$core$Int64) { 90 }));
                    if ($tmp138.value) {
                    {
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp139, ((panda$core$Int64) { 14 }));
                        typeKind136 = $tmp139;
                    }
                    }
                    else {
                    panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$41_17137.$rawValue, ((panda$core$Int64) { 91 }));
                    if ($tmp140.value) {
                    {
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp141, ((panda$core$Int64) { 15 }));
                        typeKind136 = $tmp141;
                    }
                    }
                    else {
                    {
                        PANDA_ASSERT(((panda$core$Bit) { false }).value);
                    }
                    }
                    }
                }
                panda$collections$Array* $tmp145 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp145);
                $tmp144 = $tmp145;
                $tmp143 = $tmp144;
                parameters142 = $tmp143;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
                {
                    int $tmp148;
                    {
                        ITable* $tmp152 = ((panda$collections$Iterable*) rawParameters129)->$class->itable;
                        while ($tmp152->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp152 = $tmp152->next;
                        }
                        $fn154 $tmp153 = $tmp152->methods[0];
                        panda$collections$Iterator* $tmp155 = $tmp153(((panda$collections$Iterable*) rawParameters129));
                        $tmp151 = $tmp155;
                        $tmp150 = $tmp151;
                        Iter$50$17149 = $tmp150;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp150));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
                        $l156:;
                        ITable* $tmp159 = Iter$50$17149->$class->itable;
                        while ($tmp159->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp159 = $tmp159->next;
                        }
                        $fn161 $tmp160 = $tmp159->methods[0];
                        panda$core$Bit $tmp162 = $tmp160(Iter$50$17149);
                        panda$core$Bit $tmp163 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp162);
                        bool $tmp158 = $tmp163.value;
                        if (!$tmp158) goto $l157;
                        {
                            int $tmp166;
                            {
                                ITable* $tmp170 = Iter$50$17149->$class->itable;
                                while ($tmp170->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp170 = $tmp170->next;
                                }
                                $fn172 $tmp171 = $tmp170->methods[1];
                                panda$core$Object* $tmp173 = $tmp171(Iter$50$17149);
                                $tmp169 = $tmp173;
                                $tmp168 = ((org$pandalanguage$pandac$ASTNode*) $tmp169);
                                p167 = $tmp168;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp168));
                                panda$core$Panda$unref$panda$core$Object($tmp169);
                                org$pandalanguage$pandac$Type* $tmp175 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p167);
                                $tmp174 = $tmp175;
                                panda$collections$Array$add$panda$collections$Array$T(parameters142, ((panda$core$Object*) $tmp174));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
                            }
                            $tmp166 = -1;
                            goto $l164;
                            $l164:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p167));
                            p167 = NULL;
                            switch ($tmp166) {
                                case -1: goto $l176;
                            }
                            $l176:;
                        }
                        goto $l156;
                        $l157:;
                    }
                    $tmp148 = -1;
                    goto $l146;
                    $l146:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$50$17149));
                    Iter$50$17149 = NULL;
                    switch ($tmp148) {
                        case -1: goto $l177;
                    }
                    $l177:;
                }
                memset(&returnType178, 0, sizeof(returnType178));
                if (((panda$core$Bit) { rawReturnType131 != NULL }).value) {
                {
                    {
                        $tmp179 = returnType178;
                        org$pandalanguage$pandac$Type* $tmp182 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, rawReturnType131);
                        $tmp181 = $tmp182;
                        $tmp180 = $tmp181;
                        returnType178 = $tmp180;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp180));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
                    }
                }
                }
                else {
                {
                    {
                        $tmp183 = returnType178;
                        org$pandalanguage$pandac$Type* $tmp186 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                        $tmp185 = $tmp186;
                        $tmp184 = $tmp185;
                        returnType178 = $tmp184;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp183));
                    }
                }
                }
                org$pandalanguage$pandac$Position $tmp190 = (($fn189) p_type->$class->vtable[2])(p_type);
                panda$collections$ImmutableArray* $tmp192 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters142);
                $tmp191 = $tmp192;
                org$pandalanguage$pandac$Type* $tmp193 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp190, typeKind136, ((panda$collections$ListView*) $tmp191), returnType178);
                $tmp188 = $tmp193;
                $tmp187 = $tmp188;
                $returnValue22 = $tmp187;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp187));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp188));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp191));
                $tmp135 = 0;
                goto $l133;
                $l194:;
                $tmp8 = 4;
                goto $l6;
                $l195:;
                return $returnValue22;
            }
            $l133:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters142));
            parameters142 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType178));
            switch ($tmp135) {
                case 0: goto $l194;
            }
            $l197:;
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
    $tmp8 = -1;
    goto $l6;
    $l6:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    switch ($tmp8) {
        case 4: goto $l195;
        case 1: goto $l37;
        case 0: goto $l25;
        case -1: goto $l198;
        case 3: goto $l121;
        case 2: goto $l63;
    }
    $l198:;
}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, panda$collections$ImmutableArray* p_a) {
    panda$core$Int64 flags202;
    panda$collections$Array* expressions203 = NULL;
    panda$collections$Array* $tmp204;
    panda$collections$Iterator* Iter$69$9208 = NULL;
    panda$collections$Iterator* $tmp209;
    panda$collections$Iterator* $tmp210;
    org$pandalanguage$pandac$ASTNode* c226 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp227;
    panda$core$Object* $tmp228;
    org$pandalanguage$pandac$ASTNode* $match$70_13236 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp237;
    org$pandalanguage$pandac$Position position239;
    panda$core$String* text241 = NULL;
    org$pandalanguage$pandac$ASTNode* rawExpr243 = NULL;
    org$pandalanguage$pandac$ASTNode* expr248 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp249;
    panda$core$String* $match$73_21253 = NULL;
    panda$core$String* $tmp254;
    panda$collections$Array* $tmp305;
    panda$collections$Array* $tmp306;
    panda$collections$Array* $tmp307;
    org$pandalanguage$pandac$Annotations$Expression* $tmp309;
    org$pandalanguage$pandac$ASTNode* $tmp311;
    org$pandalanguage$pandac$ASTNode* $tmp312;
    panda$collections$Array* $tmp315;
    panda$collections$Array* $tmp316;
    panda$collections$Array* $tmp317;
    org$pandalanguage$pandac$Annotations$Expression* $tmp319;
    org$pandalanguage$pandac$ASTNode* $tmp321;
    org$pandalanguage$pandac$ASTNode* $tmp322;
    panda$collections$Array* $tmp325;
    panda$collections$Array* $tmp326;
    panda$collections$Array* $tmp327;
    org$pandalanguage$pandac$Annotations$Expression* $tmp329;
    org$pandalanguage$pandac$ASTNode* $tmp331;
    org$pandalanguage$pandac$ASTNode* $tmp332;
    panda$collections$Array* $tmp335;
    panda$collections$Array* $tmp336;
    panda$collections$Array* $tmp337;
    org$pandalanguage$pandac$Annotations$Expression* $tmp339;
    org$pandalanguage$pandac$ASTNode* $tmp341;
    org$pandalanguage$pandac$ASTNode* $tmp342;
    panda$core$Object* $tmp343;
    panda$core$String* $tmp346;
    panda$core$String* $tmp347;
    panda$core$Object* $tmp353;
    panda$core$String* $tmp356;
    panda$core$String* $tmp357;
    org$pandalanguage$pandac$Annotations* $returnValue366;
    org$pandalanguage$pandac$Annotations* $tmp367;
    org$pandalanguage$pandac$Annotations* $tmp368;
    int $tmp201;
    {
        flags202 = ((panda$core$Int64) { 0 });
        $tmp204 = NULL;
        expressions203 = $tmp204;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp204));
        {
            int $tmp207;
            {
                ITable* $tmp211 = ((panda$collections$Iterable*) p_a)->$class->itable;
                while ($tmp211->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp211 = $tmp211->next;
                }
                $fn213 $tmp212 = $tmp211->methods[0];
                panda$collections$Iterator* $tmp214 = $tmp212(((panda$collections$Iterable*) p_a));
                $tmp210 = $tmp214;
                $tmp209 = $tmp210;
                Iter$69$9208 = $tmp209;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp209));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
                $l215:;
                ITable* $tmp218 = Iter$69$9208->$class->itable;
                while ($tmp218->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp218 = $tmp218->next;
                }
                $fn220 $tmp219 = $tmp218->methods[0];
                panda$core$Bit $tmp221 = $tmp219(Iter$69$9208);
                panda$core$Bit $tmp222 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp221);
                bool $tmp217 = $tmp222.value;
                if (!$tmp217) goto $l216;
                {
                    int $tmp225;
                    {
                        ITable* $tmp229 = Iter$69$9208->$class->itable;
                        while ($tmp229->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp229 = $tmp229->next;
                        }
                        $fn231 $tmp230 = $tmp229->methods[1];
                        panda$core$Object* $tmp232 = $tmp230(Iter$69$9208);
                        $tmp228 = $tmp232;
                        $tmp227 = ((org$pandalanguage$pandac$ASTNode*) $tmp228);
                        c226 = $tmp227;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp227));
                        panda$core$Panda$unref$panda$core$Object($tmp228);
                        int $tmp235;
                        {
                            $tmp237 = c226;
                            $match$70_13236 = $tmp237;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp237));
                            panda$core$Bit $tmp238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$70_13236->$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp238.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp240 = ((org$pandalanguage$pandac$Position*) ((char*) $match$70_13236->$data + 0));
                                position239 = *$tmp240;
                                panda$core$String** $tmp242 = ((panda$core$String**) ((char*) $match$70_13236->$data + 16));
                                text241 = *$tmp242;
                                org$pandalanguage$pandac$ASTNode** $tmp244 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$70_13236->$data + 24));
                                rawExpr243 = *$tmp244;
                                int $tmp247;
                                {
                                    $tmp249 = rawExpr243;
                                    expr248 = $tmp249;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp249));
                                    int $tmp252;
                                    {
                                        $tmp254 = text241;
                                        $match$73_21253 = $tmp254;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
                                        panda$core$Bit $tmp256 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$73_21253, &$s255);
                                        if ($tmp256.value) {
                                        {
                                            panda$core$Int64 $tmp257 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                                            panda$core$Int64 $tmp258 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags202, $tmp257);
                                            flags202 = $tmp258;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp260 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$73_21253, &$s259);
                                        if ($tmp260.value) {
                                        {
                                            panda$core$Int64 $tmp261 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                                            panda$core$Int64 $tmp262 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags202, $tmp261);
                                            flags202 = $tmp262;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp264 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$73_21253, &$s263);
                                        if ($tmp264.value) {
                                        {
                                            panda$core$Int64 $tmp265 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                                            panda$core$Int64 $tmp266 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags202, $tmp265);
                                            flags202 = $tmp266;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp268 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$73_21253, &$s267);
                                        if ($tmp268.value) {
                                        {
                                            panda$core$Int64 $tmp269 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                                            panda$core$Int64 $tmp270 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags202, $tmp269);
                                            flags202 = $tmp270;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp272 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$73_21253, &$s271);
                                        if ($tmp272.value) {
                                        {
                                            panda$core$Int64 $tmp273 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                                            panda$core$Int64 $tmp274 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags202, $tmp273);
                                            flags202 = $tmp274;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp276 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$73_21253, &$s275);
                                        if ($tmp276.value) {
                                        {
                                            panda$core$Int64 $tmp277 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                                            panda$core$Int64 $tmp278 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags202, $tmp277);
                                            flags202 = $tmp278;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp280 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$73_21253, &$s279);
                                        if ($tmp280.value) {
                                        {
                                            panda$core$Int64 $tmp281 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                                            panda$core$Int64 $tmp282 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags202, $tmp281);
                                            flags202 = $tmp282;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp284 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$73_21253, &$s283);
                                        if ($tmp284.value) {
                                        {
                                            panda$core$Int64 $tmp285 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                                            panda$core$Int64 $tmp286 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags202, $tmp285);
                                            flags202 = $tmp286;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp288 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$73_21253, &$s287);
                                        if ($tmp288.value) {
                                        {
                                            panda$core$Int64 $tmp289 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                                            panda$core$Int64 $tmp290 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags202, $tmp289);
                                            flags202 = $tmp290;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp292 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$73_21253, &$s291);
                                        if ($tmp292.value) {
                                        {
                                            panda$core$Int64 $tmp293 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                                            panda$core$Int64 $tmp294 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags202, $tmp293);
                                            flags202 = $tmp294;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp296 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$73_21253, &$s295);
                                        if ($tmp296.value) {
                                        {
                                            panda$core$Int64 $tmp297 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                                            panda$core$Int64 $tmp298 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags202, $tmp297);
                                            flags202 = $tmp298;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp300 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$73_21253, &$s299);
                                        if ($tmp300.value) {
                                        {
                                            panda$core$Int64 $tmp301 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 12 }));
                                            panda$core$Int64 $tmp302 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags202, $tmp301);
                                            flags202 = $tmp302;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp304 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$73_21253, &$s303);
                                        if ($tmp304.value) {
                                        {
                                            if (((panda$core$Bit) { expressions203 == NULL }).value) {
                                            {
                                                {
                                                    $tmp305 = expressions203;
                                                    panda$collections$Array* $tmp308 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp308);
                                                    $tmp307 = $tmp308;
                                                    $tmp306 = $tmp307;
                                                    expressions203 = $tmp306;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp305));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp310 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp310, ((panda$core$Int64) { 0 }), expr248);
                                            $tmp309 = $tmp310;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions203, ((panda$core$Object*) $tmp309));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp309));
                                            {
                                                $tmp311 = expr248;
                                                $tmp312 = NULL;
                                                expr248 = $tmp312;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp311));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp314 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$73_21253, &$s313);
                                        if ($tmp314.value) {
                                        {
                                            if (((panda$core$Bit) { expressions203 == NULL }).value) {
                                            {
                                                {
                                                    $tmp315 = expressions203;
                                                    panda$collections$Array* $tmp318 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp318);
                                                    $tmp317 = $tmp318;
                                                    $tmp316 = $tmp317;
                                                    expressions203 = $tmp316;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp316));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp317));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp320 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp320, ((panda$core$Int64) { 1 }), expr248);
                                            $tmp319 = $tmp320;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions203, ((panda$core$Object*) $tmp319));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
                                            {
                                                $tmp321 = expr248;
                                                $tmp322 = NULL;
                                                expr248 = $tmp322;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp322));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp321));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp324 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$73_21253, &$s323);
                                        if ($tmp324.value) {
                                        {
                                            if (((panda$core$Bit) { expressions203 == NULL }).value) {
                                            {
                                                {
                                                    $tmp325 = expressions203;
                                                    panda$collections$Array* $tmp328 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp328);
                                                    $tmp327 = $tmp328;
                                                    $tmp326 = $tmp327;
                                                    expressions203 = $tmp326;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp326));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp325));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp330 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp330, ((panda$core$Int64) { 2 }), expr248);
                                            $tmp329 = $tmp330;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions203, ((panda$core$Object*) $tmp329));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp329));
                                            {
                                                $tmp331 = expr248;
                                                $tmp332 = NULL;
                                                expr248 = $tmp332;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp332));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp331));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp334 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$73_21253, &$s333);
                                        if ($tmp334.value) {
                                        {
                                            if (((panda$core$Bit) { expressions203 == NULL }).value) {
                                            {
                                                {
                                                    $tmp335 = expressions203;
                                                    panda$collections$Array* $tmp338 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp338);
                                                    $tmp337 = $tmp338;
                                                    $tmp336 = $tmp337;
                                                    expressions203 = $tmp336;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp336));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp337));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp340 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp340, ((panda$core$Int64) { 3 }), expr248);
                                            $tmp339 = $tmp340;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions203, ((panda$core$Object*) $tmp339));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
                                            {
                                                $tmp341 = expr248;
                                                $tmp342 = NULL;
                                                expr248 = $tmp342;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp342));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp341));
                                            }
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$Object* $tmp345 = (($fn344) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp343 = $tmp345;
                                            panda$core$String* $tmp349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s348, text241);
                                            $tmp347 = $tmp349;
                                            panda$core$String* $tmp351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp347, &$s350);
                                            $tmp346 = $tmp351;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp343), position239, $tmp346);
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp346));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp347));
                                            panda$core$Panda$unref$panda$core$Object($tmp343);
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
                                    $tmp252 = -1;
                                    goto $l250;
                                    $l250:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
                                    switch ($tmp252) {
                                        case -1: goto $l352;
                                    }
                                    $l352:;
                                    if (((panda$core$Bit) { expr248 != NULL }).value) {
                                    {
                                        panda$core$Object* $tmp355 = (($fn354) self->compiler->$class->vtable[2])(self->compiler);
                                        $tmp353 = $tmp355;
                                        panda$core$String* $tmp359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s358, text241);
                                        $tmp357 = $tmp359;
                                        panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp357, &$s360);
                                        $tmp356 = $tmp361;
                                        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp353), position239, $tmp356);
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp356));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp357));
                                        panda$core$Panda$unref$panda$core$Object($tmp353);
                                    }
                                    }
                                }
                                $tmp247 = -1;
                                goto $l245;
                                $l245:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr248));
                                expr248 = NULL;
                                switch ($tmp247) {
                                    case -1: goto $l362;
                                }
                                $l362:;
                            }
                            }
                            else {
                            {
                                PANDA_ASSERT(((panda$core$Bit) { false }).value);
                            }
                            }
                        }
                        $tmp235 = -1;
                        goto $l233;
                        $l233:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp237));
                        switch ($tmp235) {
                            case -1: goto $l363;
                        }
                        $l363:;
                    }
                    $tmp225 = -1;
                    goto $l223;
                    $l223:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c226));
                    c226 = NULL;
                    switch ($tmp225) {
                        case -1: goto $l364;
                    }
                    $l364:;
                }
                goto $l215;
                $l216:;
            }
            $tmp207 = -1;
            goto $l205;
            $l205:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$69$9208));
            Iter$69$9208 = NULL;
            switch ($tmp207) {
                case -1: goto $l365;
            }
            $l365:;
        }
        org$pandalanguage$pandac$Annotations* $tmp369 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q($tmp369, flags202, ((panda$collections$ListView*) expressions203));
        $tmp368 = $tmp369;
        $tmp367 = $tmp368;
        $returnValue366 = $tmp367;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp367));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp368));
        $tmp201 = 0;
        goto $l199;
        $l370:;
        return $returnValue366;
    }
    $l199:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions203));
    switch ($tmp201) {
        case 0: goto $l370;
    }
    $l372:;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment376 = NULL;
    panda$core$String* $tmp377;
    panda$core$String* $tmp378;
    org$pandalanguage$pandac$ASTNode* $match$131_13382 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp383;
    org$pandalanguage$pandac$Position position385;
    panda$core$String* text387 = NULL;
    panda$core$String* $tmp389;
    panda$core$String* $tmp390;
    org$pandalanguage$pandac$Annotations* annotations392 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp393;
    org$pandalanguage$pandac$Annotations* $tmp394;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind396;
    org$pandalanguage$pandac$ASTNode* $match$140_9400 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp401;
    org$pandalanguage$pandac$Variable$Kind kind403;
    panda$collections$ImmutableArray* decls405 = NULL;
    org$pandalanguage$pandac$Variable$Kind $match$142_17407;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp409;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp411;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp413;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp417;
    panda$collections$Iterator* Iter$153$17421 = NULL;
    panda$collections$Iterator* $tmp422;
    panda$collections$Iterator* $tmp423;
    org$pandalanguage$pandac$ASTNode* decl439 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp440;
    panda$core$Object* $tmp441;
    org$pandalanguage$pandac$ASTNode* $match$154_21449 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp450;
    org$pandalanguage$pandac$Position declPosition452;
    org$pandalanguage$pandac$ASTNode* target454 = NULL;
    org$pandalanguage$pandac$ASTNode* value456 = NULL;
    panda$core$String* name461 = NULL;
    org$pandalanguage$pandac$Type* type462 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$158_29466 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp467;
    panda$core$String* id469 = NULL;
    panda$core$String* $tmp471;
    panda$core$String* $tmp472;
    org$pandalanguage$pandac$Type* $tmp473;
    org$pandalanguage$pandac$Type* $tmp474;
    org$pandalanguage$pandac$Type* $tmp475;
    panda$core$String* id478 = NULL;
    org$pandalanguage$pandac$ASTNode* idType480 = NULL;
    panda$core$String* $tmp482;
    panda$core$String* $tmp483;
    org$pandalanguage$pandac$Type* $tmp484;
    org$pandalanguage$pandac$Type* $tmp485;
    org$pandalanguage$pandac$Type* $tmp486;
    org$pandalanguage$pandac$FieldDecl* field489 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp490;
    org$pandalanguage$pandac$FieldDecl* $tmp491;
    int $tmp375;
    {
        memset(&doccomment376, 0, sizeof(doccomment376));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp377 = doccomment376;
                $tmp378 = NULL;
                doccomment376 = $tmp378;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp378));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
            }
        }
        }
        else {
        {
            int $tmp381;
            {
                $tmp383 = p_rawDoccomment;
                $match$131_13382 = $tmp383;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp383));
                panda$core$Bit $tmp384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_13382->$rawValue, ((panda$core$Int64) { 37 }));
                if ($tmp384.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp386 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_13382->$data + 0));
                    position385 = *$tmp386;
                    panda$core$String** $tmp388 = ((panda$core$String**) ((char*) $match$131_13382->$data + 16));
                    text387 = *$tmp388;
                    {
                        $tmp389 = doccomment376;
                        $tmp390 = text387;
                        doccomment376 = $tmp390;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp390));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp389));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp381 = -1;
            goto $l379;
            $l379:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp383));
            switch ($tmp381) {
                case -1: goto $l391;
            }
            $l391:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp395 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp394 = $tmp395;
        $tmp393 = $tmp394;
        annotations392 = $tmp393;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp393));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp394));
        memset(&fieldKind396, 0, sizeof(fieldKind396));
        int $tmp399;
        {
            $tmp401 = p_varDecl;
            $match$140_9400 = $tmp401;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp401));
            panda$core$Bit $tmp402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$140_9400->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp402.value) {
            {
                org$pandalanguage$pandac$Variable$Kind* $tmp404 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$140_9400->$data + 16));
                kind403 = *$tmp404;
                panda$collections$ImmutableArray** $tmp406 = ((panda$collections$ImmutableArray**) ((char*) $match$140_9400->$data + 24));
                decls405 = *$tmp406;
                {
                    $match$142_17407 = kind403;
                    panda$core$Bit $tmp408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$142_17407.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp408.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp409, ((panda$core$Int64) { 0 }));
                        fieldKind396 = $tmp409;
                    }
                    }
                    else {
                    panda$core$Bit $tmp410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$142_17407.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp410.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp411, ((panda$core$Int64) { 1 }));
                        fieldKind396 = $tmp411;
                    }
                    }
                    else {
                    panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$142_17407.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp412.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp413, ((panda$core$Int64) { 2 }));
                        fieldKind396 = $tmp413;
                        panda$core$Int64 $tmp414 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                        panda$core$Int64 $tmp415 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations392->flags, $tmp414);
                        annotations392->flags = $tmp415;
                    }
                    }
                    else {
                    panda$core$Bit $tmp416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$142_17407.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp416.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp417, ((panda$core$Int64) { 3 }));
                        fieldKind396 = $tmp417;
                    }
                    }
                    }
                    }
                    }
                }
                {
                    int $tmp420;
                    {
                        ITable* $tmp424 = ((panda$collections$Iterable*) decls405)->$class->itable;
                        while ($tmp424->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp424 = $tmp424->next;
                        }
                        $fn426 $tmp425 = $tmp424->methods[0];
                        panda$collections$Iterator* $tmp427 = $tmp425(((panda$collections$Iterable*) decls405));
                        $tmp423 = $tmp427;
                        $tmp422 = $tmp423;
                        Iter$153$17421 = $tmp422;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp422));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
                        $l428:;
                        ITable* $tmp431 = Iter$153$17421->$class->itable;
                        while ($tmp431->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp431 = $tmp431->next;
                        }
                        $fn433 $tmp432 = $tmp431->methods[0];
                        panda$core$Bit $tmp434 = $tmp432(Iter$153$17421);
                        panda$core$Bit $tmp435 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp434);
                        bool $tmp430 = $tmp435.value;
                        if (!$tmp430) goto $l429;
                        {
                            int $tmp438;
                            {
                                ITable* $tmp442 = Iter$153$17421->$class->itable;
                                while ($tmp442->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp442 = $tmp442->next;
                                }
                                $fn444 $tmp443 = $tmp442->methods[1];
                                panda$core$Object* $tmp445 = $tmp443(Iter$153$17421);
                                $tmp441 = $tmp445;
                                $tmp440 = ((org$pandalanguage$pandac$ASTNode*) $tmp441);
                                decl439 = $tmp440;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp440));
                                panda$core$Panda$unref$panda$core$Object($tmp441);
                                int $tmp448;
                                {
                                    $tmp450 = decl439;
                                    $match$154_21449 = $tmp450;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp450));
                                    panda$core$Bit $tmp451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_21449->$rawValue, ((panda$core$Int64) { 13 }));
                                    if ($tmp451.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp453 = ((org$pandalanguage$pandac$Position*) ((char*) $match$154_21449->$data + 0));
                                        declPosition452 = *$tmp453;
                                        org$pandalanguage$pandac$ASTNode** $tmp455 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_21449->$data + 16));
                                        target454 = *$tmp455;
                                        org$pandalanguage$pandac$ASTNode** $tmp457 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_21449->$data + 24));
                                        value456 = *$tmp457;
                                        int $tmp460;
                                        {
                                            memset(&name461, 0, sizeof(name461));
                                            memset(&type462, 0, sizeof(type462));
                                            int $tmp465;
                                            {
                                                $tmp467 = target454;
                                                $match$158_29466 = $tmp467;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp467));
                                                panda$core$Bit $tmp468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$158_29466->$rawValue, ((panda$core$Int64) { 20 }));
                                                if ($tmp468.value) {
                                                {
                                                    panda$core$String** $tmp470 = ((panda$core$String**) ((char*) $match$158_29466->$data + 16));
                                                    id469 = *$tmp470;
                                                    {
                                                        $tmp471 = name461;
                                                        $tmp472 = id469;
                                                        name461 = $tmp472;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp472));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp471));
                                                    }
                                                    {
                                                        $tmp473 = type462;
                                                        org$pandalanguage$pandac$Type* $tmp476 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                        $tmp475 = $tmp476;
                                                        $tmp474 = $tmp475;
                                                        type462 = $tmp474;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp474));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp475));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp473));
                                                    }
                                                }
                                                }
                                                else {
                                                panda$core$Bit $tmp477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$158_29466->$rawValue, ((panda$core$Int64) { 41 }));
                                                if ($tmp477.value) {
                                                {
                                                    panda$core$String** $tmp479 = ((panda$core$String**) ((char*) $match$158_29466->$data + 16));
                                                    id478 = *$tmp479;
                                                    org$pandalanguage$pandac$ASTNode** $tmp481 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$158_29466->$data + 24));
                                                    idType480 = *$tmp481;
                                                    {
                                                        $tmp482 = name461;
                                                        $tmp483 = id478;
                                                        name461 = $tmp483;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp483));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
                                                    }
                                                    {
                                                        $tmp484 = type462;
                                                        org$pandalanguage$pandac$Type* $tmp487 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType480);
                                                        $tmp486 = $tmp487;
                                                        $tmp485 = $tmp486;
                                                        type462 = $tmp485;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp485));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp486));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp484));
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
                                            $tmp465 = -1;
                                            goto $l463;
                                            $l463:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp467));
                                            switch ($tmp465) {
                                                case -1: goto $l488;
                                            }
                                            $l488:;
                                            org$pandalanguage$pandac$FieldDecl* $tmp492 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp492, p_owner, declPosition452, doccomment376, annotations392, fieldKind396, name461, type462, value456);
                                            $tmp491 = $tmp492;
                                            $tmp490 = $tmp491;
                                            field489 = $tmp490;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp490));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp491));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field489));
                                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field489));
                                        }
                                        $tmp460 = -1;
                                        goto $l458;
                                        $l458:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name461));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type462));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field489));
                                        field489 = NULL;
                                        switch ($tmp460) {
                                            case -1: goto $l493;
                                        }
                                        $l493:;
                                    }
                                    }
                                    else {
                                    {
                                        PANDA_ASSERT(((panda$core$Bit) { false }).value);
                                    }
                                    }
                                }
                                $tmp448 = -1;
                                goto $l446;
                                $l446:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp450));
                                switch ($tmp448) {
                                    case -1: goto $l494;
                                }
                                $l494:;
                            }
                            $tmp438 = -1;
                            goto $l436;
                            $l436:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl439));
                            decl439 = NULL;
                            switch ($tmp438) {
                                case -1: goto $l495;
                            }
                            $l495:;
                        }
                        goto $l428;
                        $l429:;
                    }
                    $tmp420 = -1;
                    goto $l418;
                    $l418:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$153$17421));
                    Iter$153$17421 = NULL;
                    switch ($tmp420) {
                        case -1: goto $l496;
                    }
                    $l496:;
                }
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
        $tmp399 = -1;
        goto $l397;
        $l397:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp401));
        switch ($tmp399) {
            case -1: goto $l497;
        }
        $l497:;
    }
    $tmp375 = -1;
    goto $l373;
    $l373:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment376));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations392));
    annotations392 = NULL;
    switch ($tmp375) {
        case -1: goto $l498;
    }
    $l498:;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$183_9502 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp503;
    org$pandalanguage$pandac$ASTNode* test505 = NULL;
    panda$core$Int64 $returnValue507;
    org$pandalanguage$pandac$ASTNode* left512 = NULL;
    org$pandalanguage$pandac$ASTNode* right514 = NULL;
    panda$collections$ImmutableArray* statements526 = NULL;
    panda$core$Int64 result528;
    panda$collections$Iterator* Iter$192$17532 = NULL;
    panda$collections$Iterator* $tmp533;
    panda$collections$Iterator* $tmp534;
    org$pandalanguage$pandac$ASTNode* s550 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp551;
    panda$core$Object* $tmp552;
    org$pandalanguage$pandac$ASTNode* target567 = NULL;
    panda$collections$ImmutableArray* args569 = NULL;
    panda$core$Int64 result571;
    panda$collections$Iterator* Iter$200$17576 = NULL;
    panda$collections$Iterator* $tmp577;
    panda$collections$Iterator* $tmp578;
    org$pandalanguage$pandac$ASTNode* a594 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp595;
    panda$core$Object* $tmp596;
    org$pandalanguage$pandac$ASTNode* base608 = NULL;
    org$pandalanguage$pandac$ASTNode* value617 = NULL;
    panda$collections$ImmutableArray* statements625 = NULL;
    org$pandalanguage$pandac$ASTNode* test627 = NULL;
    panda$core$Int64 result629;
    panda$collections$Iterator* Iter$215$17634 = NULL;
    panda$collections$Iterator* $tmp635;
    panda$collections$Iterator* $tmp636;
    org$pandalanguage$pandac$ASTNode* s652 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp653;
    panda$core$Object* $tmp654;
    org$pandalanguage$pandac$ASTNode* base666 = NULL;
    org$pandalanguage$pandac$ASTNode* list672 = NULL;
    panda$collections$ImmutableArray* statements674 = NULL;
    panda$core$Int64 result676;
    panda$collections$Iterator* Iter$223$17681 = NULL;
    panda$collections$Iterator* $tmp682;
    panda$collections$Iterator* $tmp683;
    org$pandalanguage$pandac$ASTNode* s699 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp700;
    panda$core$Object* $tmp701;
    org$pandalanguage$pandac$ASTNode* test719 = NULL;
    panda$collections$ImmutableArray* ifTrue721 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse723 = NULL;
    panda$core$Int64 result725;
    panda$collections$Iterator* Iter$233$17730 = NULL;
    panda$collections$Iterator* $tmp731;
    panda$collections$Iterator* $tmp732;
    org$pandalanguage$pandac$ASTNode* s748 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp749;
    panda$core$Object* $tmp750;
    panda$collections$ImmutableArray* statements767 = NULL;
    panda$core$Int64 result769;
    panda$collections$Iterator* Iter$244$17773 = NULL;
    panda$collections$Iterator* $tmp774;
    panda$collections$Iterator* $tmp775;
    org$pandalanguage$pandac$ASTNode* s791 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp792;
    panda$core$Object* $tmp793;
    org$pandalanguage$pandac$ASTNode* value805 = NULL;
    panda$collections$ImmutableArray* whens807 = NULL;
    panda$collections$ImmutableArray* other809 = NULL;
    panda$core$Int64 result811;
    panda$collections$Iterator* Iter$250$17816 = NULL;
    panda$collections$Iterator* $tmp817;
    panda$collections$Iterator* $tmp818;
    org$pandalanguage$pandac$ASTNode* w834 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp835;
    panda$core$Object* $tmp836;
    panda$collections$Iterator* Iter$254$21848 = NULL;
    panda$collections$Iterator* $tmp849;
    panda$collections$Iterator* $tmp850;
    org$pandalanguage$pandac$ASTNode* s866 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp867;
    panda$core$Object* $tmp868;
    org$pandalanguage$pandac$ASTNode* base886 = NULL;
    org$pandalanguage$pandac$ASTNode* value899 = NULL;
    panda$collections$ImmutableArray* decls919 = NULL;
    panda$core$Int64 result921;
    panda$collections$Iterator* Iter$284$17925 = NULL;
    panda$collections$Iterator* $tmp926;
    panda$collections$Iterator* $tmp927;
    org$pandalanguage$pandac$ASTNode* decl943 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp944;
    panda$core$Object* $tmp945;
    panda$collections$ImmutableArray* tests957 = NULL;
    panda$collections$ImmutableArray* statements959 = NULL;
    panda$core$Int64 result961;
    panda$collections$Iterator* Iter$290$17965 = NULL;
    panda$collections$Iterator* $tmp966;
    panda$collections$Iterator* $tmp967;
    org$pandalanguage$pandac$ASTNode* test983 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp984;
    panda$core$Object* $tmp985;
    panda$collections$Iterator* Iter$293$17997 = NULL;
    panda$collections$Iterator* $tmp998;
    panda$collections$Iterator* $tmp999;
    org$pandalanguage$pandac$ASTNode* s1015 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1016;
    panda$core$Object* $tmp1017;
    org$pandalanguage$pandac$ASTNode* test1029 = NULL;
    panda$collections$ImmutableArray* statements1031 = NULL;
    panda$core$Int64 result1033;
    panda$collections$Iterator* Iter$299$171038 = NULL;
    panda$collections$Iterator* $tmp1039;
    panda$collections$Iterator* $tmp1040;
    org$pandalanguage$pandac$ASTNode* s1056 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1057;
    panda$core$Object* $tmp1058;
    int $tmp501;
    {
        $tmp503 = p_node;
        $match$183_9502 = $tmp503;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp503));
        panda$core$Bit $tmp504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp504.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp506 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$183_9502->$data + 16));
            test505 = *$tmp506;
            panda$core$Int64 $tmp508 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test505);
            $returnValue507 = $tmp508;
            $tmp501 = 0;
            goto $l499;
            $l509:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp511.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp513 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$183_9502->$data + 16));
            left512 = *$tmp513;
            org$pandalanguage$pandac$ASTNode** $tmp515 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$183_9502->$data + 32));
            right514 = *$tmp515;
            panda$core$Int64 $tmp516 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left512);
            panda$core$Int64 $tmp517 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp516);
            panda$core$Int64 $tmp518 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right514);
            panda$core$Int64 $tmp519 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp517, $tmp518);
            $returnValue507 = $tmp519;
            $tmp501 = 1;
            goto $l499;
            $l520:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp522.value) {
        {
            $returnValue507 = ((panda$core$Int64) { 1 });
            $tmp501 = 2;
            goto $l499;
            $l523:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp525.value) {
        {
            panda$collections$ImmutableArray** $tmp527 = ((panda$collections$ImmutableArray**) ((char*) $match$183_9502->$data + 16));
            statements526 = *$tmp527;
            result528 = ((panda$core$Int64) { 0 });
            {
                int $tmp531;
                {
                    ITable* $tmp535 = ((panda$collections$Iterable*) statements526)->$class->itable;
                    while ($tmp535->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp535 = $tmp535->next;
                    }
                    $fn537 $tmp536 = $tmp535->methods[0];
                    panda$collections$Iterator* $tmp538 = $tmp536(((panda$collections$Iterable*) statements526));
                    $tmp534 = $tmp538;
                    $tmp533 = $tmp534;
                    Iter$192$17532 = $tmp533;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp533));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp534));
                    $l539:;
                    ITable* $tmp542 = Iter$192$17532->$class->itable;
                    while ($tmp542->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp542 = $tmp542->next;
                    }
                    $fn544 $tmp543 = $tmp542->methods[0];
                    panda$core$Bit $tmp545 = $tmp543(Iter$192$17532);
                    panda$core$Bit $tmp546 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp545);
                    bool $tmp541 = $tmp546.value;
                    if (!$tmp541) goto $l540;
                    {
                        int $tmp549;
                        {
                            ITable* $tmp553 = Iter$192$17532->$class->itable;
                            while ($tmp553->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp553 = $tmp553->next;
                            }
                            $fn555 $tmp554 = $tmp553->methods[1];
                            panda$core$Object* $tmp556 = $tmp554(Iter$192$17532);
                            $tmp552 = $tmp556;
                            $tmp551 = ((org$pandalanguage$pandac$ASTNode*) $tmp552);
                            s550 = $tmp551;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp551));
                            panda$core$Panda$unref$panda$core$Object($tmp552);
                            panda$core$Int64 $tmp557 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s550);
                            panda$core$Int64 $tmp558 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result528, $tmp557);
                            result528 = $tmp558;
                        }
                        $tmp549 = -1;
                        goto $l547;
                        $l547:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s550));
                        s550 = NULL;
                        switch ($tmp549) {
                            case -1: goto $l559;
                        }
                        $l559:;
                    }
                    goto $l539;
                    $l540:;
                }
                $tmp531 = -1;
                goto $l529;
                $l529:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$192$17532));
                Iter$192$17532 = NULL;
                switch ($tmp531) {
                    case -1: goto $l560;
                }
                $l560:;
            }
            $returnValue507 = result528;
            $tmp501 = 3;
            goto $l499;
            $l561:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp563.value) {
        {
            $returnValue507 = ((panda$core$Int64) { 1 });
            $tmp501 = 4;
            goto $l499;
            $l564:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp566.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp568 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$183_9502->$data + 16));
            target567 = *$tmp568;
            panda$collections$ImmutableArray** $tmp570 = ((panda$collections$ImmutableArray**) ((char*) $match$183_9502->$data + 24));
            args569 = *$tmp570;
            panda$core$Int64 $tmp572 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target567);
            result571 = $tmp572;
            {
                int $tmp575;
                {
                    ITable* $tmp579 = ((panda$collections$Iterable*) args569)->$class->itable;
                    while ($tmp579->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp579 = $tmp579->next;
                    }
                    $fn581 $tmp580 = $tmp579->methods[0];
                    panda$collections$Iterator* $tmp582 = $tmp580(((panda$collections$Iterable*) args569));
                    $tmp578 = $tmp582;
                    $tmp577 = $tmp578;
                    Iter$200$17576 = $tmp577;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp577));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp578));
                    $l583:;
                    ITable* $tmp586 = Iter$200$17576->$class->itable;
                    while ($tmp586->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp586 = $tmp586->next;
                    }
                    $fn588 $tmp587 = $tmp586->methods[0];
                    panda$core$Bit $tmp589 = $tmp587(Iter$200$17576);
                    panda$core$Bit $tmp590 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp589);
                    bool $tmp585 = $tmp590.value;
                    if (!$tmp585) goto $l584;
                    {
                        int $tmp593;
                        {
                            ITable* $tmp597 = Iter$200$17576->$class->itable;
                            while ($tmp597->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp597 = $tmp597->next;
                            }
                            $fn599 $tmp598 = $tmp597->methods[1];
                            panda$core$Object* $tmp600 = $tmp598(Iter$200$17576);
                            $tmp596 = $tmp600;
                            $tmp595 = ((org$pandalanguage$pandac$ASTNode*) $tmp596);
                            a594 = $tmp595;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp595));
                            panda$core$Panda$unref$panda$core$Object($tmp596);
                            panda$core$Int64 $tmp601 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a594);
                            panda$core$Int64 $tmp602 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result571, $tmp601);
                            result571 = $tmp602;
                        }
                        $tmp593 = -1;
                        goto $l591;
                        $l591:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a594));
                        a594 = NULL;
                        switch ($tmp593) {
                            case -1: goto $l603;
                        }
                        $l603:;
                    }
                    goto $l583;
                    $l584:;
                }
                $tmp575 = -1;
                goto $l573;
                $l573:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$200$17576));
                Iter$200$17576 = NULL;
                switch ($tmp575) {
                    case -1: goto $l604;
                }
                $l604:;
            }
            $returnValue507 = result571;
            $tmp501 = 5;
            goto $l499;
            $l605:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp607.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp609 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$183_9502->$data + 16));
            base608 = *$tmp609;
            panda$core$Int64 $tmp610 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base608);
            $returnValue507 = $tmp610;
            $tmp501 = 6;
            goto $l499;
            $l611:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp613.value) {
        {
            $returnValue507 = ((panda$core$Int64) { 1 });
            $tmp501 = 7;
            goto $l499;
            $l614:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp616.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp618 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$183_9502->$data + 24));
            value617 = *$tmp618;
            if (((panda$core$Bit) { value617 == NULL }).value) {
            {
                $returnValue507 = ((panda$core$Int64) { 0 });
                $tmp501 = 8;
                goto $l499;
                $l619:;
                return $returnValue507;
            }
            }
            panda$core$Int64 $tmp621 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value617);
            $returnValue507 = $tmp621;
            $tmp501 = 9;
            goto $l499;
            $l622:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp624.value) {
        {
            panda$collections$ImmutableArray** $tmp626 = ((panda$collections$ImmutableArray**) ((char*) $match$183_9502->$data + 24));
            statements625 = *$tmp626;
            org$pandalanguage$pandac$ASTNode** $tmp628 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$183_9502->$data + 32));
            test627 = *$tmp628;
            panda$core$Int64 $tmp630 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test627);
            result629 = $tmp630;
            {
                int $tmp633;
                {
                    ITable* $tmp637 = ((panda$collections$Iterable*) statements625)->$class->itable;
                    while ($tmp637->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp637 = $tmp637->next;
                    }
                    $fn639 $tmp638 = $tmp637->methods[0];
                    panda$collections$Iterator* $tmp640 = $tmp638(((panda$collections$Iterable*) statements625));
                    $tmp636 = $tmp640;
                    $tmp635 = $tmp636;
                    Iter$215$17634 = $tmp635;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp635));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp636));
                    $l641:;
                    ITable* $tmp644 = Iter$215$17634->$class->itable;
                    while ($tmp644->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp644 = $tmp644->next;
                    }
                    $fn646 $tmp645 = $tmp644->methods[0];
                    panda$core$Bit $tmp647 = $tmp645(Iter$215$17634);
                    panda$core$Bit $tmp648 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp647);
                    bool $tmp643 = $tmp648.value;
                    if (!$tmp643) goto $l642;
                    {
                        int $tmp651;
                        {
                            ITable* $tmp655 = Iter$215$17634->$class->itable;
                            while ($tmp655->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp655 = $tmp655->next;
                            }
                            $fn657 $tmp656 = $tmp655->methods[1];
                            panda$core$Object* $tmp658 = $tmp656(Iter$215$17634);
                            $tmp654 = $tmp658;
                            $tmp653 = ((org$pandalanguage$pandac$ASTNode*) $tmp654);
                            s652 = $tmp653;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp653));
                            panda$core$Panda$unref$panda$core$Object($tmp654);
                            panda$core$Int64 $tmp659 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s652);
                            panda$core$Int64 $tmp660 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result629, $tmp659);
                            result629 = $tmp660;
                        }
                        $tmp651 = -1;
                        goto $l649;
                        $l649:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s652));
                        s652 = NULL;
                        switch ($tmp651) {
                            case -1: goto $l661;
                        }
                        $l661:;
                    }
                    goto $l641;
                    $l642:;
                }
                $tmp633 = -1;
                goto $l631;
                $l631:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$215$17634));
                Iter$215$17634 = NULL;
                switch ($tmp633) {
                    case -1: goto $l662;
                }
                $l662:;
            }
            $returnValue507 = result629;
            $tmp501 = 10;
            goto $l499;
            $l663:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp665.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp667 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$183_9502->$data + 16));
            base666 = *$tmp667;
            panda$core$Int64 $tmp668 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base666);
            $returnValue507 = $tmp668;
            $tmp501 = 11;
            goto $l499;
            $l669:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp671.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp673 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$183_9502->$data + 32));
            list672 = *$tmp673;
            panda$collections$ImmutableArray** $tmp675 = ((panda$collections$ImmutableArray**) ((char*) $match$183_9502->$data + 40));
            statements674 = *$tmp675;
            panda$core$Int64 $tmp677 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list672);
            result676 = $tmp677;
            {
                int $tmp680;
                {
                    ITable* $tmp684 = ((panda$collections$Iterable*) statements674)->$class->itable;
                    while ($tmp684->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp684 = $tmp684->next;
                    }
                    $fn686 $tmp685 = $tmp684->methods[0];
                    panda$collections$Iterator* $tmp687 = $tmp685(((panda$collections$Iterable*) statements674));
                    $tmp683 = $tmp687;
                    $tmp682 = $tmp683;
                    Iter$223$17681 = $tmp682;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp682));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp683));
                    $l688:;
                    ITable* $tmp691 = Iter$223$17681->$class->itable;
                    while ($tmp691->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp691 = $tmp691->next;
                    }
                    $fn693 $tmp692 = $tmp691->methods[0];
                    panda$core$Bit $tmp694 = $tmp692(Iter$223$17681);
                    panda$core$Bit $tmp695 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp694);
                    bool $tmp690 = $tmp695.value;
                    if (!$tmp690) goto $l689;
                    {
                        int $tmp698;
                        {
                            ITable* $tmp702 = Iter$223$17681->$class->itable;
                            while ($tmp702->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp702 = $tmp702->next;
                            }
                            $fn704 $tmp703 = $tmp702->methods[1];
                            panda$core$Object* $tmp705 = $tmp703(Iter$223$17681);
                            $tmp701 = $tmp705;
                            $tmp700 = ((org$pandalanguage$pandac$ASTNode*) $tmp701);
                            s699 = $tmp700;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp700));
                            panda$core$Panda$unref$panda$core$Object($tmp701);
                            panda$core$Int64 $tmp706 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s699);
                            panda$core$Int64 $tmp707 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result676, $tmp706);
                            result676 = $tmp707;
                        }
                        $tmp698 = -1;
                        goto $l696;
                        $l696:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s699));
                        s699 = NULL;
                        switch ($tmp698) {
                            case -1: goto $l708;
                        }
                        $l708:;
                    }
                    goto $l688;
                    $l689:;
                }
                $tmp680 = -1;
                goto $l678;
                $l678:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$223$17681));
                Iter$223$17681 = NULL;
                switch ($tmp680) {
                    case -1: goto $l709;
                }
                $l709:;
            }
            $returnValue507 = result676;
            $tmp501 = 12;
            goto $l499;
            $l710:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp712.value) {
        {
            $returnValue507 = ((panda$core$Int64) { 0 });
            $tmp501 = 13;
            goto $l499;
            $l713:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp715.value) {
        {
            $returnValue507 = ((panda$core$Int64) { 1 });
            $tmp501 = 14;
            goto $l499;
            $l716:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp718.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp720 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$183_9502->$data + 16));
            test719 = *$tmp720;
            panda$collections$ImmutableArray** $tmp722 = ((panda$collections$ImmutableArray**) ((char*) $match$183_9502->$data + 24));
            ifTrue721 = *$tmp722;
            org$pandalanguage$pandac$ASTNode** $tmp724 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$183_9502->$data + 32));
            ifFalse723 = *$tmp724;
            panda$core$Int64 $tmp726 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test719);
            result725 = $tmp726;
            {
                int $tmp729;
                {
                    ITable* $tmp733 = ((panda$collections$Iterable*) ifTrue721)->$class->itable;
                    while ($tmp733->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp733 = $tmp733->next;
                    }
                    $fn735 $tmp734 = $tmp733->methods[0];
                    panda$collections$Iterator* $tmp736 = $tmp734(((panda$collections$Iterable*) ifTrue721));
                    $tmp732 = $tmp736;
                    $tmp731 = $tmp732;
                    Iter$233$17730 = $tmp731;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp731));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp732));
                    $l737:;
                    ITable* $tmp740 = Iter$233$17730->$class->itable;
                    while ($tmp740->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp740 = $tmp740->next;
                    }
                    $fn742 $tmp741 = $tmp740->methods[0];
                    panda$core$Bit $tmp743 = $tmp741(Iter$233$17730);
                    panda$core$Bit $tmp744 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp743);
                    bool $tmp739 = $tmp744.value;
                    if (!$tmp739) goto $l738;
                    {
                        int $tmp747;
                        {
                            ITable* $tmp751 = Iter$233$17730->$class->itable;
                            while ($tmp751->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp751 = $tmp751->next;
                            }
                            $fn753 $tmp752 = $tmp751->methods[1];
                            panda$core$Object* $tmp754 = $tmp752(Iter$233$17730);
                            $tmp750 = $tmp754;
                            $tmp749 = ((org$pandalanguage$pandac$ASTNode*) $tmp750);
                            s748 = $tmp749;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp749));
                            panda$core$Panda$unref$panda$core$Object($tmp750);
                            panda$core$Int64 $tmp755 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s748);
                            panda$core$Int64 $tmp756 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result725, $tmp755);
                            result725 = $tmp756;
                        }
                        $tmp747 = -1;
                        goto $l745;
                        $l745:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s748));
                        s748 = NULL;
                        switch ($tmp747) {
                            case -1: goto $l757;
                        }
                        $l757:;
                    }
                    goto $l737;
                    $l738:;
                }
                $tmp729 = -1;
                goto $l727;
                $l727:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$233$17730));
                Iter$233$17730 = NULL;
                switch ($tmp729) {
                    case -1: goto $l758;
                }
                $l758:;
            }
            if (((panda$core$Bit) { ifFalse723 != NULL }).value) {
            {
                panda$core$Int64 $tmp759 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse723);
                panda$core$Int64 $tmp760 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result725, $tmp759);
                result725 = $tmp760;
            }
            }
            $returnValue507 = result725;
            $tmp501 = 15;
            goto $l499;
            $l761:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp763.value) {
        {
            $returnValue507 = ((panda$core$Int64) { 1 });
            $tmp501 = 16;
            goto $l499;
            $l764:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp766.value) {
        {
            panda$collections$ImmutableArray** $tmp768 = ((panda$collections$ImmutableArray**) ((char*) $match$183_9502->$data + 24));
            statements767 = *$tmp768;
            result769 = ((panda$core$Int64) { 0 });
            {
                int $tmp772;
                {
                    ITable* $tmp776 = ((panda$collections$Iterable*) statements767)->$class->itable;
                    while ($tmp776->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp776 = $tmp776->next;
                    }
                    $fn778 $tmp777 = $tmp776->methods[0];
                    panda$collections$Iterator* $tmp779 = $tmp777(((panda$collections$Iterable*) statements767));
                    $tmp775 = $tmp779;
                    $tmp774 = $tmp775;
                    Iter$244$17773 = $tmp774;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp774));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp775));
                    $l780:;
                    ITable* $tmp783 = Iter$244$17773->$class->itable;
                    while ($tmp783->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp783 = $tmp783->next;
                    }
                    $fn785 $tmp784 = $tmp783->methods[0];
                    panda$core$Bit $tmp786 = $tmp784(Iter$244$17773);
                    panda$core$Bit $tmp787 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp786);
                    bool $tmp782 = $tmp787.value;
                    if (!$tmp782) goto $l781;
                    {
                        int $tmp790;
                        {
                            ITable* $tmp794 = Iter$244$17773->$class->itable;
                            while ($tmp794->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp794 = $tmp794->next;
                            }
                            $fn796 $tmp795 = $tmp794->methods[1];
                            panda$core$Object* $tmp797 = $tmp795(Iter$244$17773);
                            $tmp793 = $tmp797;
                            $tmp792 = ((org$pandalanguage$pandac$ASTNode*) $tmp793);
                            s791 = $tmp792;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp792));
                            panda$core$Panda$unref$panda$core$Object($tmp793);
                            panda$core$Int64 $tmp798 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s791);
                            panda$core$Int64 $tmp799 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result769, $tmp798);
                            result769 = $tmp799;
                        }
                        $tmp790 = -1;
                        goto $l788;
                        $l788:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s791));
                        s791 = NULL;
                        switch ($tmp790) {
                            case -1: goto $l800;
                        }
                        $l800:;
                    }
                    goto $l780;
                    $l781:;
                }
                $tmp772 = -1;
                goto $l770;
                $l770:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$244$17773));
                Iter$244$17773 = NULL;
                switch ($tmp772) {
                    case -1: goto $l801;
                }
                $l801:;
            }
            $returnValue507 = result769;
            $tmp501 = 17;
            goto $l499;
            $l802:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp804.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp806 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$183_9502->$data + 16));
            value805 = *$tmp806;
            panda$collections$ImmutableArray** $tmp808 = ((panda$collections$ImmutableArray**) ((char*) $match$183_9502->$data + 24));
            whens807 = *$tmp808;
            panda$collections$ImmutableArray** $tmp810 = ((panda$collections$ImmutableArray**) ((char*) $match$183_9502->$data + 32));
            other809 = *$tmp810;
            panda$core$Int64 $tmp812 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value805);
            result811 = $tmp812;
            {
                int $tmp815;
                {
                    ITable* $tmp819 = ((panda$collections$Iterable*) whens807)->$class->itable;
                    while ($tmp819->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp819 = $tmp819->next;
                    }
                    $fn821 $tmp820 = $tmp819->methods[0];
                    panda$collections$Iterator* $tmp822 = $tmp820(((panda$collections$Iterable*) whens807));
                    $tmp818 = $tmp822;
                    $tmp817 = $tmp818;
                    Iter$250$17816 = $tmp817;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp817));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp818));
                    $l823:;
                    ITable* $tmp826 = Iter$250$17816->$class->itable;
                    while ($tmp826->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp826 = $tmp826->next;
                    }
                    $fn828 $tmp827 = $tmp826->methods[0];
                    panda$core$Bit $tmp829 = $tmp827(Iter$250$17816);
                    panda$core$Bit $tmp830 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp829);
                    bool $tmp825 = $tmp830.value;
                    if (!$tmp825) goto $l824;
                    {
                        int $tmp833;
                        {
                            ITable* $tmp837 = Iter$250$17816->$class->itable;
                            while ($tmp837->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp837 = $tmp837->next;
                            }
                            $fn839 $tmp838 = $tmp837->methods[1];
                            panda$core$Object* $tmp840 = $tmp838(Iter$250$17816);
                            $tmp836 = $tmp840;
                            $tmp835 = ((org$pandalanguage$pandac$ASTNode*) $tmp836);
                            w834 = $tmp835;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp835));
                            panda$core$Panda$unref$panda$core$Object($tmp836);
                            panda$core$Int64 $tmp841 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w834);
                            panda$core$Int64 $tmp842 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result811, $tmp841);
                            result811 = $tmp842;
                        }
                        $tmp833 = -1;
                        goto $l831;
                        $l831:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w834));
                        w834 = NULL;
                        switch ($tmp833) {
                            case -1: goto $l843;
                        }
                        $l843:;
                    }
                    goto $l823;
                    $l824:;
                }
                $tmp815 = -1;
                goto $l813;
                $l813:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$250$17816));
                Iter$250$17816 = NULL;
                switch ($tmp815) {
                    case -1: goto $l844;
                }
                $l844:;
            }
            if (((panda$core$Bit) { other809 != NULL }).value) {
            {
                {
                    int $tmp847;
                    {
                        ITable* $tmp851 = ((panda$collections$Iterable*) other809)->$class->itable;
                        while ($tmp851->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp851 = $tmp851->next;
                        }
                        $fn853 $tmp852 = $tmp851->methods[0];
                        panda$collections$Iterator* $tmp854 = $tmp852(((panda$collections$Iterable*) other809));
                        $tmp850 = $tmp854;
                        $tmp849 = $tmp850;
                        Iter$254$21848 = $tmp849;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp849));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp850));
                        $l855:;
                        ITable* $tmp858 = Iter$254$21848->$class->itable;
                        while ($tmp858->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp858 = $tmp858->next;
                        }
                        $fn860 $tmp859 = $tmp858->methods[0];
                        panda$core$Bit $tmp861 = $tmp859(Iter$254$21848);
                        panda$core$Bit $tmp862 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp861);
                        bool $tmp857 = $tmp862.value;
                        if (!$tmp857) goto $l856;
                        {
                            int $tmp865;
                            {
                                ITable* $tmp869 = Iter$254$21848->$class->itable;
                                while ($tmp869->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp869 = $tmp869->next;
                                }
                                $fn871 $tmp870 = $tmp869->methods[1];
                                panda$core$Object* $tmp872 = $tmp870(Iter$254$21848);
                                $tmp868 = $tmp872;
                                $tmp867 = ((org$pandalanguage$pandac$ASTNode*) $tmp868);
                                s866 = $tmp867;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp867));
                                panda$core$Panda$unref$panda$core$Object($tmp868);
                                panda$core$Int64 $tmp873 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s866);
                                panda$core$Int64 $tmp874 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result811, $tmp873);
                                result811 = $tmp874;
                            }
                            $tmp865 = -1;
                            goto $l863;
                            $l863:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s866));
                            s866 = NULL;
                            switch ($tmp865) {
                                case -1: goto $l875;
                            }
                            $l875:;
                        }
                        goto $l855;
                        $l856:;
                    }
                    $tmp847 = -1;
                    goto $l845;
                    $l845:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$254$21848));
                    Iter$254$21848 = NULL;
                    switch ($tmp847) {
                        case -1: goto $l876;
                    }
                    $l876:;
                }
            }
            }
            $returnValue507 = result811;
            $tmp501 = 18;
            goto $l499;
            $l877:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp879.value) {
        {
            $returnValue507 = ((panda$core$Int64) { 1 });
            $tmp501 = 19;
            goto $l499;
            $l880:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp882.value) {
        {
            $returnValue507 = ((panda$core$Int64) { 0 });
            $tmp501 = 20;
            goto $l499;
            $l883:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp885.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp887 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$183_9502->$data + 24));
            base886 = *$tmp887;
            panda$core$Int64 $tmp888 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base886);
            panda$core$Int64 $tmp889 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp888);
            $returnValue507 = $tmp889;
            $tmp501 = 21;
            goto $l499;
            $l890:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp892.value) {
        {
            $returnValue507 = ((panda$core$Int64) { 1 });
            $tmp501 = 22;
            goto $l499;
            $l893:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp895.value) {
        {
            $returnValue507 = ((panda$core$Int64) { 1 });
            $tmp501 = 23;
            goto $l499;
            $l896:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp898.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp900 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$183_9502->$data + 16));
            value899 = *$tmp900;
            if (((panda$core$Bit) { value899 == NULL }).value) {
            {
                $returnValue507 = ((panda$core$Int64) { 0 });
                $tmp501 = 24;
                goto $l499;
                $l901:;
                return $returnValue507;
            }
            }
            panda$core$Int64 $tmp903 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value899);
            $returnValue507 = $tmp903;
            $tmp501 = 25;
            goto $l499;
            $l904:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp906.value) {
        {
            $returnValue507 = ((panda$core$Int64) { 1 });
            $tmp501 = 26;
            goto $l499;
            $l907:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp909.value) {
        {
            $returnValue507 = ((panda$core$Int64) { 1 });
            $tmp501 = 27;
            goto $l499;
            $l910:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp912.value) {
        {
            $returnValue507 = ((panda$core$Int64) { 1 });
            $tmp501 = 28;
            goto $l499;
            $l913:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp915.value) {
        {
            $returnValue507 = ((panda$core$Int64) { 0 });
            $tmp501 = 29;
            goto $l499;
            $l916:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp918.value) {
        {
            panda$collections$ImmutableArray** $tmp920 = ((panda$collections$ImmutableArray**) ((char*) $match$183_9502->$data + 24));
            decls919 = *$tmp920;
            result921 = ((panda$core$Int64) { 0 });
            {
                int $tmp924;
                {
                    ITable* $tmp928 = ((panda$collections$Iterable*) decls919)->$class->itable;
                    while ($tmp928->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp928 = $tmp928->next;
                    }
                    $fn930 $tmp929 = $tmp928->methods[0];
                    panda$collections$Iterator* $tmp931 = $tmp929(((panda$collections$Iterable*) decls919));
                    $tmp927 = $tmp931;
                    $tmp926 = $tmp927;
                    Iter$284$17925 = $tmp926;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp926));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp927));
                    $l932:;
                    ITable* $tmp935 = Iter$284$17925->$class->itable;
                    while ($tmp935->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp935 = $tmp935->next;
                    }
                    $fn937 $tmp936 = $tmp935->methods[0];
                    panda$core$Bit $tmp938 = $tmp936(Iter$284$17925);
                    panda$core$Bit $tmp939 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp938);
                    bool $tmp934 = $tmp939.value;
                    if (!$tmp934) goto $l933;
                    {
                        int $tmp942;
                        {
                            ITable* $tmp946 = Iter$284$17925->$class->itable;
                            while ($tmp946->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp946 = $tmp946->next;
                            }
                            $fn948 $tmp947 = $tmp946->methods[1];
                            panda$core$Object* $tmp949 = $tmp947(Iter$284$17925);
                            $tmp945 = $tmp949;
                            $tmp944 = ((org$pandalanguage$pandac$ASTNode*) $tmp945);
                            decl943 = $tmp944;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp944));
                            panda$core$Panda$unref$panda$core$Object($tmp945);
                            panda$core$Int64 $tmp950 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl943);
                            panda$core$Int64 $tmp951 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result921, $tmp950);
                            result921 = $tmp951;
                        }
                        $tmp942 = -1;
                        goto $l940;
                        $l940:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl943));
                        decl943 = NULL;
                        switch ($tmp942) {
                            case -1: goto $l952;
                        }
                        $l952:;
                    }
                    goto $l932;
                    $l933:;
                }
                $tmp924 = -1;
                goto $l922;
                $l922:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$284$17925));
                Iter$284$17925 = NULL;
                switch ($tmp924) {
                    case -1: goto $l953;
                }
                $l953:;
            }
            $returnValue507 = result921;
            $tmp501 = 30;
            goto $l499;
            $l954:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp956.value) {
        {
            panda$collections$ImmutableArray** $tmp958 = ((panda$collections$ImmutableArray**) ((char*) $match$183_9502->$data + 16));
            tests957 = *$tmp958;
            panda$collections$ImmutableArray** $tmp960 = ((panda$collections$ImmutableArray**) ((char*) $match$183_9502->$data + 24));
            statements959 = *$tmp960;
            result961 = ((panda$core$Int64) { 0 });
            {
                int $tmp964;
                {
                    ITable* $tmp968 = ((panda$collections$Iterable*) tests957)->$class->itable;
                    while ($tmp968->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp968 = $tmp968->next;
                    }
                    $fn970 $tmp969 = $tmp968->methods[0];
                    panda$collections$Iterator* $tmp971 = $tmp969(((panda$collections$Iterable*) tests957));
                    $tmp967 = $tmp971;
                    $tmp966 = $tmp967;
                    Iter$290$17965 = $tmp966;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp966));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp967));
                    $l972:;
                    ITable* $tmp975 = Iter$290$17965->$class->itable;
                    while ($tmp975->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp975 = $tmp975->next;
                    }
                    $fn977 $tmp976 = $tmp975->methods[0];
                    panda$core$Bit $tmp978 = $tmp976(Iter$290$17965);
                    panda$core$Bit $tmp979 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp978);
                    bool $tmp974 = $tmp979.value;
                    if (!$tmp974) goto $l973;
                    {
                        int $tmp982;
                        {
                            ITable* $tmp986 = Iter$290$17965->$class->itable;
                            while ($tmp986->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp986 = $tmp986->next;
                            }
                            $fn988 $tmp987 = $tmp986->methods[1];
                            panda$core$Object* $tmp989 = $tmp987(Iter$290$17965);
                            $tmp985 = $tmp989;
                            $tmp984 = ((org$pandalanguage$pandac$ASTNode*) $tmp985);
                            test983 = $tmp984;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp984));
                            panda$core$Panda$unref$panda$core$Object($tmp985);
                            panda$core$Int64 $tmp990 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test983);
                            panda$core$Int64 $tmp991 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result961, $tmp990);
                            result961 = $tmp991;
                        }
                        $tmp982 = -1;
                        goto $l980;
                        $l980:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test983));
                        test983 = NULL;
                        switch ($tmp982) {
                            case -1: goto $l992;
                        }
                        $l992:;
                    }
                    goto $l972;
                    $l973:;
                }
                $tmp964 = -1;
                goto $l962;
                $l962:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$290$17965));
                Iter$290$17965 = NULL;
                switch ($tmp964) {
                    case -1: goto $l993;
                }
                $l993:;
            }
            {
                int $tmp996;
                {
                    ITable* $tmp1000 = ((panda$collections$Iterable*) statements959)->$class->itable;
                    while ($tmp1000->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1000 = $tmp1000->next;
                    }
                    $fn1002 $tmp1001 = $tmp1000->methods[0];
                    panda$collections$Iterator* $tmp1003 = $tmp1001(((panda$collections$Iterable*) statements959));
                    $tmp999 = $tmp1003;
                    $tmp998 = $tmp999;
                    Iter$293$17997 = $tmp998;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp998));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp999));
                    $l1004:;
                    ITable* $tmp1007 = Iter$293$17997->$class->itable;
                    while ($tmp1007->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1007 = $tmp1007->next;
                    }
                    $fn1009 $tmp1008 = $tmp1007->methods[0];
                    panda$core$Bit $tmp1010 = $tmp1008(Iter$293$17997);
                    panda$core$Bit $tmp1011 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1010);
                    bool $tmp1006 = $tmp1011.value;
                    if (!$tmp1006) goto $l1005;
                    {
                        int $tmp1014;
                        {
                            ITable* $tmp1018 = Iter$293$17997->$class->itable;
                            while ($tmp1018->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1018 = $tmp1018->next;
                            }
                            $fn1020 $tmp1019 = $tmp1018->methods[1];
                            panda$core$Object* $tmp1021 = $tmp1019(Iter$293$17997);
                            $tmp1017 = $tmp1021;
                            $tmp1016 = ((org$pandalanguage$pandac$ASTNode*) $tmp1017);
                            s1015 = $tmp1016;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1016));
                            panda$core$Panda$unref$panda$core$Object($tmp1017);
                            panda$core$Int64 $tmp1022 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1015);
                            panda$core$Int64 $tmp1023 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result961, $tmp1022);
                            result961 = $tmp1023;
                        }
                        $tmp1014 = -1;
                        goto $l1012;
                        $l1012:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1015));
                        s1015 = NULL;
                        switch ($tmp1014) {
                            case -1: goto $l1024;
                        }
                        $l1024:;
                    }
                    goto $l1004;
                    $l1005:;
                }
                $tmp996 = -1;
                goto $l994;
                $l994:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$293$17997));
                Iter$293$17997 = NULL;
                switch ($tmp996) {
                    case -1: goto $l1025;
                }
                $l1025:;
            }
            $returnValue507 = result961;
            $tmp501 = 31;
            goto $l499;
            $l1026:;
            return $returnValue507;
        }
        }
        else {
        panda$core$Bit $tmp1028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$183_9502->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp1028.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1030 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$183_9502->$data + 24));
            test1029 = *$tmp1030;
            panda$collections$ImmutableArray** $tmp1032 = ((panda$collections$ImmutableArray**) ((char*) $match$183_9502->$data + 32));
            statements1031 = *$tmp1032;
            panda$core$Int64 $tmp1034 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1029);
            result1033 = $tmp1034;
            {
                int $tmp1037;
                {
                    ITable* $tmp1041 = ((panda$collections$Iterable*) statements1031)->$class->itable;
                    while ($tmp1041->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1041 = $tmp1041->next;
                    }
                    $fn1043 $tmp1042 = $tmp1041->methods[0];
                    panda$collections$Iterator* $tmp1044 = $tmp1042(((panda$collections$Iterable*) statements1031));
                    $tmp1040 = $tmp1044;
                    $tmp1039 = $tmp1040;
                    Iter$299$171038 = $tmp1039;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1039));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1040));
                    $l1045:;
                    ITable* $tmp1048 = Iter$299$171038->$class->itable;
                    while ($tmp1048->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1048 = $tmp1048->next;
                    }
                    $fn1050 $tmp1049 = $tmp1048->methods[0];
                    panda$core$Bit $tmp1051 = $tmp1049(Iter$299$171038);
                    panda$core$Bit $tmp1052 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1051);
                    bool $tmp1047 = $tmp1052.value;
                    if (!$tmp1047) goto $l1046;
                    {
                        int $tmp1055;
                        {
                            ITable* $tmp1059 = Iter$299$171038->$class->itable;
                            while ($tmp1059->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1059 = $tmp1059->next;
                            }
                            $fn1061 $tmp1060 = $tmp1059->methods[1];
                            panda$core$Object* $tmp1062 = $tmp1060(Iter$299$171038);
                            $tmp1058 = $tmp1062;
                            $tmp1057 = ((org$pandalanguage$pandac$ASTNode*) $tmp1058);
                            s1056 = $tmp1057;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1057));
                            panda$core$Panda$unref$panda$core$Object($tmp1058);
                            panda$core$Int64 $tmp1063 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1056);
                            panda$core$Int64 $tmp1064 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1033, $tmp1063);
                            result1033 = $tmp1064;
                        }
                        $tmp1055 = -1;
                        goto $l1053;
                        $l1053:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1056));
                        s1056 = NULL;
                        switch ($tmp1055) {
                            case -1: goto $l1065;
                        }
                        $l1065:;
                    }
                    goto $l1045;
                    $l1046:;
                }
                $tmp1037 = -1;
                goto $l1035;
                $l1035:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$299$171038));
                Iter$299$171038 = NULL;
                switch ($tmp1037) {
                    case -1: goto $l1066;
                }
                $l1066:;
            }
            $returnValue507 = result1033;
            $tmp501 = 32;
            goto $l499;
            $l1067:;
            return $returnValue507;
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
    $tmp501 = -1;
    goto $l499;
    $l499:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp503));
    switch ($tmp501) {
        case 30: goto $l954;
        case 16: goto $l764;
        case 18: goto $l877;
        case 12: goto $l710;
        case 19: goto $l880;
        case 2: goto $l523;
        case 29: goto $l916;
        case 0: goto $l509;
        case 28: goto $l913;
        case 24: goto $l901;
        case 6: goto $l611;
        case 23: goto $l896;
        case 27: goto $l910;
        case 5: goto $l605;
        case 31: goto $l1026;
        case 1: goto $l520;
        case 26: goto $l907;
        case 22: goto $l893;
        case 14: goto $l716;
        case 11: goto $l669;
        case 25: goto $l904;
        case -1: goto $l1069;
        case 3: goto $l561;
        case 13: goto $l713;
        case 32: goto $l1067;
        case 10: goto $l663;
        case 4: goto $l564;
        case 8: goto $l619;
        case 17: goto $l802;
        case 7: goto $l614;
        case 15: goto $l761;
        case 20: goto $l883;
        case 21: goto $l890;
        case 9: goto $l622;
    }
    $l1069:;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Object* $tmp1072;
    panda$core$Int64 c1083;
    panda$collections$Iterator* Iter$312$131087 = NULL;
    panda$collections$Iterator* $tmp1088;
    panda$collections$Iterator* $tmp1089;
    org$pandalanguage$pandac$ASTNode* s1105 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1106;
    panda$core$Object* $tmp1107;
    panda$core$Bit $returnValue1115;
    panda$core$Object* $tmp1074 = (($fn1073) self->compiler->$class->vtable[2])(self->compiler);
    $tmp1072 = $tmp1074;
    panda$core$Bit $tmp1075 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1072)->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp1071 = $tmp1075.value;
    panda$core$Panda$unref$panda$core$Object($tmp1072);
    if (!$tmp1071) goto $l1076;
    panda$core$Bit $tmp1077 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp1078 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1077);
    $tmp1071 = $tmp1078.value;
    $l1076:;
    panda$core$Bit $tmp1079 = { $tmp1071 };
    bool $tmp1070 = $tmp1079.value;
    if (!$tmp1070) goto $l1080;
    panda$core$Bit $tmp1081 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp1070 = $tmp1081.value;
    $l1080:;
    panda$core$Bit $tmp1082 = { $tmp1070 };
    if ($tmp1082.value) {
    {
        c1083 = ((panda$core$Int64) { 0 });
        {
            int $tmp1086;
            {
                ITable* $tmp1090 = ((panda$collections$Iterable*) p_statements)->$class->itable;
                while ($tmp1090->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1090 = $tmp1090->next;
                }
                $fn1092 $tmp1091 = $tmp1090->methods[0];
                panda$collections$Iterator* $tmp1093 = $tmp1091(((panda$collections$Iterable*) p_statements));
                $tmp1089 = $tmp1093;
                $tmp1088 = $tmp1089;
                Iter$312$131087 = $tmp1088;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1088));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1089));
                $l1094:;
                ITable* $tmp1097 = Iter$312$131087->$class->itable;
                while ($tmp1097->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1097 = $tmp1097->next;
                }
                $fn1099 $tmp1098 = $tmp1097->methods[0];
                panda$core$Bit $tmp1100 = $tmp1098(Iter$312$131087);
                panda$core$Bit $tmp1101 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1100);
                bool $tmp1096 = $tmp1101.value;
                if (!$tmp1096) goto $l1095;
                {
                    int $tmp1104;
                    {
                        ITable* $tmp1108 = Iter$312$131087->$class->itable;
                        while ($tmp1108->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1108 = $tmp1108->next;
                        }
                        $fn1110 $tmp1109 = $tmp1108->methods[1];
                        panda$core$Object* $tmp1111 = $tmp1109(Iter$312$131087);
                        $tmp1107 = $tmp1111;
                        $tmp1106 = ((org$pandalanguage$pandac$ASTNode*) $tmp1107);
                        s1105 = $tmp1106;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1106));
                        panda$core$Panda$unref$panda$core$Object($tmp1107);
                        panda$core$Int64 $tmp1112 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1105);
                        panda$core$Int64 $tmp1113 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c1083, $tmp1112);
                        c1083 = $tmp1113;
                        panda$core$Bit $tmp1114 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c1083, ((panda$core$Int64) { 10 }));
                        if ($tmp1114.value) {
                        {
                            $returnValue1115 = ((panda$core$Bit) { false });
                            $tmp1104 = 0;
                            goto $l1102;
                            $l1116:;
                            $tmp1086 = 0;
                            goto $l1084;
                            $l1117:;
                            return $returnValue1115;
                        }
                        }
                    }
                    $tmp1104 = -1;
                    goto $l1102;
                    $l1102:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1105));
                    s1105 = NULL;
                    switch ($tmp1104) {
                        case -1: goto $l1119;
                        case 0: goto $l1116;
                    }
                    $l1119:;
                }
                goto $l1094;
                $l1095:;
            }
            $tmp1086 = -1;
            goto $l1084;
            $l1084:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$312$131087));
            Iter$312$131087 = NULL;
            switch ($tmp1086) {
                case 0: goto $l1117;
                case -1: goto $l1120;
            }
            $l1120:;
        }
        $returnValue1115 = ((panda$core$Bit) { true });
        return $returnValue1115;
    }
    }
    $returnValue1115 = ((panda$core$Bit) { false });
    return $returnValue1115;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment1126 = NULL;
    panda$core$String* $tmp1127;
    panda$core$String* $tmp1128;
    org$pandalanguage$pandac$ASTNode* $match$333_131132 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1133;
    org$pandalanguage$pandac$Position position1135;
    panda$core$String* text1137 = NULL;
    panda$core$String* $tmp1139;
    panda$core$String* $tmp1140;
    org$pandalanguage$pandac$Annotations* annotations1142 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1143;
    org$pandalanguage$pandac$Annotations* $tmp1144;
    panda$collections$Array* parameters1157 = NULL;
    panda$collections$Array* $tmp1158;
    panda$collections$Array* $tmp1159;
    panda$collections$Iterator* Iter$345$91164 = NULL;
    panda$collections$Iterator* $tmp1165;
    panda$collections$Iterator* $tmp1166;
    org$pandalanguage$pandac$ASTNode* p1182 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1183;
    panda$core$Object* $tmp1184;
    org$pandalanguage$pandac$ASTNode* $match$346_131192 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1193;
    panda$core$String* name1195 = NULL;
    org$pandalanguage$pandac$ASTNode* type1197 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1199;
    org$pandalanguage$pandac$Type* $tmp1201;
    org$pandalanguage$pandac$Type* returnType1206 = NULL;
    org$pandalanguage$pandac$Type* $tmp1207;
    org$pandalanguage$pandac$Type* $tmp1208;
    org$pandalanguage$pandac$Type* $tmp1209;
    org$pandalanguage$pandac$Type* $tmp1211;
    org$pandalanguage$pandac$Type* $tmp1212;
    org$pandalanguage$pandac$Type* $tmp1213;
    org$pandalanguage$pandac$Type* $tmp1218;
    panda$core$Object* $tmp1222;
    panda$core$Object* $tmp1238;
    panda$core$String* $tmp1241;
    panda$core$String* $tmp1242;
    org$pandalanguage$pandac$MethodDecl* $returnValue1247;
    org$pandalanguage$pandac$MethodDecl* $tmp1248;
    org$pandalanguage$pandac$MethodDecl* $tmp1249;
    int $tmp1125;
    {
        memset(&doccomment1126, 0, sizeof(doccomment1126));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1127 = doccomment1126;
                $tmp1128 = NULL;
                doccomment1126 = $tmp1128;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1128));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1127));
            }
        }
        }
        else {
        {
            int $tmp1131;
            {
                $tmp1133 = p_rawDoccomment;
                $match$333_131132 = $tmp1133;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1133));
                panda$core$Bit $tmp1134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$333_131132->$rawValue, ((panda$core$Int64) { 37 }));
                if ($tmp1134.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1136 = ((org$pandalanguage$pandac$Position*) ((char*) $match$333_131132->$data + 0));
                    position1135 = *$tmp1136;
                    panda$core$String** $tmp1138 = ((panda$core$String**) ((char*) $match$333_131132->$data + 16));
                    text1137 = *$tmp1138;
                    {
                        $tmp1139 = doccomment1126;
                        $tmp1140 = text1137;
                        doccomment1126 = $tmp1140;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1140));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1139));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1131 = -1;
            goto $l1129;
            $l1129:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1133));
            switch ($tmp1131) {
                case -1: goto $l1141;
            }
            $l1141:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1145 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1144 = $tmp1145;
        $tmp1143 = $tmp1144;
        annotations1142 = $tmp1143;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1143));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1144));
        panda$core$Bit $tmp1148 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        bool $tmp1147 = $tmp1148.value;
        if (!$tmp1147) goto $l1149;
        panda$core$Bit $tmp1150 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
        $tmp1147 = $tmp1150.value;
        $l1149:;
        panda$core$Bit $tmp1151 = { $tmp1147 };
        bool $tmp1146 = $tmp1151.value;
        if ($tmp1146) goto $l1152;
        panda$core$Bit $tmp1153 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations1142);
        $tmp1146 = $tmp1153.value;
        $l1152:;
        panda$core$Bit $tmp1154 = { $tmp1146 };
        if ($tmp1154.value) {
        {
            panda$core$Int64 $tmp1155 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
            panda$core$Int64 $tmp1156 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1142->flags, $tmp1155);
            annotations1142->flags = $tmp1156;
        }
        }
        panda$collections$Array* $tmp1160 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1160);
        $tmp1159 = $tmp1160;
        $tmp1158 = $tmp1159;
        parameters1157 = $tmp1158;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1158));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1159));
        {
            int $tmp1163;
            {
                ITable* $tmp1167 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1167->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1167 = $tmp1167->next;
                }
                $fn1169 $tmp1168 = $tmp1167->methods[0];
                panda$collections$Iterator* $tmp1170 = $tmp1168(((panda$collections$Iterable*) p_rawParameters));
                $tmp1166 = $tmp1170;
                $tmp1165 = $tmp1166;
                Iter$345$91164 = $tmp1165;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1165));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1166));
                $l1171:;
                ITable* $tmp1174 = Iter$345$91164->$class->itable;
                while ($tmp1174->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1174 = $tmp1174->next;
                }
                $fn1176 $tmp1175 = $tmp1174->methods[0];
                panda$core$Bit $tmp1177 = $tmp1175(Iter$345$91164);
                panda$core$Bit $tmp1178 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1177);
                bool $tmp1173 = $tmp1178.value;
                if (!$tmp1173) goto $l1172;
                {
                    int $tmp1181;
                    {
                        ITable* $tmp1185 = Iter$345$91164->$class->itable;
                        while ($tmp1185->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1185 = $tmp1185->next;
                        }
                        $fn1187 $tmp1186 = $tmp1185->methods[1];
                        panda$core$Object* $tmp1188 = $tmp1186(Iter$345$91164);
                        $tmp1184 = $tmp1188;
                        $tmp1183 = ((org$pandalanguage$pandac$ASTNode*) $tmp1184);
                        p1182 = $tmp1183;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1183));
                        panda$core$Panda$unref$panda$core$Object($tmp1184);
                        int $tmp1191;
                        {
                            $tmp1193 = p1182;
                            $match$346_131192 = $tmp1193;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1193));
                            panda$core$Bit $tmp1194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$346_131192->$rawValue, ((panda$core$Int64) { 31 }));
                            if ($tmp1194.value) {
                            {
                                panda$core$String** $tmp1196 = ((panda$core$String**) ((char*) $match$346_131192->$data + 16));
                                name1195 = *$tmp1196;
                                org$pandalanguage$pandac$ASTNode** $tmp1198 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$346_131192->$data + 24));
                                type1197 = *$tmp1198;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1200 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1202 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1197);
                                $tmp1201 = $tmp1202;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1200, name1195, $tmp1201);
                                $tmp1199 = $tmp1200;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1157, ((panda$core$Object*) $tmp1199));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1199));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1201));
                            }
                            }
                            else {
                            {
                                PANDA_ASSERT(((panda$core$Bit) { false }).value);
                            }
                            }
                        }
                        $tmp1191 = -1;
                        goto $l1189;
                        $l1189:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1193));
                        switch ($tmp1191) {
                            case -1: goto $l1203;
                        }
                        $l1203:;
                    }
                    $tmp1181 = -1;
                    goto $l1179;
                    $l1179:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1182));
                    p1182 = NULL;
                    switch ($tmp1181) {
                        case -1: goto $l1204;
                    }
                    $l1204:;
                }
                goto $l1171;
                $l1172:;
            }
            $tmp1163 = -1;
            goto $l1161;
            $l1161:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$345$91164));
            Iter$345$91164 = NULL;
            switch ($tmp1163) {
                case -1: goto $l1205;
            }
            $l1205:;
        }
        memset(&returnType1206, 0, sizeof(returnType1206));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1207 = returnType1206;
                org$pandalanguage$pandac$Type* $tmp1210 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1209 = $tmp1210;
                $tmp1208 = $tmp1209;
                returnType1206 = $tmp1208;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1208));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1209));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1207));
            }
        }
        }
        else {
        {
            {
                $tmp1211 = returnType1206;
                org$pandalanguage$pandac$Type* $tmp1214 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1213 = $tmp1214;
                $tmp1212 = $tmp1213;
                returnType1206 = $tmp1212;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1212));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1213));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1211));
            }
        }
        }
        panda$core$Bit $tmp1216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
        bool $tmp1215 = $tmp1216.value;
        if (!$tmp1215) goto $l1217;
        org$pandalanguage$pandac$Type* $tmp1219 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1218 = $tmp1219;
        panda$core$Bit $tmp1220 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1206, $tmp1218);
        $tmp1215 = $tmp1220.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1218));
        $l1217:;
        panda$core$Bit $tmp1221 = { $tmp1215 };
        if ($tmp1221.value) {
        {
            panda$core$Object* $tmp1224 = (($fn1223) self->compiler->$class->vtable[2])(self->compiler);
            $tmp1222 = $tmp1224;
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1222), p_position, &$s1225);
            panda$core$Panda$unref$panda$core$Object($tmp1222);
        }
        }
        bool $tmp1226 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1226) goto $l1227;
        panda$core$Bit $tmp1228 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1142, p_statements);
        $tmp1226 = $tmp1228.value;
        $l1227:;
        panda$core$Bit $tmp1229 = { $tmp1226 };
        if ($tmp1229.value) {
        {
            panda$core$Int64 $tmp1230 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp1231 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1142->flags, $tmp1230);
            annotations1142->flags = $tmp1231;
        }
        }
        if (((panda$core$Bit) { p_statements == NULL }).value) {
        {
            panda$core$Bit $tmp1232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1232.value) {
            {
                panda$core$Int64 $tmp1233 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                panda$core$Int64 $tmp1234 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1142->flags, $tmp1233);
                annotations1142->flags = $tmp1234;
            }
            }
            else {
            panda$core$Int64 $tmp1235 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
            panda$core$Int64 $tmp1236 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1142->flags, $tmp1235);
            panda$core$Bit $tmp1237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1236, ((panda$core$Int64) { 0 }));
            if ($tmp1237.value) {
            {
                panda$core$Object* $tmp1240 = (($fn1239) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1238 = $tmp1240;
                panda$core$String* $tmp1244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1243, p_name);
                $tmp1242 = $tmp1244;
                panda$core$String* $tmp1246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1242, &$s1245);
                $tmp1241 = $tmp1246;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1238), p_position, $tmp1241);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1241));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1242));
                panda$core$Panda$unref$panda$core$Object($tmp1238);
            }
            }
            }
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1250 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1250, p_owner, p_position, doccomment1126, annotations1142, p_kind, p_name, parameters1157, returnType1206, p_statements);
        $tmp1249 = $tmp1250;
        $tmp1248 = $tmp1249;
        $returnValue1247 = $tmp1248;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1248));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1249));
        $tmp1125 = 0;
        goto $l1123;
        $l1251:;
        return $returnValue1247;
    }
    $l1123:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1126));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1142));
    annotations1142 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1157));
    parameters1157 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1206));
    switch ($tmp1125) {
        case 0: goto $l1251;
    }
    $l1253:;
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$379_91257 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1258;
    org$pandalanguage$pandac$Position position1260;
    org$pandalanguage$pandac$ASTNode* dc1262 = NULL;
    panda$collections$ImmutableArray* annotations1264 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1266 = NULL;
    org$pandalanguage$pandac$Position position1269;
    org$pandalanguage$pandac$ASTNode* dc1271 = NULL;
    panda$collections$ImmutableArray* annotations1273 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1275;
    panda$core$String* name1277 = NULL;
    panda$collections$ImmutableArray* parameters1279 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType1281 = NULL;
    panda$collections$ImmutableArray* statements1283 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1288 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1289;
    org$pandalanguage$pandac$MethodDecl* $tmp1290;
    org$pandalanguage$pandac$Position position1294;
    org$pandalanguage$pandac$ASTNode* dc1296 = NULL;
    panda$collections$ImmutableArray* annotations1298 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1300;
    panda$core$String* name1302 = NULL;
    panda$collections$ImmutableArray* generics1304 = NULL;
    panda$collections$ImmutableArray* supertypes1306 = NULL;
    panda$collections$ImmutableArray* members1308 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1313 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1314;
    org$pandalanguage$pandac$ClassDecl* $tmp1315;
    panda$core$Weak* $tmp1317;
    panda$core$Weak* $tmp1318;
    panda$core$Weak* $tmp1319;
    panda$core$String* $tmp1321;
    org$pandalanguage$pandac$Alias* $tmp1325;
    panda$core$String* $tmp1327;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1328;
    org$pandalanguage$pandac$Position $tmp1332;
    org$pandalanguage$pandac$Alias* $tmp1333;
    panda$core$String* $tmp1335;
    org$pandalanguage$pandac$Position $tmp1337;
    org$pandalanguage$pandac$Position position1340;
    org$pandalanguage$pandac$ASTNode* dc1342 = NULL;
    panda$core$String* name1344 = NULL;
    panda$collections$ImmutableArray* fields1346 = NULL;
    int $tmp1256;
    {
        $tmp1258 = p_node;
        $match$379_91257 = $tmp1258;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1258));
        panda$core$Bit $tmp1259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$379_91257->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1259.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1261 = ((org$pandalanguage$pandac$Position*) ((char*) $match$379_91257->$data + 0));
            position1260 = *$tmp1261;
            org$pandalanguage$pandac$ASTNode** $tmp1263 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$379_91257->$data + 16));
            dc1262 = *$tmp1263;
            panda$collections$ImmutableArray** $tmp1265 = ((panda$collections$ImmutableArray**) ((char*) $match$379_91257->$data + 24));
            annotations1264 = *$tmp1265;
            org$pandalanguage$pandac$ASTNode** $tmp1267 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$379_91257->$data + 32));
            varDecl1266 = *$tmp1267;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1260, dc1262, annotations1264, varDecl1266);
        }
        }
        else {
        panda$core$Bit $tmp1268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$379_91257->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1268.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1270 = ((org$pandalanguage$pandac$Position*) ((char*) $match$379_91257->$data + 0));
            position1269 = *$tmp1270;
            org$pandalanguage$pandac$ASTNode** $tmp1272 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$379_91257->$data + 16));
            dc1271 = *$tmp1272;
            panda$collections$ImmutableArray** $tmp1274 = ((panda$collections$ImmutableArray**) ((char*) $match$379_91257->$data + 24));
            annotations1273 = *$tmp1274;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1276 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$379_91257->$data + 32));
            kind1275 = *$tmp1276;
            panda$core$String** $tmp1278 = ((panda$core$String**) ((char*) $match$379_91257->$data + 40));
            name1277 = *$tmp1278;
            panda$collections$ImmutableArray** $tmp1280 = ((panda$collections$ImmutableArray**) ((char*) $match$379_91257->$data + 48));
            parameters1279 = *$tmp1280;
            org$pandalanguage$pandac$ASTNode** $tmp1282 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$379_91257->$data + 56));
            rawReturnType1281 = *$tmp1282;
            panda$collections$ImmutableArray** $tmp1284 = ((panda$collections$ImmutableArray**) ((char*) $match$379_91257->$data + 64));
            statements1283 = *$tmp1284;
            int $tmp1287;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1291 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1269, dc1271, annotations1273, kind1275, name1277, parameters1279, rawReturnType1281, statements1283);
                $tmp1290 = $tmp1291;
                $tmp1289 = $tmp1290;
                m1288 = $tmp1289;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1289));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1290));
                if (((panda$core$Bit) { m1288 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1288));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1288));
                }
                }
            }
            $tmp1287 = -1;
            goto $l1285;
            $l1285:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1288));
            m1288 = NULL;
            switch ($tmp1287) {
                case -1: goto $l1292;
            }
            $l1292:;
        }
        }
        else {
        panda$core$Bit $tmp1293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$379_91257->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1293.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1295 = ((org$pandalanguage$pandac$Position*) ((char*) $match$379_91257->$data + 0));
            position1294 = *$tmp1295;
            org$pandalanguage$pandac$ASTNode** $tmp1297 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$379_91257->$data + 16));
            dc1296 = *$tmp1297;
            panda$collections$ImmutableArray** $tmp1299 = ((panda$collections$ImmutableArray**) ((char*) $match$379_91257->$data + 24));
            annotations1298 = *$tmp1299;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1301 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$379_91257->$data + 32));
            kind1300 = *$tmp1301;
            panda$core$String** $tmp1303 = ((panda$core$String**) ((char*) $match$379_91257->$data + 40));
            name1302 = *$tmp1303;
            panda$collections$ImmutableArray** $tmp1305 = ((panda$collections$ImmutableArray**) ((char*) $match$379_91257->$data + 48));
            generics1304 = *$tmp1305;
            panda$collections$ImmutableArray** $tmp1307 = ((panda$collections$ImmutableArray**) ((char*) $match$379_91257->$data + 56));
            supertypes1306 = *$tmp1307;
            panda$collections$ImmutableArray** $tmp1309 = ((panda$collections$ImmutableArray**) ((char*) $match$379_91257->$data + 64));
            members1308 = *$tmp1309;
            int $tmp1312;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1316 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, p_cl->name, position1294, dc1296, annotations1298, kind1300, name1302, generics1304, supertypes1306, members1308);
                $tmp1315 = $tmp1316;
                $tmp1314 = $tmp1315;
                inner1313 = $tmp1314;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1314));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1315));
                if (((panda$core$Bit) { inner1313 != NULL }).value) {
                {
                    {
                        $tmp1317 = inner1313->owner;
                        panda$core$Weak* $tmp1320 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp1320, ((panda$core$Object*) p_cl));
                        $tmp1319 = $tmp1320;
                        $tmp1318 = $tmp1319;
                        inner1313->owner = $tmp1318;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1318));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1319));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1317));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1313));
                    panda$core$String* $tmp1323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_cl->name, &$s1322);
                    $tmp1321 = $tmp1323;
                    panda$core$Bit $tmp1324 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(inner1313->name, $tmp1321);
                    PANDA_ASSERT($tmp1324.value);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1321));
                    org$pandalanguage$pandac$Alias* $tmp1326 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$Int64 $tmp1329 = panda$core$String$length$R$panda$core$Int64(p_cl->name);
                    panda$core$Int64 $tmp1330 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1329, ((panda$core$Int64) { 1 }));
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1328, ((panda$core$Int64$nullable) { $tmp1330, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                    panda$core$String* $tmp1331 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(inner1313->name, $tmp1328);
                    $tmp1327 = $tmp1331;
                    org$pandalanguage$pandac$Position$init(&$tmp1332);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1326, $tmp1327, inner1313->name, $tmp1332);
                    $tmp1325 = $tmp1326;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1325));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1325));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1327));
                    org$pandalanguage$pandac$Alias* $tmp1334 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$String* $tmp1336 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1335 = $tmp1336;
                    org$pandalanguage$pandac$Position$init(&$tmp1337);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1334, $tmp1335, p_cl->name, $tmp1337);
                    $tmp1333 = $tmp1334;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(inner1313->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1333));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1333));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1335));
                }
                }
            }
            $tmp1312 = -1;
            goto $l1310;
            $l1310:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1313));
            inner1313 = NULL;
            switch ($tmp1312) {
                case -1: goto $l1338;
            }
            $l1338:;
        }
        }
        else {
        panda$core$Bit $tmp1339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$379_91257->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1339.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1341 = ((org$pandalanguage$pandac$Position*) ((char*) $match$379_91257->$data + 0));
            position1340 = *$tmp1341;
            org$pandalanguage$pandac$ASTNode** $tmp1343 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$379_91257->$data + 16));
            dc1342 = *$tmp1343;
            panda$core$String** $tmp1345 = ((panda$core$String**) ((char*) $match$379_91257->$data + 24));
            name1344 = *$tmp1345;
            panda$collections$ImmutableArray** $tmp1347 = ((panda$collections$ImmutableArray**) ((char*) $match$379_91257->$data + 32));
            fields1346 = *$tmp1347;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1340, dc1342, name1344, fields1346);
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
    $tmp1256 = -1;
    goto $l1254;
    $l1254:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1258));
    switch ($tmp1256) {
        case -1: goto $l1348;
    }
    $l1348:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1352 = NULL;
    panda$core$String* $tmp1353;
    panda$core$String* $tmp1354;
    org$pandalanguage$pandac$ASTNode* $match$417_131358 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1359;
    org$pandalanguage$pandac$Position position1361;
    panda$core$String* text1363 = NULL;
    panda$core$String* $tmp1365;
    panda$core$String* $tmp1366;
    panda$collections$Array* fields1368 = NULL;
    panda$collections$Array* $tmp1369;
    panda$collections$Array* $tmp1370;
    panda$collections$Iterator* Iter$425$91375 = NULL;
    panda$collections$Iterator* $tmp1376;
    panda$collections$Iterator* $tmp1377;
    org$pandalanguage$pandac$ASTNode* t1393 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1394;
    panda$core$Object* $tmp1395;
    org$pandalanguage$pandac$Type* $tmp1400;
    org$pandalanguage$pandac$ChoiceEntry* entry1404 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1405;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1406;
    int $tmp1351;
    {
        memset(&doccomment1352, 0, sizeof(doccomment1352));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1353 = doccomment1352;
                $tmp1354 = NULL;
                doccomment1352 = $tmp1354;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1354));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1353));
            }
        }
        }
        else {
        {
            int $tmp1357;
            {
                $tmp1359 = p_rawDoccomment;
                $match$417_131358 = $tmp1359;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1359));
                panda$core$Bit $tmp1360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$417_131358->$rawValue, ((panda$core$Int64) { 37 }));
                if ($tmp1360.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1362 = ((org$pandalanguage$pandac$Position*) ((char*) $match$417_131358->$data + 0));
                    position1361 = *$tmp1362;
                    panda$core$String** $tmp1364 = ((panda$core$String**) ((char*) $match$417_131358->$data + 16));
                    text1363 = *$tmp1364;
                    {
                        $tmp1365 = doccomment1352;
                        $tmp1366 = text1363;
                        doccomment1352 = $tmp1366;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1366));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1365));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1357 = -1;
            goto $l1355;
            $l1355:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1359));
            switch ($tmp1357) {
                case -1: goto $l1367;
            }
            $l1367:;
        }
        }
        panda$collections$Array* $tmp1371 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1371);
        $tmp1370 = $tmp1371;
        $tmp1369 = $tmp1370;
        fields1368 = $tmp1369;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1369));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1370));
        {
            int $tmp1374;
            {
                ITable* $tmp1378 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1378->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1378 = $tmp1378->next;
                }
                $fn1380 $tmp1379 = $tmp1378->methods[0];
                panda$collections$Iterator* $tmp1381 = $tmp1379(((panda$collections$Iterable*) p_rawFields));
                $tmp1377 = $tmp1381;
                $tmp1376 = $tmp1377;
                Iter$425$91375 = $tmp1376;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1376));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1377));
                $l1382:;
                ITable* $tmp1385 = Iter$425$91375->$class->itable;
                while ($tmp1385->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1385 = $tmp1385->next;
                }
                $fn1387 $tmp1386 = $tmp1385->methods[0];
                panda$core$Bit $tmp1388 = $tmp1386(Iter$425$91375);
                panda$core$Bit $tmp1389 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1388);
                bool $tmp1384 = $tmp1389.value;
                if (!$tmp1384) goto $l1383;
                {
                    int $tmp1392;
                    {
                        ITable* $tmp1396 = Iter$425$91375->$class->itable;
                        while ($tmp1396->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1396 = $tmp1396->next;
                        }
                        $fn1398 $tmp1397 = $tmp1396->methods[1];
                        panda$core$Object* $tmp1399 = $tmp1397(Iter$425$91375);
                        $tmp1395 = $tmp1399;
                        $tmp1394 = ((org$pandalanguage$pandac$ASTNode*) $tmp1395);
                        t1393 = $tmp1394;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1394));
                        panda$core$Panda$unref$panda$core$Object($tmp1395);
                        org$pandalanguage$pandac$Type* $tmp1401 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1393);
                        $tmp1400 = $tmp1401;
                        panda$collections$Array$add$panda$collections$Array$T(fields1368, ((panda$core$Object*) $tmp1400));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1400));
                    }
                    $tmp1392 = -1;
                    goto $l1390;
                    $l1390:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1393));
                    t1393 = NULL;
                    switch ($tmp1392) {
                        case -1: goto $l1402;
                    }
                    $l1402:;
                }
                goto $l1382;
                $l1383:;
            }
            $tmp1374 = -1;
            goto $l1372;
            $l1372:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$425$91375));
            Iter$425$91375 = NULL;
            switch ($tmp1374) {
                case -1: goto $l1403;
            }
            $l1403:;
        }
        org$pandalanguage$pandac$ChoiceEntry* $tmp1407 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(97, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
        panda$core$Int64 $tmp1408 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
        org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1407, p_cl, p_position, p_name, doccomment1352, $tmp1408, ((panda$collections$ListView*) fields1368));
        $tmp1406 = $tmp1407;
        $tmp1405 = $tmp1406;
        entry1404 = $tmp1405;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1405));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1406));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry1404));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1404));
    }
    $tmp1351 = -1;
    goto $l1349;
    $l1349:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1352));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1368));
    fields1368 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1404));
    entry1404 = NULL;
    switch ($tmp1351) {
        case -1: goto $l1409;
    }
    $l1409:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1413 = NULL;
    panda$core$String* $tmp1416;
    panda$core$String* $tmp1417;
    panda$core$String* $tmp1418;
    panda$core$String* $tmp1419;
    panda$core$String* $tmp1420;
    panda$core$String* $tmp1421;
    panda$core$String* $tmp1428;
    panda$core$String* $tmp1429;
    panda$core$String* doccomment1430 = NULL;
    panda$core$String* $tmp1431;
    panda$core$String* $tmp1432;
    org$pandalanguage$pandac$ASTNode* $match$451_131436 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1437;
    org$pandalanguage$pandac$Position position1439;
    panda$core$String* text1441 = NULL;
    panda$core$String* $tmp1443;
    panda$core$String* $tmp1444;
    org$pandalanguage$pandac$Annotations* annotations1446 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1447;
    org$pandalanguage$pandac$Annotations* $tmp1448;
    panda$collections$Array* parameters1450 = NULL;
    panda$collections$Array* $tmp1451;
    panda$collections$Array* $tmp1452;
    panda$collections$Iterator* Iter$461$131457 = NULL;
    panda$collections$Iterator* $tmp1458;
    panda$collections$Iterator* $tmp1459;
    org$pandalanguage$pandac$ASTNode* p1475 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1476;
    panda$core$Object* $tmp1477;
    panda$core$String* name1482 = NULL;
    org$pandalanguage$pandac$Type* bound1483 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$464_171487 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1488;
    panda$core$String* id1490 = NULL;
    panda$core$String* $tmp1492;
    panda$core$String* $tmp1493;
    org$pandalanguage$pandac$Type* $tmp1494;
    org$pandalanguage$pandac$Type* $tmp1495;
    org$pandalanguage$pandac$Type* $tmp1496;
    panda$core$String* id1499 = NULL;
    org$pandalanguage$pandac$ASTNode* type1501 = NULL;
    panda$core$String* $tmp1503;
    panda$core$String* $tmp1504;
    org$pandalanguage$pandac$Type* $tmp1505;
    org$pandalanguage$pandac$Type* $tmp1506;
    org$pandalanguage$pandac$Type* $tmp1507;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1510;
    panda$core$Object* $tmp1517;
    panda$collections$Array* supertypes1521 = NULL;
    panda$collections$Array* $tmp1522;
    panda$collections$Array* $tmp1523;
    panda$core$Object* $tmp1526;
    panda$collections$Iterator* Iter$485$131533 = NULL;
    panda$collections$Iterator* $tmp1534;
    panda$collections$Iterator* $tmp1535;
    org$pandalanguage$pandac$ASTNode* s1551 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1552;
    panda$core$Object* $tmp1553;
    org$pandalanguage$pandac$Type* $tmp1558;
    org$pandalanguage$pandac$ClassDecl* result1562 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1563;
    org$pandalanguage$pandac$ClassDecl* $tmp1564;
    panda$core$Object* $tmp1566;
    panda$core$Object* $tmp1569;
    org$pandalanguage$pandac$FieldDecl* rawValue1576 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1577;
    org$pandalanguage$pandac$FieldDecl* $tmp1578;
    org$pandalanguage$pandac$Annotations* $tmp1580;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1582;
    org$pandalanguage$pandac$Type* $tmp1584;
    org$pandalanguage$pandac$FieldDecl* data1586 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1587;
    org$pandalanguage$pandac$FieldDecl* $tmp1588;
    org$pandalanguage$pandac$Annotations* $tmp1590;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1592;
    org$pandalanguage$pandac$Type* $tmp1594;
    panda$collections$Iterator* Iter$502$91600 = NULL;
    panda$collections$Iterator* $tmp1601;
    panda$collections$Iterator* $tmp1602;
    org$pandalanguage$pandac$ASTNode* m1618 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1619;
    panda$core$Object* $tmp1620;
    org$pandalanguage$pandac$ASTNode* $match$503_131628 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1629;
    org$pandalanguage$pandac$Position mPosition1631;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1633;
    org$pandalanguage$pandac$ClassDecl$Kind $match$506_251636;
    panda$core$Object* $tmp1639;
    panda$core$Object* $tmp1644;
    panda$core$Bit foundInit1651;
    panda$core$Bit foundCleanup1652;
    panda$collections$Iterator* Iter$521$91656 = NULL;
    panda$collections$Iterator* $tmp1657;
    panda$collections$Iterator* $tmp1658;
    org$pandalanguage$pandac$MethodDecl* m1674 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1675;
    panda$core$Object* $tmp1676;
    panda$core$Object* $tmp1690;
    org$pandalanguage$pandac$MethodDecl* defaultInit1709 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1710;
    org$pandalanguage$pandac$MethodDecl* $tmp1711;
    org$pandalanguage$pandac$Annotations* $tmp1713;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1715;
    panda$collections$Array* $tmp1717;
    org$pandalanguage$pandac$Type* $tmp1719;
    panda$collections$ImmutableArray* $tmp1721;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1741 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1742;
    org$pandalanguage$pandac$MethodDecl* $tmp1743;
    org$pandalanguage$pandac$Annotations* $tmp1745;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1748;
    panda$collections$Array* $tmp1750;
    org$pandalanguage$pandac$Type* $tmp1752;
    panda$collections$ImmutableArray* $tmp1754;
    panda$core$Bit haveFields1758;
    panda$collections$Iterator* Iter$549$131762 = NULL;
    panda$collections$Iterator* $tmp1763;
    panda$collections$Iterator* $tmp1764;
    org$pandalanguage$pandac$ChoiceEntry* e1780 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1781;
    panda$core$Object* $tmp1782;
    org$pandalanguage$pandac$Type* $tmp1793;
    org$pandalanguage$pandac$Type* $tmp1794;
    org$pandalanguage$pandac$Type* $tmp1795;
    panda$core$Object* $tmp1797;
    panda$core$Object* $tmp1798;
    org$pandalanguage$pandac$ClassDecl* $returnValue1802;
    org$pandalanguage$pandac$ClassDecl* $tmp1803;
    int $tmp1412;
    {
        memset(&fullName1413, 0, sizeof(fullName1413));
        panda$core$Bit $tmp1415 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s1414);
        if ($tmp1415.value) {
        {
            {
                $tmp1416 = fullName1413;
                panda$core$String* $tmp1422 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1421 = $tmp1422;
                panda$core$String* $tmp1424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1421, &$s1423);
                $tmp1420 = $tmp1424;
                panda$core$String* $tmp1425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1420, p_name);
                $tmp1419 = $tmp1425;
                panda$core$String* $tmp1427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1419, &$s1426);
                $tmp1418 = $tmp1427;
                $tmp1417 = $tmp1418;
                fullName1413 = $tmp1417;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1417));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1418));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1419));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1420));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1421));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1416));
            }
        }
        }
        else {
        {
            {
                $tmp1428 = fullName1413;
                $tmp1429 = p_name;
                fullName1413 = $tmp1429;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1429));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1428));
            }
        }
        }
        memset(&doccomment1430, 0, sizeof(doccomment1430));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1431 = doccomment1430;
                $tmp1432 = NULL;
                doccomment1430 = $tmp1432;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1432));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1431));
            }
        }
        }
        else {
        {
            int $tmp1435;
            {
                $tmp1437 = p_rawDoccomment;
                $match$451_131436 = $tmp1437;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1437));
                panda$core$Bit $tmp1438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_131436->$rawValue, ((panda$core$Int64) { 37 }));
                if ($tmp1438.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1440 = ((org$pandalanguage$pandac$Position*) ((char*) $match$451_131436->$data + 0));
                    position1439 = *$tmp1440;
                    panda$core$String** $tmp1442 = ((panda$core$String**) ((char*) $match$451_131436->$data + 16));
                    text1441 = *$tmp1442;
                    {
                        $tmp1443 = doccomment1430;
                        $tmp1444 = text1441;
                        doccomment1430 = $tmp1444;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1444));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1443));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1435 = -1;
            goto $l1433;
            $l1433:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1437));
            switch ($tmp1435) {
                case -1: goto $l1445;
            }
            $l1445:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1449 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1448 = $tmp1449;
        $tmp1447 = $tmp1448;
        annotations1446 = $tmp1447;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1447));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1448));
        panda$collections$Array* $tmp1453 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1453);
        $tmp1452 = $tmp1453;
        $tmp1451 = $tmp1452;
        parameters1450 = $tmp1451;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1451));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1452));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1456;
                {
                    ITable* $tmp1460 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1460->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1460 = $tmp1460->next;
                    }
                    $fn1462 $tmp1461 = $tmp1460->methods[0];
                    panda$collections$Iterator* $tmp1463 = $tmp1461(((panda$collections$Iterable*) p_generics));
                    $tmp1459 = $tmp1463;
                    $tmp1458 = $tmp1459;
                    Iter$461$131457 = $tmp1458;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1458));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1459));
                    $l1464:;
                    ITable* $tmp1467 = Iter$461$131457->$class->itable;
                    while ($tmp1467->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1467 = $tmp1467->next;
                    }
                    $fn1469 $tmp1468 = $tmp1467->methods[0];
                    panda$core$Bit $tmp1470 = $tmp1468(Iter$461$131457);
                    panda$core$Bit $tmp1471 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1470);
                    bool $tmp1466 = $tmp1471.value;
                    if (!$tmp1466) goto $l1465;
                    {
                        int $tmp1474;
                        {
                            ITable* $tmp1478 = Iter$461$131457->$class->itable;
                            while ($tmp1478->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1478 = $tmp1478->next;
                            }
                            $fn1480 $tmp1479 = $tmp1478->methods[1];
                            panda$core$Object* $tmp1481 = $tmp1479(Iter$461$131457);
                            $tmp1477 = $tmp1481;
                            $tmp1476 = ((org$pandalanguage$pandac$ASTNode*) $tmp1477);
                            p1475 = $tmp1476;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1476));
                            panda$core$Panda$unref$panda$core$Object($tmp1477);
                            memset(&name1482, 0, sizeof(name1482));
                            memset(&bound1483, 0, sizeof(bound1483));
                            int $tmp1486;
                            {
                                $tmp1488 = p1475;
                                $match$464_171487 = $tmp1488;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1488));
                                panda$core$Bit $tmp1489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$464_171487->$rawValue, ((panda$core$Int64) { 20 }));
                                if ($tmp1489.value) {
                                {
                                    panda$core$String** $tmp1491 = ((panda$core$String**) ((char*) $match$464_171487->$data + 16));
                                    id1490 = *$tmp1491;
                                    {
                                        $tmp1492 = name1482;
                                        $tmp1493 = id1490;
                                        name1482 = $tmp1493;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1493));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1492));
                                    }
                                    {
                                        $tmp1494 = bound1483;
                                        org$pandalanguage$pandac$Type* $tmp1497 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1496 = $tmp1497;
                                        $tmp1495 = $tmp1496;
                                        bound1483 = $tmp1495;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1495));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1496));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1494));
                                    }
                                }
                                }
                                else {
                                panda$core$Bit $tmp1498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$464_171487->$rawValue, ((panda$core$Int64) { 41 }));
                                if ($tmp1498.value) {
                                {
                                    panda$core$String** $tmp1500 = ((panda$core$String**) ((char*) $match$464_171487->$data + 16));
                                    id1499 = *$tmp1500;
                                    org$pandalanguage$pandac$ASTNode** $tmp1502 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$464_171487->$data + 24));
                                    type1501 = *$tmp1502;
                                    {
                                        $tmp1503 = name1482;
                                        $tmp1504 = id1499;
                                        name1482 = $tmp1504;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1504));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1503));
                                    }
                                    {
                                        $tmp1505 = bound1483;
                                        org$pandalanguage$pandac$Type* $tmp1508 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1501);
                                        $tmp1507 = $tmp1508;
                                        $tmp1506 = $tmp1507;
                                        bound1483 = $tmp1506;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1506));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1507));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1505));
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
                            $tmp1486 = -1;
                            goto $l1484;
                            $l1484:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1488));
                            switch ($tmp1486) {
                                case -1: goto $l1509;
                            }
                            $l1509:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1511 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1513 = (($fn1512) p1475->$class->vtable[2])(p1475);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1511, $tmp1513, fullName1413, name1482, bound1483);
                            $tmp1510 = $tmp1511;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1450, ((panda$core$Object*) $tmp1510));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1510));
                        }
                        $tmp1474 = -1;
                        goto $l1472;
                        $l1472:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1475));
                        p1475 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1482));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1483));
                        switch ($tmp1474) {
                            case -1: goto $l1514;
                        }
                        $l1514:;
                    }
                    goto $l1464;
                    $l1465:;
                }
                $tmp1456 = -1;
                goto $l1454;
                $l1454:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$461$131457));
                Iter$461$131457 = NULL;
                switch ($tmp1456) {
                    case -1: goto $l1515;
                }
                $l1515:;
            }
            panda$core$Bit $tmp1516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1516.value) {
            {
                panda$core$Object* $tmp1519 = (($fn1518) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1517 = $tmp1519;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1517), p_position, &$s1520);
                panda$core$Panda$unref$panda$core$Object($tmp1517);
            }
            }
        }
        }
        panda$collections$Array* $tmp1524 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1524);
        $tmp1523 = $tmp1524;
        $tmp1522 = $tmp1523;
        supertypes1521 = $tmp1522;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1522));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1523));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Bit $tmp1525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1525.value) {
            {
                panda$core$Object* $tmp1528 = (($fn1527) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1526 = $tmp1528;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1526), p_position, &$s1529);
                panda$core$Panda$unref$panda$core$Object($tmp1526);
            }
            }
            {
                int $tmp1532;
                {
                    ITable* $tmp1536 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1536->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1536 = $tmp1536->next;
                    }
                    $fn1538 $tmp1537 = $tmp1536->methods[0];
                    panda$collections$Iterator* $tmp1539 = $tmp1537(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1535 = $tmp1539;
                    $tmp1534 = $tmp1535;
                    Iter$485$131533 = $tmp1534;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1534));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1535));
                    $l1540:;
                    ITable* $tmp1543 = Iter$485$131533->$class->itable;
                    while ($tmp1543->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1543 = $tmp1543->next;
                    }
                    $fn1545 $tmp1544 = $tmp1543->methods[0];
                    panda$core$Bit $tmp1546 = $tmp1544(Iter$485$131533);
                    panda$core$Bit $tmp1547 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1546);
                    bool $tmp1542 = $tmp1547.value;
                    if (!$tmp1542) goto $l1541;
                    {
                        int $tmp1550;
                        {
                            ITable* $tmp1554 = Iter$485$131533->$class->itable;
                            while ($tmp1554->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1554 = $tmp1554->next;
                            }
                            $fn1556 $tmp1555 = $tmp1554->methods[1];
                            panda$core$Object* $tmp1557 = $tmp1555(Iter$485$131533);
                            $tmp1553 = $tmp1557;
                            $tmp1552 = ((org$pandalanguage$pandac$ASTNode*) $tmp1553);
                            s1551 = $tmp1552;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1552));
                            panda$core$Panda$unref$panda$core$Object($tmp1553);
                            org$pandalanguage$pandac$Type* $tmp1559 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1551);
                            $tmp1558 = $tmp1559;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1521, ((panda$core$Object*) $tmp1558));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1558));
                        }
                        $tmp1550 = -1;
                        goto $l1548;
                        $l1548:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1551));
                        s1551 = NULL;
                        switch ($tmp1550) {
                            case -1: goto $l1560;
                        }
                        $l1560:;
                    }
                    goto $l1540;
                    $l1541:;
                }
                $tmp1532 = -1;
                goto $l1530;
                $l1530:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$485$131533));
                Iter$485$131533 = NULL;
                switch ($tmp1532) {
                    case -1: goto $l1561;
                }
                $l1561:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1565 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1568 = (($fn1567) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1566 = $tmp1568;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1565, p_source, p_position, p_aliases, doccomment1430, annotations1446, p_kind, fullName1413, ((panda$collections$ListView*) supertypes1521), parameters1450, ((org$pandalanguage$pandac$Compiler*) $tmp1566)->root);
        $tmp1564 = $tmp1565;
        $tmp1563 = $tmp1564;
        result1562 = $tmp1563;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1563));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1564));
        panda$core$Panda$unref$panda$core$Object($tmp1566);
        panda$core$Object* $tmp1571 = (($fn1570) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1569 = $tmp1571;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1569)->currentClass, ((panda$core$Object*) result1562));
        panda$core$Panda$unref$panda$core$Object($tmp1569);
        panda$core$Bit $tmp1572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1572.value) {
        {
            int $tmp1575;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1579 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1581 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1581);
                $tmp1580 = $tmp1581;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1582, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1585 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1584 = $tmp1585;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1579, result1562, result1562->position, NULL, $tmp1580, $tmp1582, &$s1583, $tmp1584, NULL);
                $tmp1578 = $tmp1579;
                $tmp1577 = $tmp1578;
                rawValue1576 = $tmp1577;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1577));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1578));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1584));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1580));
                panda$collections$Array$add$panda$collections$Array$T(result1562->fields, ((panda$core$Object*) rawValue1576));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1562->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1576));
                org$pandalanguage$pandac$FieldDecl* $tmp1589 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1591 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1591);
                $tmp1590 = $tmp1591;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1592, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1595 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1594 = $tmp1595;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1589, result1562, result1562->position, NULL, $tmp1590, $tmp1592, &$s1593, $tmp1594, NULL);
                $tmp1588 = $tmp1589;
                $tmp1587 = $tmp1588;
                data1586 = $tmp1587;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1587));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1588));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1594));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1590));
                panda$collections$Array$add$panda$collections$Array$T(result1562->fields, ((panda$core$Object*) data1586));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1562->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1586));
            }
            $tmp1575 = -1;
            goto $l1573;
            $l1573:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1576));
            rawValue1576 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1586));
            data1586 = NULL;
            switch ($tmp1575) {
                case -1: goto $l1596;
            }
            $l1596:;
        }
        }
        {
            int $tmp1599;
            {
                ITable* $tmp1603 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1603->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1603 = $tmp1603->next;
                }
                $fn1605 $tmp1604 = $tmp1603->methods[0];
                panda$collections$Iterator* $tmp1606 = $tmp1604(((panda$collections$Iterable*) p_members));
                $tmp1602 = $tmp1606;
                $tmp1601 = $tmp1602;
                Iter$502$91600 = $tmp1601;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1601));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1602));
                $l1607:;
                ITable* $tmp1610 = Iter$502$91600->$class->itable;
                while ($tmp1610->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1610 = $tmp1610->next;
                }
                $fn1612 $tmp1611 = $tmp1610->methods[0];
                panda$core$Bit $tmp1613 = $tmp1611(Iter$502$91600);
                panda$core$Bit $tmp1614 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1613);
                bool $tmp1609 = $tmp1614.value;
                if (!$tmp1609) goto $l1608;
                {
                    int $tmp1617;
                    {
                        ITable* $tmp1621 = Iter$502$91600->$class->itable;
                        while ($tmp1621->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1621 = $tmp1621->next;
                        }
                        $fn1623 $tmp1622 = $tmp1621->methods[1];
                        panda$core$Object* $tmp1624 = $tmp1622(Iter$502$91600);
                        $tmp1620 = $tmp1624;
                        $tmp1619 = ((org$pandalanguage$pandac$ASTNode*) $tmp1620);
                        m1618 = $tmp1619;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1619));
                        panda$core$Panda$unref$panda$core$Object($tmp1620);
                        int $tmp1627;
                        {
                            $tmp1629 = m1618;
                            $match$503_131628 = $tmp1629;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1629));
                            panda$core$Bit $tmp1630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$503_131628->$rawValue, ((panda$core$Int64) { 26 }));
                            if ($tmp1630.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp1632 = ((org$pandalanguage$pandac$Position*) ((char*) $match$503_131628->$data + 0));
                                mPosition1631 = *$tmp1632;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1634 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$503_131628->$data + 32));
                                methodKind1633 = *$tmp1634;
                                panda$core$Bit $tmp1635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1633.$rawValue, ((panda$core$Int64) { 2 }));
                                if ($tmp1635.value) {
                                {
                                    {
                                        $match$506_251636 = p_kind;
                                        panda$core$Bit $tmp1637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_251636.$rawValue, ((panda$core$Int64) { 0 }));
                                        if ($tmp1637.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_251636.$rawValue, ((panda$core$Int64) { 1 }));
                                        if ($tmp1638.value) {
                                        {
                                            panda$core$Object* $tmp1641 = (($fn1640) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp1639 = $tmp1641;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1639), mPosition1631, &$s1642);
                                            panda$core$Panda$unref$panda$core$Object($tmp1639);
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_251636.$rawValue, ((panda$core$Int64) { 2 }));
                                        if ($tmp1643.value) {
                                        {
                                            panda$core$Object* $tmp1646 = (($fn1645) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp1644 = $tmp1646;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1644), mPosition1631, &$s1647);
                                            panda$core$Panda$unref$panda$core$Object($tmp1644);
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
                        $tmp1627 = -1;
                        goto $l1625;
                        $l1625:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1629));
                        switch ($tmp1627) {
                            case -1: goto $l1648;
                        }
                        $l1648:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1562, m1618);
                    }
                    $tmp1617 = -1;
                    goto $l1615;
                    $l1615:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1618));
                    m1618 = NULL;
                    switch ($tmp1617) {
                        case -1: goto $l1649;
                    }
                    $l1649:;
                }
                goto $l1607;
                $l1608:;
            }
            $tmp1599 = -1;
            goto $l1597;
            $l1597:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$502$91600));
            Iter$502$91600 = NULL;
            switch ($tmp1599) {
                case -1: goto $l1650;
            }
            $l1650:;
        }
        foundInit1651 = ((panda$core$Bit) { false });
        foundCleanup1652 = ((panda$core$Bit) { false });
        {
            int $tmp1655;
            {
                ITable* $tmp1659 = ((panda$collections$Iterable*) result1562->methods)->$class->itable;
                while ($tmp1659->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1659 = $tmp1659->next;
                }
                $fn1661 $tmp1660 = $tmp1659->methods[0];
                panda$collections$Iterator* $tmp1662 = $tmp1660(((panda$collections$Iterable*) result1562->methods));
                $tmp1658 = $tmp1662;
                $tmp1657 = $tmp1658;
                Iter$521$91656 = $tmp1657;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1657));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1658));
                $l1663:;
                ITable* $tmp1666 = Iter$521$91656->$class->itable;
                while ($tmp1666->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1666 = $tmp1666->next;
                }
                $fn1668 $tmp1667 = $tmp1666->methods[0];
                panda$core$Bit $tmp1669 = $tmp1667(Iter$521$91656);
                panda$core$Bit $tmp1670 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1669);
                bool $tmp1665 = $tmp1670.value;
                if (!$tmp1665) goto $l1664;
                {
                    int $tmp1673;
                    {
                        ITable* $tmp1677 = Iter$521$91656->$class->itable;
                        while ($tmp1677->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1677 = $tmp1677->next;
                        }
                        $fn1679 $tmp1678 = $tmp1677->methods[1];
                        panda$core$Object* $tmp1680 = $tmp1678(Iter$521$91656);
                        $tmp1676 = $tmp1680;
                        $tmp1675 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1676);
                        m1674 = $tmp1675;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1675));
                        panda$core$Panda$unref$panda$core$Object($tmp1676);
                        panda$core$Bit $tmp1681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1674->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
                        if ($tmp1681.value) {
                        {
                            foundInit1651 = ((panda$core$Bit) { true });
                        }
                        }
                        panda$core$Bit $tmp1684 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1674)->name, &$s1683);
                        bool $tmp1682 = $tmp1684.value;
                        if (!$tmp1682) goto $l1685;
                        panda$core$Int64 $tmp1686 = panda$collections$Array$get_count$R$panda$core$Int64(m1674->parameters);
                        panda$core$Bit $tmp1687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1686, ((panda$core$Int64) { 0 }));
                        $tmp1682 = $tmp1687.value;
                        $l1685:;
                        panda$core$Bit $tmp1688 = { $tmp1682 };
                        if ($tmp1688.value) {
                        {
                            foundCleanup1652 = ((panda$core$Bit) { true });
                            panda$core$Bit $tmp1689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp1689.value) {
                            {
                                panda$core$Object* $tmp1692 = (($fn1691) self->compiler->$class->vtable[2])(self->compiler);
                                $tmp1690 = $tmp1692;
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1690), p_position, &$s1693);
                                panda$core$Panda$unref$panda$core$Object($tmp1690);
                            }
                            }
                        }
                        }
                    }
                    $tmp1673 = -1;
                    goto $l1671;
                    $l1671:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1674));
                    m1674 = NULL;
                    switch ($tmp1673) {
                        case -1: goto $l1694;
                    }
                    $l1694:;
                }
                goto $l1663;
                $l1664:;
            }
            $tmp1655 = -1;
            goto $l1653;
            $l1653:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$521$91656));
            Iter$521$91656 = NULL;
            switch ($tmp1655) {
                case -1: goto $l1695;
            }
            $l1695:;
        }
        panda$core$Bit $tmp1698 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1651);
        bool $tmp1697 = $tmp1698.value;
        if (!$tmp1697) goto $l1699;
        panda$core$Bit $tmp1700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        $tmp1697 = $tmp1700.value;
        $l1699:;
        panda$core$Bit $tmp1701 = { $tmp1697 };
        bool $tmp1696 = $tmp1701.value;
        if (!$tmp1696) goto $l1702;
        panda$core$Bit $tmp1704 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1562->name, &$s1703);
        $tmp1696 = $tmp1704.value;
        $l1702:;
        panda$core$Bit $tmp1705 = { $tmp1696 };
        if ($tmp1705.value) {
        {
            int $tmp1708;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1712 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1714 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1714);
                $tmp1713 = $tmp1714;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1715, ((panda$core$Int64) { 2 }));
                panda$collections$Array* $tmp1718 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1718);
                $tmp1717 = $tmp1718;
                org$pandalanguage$pandac$Type* $tmp1720 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1719 = $tmp1720;
                panda$collections$ImmutableArray* $tmp1722 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1722);
                $tmp1721 = $tmp1722;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1712, result1562, p_position, NULL, $tmp1713, $tmp1715, &$s1716, $tmp1717, $tmp1719, $tmp1721);
                $tmp1711 = $tmp1712;
                $tmp1710 = $tmp1711;
                defaultInit1709 = $tmp1710;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1710));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1711));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1721));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1719));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1717));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1713));
                panda$collections$Array$add$panda$collections$Array$T(result1562->methods, ((panda$core$Object*) defaultInit1709));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1562->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1709));
            }
            $tmp1708 = -1;
            goto $l1706;
            $l1706:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1709));
            defaultInit1709 = NULL;
            switch ($tmp1708) {
                case -1: goto $l1723;
            }
            $l1723:;
        }
        }
        panda$core$Bit $tmp1726 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup1652);
        bool $tmp1725 = $tmp1726.value;
        if (!$tmp1725) goto $l1727;
        panda$core$Bit $tmp1729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp1728 = $tmp1729.value;
        if ($tmp1728) goto $l1730;
        panda$core$Bit $tmp1731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        $tmp1728 = $tmp1731.value;
        $l1730:;
        panda$core$Bit $tmp1732 = { $tmp1728 };
        $tmp1725 = $tmp1732.value;
        $l1727:;
        panda$core$Bit $tmp1733 = { $tmp1725 };
        bool $tmp1724 = $tmp1733.value;
        if (!$tmp1724) goto $l1734;
        panda$core$Bit $tmp1736 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1562->name, &$s1735);
        $tmp1724 = $tmp1736.value;
        $l1734:;
        panda$core$Bit $tmp1737 = { $tmp1724 };
        if ($tmp1737.value) {
        {
            int $tmp1740;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1744 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1746 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64 $tmp1747 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1746, $tmp1747);
                $tmp1745 = $tmp1746;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1748, ((panda$core$Int64) { 0 }));
                panda$collections$Array* $tmp1751 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1751);
                $tmp1750 = $tmp1751;
                org$pandalanguage$pandac$Type* $tmp1753 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1752 = $tmp1753;
                panda$collections$ImmutableArray* $tmp1755 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1755);
                $tmp1754 = $tmp1755;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1744, result1562, p_position, NULL, $tmp1745, $tmp1748, &$s1749, $tmp1750, $tmp1752, $tmp1754);
                $tmp1743 = $tmp1744;
                $tmp1742 = $tmp1743;
                defaultCleanup1741 = $tmp1742;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1742));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1743));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1754));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1752));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1750));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1745));
                panda$collections$Array$add$panda$collections$Array$T(result1562->methods, ((panda$core$Object*) defaultCleanup1741));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1562->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1741));
            }
            $tmp1740 = -1;
            goto $l1738;
            $l1738:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1741));
            defaultCleanup1741 = NULL;
            switch ($tmp1740) {
                case -1: goto $l1756;
            }
            $l1756:;
        }
        }
        panda$core$Bit $tmp1757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1757.value) {
        {
            haveFields1758 = ((panda$core$Bit) { false });
            {
                int $tmp1761;
                {
                    ITable* $tmp1765 = ((panda$collections$Iterable*) result1562->choiceEntries)->$class->itable;
                    while ($tmp1765->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1765 = $tmp1765->next;
                    }
                    $fn1767 $tmp1766 = $tmp1765->methods[0];
                    panda$collections$Iterator* $tmp1768 = $tmp1766(((panda$collections$Iterable*) result1562->choiceEntries));
                    $tmp1764 = $tmp1768;
                    $tmp1763 = $tmp1764;
                    Iter$549$131762 = $tmp1763;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1763));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1764));
                    $l1769:;
                    ITable* $tmp1772 = Iter$549$131762->$class->itable;
                    while ($tmp1772->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1772 = $tmp1772->next;
                    }
                    $fn1774 $tmp1773 = $tmp1772->methods[0];
                    panda$core$Bit $tmp1775 = $tmp1773(Iter$549$131762);
                    panda$core$Bit $tmp1776 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1775);
                    bool $tmp1771 = $tmp1776.value;
                    if (!$tmp1771) goto $l1770;
                    {
                        int $tmp1779;
                        {
                            ITable* $tmp1783 = Iter$549$131762->$class->itable;
                            while ($tmp1783->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1783 = $tmp1783->next;
                            }
                            $fn1785 $tmp1784 = $tmp1783->methods[1];
                            panda$core$Object* $tmp1786 = $tmp1784(Iter$549$131762);
                            $tmp1782 = $tmp1786;
                            $tmp1781 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1782);
                            e1780 = $tmp1781;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1781));
                            panda$core$Panda$unref$panda$core$Object($tmp1782);
                            panda$core$Int64 $tmp1787 = panda$collections$Array$get_count$R$panda$core$Int64(e1780->fields);
                            panda$core$Bit $tmp1788 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1787, ((panda$core$Int64) { 0 }));
                            if ($tmp1788.value) {
                            {
                                haveFields1758 = ((panda$core$Bit) { true });
                                $tmp1779 = 0;
                                goto $l1777;
                                $l1789:;
                                goto $l1770;
                            }
                            }
                        }
                        $tmp1779 = -1;
                        goto $l1777;
                        $l1777:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1780));
                        e1780 = NULL;
                        switch ($tmp1779) {
                            case 0: goto $l1789;
                            case -1: goto $l1790;
                        }
                        $l1790:;
                    }
                    goto $l1769;
                    $l1770:;
                }
                $tmp1761 = -1;
                goto $l1759;
                $l1759:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$549$131762));
                Iter$549$131762 = NULL;
                switch ($tmp1761) {
                    case -1: goto $l1791;
                }
                $l1791:;
            }
            panda$core$Bit $tmp1792 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1758);
            if ($tmp1792.value) {
            {
                {
                    $tmp1793 = result1562->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp1796 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp1795 = $tmp1796;
                    $tmp1794 = $tmp1795;
                    result1562->rawSuper = $tmp1794;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1794));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1795));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1793));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp1800 = (($fn1799) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1798 = $tmp1800;
        panda$core$Object* $tmp1801 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1798)->currentClass);
        $tmp1797 = $tmp1801;
        panda$core$Panda$unref$panda$core$Object($tmp1797);
        panda$core$Panda$unref$panda$core$Object($tmp1798);
        $tmp1803 = result1562;
        $returnValue1802 = $tmp1803;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1803));
        $tmp1412 = 0;
        goto $l1410;
        $l1804:;
        return $returnValue1802;
    }
    $l1410:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1413));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1430));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1446));
    annotations1446 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1450));
    parameters1450 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1521));
    supertypes1521 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1562));
    result1562 = NULL;
    switch ($tmp1412) {
        case 0: goto $l1804;
    }
    $l1806:;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$565$91810 = NULL;
    panda$collections$Iterator* $tmp1811;
    panda$collections$Iterator* $tmp1812;
    org$pandalanguage$pandac$ClassDecl* inner1828 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1829;
    panda$core$Object* $tmp1830;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp1809;
        {
            ITable* $tmp1813 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp1813->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1813 = $tmp1813->next;
            }
            $fn1815 $tmp1814 = $tmp1813->methods[0];
            panda$collections$Iterator* $tmp1816 = $tmp1814(((panda$collections$Iterable*) p_cl->classes));
            $tmp1812 = $tmp1816;
            $tmp1811 = $tmp1812;
            Iter$565$91810 = $tmp1811;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1811));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1812));
            $l1817:;
            ITable* $tmp1820 = Iter$565$91810->$class->itable;
            while ($tmp1820->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1820 = $tmp1820->next;
            }
            $fn1822 $tmp1821 = $tmp1820->methods[0];
            panda$core$Bit $tmp1823 = $tmp1821(Iter$565$91810);
            panda$core$Bit $tmp1824 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1823);
            bool $tmp1819 = $tmp1824.value;
            if (!$tmp1819) goto $l1818;
            {
                int $tmp1827;
                {
                    ITable* $tmp1831 = Iter$565$91810->$class->itable;
                    while ($tmp1831->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1831 = $tmp1831->next;
                    }
                    $fn1833 $tmp1832 = $tmp1831->methods[1];
                    panda$core$Object* $tmp1834 = $tmp1832(Iter$565$91810);
                    $tmp1830 = $tmp1834;
                    $tmp1829 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1830);
                    inner1828 = $tmp1829;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1829));
                    panda$core$Panda$unref$panda$core$Object($tmp1830);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1828, p_arr);
                }
                $tmp1827 = -1;
                goto $l1825;
                $l1825:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1828));
                inner1828 = NULL;
                switch ($tmp1827) {
                    case -1: goto $l1835;
                }
                $l1835:;
            }
            goto $l1817;
            $l1818:;
        }
        $tmp1809 = -1;
        goto $l1807;
        $l1807:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$565$91810));
        Iter$565$91810 = NULL;
        switch ($tmp1809) {
            case -1: goto $l1836;
        }
        $l1836:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$571_91840 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1841;
    panda$collections$ImmutableArray* entries1843 = NULL;
    panda$collections$Array* result1848 = NULL;
    panda$collections$Array* $tmp1849;
    panda$collections$Array* $tmp1850;
    panda$core$String* currentPackage1852 = NULL;
    panda$core$String* $tmp1853;
    panda$collections$HashMap* aliases1855 = NULL;
    panda$collections$HashMap* $tmp1856;
    panda$collections$HashMap* $tmp1857;
    panda$collections$Iterator* Iter$576$171862 = NULL;
    panda$collections$Iterator* $tmp1863;
    panda$collections$Iterator* $tmp1864;
    org$pandalanguage$pandac$ASTNode* e1880 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1881;
    panda$core$Object* $tmp1882;
    org$pandalanguage$pandac$ASTNode* $match$577_211890 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1891;
    panda$core$String* name1893 = NULL;
    panda$core$String* $tmp1895;
    panda$core$String* $tmp1896;
    panda$core$String* fullName1898 = NULL;
    panda$core$String$Index$nullable idx1903;
    panda$core$String* alias1906 = NULL;
    panda$core$String* $tmp1907;
    panda$core$String* $tmp1908;
    panda$core$String* $tmp1909;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1910;
    panda$core$String* $tmp1913;
    panda$core$String* $tmp1914;
    org$pandalanguage$pandac$Position position1917;
    org$pandalanguage$pandac$ASTNode* dc1919 = NULL;
    panda$collections$ImmutableArray* annotations1921 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1923;
    panda$core$String* name1925 = NULL;
    panda$collections$ImmutableArray* generics1927 = NULL;
    panda$collections$ImmutableArray* supertypes1929 = NULL;
    panda$collections$ImmutableArray* members1931 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl1936 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1937;
    org$pandalanguage$pandac$ClassDecl* $tmp1938;
    panda$collections$ListView* $returnValue1944;
    panda$collections$ListView* $tmp1945;
    int $tmp1839;
    {
        $tmp1841 = p_file;
        $match$571_91840 = $tmp1841;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1841));
        panda$core$Bit $tmp1842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$571_91840->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1842.value) {
        {
            panda$collections$ImmutableArray** $tmp1844 = ((panda$collections$ImmutableArray**) ((char*) $match$571_91840->$data + 0));
            entries1843 = *$tmp1844;
            int $tmp1847;
            {
                panda$collections$Array* $tmp1851 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1851);
                $tmp1850 = $tmp1851;
                $tmp1849 = $tmp1850;
                result1848 = $tmp1849;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1849));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1850));
                $tmp1853 = &$s1854;
                currentPackage1852 = $tmp1853;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1853));
                panda$collections$HashMap* $tmp1858 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp1858);
                $tmp1857 = $tmp1858;
                $tmp1856 = $tmp1857;
                aliases1855 = $tmp1856;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1856));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1857));
                {
                    int $tmp1861;
                    {
                        ITable* $tmp1865 = ((panda$collections$Iterable*) entries1843)->$class->itable;
                        while ($tmp1865->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1865 = $tmp1865->next;
                        }
                        $fn1867 $tmp1866 = $tmp1865->methods[0];
                        panda$collections$Iterator* $tmp1868 = $tmp1866(((panda$collections$Iterable*) entries1843));
                        $tmp1864 = $tmp1868;
                        $tmp1863 = $tmp1864;
                        Iter$576$171862 = $tmp1863;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1863));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1864));
                        $l1869:;
                        ITable* $tmp1872 = Iter$576$171862->$class->itable;
                        while ($tmp1872->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1872 = $tmp1872->next;
                        }
                        $fn1874 $tmp1873 = $tmp1872->methods[0];
                        panda$core$Bit $tmp1875 = $tmp1873(Iter$576$171862);
                        panda$core$Bit $tmp1876 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1875);
                        bool $tmp1871 = $tmp1876.value;
                        if (!$tmp1871) goto $l1870;
                        {
                            int $tmp1879;
                            {
                                ITable* $tmp1883 = Iter$576$171862->$class->itable;
                                while ($tmp1883->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1883 = $tmp1883->next;
                                }
                                $fn1885 $tmp1884 = $tmp1883->methods[1];
                                panda$core$Object* $tmp1886 = $tmp1884(Iter$576$171862);
                                $tmp1882 = $tmp1886;
                                $tmp1881 = ((org$pandalanguage$pandac$ASTNode*) $tmp1882);
                                e1880 = $tmp1881;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1881));
                                panda$core$Panda$unref$panda$core$Object($tmp1882);
                                int $tmp1889;
                                {
                                    $tmp1891 = e1880;
                                    $match$577_211890 = $tmp1891;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1891));
                                    panda$core$Bit $tmp1892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$577_211890->$rawValue, ((panda$core$Int64) { 30 }));
                                    if ($tmp1892.value) {
                                    {
                                        panda$core$String** $tmp1894 = ((panda$core$String**) ((char*) $match$577_211890->$data + 16));
                                        name1893 = *$tmp1894;
                                        {
                                            $tmp1895 = currentPackage1852;
                                            $tmp1896 = name1893;
                                            currentPackage1852 = $tmp1896;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1896));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1895));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$577_211890->$rawValue, ((panda$core$Int64) { 42 }));
                                    if ($tmp1897.value) {
                                    {
                                        panda$core$String** $tmp1899 = ((panda$core$String**) ((char*) $match$577_211890->$data + 16));
                                        fullName1898 = *$tmp1899;
                                        int $tmp1902;
                                        {
                                            panda$core$String$Index$nullable $tmp1905 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName1898, &$s1904);
                                            idx1903 = $tmp1905;
                                            memset(&alias1906, 0, sizeof(alias1906));
                                            if (((panda$core$Bit) { idx1903.nonnull }).value) {
                                            {
                                                {
                                                    $tmp1907 = alias1906;
                                                    panda$core$String$Index $tmp1911 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName1898, ((panda$core$String$Index) idx1903.value));
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1910, ((panda$core$String$Index$nullable) { $tmp1911, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                                    panda$core$String* $tmp1912 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName1898, $tmp1910);
                                                    $tmp1909 = $tmp1912;
                                                    $tmp1908 = $tmp1909;
                                                    alias1906 = $tmp1908;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1908));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1909));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1907));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp1913 = alias1906;
                                                    $tmp1914 = fullName1898;
                                                    alias1906 = $tmp1914;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1914));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1913));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1855, ((panda$collections$Key*) alias1906), ((panda$core$Object*) fullName1898));
                                        }
                                        $tmp1902 = -1;
                                        goto $l1900;
                                        $l1900:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias1906));
                                        switch ($tmp1902) {
                                            case -1: goto $l1915;
                                        }
                                        $l1915:;
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$577_211890->$rawValue, ((panda$core$Int64) { 11 }));
                                    if ($tmp1916.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp1918 = ((org$pandalanguage$pandac$Position*) ((char*) $match$577_211890->$data + 0));
                                        position1917 = *$tmp1918;
                                        org$pandalanguage$pandac$ASTNode** $tmp1920 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$577_211890->$data + 16));
                                        dc1919 = *$tmp1920;
                                        panda$collections$ImmutableArray** $tmp1922 = ((panda$collections$ImmutableArray**) ((char*) $match$577_211890->$data + 24));
                                        annotations1921 = *$tmp1922;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp1924 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$577_211890->$data + 32));
                                        kind1923 = *$tmp1924;
                                        panda$core$String** $tmp1926 = ((panda$core$String**) ((char*) $match$577_211890->$data + 40));
                                        name1925 = *$tmp1926;
                                        panda$collections$ImmutableArray** $tmp1928 = ((panda$collections$ImmutableArray**) ((char*) $match$577_211890->$data + 48));
                                        generics1927 = *$tmp1928;
                                        panda$collections$ImmutableArray** $tmp1930 = ((panda$collections$ImmutableArray**) ((char*) $match$577_211890->$data + 56));
                                        supertypes1929 = *$tmp1930;
                                        panda$collections$ImmutableArray** $tmp1932 = ((panda$collections$ImmutableArray**) ((char*) $match$577_211890->$data + 64));
                                        members1931 = *$tmp1932;
                                        int $tmp1935;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp1939 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1855), currentPackage1852, position1917, dc1919, annotations1921, kind1923, name1925, generics1927, supertypes1929, members1931);
                                            $tmp1938 = $tmp1939;
                                            $tmp1937 = $tmp1938;
                                            cl1936 = $tmp1937;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1937));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1938));
                                            if (((panda$core$Bit) { cl1936 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl1936, result1848);
                                            }
                                            }
                                        }
                                        $tmp1935 = -1;
                                        goto $l1933;
                                        $l1933:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1936));
                                        cl1936 = NULL;
                                        switch ($tmp1935) {
                                            case -1: goto $l1940;
                                        }
                                        $l1940:;
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
                                $tmp1889 = -1;
                                goto $l1887;
                                $l1887:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1891));
                                switch ($tmp1889) {
                                    case -1: goto $l1941;
                                }
                                $l1941:;
                            }
                            $tmp1879 = -1;
                            goto $l1877;
                            $l1877:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1880));
                            e1880 = NULL;
                            switch ($tmp1879) {
                                case -1: goto $l1942;
                            }
                            $l1942:;
                        }
                        goto $l1869;
                        $l1870:;
                    }
                    $tmp1861 = -1;
                    goto $l1859;
                    $l1859:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$576$171862));
                    Iter$576$171862 = NULL;
                    switch ($tmp1861) {
                        case -1: goto $l1943;
                    }
                    $l1943:;
                }
                $tmp1945 = ((panda$collections$ListView*) result1848);
                $returnValue1944 = $tmp1945;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1945));
                $tmp1847 = 0;
                goto $l1845;
                $l1946:;
                $tmp1839 = 0;
                goto $l1837;
                $l1947:;
                return $returnValue1944;
            }
            $l1845:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1848));
            result1848 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1852));
            currentPackage1852 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases1855));
            aliases1855 = NULL;
            switch ($tmp1847) {
                case 0: goto $l1946;
            }
            $l1949:;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp1839 = -1;
    goto $l1837;
    $l1837:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1841));
    switch ($tmp1839) {
        case -1: goto $l1950;
        case 0: goto $l1947;
    }
    $l1950:;
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp1953;
    {
    }
    $tmp1953 = -1;
    goto $l1951;
    $l1951:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1953) {
        case -1: goto $l1954;
    }
    $l1954:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
}

