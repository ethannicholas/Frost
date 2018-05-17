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

typedef panda$collections$Iterator* (*$fn73)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn80)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn91)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn103)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn125)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn132)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn143)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn256)(panda$core$Weak*);
typedef panda$core$Object* (*$fn266)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn338)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn345)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn356)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn451)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn458)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn469)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn497)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn504)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn515)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn560)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn567)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn578)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn609)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn616)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn627)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn661)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn668)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn679)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn706)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn713)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn724)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn750)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn757)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn768)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn782)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn789)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn800)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn871)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn878)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn889)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn912)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn919)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn930)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn944)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn951)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn962)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn986)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn993)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1004)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1017)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1036)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1043)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1054)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1115)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1122)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1133)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1169)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1185)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1326)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1333)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1344)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1408)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1415)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1426)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1458)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn1464)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1473)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1484)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1491)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1502)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1513)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1516)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1551)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1558)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1569)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1586)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1591)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1607)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1614)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1625)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1637)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1713)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1720)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1731)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1745)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1761)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1768)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1779)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1813)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1820)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1831)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static panda$core$String $s1171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x6f\x6e\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x27", 30, -1250916154819313721, NULL };
static panda$core$String $s1191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x68\x61\x76\x65\x20\x61\x20\x62\x6f\x64\x79", 16, -7652461387112275530, NULL };
static panda$core$String $s1268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

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
    org$pandalanguage$pandac$Type$Kind $tmp20;
    org$pandalanguage$pandac$Position position24;
    org$pandalanguage$pandac$ASTNode* base26 = NULL;
    panda$collections$Array* subtypes31 = NULL;
    panda$collections$Array* $tmp32;
    panda$collections$Array* $tmp33;
    org$pandalanguage$pandac$Type* $tmp35;
    org$pandalanguage$pandac$Type* $finallyReturn36;
    org$pandalanguage$pandac$Type* $tmp38;
    org$pandalanguage$pandac$Type* $tmp39;
    panda$core$String* $tmp41;
    panda$core$Object* $tmp42;
    org$pandalanguage$pandac$Type$Kind $tmp46;
    org$pandalanguage$pandac$Position position52;
    panda$core$String* base54 = NULL;
    panda$collections$ImmutableArray* args56 = NULL;
    panda$collections$Array* finalArgs61 = NULL;
    panda$collections$Array* $tmp62;
    panda$collections$Array* $tmp63;
    panda$collections$Iterator* Iter$28$1768 = NULL;
    panda$collections$Iterator* $tmp69;
    panda$collections$Iterator* $tmp70;
    org$pandalanguage$pandac$ASTNode* arg86 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp87;
    panda$core$Object* $tmp88;
    org$pandalanguage$pandac$Type* $tmp93;
    org$pandalanguage$pandac$Type* $finallyReturn96;
    org$pandalanguage$pandac$Type* $tmp98;
    org$pandalanguage$pandac$Type* $tmp99;
    org$pandalanguage$pandac$Type* $tmp100;
    org$pandalanguage$pandac$Type$Kind $tmp102;
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
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp20, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position($tmp19, name14, $tmp20, position12);
            $tmp18 = $tmp19;
            $tmp17 = $tmp18;
            $finallyReturn15 = $tmp17;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
            $tmp8 = 0;
            goto $l6;
            $l21:;
            return $finallyReturn15;
        }
        }
        else {
        panda$core$Bit $tmp23 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_99->$rawValue, ((panda$core$Int64) { 26 }));
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
                org$pandalanguage$pandac$Type* $tmp40 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$Object* $tmp43 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes31, ((panda$core$Int64) { 0 }));
                $tmp42 = $tmp43;
                panda$core$String* $tmp45 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp42))->name, &$s44);
                $tmp41 = $tmp45;
                org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp46, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp40, $tmp41, $tmp46, position24, ((panda$collections$ListView*) subtypes31), ((panda$core$Bit) { false }));
                $tmp39 = $tmp40;
                $tmp38 = $tmp39;
                $finallyReturn36 = $tmp38;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp38));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
                panda$core$Panda$unref$panda$core$Object($tmp42);
                $tmp30 = 0;
                goto $l28;
                $l47:;
                $tmp8 = 1;
                goto $l6;
                $l48:;
                return $finallyReturn36;
            }
            $l28:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes31));
            subtypes31 = NULL;
            switch ($tmp30) {
                case 0: goto $l47;
            }
            $l50:;
        }
        }
        else {
        panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_99->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp51.value) {
        {
            org$pandalanguage$pandac$Position* $tmp53 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_99->$data + 0));
            position52 = *$tmp53;
            panda$core$String** $tmp55 = ((panda$core$String**) ((char*) $match$19_99->$data + 16));
            base54 = *$tmp55;
            panda$collections$ImmutableArray** $tmp57 = ((panda$collections$ImmutableArray**) ((char*) $match$19_99->$data + 24));
            args56 = *$tmp57;
            int $tmp60;
            {
                panda$collections$Array* $tmp64 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp64);
                $tmp63 = $tmp64;
                $tmp62 = $tmp63;
                finalArgs61 = $tmp62;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp62));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
                {
                    int $tmp67;
                    {
                        ITable* $tmp71 = ((panda$collections$Iterable*) args56)->$class->itable;
                        while ($tmp71->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp71 = $tmp71->next;
                        }
                        $fn73 $tmp72 = $tmp71->methods[0];
                        panda$collections$Iterator* $tmp74 = $tmp72(((panda$collections$Iterable*) args56));
                        $tmp70 = $tmp74;
                        $tmp69 = $tmp70;
                        Iter$28$1768 = $tmp69;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp69));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp70));
                        $l75:;
                        ITable* $tmp78 = Iter$28$1768->$class->itable;
                        while ($tmp78->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp78 = $tmp78->next;
                        }
                        $fn80 $tmp79 = $tmp78->methods[0];
                        panda$core$Bit $tmp81 = $tmp79(Iter$28$1768);
                        panda$core$Bit $tmp82 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp81);
                        bool $tmp77 = $tmp82.value;
                        if (!$tmp77) goto $l76;
                        {
                            int $tmp85;
                            {
                                ITable* $tmp89 = Iter$28$1768->$class->itable;
                                while ($tmp89->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp89 = $tmp89->next;
                                }
                                $fn91 $tmp90 = $tmp89->methods[1];
                                panda$core$Object* $tmp92 = $tmp90(Iter$28$1768);
                                $tmp88 = $tmp92;
                                $tmp87 = ((org$pandalanguage$pandac$ASTNode*) $tmp88);
                                arg86 = $tmp87;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp87));
                                panda$core$Panda$unref$panda$core$Object($tmp88);
                                org$pandalanguage$pandac$Type* $tmp94 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, arg86);
                                $tmp93 = $tmp94;
                                panda$collections$Array$add$panda$collections$Array$T(finalArgs61, ((panda$core$Object*) $tmp93));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp93));
                            }
                            $tmp85 = -1;
                            goto $l83;
                            $l83:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg86));
                            arg86 = NULL;
                            switch ($tmp85) {
                                case -1: goto $l95;
                            }
                            $l95:;
                        }
                        goto $l75;
                        $l76:;
                    }
                    $tmp67 = -1;
                    goto $l65;
                    $l65:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$28$1768));
                    Iter$28$1768 = NULL;
                    switch ($tmp67) {
                        case -1: goto $l96;
                    }
                    $l96:;
                }
                org$pandalanguage$pandac$Type* $tmp101 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp102, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Position $tmp104 = (($fn103) p_type->$class->vtable[2])(p_type);
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position($tmp101, base54, $tmp102, $tmp104);
                $tmp100 = $tmp101;
                org$pandalanguage$pandac$Type* $tmp105 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp100, ((panda$collections$ListView*) finalArgs61));
                $tmp99 = $tmp105;
                $tmp98 = $tmp99;
                $finallyReturn96 = $tmp98;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp98));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp99));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
                $tmp60 = 0;
                goto $l58;
                $l106:;
                $tmp8 = 2;
                goto $l6;
                $l107:;
                return $finallyReturn96;
            }
            $l58:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalArgs61));
            finalArgs61 = NULL;
            switch ($tmp60) {
                case 0: goto $l106;
            }
            $l109:;
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
        case 1: goto $l48;
        case -1: goto $l110;
        case 2: goto $l107;
        case 0: goto $l21;
    }
    $l110:;
}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, panda$collections$ImmutableArray* p_a) {
    panda$core$Int64 flags114;
    panda$collections$Array* expressions115 = NULL;
    panda$collections$Array* $tmp116;
    panda$collections$Iterator* Iter$40$9120 = NULL;
    panda$collections$Iterator* $tmp121;
    panda$collections$Iterator* $tmp122;
    org$pandalanguage$pandac$ASTNode* c138 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp139;
    panda$core$Object* $tmp140;
    org$pandalanguage$pandac$ASTNode* $match$41_13148 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp149;
    org$pandalanguage$pandac$Position position151;
    panda$core$String* text153 = NULL;
    org$pandalanguage$pandac$ASTNode* rawExpr155 = NULL;
    org$pandalanguage$pandac$ASTNode* expr160 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp161;
    panda$core$String* $match$44_21165 = NULL;
    panda$core$String* $tmp166;
    panda$collections$Array* $tmp217;
    panda$collections$Array* $tmp218;
    panda$collections$Array* $tmp219;
    org$pandalanguage$pandac$Annotations$Expression* $tmp221;
    org$pandalanguage$pandac$ASTNode* $tmp223;
    org$pandalanguage$pandac$ASTNode* $tmp224;
    panda$collections$Array* $tmp227;
    panda$collections$Array* $tmp228;
    panda$collections$Array* $tmp229;
    org$pandalanguage$pandac$Annotations$Expression* $tmp231;
    org$pandalanguage$pandac$ASTNode* $tmp233;
    org$pandalanguage$pandac$ASTNode* $tmp234;
    panda$collections$Array* $tmp237;
    panda$collections$Array* $tmp238;
    panda$collections$Array* $tmp239;
    org$pandalanguage$pandac$Annotations$Expression* $tmp241;
    org$pandalanguage$pandac$ASTNode* $tmp243;
    org$pandalanguage$pandac$ASTNode* $tmp244;
    panda$collections$Array* $tmp247;
    panda$collections$Array* $tmp248;
    panda$collections$Array* $tmp249;
    org$pandalanguage$pandac$Annotations$Expression* $tmp251;
    org$pandalanguage$pandac$ASTNode* $tmp253;
    org$pandalanguage$pandac$ASTNode* $tmp254;
    panda$core$Object* $tmp255;
    panda$core$String* $tmp258;
    panda$core$String* $tmp259;
    panda$core$Object* $tmp265;
    panda$core$String* $tmp268;
    panda$core$String* $tmp269;
    org$pandalanguage$pandac$Annotations* $finallyReturn277;
    org$pandalanguage$pandac$Annotations* $tmp279;
    org$pandalanguage$pandac$Annotations* $tmp280;
    int $tmp113;
    {
        flags114 = ((panda$core$Int64) { 0 });
        $tmp116 = NULL;
        expressions115 = $tmp116;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp116));
        {
            int $tmp119;
            {
                ITable* $tmp123 = ((panda$collections$Iterable*) p_a)->$class->itable;
                while ($tmp123->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp123 = $tmp123->next;
                }
                $fn125 $tmp124 = $tmp123->methods[0];
                panda$collections$Iterator* $tmp126 = $tmp124(((panda$collections$Iterable*) p_a));
                $tmp122 = $tmp126;
                $tmp121 = $tmp122;
                Iter$40$9120 = $tmp121;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp122));
                $l127:;
                ITable* $tmp130 = Iter$40$9120->$class->itable;
                while ($tmp130->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp130 = $tmp130->next;
                }
                $fn132 $tmp131 = $tmp130->methods[0];
                panda$core$Bit $tmp133 = $tmp131(Iter$40$9120);
                panda$core$Bit $tmp134 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp133);
                bool $tmp129 = $tmp134.value;
                if (!$tmp129) goto $l128;
                {
                    int $tmp137;
                    {
                        ITable* $tmp141 = Iter$40$9120->$class->itable;
                        while ($tmp141->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp141 = $tmp141->next;
                        }
                        $fn143 $tmp142 = $tmp141->methods[1];
                        panda$core$Object* $tmp144 = $tmp142(Iter$40$9120);
                        $tmp140 = $tmp144;
                        $tmp139 = ((org$pandalanguage$pandac$ASTNode*) $tmp140);
                        c138 = $tmp139;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
                        panda$core$Panda$unref$panda$core$Object($tmp140);
                        int $tmp147;
                        {
                            $tmp149 = c138;
                            $match$41_13148 = $tmp149;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
                            panda$core$Bit $tmp150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$41_13148->$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp150.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp152 = ((org$pandalanguage$pandac$Position*) ((char*) $match$41_13148->$data + 0));
                                position151 = *$tmp152;
                                panda$core$String** $tmp154 = ((panda$core$String**) ((char*) $match$41_13148->$data + 16));
                                text153 = *$tmp154;
                                org$pandalanguage$pandac$ASTNode** $tmp156 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$41_13148->$data + 24));
                                rawExpr155 = *$tmp156;
                                int $tmp159;
                                {
                                    $tmp161 = rawExpr155;
                                    expr160 = $tmp161;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp161));
                                    int $tmp164;
                                    {
                                        $tmp166 = text153;
                                        $match$44_21165 = $tmp166;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp166));
                                        panda$core$Bit $tmp168 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21165, &$s167);
                                        if ($tmp168.value) {
                                        {
                                            panda$core$Int64 $tmp169 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                                            panda$core$Int64 $tmp170 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags114, $tmp169);
                                            flags114 = $tmp170;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp172 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21165, &$s171);
                                        if ($tmp172.value) {
                                        {
                                            panda$core$Int64 $tmp173 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                                            panda$core$Int64 $tmp174 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags114, $tmp173);
                                            flags114 = $tmp174;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp176 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21165, &$s175);
                                        if ($tmp176.value) {
                                        {
                                            panda$core$Int64 $tmp177 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                                            panda$core$Int64 $tmp178 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags114, $tmp177);
                                            flags114 = $tmp178;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp180 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21165, &$s179);
                                        if ($tmp180.value) {
                                        {
                                            panda$core$Int64 $tmp181 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                                            panda$core$Int64 $tmp182 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags114, $tmp181);
                                            flags114 = $tmp182;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp184 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21165, &$s183);
                                        if ($tmp184.value) {
                                        {
                                            panda$core$Int64 $tmp185 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                                            panda$core$Int64 $tmp186 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags114, $tmp185);
                                            flags114 = $tmp186;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp188 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21165, &$s187);
                                        if ($tmp188.value) {
                                        {
                                            panda$core$Int64 $tmp189 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                                            panda$core$Int64 $tmp190 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags114, $tmp189);
                                            flags114 = $tmp190;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp192 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21165, &$s191);
                                        if ($tmp192.value) {
                                        {
                                            panda$core$Int64 $tmp193 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                                            panda$core$Int64 $tmp194 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags114, $tmp193);
                                            flags114 = $tmp194;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp196 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21165, &$s195);
                                        if ($tmp196.value) {
                                        {
                                            panda$core$Int64 $tmp197 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                                            panda$core$Int64 $tmp198 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags114, $tmp197);
                                            flags114 = $tmp198;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp200 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21165, &$s199);
                                        if ($tmp200.value) {
                                        {
                                            panda$core$Int64 $tmp201 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                                            panda$core$Int64 $tmp202 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags114, $tmp201);
                                            flags114 = $tmp202;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp204 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21165, &$s203);
                                        if ($tmp204.value) {
                                        {
                                            panda$core$Int64 $tmp205 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                                            panda$core$Int64 $tmp206 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags114, $tmp205);
                                            flags114 = $tmp206;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp208 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21165, &$s207);
                                        if ($tmp208.value) {
                                        {
                                            panda$core$Int64 $tmp209 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                                            panda$core$Int64 $tmp210 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags114, $tmp209);
                                            flags114 = $tmp210;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp212 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21165, &$s211);
                                        if ($tmp212.value) {
                                        {
                                            panda$core$Int64 $tmp213 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 12 }));
                                            panda$core$Int64 $tmp214 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags114, $tmp213);
                                            flags114 = $tmp214;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp216 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21165, &$s215);
                                        if ($tmp216.value) {
                                        {
                                            if (((panda$core$Bit) { expressions115 == NULL }).value) {
                                            {
                                                {
                                                    $tmp217 = expressions115;
                                                    panda$collections$Array* $tmp220 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp220);
                                                    $tmp219 = $tmp220;
                                                    $tmp218 = $tmp219;
                                                    expressions115 = $tmp218;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp218));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp222 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp222, ((panda$core$Int64) { 0 }), expr160);
                                            $tmp221 = $tmp222;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions115, ((panda$core$Object*) $tmp221));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp221));
                                            {
                                                $tmp223 = expr160;
                                                $tmp224 = NULL;
                                                expr160 = $tmp224;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp224));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp223));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp226 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21165, &$s225);
                                        if ($tmp226.value) {
                                        {
                                            if (((panda$core$Bit) { expressions115 == NULL }).value) {
                                            {
                                                {
                                                    $tmp227 = expressions115;
                                                    panda$collections$Array* $tmp230 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp230);
                                                    $tmp229 = $tmp230;
                                                    $tmp228 = $tmp229;
                                                    expressions115 = $tmp228;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp228));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp229));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp227));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp232 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp232, ((panda$core$Int64) { 1 }), expr160);
                                            $tmp231 = $tmp232;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions115, ((panda$core$Object*) $tmp231));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp231));
                                            {
                                                $tmp233 = expr160;
                                                $tmp234 = NULL;
                                                expr160 = $tmp234;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp234));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp233));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp236 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21165, &$s235);
                                        if ($tmp236.value) {
                                        {
                                            if (((panda$core$Bit) { expressions115 == NULL }).value) {
                                            {
                                                {
                                                    $tmp237 = expressions115;
                                                    panda$collections$Array* $tmp240 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp240);
                                                    $tmp239 = $tmp240;
                                                    $tmp238 = $tmp239;
                                                    expressions115 = $tmp238;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp238));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp237));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp242 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp242, ((panda$core$Int64) { 2 }), expr160);
                                            $tmp241 = $tmp242;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions115, ((panda$core$Object*) $tmp241));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp241));
                                            {
                                                $tmp243 = expr160;
                                                $tmp244 = NULL;
                                                expr160 = $tmp244;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp244));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp243));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp246 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$44_21165, &$s245);
                                        if ($tmp246.value) {
                                        {
                                            if (((panda$core$Bit) { expressions115 == NULL }).value) {
                                            {
                                                {
                                                    $tmp247 = expressions115;
                                                    panda$collections$Array* $tmp250 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp250);
                                                    $tmp249 = $tmp250;
                                                    $tmp248 = $tmp249;
                                                    expressions115 = $tmp248;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp248));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp252 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp252, ((panda$core$Int64) { 3 }), expr160);
                                            $tmp251 = $tmp252;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions115, ((panda$core$Object*) $tmp251));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp251));
                                            {
                                                $tmp253 = expr160;
                                                $tmp254 = NULL;
                                                expr160 = $tmp254;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp253));
                                            }
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$Object* $tmp257 = (($fn256) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp255 = $tmp257;
                                            panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s260, text153);
                                            $tmp259 = $tmp261;
                                            panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp259, &$s262);
                                            $tmp258 = $tmp263;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp255), position151, $tmp258);
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp259));
                                            panda$core$Panda$unref$panda$core$Object($tmp255);
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
                                    $tmp164 = -1;
                                    goto $l162;
                                    $l162:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
                                    switch ($tmp164) {
                                        case -1: goto $l264;
                                    }
                                    $l264:;
                                    if (((panda$core$Bit) { expr160 != NULL }).value) {
                                    {
                                        panda$core$Object* $tmp267 = (($fn266) self->compiler->$class->vtable[2])(self->compiler);
                                        $tmp265 = $tmp267;
                                        panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s270, text153);
                                        $tmp269 = $tmp271;
                                        panda$core$String* $tmp273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp269, &$s272);
                                        $tmp268 = $tmp273;
                                        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp265), position151, $tmp268);
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp268));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp269));
                                        panda$core$Panda$unref$panda$core$Object($tmp265);
                                    }
                                    }
                                }
                                $tmp159 = -1;
                                goto $l157;
                                $l157:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr160));
                                expr160 = NULL;
                                switch ($tmp159) {
                                    case -1: goto $l274;
                                }
                                $l274:;
                            }
                            }
                            else {
                            {
                                PANDA_ASSERT(((panda$core$Bit) { false }).value);
                            }
                            }
                        }
                        $tmp147 = -1;
                        goto $l145;
                        $l145:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
                        switch ($tmp147) {
                            case -1: goto $l275;
                        }
                        $l275:;
                    }
                    $tmp137 = -1;
                    goto $l135;
                    $l135:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c138));
                    c138 = NULL;
                    switch ($tmp137) {
                        case -1: goto $l276;
                    }
                    $l276:;
                }
                goto $l127;
                $l128:;
            }
            $tmp119 = -1;
            goto $l117;
            $l117:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$40$9120));
            Iter$40$9120 = NULL;
            switch ($tmp119) {
                case -1: goto $l277;
            }
            $l277:;
        }
        org$pandalanguage$pandac$Annotations* $tmp281 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q($tmp281, flags114, ((panda$collections$ListView*) expressions115));
        $tmp280 = $tmp281;
        $tmp279 = $tmp280;
        $finallyReturn277 = $tmp279;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp279));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp280));
        $tmp113 = 0;
        goto $l111;
        $l282:;
        return $finallyReturn277;
    }
    $l111:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions115));
    switch ($tmp113) {
        case 0: goto $l282;
    }
    $l284:;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment288 = NULL;
    panda$core$String* $tmp289;
    panda$core$String* $tmp290;
    org$pandalanguage$pandac$ASTNode* $match$102_13294 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp295;
    org$pandalanguage$pandac$Position position297;
    panda$core$String* text299 = NULL;
    panda$core$String* $tmp301;
    panda$core$String* $tmp302;
    org$pandalanguage$pandac$Annotations* annotations304 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp305;
    org$pandalanguage$pandac$Annotations* $tmp306;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind308;
    org$pandalanguage$pandac$ASTNode* $match$111_9312 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp313;
    org$pandalanguage$pandac$Variable$Kind kind315;
    panda$collections$ImmutableArray* decls317 = NULL;
    org$pandalanguage$pandac$Variable$Kind $match$113_17319;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp321;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp323;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp325;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp329;
    panda$collections$Iterator* Iter$124$17333 = NULL;
    panda$collections$Iterator* $tmp334;
    panda$collections$Iterator* $tmp335;
    org$pandalanguage$pandac$ASTNode* decl351 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp352;
    panda$core$Object* $tmp353;
    org$pandalanguage$pandac$ASTNode* $match$125_21361 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp362;
    org$pandalanguage$pandac$Position declPosition364;
    org$pandalanguage$pandac$ASTNode* target366 = NULL;
    org$pandalanguage$pandac$ASTNode* value368 = NULL;
    panda$core$String* name373 = NULL;
    org$pandalanguage$pandac$Type* type374 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$129_29378 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp379;
    panda$core$String* id381 = NULL;
    panda$core$String* $tmp383;
    panda$core$String* $tmp384;
    org$pandalanguage$pandac$Type* $tmp385;
    org$pandalanguage$pandac$Type* $tmp386;
    org$pandalanguage$pandac$Type* $tmp387;
    panda$core$String* id390 = NULL;
    org$pandalanguage$pandac$ASTNode* idType392 = NULL;
    panda$core$String* $tmp394;
    panda$core$String* $tmp395;
    org$pandalanguage$pandac$Type* $tmp396;
    org$pandalanguage$pandac$Type* $tmp397;
    org$pandalanguage$pandac$Type* $tmp398;
    org$pandalanguage$pandac$FieldDecl* field401 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp402;
    org$pandalanguage$pandac$FieldDecl* $tmp403;
    int $tmp287;
    {
        memset(&doccomment288, 0, sizeof(doccomment288));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp289 = doccomment288;
                $tmp290 = NULL;
                doccomment288 = $tmp290;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp290));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp289));
            }
        }
        }
        else {
        {
            int $tmp293;
            {
                $tmp295 = p_rawDoccomment;
                $match$102_13294 = $tmp295;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp295));
                panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$102_13294->$rawValue, ((panda$core$Int64) { 34 }));
                if ($tmp296.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp298 = ((org$pandalanguage$pandac$Position*) ((char*) $match$102_13294->$data + 0));
                    position297 = *$tmp298;
                    panda$core$String** $tmp300 = ((panda$core$String**) ((char*) $match$102_13294->$data + 16));
                    text299 = *$tmp300;
                    {
                        $tmp301 = doccomment288;
                        $tmp302 = text299;
                        doccomment288 = $tmp302;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp302));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp301));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp293 = -1;
            goto $l291;
            $l291:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp295));
            switch ($tmp293) {
                case -1: goto $l303;
            }
            $l303:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp307 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp306 = $tmp307;
        $tmp305 = $tmp306;
        annotations304 = $tmp305;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp305));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
        memset(&fieldKind308, 0, sizeof(fieldKind308));
        int $tmp311;
        {
            $tmp313 = p_varDecl;
            $match$111_9312 = $tmp313;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp313));
            panda$core$Bit $tmp314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$111_9312->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp314.value) {
            {
                org$pandalanguage$pandac$Variable$Kind* $tmp316 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$111_9312->$data + 16));
                kind315 = *$tmp316;
                panda$collections$ImmutableArray** $tmp318 = ((panda$collections$ImmutableArray**) ((char*) $match$111_9312->$data + 24));
                decls317 = *$tmp318;
                {
                    $match$113_17319 = kind315;
                    panda$core$Bit $tmp320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$113_17319.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp320.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp321, ((panda$core$Int64) { 0 }));
                        fieldKind308 = $tmp321;
                    }
                    }
                    else {
                    panda$core$Bit $tmp322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$113_17319.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp322.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp323, ((panda$core$Int64) { 1 }));
                        fieldKind308 = $tmp323;
                    }
                    }
                    else {
                    panda$core$Bit $tmp324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$113_17319.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp324.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp325, ((panda$core$Int64) { 2 }));
                        fieldKind308 = $tmp325;
                        panda$core$Int64 $tmp326 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                        panda$core$Int64 $tmp327 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations304->flags, $tmp326);
                        annotations304->flags = $tmp327;
                    }
                    }
                    else {
                    panda$core$Bit $tmp328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$113_17319.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp328.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp329, ((panda$core$Int64) { 3 }));
                        fieldKind308 = $tmp329;
                    }
                    }
                    }
                    }
                    }
                }
                {
                    int $tmp332;
                    {
                        ITable* $tmp336 = ((panda$collections$Iterable*) decls317)->$class->itable;
                        while ($tmp336->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp336 = $tmp336->next;
                        }
                        $fn338 $tmp337 = $tmp336->methods[0];
                        panda$collections$Iterator* $tmp339 = $tmp337(((panda$collections$Iterable*) decls317));
                        $tmp335 = $tmp339;
                        $tmp334 = $tmp335;
                        Iter$124$17333 = $tmp334;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp334));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335));
                        $l340:;
                        ITable* $tmp343 = Iter$124$17333->$class->itable;
                        while ($tmp343->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp343 = $tmp343->next;
                        }
                        $fn345 $tmp344 = $tmp343->methods[0];
                        panda$core$Bit $tmp346 = $tmp344(Iter$124$17333);
                        panda$core$Bit $tmp347 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp346);
                        bool $tmp342 = $tmp347.value;
                        if (!$tmp342) goto $l341;
                        {
                            int $tmp350;
                            {
                                ITable* $tmp354 = Iter$124$17333->$class->itable;
                                while ($tmp354->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp354 = $tmp354->next;
                                }
                                $fn356 $tmp355 = $tmp354->methods[1];
                                panda$core$Object* $tmp357 = $tmp355(Iter$124$17333);
                                $tmp353 = $tmp357;
                                $tmp352 = ((org$pandalanguage$pandac$ASTNode*) $tmp353);
                                decl351 = $tmp352;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp352));
                                panda$core$Panda$unref$panda$core$Object($tmp353);
                                int $tmp360;
                                {
                                    $tmp362 = decl351;
                                    $match$125_21361 = $tmp362;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp362));
                                    panda$core$Bit $tmp363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_21361->$rawValue, ((panda$core$Int64) { 11 }));
                                    if ($tmp363.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp365 = ((org$pandalanguage$pandac$Position*) ((char*) $match$125_21361->$data + 0));
                                        declPosition364 = *$tmp365;
                                        org$pandalanguage$pandac$ASTNode** $tmp367 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_21361->$data + 16));
                                        target366 = *$tmp367;
                                        org$pandalanguage$pandac$ASTNode** $tmp369 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_21361->$data + 24));
                                        value368 = *$tmp369;
                                        int $tmp372;
                                        {
                                            memset(&name373, 0, sizeof(name373));
                                            memset(&type374, 0, sizeof(type374));
                                            int $tmp377;
                                            {
                                                $tmp379 = target366;
                                                $match$129_29378 = $tmp379;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp379));
                                                panda$core$Bit $tmp380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$129_29378->$rawValue, ((panda$core$Int64) { 18 }));
                                                if ($tmp380.value) {
                                                {
                                                    panda$core$String** $tmp382 = ((panda$core$String**) ((char*) $match$129_29378->$data + 16));
                                                    id381 = *$tmp382;
                                                    {
                                                        $tmp383 = name373;
                                                        $tmp384 = id381;
                                                        name373 = $tmp384;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp384));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp383));
                                                    }
                                                    {
                                                        $tmp385 = type374;
                                                        org$pandalanguage$pandac$Type* $tmp388 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                        $tmp387 = $tmp388;
                                                        $tmp386 = $tmp387;
                                                        type374 = $tmp386;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp386));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp385));
                                                    }
                                                }
                                                }
                                                else {
                                                panda$core$Bit $tmp389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$129_29378->$rawValue, ((panda$core$Int64) { 37 }));
                                                if ($tmp389.value) {
                                                {
                                                    panda$core$String** $tmp391 = ((panda$core$String**) ((char*) $match$129_29378->$data + 16));
                                                    id390 = *$tmp391;
                                                    org$pandalanguage$pandac$ASTNode** $tmp393 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$129_29378->$data + 24));
                                                    idType392 = *$tmp393;
                                                    {
                                                        $tmp394 = name373;
                                                        $tmp395 = id390;
                                                        name373 = $tmp395;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp395));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp394));
                                                    }
                                                    {
                                                        $tmp396 = type374;
                                                        org$pandalanguage$pandac$Type* $tmp399 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType392);
                                                        $tmp398 = $tmp399;
                                                        $tmp397 = $tmp398;
                                                        type374 = $tmp397;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp397));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp398));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
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
                                            $tmp377 = -1;
                                            goto $l375;
                                            $l375:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
                                            switch ($tmp377) {
                                                case -1: goto $l400;
                                            }
                                            $l400:;
                                            org$pandalanguage$pandac$FieldDecl* $tmp404 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp404, p_owner, declPosition364, doccomment288, annotations304, fieldKind308, name373, type374, value368);
                                            $tmp403 = $tmp404;
                                            $tmp402 = $tmp403;
                                            field401 = $tmp402;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp402));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field401));
                                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field401));
                                        }
                                        $tmp372 = -1;
                                        goto $l370;
                                        $l370:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name373));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type374));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field401));
                                        field401 = NULL;
                                        switch ($tmp372) {
                                            case -1: goto $l405;
                                        }
                                        $l405:;
                                    }
                                    }
                                    else {
                                    {
                                        PANDA_ASSERT(((panda$core$Bit) { false }).value);
                                    }
                                    }
                                }
                                $tmp360 = -1;
                                goto $l358;
                                $l358:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp362));
                                switch ($tmp360) {
                                    case -1: goto $l406;
                                }
                                $l406:;
                            }
                            $tmp350 = -1;
                            goto $l348;
                            $l348:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl351));
                            decl351 = NULL;
                            switch ($tmp350) {
                                case -1: goto $l407;
                            }
                            $l407:;
                        }
                        goto $l340;
                        $l341:;
                    }
                    $tmp332 = -1;
                    goto $l330;
                    $l330:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$124$17333));
                    Iter$124$17333 = NULL;
                    switch ($tmp332) {
                        case -1: goto $l408;
                    }
                    $l408:;
                }
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
        $tmp311 = -1;
        goto $l309;
        $l309:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp313));
        switch ($tmp311) {
            case -1: goto $l409;
        }
        $l409:;
    }
    $tmp287 = -1;
    goto $l285;
    $l285:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment288));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations304));
    annotations304 = NULL;
    switch ($tmp287) {
        case -1: goto $l410;
    }
    $l410:;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$154_9414 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp415;
    org$pandalanguage$pandac$ASTNode* test417 = NULL;
    panda$core$Int64 $finallyReturn418;
    org$pandalanguage$pandac$ASTNode* left424 = NULL;
    org$pandalanguage$pandac$ASTNode* right426 = NULL;
    panda$core$Int64 $finallyReturn427;
    panda$core$Int64 $finallyReturn435;
    panda$collections$ImmutableArray* statements440 = NULL;
    panda$core$Int64 result442;
    panda$collections$Iterator* Iter$163$17446 = NULL;
    panda$collections$Iterator* $tmp447;
    panda$collections$Iterator* $tmp448;
    org$pandalanguage$pandac$ASTNode* s464 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp465;
    panda$core$Object* $tmp466;
    panda$core$Int64 $finallyReturn474;
    panda$core$Int64 $finallyReturn478;
    org$pandalanguage$pandac$ASTNode* target483 = NULL;
    panda$collections$ImmutableArray* args485 = NULL;
    panda$core$Int64 result487;
    panda$collections$Iterator* Iter$171$17492 = NULL;
    panda$collections$Iterator* $tmp493;
    panda$collections$Iterator* $tmp494;
    org$pandalanguage$pandac$ASTNode* a510 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp511;
    panda$core$Object* $tmp512;
    panda$core$Int64 $finallyReturn520;
    org$pandalanguage$pandac$ASTNode* base525 = NULL;
    panda$core$Int64 $finallyReturn526;
    panda$core$Int64 $finallyReturn531;
    org$pandalanguage$pandac$ASTNode* value536 = NULL;
    panda$core$Int64 $finallyReturn537;
    panda$core$Int64 $finallyReturn540;
    panda$collections$ImmutableArray* statements546 = NULL;
    org$pandalanguage$pandac$ASTNode* test548 = NULL;
    panda$core$Int64 result550;
    panda$collections$Iterator* Iter$186$17555 = NULL;
    panda$collections$Iterator* $tmp556;
    panda$collections$Iterator* $tmp557;
    org$pandalanguage$pandac$ASTNode* s573 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp574;
    panda$core$Object* $tmp575;
    panda$core$Int64 $finallyReturn583;
    org$pandalanguage$pandac$ASTNode* base588 = NULL;
    panda$core$Int64 $finallyReturn589;
    org$pandalanguage$pandac$ASTNode* list595 = NULL;
    panda$collections$ImmutableArray* statements597 = NULL;
    panda$core$Int64 result599;
    panda$collections$Iterator* Iter$194$17604 = NULL;
    panda$collections$Iterator* $tmp605;
    panda$collections$Iterator* $tmp606;
    org$pandalanguage$pandac$ASTNode* s622 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp623;
    panda$core$Object* $tmp624;
    panda$core$Int64 $finallyReturn632;
    panda$core$Int64 $finallyReturn636;
    panda$core$Int64 $finallyReturn640;
    org$pandalanguage$pandac$ASTNode* test645 = NULL;
    panda$collections$ImmutableArray* ifTrue647 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse649 = NULL;
    panda$core$Int64 result651;
    panda$collections$Iterator* Iter$204$17656 = NULL;
    panda$collections$Iterator* $tmp657;
    panda$collections$Iterator* $tmp658;
    org$pandalanguage$pandac$ASTNode* s674 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp675;
    panda$core$Object* $tmp676;
    panda$core$Int64 $finallyReturn686;
    panda$core$Int64 $finallyReturn690;
    panda$collections$ImmutableArray* statements695 = NULL;
    panda$core$Int64 result697;
    panda$collections$Iterator* Iter$215$17701 = NULL;
    panda$collections$Iterator* $tmp702;
    panda$collections$Iterator* $tmp703;
    org$pandalanguage$pandac$ASTNode* s719 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp720;
    panda$core$Object* $tmp721;
    panda$core$Int64 $finallyReturn729;
    org$pandalanguage$pandac$ASTNode* value734 = NULL;
    panda$collections$ImmutableArray* whens736 = NULL;
    panda$collections$ImmutableArray* other738 = NULL;
    panda$core$Int64 result740;
    panda$collections$Iterator* Iter$221$17745 = NULL;
    panda$collections$Iterator* $tmp746;
    panda$collections$Iterator* $tmp747;
    org$pandalanguage$pandac$ASTNode* w763 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp764;
    panda$core$Object* $tmp765;
    panda$collections$Iterator* Iter$225$21777 = NULL;
    panda$collections$Iterator* $tmp778;
    panda$collections$Iterator* $tmp779;
    org$pandalanguage$pandac$ASTNode* s795 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp796;
    panda$core$Object* $tmp797;
    panda$core$Int64 $finallyReturn805;
    panda$core$Int64 $finallyReturn809;
    panda$core$Int64 $finallyReturn813;
    org$pandalanguage$pandac$ASTNode* base818 = NULL;
    panda$core$Int64 $finallyReturn819;
    panda$core$Int64 $finallyReturn825;
    panda$core$Int64 $finallyReturn829;
    org$pandalanguage$pandac$ASTNode* value834 = NULL;
    panda$core$Int64 $finallyReturn835;
    panda$core$Int64 $finallyReturn838;
    panda$core$Int64 $finallyReturn843;
    panda$core$Int64 $finallyReturn847;
    panda$core$Int64 $finallyReturn851;
    panda$core$Int64 $finallyReturn855;
    panda$collections$ImmutableArray* decls860 = NULL;
    panda$core$Int64 result862;
    panda$collections$Iterator* Iter$255$17866 = NULL;
    panda$collections$Iterator* $tmp867;
    panda$collections$Iterator* $tmp868;
    org$pandalanguage$pandac$ASTNode* decl884 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp885;
    panda$core$Object* $tmp886;
    panda$core$Int64 $finallyReturn894;
    panda$collections$ImmutableArray* tests899 = NULL;
    panda$collections$ImmutableArray* statements901 = NULL;
    panda$core$Int64 result903;
    panda$collections$Iterator* Iter$261$17907 = NULL;
    panda$collections$Iterator* $tmp908;
    panda$collections$Iterator* $tmp909;
    org$pandalanguage$pandac$ASTNode* test925 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp926;
    panda$core$Object* $tmp927;
    panda$collections$Iterator* Iter$264$17939 = NULL;
    panda$collections$Iterator* $tmp940;
    panda$collections$Iterator* $tmp941;
    org$pandalanguage$pandac$ASTNode* s957 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp958;
    panda$core$Object* $tmp959;
    panda$core$Int64 $finallyReturn967;
    org$pandalanguage$pandac$ASTNode* test972 = NULL;
    panda$collections$ImmutableArray* statements974 = NULL;
    panda$core$Int64 result976;
    panda$collections$Iterator* Iter$270$17981 = NULL;
    panda$collections$Iterator* $tmp982;
    panda$collections$Iterator* $tmp983;
    org$pandalanguage$pandac$ASTNode* s999 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1000;
    panda$core$Object* $tmp1001;
    panda$core$Int64 $finallyReturn1009;
    int $tmp413;
    {
        $tmp415 = p_node;
        $match$154_9414 = $tmp415;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp415));
        panda$core$Bit $tmp416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp416.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp418 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9414->$data + 16));
            test417 = *$tmp418;
            panda$core$Int64 $tmp420 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test417);
            $finallyReturn418 = $tmp420;
            $tmp413 = 0;
            goto $l411;
            $l421:;
            return $finallyReturn418;
        }
        }
        else {
        panda$core$Bit $tmp423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp423.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp425 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9414->$data + 16));
            left424 = *$tmp425;
            org$pandalanguage$pandac$ASTNode** $tmp427 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9414->$data + 32));
            right426 = *$tmp427;
            panda$core$Int64 $tmp429 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left424);
            panda$core$Int64 $tmp430 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp429);
            panda$core$Int64 $tmp431 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right426);
            panda$core$Int64 $tmp432 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp430, $tmp431);
            $finallyReturn427 = $tmp432;
            $tmp413 = 1;
            goto $l411;
            $l433:;
            return $finallyReturn427;
        }
        }
        else {
        panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp435.value) {
        {
            $finallyReturn435 = ((panda$core$Int64) { 1 });
            $tmp413 = 2;
            goto $l411;
            $l437:;
            return $finallyReturn435;
        }
        }
        else {
        panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp439.value) {
        {
            panda$collections$ImmutableArray** $tmp441 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9414->$data + 16));
            statements440 = *$tmp441;
            result442 = ((panda$core$Int64) { 0 });
            {
                int $tmp445;
                {
                    ITable* $tmp449 = ((panda$collections$Iterable*) statements440)->$class->itable;
                    while ($tmp449->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp449 = $tmp449->next;
                    }
                    $fn451 $tmp450 = $tmp449->methods[0];
                    panda$collections$Iterator* $tmp452 = $tmp450(((panda$collections$Iterable*) statements440));
                    $tmp448 = $tmp452;
                    $tmp447 = $tmp448;
                    Iter$163$17446 = $tmp447;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp447));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp448));
                    $l453:;
                    ITable* $tmp456 = Iter$163$17446->$class->itable;
                    while ($tmp456->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp456 = $tmp456->next;
                    }
                    $fn458 $tmp457 = $tmp456->methods[0];
                    panda$core$Bit $tmp459 = $tmp457(Iter$163$17446);
                    panda$core$Bit $tmp460 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp459);
                    bool $tmp455 = $tmp460.value;
                    if (!$tmp455) goto $l454;
                    {
                        int $tmp463;
                        {
                            ITable* $tmp467 = Iter$163$17446->$class->itable;
                            while ($tmp467->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp467 = $tmp467->next;
                            }
                            $fn469 $tmp468 = $tmp467->methods[1];
                            panda$core$Object* $tmp470 = $tmp468(Iter$163$17446);
                            $tmp466 = $tmp470;
                            $tmp465 = ((org$pandalanguage$pandac$ASTNode*) $tmp466);
                            s464 = $tmp465;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp465));
                            panda$core$Panda$unref$panda$core$Object($tmp466);
                            panda$core$Int64 $tmp471 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s464);
                            panda$core$Int64 $tmp472 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result442, $tmp471);
                            result442 = $tmp472;
                        }
                        $tmp463 = -1;
                        goto $l461;
                        $l461:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s464));
                        s464 = NULL;
                        switch ($tmp463) {
                            case -1: goto $l473;
                        }
                        $l473:;
                    }
                    goto $l453;
                    $l454:;
                }
                $tmp445 = -1;
                goto $l443;
                $l443:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$163$17446));
                Iter$163$17446 = NULL;
                switch ($tmp445) {
                    case -1: goto $l474;
                }
                $l474:;
            }
            $finallyReturn474 = result442;
            $tmp413 = 3;
            goto $l411;
            $l476:;
            return $finallyReturn474;
        }
        }
        else {
        panda$core$Bit $tmp478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp478.value) {
        {
            $finallyReturn478 = ((panda$core$Int64) { 1 });
            $tmp413 = 4;
            goto $l411;
            $l480:;
            return $finallyReturn478;
        }
        }
        else {
        panda$core$Bit $tmp482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp482.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp484 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9414->$data + 16));
            target483 = *$tmp484;
            panda$collections$ImmutableArray** $tmp486 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9414->$data + 24));
            args485 = *$tmp486;
            panda$core$Int64 $tmp488 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target483);
            result487 = $tmp488;
            {
                int $tmp491;
                {
                    ITable* $tmp495 = ((panda$collections$Iterable*) args485)->$class->itable;
                    while ($tmp495->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp495 = $tmp495->next;
                    }
                    $fn497 $tmp496 = $tmp495->methods[0];
                    panda$collections$Iterator* $tmp498 = $tmp496(((panda$collections$Iterable*) args485));
                    $tmp494 = $tmp498;
                    $tmp493 = $tmp494;
                    Iter$171$17492 = $tmp493;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp493));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp494));
                    $l499:;
                    ITable* $tmp502 = Iter$171$17492->$class->itable;
                    while ($tmp502->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp502 = $tmp502->next;
                    }
                    $fn504 $tmp503 = $tmp502->methods[0];
                    panda$core$Bit $tmp505 = $tmp503(Iter$171$17492);
                    panda$core$Bit $tmp506 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp505);
                    bool $tmp501 = $tmp506.value;
                    if (!$tmp501) goto $l500;
                    {
                        int $tmp509;
                        {
                            ITable* $tmp513 = Iter$171$17492->$class->itable;
                            while ($tmp513->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp513 = $tmp513->next;
                            }
                            $fn515 $tmp514 = $tmp513->methods[1];
                            panda$core$Object* $tmp516 = $tmp514(Iter$171$17492);
                            $tmp512 = $tmp516;
                            $tmp511 = ((org$pandalanguage$pandac$ASTNode*) $tmp512);
                            a510 = $tmp511;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp511));
                            panda$core$Panda$unref$panda$core$Object($tmp512);
                            panda$core$Int64 $tmp517 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a510);
                            panda$core$Int64 $tmp518 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result487, $tmp517);
                            result487 = $tmp518;
                        }
                        $tmp509 = -1;
                        goto $l507;
                        $l507:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a510));
                        a510 = NULL;
                        switch ($tmp509) {
                            case -1: goto $l519;
                        }
                        $l519:;
                    }
                    goto $l499;
                    $l500:;
                }
                $tmp491 = -1;
                goto $l489;
                $l489:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$171$17492));
                Iter$171$17492 = NULL;
                switch ($tmp491) {
                    case -1: goto $l520;
                }
                $l520:;
            }
            $finallyReturn520 = result487;
            $tmp413 = 5;
            goto $l411;
            $l522:;
            return $finallyReturn520;
        }
        }
        else {
        panda$core$Bit $tmp524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp524.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp526 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9414->$data + 16));
            base525 = *$tmp526;
            panda$core$Int64 $tmp528 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base525);
            $finallyReturn526 = $tmp528;
            $tmp413 = 6;
            goto $l411;
            $l529:;
            return $finallyReturn526;
        }
        }
        else {
        panda$core$Bit $tmp531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp531.value) {
        {
            $finallyReturn531 = ((panda$core$Int64) { 1 });
            $tmp413 = 7;
            goto $l411;
            $l533:;
            return $finallyReturn531;
        }
        }
        else {
        panda$core$Bit $tmp535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp535.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp537 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9414->$data + 24));
            value536 = *$tmp537;
            if (((panda$core$Bit) { value536 == NULL }).value) {
            {
                $finallyReturn537 = ((panda$core$Int64) { 0 });
                $tmp413 = 8;
                goto $l411;
                $l539:;
                return $finallyReturn537;
            }
            }
            panda$core$Int64 $tmp542 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value536);
            $finallyReturn540 = $tmp542;
            $tmp413 = 9;
            goto $l411;
            $l543:;
            return $finallyReturn540;
        }
        }
        else {
        panda$core$Bit $tmp545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp545.value) {
        {
            panda$collections$ImmutableArray** $tmp547 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9414->$data + 24));
            statements546 = *$tmp547;
            org$pandalanguage$pandac$ASTNode** $tmp549 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9414->$data + 32));
            test548 = *$tmp549;
            panda$core$Int64 $tmp551 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test548);
            result550 = $tmp551;
            {
                int $tmp554;
                {
                    ITable* $tmp558 = ((panda$collections$Iterable*) statements546)->$class->itable;
                    while ($tmp558->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp558 = $tmp558->next;
                    }
                    $fn560 $tmp559 = $tmp558->methods[0];
                    panda$collections$Iterator* $tmp561 = $tmp559(((panda$collections$Iterable*) statements546));
                    $tmp557 = $tmp561;
                    $tmp556 = $tmp557;
                    Iter$186$17555 = $tmp556;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp556));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp557));
                    $l562:;
                    ITable* $tmp565 = Iter$186$17555->$class->itable;
                    while ($tmp565->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp565 = $tmp565->next;
                    }
                    $fn567 $tmp566 = $tmp565->methods[0];
                    panda$core$Bit $tmp568 = $tmp566(Iter$186$17555);
                    panda$core$Bit $tmp569 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp568);
                    bool $tmp564 = $tmp569.value;
                    if (!$tmp564) goto $l563;
                    {
                        int $tmp572;
                        {
                            ITable* $tmp576 = Iter$186$17555->$class->itable;
                            while ($tmp576->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp576 = $tmp576->next;
                            }
                            $fn578 $tmp577 = $tmp576->methods[1];
                            panda$core$Object* $tmp579 = $tmp577(Iter$186$17555);
                            $tmp575 = $tmp579;
                            $tmp574 = ((org$pandalanguage$pandac$ASTNode*) $tmp575);
                            s573 = $tmp574;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp574));
                            panda$core$Panda$unref$panda$core$Object($tmp575);
                            panda$core$Int64 $tmp580 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s573);
                            panda$core$Int64 $tmp581 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result550, $tmp580);
                            result550 = $tmp581;
                        }
                        $tmp572 = -1;
                        goto $l570;
                        $l570:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s573));
                        s573 = NULL;
                        switch ($tmp572) {
                            case -1: goto $l582;
                        }
                        $l582:;
                    }
                    goto $l562;
                    $l563:;
                }
                $tmp554 = -1;
                goto $l552;
                $l552:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$186$17555));
                Iter$186$17555 = NULL;
                switch ($tmp554) {
                    case -1: goto $l583;
                }
                $l583:;
            }
            $finallyReturn583 = result550;
            $tmp413 = 10;
            goto $l411;
            $l585:;
            return $finallyReturn583;
        }
        }
        else {
        panda$core$Bit $tmp587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp587.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp589 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9414->$data + 16));
            base588 = *$tmp589;
            panda$core$Int64 $tmp591 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base588);
            $finallyReturn589 = $tmp591;
            $tmp413 = 11;
            goto $l411;
            $l592:;
            return $finallyReturn589;
        }
        }
        else {
        panda$core$Bit $tmp594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp594.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp596 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9414->$data + 32));
            list595 = *$tmp596;
            panda$collections$ImmutableArray** $tmp598 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9414->$data + 40));
            statements597 = *$tmp598;
            panda$core$Int64 $tmp600 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list595);
            result599 = $tmp600;
            {
                int $tmp603;
                {
                    ITable* $tmp607 = ((panda$collections$Iterable*) statements597)->$class->itable;
                    while ($tmp607->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp607 = $tmp607->next;
                    }
                    $fn609 $tmp608 = $tmp607->methods[0];
                    panda$collections$Iterator* $tmp610 = $tmp608(((panda$collections$Iterable*) statements597));
                    $tmp606 = $tmp610;
                    $tmp605 = $tmp606;
                    Iter$194$17604 = $tmp605;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp605));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp606));
                    $l611:;
                    ITable* $tmp614 = Iter$194$17604->$class->itable;
                    while ($tmp614->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp614 = $tmp614->next;
                    }
                    $fn616 $tmp615 = $tmp614->methods[0];
                    panda$core$Bit $tmp617 = $tmp615(Iter$194$17604);
                    panda$core$Bit $tmp618 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp617);
                    bool $tmp613 = $tmp618.value;
                    if (!$tmp613) goto $l612;
                    {
                        int $tmp621;
                        {
                            ITable* $tmp625 = Iter$194$17604->$class->itable;
                            while ($tmp625->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp625 = $tmp625->next;
                            }
                            $fn627 $tmp626 = $tmp625->methods[1];
                            panda$core$Object* $tmp628 = $tmp626(Iter$194$17604);
                            $tmp624 = $tmp628;
                            $tmp623 = ((org$pandalanguage$pandac$ASTNode*) $tmp624);
                            s622 = $tmp623;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp623));
                            panda$core$Panda$unref$panda$core$Object($tmp624);
                            panda$core$Int64 $tmp629 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s622);
                            panda$core$Int64 $tmp630 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result599, $tmp629);
                            result599 = $tmp630;
                        }
                        $tmp621 = -1;
                        goto $l619;
                        $l619:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s622));
                        s622 = NULL;
                        switch ($tmp621) {
                            case -1: goto $l631;
                        }
                        $l631:;
                    }
                    goto $l611;
                    $l612:;
                }
                $tmp603 = -1;
                goto $l601;
                $l601:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$194$17604));
                Iter$194$17604 = NULL;
                switch ($tmp603) {
                    case -1: goto $l632;
                }
                $l632:;
            }
            $finallyReturn632 = result599;
            $tmp413 = 12;
            goto $l411;
            $l634:;
            return $finallyReturn632;
        }
        }
        else {
        panda$core$Bit $tmp636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp636.value) {
        {
            $finallyReturn636 = ((panda$core$Int64) { 0 });
            $tmp413 = 13;
            goto $l411;
            $l638:;
            return $finallyReturn636;
        }
        }
        else {
        panda$core$Bit $tmp640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp640.value) {
        {
            $finallyReturn640 = ((panda$core$Int64) { 1 });
            $tmp413 = 14;
            goto $l411;
            $l642:;
            return $finallyReturn640;
        }
        }
        else {
        panda$core$Bit $tmp644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp644.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp646 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9414->$data + 16));
            test645 = *$tmp646;
            panda$collections$ImmutableArray** $tmp648 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9414->$data + 24));
            ifTrue647 = *$tmp648;
            org$pandalanguage$pandac$ASTNode** $tmp650 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9414->$data + 32));
            ifFalse649 = *$tmp650;
            panda$core$Int64 $tmp652 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test645);
            result651 = $tmp652;
            {
                int $tmp655;
                {
                    ITable* $tmp659 = ((panda$collections$Iterable*) ifTrue647)->$class->itable;
                    while ($tmp659->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp659 = $tmp659->next;
                    }
                    $fn661 $tmp660 = $tmp659->methods[0];
                    panda$collections$Iterator* $tmp662 = $tmp660(((panda$collections$Iterable*) ifTrue647));
                    $tmp658 = $tmp662;
                    $tmp657 = $tmp658;
                    Iter$204$17656 = $tmp657;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp657));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp658));
                    $l663:;
                    ITable* $tmp666 = Iter$204$17656->$class->itable;
                    while ($tmp666->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp666 = $tmp666->next;
                    }
                    $fn668 $tmp667 = $tmp666->methods[0];
                    panda$core$Bit $tmp669 = $tmp667(Iter$204$17656);
                    panda$core$Bit $tmp670 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp669);
                    bool $tmp665 = $tmp670.value;
                    if (!$tmp665) goto $l664;
                    {
                        int $tmp673;
                        {
                            ITable* $tmp677 = Iter$204$17656->$class->itable;
                            while ($tmp677->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp677 = $tmp677->next;
                            }
                            $fn679 $tmp678 = $tmp677->methods[1];
                            panda$core$Object* $tmp680 = $tmp678(Iter$204$17656);
                            $tmp676 = $tmp680;
                            $tmp675 = ((org$pandalanguage$pandac$ASTNode*) $tmp676);
                            s674 = $tmp675;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp675));
                            panda$core$Panda$unref$panda$core$Object($tmp676);
                            panda$core$Int64 $tmp681 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s674);
                            panda$core$Int64 $tmp682 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result651, $tmp681);
                            result651 = $tmp682;
                        }
                        $tmp673 = -1;
                        goto $l671;
                        $l671:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s674));
                        s674 = NULL;
                        switch ($tmp673) {
                            case -1: goto $l683;
                        }
                        $l683:;
                    }
                    goto $l663;
                    $l664:;
                }
                $tmp655 = -1;
                goto $l653;
                $l653:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$204$17656));
                Iter$204$17656 = NULL;
                switch ($tmp655) {
                    case -1: goto $l684;
                }
                $l684:;
            }
            if (((panda$core$Bit) { ifFalse649 != NULL }).value) {
            {
                panda$core$Int64 $tmp685 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse649);
                panda$core$Int64 $tmp686 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result651, $tmp685);
                result651 = $tmp686;
            }
            }
            $finallyReturn686 = result651;
            $tmp413 = 15;
            goto $l411;
            $l688:;
            return $finallyReturn686;
        }
        }
        else {
        panda$core$Bit $tmp690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp690.value) {
        {
            $finallyReturn690 = ((panda$core$Int64) { 1 });
            $tmp413 = 16;
            goto $l411;
            $l692:;
            return $finallyReturn690;
        }
        }
        else {
        panda$core$Bit $tmp694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp694.value) {
        {
            panda$collections$ImmutableArray** $tmp696 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9414->$data + 24));
            statements695 = *$tmp696;
            result697 = ((panda$core$Int64) { 0 });
            {
                int $tmp700;
                {
                    ITable* $tmp704 = ((panda$collections$Iterable*) statements695)->$class->itable;
                    while ($tmp704->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp704 = $tmp704->next;
                    }
                    $fn706 $tmp705 = $tmp704->methods[0];
                    panda$collections$Iterator* $tmp707 = $tmp705(((panda$collections$Iterable*) statements695));
                    $tmp703 = $tmp707;
                    $tmp702 = $tmp703;
                    Iter$215$17701 = $tmp702;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp702));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp703));
                    $l708:;
                    ITable* $tmp711 = Iter$215$17701->$class->itable;
                    while ($tmp711->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp711 = $tmp711->next;
                    }
                    $fn713 $tmp712 = $tmp711->methods[0];
                    panda$core$Bit $tmp714 = $tmp712(Iter$215$17701);
                    panda$core$Bit $tmp715 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp714);
                    bool $tmp710 = $tmp715.value;
                    if (!$tmp710) goto $l709;
                    {
                        int $tmp718;
                        {
                            ITable* $tmp722 = Iter$215$17701->$class->itable;
                            while ($tmp722->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp722 = $tmp722->next;
                            }
                            $fn724 $tmp723 = $tmp722->methods[1];
                            panda$core$Object* $tmp725 = $tmp723(Iter$215$17701);
                            $tmp721 = $tmp725;
                            $tmp720 = ((org$pandalanguage$pandac$ASTNode*) $tmp721);
                            s719 = $tmp720;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp720));
                            panda$core$Panda$unref$panda$core$Object($tmp721);
                            panda$core$Int64 $tmp726 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s719);
                            panda$core$Int64 $tmp727 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result697, $tmp726);
                            result697 = $tmp727;
                        }
                        $tmp718 = -1;
                        goto $l716;
                        $l716:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s719));
                        s719 = NULL;
                        switch ($tmp718) {
                            case -1: goto $l728;
                        }
                        $l728:;
                    }
                    goto $l708;
                    $l709:;
                }
                $tmp700 = -1;
                goto $l698;
                $l698:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$215$17701));
                Iter$215$17701 = NULL;
                switch ($tmp700) {
                    case -1: goto $l729;
                }
                $l729:;
            }
            $finallyReturn729 = result697;
            $tmp413 = 17;
            goto $l411;
            $l731:;
            return $finallyReturn729;
        }
        }
        else {
        panda$core$Bit $tmp733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp733.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp735 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9414->$data + 16));
            value734 = *$tmp735;
            panda$collections$ImmutableArray** $tmp737 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9414->$data + 24));
            whens736 = *$tmp737;
            panda$collections$ImmutableArray** $tmp739 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9414->$data + 32));
            other738 = *$tmp739;
            panda$core$Int64 $tmp741 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value734);
            result740 = $tmp741;
            {
                int $tmp744;
                {
                    ITable* $tmp748 = ((panda$collections$Iterable*) whens736)->$class->itable;
                    while ($tmp748->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp748 = $tmp748->next;
                    }
                    $fn750 $tmp749 = $tmp748->methods[0];
                    panda$collections$Iterator* $tmp751 = $tmp749(((panda$collections$Iterable*) whens736));
                    $tmp747 = $tmp751;
                    $tmp746 = $tmp747;
                    Iter$221$17745 = $tmp746;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp746));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp747));
                    $l752:;
                    ITable* $tmp755 = Iter$221$17745->$class->itable;
                    while ($tmp755->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp755 = $tmp755->next;
                    }
                    $fn757 $tmp756 = $tmp755->methods[0];
                    panda$core$Bit $tmp758 = $tmp756(Iter$221$17745);
                    panda$core$Bit $tmp759 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp758);
                    bool $tmp754 = $tmp759.value;
                    if (!$tmp754) goto $l753;
                    {
                        int $tmp762;
                        {
                            ITable* $tmp766 = Iter$221$17745->$class->itable;
                            while ($tmp766->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp766 = $tmp766->next;
                            }
                            $fn768 $tmp767 = $tmp766->methods[1];
                            panda$core$Object* $tmp769 = $tmp767(Iter$221$17745);
                            $tmp765 = $tmp769;
                            $tmp764 = ((org$pandalanguage$pandac$ASTNode*) $tmp765);
                            w763 = $tmp764;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp764));
                            panda$core$Panda$unref$panda$core$Object($tmp765);
                            panda$core$Int64 $tmp770 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w763);
                            panda$core$Int64 $tmp771 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result740, $tmp770);
                            result740 = $tmp771;
                        }
                        $tmp762 = -1;
                        goto $l760;
                        $l760:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w763));
                        w763 = NULL;
                        switch ($tmp762) {
                            case -1: goto $l772;
                        }
                        $l772:;
                    }
                    goto $l752;
                    $l753:;
                }
                $tmp744 = -1;
                goto $l742;
                $l742:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$221$17745));
                Iter$221$17745 = NULL;
                switch ($tmp744) {
                    case -1: goto $l773;
                }
                $l773:;
            }
            if (((panda$core$Bit) { other738 != NULL }).value) {
            {
                {
                    int $tmp776;
                    {
                        ITable* $tmp780 = ((panda$collections$Iterable*) other738)->$class->itable;
                        while ($tmp780->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp780 = $tmp780->next;
                        }
                        $fn782 $tmp781 = $tmp780->methods[0];
                        panda$collections$Iterator* $tmp783 = $tmp781(((panda$collections$Iterable*) other738));
                        $tmp779 = $tmp783;
                        $tmp778 = $tmp779;
                        Iter$225$21777 = $tmp778;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp778));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp779));
                        $l784:;
                        ITable* $tmp787 = Iter$225$21777->$class->itable;
                        while ($tmp787->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp787 = $tmp787->next;
                        }
                        $fn789 $tmp788 = $tmp787->methods[0];
                        panda$core$Bit $tmp790 = $tmp788(Iter$225$21777);
                        panda$core$Bit $tmp791 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp790);
                        bool $tmp786 = $tmp791.value;
                        if (!$tmp786) goto $l785;
                        {
                            int $tmp794;
                            {
                                ITable* $tmp798 = Iter$225$21777->$class->itable;
                                while ($tmp798->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp798 = $tmp798->next;
                                }
                                $fn800 $tmp799 = $tmp798->methods[1];
                                panda$core$Object* $tmp801 = $tmp799(Iter$225$21777);
                                $tmp797 = $tmp801;
                                $tmp796 = ((org$pandalanguage$pandac$ASTNode*) $tmp797);
                                s795 = $tmp796;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp796));
                                panda$core$Panda$unref$panda$core$Object($tmp797);
                                panda$core$Int64 $tmp802 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s795);
                                panda$core$Int64 $tmp803 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result740, $tmp802);
                                result740 = $tmp803;
                            }
                            $tmp794 = -1;
                            goto $l792;
                            $l792:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s795));
                            s795 = NULL;
                            switch ($tmp794) {
                                case -1: goto $l804;
                            }
                            $l804:;
                        }
                        goto $l784;
                        $l785:;
                    }
                    $tmp776 = -1;
                    goto $l774;
                    $l774:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$225$21777));
                    Iter$225$21777 = NULL;
                    switch ($tmp776) {
                        case -1: goto $l805;
                    }
                    $l805:;
                }
            }
            }
            $finallyReturn805 = result740;
            $tmp413 = 18;
            goto $l411;
            $l807:;
            return $finallyReturn805;
        }
        }
        else {
        panda$core$Bit $tmp809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp809.value) {
        {
            $finallyReturn809 = ((panda$core$Int64) { 1 });
            $tmp413 = 19;
            goto $l411;
            $l811:;
            return $finallyReturn809;
        }
        }
        else {
        panda$core$Bit $tmp813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp813.value) {
        {
            $finallyReturn813 = ((panda$core$Int64) { 0 });
            $tmp413 = 20;
            goto $l411;
            $l815:;
            return $finallyReturn813;
        }
        }
        else {
        panda$core$Bit $tmp817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp817.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp819 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9414->$data + 24));
            base818 = *$tmp819;
            panda$core$Int64 $tmp821 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base818);
            panda$core$Int64 $tmp822 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp821);
            $finallyReturn819 = $tmp822;
            $tmp413 = 21;
            goto $l411;
            $l823:;
            return $finallyReturn819;
        }
        }
        else {
        panda$core$Bit $tmp825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp825.value) {
        {
            $finallyReturn825 = ((panda$core$Int64) { 1 });
            $tmp413 = 22;
            goto $l411;
            $l827:;
            return $finallyReturn825;
        }
        }
        else {
        panda$core$Bit $tmp829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp829.value) {
        {
            $finallyReturn829 = ((panda$core$Int64) { 1 });
            $tmp413 = 23;
            goto $l411;
            $l831:;
            return $finallyReturn829;
        }
        }
        else {
        panda$core$Bit $tmp833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp833.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp835 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9414->$data + 16));
            value834 = *$tmp835;
            if (((panda$core$Bit) { value834 == NULL }).value) {
            {
                $finallyReturn835 = ((panda$core$Int64) { 0 });
                $tmp413 = 24;
                goto $l411;
                $l837:;
                return $finallyReturn835;
            }
            }
            panda$core$Int64 $tmp840 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value834);
            $finallyReturn838 = $tmp840;
            $tmp413 = 25;
            goto $l411;
            $l841:;
            return $finallyReturn838;
        }
        }
        else {
        panda$core$Bit $tmp843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp843.value) {
        {
            $finallyReturn843 = ((panda$core$Int64) { 1 });
            $tmp413 = 26;
            goto $l411;
            $l845:;
            return $finallyReturn843;
        }
        }
        else {
        panda$core$Bit $tmp847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp847.value) {
        {
            $finallyReturn847 = ((panda$core$Int64) { 1 });
            $tmp413 = 27;
            goto $l411;
            $l849:;
            return $finallyReturn847;
        }
        }
        else {
        panda$core$Bit $tmp851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp851.value) {
        {
            $finallyReturn851 = ((panda$core$Int64) { 1 });
            $tmp413 = 28;
            goto $l411;
            $l853:;
            return $finallyReturn851;
        }
        }
        else {
        panda$core$Bit $tmp855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp855.value) {
        {
            $finallyReturn855 = ((panda$core$Int64) { 0 });
            $tmp413 = 29;
            goto $l411;
            $l857:;
            return $finallyReturn855;
        }
        }
        else {
        panda$core$Bit $tmp859 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp859.value) {
        {
            panda$collections$ImmutableArray** $tmp861 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9414->$data + 24));
            decls860 = *$tmp861;
            result862 = ((panda$core$Int64) { 0 });
            {
                int $tmp865;
                {
                    ITable* $tmp869 = ((panda$collections$Iterable*) decls860)->$class->itable;
                    while ($tmp869->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp869 = $tmp869->next;
                    }
                    $fn871 $tmp870 = $tmp869->methods[0];
                    panda$collections$Iterator* $tmp872 = $tmp870(((panda$collections$Iterable*) decls860));
                    $tmp868 = $tmp872;
                    $tmp867 = $tmp868;
                    Iter$255$17866 = $tmp867;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp867));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp868));
                    $l873:;
                    ITable* $tmp876 = Iter$255$17866->$class->itable;
                    while ($tmp876->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp876 = $tmp876->next;
                    }
                    $fn878 $tmp877 = $tmp876->methods[0];
                    panda$core$Bit $tmp879 = $tmp877(Iter$255$17866);
                    panda$core$Bit $tmp880 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp879);
                    bool $tmp875 = $tmp880.value;
                    if (!$tmp875) goto $l874;
                    {
                        int $tmp883;
                        {
                            ITable* $tmp887 = Iter$255$17866->$class->itable;
                            while ($tmp887->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp887 = $tmp887->next;
                            }
                            $fn889 $tmp888 = $tmp887->methods[1];
                            panda$core$Object* $tmp890 = $tmp888(Iter$255$17866);
                            $tmp886 = $tmp890;
                            $tmp885 = ((org$pandalanguage$pandac$ASTNode*) $tmp886);
                            decl884 = $tmp885;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp885));
                            panda$core$Panda$unref$panda$core$Object($tmp886);
                            panda$core$Int64 $tmp891 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl884);
                            panda$core$Int64 $tmp892 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result862, $tmp891);
                            result862 = $tmp892;
                        }
                        $tmp883 = -1;
                        goto $l881;
                        $l881:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl884));
                        decl884 = NULL;
                        switch ($tmp883) {
                            case -1: goto $l893;
                        }
                        $l893:;
                    }
                    goto $l873;
                    $l874:;
                }
                $tmp865 = -1;
                goto $l863;
                $l863:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$255$17866));
                Iter$255$17866 = NULL;
                switch ($tmp865) {
                    case -1: goto $l894;
                }
                $l894:;
            }
            $finallyReturn894 = result862;
            $tmp413 = 30;
            goto $l411;
            $l896:;
            return $finallyReturn894;
        }
        }
        else {
        panda$core$Bit $tmp898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp898.value) {
        {
            panda$collections$ImmutableArray** $tmp900 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9414->$data + 16));
            tests899 = *$tmp900;
            panda$collections$ImmutableArray** $tmp902 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9414->$data + 24));
            statements901 = *$tmp902;
            result903 = ((panda$core$Int64) { 0 });
            {
                int $tmp906;
                {
                    ITable* $tmp910 = ((panda$collections$Iterable*) tests899)->$class->itable;
                    while ($tmp910->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp910 = $tmp910->next;
                    }
                    $fn912 $tmp911 = $tmp910->methods[0];
                    panda$collections$Iterator* $tmp913 = $tmp911(((panda$collections$Iterable*) tests899));
                    $tmp909 = $tmp913;
                    $tmp908 = $tmp909;
                    Iter$261$17907 = $tmp908;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp908));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp909));
                    $l914:;
                    ITable* $tmp917 = Iter$261$17907->$class->itable;
                    while ($tmp917->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp917 = $tmp917->next;
                    }
                    $fn919 $tmp918 = $tmp917->methods[0];
                    panda$core$Bit $tmp920 = $tmp918(Iter$261$17907);
                    panda$core$Bit $tmp921 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp920);
                    bool $tmp916 = $tmp921.value;
                    if (!$tmp916) goto $l915;
                    {
                        int $tmp924;
                        {
                            ITable* $tmp928 = Iter$261$17907->$class->itable;
                            while ($tmp928->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp928 = $tmp928->next;
                            }
                            $fn930 $tmp929 = $tmp928->methods[1];
                            panda$core$Object* $tmp931 = $tmp929(Iter$261$17907);
                            $tmp927 = $tmp931;
                            $tmp926 = ((org$pandalanguage$pandac$ASTNode*) $tmp927);
                            test925 = $tmp926;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp926));
                            panda$core$Panda$unref$panda$core$Object($tmp927);
                            panda$core$Int64 $tmp932 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test925);
                            panda$core$Int64 $tmp933 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result903, $tmp932);
                            result903 = $tmp933;
                        }
                        $tmp924 = -1;
                        goto $l922;
                        $l922:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test925));
                        test925 = NULL;
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$261$17907));
                Iter$261$17907 = NULL;
                switch ($tmp906) {
                    case -1: goto $l935;
                }
                $l935:;
            }
            {
                int $tmp938;
                {
                    ITable* $tmp942 = ((panda$collections$Iterable*) statements901)->$class->itable;
                    while ($tmp942->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp942 = $tmp942->next;
                    }
                    $fn944 $tmp943 = $tmp942->methods[0];
                    panda$collections$Iterator* $tmp945 = $tmp943(((panda$collections$Iterable*) statements901));
                    $tmp941 = $tmp945;
                    $tmp940 = $tmp941;
                    Iter$264$17939 = $tmp940;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp940));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp941));
                    $l946:;
                    ITable* $tmp949 = Iter$264$17939->$class->itable;
                    while ($tmp949->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp949 = $tmp949->next;
                    }
                    $fn951 $tmp950 = $tmp949->methods[0];
                    panda$core$Bit $tmp952 = $tmp950(Iter$264$17939);
                    panda$core$Bit $tmp953 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp952);
                    bool $tmp948 = $tmp953.value;
                    if (!$tmp948) goto $l947;
                    {
                        int $tmp956;
                        {
                            ITable* $tmp960 = Iter$264$17939->$class->itable;
                            while ($tmp960->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp960 = $tmp960->next;
                            }
                            $fn962 $tmp961 = $tmp960->methods[1];
                            panda$core$Object* $tmp963 = $tmp961(Iter$264$17939);
                            $tmp959 = $tmp963;
                            $tmp958 = ((org$pandalanguage$pandac$ASTNode*) $tmp959);
                            s957 = $tmp958;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp958));
                            panda$core$Panda$unref$panda$core$Object($tmp959);
                            panda$core$Int64 $tmp964 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s957);
                            panda$core$Int64 $tmp965 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result903, $tmp964);
                            result903 = $tmp965;
                        }
                        $tmp956 = -1;
                        goto $l954;
                        $l954:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s957));
                        s957 = NULL;
                        switch ($tmp956) {
                            case -1: goto $l966;
                        }
                        $l966:;
                    }
                    goto $l946;
                    $l947:;
                }
                $tmp938 = -1;
                goto $l936;
                $l936:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$264$17939));
                Iter$264$17939 = NULL;
                switch ($tmp938) {
                    case -1: goto $l967;
                }
                $l967:;
            }
            $finallyReturn967 = result903;
            $tmp413 = 31;
            goto $l411;
            $l969:;
            return $finallyReturn967;
        }
        }
        else {
        panda$core$Bit $tmp971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$154_9414->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp971.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp973 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$154_9414->$data + 24));
            test972 = *$tmp973;
            panda$collections$ImmutableArray** $tmp975 = ((panda$collections$ImmutableArray**) ((char*) $match$154_9414->$data + 32));
            statements974 = *$tmp975;
            panda$core$Int64 $tmp977 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test972);
            result976 = $tmp977;
            {
                int $tmp980;
                {
                    ITable* $tmp984 = ((panda$collections$Iterable*) statements974)->$class->itable;
                    while ($tmp984->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp984 = $tmp984->next;
                    }
                    $fn986 $tmp985 = $tmp984->methods[0];
                    panda$collections$Iterator* $tmp987 = $tmp985(((panda$collections$Iterable*) statements974));
                    $tmp983 = $tmp987;
                    $tmp982 = $tmp983;
                    Iter$270$17981 = $tmp982;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp982));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp983));
                    $l988:;
                    ITable* $tmp991 = Iter$270$17981->$class->itable;
                    while ($tmp991->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp991 = $tmp991->next;
                    }
                    $fn993 $tmp992 = $tmp991->methods[0];
                    panda$core$Bit $tmp994 = $tmp992(Iter$270$17981);
                    panda$core$Bit $tmp995 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp994);
                    bool $tmp990 = $tmp995.value;
                    if (!$tmp990) goto $l989;
                    {
                        int $tmp998;
                        {
                            ITable* $tmp1002 = Iter$270$17981->$class->itable;
                            while ($tmp1002->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1002 = $tmp1002->next;
                            }
                            $fn1004 $tmp1003 = $tmp1002->methods[1];
                            panda$core$Object* $tmp1005 = $tmp1003(Iter$270$17981);
                            $tmp1001 = $tmp1005;
                            $tmp1000 = ((org$pandalanguage$pandac$ASTNode*) $tmp1001);
                            s999 = $tmp1000;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1000));
                            panda$core$Panda$unref$panda$core$Object($tmp1001);
                            panda$core$Int64 $tmp1006 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s999);
                            panda$core$Int64 $tmp1007 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result976, $tmp1006);
                            result976 = $tmp1007;
                        }
                        $tmp998 = -1;
                        goto $l996;
                        $l996:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s999));
                        s999 = NULL;
                        switch ($tmp998) {
                            case -1: goto $l1008;
                        }
                        $l1008:;
                    }
                    goto $l988;
                    $l989:;
                }
                $tmp980 = -1;
                goto $l978;
                $l978:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$270$17981));
                Iter$270$17981 = NULL;
                switch ($tmp980) {
                    case -1: goto $l1009;
                }
                $l1009:;
            }
            $finallyReturn1009 = result976;
            $tmp413 = 32;
            goto $l411;
            $l1011:;
            return $finallyReturn1009;
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
    $tmp413 = -1;
    goto $l411;
    $l411:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp415));
    switch ($tmp413) {
        case 7: goto $l533;
        case 13: goto $l638;
        case 12: goto $l634;
        case 24: goto $l837;
        case 1: goto $l433;
        case 20: goto $l815;
        case 14: goto $l642;
        case 21: goto $l823;
        case -1: goto $l1013;
        case 29: goto $l857;
        case 11: goto $l592;
        case 5: goto $l522;
        case 10: goto $l585;
        case 6: goto $l529;
        case 0: goto $l421;
        case 25: goto $l841;
        case 30: goto $l896;
        case 15: goto $l688;
        case 8: goto $l539;
        case 9: goto $l543;
        case 16: goto $l692;
        case 19: goto $l811;
        case 32: goto $l1011;
        case 18: goto $l807;
        case 28: goto $l853;
        case 22: goto $l827;
        case 3: goto $l476;
        case 31: goto $l969;
        case 4: goto $l480;
        case 23: goto $l831;
        case 2: goto $l437;
        case 26: goto $l845;
        case 17: goto $l731;
        case 27: goto $l849;
    }
    $l1013:;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Object* $tmp1016;
    panda$core$Int64 c1027;
    panda$collections$Iterator* Iter$283$131031 = NULL;
    panda$collections$Iterator* $tmp1032;
    panda$collections$Iterator* $tmp1033;
    org$pandalanguage$pandac$ASTNode* s1049 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1050;
    panda$core$Object* $tmp1051;
    panda$core$Bit $finallyReturn1058;
    panda$core$Bit $finallyReturn1064;
    panda$core$Bit $finallyReturn1066;
    panda$core$Object* $tmp1018 = (($fn1017) self->compiler->$class->vtable[2])(self->compiler);
    $tmp1016 = $tmp1018;
    panda$core$Bit $tmp1019 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1016)->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp1015 = $tmp1019.value;
    panda$core$Panda$unref$panda$core$Object($tmp1016);
    if (!$tmp1015) goto $l1020;
    panda$core$Bit $tmp1021 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp1022 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1021);
    $tmp1015 = $tmp1022.value;
    $l1020:;
    panda$core$Bit $tmp1023 = { $tmp1015 };
    bool $tmp1014 = $tmp1023.value;
    if (!$tmp1014) goto $l1024;
    panda$core$Bit $tmp1025 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp1014 = $tmp1025.value;
    $l1024:;
    panda$core$Bit $tmp1026 = { $tmp1014 };
    if ($tmp1026.value) {
    {
        c1027 = ((panda$core$Int64) { 0 });
        {
            int $tmp1030;
            {
                ITable* $tmp1034 = ((panda$collections$Iterable*) p_statements)->$class->itable;
                while ($tmp1034->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1034 = $tmp1034->next;
                }
                $fn1036 $tmp1035 = $tmp1034->methods[0];
                panda$collections$Iterator* $tmp1037 = $tmp1035(((panda$collections$Iterable*) p_statements));
                $tmp1033 = $tmp1037;
                $tmp1032 = $tmp1033;
                Iter$283$131031 = $tmp1032;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1032));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1033));
                $l1038:;
                ITable* $tmp1041 = Iter$283$131031->$class->itable;
                while ($tmp1041->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1041 = $tmp1041->next;
                }
                $fn1043 $tmp1042 = $tmp1041->methods[0];
                panda$core$Bit $tmp1044 = $tmp1042(Iter$283$131031);
                panda$core$Bit $tmp1045 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1044);
                bool $tmp1040 = $tmp1045.value;
                if (!$tmp1040) goto $l1039;
                {
                    int $tmp1048;
                    {
                        ITable* $tmp1052 = Iter$283$131031->$class->itable;
                        while ($tmp1052->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1052 = $tmp1052->next;
                        }
                        $fn1054 $tmp1053 = $tmp1052->methods[1];
                        panda$core$Object* $tmp1055 = $tmp1053(Iter$283$131031);
                        $tmp1051 = $tmp1055;
                        $tmp1050 = ((org$pandalanguage$pandac$ASTNode*) $tmp1051);
                        s1049 = $tmp1050;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1050));
                        panda$core$Panda$unref$panda$core$Object($tmp1051);
                        panda$core$Int64 $tmp1056 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1049);
                        panda$core$Int64 $tmp1057 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c1027, $tmp1056);
                        c1027 = $tmp1057;
                        panda$core$Bit $tmp1058 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c1027, ((panda$core$Int64) { 10 }));
                        if ($tmp1058.value) {
                        {
                            $finallyReturn1058 = ((panda$core$Bit) { false });
                            $tmp1048 = 0;
                            goto $l1046;
                            $l1060:;
                            $tmp1030 = 0;
                            goto $l1028;
                            $l1061:;
                            return $finallyReturn1058;
                        }
                        }
                    }
                    $tmp1048 = -1;
                    goto $l1046;
                    $l1046:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1049));
                    s1049 = NULL;
                    switch ($tmp1048) {
                        case -1: goto $l1063;
                        case 0: goto $l1060;
                    }
                    $l1063:;
                }
                goto $l1038;
                $l1039:;
            }
            $tmp1030 = -1;
            goto $l1028;
            $l1028:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$283$131031));
            Iter$283$131031 = NULL;
            switch ($tmp1030) {
                case 0: goto $l1061;
                case -1: goto $l1064;
            }
            $l1064:;
        }
        $finallyReturn1064 = ((panda$core$Bit) { true });
        return $finallyReturn1064;
    }
    }
    $finallyReturn1066 = ((panda$core$Bit) { false });
    return $finallyReturn1066;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment1072 = NULL;
    panda$core$String* $tmp1073;
    panda$core$String* $tmp1074;
    org$pandalanguage$pandac$ASTNode* $match$304_131078 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1079;
    org$pandalanguage$pandac$Position position1081;
    panda$core$String* text1083 = NULL;
    panda$core$String* $tmp1085;
    panda$core$String* $tmp1086;
    org$pandalanguage$pandac$Annotations* annotations1088 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1089;
    org$pandalanguage$pandac$Annotations* $tmp1090;
    panda$collections$Array* parameters1103 = NULL;
    panda$collections$Array* $tmp1104;
    panda$collections$Array* $tmp1105;
    panda$collections$Iterator* Iter$316$91110 = NULL;
    panda$collections$Iterator* $tmp1111;
    panda$collections$Iterator* $tmp1112;
    org$pandalanguage$pandac$ASTNode* p1128 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1129;
    panda$core$Object* $tmp1130;
    org$pandalanguage$pandac$ASTNode* $match$317_131138 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1139;
    panda$core$String* name1141 = NULL;
    org$pandalanguage$pandac$ASTNode* type1143 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1145;
    org$pandalanguage$pandac$Type* $tmp1147;
    org$pandalanguage$pandac$Type* returnType1152 = NULL;
    org$pandalanguage$pandac$Type* $tmp1153;
    org$pandalanguage$pandac$Type* $tmp1154;
    org$pandalanguage$pandac$Type* $tmp1155;
    org$pandalanguage$pandac$Type* $tmp1157;
    org$pandalanguage$pandac$Type* $tmp1158;
    org$pandalanguage$pandac$Type* $tmp1159;
    org$pandalanguage$pandac$Type* $tmp1164;
    panda$core$Object* $tmp1168;
    panda$core$Object* $tmp1184;
    panda$core$String* $tmp1187;
    panda$core$String* $tmp1188;
    org$pandalanguage$pandac$MethodDecl* $finallyReturn1192;
    org$pandalanguage$pandac$MethodDecl* $tmp1194;
    org$pandalanguage$pandac$MethodDecl* $tmp1195;
    int $tmp1071;
    {
        memset(&doccomment1072, 0, sizeof(doccomment1072));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1073 = doccomment1072;
                $tmp1074 = NULL;
                doccomment1072 = $tmp1074;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1074));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1073));
            }
        }
        }
        else {
        {
            int $tmp1077;
            {
                $tmp1079 = p_rawDoccomment;
                $match$304_131078 = $tmp1079;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1079));
                panda$core$Bit $tmp1080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$304_131078->$rawValue, ((panda$core$Int64) { 34 }));
                if ($tmp1080.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1082 = ((org$pandalanguage$pandac$Position*) ((char*) $match$304_131078->$data + 0));
                    position1081 = *$tmp1082;
                    panda$core$String** $tmp1084 = ((panda$core$String**) ((char*) $match$304_131078->$data + 16));
                    text1083 = *$tmp1084;
                    {
                        $tmp1085 = doccomment1072;
                        $tmp1086 = text1083;
                        doccomment1072 = $tmp1086;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1086));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1085));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1077 = -1;
            goto $l1075;
            $l1075:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1079));
            switch ($tmp1077) {
                case -1: goto $l1087;
            }
            $l1087:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1091 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1090 = $tmp1091;
        $tmp1089 = $tmp1090;
        annotations1088 = $tmp1089;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1089));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1090));
        panda$core$Bit $tmp1094 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        bool $tmp1093 = $tmp1094.value;
        if (!$tmp1093) goto $l1095;
        panda$core$Bit $tmp1096 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
        $tmp1093 = $tmp1096.value;
        $l1095:;
        panda$core$Bit $tmp1097 = { $tmp1093 };
        bool $tmp1092 = $tmp1097.value;
        if ($tmp1092) goto $l1098;
        panda$core$Bit $tmp1099 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations1088);
        $tmp1092 = $tmp1099.value;
        $l1098:;
        panda$core$Bit $tmp1100 = { $tmp1092 };
        if ($tmp1100.value) {
        {
            panda$core$Int64 $tmp1101 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
            panda$core$Int64 $tmp1102 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1088->flags, $tmp1101);
            annotations1088->flags = $tmp1102;
        }
        }
        panda$collections$Array* $tmp1106 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1106);
        $tmp1105 = $tmp1106;
        $tmp1104 = $tmp1105;
        parameters1103 = $tmp1104;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1105));
        {
            int $tmp1109;
            {
                ITable* $tmp1113 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1113->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1113 = $tmp1113->next;
                }
                $fn1115 $tmp1114 = $tmp1113->methods[0];
                panda$collections$Iterator* $tmp1116 = $tmp1114(((panda$collections$Iterable*) p_rawParameters));
                $tmp1112 = $tmp1116;
                $tmp1111 = $tmp1112;
                Iter$316$91110 = $tmp1111;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1111));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1112));
                $l1117:;
                ITable* $tmp1120 = Iter$316$91110->$class->itable;
                while ($tmp1120->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1120 = $tmp1120->next;
                }
                $fn1122 $tmp1121 = $tmp1120->methods[0];
                panda$core$Bit $tmp1123 = $tmp1121(Iter$316$91110);
                panda$core$Bit $tmp1124 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1123);
                bool $tmp1119 = $tmp1124.value;
                if (!$tmp1119) goto $l1118;
                {
                    int $tmp1127;
                    {
                        ITable* $tmp1131 = Iter$316$91110->$class->itable;
                        while ($tmp1131->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1131 = $tmp1131->next;
                        }
                        $fn1133 $tmp1132 = $tmp1131->methods[1];
                        panda$core$Object* $tmp1134 = $tmp1132(Iter$316$91110);
                        $tmp1130 = $tmp1134;
                        $tmp1129 = ((org$pandalanguage$pandac$ASTNode*) $tmp1130);
                        p1128 = $tmp1129;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1129));
                        panda$core$Panda$unref$panda$core$Object($tmp1130);
                        int $tmp1137;
                        {
                            $tmp1139 = p1128;
                            $match$317_131138 = $tmp1139;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1139));
                            panda$core$Bit $tmp1140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$317_131138->$rawValue, ((panda$core$Int64) { 28 }));
                            if ($tmp1140.value) {
                            {
                                panda$core$String** $tmp1142 = ((panda$core$String**) ((char*) $match$317_131138->$data + 16));
                                name1141 = *$tmp1142;
                                org$pandalanguage$pandac$ASTNode** $tmp1144 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$317_131138->$data + 24));
                                type1143 = *$tmp1144;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1146 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1148 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1143);
                                $tmp1147 = $tmp1148;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1146, name1141, $tmp1147);
                                $tmp1145 = $tmp1146;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1103, ((panda$core$Object*) $tmp1145));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1145));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1147));
                            }
                            }
                            else {
                            {
                                PANDA_ASSERT(((panda$core$Bit) { false }).value);
                            }
                            }
                        }
                        $tmp1137 = -1;
                        goto $l1135;
                        $l1135:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1139));
                        switch ($tmp1137) {
                            case -1: goto $l1149;
                        }
                        $l1149:;
                    }
                    $tmp1127 = -1;
                    goto $l1125;
                    $l1125:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1128));
                    p1128 = NULL;
                    switch ($tmp1127) {
                        case -1: goto $l1150;
                    }
                    $l1150:;
                }
                goto $l1117;
                $l1118:;
            }
            $tmp1109 = -1;
            goto $l1107;
            $l1107:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$316$91110));
            Iter$316$91110 = NULL;
            switch ($tmp1109) {
                case -1: goto $l1151;
            }
            $l1151:;
        }
        memset(&returnType1152, 0, sizeof(returnType1152));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1153 = returnType1152;
                org$pandalanguage$pandac$Type* $tmp1156 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1155 = $tmp1156;
                $tmp1154 = $tmp1155;
                returnType1152 = $tmp1154;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1154));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1155));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1153));
            }
        }
        }
        else {
        {
            {
                $tmp1157 = returnType1152;
                org$pandalanguage$pandac$Type* $tmp1160 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1159 = $tmp1160;
                $tmp1158 = $tmp1159;
                returnType1152 = $tmp1158;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1158));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1159));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1157));
            }
        }
        }
        panda$core$Bit $tmp1162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
        bool $tmp1161 = $tmp1162.value;
        if (!$tmp1161) goto $l1163;
        org$pandalanguage$pandac$Type* $tmp1165 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1164 = $tmp1165;
        panda$core$Bit $tmp1166 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1152, $tmp1164);
        $tmp1161 = $tmp1166.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1164));
        $l1163:;
        panda$core$Bit $tmp1167 = { $tmp1161 };
        if ($tmp1167.value) {
        {
            panda$core$Object* $tmp1170 = (($fn1169) self->compiler->$class->vtable[2])(self->compiler);
            $tmp1168 = $tmp1170;
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1168), p_position, &$s1171);
            panda$core$Panda$unref$panda$core$Object($tmp1168);
        }
        }
        bool $tmp1172 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1172) goto $l1173;
        panda$core$Bit $tmp1174 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1088, p_statements);
        $tmp1172 = $tmp1174.value;
        $l1173:;
        panda$core$Bit $tmp1175 = { $tmp1172 };
        if ($tmp1175.value) {
        {
            panda$core$Int64 $tmp1176 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp1177 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1088->flags, $tmp1176);
            annotations1088->flags = $tmp1177;
        }
        }
        if (((panda$core$Bit) { p_statements == NULL }).value) {
        {
            panda$core$Bit $tmp1178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1178.value) {
            {
                panda$core$Int64 $tmp1179 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                panda$core$Int64 $tmp1180 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1088->flags, $tmp1179);
                annotations1088->flags = $tmp1180;
            }
            }
            else {
            panda$core$Int64 $tmp1181 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
            panda$core$Int64 $tmp1182 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1088->flags, $tmp1181);
            panda$core$Bit $tmp1183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1182, ((panda$core$Int64) { 0 }));
            if ($tmp1183.value) {
            {
                panda$core$Object* $tmp1186 = (($fn1185) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1184 = $tmp1186;
                panda$core$String* $tmp1190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1189, p_name);
                $tmp1188 = $tmp1190;
                panda$core$String* $tmp1192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1188, &$s1191);
                $tmp1187 = $tmp1192;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1184), p_position, $tmp1187);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1187));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1188));
                panda$core$Panda$unref$panda$core$Object($tmp1184);
            }
            }
            }
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1196 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1196, p_owner, p_position, doccomment1072, annotations1088, p_kind, p_name, parameters1103, returnType1152, p_statements);
        $tmp1195 = $tmp1196;
        $tmp1194 = $tmp1195;
        $finallyReturn1192 = $tmp1194;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1194));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1195));
        $tmp1071 = 0;
        goto $l1069;
        $l1197:;
        return $finallyReturn1192;
    }
    $l1069:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1072));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1088));
    annotations1088 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1103));
    parameters1103 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1152));
    switch ($tmp1071) {
        case 0: goto $l1197;
    }
    $l1199:;
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$350_91203 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1204;
    org$pandalanguage$pandac$Position position1206;
    org$pandalanguage$pandac$ASTNode* dc1208 = NULL;
    panda$collections$ImmutableArray* annotations1210 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1212 = NULL;
    org$pandalanguage$pandac$Position position1215;
    org$pandalanguage$pandac$ASTNode* dc1217 = NULL;
    panda$collections$ImmutableArray* annotations1219 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1221;
    panda$core$String* name1223 = NULL;
    panda$collections$ImmutableArray* parameters1225 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType1227 = NULL;
    panda$collections$ImmutableArray* statements1229 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1234 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1235;
    org$pandalanguage$pandac$MethodDecl* $tmp1236;
    org$pandalanguage$pandac$Position position1240;
    org$pandalanguage$pandac$ASTNode* dc1242 = NULL;
    panda$collections$ImmutableArray* annotations1244 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1246;
    panda$core$String* name1248 = NULL;
    panda$collections$ImmutableArray* generics1250 = NULL;
    panda$collections$ImmutableArray* supertypes1252 = NULL;
    panda$collections$ImmutableArray* members1254 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1259 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1260;
    org$pandalanguage$pandac$ClassDecl* $tmp1261;
    panda$core$Weak* $tmp1263;
    panda$core$Weak* $tmp1264;
    panda$core$Weak* $tmp1265;
    panda$core$String* $tmp1267;
    org$pandalanguage$pandac$Alias* $tmp1271;
    panda$core$String* $tmp1273;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1274;
    org$pandalanguage$pandac$Position $tmp1278;
    org$pandalanguage$pandac$Alias* $tmp1279;
    panda$core$String* $tmp1281;
    org$pandalanguage$pandac$Position $tmp1283;
    org$pandalanguage$pandac$Position position1286;
    org$pandalanguage$pandac$ASTNode* dc1288 = NULL;
    panda$core$String* name1290 = NULL;
    panda$collections$ImmutableArray* fields1292 = NULL;
    int $tmp1202;
    {
        $tmp1204 = p_node;
        $match$350_91203 = $tmp1204;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1204));
        panda$core$Bit $tmp1205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$350_91203->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1205.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1207 = ((org$pandalanguage$pandac$Position*) ((char*) $match$350_91203->$data + 0));
            position1206 = *$tmp1207;
            org$pandalanguage$pandac$ASTNode** $tmp1209 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$350_91203->$data + 16));
            dc1208 = *$tmp1209;
            panda$collections$ImmutableArray** $tmp1211 = ((panda$collections$ImmutableArray**) ((char*) $match$350_91203->$data + 24));
            annotations1210 = *$tmp1211;
            org$pandalanguage$pandac$ASTNode** $tmp1213 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$350_91203->$data + 32));
            varDecl1212 = *$tmp1213;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1206, dc1208, annotations1210, varDecl1212);
        }
        }
        else {
        panda$core$Bit $tmp1214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$350_91203->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1214.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1216 = ((org$pandalanguage$pandac$Position*) ((char*) $match$350_91203->$data + 0));
            position1215 = *$tmp1216;
            org$pandalanguage$pandac$ASTNode** $tmp1218 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$350_91203->$data + 16));
            dc1217 = *$tmp1218;
            panda$collections$ImmutableArray** $tmp1220 = ((panda$collections$ImmutableArray**) ((char*) $match$350_91203->$data + 24));
            annotations1219 = *$tmp1220;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1222 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$350_91203->$data + 32));
            kind1221 = *$tmp1222;
            panda$core$String** $tmp1224 = ((panda$core$String**) ((char*) $match$350_91203->$data + 40));
            name1223 = *$tmp1224;
            panda$collections$ImmutableArray** $tmp1226 = ((panda$collections$ImmutableArray**) ((char*) $match$350_91203->$data + 48));
            parameters1225 = *$tmp1226;
            org$pandalanguage$pandac$ASTNode** $tmp1228 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$350_91203->$data + 56));
            rawReturnType1227 = *$tmp1228;
            panda$collections$ImmutableArray** $tmp1230 = ((panda$collections$ImmutableArray**) ((char*) $match$350_91203->$data + 64));
            statements1229 = *$tmp1230;
            int $tmp1233;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1237 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1215, dc1217, annotations1219, kind1221, name1223, parameters1225, rawReturnType1227, statements1229);
                $tmp1236 = $tmp1237;
                $tmp1235 = $tmp1236;
                m1234 = $tmp1235;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1235));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1236));
                if (((panda$core$Bit) { m1234 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1234));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1234));
                }
                }
            }
            $tmp1233 = -1;
            goto $l1231;
            $l1231:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1234));
            m1234 = NULL;
            switch ($tmp1233) {
                case -1: goto $l1238;
            }
            $l1238:;
        }
        }
        else {
        panda$core$Bit $tmp1239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$350_91203->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1239.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1241 = ((org$pandalanguage$pandac$Position*) ((char*) $match$350_91203->$data + 0));
            position1240 = *$tmp1241;
            org$pandalanguage$pandac$ASTNode** $tmp1243 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$350_91203->$data + 16));
            dc1242 = *$tmp1243;
            panda$collections$ImmutableArray** $tmp1245 = ((panda$collections$ImmutableArray**) ((char*) $match$350_91203->$data + 24));
            annotations1244 = *$tmp1245;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1247 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$350_91203->$data + 32));
            kind1246 = *$tmp1247;
            panda$core$String** $tmp1249 = ((panda$core$String**) ((char*) $match$350_91203->$data + 40));
            name1248 = *$tmp1249;
            panda$collections$ImmutableArray** $tmp1251 = ((panda$collections$ImmutableArray**) ((char*) $match$350_91203->$data + 48));
            generics1250 = *$tmp1251;
            panda$collections$ImmutableArray** $tmp1253 = ((panda$collections$ImmutableArray**) ((char*) $match$350_91203->$data + 56));
            supertypes1252 = *$tmp1253;
            panda$collections$ImmutableArray** $tmp1255 = ((panda$collections$ImmutableArray**) ((char*) $match$350_91203->$data + 64));
            members1254 = *$tmp1255;
            int $tmp1258;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1262 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, p_cl->name, position1240, dc1242, annotations1244, kind1246, name1248, generics1250, supertypes1252, members1254);
                $tmp1261 = $tmp1262;
                $tmp1260 = $tmp1261;
                inner1259 = $tmp1260;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1260));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1261));
                if (((panda$core$Bit) { inner1259 != NULL }).value) {
                {
                    {
                        $tmp1263 = inner1259->owner;
                        panda$core$Weak* $tmp1266 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp1266, ((panda$core$Object*) p_cl));
                        $tmp1265 = $tmp1266;
                        $tmp1264 = $tmp1265;
                        inner1259->owner = $tmp1264;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1264));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1265));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1263));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1259));
                    panda$core$String* $tmp1269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_cl->name, &$s1268);
                    $tmp1267 = $tmp1269;
                    panda$core$Bit $tmp1270 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(inner1259->name, $tmp1267);
                    PANDA_ASSERT($tmp1270.value);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1267));
                    org$pandalanguage$pandac$Alias* $tmp1272 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$Int64 $tmp1275 = panda$core$String$length$R$panda$core$Int64(p_cl->name);
                    panda$core$Int64 $tmp1276 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1275, ((panda$core$Int64) { 1 }));
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1274, ((panda$core$Int64$nullable) { $tmp1276, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                    panda$core$String* $tmp1277 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(inner1259->name, $tmp1274);
                    $tmp1273 = $tmp1277;
                    org$pandalanguage$pandac$Position$init(&$tmp1278);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1272, $tmp1273, inner1259->name, $tmp1278);
                    $tmp1271 = $tmp1272;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1271));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1271));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1273));
                    org$pandalanguage$pandac$Alias* $tmp1280 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$String* $tmp1282 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1281 = $tmp1282;
                    org$pandalanguage$pandac$Position$init(&$tmp1283);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1280, $tmp1281, p_cl->name, $tmp1283);
                    $tmp1279 = $tmp1280;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(inner1259->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1279));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1279));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1281));
                }
                }
            }
            $tmp1258 = -1;
            goto $l1256;
            $l1256:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1259));
            inner1259 = NULL;
            switch ($tmp1258) {
                case -1: goto $l1284;
            }
            $l1284:;
        }
        }
        else {
        panda$core$Bit $tmp1285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$350_91203->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1285.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1287 = ((org$pandalanguage$pandac$Position*) ((char*) $match$350_91203->$data + 0));
            position1286 = *$tmp1287;
            org$pandalanguage$pandac$ASTNode** $tmp1289 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$350_91203->$data + 16));
            dc1288 = *$tmp1289;
            panda$core$String** $tmp1291 = ((panda$core$String**) ((char*) $match$350_91203->$data + 24));
            name1290 = *$tmp1291;
            panda$collections$ImmutableArray** $tmp1293 = ((panda$collections$ImmutableArray**) ((char*) $match$350_91203->$data + 32));
            fields1292 = *$tmp1293;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1286, dc1288, name1290, fields1292);
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
    $tmp1202 = -1;
    goto $l1200;
    $l1200:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1204));
    switch ($tmp1202) {
        case -1: goto $l1294;
    }
    $l1294:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1298 = NULL;
    panda$core$String* $tmp1299;
    panda$core$String* $tmp1300;
    org$pandalanguage$pandac$ASTNode* $match$388_131304 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1305;
    org$pandalanguage$pandac$Position position1307;
    panda$core$String* text1309 = NULL;
    panda$core$String* $tmp1311;
    panda$core$String* $tmp1312;
    panda$collections$Array* fields1314 = NULL;
    panda$collections$Array* $tmp1315;
    panda$collections$Array* $tmp1316;
    panda$collections$Iterator* Iter$396$91321 = NULL;
    panda$collections$Iterator* $tmp1322;
    panda$collections$Iterator* $tmp1323;
    org$pandalanguage$pandac$ASTNode* t1339 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1340;
    panda$core$Object* $tmp1341;
    org$pandalanguage$pandac$Type* $tmp1346;
    org$pandalanguage$pandac$ChoiceEntry* entry1350 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1351;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1352;
    int $tmp1297;
    {
        memset(&doccomment1298, 0, sizeof(doccomment1298));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1299 = doccomment1298;
                $tmp1300 = NULL;
                doccomment1298 = $tmp1300;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1300));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1299));
            }
        }
        }
        else {
        {
            int $tmp1303;
            {
                $tmp1305 = p_rawDoccomment;
                $match$388_131304 = $tmp1305;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1305));
                panda$core$Bit $tmp1306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$388_131304->$rawValue, ((panda$core$Int64) { 34 }));
                if ($tmp1306.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1308 = ((org$pandalanguage$pandac$Position*) ((char*) $match$388_131304->$data + 0));
                    position1307 = *$tmp1308;
                    panda$core$String** $tmp1310 = ((panda$core$String**) ((char*) $match$388_131304->$data + 16));
                    text1309 = *$tmp1310;
                    {
                        $tmp1311 = doccomment1298;
                        $tmp1312 = text1309;
                        doccomment1298 = $tmp1312;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1312));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1311));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1303 = -1;
            goto $l1301;
            $l1301:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1305));
            switch ($tmp1303) {
                case -1: goto $l1313;
            }
            $l1313:;
        }
        }
        panda$collections$Array* $tmp1317 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1317);
        $tmp1316 = $tmp1317;
        $tmp1315 = $tmp1316;
        fields1314 = $tmp1315;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1315));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1316));
        {
            int $tmp1320;
            {
                ITable* $tmp1324 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1324->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1324 = $tmp1324->next;
                }
                $fn1326 $tmp1325 = $tmp1324->methods[0];
                panda$collections$Iterator* $tmp1327 = $tmp1325(((panda$collections$Iterable*) p_rawFields));
                $tmp1323 = $tmp1327;
                $tmp1322 = $tmp1323;
                Iter$396$91321 = $tmp1322;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1322));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1323));
                $l1328:;
                ITable* $tmp1331 = Iter$396$91321->$class->itable;
                while ($tmp1331->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1331 = $tmp1331->next;
                }
                $fn1333 $tmp1332 = $tmp1331->methods[0];
                panda$core$Bit $tmp1334 = $tmp1332(Iter$396$91321);
                panda$core$Bit $tmp1335 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1334);
                bool $tmp1330 = $tmp1335.value;
                if (!$tmp1330) goto $l1329;
                {
                    int $tmp1338;
                    {
                        ITable* $tmp1342 = Iter$396$91321->$class->itable;
                        while ($tmp1342->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1342 = $tmp1342->next;
                        }
                        $fn1344 $tmp1343 = $tmp1342->methods[1];
                        panda$core$Object* $tmp1345 = $tmp1343(Iter$396$91321);
                        $tmp1341 = $tmp1345;
                        $tmp1340 = ((org$pandalanguage$pandac$ASTNode*) $tmp1341);
                        t1339 = $tmp1340;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1340));
                        panda$core$Panda$unref$panda$core$Object($tmp1341);
                        org$pandalanguage$pandac$Type* $tmp1347 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1339);
                        $tmp1346 = $tmp1347;
                        panda$collections$Array$add$panda$collections$Array$T(fields1314, ((panda$core$Object*) $tmp1346));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1346));
                    }
                    $tmp1338 = -1;
                    goto $l1336;
                    $l1336:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1339));
                    t1339 = NULL;
                    switch ($tmp1338) {
                        case -1: goto $l1348;
                    }
                    $l1348:;
                }
                goto $l1328;
                $l1329:;
            }
            $tmp1320 = -1;
            goto $l1318;
            $l1318:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$396$91321));
            Iter$396$91321 = NULL;
            switch ($tmp1320) {
                case -1: goto $l1349;
            }
            $l1349:;
        }
        org$pandalanguage$pandac$ChoiceEntry* $tmp1353 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(97, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
        panda$core$Int64 $tmp1354 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
        org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1353, p_cl, p_position, p_name, doccomment1298, $tmp1354, ((panda$collections$ListView*) fields1314));
        $tmp1352 = $tmp1353;
        $tmp1351 = $tmp1352;
        entry1350 = $tmp1351;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1351));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1352));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry1350));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1350));
    }
    $tmp1297 = -1;
    goto $l1295;
    $l1295:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1298));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1314));
    fields1314 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1350));
    entry1350 = NULL;
    switch ($tmp1297) {
        case -1: goto $l1355;
    }
    $l1355:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1359 = NULL;
    panda$core$String* $tmp1362;
    panda$core$String* $tmp1363;
    panda$core$String* $tmp1364;
    panda$core$String* $tmp1365;
    panda$core$String* $tmp1366;
    panda$core$String* $tmp1367;
    panda$core$String* $tmp1374;
    panda$core$String* $tmp1375;
    panda$core$String* doccomment1376 = NULL;
    panda$core$String* $tmp1377;
    panda$core$String* $tmp1378;
    org$pandalanguage$pandac$ASTNode* $match$422_131382 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1383;
    org$pandalanguage$pandac$Position position1385;
    panda$core$String* text1387 = NULL;
    panda$core$String* $tmp1389;
    panda$core$String* $tmp1390;
    org$pandalanguage$pandac$Annotations* annotations1392 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1393;
    org$pandalanguage$pandac$Annotations* $tmp1394;
    panda$collections$Array* parameters1396 = NULL;
    panda$collections$Array* $tmp1397;
    panda$collections$Array* $tmp1398;
    panda$collections$Iterator* Iter$432$131403 = NULL;
    panda$collections$Iterator* $tmp1404;
    panda$collections$Iterator* $tmp1405;
    org$pandalanguage$pandac$ASTNode* p1421 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1422;
    panda$core$Object* $tmp1423;
    panda$core$String* name1428 = NULL;
    org$pandalanguage$pandac$Type* bound1429 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$435_171433 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1434;
    panda$core$String* id1436 = NULL;
    panda$core$String* $tmp1438;
    panda$core$String* $tmp1439;
    org$pandalanguage$pandac$Type* $tmp1440;
    org$pandalanguage$pandac$Type* $tmp1441;
    org$pandalanguage$pandac$Type* $tmp1442;
    panda$core$String* id1445 = NULL;
    org$pandalanguage$pandac$ASTNode* type1447 = NULL;
    panda$core$String* $tmp1449;
    panda$core$String* $tmp1450;
    org$pandalanguage$pandac$Type* $tmp1451;
    org$pandalanguage$pandac$Type* $tmp1452;
    org$pandalanguage$pandac$Type* $tmp1453;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1456;
    panda$core$Object* $tmp1463;
    panda$collections$Array* supertypes1467 = NULL;
    panda$collections$Array* $tmp1468;
    panda$collections$Array* $tmp1469;
    panda$core$Object* $tmp1472;
    panda$collections$Iterator* Iter$456$131479 = NULL;
    panda$collections$Iterator* $tmp1480;
    panda$collections$Iterator* $tmp1481;
    org$pandalanguage$pandac$ASTNode* s1497 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1498;
    panda$core$Object* $tmp1499;
    org$pandalanguage$pandac$Type* $tmp1504;
    org$pandalanguage$pandac$ClassDecl* result1508 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1509;
    org$pandalanguage$pandac$ClassDecl* $tmp1510;
    panda$core$Object* $tmp1512;
    panda$core$Object* $tmp1515;
    org$pandalanguage$pandac$FieldDecl* rawValue1522 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1523;
    org$pandalanguage$pandac$FieldDecl* $tmp1524;
    org$pandalanguage$pandac$Annotations* $tmp1526;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1528;
    org$pandalanguage$pandac$Type* $tmp1530;
    org$pandalanguage$pandac$FieldDecl* data1532 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1533;
    org$pandalanguage$pandac$FieldDecl* $tmp1534;
    org$pandalanguage$pandac$Annotations* $tmp1536;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1538;
    org$pandalanguage$pandac$Type* $tmp1540;
    panda$collections$Iterator* Iter$473$91546 = NULL;
    panda$collections$Iterator* $tmp1547;
    panda$collections$Iterator* $tmp1548;
    org$pandalanguage$pandac$ASTNode* m1564 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1565;
    panda$core$Object* $tmp1566;
    org$pandalanguage$pandac$ASTNode* $match$474_131574 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1575;
    org$pandalanguage$pandac$Position mPosition1577;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1579;
    org$pandalanguage$pandac$ClassDecl$Kind $match$477_251582;
    panda$core$Object* $tmp1585;
    panda$core$Object* $tmp1590;
    panda$core$Bit foundInit1597;
    panda$core$Bit foundCleanup1598;
    panda$collections$Iterator* Iter$492$91602 = NULL;
    panda$collections$Iterator* $tmp1603;
    panda$collections$Iterator* $tmp1604;
    org$pandalanguage$pandac$MethodDecl* m1620 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1621;
    panda$core$Object* $tmp1622;
    panda$core$Object* $tmp1636;
    org$pandalanguage$pandac$MethodDecl* defaultInit1655 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1656;
    org$pandalanguage$pandac$MethodDecl* $tmp1657;
    org$pandalanguage$pandac$Annotations* $tmp1659;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1661;
    panda$collections$Array* $tmp1663;
    org$pandalanguage$pandac$Type* $tmp1665;
    panda$collections$ImmutableArray* $tmp1667;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1687 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1688;
    org$pandalanguage$pandac$MethodDecl* $tmp1689;
    org$pandalanguage$pandac$Annotations* $tmp1691;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1694;
    panda$collections$Array* $tmp1696;
    org$pandalanguage$pandac$Type* $tmp1698;
    panda$collections$ImmutableArray* $tmp1700;
    panda$core$Bit haveFields1704;
    panda$collections$Iterator* Iter$520$131708 = NULL;
    panda$collections$Iterator* $tmp1709;
    panda$collections$Iterator* $tmp1710;
    org$pandalanguage$pandac$ChoiceEntry* e1726 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1727;
    panda$core$Object* $tmp1728;
    org$pandalanguage$pandac$Type* $tmp1739;
    org$pandalanguage$pandac$Type* $tmp1740;
    org$pandalanguage$pandac$Type* $tmp1741;
    panda$core$Object* $tmp1743;
    panda$core$Object* $tmp1744;
    org$pandalanguage$pandac$ClassDecl* $finallyReturn1747;
    org$pandalanguage$pandac$ClassDecl* $tmp1749;
    int $tmp1358;
    {
        memset(&fullName1359, 0, sizeof(fullName1359));
        panda$core$Bit $tmp1361 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s1360);
        if ($tmp1361.value) {
        {
            {
                $tmp1362 = fullName1359;
                panda$core$String* $tmp1368 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1367 = $tmp1368;
                panda$core$String* $tmp1370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1367, &$s1369);
                $tmp1366 = $tmp1370;
                panda$core$String* $tmp1371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1366, p_name);
                $tmp1365 = $tmp1371;
                panda$core$String* $tmp1373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1365, &$s1372);
                $tmp1364 = $tmp1373;
                $tmp1363 = $tmp1364;
                fullName1359 = $tmp1363;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1363));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1364));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1365));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1366));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1367));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1362));
            }
        }
        }
        else {
        {
            {
                $tmp1374 = fullName1359;
                $tmp1375 = p_name;
                fullName1359 = $tmp1375;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1375));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1374));
            }
        }
        }
        memset(&doccomment1376, 0, sizeof(doccomment1376));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1377 = doccomment1376;
                $tmp1378 = NULL;
                doccomment1376 = $tmp1378;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1378));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1377));
            }
        }
        }
        else {
        {
            int $tmp1381;
            {
                $tmp1383 = p_rawDoccomment;
                $match$422_131382 = $tmp1383;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1383));
                panda$core$Bit $tmp1384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_131382->$rawValue, ((panda$core$Int64) { 34 }));
                if ($tmp1384.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1386 = ((org$pandalanguage$pandac$Position*) ((char*) $match$422_131382->$data + 0));
                    position1385 = *$tmp1386;
                    panda$core$String** $tmp1388 = ((panda$core$String**) ((char*) $match$422_131382->$data + 16));
                    text1387 = *$tmp1388;
                    {
                        $tmp1389 = doccomment1376;
                        $tmp1390 = text1387;
                        doccomment1376 = $tmp1390;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1390));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1389));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1381 = -1;
            goto $l1379;
            $l1379:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1383));
            switch ($tmp1381) {
                case -1: goto $l1391;
            }
            $l1391:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1395 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1394 = $tmp1395;
        $tmp1393 = $tmp1394;
        annotations1392 = $tmp1393;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1393));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1394));
        panda$collections$Array* $tmp1399 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1399);
        $tmp1398 = $tmp1399;
        $tmp1397 = $tmp1398;
        parameters1396 = $tmp1397;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1397));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1398));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1402;
                {
                    ITable* $tmp1406 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1406->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1406 = $tmp1406->next;
                    }
                    $fn1408 $tmp1407 = $tmp1406->methods[0];
                    panda$collections$Iterator* $tmp1409 = $tmp1407(((panda$collections$Iterable*) p_generics));
                    $tmp1405 = $tmp1409;
                    $tmp1404 = $tmp1405;
                    Iter$432$131403 = $tmp1404;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1404));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1405));
                    $l1410:;
                    ITable* $tmp1413 = Iter$432$131403->$class->itable;
                    while ($tmp1413->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1413 = $tmp1413->next;
                    }
                    $fn1415 $tmp1414 = $tmp1413->methods[0];
                    panda$core$Bit $tmp1416 = $tmp1414(Iter$432$131403);
                    panda$core$Bit $tmp1417 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1416);
                    bool $tmp1412 = $tmp1417.value;
                    if (!$tmp1412) goto $l1411;
                    {
                        int $tmp1420;
                        {
                            ITable* $tmp1424 = Iter$432$131403->$class->itable;
                            while ($tmp1424->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1424 = $tmp1424->next;
                            }
                            $fn1426 $tmp1425 = $tmp1424->methods[1];
                            panda$core$Object* $tmp1427 = $tmp1425(Iter$432$131403);
                            $tmp1423 = $tmp1427;
                            $tmp1422 = ((org$pandalanguage$pandac$ASTNode*) $tmp1423);
                            p1421 = $tmp1422;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1422));
                            panda$core$Panda$unref$panda$core$Object($tmp1423);
                            memset(&name1428, 0, sizeof(name1428));
                            memset(&bound1429, 0, sizeof(bound1429));
                            int $tmp1432;
                            {
                                $tmp1434 = p1421;
                                $match$435_171433 = $tmp1434;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1434));
                                panda$core$Bit $tmp1435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435_171433->$rawValue, ((panda$core$Int64) { 18 }));
                                if ($tmp1435.value) {
                                {
                                    panda$core$String** $tmp1437 = ((panda$core$String**) ((char*) $match$435_171433->$data + 16));
                                    id1436 = *$tmp1437;
                                    {
                                        $tmp1438 = name1428;
                                        $tmp1439 = id1436;
                                        name1428 = $tmp1439;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1439));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1438));
                                    }
                                    {
                                        $tmp1440 = bound1429;
                                        org$pandalanguage$pandac$Type* $tmp1443 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1442 = $tmp1443;
                                        $tmp1441 = $tmp1442;
                                        bound1429 = $tmp1441;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1441));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1442));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1440));
                                    }
                                }
                                }
                                else {
                                panda$core$Bit $tmp1444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435_171433->$rawValue, ((panda$core$Int64) { 37 }));
                                if ($tmp1444.value) {
                                {
                                    panda$core$String** $tmp1446 = ((panda$core$String**) ((char*) $match$435_171433->$data + 16));
                                    id1445 = *$tmp1446;
                                    org$pandalanguage$pandac$ASTNode** $tmp1448 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$435_171433->$data + 24));
                                    type1447 = *$tmp1448;
                                    {
                                        $tmp1449 = name1428;
                                        $tmp1450 = id1445;
                                        name1428 = $tmp1450;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1450));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1449));
                                    }
                                    {
                                        $tmp1451 = bound1429;
                                        org$pandalanguage$pandac$Type* $tmp1454 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1447);
                                        $tmp1453 = $tmp1454;
                                        $tmp1452 = $tmp1453;
                                        bound1429 = $tmp1452;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1452));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1453));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1451));
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
                            $tmp1432 = -1;
                            goto $l1430;
                            $l1430:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1434));
                            switch ($tmp1432) {
                                case -1: goto $l1455;
                            }
                            $l1455:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1457 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1459 = (($fn1458) p1421->$class->vtable[2])(p1421);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1457, $tmp1459, fullName1359, name1428, bound1429);
                            $tmp1456 = $tmp1457;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1396, ((panda$core$Object*) $tmp1456));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1456));
                        }
                        $tmp1420 = -1;
                        goto $l1418;
                        $l1418:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1421));
                        p1421 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1428));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1429));
                        switch ($tmp1420) {
                            case -1: goto $l1460;
                        }
                        $l1460:;
                    }
                    goto $l1410;
                    $l1411:;
                }
                $tmp1402 = -1;
                goto $l1400;
                $l1400:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$432$131403));
                Iter$432$131403 = NULL;
                switch ($tmp1402) {
                    case -1: goto $l1461;
                }
                $l1461:;
            }
            panda$core$Bit $tmp1462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1462.value) {
            {
                panda$core$Object* $tmp1465 = (($fn1464) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1463 = $tmp1465;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1463), p_position, &$s1466);
                panda$core$Panda$unref$panda$core$Object($tmp1463);
            }
            }
        }
        }
        panda$collections$Array* $tmp1470 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1470);
        $tmp1469 = $tmp1470;
        $tmp1468 = $tmp1469;
        supertypes1467 = $tmp1468;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1468));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1469));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Bit $tmp1471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1471.value) {
            {
                panda$core$Object* $tmp1474 = (($fn1473) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1472 = $tmp1474;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1472), p_position, &$s1475);
                panda$core$Panda$unref$panda$core$Object($tmp1472);
            }
            }
            {
                int $tmp1478;
                {
                    ITable* $tmp1482 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1482->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1482 = $tmp1482->next;
                    }
                    $fn1484 $tmp1483 = $tmp1482->methods[0];
                    panda$collections$Iterator* $tmp1485 = $tmp1483(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1481 = $tmp1485;
                    $tmp1480 = $tmp1481;
                    Iter$456$131479 = $tmp1480;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1480));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1481));
                    $l1486:;
                    ITable* $tmp1489 = Iter$456$131479->$class->itable;
                    while ($tmp1489->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1489 = $tmp1489->next;
                    }
                    $fn1491 $tmp1490 = $tmp1489->methods[0];
                    panda$core$Bit $tmp1492 = $tmp1490(Iter$456$131479);
                    panda$core$Bit $tmp1493 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1492);
                    bool $tmp1488 = $tmp1493.value;
                    if (!$tmp1488) goto $l1487;
                    {
                        int $tmp1496;
                        {
                            ITable* $tmp1500 = Iter$456$131479->$class->itable;
                            while ($tmp1500->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1500 = $tmp1500->next;
                            }
                            $fn1502 $tmp1501 = $tmp1500->methods[1];
                            panda$core$Object* $tmp1503 = $tmp1501(Iter$456$131479);
                            $tmp1499 = $tmp1503;
                            $tmp1498 = ((org$pandalanguage$pandac$ASTNode*) $tmp1499);
                            s1497 = $tmp1498;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1498));
                            panda$core$Panda$unref$panda$core$Object($tmp1499);
                            org$pandalanguage$pandac$Type* $tmp1505 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1497);
                            $tmp1504 = $tmp1505;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1467, ((panda$core$Object*) $tmp1504));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1504));
                        }
                        $tmp1496 = -1;
                        goto $l1494;
                        $l1494:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1497));
                        s1497 = NULL;
                        switch ($tmp1496) {
                            case -1: goto $l1506;
                        }
                        $l1506:;
                    }
                    goto $l1486;
                    $l1487:;
                }
                $tmp1478 = -1;
                goto $l1476;
                $l1476:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$456$131479));
                Iter$456$131479 = NULL;
                switch ($tmp1478) {
                    case -1: goto $l1507;
                }
                $l1507:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1511 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1514 = (($fn1513) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1512 = $tmp1514;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1511, p_source, p_position, p_aliases, doccomment1376, annotations1392, p_kind, fullName1359, ((panda$collections$ListView*) supertypes1467), parameters1396, ((org$pandalanguage$pandac$Compiler*) $tmp1512)->root);
        $tmp1510 = $tmp1511;
        $tmp1509 = $tmp1510;
        result1508 = $tmp1509;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1509));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1510));
        panda$core$Panda$unref$panda$core$Object($tmp1512);
        panda$core$Object* $tmp1517 = (($fn1516) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1515 = $tmp1517;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1515)->currentClass, ((panda$core$Object*) result1508));
        panda$core$Panda$unref$panda$core$Object($tmp1515);
        panda$core$Bit $tmp1518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1518.value) {
        {
            int $tmp1521;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1525 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1527 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1527);
                $tmp1526 = $tmp1527;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1528, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1531 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1530 = $tmp1531;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1525, result1508, result1508->position, NULL, $tmp1526, $tmp1528, &$s1529, $tmp1530, NULL);
                $tmp1524 = $tmp1525;
                $tmp1523 = $tmp1524;
                rawValue1522 = $tmp1523;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1523));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1524));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1530));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1526));
                panda$collections$Array$add$panda$collections$Array$T(result1508->fields, ((panda$core$Object*) rawValue1522));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1508->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1522));
                org$pandalanguage$pandac$FieldDecl* $tmp1535 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1537 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1537);
                $tmp1536 = $tmp1537;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1538, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1541 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1540 = $tmp1541;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1535, result1508, result1508->position, NULL, $tmp1536, $tmp1538, &$s1539, $tmp1540, NULL);
                $tmp1534 = $tmp1535;
                $tmp1533 = $tmp1534;
                data1532 = $tmp1533;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1533));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1534));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1540));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1536));
                panda$collections$Array$add$panda$collections$Array$T(result1508->fields, ((panda$core$Object*) data1532));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1508->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1532));
            }
            $tmp1521 = -1;
            goto $l1519;
            $l1519:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1522));
            rawValue1522 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1532));
            data1532 = NULL;
            switch ($tmp1521) {
                case -1: goto $l1542;
            }
            $l1542:;
        }
        }
        {
            int $tmp1545;
            {
                ITable* $tmp1549 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1549->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1549 = $tmp1549->next;
                }
                $fn1551 $tmp1550 = $tmp1549->methods[0];
                panda$collections$Iterator* $tmp1552 = $tmp1550(((panda$collections$Iterable*) p_members));
                $tmp1548 = $tmp1552;
                $tmp1547 = $tmp1548;
                Iter$473$91546 = $tmp1547;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1547));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1548));
                $l1553:;
                ITable* $tmp1556 = Iter$473$91546->$class->itable;
                while ($tmp1556->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1556 = $tmp1556->next;
                }
                $fn1558 $tmp1557 = $tmp1556->methods[0];
                panda$core$Bit $tmp1559 = $tmp1557(Iter$473$91546);
                panda$core$Bit $tmp1560 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1559);
                bool $tmp1555 = $tmp1560.value;
                if (!$tmp1555) goto $l1554;
                {
                    int $tmp1563;
                    {
                        ITable* $tmp1567 = Iter$473$91546->$class->itable;
                        while ($tmp1567->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1567 = $tmp1567->next;
                        }
                        $fn1569 $tmp1568 = $tmp1567->methods[1];
                        panda$core$Object* $tmp1570 = $tmp1568(Iter$473$91546);
                        $tmp1566 = $tmp1570;
                        $tmp1565 = ((org$pandalanguage$pandac$ASTNode*) $tmp1566);
                        m1564 = $tmp1565;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1565));
                        panda$core$Panda$unref$panda$core$Object($tmp1566);
                        int $tmp1573;
                        {
                            $tmp1575 = m1564;
                            $match$474_131574 = $tmp1575;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1575));
                            panda$core$Bit $tmp1576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$474_131574->$rawValue, ((panda$core$Int64) { 24 }));
                            if ($tmp1576.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp1578 = ((org$pandalanguage$pandac$Position*) ((char*) $match$474_131574->$data + 0));
                                mPosition1577 = *$tmp1578;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1580 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$474_131574->$data + 32));
                                methodKind1579 = *$tmp1580;
                                panda$core$Bit $tmp1581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1579.$rawValue, ((panda$core$Int64) { 2 }));
                                if ($tmp1581.value) {
                                {
                                    {
                                        $match$477_251582 = p_kind;
                                        panda$core$Bit $tmp1583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$477_251582.$rawValue, ((panda$core$Int64) { 0 }));
                                        if ($tmp1583.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$477_251582.$rawValue, ((panda$core$Int64) { 1 }));
                                        if ($tmp1584.value) {
                                        {
                                            panda$core$Object* $tmp1587 = (($fn1586) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp1585 = $tmp1587;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1585), mPosition1577, &$s1588);
                                            panda$core$Panda$unref$panda$core$Object($tmp1585);
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$477_251582.$rawValue, ((panda$core$Int64) { 2 }));
                                        if ($tmp1589.value) {
                                        {
                                            panda$core$Object* $tmp1592 = (($fn1591) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp1590 = $tmp1592;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1590), mPosition1577, &$s1593);
                                            panda$core$Panda$unref$panda$core$Object($tmp1590);
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
                        $tmp1573 = -1;
                        goto $l1571;
                        $l1571:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1575));
                        switch ($tmp1573) {
                            case -1: goto $l1594;
                        }
                        $l1594:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1508, m1564);
                    }
                    $tmp1563 = -1;
                    goto $l1561;
                    $l1561:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1564));
                    m1564 = NULL;
                    switch ($tmp1563) {
                        case -1: goto $l1595;
                    }
                    $l1595:;
                }
                goto $l1553;
                $l1554:;
            }
            $tmp1545 = -1;
            goto $l1543;
            $l1543:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$473$91546));
            Iter$473$91546 = NULL;
            switch ($tmp1545) {
                case -1: goto $l1596;
            }
            $l1596:;
        }
        foundInit1597 = ((panda$core$Bit) { false });
        foundCleanup1598 = ((panda$core$Bit) { false });
        {
            int $tmp1601;
            {
                ITable* $tmp1605 = ((panda$collections$Iterable*) result1508->methods)->$class->itable;
                while ($tmp1605->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1605 = $tmp1605->next;
                }
                $fn1607 $tmp1606 = $tmp1605->methods[0];
                panda$collections$Iterator* $tmp1608 = $tmp1606(((panda$collections$Iterable*) result1508->methods));
                $tmp1604 = $tmp1608;
                $tmp1603 = $tmp1604;
                Iter$492$91602 = $tmp1603;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1603));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1604));
                $l1609:;
                ITable* $tmp1612 = Iter$492$91602->$class->itable;
                while ($tmp1612->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1612 = $tmp1612->next;
                }
                $fn1614 $tmp1613 = $tmp1612->methods[0];
                panda$core$Bit $tmp1615 = $tmp1613(Iter$492$91602);
                panda$core$Bit $tmp1616 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1615);
                bool $tmp1611 = $tmp1616.value;
                if (!$tmp1611) goto $l1610;
                {
                    int $tmp1619;
                    {
                        ITable* $tmp1623 = Iter$492$91602->$class->itable;
                        while ($tmp1623->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1623 = $tmp1623->next;
                        }
                        $fn1625 $tmp1624 = $tmp1623->methods[1];
                        panda$core$Object* $tmp1626 = $tmp1624(Iter$492$91602);
                        $tmp1622 = $tmp1626;
                        $tmp1621 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1622);
                        m1620 = $tmp1621;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1621));
                        panda$core$Panda$unref$panda$core$Object($tmp1622);
                        panda$core$Bit $tmp1627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1620->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
                        if ($tmp1627.value) {
                        {
                            foundInit1597 = ((panda$core$Bit) { true });
                        }
                        }
                        panda$core$Bit $tmp1630 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1620)->name, &$s1629);
                        bool $tmp1628 = $tmp1630.value;
                        if (!$tmp1628) goto $l1631;
                        panda$core$Int64 $tmp1632 = panda$collections$Array$get_count$R$panda$core$Int64(m1620->parameters);
                        panda$core$Bit $tmp1633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1632, ((panda$core$Int64) { 0 }));
                        $tmp1628 = $tmp1633.value;
                        $l1631:;
                        panda$core$Bit $tmp1634 = { $tmp1628 };
                        if ($tmp1634.value) {
                        {
                            foundCleanup1598 = ((panda$core$Bit) { true });
                            panda$core$Bit $tmp1635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp1635.value) {
                            {
                                panda$core$Object* $tmp1638 = (($fn1637) self->compiler->$class->vtable[2])(self->compiler);
                                $tmp1636 = $tmp1638;
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1636), p_position, &$s1639);
                                panda$core$Panda$unref$panda$core$Object($tmp1636);
                            }
                            }
                        }
                        }
                    }
                    $tmp1619 = -1;
                    goto $l1617;
                    $l1617:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1620));
                    m1620 = NULL;
                    switch ($tmp1619) {
                        case -1: goto $l1640;
                    }
                    $l1640:;
                }
                goto $l1609;
                $l1610:;
            }
            $tmp1601 = -1;
            goto $l1599;
            $l1599:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$492$91602));
            Iter$492$91602 = NULL;
            switch ($tmp1601) {
                case -1: goto $l1641;
            }
            $l1641:;
        }
        panda$core$Bit $tmp1644 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1597);
        bool $tmp1643 = $tmp1644.value;
        if (!$tmp1643) goto $l1645;
        panda$core$Bit $tmp1646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        $tmp1643 = $tmp1646.value;
        $l1645:;
        panda$core$Bit $tmp1647 = { $tmp1643 };
        bool $tmp1642 = $tmp1647.value;
        if (!$tmp1642) goto $l1648;
        panda$core$Bit $tmp1650 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1508->name, &$s1649);
        $tmp1642 = $tmp1650.value;
        $l1648:;
        panda$core$Bit $tmp1651 = { $tmp1642 };
        if ($tmp1651.value) {
        {
            int $tmp1654;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1658 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1660 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1660);
                $tmp1659 = $tmp1660;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1661, ((panda$core$Int64) { 2 }));
                panda$collections$Array* $tmp1664 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1664);
                $tmp1663 = $tmp1664;
                org$pandalanguage$pandac$Type* $tmp1666 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1665 = $tmp1666;
                panda$collections$ImmutableArray* $tmp1668 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1668);
                $tmp1667 = $tmp1668;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1658, result1508, p_position, NULL, $tmp1659, $tmp1661, &$s1662, $tmp1663, $tmp1665, $tmp1667);
                $tmp1657 = $tmp1658;
                $tmp1656 = $tmp1657;
                defaultInit1655 = $tmp1656;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1656));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1657));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1667));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1665));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1663));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1659));
                panda$collections$Array$add$panda$collections$Array$T(result1508->methods, ((panda$core$Object*) defaultInit1655));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1508->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1655));
            }
            $tmp1654 = -1;
            goto $l1652;
            $l1652:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1655));
            defaultInit1655 = NULL;
            switch ($tmp1654) {
                case -1: goto $l1669;
            }
            $l1669:;
        }
        }
        panda$core$Bit $tmp1672 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup1598);
        bool $tmp1671 = $tmp1672.value;
        if (!$tmp1671) goto $l1673;
        panda$core$Bit $tmp1675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp1674 = $tmp1675.value;
        if ($tmp1674) goto $l1676;
        panda$core$Bit $tmp1677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        $tmp1674 = $tmp1677.value;
        $l1676:;
        panda$core$Bit $tmp1678 = { $tmp1674 };
        $tmp1671 = $tmp1678.value;
        $l1673:;
        panda$core$Bit $tmp1679 = { $tmp1671 };
        bool $tmp1670 = $tmp1679.value;
        if (!$tmp1670) goto $l1680;
        panda$core$Bit $tmp1682 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1508->name, &$s1681);
        $tmp1670 = $tmp1682.value;
        $l1680:;
        panda$core$Bit $tmp1683 = { $tmp1670 };
        if ($tmp1683.value) {
        {
            int $tmp1686;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1690 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1692 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64 $tmp1693 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1692, $tmp1693);
                $tmp1691 = $tmp1692;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1694, ((panda$core$Int64) { 0 }));
                panda$collections$Array* $tmp1697 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1697);
                $tmp1696 = $tmp1697;
                org$pandalanguage$pandac$Type* $tmp1699 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1698 = $tmp1699;
                panda$collections$ImmutableArray* $tmp1701 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1701);
                $tmp1700 = $tmp1701;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1690, result1508, p_position, NULL, $tmp1691, $tmp1694, &$s1695, $tmp1696, $tmp1698, $tmp1700);
                $tmp1689 = $tmp1690;
                $tmp1688 = $tmp1689;
                defaultCleanup1687 = $tmp1688;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1688));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1689));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1700));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1698));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1696));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1691));
                panda$collections$Array$add$panda$collections$Array$T(result1508->methods, ((panda$core$Object*) defaultCleanup1687));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1508->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1687));
            }
            $tmp1686 = -1;
            goto $l1684;
            $l1684:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1687));
            defaultCleanup1687 = NULL;
            switch ($tmp1686) {
                case -1: goto $l1702;
            }
            $l1702:;
        }
        }
        panda$core$Bit $tmp1703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1703.value) {
        {
            haveFields1704 = ((panda$core$Bit) { false });
            {
                int $tmp1707;
                {
                    ITable* $tmp1711 = ((panda$collections$Iterable*) result1508->choiceEntries)->$class->itable;
                    while ($tmp1711->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1711 = $tmp1711->next;
                    }
                    $fn1713 $tmp1712 = $tmp1711->methods[0];
                    panda$collections$Iterator* $tmp1714 = $tmp1712(((panda$collections$Iterable*) result1508->choiceEntries));
                    $tmp1710 = $tmp1714;
                    $tmp1709 = $tmp1710;
                    Iter$520$131708 = $tmp1709;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1709));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1710));
                    $l1715:;
                    ITable* $tmp1718 = Iter$520$131708->$class->itable;
                    while ($tmp1718->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1718 = $tmp1718->next;
                    }
                    $fn1720 $tmp1719 = $tmp1718->methods[0];
                    panda$core$Bit $tmp1721 = $tmp1719(Iter$520$131708);
                    panda$core$Bit $tmp1722 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1721);
                    bool $tmp1717 = $tmp1722.value;
                    if (!$tmp1717) goto $l1716;
                    {
                        int $tmp1725;
                        {
                            ITable* $tmp1729 = Iter$520$131708->$class->itable;
                            while ($tmp1729->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1729 = $tmp1729->next;
                            }
                            $fn1731 $tmp1730 = $tmp1729->methods[1];
                            panda$core$Object* $tmp1732 = $tmp1730(Iter$520$131708);
                            $tmp1728 = $tmp1732;
                            $tmp1727 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1728);
                            e1726 = $tmp1727;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1727));
                            panda$core$Panda$unref$panda$core$Object($tmp1728);
                            panda$core$Int64 $tmp1733 = panda$collections$Array$get_count$R$panda$core$Int64(e1726->fields);
                            panda$core$Bit $tmp1734 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1733, ((panda$core$Int64) { 0 }));
                            if ($tmp1734.value) {
                            {
                                haveFields1704 = ((panda$core$Bit) { true });
                                $tmp1725 = 0;
                                goto $l1723;
                                $l1735:;
                                goto $l1716;
                            }
                            }
                        }
                        $tmp1725 = -1;
                        goto $l1723;
                        $l1723:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1726));
                        e1726 = NULL;
                        switch ($tmp1725) {
                            case 0: goto $l1735;
                            case -1: goto $l1736;
                        }
                        $l1736:;
                    }
                    goto $l1715;
                    $l1716:;
                }
                $tmp1707 = -1;
                goto $l1705;
                $l1705:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$520$131708));
                Iter$520$131708 = NULL;
                switch ($tmp1707) {
                    case -1: goto $l1737;
                }
                $l1737:;
            }
            panda$core$Bit $tmp1738 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1704);
            if ($tmp1738.value) {
            {
                {
                    $tmp1739 = result1508->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp1742 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp1741 = $tmp1742;
                    $tmp1740 = $tmp1741;
                    result1508->rawSuper = $tmp1740;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1740));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1741));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1739));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp1746 = (($fn1745) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1744 = $tmp1746;
        panda$core$Object* $tmp1747 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1744)->currentClass);
        $tmp1743 = $tmp1747;
        panda$core$Panda$unref$panda$core$Object($tmp1743);
        panda$core$Panda$unref$panda$core$Object($tmp1744);
        $tmp1749 = result1508;
        $finallyReturn1747 = $tmp1749;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1749));
        $tmp1358 = 0;
        goto $l1356;
        $l1750:;
        return $finallyReturn1747;
    }
    $l1356:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1359));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1376));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1392));
    annotations1392 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1396));
    parameters1396 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1467));
    supertypes1467 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1508));
    result1508 = NULL;
    switch ($tmp1358) {
        case 0: goto $l1750;
    }
    $l1752:;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$536$91756 = NULL;
    panda$collections$Iterator* $tmp1757;
    panda$collections$Iterator* $tmp1758;
    org$pandalanguage$pandac$ClassDecl* inner1774 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1775;
    panda$core$Object* $tmp1776;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp1755;
        {
            ITable* $tmp1759 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp1759->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1759 = $tmp1759->next;
            }
            $fn1761 $tmp1760 = $tmp1759->methods[0];
            panda$collections$Iterator* $tmp1762 = $tmp1760(((panda$collections$Iterable*) p_cl->classes));
            $tmp1758 = $tmp1762;
            $tmp1757 = $tmp1758;
            Iter$536$91756 = $tmp1757;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1757));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1758));
            $l1763:;
            ITable* $tmp1766 = Iter$536$91756->$class->itable;
            while ($tmp1766->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1766 = $tmp1766->next;
            }
            $fn1768 $tmp1767 = $tmp1766->methods[0];
            panda$core$Bit $tmp1769 = $tmp1767(Iter$536$91756);
            panda$core$Bit $tmp1770 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1769);
            bool $tmp1765 = $tmp1770.value;
            if (!$tmp1765) goto $l1764;
            {
                int $tmp1773;
                {
                    ITable* $tmp1777 = Iter$536$91756->$class->itable;
                    while ($tmp1777->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1777 = $tmp1777->next;
                    }
                    $fn1779 $tmp1778 = $tmp1777->methods[1];
                    panda$core$Object* $tmp1780 = $tmp1778(Iter$536$91756);
                    $tmp1776 = $tmp1780;
                    $tmp1775 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1776);
                    inner1774 = $tmp1775;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1775));
                    panda$core$Panda$unref$panda$core$Object($tmp1776);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1774, p_arr);
                }
                $tmp1773 = -1;
                goto $l1771;
                $l1771:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1774));
                inner1774 = NULL;
                switch ($tmp1773) {
                    case -1: goto $l1781;
                }
                $l1781:;
            }
            goto $l1763;
            $l1764:;
        }
        $tmp1755 = -1;
        goto $l1753;
        $l1753:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$536$91756));
        Iter$536$91756 = NULL;
        switch ($tmp1755) {
            case -1: goto $l1782;
        }
        $l1782:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$542_91786 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1787;
    panda$collections$ImmutableArray* entries1789 = NULL;
    panda$collections$Array* result1794 = NULL;
    panda$collections$Array* $tmp1795;
    panda$collections$Array* $tmp1796;
    panda$core$String* currentPackage1798 = NULL;
    panda$core$String* $tmp1799;
    panda$collections$HashMap* aliases1801 = NULL;
    panda$collections$HashMap* $tmp1802;
    panda$collections$HashMap* $tmp1803;
    panda$collections$Iterator* Iter$547$171808 = NULL;
    panda$collections$Iterator* $tmp1809;
    panda$collections$Iterator* $tmp1810;
    org$pandalanguage$pandac$ASTNode* e1826 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1827;
    panda$core$Object* $tmp1828;
    org$pandalanguage$pandac$ASTNode* $match$548_211836 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1837;
    panda$core$String* name1839 = NULL;
    panda$core$String* $tmp1841;
    panda$core$String* $tmp1842;
    panda$core$String* fullName1844 = NULL;
    panda$core$String$Index$nullable idx1849;
    panda$core$String* alias1852 = NULL;
    panda$core$String* $tmp1853;
    panda$core$String* $tmp1854;
    panda$core$String* $tmp1855;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1856;
    panda$core$String* $tmp1859;
    panda$core$String* $tmp1860;
    org$pandalanguage$pandac$Position position1863;
    org$pandalanguage$pandac$ASTNode* dc1865 = NULL;
    panda$collections$ImmutableArray* annotations1867 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1869;
    panda$core$String* name1871 = NULL;
    panda$collections$ImmutableArray* generics1873 = NULL;
    panda$collections$ImmutableArray* supertypes1875 = NULL;
    panda$collections$ImmutableArray* members1877 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl1882 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1883;
    org$pandalanguage$pandac$ClassDecl* $tmp1884;
    panda$collections$ListView* $finallyReturn1889;
    panda$collections$ListView* $tmp1891;
    int $tmp1785;
    {
        $tmp1787 = p_file;
        $match$542_91786 = $tmp1787;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1787));
        panda$core$Bit $tmp1788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$542_91786->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1788.value) {
        {
            panda$collections$ImmutableArray** $tmp1790 = ((panda$collections$ImmutableArray**) ((char*) $match$542_91786->$data + 0));
            entries1789 = *$tmp1790;
            int $tmp1793;
            {
                panda$collections$Array* $tmp1797 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1797);
                $tmp1796 = $tmp1797;
                $tmp1795 = $tmp1796;
                result1794 = $tmp1795;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1795));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1796));
                $tmp1799 = &$s1800;
                currentPackage1798 = $tmp1799;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1799));
                panda$collections$HashMap* $tmp1804 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp1804);
                $tmp1803 = $tmp1804;
                $tmp1802 = $tmp1803;
                aliases1801 = $tmp1802;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1802));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1803));
                {
                    int $tmp1807;
                    {
                        ITable* $tmp1811 = ((panda$collections$Iterable*) entries1789)->$class->itable;
                        while ($tmp1811->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1811 = $tmp1811->next;
                        }
                        $fn1813 $tmp1812 = $tmp1811->methods[0];
                        panda$collections$Iterator* $tmp1814 = $tmp1812(((panda$collections$Iterable*) entries1789));
                        $tmp1810 = $tmp1814;
                        $tmp1809 = $tmp1810;
                        Iter$547$171808 = $tmp1809;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1809));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1810));
                        $l1815:;
                        ITable* $tmp1818 = Iter$547$171808->$class->itable;
                        while ($tmp1818->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1818 = $tmp1818->next;
                        }
                        $fn1820 $tmp1819 = $tmp1818->methods[0];
                        panda$core$Bit $tmp1821 = $tmp1819(Iter$547$171808);
                        panda$core$Bit $tmp1822 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1821);
                        bool $tmp1817 = $tmp1822.value;
                        if (!$tmp1817) goto $l1816;
                        {
                            int $tmp1825;
                            {
                                ITable* $tmp1829 = Iter$547$171808->$class->itable;
                                while ($tmp1829->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1829 = $tmp1829->next;
                                }
                                $fn1831 $tmp1830 = $tmp1829->methods[1];
                                panda$core$Object* $tmp1832 = $tmp1830(Iter$547$171808);
                                $tmp1828 = $tmp1832;
                                $tmp1827 = ((org$pandalanguage$pandac$ASTNode*) $tmp1828);
                                e1826 = $tmp1827;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1827));
                                panda$core$Panda$unref$panda$core$Object($tmp1828);
                                int $tmp1835;
                                {
                                    $tmp1837 = e1826;
                                    $match$548_211836 = $tmp1837;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1837));
                                    panda$core$Bit $tmp1838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$548_211836->$rawValue, ((panda$core$Int64) { 27 }));
                                    if ($tmp1838.value) {
                                    {
                                        panda$core$String** $tmp1840 = ((panda$core$String**) ((char*) $match$548_211836->$data + 16));
                                        name1839 = *$tmp1840;
                                        {
                                            $tmp1841 = currentPackage1798;
                                            $tmp1842 = name1839;
                                            currentPackage1798 = $tmp1842;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1842));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1841));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$548_211836->$rawValue, ((panda$core$Int64) { 38 }));
                                    if ($tmp1843.value) {
                                    {
                                        panda$core$String** $tmp1845 = ((panda$core$String**) ((char*) $match$548_211836->$data + 16));
                                        fullName1844 = *$tmp1845;
                                        int $tmp1848;
                                        {
                                            panda$core$String$Index$nullable $tmp1851 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName1844, &$s1850);
                                            idx1849 = $tmp1851;
                                            memset(&alias1852, 0, sizeof(alias1852));
                                            if (((panda$core$Bit) { idx1849.nonnull }).value) {
                                            {
                                                {
                                                    $tmp1853 = alias1852;
                                                    panda$core$String$Index $tmp1857 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName1844, ((panda$core$String$Index) idx1849.value));
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1856, ((panda$core$String$Index$nullable) { $tmp1857, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                                    panda$core$String* $tmp1858 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName1844, $tmp1856);
                                                    $tmp1855 = $tmp1858;
                                                    $tmp1854 = $tmp1855;
                                                    alias1852 = $tmp1854;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1854));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1855));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1853));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp1859 = alias1852;
                                                    $tmp1860 = fullName1844;
                                                    alias1852 = $tmp1860;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1860));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1859));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1801, ((panda$collections$Key*) alias1852), ((panda$core$Object*) fullName1844));
                                        }
                                        $tmp1848 = -1;
                                        goto $l1846;
                                        $l1846:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias1852));
                                        switch ($tmp1848) {
                                            case -1: goto $l1861;
                                        }
                                        $l1861:;
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$548_211836->$rawValue, ((panda$core$Int64) { 9 }));
                                    if ($tmp1862.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp1864 = ((org$pandalanguage$pandac$Position*) ((char*) $match$548_211836->$data + 0));
                                        position1863 = *$tmp1864;
                                        org$pandalanguage$pandac$ASTNode** $tmp1866 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$548_211836->$data + 16));
                                        dc1865 = *$tmp1866;
                                        panda$collections$ImmutableArray** $tmp1868 = ((panda$collections$ImmutableArray**) ((char*) $match$548_211836->$data + 24));
                                        annotations1867 = *$tmp1868;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp1870 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$548_211836->$data + 32));
                                        kind1869 = *$tmp1870;
                                        panda$core$String** $tmp1872 = ((panda$core$String**) ((char*) $match$548_211836->$data + 40));
                                        name1871 = *$tmp1872;
                                        panda$collections$ImmutableArray** $tmp1874 = ((panda$collections$ImmutableArray**) ((char*) $match$548_211836->$data + 48));
                                        generics1873 = *$tmp1874;
                                        panda$collections$ImmutableArray** $tmp1876 = ((panda$collections$ImmutableArray**) ((char*) $match$548_211836->$data + 56));
                                        supertypes1875 = *$tmp1876;
                                        panda$collections$ImmutableArray** $tmp1878 = ((panda$collections$ImmutableArray**) ((char*) $match$548_211836->$data + 64));
                                        members1877 = *$tmp1878;
                                        int $tmp1881;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp1885 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1801), currentPackage1798, position1863, dc1865, annotations1867, kind1869, name1871, generics1873, supertypes1875, members1877);
                                            $tmp1884 = $tmp1885;
                                            $tmp1883 = $tmp1884;
                                            cl1882 = $tmp1883;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1883));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1884));
                                            if (((panda$core$Bit) { cl1882 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl1882, result1794);
                                            }
                                            }
                                        }
                                        $tmp1881 = -1;
                                        goto $l1879;
                                        $l1879:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1882));
                                        cl1882 = NULL;
                                        switch ($tmp1881) {
                                            case -1: goto $l1886;
                                        }
                                        $l1886:;
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
                                $tmp1835 = -1;
                                goto $l1833;
                                $l1833:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1837));
                                switch ($tmp1835) {
                                    case -1: goto $l1887;
                                }
                                $l1887:;
                            }
                            $tmp1825 = -1;
                            goto $l1823;
                            $l1823:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1826));
                            e1826 = NULL;
                            switch ($tmp1825) {
                                case -1: goto $l1888;
                            }
                            $l1888:;
                        }
                        goto $l1815;
                        $l1816:;
                    }
                    $tmp1807 = -1;
                    goto $l1805;
                    $l1805:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$547$171808));
                    Iter$547$171808 = NULL;
                    switch ($tmp1807) {
                        case -1: goto $l1889;
                    }
                    $l1889:;
                }
                $tmp1891 = ((panda$collections$ListView*) result1794);
                $finallyReturn1889 = $tmp1891;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1891));
                $tmp1793 = 0;
                goto $l1791;
                $l1892:;
                $tmp1785 = 0;
                goto $l1783;
                $l1893:;
                return $finallyReturn1889;
            }
            $l1791:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1794));
            result1794 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1798));
            currentPackage1798 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases1801));
            aliases1801 = NULL;
            switch ($tmp1793) {
                case 0: goto $l1892;
            }
            $l1895:;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp1785 = -1;
    goto $l1783;
    $l1783:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1787));
    switch ($tmp1785) {
        case 0: goto $l1893;
        case -1: goto $l1896;
    }
    $l1896:;
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp1899;
    {
    }
    $tmp1899 = -1;
    goto $l1897;
    $l1897:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1899) {
        case -1: goto $l1900;
    }
    $l1900:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
}

