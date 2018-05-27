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
#include "panda/collections/List.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/HashMap.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/Key.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Scanner$cleanup, org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit, org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT} };

typedef panda$collections$Iterator* (*$fn88)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn95)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn106)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn117)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn158)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn165)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn176)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn193)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn217)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn224)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn235)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn339)(panda$core$Weak*);
typedef panda$core$Object* (*$fn349)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn420)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn427)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn438)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn531)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn538)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn549)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn575)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn582)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn593)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn633)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn640)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn651)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn680)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn687)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn698)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn729)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn736)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn747)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn772)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn779)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn790)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn815)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn822)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn833)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn847)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn854)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn865)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn924)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn931)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn942)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn964)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn971)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn982)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn996)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1003)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1014)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1037)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1044)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1055)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1067)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1086)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1093)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1104)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1162)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1169)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1180)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1216)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1229)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1370)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1377)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1388)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1452)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1459)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1470)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1502)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn1508)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1517)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1528)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1535)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1546)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1557)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1560)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1595)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1602)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1613)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1630)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1635)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1651)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1658)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1669)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1681)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1757)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1764)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1775)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1789)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1805)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1812)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1823)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1844)(panda$core$Weak*);
typedef void (*$fn1848)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1911)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1918)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1929)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2034)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2041)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2052)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2114)(panda$core$Weak*);
typedef panda$core$Object* (*$fn2121)(panda$core$Weak*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, -230432251521796329, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static panda$core$String $s1218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x6f\x6e\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x27", 30, -1250916154819313721, NULL };
static panda$core$String $s1235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x68\x61\x76\x65\x20\x61\x20\x62\x6f\x64\x79", 16, -7652461387112275530, NULL };
static panda$core$String $s1312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s1948 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static panda$core$String $s2107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp2;
    panda$core$Weak* $tmp3;
    panda$core$Weak* $tmp4;
    self->compiler = NULL;
    self->bareCodeClass = NULL;
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
    org$pandalanguage$pandac$ASTNode* $match$22_99 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp10;
    org$pandalanguage$pandac$IRNode* node12 = NULL;
    org$pandalanguage$pandac$IRNode* $match$24_1717 = NULL;
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
    panda$collections$Iterator* Iter$38$1783 = NULL;
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
    org$pandalanguage$pandac$parser$Token$Kind $match$44_17137;
    org$pandalanguage$pandac$Type$Kind $tmp139;
    org$pandalanguage$pandac$Type$Kind $tmp141;
    org$pandalanguage$pandac$Type$Kind $tmp143;
    org$pandalanguage$pandac$Type$Kind $tmp145;
    panda$collections$Array* parameters146 = NULL;
    panda$collections$Array* $tmp147;
    panda$collections$Array* $tmp148;
    panda$collections$Iterator* Iter$57$17153 = NULL;
    panda$collections$Iterator* $tmp154;
    panda$collections$Iterator* $tmp155;
    org$pandalanguage$pandac$ASTNode* p171 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp172;
    panda$core$Object* $tmp173;
    org$pandalanguage$pandac$Type* $tmp178;
    org$pandalanguage$pandac$Type* returnType182 = NULL;
    org$pandalanguage$pandac$Type* $tmp183;
    org$pandalanguage$pandac$Type* $tmp184;
    org$pandalanguage$pandac$Type* $tmp185;
    org$pandalanguage$pandac$Type* $tmp187;
    org$pandalanguage$pandac$Type* $tmp188;
    org$pandalanguage$pandac$Type* $tmp189;
    org$pandalanguage$pandac$Type* $tmp191;
    org$pandalanguage$pandac$Type* $tmp192;
    panda$collections$ImmutableArray* $tmp195;
    int $tmp8;
    {
        $tmp10 = p_type;
        $match$22_99 = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22_99->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp11.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp13 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$22_99->$data + 0));
            node12 = *$tmp13;
            int $tmp16;
            {
                $tmp18 = node12;
                $match$24_1717 = $tmp18;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
                panda$core$Bit $tmp19 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$24_1717->$rawValue, ((panda$core$Int64) { 38 }));
                if ($tmp19.value) {
                {
                    org$pandalanguage$pandac$Type** $tmp21 = ((org$pandalanguage$pandac$Type**) ((char*) $match$24_1717->$data + 16));
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
        panda$core$Bit $tmp28 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22_99->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp28.value) {
        {
            org$pandalanguage$pandac$Position* $tmp30 = ((org$pandalanguage$pandac$Position*) ((char*) $match$22_99->$data + 0));
            position29 = *$tmp30;
            panda$core$String** $tmp32 = ((panda$core$String**) ((char*) $match$22_99->$data + 16));
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
        panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22_99->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp39.value) {
        {
            org$pandalanguage$pandac$Position* $tmp41 = ((org$pandalanguage$pandac$Position*) ((char*) $match$22_99->$data + 0));
            position40 = *$tmp41;
            org$pandalanguage$pandac$ASTNode** $tmp43 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$22_99->$data + 16));
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
        panda$core$Bit $tmp66 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22_99->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp66.value) {
        {
            org$pandalanguage$pandac$Position* $tmp68 = ((org$pandalanguage$pandac$Position*) ((char*) $match$22_99->$data + 0));
            position67 = *$tmp68;
            panda$core$String** $tmp70 = ((panda$core$String**) ((char*) $match$22_99->$data + 16));
            base69 = *$tmp70;
            panda$collections$ImmutableArray** $tmp72 = ((panda$collections$ImmutableArray**) ((char*) $match$22_99->$data + 24));
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
                        Iter$38$1783 = $tmp84;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp84));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
                        $l90:;
                        ITable* $tmp93 = Iter$38$1783->$class->itable;
                        while ($tmp93->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp93 = $tmp93->next;
                        }
                        $fn95 $tmp94 = $tmp93->methods[0];
                        panda$core$Bit $tmp96 = $tmp94(Iter$38$1783);
                        panda$core$Bit $tmp97 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp96);
                        bool $tmp92 = $tmp97.value;
                        if (!$tmp92) goto $l91;
                        {
                            int $tmp100;
                            {
                                ITable* $tmp104 = Iter$38$1783->$class->itable;
                                while ($tmp104->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp104 = $tmp104->next;
                                }
                                $fn106 $tmp105 = $tmp104->methods[1];
                                panda$core$Object* $tmp107 = $tmp105(Iter$38$1783);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$38$1783));
                    Iter$38$1783 = NULL;
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
        panda$core$Bit $tmp124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22_99->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp124.value) {
        {
            org$pandalanguage$pandac$Position* $tmp126 = ((org$pandalanguage$pandac$Position*) ((char*) $match$22_99->$data + 0));
            position125 = *$tmp126;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp128 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$22_99->$data + 16));
            kind127 = *$tmp128;
            panda$collections$ImmutableArray** $tmp130 = ((panda$collections$ImmutableArray**) ((char*) $match$22_99->$data + 24));
            rawParameters129 = *$tmp130;
            org$pandalanguage$pandac$ASTNode** $tmp132 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$22_99->$data + 32));
            rawReturnType131 = *$tmp132;
            int $tmp135;
            {
                memset(&typeKind136, 0, sizeof(typeKind136));
                {
                    $match$44_17137 = kind127;
                    panda$core$Bit $tmp138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$44_17137.$rawValue, ((panda$core$Int64) { 90 }));
                    if ($tmp138.value) {
                    {
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp139, ((panda$core$Int64) { 14 }));
                        typeKind136 = $tmp139;
                    }
                    }
                    else {
                    panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$44_17137.$rawValue, ((panda$core$Int64) { 91 }));
                    if ($tmp140.value) {
                    {
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp141, ((panda$core$Int64) { 15 }));
                        typeKind136 = $tmp141;
                    }
                    }
                    else {
                    panda$core$Bit $tmp142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$44_17137.$rawValue, ((panda$core$Int64) { 92 }));
                    if ($tmp142.value) {
                    {
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp143, ((panda$core$Int64) { 16 }));
                        typeKind136 = $tmp143;
                    }
                    }
                    else {
                    panda$core$Bit $tmp144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$44_17137.$rawValue, ((panda$core$Int64) { 93 }));
                    if ($tmp144.value) {
                    {
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp145, ((panda$core$Int64) { 17 }));
                        typeKind136 = $tmp145;
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
                panda$collections$Array* $tmp149 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp149);
                $tmp148 = $tmp149;
                $tmp147 = $tmp148;
                parameters146 = $tmp147;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
                {
                    int $tmp152;
                    {
                        ITable* $tmp156 = ((panda$collections$Iterable*) rawParameters129)->$class->itable;
                        while ($tmp156->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp156 = $tmp156->next;
                        }
                        $fn158 $tmp157 = $tmp156->methods[0];
                        panda$collections$Iterator* $tmp159 = $tmp157(((panda$collections$Iterable*) rawParameters129));
                        $tmp155 = $tmp159;
                        $tmp154 = $tmp155;
                        Iter$57$17153 = $tmp154;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
                        $l160:;
                        ITable* $tmp163 = Iter$57$17153->$class->itable;
                        while ($tmp163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp163 = $tmp163->next;
                        }
                        $fn165 $tmp164 = $tmp163->methods[0];
                        panda$core$Bit $tmp166 = $tmp164(Iter$57$17153);
                        panda$core$Bit $tmp167 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp166);
                        bool $tmp162 = $tmp167.value;
                        if (!$tmp162) goto $l161;
                        {
                            int $tmp170;
                            {
                                ITable* $tmp174 = Iter$57$17153->$class->itable;
                                while ($tmp174->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp174 = $tmp174->next;
                                }
                                $fn176 $tmp175 = $tmp174->methods[1];
                                panda$core$Object* $tmp177 = $tmp175(Iter$57$17153);
                                $tmp173 = $tmp177;
                                $tmp172 = ((org$pandalanguage$pandac$ASTNode*) $tmp173);
                                p171 = $tmp172;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
                                panda$core$Panda$unref$panda$core$Object($tmp173);
                                org$pandalanguage$pandac$Type* $tmp179 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p171);
                                $tmp178 = $tmp179;
                                panda$collections$Array$add$panda$collections$Array$T(parameters146, ((panda$core$Object*) $tmp178));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
                            }
                            $tmp170 = -1;
                            goto $l168;
                            $l168:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p171));
                            p171 = NULL;
                            switch ($tmp170) {
                                case -1: goto $l180;
                            }
                            $l180:;
                        }
                        goto $l160;
                        $l161:;
                    }
                    $tmp152 = -1;
                    goto $l150;
                    $l150:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$57$17153));
                    Iter$57$17153 = NULL;
                    switch ($tmp152) {
                        case -1: goto $l181;
                    }
                    $l181:;
                }
                memset(&returnType182, 0, sizeof(returnType182));
                if (((panda$core$Bit) { rawReturnType131 != NULL }).value) {
                {
                    {
                        $tmp183 = returnType182;
                        org$pandalanguage$pandac$Type* $tmp186 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, rawReturnType131);
                        $tmp185 = $tmp186;
                        $tmp184 = $tmp185;
                        returnType182 = $tmp184;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp183));
                    }
                }
                }
                else {
                {
                    {
                        $tmp187 = returnType182;
                        org$pandalanguage$pandac$Type* $tmp190 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                        $tmp189 = $tmp190;
                        $tmp188 = $tmp189;
                        returnType182 = $tmp188;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp188));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp189));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp187));
                    }
                }
                }
                org$pandalanguage$pandac$Position $tmp194 = (($fn193) p_type->$class->vtable[2])(p_type);
                panda$collections$ImmutableArray* $tmp196 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters146);
                $tmp195 = $tmp196;
                org$pandalanguage$pandac$Type* $tmp197 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp194, typeKind136, ((panda$collections$ListView*) $tmp195), returnType182);
                $tmp192 = $tmp197;
                $tmp191 = $tmp192;
                $returnValue22 = $tmp191;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp191));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
                $tmp135 = 0;
                goto $l133;
                $l198:;
                $tmp8 = 4;
                goto $l6;
                $l199:;
                return $returnValue22;
            }
            $l133:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters146));
            parameters146 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType182));
            switch ($tmp135) {
                case 0: goto $l198;
            }
            $l201:;
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
        case -1: goto $l202;
        case 1: goto $l37;
        case 0: goto $l25;
        case 3: goto $l121;
        case 4: goto $l199;
        case 2: goto $l63;
    }
    $l202:;
}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, panda$collections$ImmutableArray* p_a) {
    panda$core$Int64 flags206;
    panda$collections$Array* expressions207 = NULL;
    panda$collections$Array* $tmp208;
    panda$collections$Iterator* Iter$76$9212 = NULL;
    panda$collections$Iterator* $tmp213;
    panda$collections$Iterator* $tmp214;
    org$pandalanguage$pandac$ASTNode* c230 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp231;
    panda$core$Object* $tmp232;
    org$pandalanguage$pandac$ASTNode* $match$77_13240 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp241;
    org$pandalanguage$pandac$Position position243;
    panda$core$String* text245 = NULL;
    org$pandalanguage$pandac$ASTNode* rawExpr247 = NULL;
    org$pandalanguage$pandac$ASTNode* expr252 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp253;
    panda$core$String* $match$80_21257 = NULL;
    panda$core$String* $tmp258;
    panda$collections$Array* $tmp300;
    panda$collections$Array* $tmp301;
    panda$collections$Array* $tmp302;
    org$pandalanguage$pandac$Annotations$Expression* $tmp304;
    org$pandalanguage$pandac$ASTNode* $tmp306;
    org$pandalanguage$pandac$ASTNode* $tmp307;
    panda$collections$Array* $tmp310;
    panda$collections$Array* $tmp311;
    panda$collections$Array* $tmp312;
    org$pandalanguage$pandac$Annotations$Expression* $tmp314;
    org$pandalanguage$pandac$ASTNode* $tmp316;
    org$pandalanguage$pandac$ASTNode* $tmp317;
    panda$collections$Array* $tmp320;
    panda$collections$Array* $tmp321;
    panda$collections$Array* $tmp322;
    org$pandalanguage$pandac$Annotations$Expression* $tmp324;
    org$pandalanguage$pandac$ASTNode* $tmp326;
    org$pandalanguage$pandac$ASTNode* $tmp327;
    panda$collections$Array* $tmp330;
    panda$collections$Array* $tmp331;
    panda$collections$Array* $tmp332;
    org$pandalanguage$pandac$Annotations$Expression* $tmp334;
    org$pandalanguage$pandac$ASTNode* $tmp336;
    org$pandalanguage$pandac$ASTNode* $tmp337;
    panda$core$Object* $tmp338;
    panda$core$String* $tmp341;
    panda$core$String* $tmp342;
    panda$core$Object* $tmp348;
    panda$core$String* $tmp351;
    panda$core$String* $tmp352;
    org$pandalanguage$pandac$Annotations* $returnValue361;
    org$pandalanguage$pandac$Annotations* $tmp362;
    org$pandalanguage$pandac$Annotations* $tmp363;
    int $tmp205;
    {
        flags206 = ((panda$core$Int64) { 0 });
        $tmp208 = NULL;
        expressions207 = $tmp208;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp208));
        {
            int $tmp211;
            {
                ITable* $tmp215 = ((panda$collections$Iterable*) p_a)->$class->itable;
                while ($tmp215->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp215 = $tmp215->next;
                }
                $fn217 $tmp216 = $tmp215->methods[0];
                panda$collections$Iterator* $tmp218 = $tmp216(((panda$collections$Iterable*) p_a));
                $tmp214 = $tmp218;
                $tmp213 = $tmp214;
                Iter$76$9212 = $tmp213;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp213));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp214));
                $l219:;
                ITable* $tmp222 = Iter$76$9212->$class->itable;
                while ($tmp222->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp222 = $tmp222->next;
                }
                $fn224 $tmp223 = $tmp222->methods[0];
                panda$core$Bit $tmp225 = $tmp223(Iter$76$9212);
                panda$core$Bit $tmp226 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp225);
                bool $tmp221 = $tmp226.value;
                if (!$tmp221) goto $l220;
                {
                    int $tmp229;
                    {
                        ITable* $tmp233 = Iter$76$9212->$class->itable;
                        while ($tmp233->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp233 = $tmp233->next;
                        }
                        $fn235 $tmp234 = $tmp233->methods[1];
                        panda$core$Object* $tmp236 = $tmp234(Iter$76$9212);
                        $tmp232 = $tmp236;
                        $tmp231 = ((org$pandalanguage$pandac$ASTNode*) $tmp232);
                        c230 = $tmp231;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp231));
                        panda$core$Panda$unref$panda$core$Object($tmp232);
                        int $tmp239;
                        {
                            $tmp241 = c230;
                            $match$77_13240 = $tmp241;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp241));
                            panda$core$Bit $tmp242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_13240->$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp242.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp244 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_13240->$data + 0));
                                position243 = *$tmp244;
                                panda$core$String** $tmp246 = ((panda$core$String**) ((char*) $match$77_13240->$data + 16));
                                text245 = *$tmp246;
                                org$pandalanguage$pandac$ASTNode** $tmp248 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$77_13240->$data + 24));
                                rawExpr247 = *$tmp248;
                                int $tmp251;
                                {
                                    $tmp253 = rawExpr247;
                                    expr252 = $tmp253;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp253));
                                    int $tmp256;
                                    {
                                        $tmp258 = text245;
                                        $match$80_21257 = $tmp258;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp258));
                                        panda$core$Bit $tmp260 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$80_21257, &$s259);
                                        if ($tmp260.value) {
                                        {
                                            panda$core$Int64 $tmp261 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, ((panda$core$Int64) { 2 }));
                                            flags206 = $tmp261;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp263 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$80_21257, &$s262);
                                        if ($tmp263.value) {
                                        {
                                            panda$core$Int64 $tmp264 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, ((panda$core$Int64) { 4 }));
                                            flags206 = $tmp264;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp266 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$80_21257, &$s265);
                                        if ($tmp266.value) {
                                        {
                                            panda$core$Int64 $tmp267 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, ((panda$core$Int64) { 8 }));
                                            flags206 = $tmp267;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp269 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$80_21257, &$s268);
                                        if ($tmp269.value) {
                                        {
                                            panda$core$Int64 $tmp270 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, ((panda$core$Int64) { 16 }));
                                            flags206 = $tmp270;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp272 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$80_21257, &$s271);
                                        if ($tmp272.value) {
                                        {
                                            panda$core$Int64 $tmp273 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, ((panda$core$Int64) { 32 }));
                                            flags206 = $tmp273;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp275 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$80_21257, &$s274);
                                        if ($tmp275.value) {
                                        {
                                            panda$core$Int64 $tmp276 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, ((panda$core$Int64) { 64 }));
                                            flags206 = $tmp276;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp278 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$80_21257, &$s277);
                                        if ($tmp278.value) {
                                        {
                                            panda$core$Int64 $tmp279 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, ((panda$core$Int64) { 128 }));
                                            flags206 = $tmp279;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp281 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$80_21257, &$s280);
                                        if ($tmp281.value) {
                                        {
                                            panda$core$Int64 $tmp282 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, ((panda$core$Int64) { 256 }));
                                            flags206 = $tmp282;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp284 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$80_21257, &$s283);
                                        if ($tmp284.value) {
                                        {
                                            panda$core$Int64 $tmp285 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, ((panda$core$Int64) { 512 }));
                                            flags206 = $tmp285;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp287 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$80_21257, &$s286);
                                        if ($tmp287.value) {
                                        {
                                            panda$core$Int64 $tmp288 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, ((panda$core$Int64) { 1024 }));
                                            flags206 = $tmp288;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp290 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$80_21257, &$s289);
                                        if ($tmp290.value) {
                                        {
                                            panda$core$Int64 $tmp291 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, ((panda$core$Int64) { 2048 }));
                                            flags206 = $tmp291;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp293 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$80_21257, &$s292);
                                        if ($tmp293.value) {
                                        {
                                            panda$core$Int64 $tmp294 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, ((panda$core$Int64) { 4096 }));
                                            flags206 = $tmp294;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp296 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$80_21257, &$s295);
                                        if ($tmp296.value) {
                                        {
                                            panda$core$Int64 $tmp297 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, ((panda$core$Int64) { 16384 }));
                                            flags206 = $tmp297;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp299 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$80_21257, &$s298);
                                        if ($tmp299.value) {
                                        {
                                            if (((panda$core$Bit) { expressions207 == NULL }).value) {
                                            {
                                                {
                                                    $tmp300 = expressions207;
                                                    panda$collections$Array* $tmp303 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp303);
                                                    $tmp302 = $tmp303;
                                                    $tmp301 = $tmp302;
                                                    expressions207 = $tmp301;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp301));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp302));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp300));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp305 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp305, ((panda$core$Int64) { 0 }), expr252);
                                            $tmp304 = $tmp305;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions207, ((panda$core$Object*) $tmp304));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp304));
                                            {
                                                $tmp306 = expr252;
                                                $tmp307 = NULL;
                                                expr252 = $tmp307;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp307));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp309 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$80_21257, &$s308);
                                        if ($tmp309.value) {
                                        {
                                            if (((panda$core$Bit) { expressions207 == NULL }).value) {
                                            {
                                                {
                                                    $tmp310 = expressions207;
                                                    panda$collections$Array* $tmp313 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp313);
                                                    $tmp312 = $tmp313;
                                                    $tmp311 = $tmp312;
                                                    expressions207 = $tmp311;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp311));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp310));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp315 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp315, ((panda$core$Int64) { 1 }), expr252);
                                            $tmp314 = $tmp315;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions207, ((panda$core$Object*) $tmp314));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp314));
                                            {
                                                $tmp316 = expr252;
                                                $tmp317 = NULL;
                                                expr252 = $tmp317;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp317));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp319 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$80_21257, &$s318);
                                        if ($tmp319.value) {
                                        {
                                            if (((panda$core$Bit) { expressions207 == NULL }).value) {
                                            {
                                                {
                                                    $tmp320 = expressions207;
                                                    panda$collections$Array* $tmp323 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp323);
                                                    $tmp322 = $tmp323;
                                                    $tmp321 = $tmp322;
                                                    expressions207 = $tmp321;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp321));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp325 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp325, ((panda$core$Int64) { 2 }), expr252);
                                            $tmp324 = $tmp325;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions207, ((panda$core$Object*) $tmp324));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
                                            {
                                                $tmp326 = expr252;
                                                $tmp327 = NULL;
                                                expr252 = $tmp327;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp327));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp326));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp329 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$80_21257, &$s328);
                                        if ($tmp329.value) {
                                        {
                                            if (((panda$core$Bit) { expressions207 == NULL }).value) {
                                            {
                                                {
                                                    $tmp330 = expressions207;
                                                    panda$collections$Array* $tmp333 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp333);
                                                    $tmp332 = $tmp333;
                                                    $tmp331 = $tmp332;
                                                    expressions207 = $tmp331;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp331));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp335 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp335, ((panda$core$Int64) { 3 }), expr252);
                                            $tmp334 = $tmp335;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions207, ((panda$core$Object*) $tmp334));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp334));
                                            {
                                                $tmp336 = expr252;
                                                $tmp337 = NULL;
                                                expr252 = $tmp337;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp337));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp336));
                                            }
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$Object* $tmp340 = (($fn339) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp338 = $tmp340;
                                            panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s343, text245);
                                            $tmp342 = $tmp344;
                                            panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp342, &$s345);
                                            $tmp341 = $tmp346;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp338), position243, $tmp341);
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp341));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp342));
                                            panda$core$Panda$unref$panda$core$Object($tmp338);
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
                                    $tmp256 = -1;
                                    goto $l254;
                                    $l254:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
                                    switch ($tmp256) {
                                        case -1: goto $l347;
                                    }
                                    $l347:;
                                    if (((panda$core$Bit) { expr252 != NULL }).value) {
                                    {
                                        panda$core$Object* $tmp350 = (($fn349) self->compiler->$class->vtable[2])(self->compiler);
                                        $tmp348 = $tmp350;
                                        panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s353, text245);
                                        $tmp352 = $tmp354;
                                        panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp352, &$s355);
                                        $tmp351 = $tmp356;
                                        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp348), position243, $tmp351);
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp351));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
                                        panda$core$Panda$unref$panda$core$Object($tmp348);
                                    }
                                    }
                                }
                                $tmp251 = -1;
                                goto $l249;
                                $l249:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr252));
                                expr252 = NULL;
                                switch ($tmp251) {
                                    case -1: goto $l357;
                                }
                                $l357:;
                            }
                            }
                            else {
                            {
                                PANDA_ASSERT(((panda$core$Bit) { false }).value);
                            }
                            }
                        }
                        $tmp239 = -1;
                        goto $l237;
                        $l237:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp241));
                        switch ($tmp239) {
                            case -1: goto $l358;
                        }
                        $l358:;
                    }
                    $tmp229 = -1;
                    goto $l227;
                    $l227:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c230));
                    c230 = NULL;
                    switch ($tmp229) {
                        case -1: goto $l359;
                    }
                    $l359:;
                }
                goto $l219;
                $l220:;
            }
            $tmp211 = -1;
            goto $l209;
            $l209:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$76$9212));
            Iter$76$9212 = NULL;
            switch ($tmp211) {
                case -1: goto $l360;
            }
            $l360:;
        }
        org$pandalanguage$pandac$Annotations* $tmp364 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q($tmp364, flags206, ((panda$collections$ListView*) expressions207));
        $tmp363 = $tmp364;
        $tmp362 = $tmp363;
        $returnValue361 = $tmp362;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp362));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp363));
        $tmp205 = 0;
        goto $l203;
        $l365:;
        return $returnValue361;
    }
    $l203:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions207));
    switch ($tmp205) {
        case 0: goto $l365;
    }
    $l367:;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment371 = NULL;
    panda$core$String* $tmp372;
    panda$core$String* $tmp373;
    org$pandalanguage$pandac$ASTNode* $match$139_13377 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp378;
    org$pandalanguage$pandac$Position position380;
    panda$core$String* text382 = NULL;
    panda$core$String* $tmp384;
    panda$core$String* $tmp385;
    org$pandalanguage$pandac$Annotations* annotations387 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp388;
    org$pandalanguage$pandac$Annotations* $tmp389;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind391;
    org$pandalanguage$pandac$ASTNode* $match$148_9395 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp396;
    org$pandalanguage$pandac$Variable$Kind kind398;
    panda$collections$ImmutableArray* decls400 = NULL;
    org$pandalanguage$pandac$Variable$Kind $match$150_17402;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp404;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp406;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp408;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp411;
    panda$collections$Iterator* Iter$161$17415 = NULL;
    panda$collections$Iterator* $tmp416;
    panda$collections$Iterator* $tmp417;
    org$pandalanguage$pandac$ASTNode* decl433 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp434;
    panda$core$Object* $tmp435;
    org$pandalanguage$pandac$ASTNode* $match$162_21443 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp444;
    org$pandalanguage$pandac$Position declPosition446;
    org$pandalanguage$pandac$ASTNode* target448 = NULL;
    org$pandalanguage$pandac$ASTNode* value450 = NULL;
    panda$core$String* name455 = NULL;
    org$pandalanguage$pandac$Type* type456 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$166_29460 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp461;
    panda$core$String* id463 = NULL;
    panda$core$String* $tmp465;
    panda$core$String* $tmp466;
    org$pandalanguage$pandac$Type* $tmp467;
    org$pandalanguage$pandac$Type* $tmp468;
    org$pandalanguage$pandac$Type* $tmp469;
    panda$core$String* id472 = NULL;
    org$pandalanguage$pandac$ASTNode* idType474 = NULL;
    panda$core$String* $tmp476;
    panda$core$String* $tmp477;
    org$pandalanguage$pandac$Type* $tmp478;
    org$pandalanguage$pandac$Type* $tmp479;
    org$pandalanguage$pandac$Type* $tmp480;
    org$pandalanguage$pandac$FieldDecl* field483 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp484;
    org$pandalanguage$pandac$FieldDecl* $tmp485;
    int $tmp370;
    {
        memset(&doccomment371, 0, sizeof(doccomment371));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp372 = doccomment371;
                $tmp373 = NULL;
                doccomment371 = $tmp373;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp373));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp372));
            }
        }
        }
        else {
        {
            int $tmp376;
            {
                $tmp378 = p_rawDoccomment;
                $match$139_13377 = $tmp378;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp378));
                panda$core$Bit $tmp379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$139_13377->$rawValue, ((panda$core$Int64) { 38 }));
                if ($tmp379.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp381 = ((org$pandalanguage$pandac$Position*) ((char*) $match$139_13377->$data + 0));
                    position380 = *$tmp381;
                    panda$core$String** $tmp383 = ((panda$core$String**) ((char*) $match$139_13377->$data + 16));
                    text382 = *$tmp383;
                    {
                        $tmp384 = doccomment371;
                        $tmp385 = text382;
                        doccomment371 = $tmp385;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp385));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp384));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp376 = -1;
            goto $l374;
            $l374:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp378));
            switch ($tmp376) {
                case -1: goto $l386;
            }
            $l386:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp390 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp389 = $tmp390;
        $tmp388 = $tmp389;
        annotations387 = $tmp388;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp388));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp389));
        memset(&fieldKind391, 0, sizeof(fieldKind391));
        int $tmp394;
        {
            $tmp396 = p_varDecl;
            $match$148_9395 = $tmp396;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp396));
            panda$core$Bit $tmp397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$148_9395->$rawValue, ((panda$core$Int64) { 47 }));
            if ($tmp397.value) {
            {
                org$pandalanguage$pandac$Variable$Kind* $tmp399 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$148_9395->$data + 16));
                kind398 = *$tmp399;
                panda$collections$ImmutableArray** $tmp401 = ((panda$collections$ImmutableArray**) ((char*) $match$148_9395->$data + 24));
                decls400 = *$tmp401;
                {
                    $match$150_17402 = kind398;
                    panda$core$Bit $tmp403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_17402.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp403.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp404, ((panda$core$Int64) { 0 }));
                        fieldKind391 = $tmp404;
                    }
                    }
                    else {
                    panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_17402.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp405.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp406, ((panda$core$Int64) { 1 }));
                        fieldKind391 = $tmp406;
                    }
                    }
                    else {
                    panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_17402.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp407.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp408, ((panda$core$Int64) { 2 }));
                        fieldKind391 = $tmp408;
                        panda$core$Int64 $tmp409 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations387->flags, ((panda$core$Int64) { 16 }));
                        annotations387->flags = $tmp409;
                    }
                    }
                    else {
                    panda$core$Bit $tmp410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_17402.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp410.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp411, ((panda$core$Int64) { 3 }));
                        fieldKind391 = $tmp411;
                    }
                    }
                    }
                    }
                    }
                }
                {
                    int $tmp414;
                    {
                        ITable* $tmp418 = ((panda$collections$Iterable*) decls400)->$class->itable;
                        while ($tmp418->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp418 = $tmp418->next;
                        }
                        $fn420 $tmp419 = $tmp418->methods[0];
                        panda$collections$Iterator* $tmp421 = $tmp419(((panda$collections$Iterable*) decls400));
                        $tmp417 = $tmp421;
                        $tmp416 = $tmp417;
                        Iter$161$17415 = $tmp416;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp416));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
                        $l422:;
                        ITable* $tmp425 = Iter$161$17415->$class->itable;
                        while ($tmp425->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp425 = $tmp425->next;
                        }
                        $fn427 $tmp426 = $tmp425->methods[0];
                        panda$core$Bit $tmp428 = $tmp426(Iter$161$17415);
                        panda$core$Bit $tmp429 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp428);
                        bool $tmp424 = $tmp429.value;
                        if (!$tmp424) goto $l423;
                        {
                            int $tmp432;
                            {
                                ITable* $tmp436 = Iter$161$17415->$class->itable;
                                while ($tmp436->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp436 = $tmp436->next;
                                }
                                $fn438 $tmp437 = $tmp436->methods[1];
                                panda$core$Object* $tmp439 = $tmp437(Iter$161$17415);
                                $tmp435 = $tmp439;
                                $tmp434 = ((org$pandalanguage$pandac$ASTNode*) $tmp435);
                                decl433 = $tmp434;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp434));
                                panda$core$Panda$unref$panda$core$Object($tmp435);
                                int $tmp442;
                                {
                                    $tmp444 = decl433;
                                    $match$162_21443 = $tmp444;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp444));
                                    panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$162_21443->$rawValue, ((panda$core$Int64) { 13 }));
                                    if ($tmp445.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp447 = ((org$pandalanguage$pandac$Position*) ((char*) $match$162_21443->$data + 0));
                                        declPosition446 = *$tmp447;
                                        org$pandalanguage$pandac$ASTNode** $tmp449 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$162_21443->$data + 16));
                                        target448 = *$tmp449;
                                        org$pandalanguage$pandac$ASTNode** $tmp451 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$162_21443->$data + 24));
                                        value450 = *$tmp451;
                                        int $tmp454;
                                        {
                                            memset(&name455, 0, sizeof(name455));
                                            memset(&type456, 0, sizeof(type456));
                                            int $tmp459;
                                            {
                                                $tmp461 = target448;
                                                $match$166_29460 = $tmp461;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp461));
                                                panda$core$Bit $tmp462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$166_29460->$rawValue, ((panda$core$Int64) { 20 }));
                                                if ($tmp462.value) {
                                                {
                                                    panda$core$String** $tmp464 = ((panda$core$String**) ((char*) $match$166_29460->$data + 16));
                                                    id463 = *$tmp464;
                                                    {
                                                        $tmp465 = name455;
                                                        $tmp466 = id463;
                                                        name455 = $tmp466;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp466));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp465));
                                                    }
                                                    {
                                                        $tmp467 = type456;
                                                        org$pandalanguage$pandac$Type* $tmp470 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                        $tmp469 = $tmp470;
                                                        $tmp468 = $tmp469;
                                                        type456 = $tmp468;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp468));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp467));
                                                    }
                                                }
                                                }
                                                else {
                                                panda$core$Bit $tmp471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$166_29460->$rawValue, ((panda$core$Int64) { 44 }));
                                                if ($tmp471.value) {
                                                {
                                                    panda$core$String** $tmp473 = ((panda$core$String**) ((char*) $match$166_29460->$data + 16));
                                                    id472 = *$tmp473;
                                                    org$pandalanguage$pandac$ASTNode** $tmp475 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$166_29460->$data + 24));
                                                    idType474 = *$tmp475;
                                                    {
                                                        $tmp476 = name455;
                                                        $tmp477 = id472;
                                                        name455 = $tmp477;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp477));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp476));
                                                    }
                                                    {
                                                        $tmp478 = type456;
                                                        org$pandalanguage$pandac$Type* $tmp481 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType474);
                                                        $tmp480 = $tmp481;
                                                        $tmp479 = $tmp480;
                                                        type456 = $tmp479;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp479));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp478));
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
                                            $tmp459 = -1;
                                            goto $l457;
                                            $l457:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp461));
                                            switch ($tmp459) {
                                                case -1: goto $l482;
                                            }
                                            $l482:;
                                            org$pandalanguage$pandac$FieldDecl* $tmp486 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp486, p_owner, declPosition446, doccomment371, annotations387, fieldKind391, name455, type456, value450);
                                            $tmp485 = $tmp486;
                                            $tmp484 = $tmp485;
                                            field483 = $tmp484;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp484));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp485));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field483));
                                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field483));
                                        }
                                        $tmp454 = -1;
                                        goto $l452;
                                        $l452:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name455));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type456));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field483));
                                        field483 = NULL;
                                        switch ($tmp454) {
                                            case -1: goto $l487;
                                        }
                                        $l487:;
                                    }
                                    }
                                    else {
                                    {
                                        PANDA_ASSERT(((panda$core$Bit) { false }).value);
                                    }
                                    }
                                }
                                $tmp442 = -1;
                                goto $l440;
                                $l440:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
                                switch ($tmp442) {
                                    case -1: goto $l488;
                                }
                                $l488:;
                            }
                            $tmp432 = -1;
                            goto $l430;
                            $l430:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl433));
                            decl433 = NULL;
                            switch ($tmp432) {
                                case -1: goto $l489;
                            }
                            $l489:;
                        }
                        goto $l422;
                        $l423:;
                    }
                    $tmp414 = -1;
                    goto $l412;
                    $l412:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$161$17415));
                    Iter$161$17415 = NULL;
                    switch ($tmp414) {
                        case -1: goto $l490;
                    }
                    $l490:;
                }
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
        $tmp394 = -1;
        goto $l392;
        $l392:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
        switch ($tmp394) {
            case -1: goto $l491;
        }
        $l491:;
    }
    $tmp370 = -1;
    goto $l368;
    $l368:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment371));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations387));
    annotations387 = NULL;
    switch ($tmp370) {
        case -1: goto $l492;
    }
    $l492:;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$191_9496 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp497;
    org$pandalanguage$pandac$ASTNode* test499 = NULL;
    panda$core$Int64 $returnValue501;
    org$pandalanguage$pandac$ASTNode* left506 = NULL;
    org$pandalanguage$pandac$ASTNode* right508 = NULL;
    panda$collections$ImmutableArray* statements520 = NULL;
    panda$core$Int64 result522;
    panda$collections$Iterator* Iter$200$17526 = NULL;
    panda$collections$Iterator* $tmp527;
    panda$collections$Iterator* $tmp528;
    org$pandalanguage$pandac$ASTNode* s544 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp545;
    panda$core$Object* $tmp546;
    org$pandalanguage$pandac$ASTNode* target561 = NULL;
    panda$collections$ImmutableArray* args563 = NULL;
    panda$core$Int64 result565;
    panda$collections$Iterator* Iter$208$17570 = NULL;
    panda$collections$Iterator* $tmp571;
    panda$collections$Iterator* $tmp572;
    org$pandalanguage$pandac$ASTNode* a588 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp589;
    panda$core$Object* $tmp590;
    org$pandalanguage$pandac$ASTNode* base602 = NULL;
    org$pandalanguage$pandac$ASTNode* value611 = NULL;
    panda$collections$ImmutableArray* statements619 = NULL;
    org$pandalanguage$pandac$ASTNode* test621 = NULL;
    panda$core$Int64 result623;
    panda$collections$Iterator* Iter$223$17628 = NULL;
    panda$collections$Iterator* $tmp629;
    panda$collections$Iterator* $tmp630;
    org$pandalanguage$pandac$ASTNode* s646 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp647;
    panda$core$Object* $tmp648;
    org$pandalanguage$pandac$ASTNode* base660 = NULL;
    org$pandalanguage$pandac$ASTNode* list666 = NULL;
    panda$collections$ImmutableArray* statements668 = NULL;
    panda$core$Int64 result670;
    panda$collections$Iterator* Iter$231$17675 = NULL;
    panda$collections$Iterator* $tmp676;
    panda$collections$Iterator* $tmp677;
    org$pandalanguage$pandac$ASTNode* s693 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp694;
    panda$core$Object* $tmp695;
    org$pandalanguage$pandac$ASTNode* test713 = NULL;
    panda$collections$ImmutableArray* ifTrue715 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse717 = NULL;
    panda$core$Int64 result719;
    panda$collections$Iterator* Iter$241$17724 = NULL;
    panda$collections$Iterator* $tmp725;
    panda$collections$Iterator* $tmp726;
    org$pandalanguage$pandac$ASTNode* s742 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp743;
    panda$core$Object* $tmp744;
    panda$collections$ImmutableArray* statements761 = NULL;
    panda$core$Int64 result763;
    panda$collections$Iterator* Iter$252$17767 = NULL;
    panda$collections$Iterator* $tmp768;
    panda$collections$Iterator* $tmp769;
    org$pandalanguage$pandac$ASTNode* s785 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp786;
    panda$core$Object* $tmp787;
    org$pandalanguage$pandac$ASTNode* value799 = NULL;
    panda$collections$ImmutableArray* whens801 = NULL;
    panda$collections$ImmutableArray* other803 = NULL;
    panda$core$Int64 result805;
    panda$collections$Iterator* Iter$258$17810 = NULL;
    panda$collections$Iterator* $tmp811;
    panda$collections$Iterator* $tmp812;
    org$pandalanguage$pandac$ASTNode* w828 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp829;
    panda$core$Object* $tmp830;
    panda$collections$Iterator* Iter$262$21842 = NULL;
    panda$collections$Iterator* $tmp843;
    panda$collections$Iterator* $tmp844;
    org$pandalanguage$pandac$ASTNode* s860 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp861;
    panda$core$Object* $tmp862;
    org$pandalanguage$pandac$ASTNode* base880 = NULL;
    org$pandalanguage$pandac$ASTNode* value893 = NULL;
    panda$collections$ImmutableArray* decls913 = NULL;
    panda$core$Int64 result915;
    panda$collections$Iterator* Iter$292$17919 = NULL;
    panda$collections$Iterator* $tmp920;
    panda$collections$Iterator* $tmp921;
    org$pandalanguage$pandac$ASTNode* decl937 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp938;
    panda$core$Object* $tmp939;
    panda$collections$ImmutableArray* tests951 = NULL;
    panda$collections$ImmutableArray* statements953 = NULL;
    panda$core$Int64 result955;
    panda$collections$Iterator* Iter$298$17959 = NULL;
    panda$collections$Iterator* $tmp960;
    panda$collections$Iterator* $tmp961;
    org$pandalanguage$pandac$ASTNode* test977 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp978;
    panda$core$Object* $tmp979;
    panda$collections$Iterator* Iter$301$17991 = NULL;
    panda$collections$Iterator* $tmp992;
    panda$collections$Iterator* $tmp993;
    org$pandalanguage$pandac$ASTNode* s1009 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1010;
    panda$core$Object* $tmp1011;
    org$pandalanguage$pandac$ASTNode* test1023 = NULL;
    panda$collections$ImmutableArray* statements1025 = NULL;
    panda$core$Int64 result1027;
    panda$collections$Iterator* Iter$307$171032 = NULL;
    panda$collections$Iterator* $tmp1033;
    panda$collections$Iterator* $tmp1034;
    org$pandalanguage$pandac$ASTNode* s1050 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1051;
    panda$core$Object* $tmp1052;
    int $tmp495;
    {
        $tmp497 = p_node;
        $match$191_9496 = $tmp497;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp497));
        panda$core$Bit $tmp498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp498.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp500 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$191_9496->$data + 16));
            test499 = *$tmp500;
            panda$core$Int64 $tmp502 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test499);
            $returnValue501 = $tmp502;
            $tmp495 = 0;
            goto $l493;
            $l503:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp505.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp507 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$191_9496->$data + 16));
            left506 = *$tmp507;
            org$pandalanguage$pandac$ASTNode** $tmp509 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$191_9496->$data + 32));
            right508 = *$tmp509;
            panda$core$Int64 $tmp510 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left506);
            panda$core$Int64 $tmp511 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp510);
            panda$core$Int64 $tmp512 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right508);
            panda$core$Int64 $tmp513 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp511, $tmp512);
            $returnValue501 = $tmp513;
            $tmp495 = 1;
            goto $l493;
            $l514:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp516.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 1 });
            $tmp495 = 2;
            goto $l493;
            $l517:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp519.value) {
        {
            panda$collections$ImmutableArray** $tmp521 = ((panda$collections$ImmutableArray**) ((char*) $match$191_9496->$data + 16));
            statements520 = *$tmp521;
            result522 = ((panda$core$Int64) { 0 });
            {
                int $tmp525;
                {
                    ITable* $tmp529 = ((panda$collections$Iterable*) statements520)->$class->itable;
                    while ($tmp529->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp529 = $tmp529->next;
                    }
                    $fn531 $tmp530 = $tmp529->methods[0];
                    panda$collections$Iterator* $tmp532 = $tmp530(((panda$collections$Iterable*) statements520));
                    $tmp528 = $tmp532;
                    $tmp527 = $tmp528;
                    Iter$200$17526 = $tmp527;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp527));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp528));
                    $l533:;
                    ITable* $tmp536 = Iter$200$17526->$class->itable;
                    while ($tmp536->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp536 = $tmp536->next;
                    }
                    $fn538 $tmp537 = $tmp536->methods[0];
                    panda$core$Bit $tmp539 = $tmp537(Iter$200$17526);
                    panda$core$Bit $tmp540 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp539);
                    bool $tmp535 = $tmp540.value;
                    if (!$tmp535) goto $l534;
                    {
                        int $tmp543;
                        {
                            ITable* $tmp547 = Iter$200$17526->$class->itable;
                            while ($tmp547->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp547 = $tmp547->next;
                            }
                            $fn549 $tmp548 = $tmp547->methods[1];
                            panda$core$Object* $tmp550 = $tmp548(Iter$200$17526);
                            $tmp546 = $tmp550;
                            $tmp545 = ((org$pandalanguage$pandac$ASTNode*) $tmp546);
                            s544 = $tmp545;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp545));
                            panda$core$Panda$unref$panda$core$Object($tmp546);
                            panda$core$Int64 $tmp551 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s544);
                            panda$core$Int64 $tmp552 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result522, $tmp551);
                            result522 = $tmp552;
                        }
                        $tmp543 = -1;
                        goto $l541;
                        $l541:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s544));
                        s544 = NULL;
                        switch ($tmp543) {
                            case -1: goto $l553;
                        }
                        $l553:;
                    }
                    goto $l533;
                    $l534:;
                }
                $tmp525 = -1;
                goto $l523;
                $l523:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$200$17526));
                Iter$200$17526 = NULL;
                switch ($tmp525) {
                    case -1: goto $l554;
                }
                $l554:;
            }
            $returnValue501 = result522;
            $tmp495 = 3;
            goto $l493;
            $l555:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp557.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 1 });
            $tmp495 = 4;
            goto $l493;
            $l558:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp560.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp562 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$191_9496->$data + 16));
            target561 = *$tmp562;
            panda$collections$ImmutableArray** $tmp564 = ((panda$collections$ImmutableArray**) ((char*) $match$191_9496->$data + 24));
            args563 = *$tmp564;
            panda$core$Int64 $tmp566 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target561);
            result565 = $tmp566;
            {
                int $tmp569;
                {
                    ITable* $tmp573 = ((panda$collections$Iterable*) args563)->$class->itable;
                    while ($tmp573->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp573 = $tmp573->next;
                    }
                    $fn575 $tmp574 = $tmp573->methods[0];
                    panda$collections$Iterator* $tmp576 = $tmp574(((panda$collections$Iterable*) args563));
                    $tmp572 = $tmp576;
                    $tmp571 = $tmp572;
                    Iter$208$17570 = $tmp571;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp571));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp572));
                    $l577:;
                    ITable* $tmp580 = Iter$208$17570->$class->itable;
                    while ($tmp580->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp580 = $tmp580->next;
                    }
                    $fn582 $tmp581 = $tmp580->methods[0];
                    panda$core$Bit $tmp583 = $tmp581(Iter$208$17570);
                    panda$core$Bit $tmp584 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp583);
                    bool $tmp579 = $tmp584.value;
                    if (!$tmp579) goto $l578;
                    {
                        int $tmp587;
                        {
                            ITable* $tmp591 = Iter$208$17570->$class->itable;
                            while ($tmp591->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp591 = $tmp591->next;
                            }
                            $fn593 $tmp592 = $tmp591->methods[1];
                            panda$core$Object* $tmp594 = $tmp592(Iter$208$17570);
                            $tmp590 = $tmp594;
                            $tmp589 = ((org$pandalanguage$pandac$ASTNode*) $tmp590);
                            a588 = $tmp589;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp589));
                            panda$core$Panda$unref$panda$core$Object($tmp590);
                            panda$core$Int64 $tmp595 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a588);
                            panda$core$Int64 $tmp596 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result565, $tmp595);
                            result565 = $tmp596;
                        }
                        $tmp587 = -1;
                        goto $l585;
                        $l585:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a588));
                        a588 = NULL;
                        switch ($tmp587) {
                            case -1: goto $l597;
                        }
                        $l597:;
                    }
                    goto $l577;
                    $l578:;
                }
                $tmp569 = -1;
                goto $l567;
                $l567:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$208$17570));
                Iter$208$17570 = NULL;
                switch ($tmp569) {
                    case -1: goto $l598;
                }
                $l598:;
            }
            $returnValue501 = result565;
            $tmp495 = 5;
            goto $l493;
            $l599:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp601.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp603 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$191_9496->$data + 16));
            base602 = *$tmp603;
            panda$core$Int64 $tmp604 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base602);
            $returnValue501 = $tmp604;
            $tmp495 = 6;
            goto $l493;
            $l605:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp607.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 1 });
            $tmp495 = 7;
            goto $l493;
            $l608:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp610.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp612 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$191_9496->$data + 24));
            value611 = *$tmp612;
            if (((panda$core$Bit) { value611 == NULL }).value) {
            {
                $returnValue501 = ((panda$core$Int64) { 0 });
                $tmp495 = 8;
                goto $l493;
                $l613:;
                return $returnValue501;
            }
            }
            panda$core$Int64 $tmp615 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value611);
            $returnValue501 = $tmp615;
            $tmp495 = 9;
            goto $l493;
            $l616:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp618.value) {
        {
            panda$collections$ImmutableArray** $tmp620 = ((panda$collections$ImmutableArray**) ((char*) $match$191_9496->$data + 24));
            statements619 = *$tmp620;
            org$pandalanguage$pandac$ASTNode** $tmp622 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$191_9496->$data + 32));
            test621 = *$tmp622;
            panda$core$Int64 $tmp624 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test621);
            result623 = $tmp624;
            {
                int $tmp627;
                {
                    ITable* $tmp631 = ((panda$collections$Iterable*) statements619)->$class->itable;
                    while ($tmp631->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp631 = $tmp631->next;
                    }
                    $fn633 $tmp632 = $tmp631->methods[0];
                    panda$collections$Iterator* $tmp634 = $tmp632(((panda$collections$Iterable*) statements619));
                    $tmp630 = $tmp634;
                    $tmp629 = $tmp630;
                    Iter$223$17628 = $tmp629;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp629));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
                    $l635:;
                    ITable* $tmp638 = Iter$223$17628->$class->itable;
                    while ($tmp638->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp638 = $tmp638->next;
                    }
                    $fn640 $tmp639 = $tmp638->methods[0];
                    panda$core$Bit $tmp641 = $tmp639(Iter$223$17628);
                    panda$core$Bit $tmp642 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp641);
                    bool $tmp637 = $tmp642.value;
                    if (!$tmp637) goto $l636;
                    {
                        int $tmp645;
                        {
                            ITable* $tmp649 = Iter$223$17628->$class->itable;
                            while ($tmp649->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp649 = $tmp649->next;
                            }
                            $fn651 $tmp650 = $tmp649->methods[1];
                            panda$core$Object* $tmp652 = $tmp650(Iter$223$17628);
                            $tmp648 = $tmp652;
                            $tmp647 = ((org$pandalanguage$pandac$ASTNode*) $tmp648);
                            s646 = $tmp647;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp647));
                            panda$core$Panda$unref$panda$core$Object($tmp648);
                            panda$core$Int64 $tmp653 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s646);
                            panda$core$Int64 $tmp654 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result623, $tmp653);
                            result623 = $tmp654;
                        }
                        $tmp645 = -1;
                        goto $l643;
                        $l643:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s646));
                        s646 = NULL;
                        switch ($tmp645) {
                            case -1: goto $l655;
                        }
                        $l655:;
                    }
                    goto $l635;
                    $l636:;
                }
                $tmp627 = -1;
                goto $l625;
                $l625:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$223$17628));
                Iter$223$17628 = NULL;
                switch ($tmp627) {
                    case -1: goto $l656;
                }
                $l656:;
            }
            $returnValue501 = result623;
            $tmp495 = 10;
            goto $l493;
            $l657:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp659.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp661 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$191_9496->$data + 16));
            base660 = *$tmp661;
            panda$core$Int64 $tmp662 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base660);
            $returnValue501 = $tmp662;
            $tmp495 = 11;
            goto $l493;
            $l663:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp665.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp667 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$191_9496->$data + 32));
            list666 = *$tmp667;
            panda$collections$ImmutableArray** $tmp669 = ((panda$collections$ImmutableArray**) ((char*) $match$191_9496->$data + 40));
            statements668 = *$tmp669;
            panda$core$Int64 $tmp671 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list666);
            result670 = $tmp671;
            {
                int $tmp674;
                {
                    ITable* $tmp678 = ((panda$collections$Iterable*) statements668)->$class->itable;
                    while ($tmp678->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp678 = $tmp678->next;
                    }
                    $fn680 $tmp679 = $tmp678->methods[0];
                    panda$collections$Iterator* $tmp681 = $tmp679(((panda$collections$Iterable*) statements668));
                    $tmp677 = $tmp681;
                    $tmp676 = $tmp677;
                    Iter$231$17675 = $tmp676;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp676));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp677));
                    $l682:;
                    ITable* $tmp685 = Iter$231$17675->$class->itable;
                    while ($tmp685->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp685 = $tmp685->next;
                    }
                    $fn687 $tmp686 = $tmp685->methods[0];
                    panda$core$Bit $tmp688 = $tmp686(Iter$231$17675);
                    panda$core$Bit $tmp689 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp688);
                    bool $tmp684 = $tmp689.value;
                    if (!$tmp684) goto $l683;
                    {
                        int $tmp692;
                        {
                            ITable* $tmp696 = Iter$231$17675->$class->itable;
                            while ($tmp696->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp696 = $tmp696->next;
                            }
                            $fn698 $tmp697 = $tmp696->methods[1];
                            panda$core$Object* $tmp699 = $tmp697(Iter$231$17675);
                            $tmp695 = $tmp699;
                            $tmp694 = ((org$pandalanguage$pandac$ASTNode*) $tmp695);
                            s693 = $tmp694;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp694));
                            panda$core$Panda$unref$panda$core$Object($tmp695);
                            panda$core$Int64 $tmp700 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s693);
                            panda$core$Int64 $tmp701 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result670, $tmp700);
                            result670 = $tmp701;
                        }
                        $tmp692 = -1;
                        goto $l690;
                        $l690:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s693));
                        s693 = NULL;
                        switch ($tmp692) {
                            case -1: goto $l702;
                        }
                        $l702:;
                    }
                    goto $l682;
                    $l683:;
                }
                $tmp674 = -1;
                goto $l672;
                $l672:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$231$17675));
                Iter$231$17675 = NULL;
                switch ($tmp674) {
                    case -1: goto $l703;
                }
                $l703:;
            }
            $returnValue501 = result670;
            $tmp495 = 12;
            goto $l493;
            $l704:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp706.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 0 });
            $tmp495 = 13;
            goto $l493;
            $l707:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp709.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 1 });
            $tmp495 = 14;
            goto $l493;
            $l710:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp712.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp714 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$191_9496->$data + 16));
            test713 = *$tmp714;
            panda$collections$ImmutableArray** $tmp716 = ((panda$collections$ImmutableArray**) ((char*) $match$191_9496->$data + 24));
            ifTrue715 = *$tmp716;
            org$pandalanguage$pandac$ASTNode** $tmp718 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$191_9496->$data + 32));
            ifFalse717 = *$tmp718;
            panda$core$Int64 $tmp720 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test713);
            result719 = $tmp720;
            {
                int $tmp723;
                {
                    ITable* $tmp727 = ((panda$collections$Iterable*) ifTrue715)->$class->itable;
                    while ($tmp727->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp727 = $tmp727->next;
                    }
                    $fn729 $tmp728 = $tmp727->methods[0];
                    panda$collections$Iterator* $tmp730 = $tmp728(((panda$collections$Iterable*) ifTrue715));
                    $tmp726 = $tmp730;
                    $tmp725 = $tmp726;
                    Iter$241$17724 = $tmp725;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp725));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp726));
                    $l731:;
                    ITable* $tmp734 = Iter$241$17724->$class->itable;
                    while ($tmp734->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp734 = $tmp734->next;
                    }
                    $fn736 $tmp735 = $tmp734->methods[0];
                    panda$core$Bit $tmp737 = $tmp735(Iter$241$17724);
                    panda$core$Bit $tmp738 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp737);
                    bool $tmp733 = $tmp738.value;
                    if (!$tmp733) goto $l732;
                    {
                        int $tmp741;
                        {
                            ITable* $tmp745 = Iter$241$17724->$class->itable;
                            while ($tmp745->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp745 = $tmp745->next;
                            }
                            $fn747 $tmp746 = $tmp745->methods[1];
                            panda$core$Object* $tmp748 = $tmp746(Iter$241$17724);
                            $tmp744 = $tmp748;
                            $tmp743 = ((org$pandalanguage$pandac$ASTNode*) $tmp744);
                            s742 = $tmp743;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp743));
                            panda$core$Panda$unref$panda$core$Object($tmp744);
                            panda$core$Int64 $tmp749 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s742);
                            panda$core$Int64 $tmp750 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result719, $tmp749);
                            result719 = $tmp750;
                        }
                        $tmp741 = -1;
                        goto $l739;
                        $l739:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s742));
                        s742 = NULL;
                        switch ($tmp741) {
                            case -1: goto $l751;
                        }
                        $l751:;
                    }
                    goto $l731;
                    $l732:;
                }
                $tmp723 = -1;
                goto $l721;
                $l721:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$241$17724));
                Iter$241$17724 = NULL;
                switch ($tmp723) {
                    case -1: goto $l752;
                }
                $l752:;
            }
            if (((panda$core$Bit) { ifFalse717 != NULL }).value) {
            {
                panda$core$Int64 $tmp753 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse717);
                panda$core$Int64 $tmp754 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result719, $tmp753);
                result719 = $tmp754;
            }
            }
            $returnValue501 = result719;
            $tmp495 = 15;
            goto $l493;
            $l755:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp757.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 1 });
            $tmp495 = 16;
            goto $l493;
            $l758:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp760.value) {
        {
            panda$collections$ImmutableArray** $tmp762 = ((panda$collections$ImmutableArray**) ((char*) $match$191_9496->$data + 24));
            statements761 = *$tmp762;
            result763 = ((panda$core$Int64) { 0 });
            {
                int $tmp766;
                {
                    ITable* $tmp770 = ((panda$collections$Iterable*) statements761)->$class->itable;
                    while ($tmp770->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp770 = $tmp770->next;
                    }
                    $fn772 $tmp771 = $tmp770->methods[0];
                    panda$collections$Iterator* $tmp773 = $tmp771(((panda$collections$Iterable*) statements761));
                    $tmp769 = $tmp773;
                    $tmp768 = $tmp769;
                    Iter$252$17767 = $tmp768;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp768));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp769));
                    $l774:;
                    ITable* $tmp777 = Iter$252$17767->$class->itable;
                    while ($tmp777->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp777 = $tmp777->next;
                    }
                    $fn779 $tmp778 = $tmp777->methods[0];
                    panda$core$Bit $tmp780 = $tmp778(Iter$252$17767);
                    panda$core$Bit $tmp781 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp780);
                    bool $tmp776 = $tmp781.value;
                    if (!$tmp776) goto $l775;
                    {
                        int $tmp784;
                        {
                            ITable* $tmp788 = Iter$252$17767->$class->itable;
                            while ($tmp788->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp788 = $tmp788->next;
                            }
                            $fn790 $tmp789 = $tmp788->methods[1];
                            panda$core$Object* $tmp791 = $tmp789(Iter$252$17767);
                            $tmp787 = $tmp791;
                            $tmp786 = ((org$pandalanguage$pandac$ASTNode*) $tmp787);
                            s785 = $tmp786;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp786));
                            panda$core$Panda$unref$panda$core$Object($tmp787);
                            panda$core$Int64 $tmp792 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s785);
                            panda$core$Int64 $tmp793 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result763, $tmp792);
                            result763 = $tmp793;
                        }
                        $tmp784 = -1;
                        goto $l782;
                        $l782:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s785));
                        s785 = NULL;
                        switch ($tmp784) {
                            case -1: goto $l794;
                        }
                        $l794:;
                    }
                    goto $l774;
                    $l775:;
                }
                $tmp766 = -1;
                goto $l764;
                $l764:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$252$17767));
                Iter$252$17767 = NULL;
                switch ($tmp766) {
                    case -1: goto $l795;
                }
                $l795:;
            }
            $returnValue501 = result763;
            $tmp495 = 17;
            goto $l493;
            $l796:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp798.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp800 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$191_9496->$data + 16));
            value799 = *$tmp800;
            panda$collections$ImmutableArray** $tmp802 = ((panda$collections$ImmutableArray**) ((char*) $match$191_9496->$data + 24));
            whens801 = *$tmp802;
            panda$collections$ImmutableArray** $tmp804 = ((panda$collections$ImmutableArray**) ((char*) $match$191_9496->$data + 32));
            other803 = *$tmp804;
            panda$core$Int64 $tmp806 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value799);
            result805 = $tmp806;
            {
                int $tmp809;
                {
                    ITable* $tmp813 = ((panda$collections$Iterable*) whens801)->$class->itable;
                    while ($tmp813->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp813 = $tmp813->next;
                    }
                    $fn815 $tmp814 = $tmp813->methods[0];
                    panda$collections$Iterator* $tmp816 = $tmp814(((panda$collections$Iterable*) whens801));
                    $tmp812 = $tmp816;
                    $tmp811 = $tmp812;
                    Iter$258$17810 = $tmp811;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp811));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp812));
                    $l817:;
                    ITable* $tmp820 = Iter$258$17810->$class->itable;
                    while ($tmp820->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp820 = $tmp820->next;
                    }
                    $fn822 $tmp821 = $tmp820->methods[0];
                    panda$core$Bit $tmp823 = $tmp821(Iter$258$17810);
                    panda$core$Bit $tmp824 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp823);
                    bool $tmp819 = $tmp824.value;
                    if (!$tmp819) goto $l818;
                    {
                        int $tmp827;
                        {
                            ITable* $tmp831 = Iter$258$17810->$class->itable;
                            while ($tmp831->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp831 = $tmp831->next;
                            }
                            $fn833 $tmp832 = $tmp831->methods[1];
                            panda$core$Object* $tmp834 = $tmp832(Iter$258$17810);
                            $tmp830 = $tmp834;
                            $tmp829 = ((org$pandalanguage$pandac$ASTNode*) $tmp830);
                            w828 = $tmp829;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp829));
                            panda$core$Panda$unref$panda$core$Object($tmp830);
                            panda$core$Int64 $tmp835 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w828);
                            panda$core$Int64 $tmp836 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result805, $tmp835);
                            result805 = $tmp836;
                        }
                        $tmp827 = -1;
                        goto $l825;
                        $l825:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w828));
                        w828 = NULL;
                        switch ($tmp827) {
                            case -1: goto $l837;
                        }
                        $l837:;
                    }
                    goto $l817;
                    $l818:;
                }
                $tmp809 = -1;
                goto $l807;
                $l807:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$258$17810));
                Iter$258$17810 = NULL;
                switch ($tmp809) {
                    case -1: goto $l838;
                }
                $l838:;
            }
            if (((panda$core$Bit) { other803 != NULL }).value) {
            {
                {
                    int $tmp841;
                    {
                        ITable* $tmp845 = ((panda$collections$Iterable*) other803)->$class->itable;
                        while ($tmp845->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp845 = $tmp845->next;
                        }
                        $fn847 $tmp846 = $tmp845->methods[0];
                        panda$collections$Iterator* $tmp848 = $tmp846(((panda$collections$Iterable*) other803));
                        $tmp844 = $tmp848;
                        $tmp843 = $tmp844;
                        Iter$262$21842 = $tmp843;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp843));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp844));
                        $l849:;
                        ITable* $tmp852 = Iter$262$21842->$class->itable;
                        while ($tmp852->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp852 = $tmp852->next;
                        }
                        $fn854 $tmp853 = $tmp852->methods[0];
                        panda$core$Bit $tmp855 = $tmp853(Iter$262$21842);
                        panda$core$Bit $tmp856 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp855);
                        bool $tmp851 = $tmp856.value;
                        if (!$tmp851) goto $l850;
                        {
                            int $tmp859;
                            {
                                ITable* $tmp863 = Iter$262$21842->$class->itable;
                                while ($tmp863->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp863 = $tmp863->next;
                                }
                                $fn865 $tmp864 = $tmp863->methods[1];
                                panda$core$Object* $tmp866 = $tmp864(Iter$262$21842);
                                $tmp862 = $tmp866;
                                $tmp861 = ((org$pandalanguage$pandac$ASTNode*) $tmp862);
                                s860 = $tmp861;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp861));
                                panda$core$Panda$unref$panda$core$Object($tmp862);
                                panda$core$Int64 $tmp867 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s860);
                                panda$core$Int64 $tmp868 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result805, $tmp867);
                                result805 = $tmp868;
                            }
                            $tmp859 = -1;
                            goto $l857;
                            $l857:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s860));
                            s860 = NULL;
                            switch ($tmp859) {
                                case -1: goto $l869;
                            }
                            $l869:;
                        }
                        goto $l849;
                        $l850:;
                    }
                    $tmp841 = -1;
                    goto $l839;
                    $l839:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$262$21842));
                    Iter$262$21842 = NULL;
                    switch ($tmp841) {
                        case -1: goto $l870;
                    }
                    $l870:;
                }
            }
            }
            $returnValue501 = result805;
            $tmp495 = 18;
            goto $l493;
            $l871:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp873.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 1 });
            $tmp495 = 19;
            goto $l493;
            $l874:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp876.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 0 });
            $tmp495 = 20;
            goto $l493;
            $l877:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp879.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp881 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$191_9496->$data + 24));
            base880 = *$tmp881;
            panda$core$Int64 $tmp882 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base880);
            panda$core$Int64 $tmp883 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp882);
            $returnValue501 = $tmp883;
            $tmp495 = 21;
            goto $l493;
            $l884:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp886.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 1 });
            $tmp495 = 22;
            goto $l493;
            $l887:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp889.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 1 });
            $tmp495 = 23;
            goto $l493;
            $l890:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp892.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp894 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$191_9496->$data + 16));
            value893 = *$tmp894;
            if (((panda$core$Bit) { value893 == NULL }).value) {
            {
                $returnValue501 = ((panda$core$Int64) { 0 });
                $tmp495 = 24;
                goto $l493;
                $l895:;
                return $returnValue501;
            }
            }
            panda$core$Int64 $tmp897 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value893);
            $returnValue501 = $tmp897;
            $tmp495 = 25;
            goto $l493;
            $l898:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp900.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 1 });
            $tmp495 = 26;
            goto $l493;
            $l901:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp903.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 1 });
            $tmp495 = 27;
            goto $l493;
            $l904:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp906.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 1 });
            $tmp495 = 28;
            goto $l493;
            $l907:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp909.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 0 });
            $tmp495 = 29;
            goto $l493;
            $l910:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp912.value) {
        {
            panda$collections$ImmutableArray** $tmp914 = ((panda$collections$ImmutableArray**) ((char*) $match$191_9496->$data + 24));
            decls913 = *$tmp914;
            result915 = ((panda$core$Int64) { 0 });
            {
                int $tmp918;
                {
                    ITable* $tmp922 = ((panda$collections$Iterable*) decls913)->$class->itable;
                    while ($tmp922->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp922 = $tmp922->next;
                    }
                    $fn924 $tmp923 = $tmp922->methods[0];
                    panda$collections$Iterator* $tmp925 = $tmp923(((panda$collections$Iterable*) decls913));
                    $tmp921 = $tmp925;
                    $tmp920 = $tmp921;
                    Iter$292$17919 = $tmp920;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp920));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp921));
                    $l926:;
                    ITable* $tmp929 = Iter$292$17919->$class->itable;
                    while ($tmp929->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp929 = $tmp929->next;
                    }
                    $fn931 $tmp930 = $tmp929->methods[0];
                    panda$core$Bit $tmp932 = $tmp930(Iter$292$17919);
                    panda$core$Bit $tmp933 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp932);
                    bool $tmp928 = $tmp933.value;
                    if (!$tmp928) goto $l927;
                    {
                        int $tmp936;
                        {
                            ITable* $tmp940 = Iter$292$17919->$class->itable;
                            while ($tmp940->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp940 = $tmp940->next;
                            }
                            $fn942 $tmp941 = $tmp940->methods[1];
                            panda$core$Object* $tmp943 = $tmp941(Iter$292$17919);
                            $tmp939 = $tmp943;
                            $tmp938 = ((org$pandalanguage$pandac$ASTNode*) $tmp939);
                            decl937 = $tmp938;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp938));
                            panda$core$Panda$unref$panda$core$Object($tmp939);
                            panda$core$Int64 $tmp944 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl937);
                            panda$core$Int64 $tmp945 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result915, $tmp944);
                            result915 = $tmp945;
                        }
                        $tmp936 = -1;
                        goto $l934;
                        $l934:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl937));
                        decl937 = NULL;
                        switch ($tmp936) {
                            case -1: goto $l946;
                        }
                        $l946:;
                    }
                    goto $l926;
                    $l927:;
                }
                $tmp918 = -1;
                goto $l916;
                $l916:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$292$17919));
                Iter$292$17919 = NULL;
                switch ($tmp918) {
                    case -1: goto $l947;
                }
                $l947:;
            }
            $returnValue501 = result915;
            $tmp495 = 30;
            goto $l493;
            $l948:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp950 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp950.value) {
        {
            panda$collections$ImmutableArray** $tmp952 = ((panda$collections$ImmutableArray**) ((char*) $match$191_9496->$data + 16));
            tests951 = *$tmp952;
            panda$collections$ImmutableArray** $tmp954 = ((panda$collections$ImmutableArray**) ((char*) $match$191_9496->$data + 24));
            statements953 = *$tmp954;
            result955 = ((panda$core$Int64) { 0 });
            {
                int $tmp958;
                {
                    ITable* $tmp962 = ((panda$collections$Iterable*) tests951)->$class->itable;
                    while ($tmp962->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp962 = $tmp962->next;
                    }
                    $fn964 $tmp963 = $tmp962->methods[0];
                    panda$collections$Iterator* $tmp965 = $tmp963(((panda$collections$Iterable*) tests951));
                    $tmp961 = $tmp965;
                    $tmp960 = $tmp961;
                    Iter$298$17959 = $tmp960;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp960));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp961));
                    $l966:;
                    ITable* $tmp969 = Iter$298$17959->$class->itable;
                    while ($tmp969->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp969 = $tmp969->next;
                    }
                    $fn971 $tmp970 = $tmp969->methods[0];
                    panda$core$Bit $tmp972 = $tmp970(Iter$298$17959);
                    panda$core$Bit $tmp973 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp972);
                    bool $tmp968 = $tmp973.value;
                    if (!$tmp968) goto $l967;
                    {
                        int $tmp976;
                        {
                            ITable* $tmp980 = Iter$298$17959->$class->itable;
                            while ($tmp980->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp980 = $tmp980->next;
                            }
                            $fn982 $tmp981 = $tmp980->methods[1];
                            panda$core$Object* $tmp983 = $tmp981(Iter$298$17959);
                            $tmp979 = $tmp983;
                            $tmp978 = ((org$pandalanguage$pandac$ASTNode*) $tmp979);
                            test977 = $tmp978;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp978));
                            panda$core$Panda$unref$panda$core$Object($tmp979);
                            panda$core$Int64 $tmp984 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test977);
                            panda$core$Int64 $tmp985 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result955, $tmp984);
                            result955 = $tmp985;
                        }
                        $tmp976 = -1;
                        goto $l974;
                        $l974:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test977));
                        test977 = NULL;
                        switch ($tmp976) {
                            case -1: goto $l986;
                        }
                        $l986:;
                    }
                    goto $l966;
                    $l967:;
                }
                $tmp958 = -1;
                goto $l956;
                $l956:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$298$17959));
                Iter$298$17959 = NULL;
                switch ($tmp958) {
                    case -1: goto $l987;
                }
                $l987:;
            }
            {
                int $tmp990;
                {
                    ITable* $tmp994 = ((panda$collections$Iterable*) statements953)->$class->itable;
                    while ($tmp994->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp994 = $tmp994->next;
                    }
                    $fn996 $tmp995 = $tmp994->methods[0];
                    panda$collections$Iterator* $tmp997 = $tmp995(((panda$collections$Iterable*) statements953));
                    $tmp993 = $tmp997;
                    $tmp992 = $tmp993;
                    Iter$301$17991 = $tmp992;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp992));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp993));
                    $l998:;
                    ITable* $tmp1001 = Iter$301$17991->$class->itable;
                    while ($tmp1001->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1001 = $tmp1001->next;
                    }
                    $fn1003 $tmp1002 = $tmp1001->methods[0];
                    panda$core$Bit $tmp1004 = $tmp1002(Iter$301$17991);
                    panda$core$Bit $tmp1005 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1004);
                    bool $tmp1000 = $tmp1005.value;
                    if (!$tmp1000) goto $l999;
                    {
                        int $tmp1008;
                        {
                            ITable* $tmp1012 = Iter$301$17991->$class->itable;
                            while ($tmp1012->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1012 = $tmp1012->next;
                            }
                            $fn1014 $tmp1013 = $tmp1012->methods[1];
                            panda$core$Object* $tmp1015 = $tmp1013(Iter$301$17991);
                            $tmp1011 = $tmp1015;
                            $tmp1010 = ((org$pandalanguage$pandac$ASTNode*) $tmp1011);
                            s1009 = $tmp1010;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1010));
                            panda$core$Panda$unref$panda$core$Object($tmp1011);
                            panda$core$Int64 $tmp1016 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1009);
                            panda$core$Int64 $tmp1017 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result955, $tmp1016);
                            result955 = $tmp1017;
                        }
                        $tmp1008 = -1;
                        goto $l1006;
                        $l1006:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1009));
                        s1009 = NULL;
                        switch ($tmp1008) {
                            case -1: goto $l1018;
                        }
                        $l1018:;
                    }
                    goto $l998;
                    $l999:;
                }
                $tmp990 = -1;
                goto $l988;
                $l988:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$301$17991));
                Iter$301$17991 = NULL;
                switch ($tmp990) {
                    case -1: goto $l1019;
                }
                $l1019:;
            }
            $returnValue501 = result955;
            $tmp495 = 31;
            goto $l493;
            $l1020:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp1022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_9496->$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp1022.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1024 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$191_9496->$data + 24));
            test1023 = *$tmp1024;
            panda$collections$ImmutableArray** $tmp1026 = ((panda$collections$ImmutableArray**) ((char*) $match$191_9496->$data + 32));
            statements1025 = *$tmp1026;
            panda$core$Int64 $tmp1028 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1023);
            result1027 = $tmp1028;
            {
                int $tmp1031;
                {
                    ITable* $tmp1035 = ((panda$collections$Iterable*) statements1025)->$class->itable;
                    while ($tmp1035->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1035 = $tmp1035->next;
                    }
                    $fn1037 $tmp1036 = $tmp1035->methods[0];
                    panda$collections$Iterator* $tmp1038 = $tmp1036(((panda$collections$Iterable*) statements1025));
                    $tmp1034 = $tmp1038;
                    $tmp1033 = $tmp1034;
                    Iter$307$171032 = $tmp1033;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1033));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1034));
                    $l1039:;
                    ITable* $tmp1042 = Iter$307$171032->$class->itable;
                    while ($tmp1042->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1042 = $tmp1042->next;
                    }
                    $fn1044 $tmp1043 = $tmp1042->methods[0];
                    panda$core$Bit $tmp1045 = $tmp1043(Iter$307$171032);
                    panda$core$Bit $tmp1046 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1045);
                    bool $tmp1041 = $tmp1046.value;
                    if (!$tmp1041) goto $l1040;
                    {
                        int $tmp1049;
                        {
                            ITable* $tmp1053 = Iter$307$171032->$class->itable;
                            while ($tmp1053->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1053 = $tmp1053->next;
                            }
                            $fn1055 $tmp1054 = $tmp1053->methods[1];
                            panda$core$Object* $tmp1056 = $tmp1054(Iter$307$171032);
                            $tmp1052 = $tmp1056;
                            $tmp1051 = ((org$pandalanguage$pandac$ASTNode*) $tmp1052);
                            s1050 = $tmp1051;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1051));
                            panda$core$Panda$unref$panda$core$Object($tmp1052);
                            panda$core$Int64 $tmp1057 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1050);
                            panda$core$Int64 $tmp1058 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1027, $tmp1057);
                            result1027 = $tmp1058;
                        }
                        $tmp1049 = -1;
                        goto $l1047;
                        $l1047:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1050));
                        s1050 = NULL;
                        switch ($tmp1049) {
                            case -1: goto $l1059;
                        }
                        $l1059:;
                    }
                    goto $l1039;
                    $l1040:;
                }
                $tmp1031 = -1;
                goto $l1029;
                $l1029:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$307$171032));
                Iter$307$171032 = NULL;
                switch ($tmp1031) {
                    case -1: goto $l1060;
                }
                $l1060:;
            }
            $returnValue501 = result1027;
            $tmp495 = 32;
            goto $l493;
            $l1061:;
            return $returnValue501;
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
    $tmp495 = -1;
    goto $l493;
    $l493:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp497));
    switch ($tmp495) {
        case 4: goto $l558;
        case 10: goto $l657;
        case 11: goto $l663;
        case 2: goto $l517;
        case 31: goto $l1020;
        case 21: goto $l884;
        case 20: goto $l877;
        case 13: goto $l707;
        case 18: goto $l871;
        case 14: goto $l710;
        case 19: goto $l874;
        case 12: goto $l704;
        case 26: goto $l901;
        case 8: goto $l613;
        case 0: goto $l503;
        case 7: goto $l608;
        case 29: goto $l910;
        case -1: goto $l1063;
        case 25: goto $l898;
        case 32: goto $l1061;
        case 6: goto $l605;
        case 17: goto $l796;
        case 28: goto $l907;
        case 24: goto $l895;
        case 5: goto $l599;
        case 1: goto $l514;
        case 27: goto $l904;
        case 30: goto $l948;
        case 15: goto $l755;
        case 16: goto $l758;
        case 9: goto $l616;
        case 22: goto $l887;
        case 3: goto $l555;
        case 23: goto $l890;
    }
    $l1063:;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Object* $tmp1066;
    panda$core$Int64 c1077;
    panda$collections$Iterator* Iter$320$131081 = NULL;
    panda$collections$Iterator* $tmp1082;
    panda$collections$Iterator* $tmp1083;
    org$pandalanguage$pandac$ASTNode* s1099 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1100;
    panda$core$Object* $tmp1101;
    panda$core$Bit $returnValue1109;
    panda$core$Object* $tmp1068 = (($fn1067) self->compiler->$class->vtable[2])(self->compiler);
    $tmp1066 = $tmp1068;
    panda$core$Bit $tmp1069 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1066)->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp1065 = $tmp1069.value;
    panda$core$Panda$unref$panda$core$Object($tmp1066);
    if (!$tmp1065) goto $l1070;
    panda$core$Bit $tmp1071 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp1072 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1071);
    $tmp1065 = $tmp1072.value;
    $l1070:;
    panda$core$Bit $tmp1073 = { $tmp1065 };
    bool $tmp1064 = $tmp1073.value;
    if (!$tmp1064) goto $l1074;
    panda$core$Bit $tmp1075 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp1064 = $tmp1075.value;
    $l1074:;
    panda$core$Bit $tmp1076 = { $tmp1064 };
    if ($tmp1076.value) {
    {
        c1077 = ((panda$core$Int64) { 0 });
        {
            int $tmp1080;
            {
                ITable* $tmp1084 = ((panda$collections$Iterable*) p_statements)->$class->itable;
                while ($tmp1084->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1084 = $tmp1084->next;
                }
                $fn1086 $tmp1085 = $tmp1084->methods[0];
                panda$collections$Iterator* $tmp1087 = $tmp1085(((panda$collections$Iterable*) p_statements));
                $tmp1083 = $tmp1087;
                $tmp1082 = $tmp1083;
                Iter$320$131081 = $tmp1082;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1082));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1083));
                $l1088:;
                ITable* $tmp1091 = Iter$320$131081->$class->itable;
                while ($tmp1091->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1091 = $tmp1091->next;
                }
                $fn1093 $tmp1092 = $tmp1091->methods[0];
                panda$core$Bit $tmp1094 = $tmp1092(Iter$320$131081);
                panda$core$Bit $tmp1095 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1094);
                bool $tmp1090 = $tmp1095.value;
                if (!$tmp1090) goto $l1089;
                {
                    int $tmp1098;
                    {
                        ITable* $tmp1102 = Iter$320$131081->$class->itable;
                        while ($tmp1102->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1102 = $tmp1102->next;
                        }
                        $fn1104 $tmp1103 = $tmp1102->methods[1];
                        panda$core$Object* $tmp1105 = $tmp1103(Iter$320$131081);
                        $tmp1101 = $tmp1105;
                        $tmp1100 = ((org$pandalanguage$pandac$ASTNode*) $tmp1101);
                        s1099 = $tmp1100;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1100));
                        panda$core$Panda$unref$panda$core$Object($tmp1101);
                        panda$core$Int64 $tmp1106 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1099);
                        panda$core$Int64 $tmp1107 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c1077, $tmp1106);
                        c1077 = $tmp1107;
                        panda$core$Bit $tmp1108 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c1077, ((panda$core$Int64) { 10 }));
                        if ($tmp1108.value) {
                        {
                            $returnValue1109 = ((panda$core$Bit) { false });
                            $tmp1098 = 0;
                            goto $l1096;
                            $l1110:;
                            $tmp1080 = 0;
                            goto $l1078;
                            $l1111:;
                            return $returnValue1109;
                        }
                        }
                    }
                    $tmp1098 = -1;
                    goto $l1096;
                    $l1096:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1099));
                    s1099 = NULL;
                    switch ($tmp1098) {
                        case 0: goto $l1110;
                        case -1: goto $l1113;
                    }
                    $l1113:;
                }
                goto $l1088;
                $l1089:;
            }
            $tmp1080 = -1;
            goto $l1078;
            $l1078:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$320$131081));
            Iter$320$131081 = NULL;
            switch ($tmp1080) {
                case -1: goto $l1114;
                case 0: goto $l1111;
            }
            $l1114:;
        }
        $returnValue1109 = ((panda$core$Bit) { true });
        return $returnValue1109;
    }
    }
    $returnValue1109 = ((panda$core$Bit) { false });
    return $returnValue1109;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment1120 = NULL;
    panda$core$String* $tmp1121;
    panda$core$String* $tmp1122;
    org$pandalanguage$pandac$ASTNode* $match$341_131126 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1127;
    org$pandalanguage$pandac$Position position1129;
    panda$core$String* text1131 = NULL;
    panda$core$String* $tmp1133;
    panda$core$String* $tmp1134;
    org$pandalanguage$pandac$Annotations* annotations1136 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1137;
    org$pandalanguage$pandac$Annotations* $tmp1138;
    panda$collections$Array* parameters1150 = NULL;
    panda$collections$Array* $tmp1151;
    panda$collections$Array* $tmp1152;
    panda$collections$Iterator* Iter$353$91157 = NULL;
    panda$collections$Iterator* $tmp1158;
    panda$collections$Iterator* $tmp1159;
    org$pandalanguage$pandac$ASTNode* p1175 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1176;
    panda$core$Object* $tmp1177;
    org$pandalanguage$pandac$ASTNode* $match$354_131185 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1186;
    panda$core$String* name1188 = NULL;
    org$pandalanguage$pandac$ASTNode* type1190 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1192;
    org$pandalanguage$pandac$Type* $tmp1194;
    org$pandalanguage$pandac$Type* returnType1199 = NULL;
    org$pandalanguage$pandac$Type* $tmp1200;
    org$pandalanguage$pandac$Type* $tmp1201;
    org$pandalanguage$pandac$Type* $tmp1202;
    org$pandalanguage$pandac$Type* $tmp1204;
    org$pandalanguage$pandac$Type* $tmp1205;
    org$pandalanguage$pandac$Type* $tmp1206;
    org$pandalanguage$pandac$Type* $tmp1211;
    panda$core$Object* $tmp1215;
    panda$core$Object* $tmp1228;
    panda$core$String* $tmp1231;
    panda$core$String* $tmp1232;
    org$pandalanguage$pandac$MethodDecl* $returnValue1237;
    org$pandalanguage$pandac$MethodDecl* $tmp1238;
    org$pandalanguage$pandac$MethodDecl* $tmp1239;
    int $tmp1119;
    {
        memset(&doccomment1120, 0, sizeof(doccomment1120));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1121 = doccomment1120;
                $tmp1122 = NULL;
                doccomment1120 = $tmp1122;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1122));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1121));
            }
        }
        }
        else {
        {
            int $tmp1125;
            {
                $tmp1127 = p_rawDoccomment;
                $match$341_131126 = $tmp1127;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1127));
                panda$core$Bit $tmp1128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$341_131126->$rawValue, ((panda$core$Int64) { 38 }));
                if ($tmp1128.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1130 = ((org$pandalanguage$pandac$Position*) ((char*) $match$341_131126->$data + 0));
                    position1129 = *$tmp1130;
                    panda$core$String** $tmp1132 = ((panda$core$String**) ((char*) $match$341_131126->$data + 16));
                    text1131 = *$tmp1132;
                    {
                        $tmp1133 = doccomment1120;
                        $tmp1134 = text1131;
                        doccomment1120 = $tmp1134;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1134));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1133));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1125 = -1;
            goto $l1123;
            $l1123:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1127));
            switch ($tmp1125) {
                case -1: goto $l1135;
            }
            $l1135:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1139 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1138 = $tmp1139;
        $tmp1137 = $tmp1138;
        annotations1136 = $tmp1137;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1137));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1138));
        panda$core$Bit $tmp1142 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        bool $tmp1141 = $tmp1142.value;
        if (!$tmp1141) goto $l1143;
        panda$core$Bit $tmp1144 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
        $tmp1141 = $tmp1144.value;
        $l1143:;
        panda$core$Bit $tmp1145 = { $tmp1141 };
        bool $tmp1140 = $tmp1145.value;
        if ($tmp1140) goto $l1146;
        panda$core$Bit $tmp1147 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations1136);
        $tmp1140 = $tmp1147.value;
        $l1146:;
        panda$core$Bit $tmp1148 = { $tmp1140 };
        if ($tmp1148.value) {
        {
            panda$core$Int64 $tmp1149 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1136->flags, ((panda$core$Int64) { 256 }));
            annotations1136->flags = $tmp1149;
        }
        }
        panda$collections$Array* $tmp1153 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1153);
        $tmp1152 = $tmp1153;
        $tmp1151 = $tmp1152;
        parameters1150 = $tmp1151;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1151));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1152));
        {
            int $tmp1156;
            {
                ITable* $tmp1160 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1160->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1160 = $tmp1160->next;
                }
                $fn1162 $tmp1161 = $tmp1160->methods[0];
                panda$collections$Iterator* $tmp1163 = $tmp1161(((panda$collections$Iterable*) p_rawParameters));
                $tmp1159 = $tmp1163;
                $tmp1158 = $tmp1159;
                Iter$353$91157 = $tmp1158;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1158));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1159));
                $l1164:;
                ITable* $tmp1167 = Iter$353$91157->$class->itable;
                while ($tmp1167->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1167 = $tmp1167->next;
                }
                $fn1169 $tmp1168 = $tmp1167->methods[0];
                panda$core$Bit $tmp1170 = $tmp1168(Iter$353$91157);
                panda$core$Bit $tmp1171 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1170);
                bool $tmp1166 = $tmp1171.value;
                if (!$tmp1166) goto $l1165;
                {
                    int $tmp1174;
                    {
                        ITable* $tmp1178 = Iter$353$91157->$class->itable;
                        while ($tmp1178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1178 = $tmp1178->next;
                        }
                        $fn1180 $tmp1179 = $tmp1178->methods[1];
                        panda$core$Object* $tmp1181 = $tmp1179(Iter$353$91157);
                        $tmp1177 = $tmp1181;
                        $tmp1176 = ((org$pandalanguage$pandac$ASTNode*) $tmp1177);
                        p1175 = $tmp1176;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1176));
                        panda$core$Panda$unref$panda$core$Object($tmp1177);
                        int $tmp1184;
                        {
                            $tmp1186 = p1175;
                            $match$354_131185 = $tmp1186;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1186));
                            panda$core$Bit $tmp1187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$354_131185->$rawValue, ((panda$core$Int64) { 31 }));
                            if ($tmp1187.value) {
                            {
                                panda$core$String** $tmp1189 = ((panda$core$String**) ((char*) $match$354_131185->$data + 16));
                                name1188 = *$tmp1189;
                                org$pandalanguage$pandac$ASTNode** $tmp1191 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$354_131185->$data + 24));
                                type1190 = *$tmp1191;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1193 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1195 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1190);
                                $tmp1194 = $tmp1195;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1193, name1188, $tmp1194);
                                $tmp1192 = $tmp1193;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1150, ((panda$core$Object*) $tmp1192));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1192));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1194));
                            }
                            }
                            else {
                            {
                                PANDA_ASSERT(((panda$core$Bit) { false }).value);
                            }
                            }
                        }
                        $tmp1184 = -1;
                        goto $l1182;
                        $l1182:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1186));
                        switch ($tmp1184) {
                            case -1: goto $l1196;
                        }
                        $l1196:;
                    }
                    $tmp1174 = -1;
                    goto $l1172;
                    $l1172:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1175));
                    p1175 = NULL;
                    switch ($tmp1174) {
                        case -1: goto $l1197;
                    }
                    $l1197:;
                }
                goto $l1164;
                $l1165:;
            }
            $tmp1156 = -1;
            goto $l1154;
            $l1154:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$353$91157));
            Iter$353$91157 = NULL;
            switch ($tmp1156) {
                case -1: goto $l1198;
            }
            $l1198:;
        }
        memset(&returnType1199, 0, sizeof(returnType1199));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1200 = returnType1199;
                org$pandalanguage$pandac$Type* $tmp1203 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1202 = $tmp1203;
                $tmp1201 = $tmp1202;
                returnType1199 = $tmp1201;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1201));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1202));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1200));
            }
        }
        }
        else {
        {
            {
                $tmp1204 = returnType1199;
                org$pandalanguage$pandac$Type* $tmp1207 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1206 = $tmp1207;
                $tmp1205 = $tmp1206;
                returnType1199 = $tmp1205;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1205));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1206));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1204));
            }
        }
        }
        panda$core$Bit $tmp1209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
        bool $tmp1208 = $tmp1209.value;
        if (!$tmp1208) goto $l1210;
        org$pandalanguage$pandac$Type* $tmp1212 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1211 = $tmp1212;
        panda$core$Bit $tmp1213 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1199, $tmp1211);
        $tmp1208 = $tmp1213.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1211));
        $l1210:;
        panda$core$Bit $tmp1214 = { $tmp1208 };
        if ($tmp1214.value) {
        {
            panda$core$Object* $tmp1217 = (($fn1216) self->compiler->$class->vtable[2])(self->compiler);
            $tmp1215 = $tmp1217;
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1215), p_position, &$s1218);
            panda$core$Panda$unref$panda$core$Object($tmp1215);
        }
        }
        bool $tmp1219 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1219) goto $l1220;
        panda$core$Bit $tmp1221 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1136, p_statements);
        $tmp1219 = $tmp1221.value;
        $l1220:;
        panda$core$Bit $tmp1222 = { $tmp1219 };
        if ($tmp1222.value) {
        {
            panda$core$Int64 $tmp1223 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1136->flags, ((panda$core$Int64) { 1024 }));
            annotations1136->flags = $tmp1223;
        }
        }
        if (((panda$core$Bit) { p_statements == NULL }).value) {
        {
            panda$core$Bit $tmp1224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1224.value) {
            {
                panda$core$Int64 $tmp1225 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1136->flags, ((panda$core$Int64) { 512 }));
                annotations1136->flags = $tmp1225;
            }
            }
            else {
            panda$core$Int64 $tmp1226 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1136->flags, ((panda$core$Int64) { 512 }));
            panda$core$Bit $tmp1227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1226, ((panda$core$Int64) { 0 }));
            if ($tmp1227.value) {
            {
                panda$core$Object* $tmp1230 = (($fn1229) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1228 = $tmp1230;
                panda$core$String* $tmp1234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1233, p_name);
                $tmp1232 = $tmp1234;
                panda$core$String* $tmp1236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1232, &$s1235);
                $tmp1231 = $tmp1236;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1228), p_position, $tmp1231);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1231));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1232));
                panda$core$Panda$unref$panda$core$Object($tmp1228);
            }
            }
            }
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1240 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1240, p_owner, p_position, doccomment1120, annotations1136, p_kind, p_name, parameters1150, returnType1199, p_statements);
        $tmp1239 = $tmp1240;
        $tmp1238 = $tmp1239;
        $returnValue1237 = $tmp1238;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1238));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1239));
        $tmp1119 = 0;
        goto $l1117;
        $l1241:;
        return $returnValue1237;
    }
    $l1117:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1120));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1136));
    annotations1136 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1150));
    parameters1150 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1199));
    switch ($tmp1119) {
        case 0: goto $l1241;
    }
    $l1243:;
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$387_91247 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1248;
    org$pandalanguage$pandac$Position position1250;
    org$pandalanguage$pandac$ASTNode* dc1252 = NULL;
    panda$collections$ImmutableArray* annotations1254 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1256 = NULL;
    org$pandalanguage$pandac$Position position1259;
    org$pandalanguage$pandac$ASTNode* dc1261 = NULL;
    panda$collections$ImmutableArray* annotations1263 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1265;
    panda$core$String* name1267 = NULL;
    panda$collections$ImmutableArray* parameters1269 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType1271 = NULL;
    panda$collections$ImmutableArray* statements1273 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1278 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1279;
    org$pandalanguage$pandac$MethodDecl* $tmp1280;
    org$pandalanguage$pandac$Position position1284;
    org$pandalanguage$pandac$ASTNode* dc1286 = NULL;
    panda$collections$ImmutableArray* annotations1288 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1290;
    panda$core$String* name1292 = NULL;
    panda$collections$ImmutableArray* generics1294 = NULL;
    panda$collections$ImmutableArray* supertypes1296 = NULL;
    panda$collections$ImmutableArray* members1298 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1303 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1304;
    org$pandalanguage$pandac$ClassDecl* $tmp1305;
    panda$core$Weak* $tmp1307;
    panda$core$Weak* $tmp1308;
    panda$core$Weak* $tmp1309;
    panda$core$String* $tmp1311;
    org$pandalanguage$pandac$Alias* $tmp1315;
    panda$core$String* $tmp1317;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1318;
    org$pandalanguage$pandac$Position $tmp1322;
    org$pandalanguage$pandac$Alias* $tmp1323;
    panda$core$String* $tmp1325;
    org$pandalanguage$pandac$Position $tmp1327;
    org$pandalanguage$pandac$Position position1330;
    org$pandalanguage$pandac$ASTNode* dc1332 = NULL;
    panda$core$String* name1334 = NULL;
    panda$collections$ImmutableArray* fields1336 = NULL;
    int $tmp1246;
    {
        $tmp1248 = p_node;
        $match$387_91247 = $tmp1248;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1248));
        panda$core$Bit $tmp1249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$387_91247->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1249.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1251 = ((org$pandalanguage$pandac$Position*) ((char*) $match$387_91247->$data + 0));
            position1250 = *$tmp1251;
            org$pandalanguage$pandac$ASTNode** $tmp1253 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$387_91247->$data + 16));
            dc1252 = *$tmp1253;
            panda$collections$ImmutableArray** $tmp1255 = ((panda$collections$ImmutableArray**) ((char*) $match$387_91247->$data + 24));
            annotations1254 = *$tmp1255;
            org$pandalanguage$pandac$ASTNode** $tmp1257 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$387_91247->$data + 32));
            varDecl1256 = *$tmp1257;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1250, dc1252, annotations1254, varDecl1256);
        }
        }
        else {
        panda$core$Bit $tmp1258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$387_91247->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1258.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1260 = ((org$pandalanguage$pandac$Position*) ((char*) $match$387_91247->$data + 0));
            position1259 = *$tmp1260;
            org$pandalanguage$pandac$ASTNode** $tmp1262 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$387_91247->$data + 16));
            dc1261 = *$tmp1262;
            panda$collections$ImmutableArray** $tmp1264 = ((panda$collections$ImmutableArray**) ((char*) $match$387_91247->$data + 24));
            annotations1263 = *$tmp1264;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1266 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$387_91247->$data + 32));
            kind1265 = *$tmp1266;
            panda$core$String** $tmp1268 = ((panda$core$String**) ((char*) $match$387_91247->$data + 40));
            name1267 = *$tmp1268;
            panda$collections$ImmutableArray** $tmp1270 = ((panda$collections$ImmutableArray**) ((char*) $match$387_91247->$data + 48));
            parameters1269 = *$tmp1270;
            org$pandalanguage$pandac$ASTNode** $tmp1272 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$387_91247->$data + 56));
            rawReturnType1271 = *$tmp1272;
            panda$collections$ImmutableArray** $tmp1274 = ((panda$collections$ImmutableArray**) ((char*) $match$387_91247->$data + 64));
            statements1273 = *$tmp1274;
            int $tmp1277;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1281 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1259, dc1261, annotations1263, kind1265, name1267, parameters1269, rawReturnType1271, statements1273);
                $tmp1280 = $tmp1281;
                $tmp1279 = $tmp1280;
                m1278 = $tmp1279;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1279));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1280));
                if (((panda$core$Bit) { m1278 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1278));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1278));
                }
                }
            }
            $tmp1277 = -1;
            goto $l1275;
            $l1275:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1278));
            m1278 = NULL;
            switch ($tmp1277) {
                case -1: goto $l1282;
            }
            $l1282:;
        }
        }
        else {
        panda$core$Bit $tmp1283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$387_91247->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1283.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1285 = ((org$pandalanguage$pandac$Position*) ((char*) $match$387_91247->$data + 0));
            position1284 = *$tmp1285;
            org$pandalanguage$pandac$ASTNode** $tmp1287 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$387_91247->$data + 16));
            dc1286 = *$tmp1287;
            panda$collections$ImmutableArray** $tmp1289 = ((panda$collections$ImmutableArray**) ((char*) $match$387_91247->$data + 24));
            annotations1288 = *$tmp1289;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1291 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$387_91247->$data + 32));
            kind1290 = *$tmp1291;
            panda$core$String** $tmp1293 = ((panda$core$String**) ((char*) $match$387_91247->$data + 40));
            name1292 = *$tmp1293;
            panda$collections$ImmutableArray** $tmp1295 = ((panda$collections$ImmutableArray**) ((char*) $match$387_91247->$data + 48));
            generics1294 = *$tmp1295;
            panda$collections$ImmutableArray** $tmp1297 = ((panda$collections$ImmutableArray**) ((char*) $match$387_91247->$data + 56));
            supertypes1296 = *$tmp1297;
            panda$collections$ImmutableArray** $tmp1299 = ((panda$collections$ImmutableArray**) ((char*) $match$387_91247->$data + 64));
            members1298 = *$tmp1299;
            int $tmp1302;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1306 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, p_cl->name, position1284, dc1286, annotations1288, kind1290, name1292, generics1294, supertypes1296, members1298);
                $tmp1305 = $tmp1306;
                $tmp1304 = $tmp1305;
                inner1303 = $tmp1304;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1304));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1305));
                if (((panda$core$Bit) { inner1303 != NULL }).value) {
                {
                    {
                        $tmp1307 = inner1303->owner;
                        panda$core$Weak* $tmp1310 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp1310, ((panda$core$Object*) p_cl));
                        $tmp1309 = $tmp1310;
                        $tmp1308 = $tmp1309;
                        inner1303->owner = $tmp1308;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1308));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1309));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1307));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1303));
                    panda$core$String* $tmp1313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_cl->name, &$s1312);
                    $tmp1311 = $tmp1313;
                    panda$core$Bit $tmp1314 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(inner1303->name, $tmp1311);
                    PANDA_ASSERT($tmp1314.value);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1311));
                    org$pandalanguage$pandac$Alias* $tmp1316 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$Int64 $tmp1319 = panda$core$String$length$R$panda$core$Int64(p_cl->name);
                    panda$core$Int64 $tmp1320 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1319, ((panda$core$Int64) { 1 }));
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1318, ((panda$core$Int64$nullable) { $tmp1320, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                    panda$core$String* $tmp1321 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(inner1303->name, $tmp1318);
                    $tmp1317 = $tmp1321;
                    org$pandalanguage$pandac$Position$init(&$tmp1322);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1316, $tmp1317, inner1303->name, $tmp1322);
                    $tmp1315 = $tmp1316;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1315));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1315));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1317));
                    org$pandalanguage$pandac$Alias* $tmp1324 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$String* $tmp1326 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1325 = $tmp1326;
                    org$pandalanguage$pandac$Position$init(&$tmp1327);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1324, $tmp1325, p_cl->name, $tmp1327);
                    $tmp1323 = $tmp1324;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(inner1303->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1323));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1323));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1325));
                }
                }
            }
            $tmp1302 = -1;
            goto $l1300;
            $l1300:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1303));
            inner1303 = NULL;
            switch ($tmp1302) {
                case -1: goto $l1328;
            }
            $l1328:;
        }
        }
        else {
        panda$core$Bit $tmp1329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$387_91247->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1329.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1331 = ((org$pandalanguage$pandac$Position*) ((char*) $match$387_91247->$data + 0));
            position1330 = *$tmp1331;
            org$pandalanguage$pandac$ASTNode** $tmp1333 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$387_91247->$data + 16));
            dc1332 = *$tmp1333;
            panda$core$String** $tmp1335 = ((panda$core$String**) ((char*) $match$387_91247->$data + 24));
            name1334 = *$tmp1335;
            panda$collections$ImmutableArray** $tmp1337 = ((panda$collections$ImmutableArray**) ((char*) $match$387_91247->$data + 32));
            fields1336 = *$tmp1337;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1330, dc1332, name1334, fields1336);
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
    $tmp1246 = -1;
    goto $l1244;
    $l1244:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1248));
    switch ($tmp1246) {
        case -1: goto $l1338;
    }
    $l1338:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1342 = NULL;
    panda$core$String* $tmp1343;
    panda$core$String* $tmp1344;
    org$pandalanguage$pandac$ASTNode* $match$425_131348 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1349;
    org$pandalanguage$pandac$Position position1351;
    panda$core$String* text1353 = NULL;
    panda$core$String* $tmp1355;
    panda$core$String* $tmp1356;
    panda$collections$Array* fields1358 = NULL;
    panda$collections$Array* $tmp1359;
    panda$collections$Array* $tmp1360;
    panda$collections$Iterator* Iter$433$91365 = NULL;
    panda$collections$Iterator* $tmp1366;
    panda$collections$Iterator* $tmp1367;
    org$pandalanguage$pandac$ASTNode* t1383 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1384;
    panda$core$Object* $tmp1385;
    org$pandalanguage$pandac$Type* $tmp1390;
    org$pandalanguage$pandac$ChoiceEntry* entry1394 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1395;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1396;
    int $tmp1341;
    {
        memset(&doccomment1342, 0, sizeof(doccomment1342));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1343 = doccomment1342;
                $tmp1344 = NULL;
                doccomment1342 = $tmp1344;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1344));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1343));
            }
        }
        }
        else {
        {
            int $tmp1347;
            {
                $tmp1349 = p_rawDoccomment;
                $match$425_131348 = $tmp1349;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1349));
                panda$core$Bit $tmp1350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$425_131348->$rawValue, ((panda$core$Int64) { 38 }));
                if ($tmp1350.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1352 = ((org$pandalanguage$pandac$Position*) ((char*) $match$425_131348->$data + 0));
                    position1351 = *$tmp1352;
                    panda$core$String** $tmp1354 = ((panda$core$String**) ((char*) $match$425_131348->$data + 16));
                    text1353 = *$tmp1354;
                    {
                        $tmp1355 = doccomment1342;
                        $tmp1356 = text1353;
                        doccomment1342 = $tmp1356;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1356));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1355));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1347 = -1;
            goto $l1345;
            $l1345:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1349));
            switch ($tmp1347) {
                case -1: goto $l1357;
            }
            $l1357:;
        }
        }
        panda$collections$Array* $tmp1361 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1361);
        $tmp1360 = $tmp1361;
        $tmp1359 = $tmp1360;
        fields1358 = $tmp1359;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1359));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1360));
        {
            int $tmp1364;
            {
                ITable* $tmp1368 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1368->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1368 = $tmp1368->next;
                }
                $fn1370 $tmp1369 = $tmp1368->methods[0];
                panda$collections$Iterator* $tmp1371 = $tmp1369(((panda$collections$Iterable*) p_rawFields));
                $tmp1367 = $tmp1371;
                $tmp1366 = $tmp1367;
                Iter$433$91365 = $tmp1366;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1366));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1367));
                $l1372:;
                ITable* $tmp1375 = Iter$433$91365->$class->itable;
                while ($tmp1375->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1375 = $tmp1375->next;
                }
                $fn1377 $tmp1376 = $tmp1375->methods[0];
                panda$core$Bit $tmp1378 = $tmp1376(Iter$433$91365);
                panda$core$Bit $tmp1379 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1378);
                bool $tmp1374 = $tmp1379.value;
                if (!$tmp1374) goto $l1373;
                {
                    int $tmp1382;
                    {
                        ITable* $tmp1386 = Iter$433$91365->$class->itable;
                        while ($tmp1386->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1386 = $tmp1386->next;
                        }
                        $fn1388 $tmp1387 = $tmp1386->methods[1];
                        panda$core$Object* $tmp1389 = $tmp1387(Iter$433$91365);
                        $tmp1385 = $tmp1389;
                        $tmp1384 = ((org$pandalanguage$pandac$ASTNode*) $tmp1385);
                        t1383 = $tmp1384;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1384));
                        panda$core$Panda$unref$panda$core$Object($tmp1385);
                        org$pandalanguage$pandac$Type* $tmp1391 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1383);
                        $tmp1390 = $tmp1391;
                        panda$collections$Array$add$panda$collections$Array$T(fields1358, ((panda$core$Object*) $tmp1390));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1390));
                    }
                    $tmp1382 = -1;
                    goto $l1380;
                    $l1380:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1383));
                    t1383 = NULL;
                    switch ($tmp1382) {
                        case -1: goto $l1392;
                    }
                    $l1392:;
                }
                goto $l1372;
                $l1373:;
            }
            $tmp1364 = -1;
            goto $l1362;
            $l1362:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$433$91365));
            Iter$433$91365 = NULL;
            switch ($tmp1364) {
                case -1: goto $l1393;
            }
            $l1393:;
        }
        org$pandalanguage$pandac$ChoiceEntry* $tmp1397 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
        panda$core$Int64 $tmp1398 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
        org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1397, p_cl, p_position, p_name, doccomment1342, $tmp1398, ((panda$collections$ListView*) fields1358));
        $tmp1396 = $tmp1397;
        $tmp1395 = $tmp1396;
        entry1394 = $tmp1395;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1395));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1396));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry1394));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1394));
    }
    $tmp1341 = -1;
    goto $l1339;
    $l1339:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1342));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1358));
    fields1358 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1394));
    entry1394 = NULL;
    switch ($tmp1341) {
        case -1: goto $l1399;
    }
    $l1399:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1403 = NULL;
    panda$core$String* $tmp1406;
    panda$core$String* $tmp1407;
    panda$core$String* $tmp1408;
    panda$core$String* $tmp1409;
    panda$core$String* $tmp1410;
    panda$core$String* $tmp1411;
    panda$core$String* $tmp1418;
    panda$core$String* $tmp1419;
    panda$core$String* doccomment1420 = NULL;
    panda$core$String* $tmp1421;
    panda$core$String* $tmp1422;
    org$pandalanguage$pandac$ASTNode* $match$459_131426 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1427;
    org$pandalanguage$pandac$Position position1429;
    panda$core$String* text1431 = NULL;
    panda$core$String* $tmp1433;
    panda$core$String* $tmp1434;
    org$pandalanguage$pandac$Annotations* annotations1436 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1437;
    org$pandalanguage$pandac$Annotations* $tmp1438;
    panda$collections$Array* parameters1440 = NULL;
    panda$collections$Array* $tmp1441;
    panda$collections$Array* $tmp1442;
    panda$collections$Iterator* Iter$469$131447 = NULL;
    panda$collections$Iterator* $tmp1448;
    panda$collections$Iterator* $tmp1449;
    org$pandalanguage$pandac$ASTNode* p1465 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1466;
    panda$core$Object* $tmp1467;
    panda$core$String* name1472 = NULL;
    org$pandalanguage$pandac$Type* bound1473 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$472_171477 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1478;
    panda$core$String* id1480 = NULL;
    panda$core$String* $tmp1482;
    panda$core$String* $tmp1483;
    org$pandalanguage$pandac$Type* $tmp1484;
    org$pandalanguage$pandac$Type* $tmp1485;
    org$pandalanguage$pandac$Type* $tmp1486;
    panda$core$String* id1489 = NULL;
    org$pandalanguage$pandac$ASTNode* type1491 = NULL;
    panda$core$String* $tmp1493;
    panda$core$String* $tmp1494;
    org$pandalanguage$pandac$Type* $tmp1495;
    org$pandalanguage$pandac$Type* $tmp1496;
    org$pandalanguage$pandac$Type* $tmp1497;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1500;
    panda$core$Object* $tmp1507;
    panda$collections$Array* supertypes1511 = NULL;
    panda$collections$Array* $tmp1512;
    panda$collections$Array* $tmp1513;
    panda$core$Object* $tmp1516;
    panda$collections$Iterator* Iter$493$131523 = NULL;
    panda$collections$Iterator* $tmp1524;
    panda$collections$Iterator* $tmp1525;
    org$pandalanguage$pandac$ASTNode* s1541 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1542;
    panda$core$Object* $tmp1543;
    org$pandalanguage$pandac$Type* $tmp1548;
    org$pandalanguage$pandac$ClassDecl* result1552 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1553;
    org$pandalanguage$pandac$ClassDecl* $tmp1554;
    panda$core$Object* $tmp1556;
    panda$core$Object* $tmp1559;
    org$pandalanguage$pandac$FieldDecl* rawValue1566 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1567;
    org$pandalanguage$pandac$FieldDecl* $tmp1568;
    org$pandalanguage$pandac$Annotations* $tmp1570;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1572;
    org$pandalanguage$pandac$Type* $tmp1574;
    org$pandalanguage$pandac$FieldDecl* data1576 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1577;
    org$pandalanguage$pandac$FieldDecl* $tmp1578;
    org$pandalanguage$pandac$Annotations* $tmp1580;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1582;
    org$pandalanguage$pandac$Type* $tmp1584;
    panda$collections$Iterator* Iter$510$91590 = NULL;
    panda$collections$Iterator* $tmp1591;
    panda$collections$Iterator* $tmp1592;
    org$pandalanguage$pandac$ASTNode* m1608 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1609;
    panda$core$Object* $tmp1610;
    org$pandalanguage$pandac$ASTNode* $match$511_131618 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1619;
    org$pandalanguage$pandac$Position mPosition1621;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1623;
    org$pandalanguage$pandac$ClassDecl$Kind $match$514_251626;
    panda$core$Object* $tmp1629;
    panda$core$Object* $tmp1634;
    panda$core$Bit foundInit1641;
    panda$core$Bit foundCleanup1642;
    panda$collections$Iterator* Iter$529$91646 = NULL;
    panda$collections$Iterator* $tmp1647;
    panda$collections$Iterator* $tmp1648;
    org$pandalanguage$pandac$MethodDecl* m1664 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1665;
    panda$core$Object* $tmp1666;
    panda$core$Object* $tmp1680;
    org$pandalanguage$pandac$MethodDecl* defaultInit1699 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1700;
    org$pandalanguage$pandac$MethodDecl* $tmp1701;
    org$pandalanguage$pandac$Annotations* $tmp1703;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1705;
    panda$collections$Array* $tmp1707;
    org$pandalanguage$pandac$Type* $tmp1709;
    panda$collections$ImmutableArray* $tmp1711;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1731 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1732;
    org$pandalanguage$pandac$MethodDecl* $tmp1733;
    org$pandalanguage$pandac$Annotations* $tmp1735;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1738;
    panda$collections$Array* $tmp1740;
    org$pandalanguage$pandac$Type* $tmp1742;
    panda$collections$ImmutableArray* $tmp1744;
    panda$core$Bit haveFields1748;
    panda$collections$Iterator* Iter$558$131752 = NULL;
    panda$collections$Iterator* $tmp1753;
    panda$collections$Iterator* $tmp1754;
    org$pandalanguage$pandac$ChoiceEntry* e1770 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1771;
    panda$core$Object* $tmp1772;
    org$pandalanguage$pandac$Type* $tmp1783;
    org$pandalanguage$pandac$Type* $tmp1784;
    org$pandalanguage$pandac$Type* $tmp1785;
    panda$core$Object* $tmp1787;
    panda$core$Object* $tmp1788;
    org$pandalanguage$pandac$ClassDecl* $returnValue1792;
    org$pandalanguage$pandac$ClassDecl* $tmp1793;
    int $tmp1402;
    {
        memset(&fullName1403, 0, sizeof(fullName1403));
        panda$core$Bit $tmp1405 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s1404);
        if ($tmp1405.value) {
        {
            {
                $tmp1406 = fullName1403;
                panda$core$String* $tmp1412 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1411 = $tmp1412;
                panda$core$String* $tmp1414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1411, &$s1413);
                $tmp1410 = $tmp1414;
                panda$core$String* $tmp1415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1410, p_name);
                $tmp1409 = $tmp1415;
                panda$core$String* $tmp1417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1409, &$s1416);
                $tmp1408 = $tmp1417;
                $tmp1407 = $tmp1408;
                fullName1403 = $tmp1407;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1407));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1408));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1409));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1410));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1411));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1406));
            }
        }
        }
        else {
        {
            {
                $tmp1418 = fullName1403;
                $tmp1419 = p_name;
                fullName1403 = $tmp1419;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1419));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1418));
            }
        }
        }
        memset(&doccomment1420, 0, sizeof(doccomment1420));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1421 = doccomment1420;
                $tmp1422 = NULL;
                doccomment1420 = $tmp1422;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1422));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1421));
            }
        }
        }
        else {
        {
            int $tmp1425;
            {
                $tmp1427 = p_rawDoccomment;
                $match$459_131426 = $tmp1427;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1427));
                panda$core$Bit $tmp1428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$459_131426->$rawValue, ((panda$core$Int64) { 38 }));
                if ($tmp1428.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1430 = ((org$pandalanguage$pandac$Position*) ((char*) $match$459_131426->$data + 0));
                    position1429 = *$tmp1430;
                    panda$core$String** $tmp1432 = ((panda$core$String**) ((char*) $match$459_131426->$data + 16));
                    text1431 = *$tmp1432;
                    {
                        $tmp1433 = doccomment1420;
                        $tmp1434 = text1431;
                        doccomment1420 = $tmp1434;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1434));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1433));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1425 = -1;
            goto $l1423;
            $l1423:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1427));
            switch ($tmp1425) {
                case -1: goto $l1435;
            }
            $l1435:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1439 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1438 = $tmp1439;
        $tmp1437 = $tmp1438;
        annotations1436 = $tmp1437;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1437));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1438));
        panda$collections$Array* $tmp1443 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1443);
        $tmp1442 = $tmp1443;
        $tmp1441 = $tmp1442;
        parameters1440 = $tmp1441;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1441));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1442));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1446;
                {
                    ITable* $tmp1450 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1450->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1450 = $tmp1450->next;
                    }
                    $fn1452 $tmp1451 = $tmp1450->methods[0];
                    panda$collections$Iterator* $tmp1453 = $tmp1451(((panda$collections$Iterable*) p_generics));
                    $tmp1449 = $tmp1453;
                    $tmp1448 = $tmp1449;
                    Iter$469$131447 = $tmp1448;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1448));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1449));
                    $l1454:;
                    ITable* $tmp1457 = Iter$469$131447->$class->itable;
                    while ($tmp1457->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1457 = $tmp1457->next;
                    }
                    $fn1459 $tmp1458 = $tmp1457->methods[0];
                    panda$core$Bit $tmp1460 = $tmp1458(Iter$469$131447);
                    panda$core$Bit $tmp1461 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1460);
                    bool $tmp1456 = $tmp1461.value;
                    if (!$tmp1456) goto $l1455;
                    {
                        int $tmp1464;
                        {
                            ITable* $tmp1468 = Iter$469$131447->$class->itable;
                            while ($tmp1468->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1468 = $tmp1468->next;
                            }
                            $fn1470 $tmp1469 = $tmp1468->methods[1];
                            panda$core$Object* $tmp1471 = $tmp1469(Iter$469$131447);
                            $tmp1467 = $tmp1471;
                            $tmp1466 = ((org$pandalanguage$pandac$ASTNode*) $tmp1467);
                            p1465 = $tmp1466;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1466));
                            panda$core$Panda$unref$panda$core$Object($tmp1467);
                            memset(&name1472, 0, sizeof(name1472));
                            memset(&bound1473, 0, sizeof(bound1473));
                            int $tmp1476;
                            {
                                $tmp1478 = p1465;
                                $match$472_171477 = $tmp1478;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1478));
                                panda$core$Bit $tmp1479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$472_171477->$rawValue, ((panda$core$Int64) { 20 }));
                                if ($tmp1479.value) {
                                {
                                    panda$core$String** $tmp1481 = ((panda$core$String**) ((char*) $match$472_171477->$data + 16));
                                    id1480 = *$tmp1481;
                                    {
                                        $tmp1482 = name1472;
                                        $tmp1483 = id1480;
                                        name1472 = $tmp1483;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1483));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1482));
                                    }
                                    {
                                        $tmp1484 = bound1473;
                                        org$pandalanguage$pandac$Type* $tmp1487 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1486 = $tmp1487;
                                        $tmp1485 = $tmp1486;
                                        bound1473 = $tmp1485;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1485));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1486));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1484));
                                    }
                                }
                                }
                                else {
                                panda$core$Bit $tmp1488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$472_171477->$rawValue, ((panda$core$Int64) { 44 }));
                                if ($tmp1488.value) {
                                {
                                    panda$core$String** $tmp1490 = ((panda$core$String**) ((char*) $match$472_171477->$data + 16));
                                    id1489 = *$tmp1490;
                                    org$pandalanguage$pandac$ASTNode** $tmp1492 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$472_171477->$data + 24));
                                    type1491 = *$tmp1492;
                                    {
                                        $tmp1493 = name1472;
                                        $tmp1494 = id1489;
                                        name1472 = $tmp1494;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1494));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1493));
                                    }
                                    {
                                        $tmp1495 = bound1473;
                                        org$pandalanguage$pandac$Type* $tmp1498 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1491);
                                        $tmp1497 = $tmp1498;
                                        $tmp1496 = $tmp1497;
                                        bound1473 = $tmp1496;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1496));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1497));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1495));
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
                            $tmp1476 = -1;
                            goto $l1474;
                            $l1474:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1478));
                            switch ($tmp1476) {
                                case -1: goto $l1499;
                            }
                            $l1499:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1501 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1503 = (($fn1502) p1465->$class->vtable[2])(p1465);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1501, $tmp1503, fullName1403, name1472, bound1473);
                            $tmp1500 = $tmp1501;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1440, ((panda$core$Object*) $tmp1500));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1500));
                        }
                        $tmp1464 = -1;
                        goto $l1462;
                        $l1462:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1465));
                        p1465 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1472));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1473));
                        switch ($tmp1464) {
                            case -1: goto $l1504;
                        }
                        $l1504:;
                    }
                    goto $l1454;
                    $l1455:;
                }
                $tmp1446 = -1;
                goto $l1444;
                $l1444:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$469$131447));
                Iter$469$131447 = NULL;
                switch ($tmp1446) {
                    case -1: goto $l1505;
                }
                $l1505:;
            }
            panda$core$Bit $tmp1506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1506.value) {
            {
                panda$core$Object* $tmp1509 = (($fn1508) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1507 = $tmp1509;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1507), p_position, &$s1510);
                panda$core$Panda$unref$panda$core$Object($tmp1507);
            }
            }
        }
        }
        panda$collections$Array* $tmp1514 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1514);
        $tmp1513 = $tmp1514;
        $tmp1512 = $tmp1513;
        supertypes1511 = $tmp1512;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1512));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1513));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Bit $tmp1515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1515.value) {
            {
                panda$core$Object* $tmp1518 = (($fn1517) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1516 = $tmp1518;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1516), p_position, &$s1519);
                panda$core$Panda$unref$panda$core$Object($tmp1516);
            }
            }
            {
                int $tmp1522;
                {
                    ITable* $tmp1526 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1526->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1526 = $tmp1526->next;
                    }
                    $fn1528 $tmp1527 = $tmp1526->methods[0];
                    panda$collections$Iterator* $tmp1529 = $tmp1527(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1525 = $tmp1529;
                    $tmp1524 = $tmp1525;
                    Iter$493$131523 = $tmp1524;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1524));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1525));
                    $l1530:;
                    ITable* $tmp1533 = Iter$493$131523->$class->itable;
                    while ($tmp1533->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1533 = $tmp1533->next;
                    }
                    $fn1535 $tmp1534 = $tmp1533->methods[0];
                    panda$core$Bit $tmp1536 = $tmp1534(Iter$493$131523);
                    panda$core$Bit $tmp1537 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1536);
                    bool $tmp1532 = $tmp1537.value;
                    if (!$tmp1532) goto $l1531;
                    {
                        int $tmp1540;
                        {
                            ITable* $tmp1544 = Iter$493$131523->$class->itable;
                            while ($tmp1544->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1544 = $tmp1544->next;
                            }
                            $fn1546 $tmp1545 = $tmp1544->methods[1];
                            panda$core$Object* $tmp1547 = $tmp1545(Iter$493$131523);
                            $tmp1543 = $tmp1547;
                            $tmp1542 = ((org$pandalanguage$pandac$ASTNode*) $tmp1543);
                            s1541 = $tmp1542;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1542));
                            panda$core$Panda$unref$panda$core$Object($tmp1543);
                            org$pandalanguage$pandac$Type* $tmp1549 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1541);
                            $tmp1548 = $tmp1549;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1511, ((panda$core$Object*) $tmp1548));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1548));
                        }
                        $tmp1540 = -1;
                        goto $l1538;
                        $l1538:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1541));
                        s1541 = NULL;
                        switch ($tmp1540) {
                            case -1: goto $l1550;
                        }
                        $l1550:;
                    }
                    goto $l1530;
                    $l1531:;
                }
                $tmp1522 = -1;
                goto $l1520;
                $l1520:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$493$131523));
                Iter$493$131523 = NULL;
                switch ($tmp1522) {
                    case -1: goto $l1551;
                }
                $l1551:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1555 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1558 = (($fn1557) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1556 = $tmp1558;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1555, p_source, p_position, p_aliases, doccomment1420, annotations1436, p_kind, fullName1403, ((panda$collections$ListView*) supertypes1511), parameters1440, ((org$pandalanguage$pandac$Compiler*) $tmp1556)->root);
        $tmp1554 = $tmp1555;
        $tmp1553 = $tmp1554;
        result1552 = $tmp1553;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1553));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1554));
        panda$core$Panda$unref$panda$core$Object($tmp1556);
        panda$core$Object* $tmp1561 = (($fn1560) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1559 = $tmp1561;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1559)->currentClass, ((panda$core$Object*) result1552));
        panda$core$Panda$unref$panda$core$Object($tmp1559);
        panda$core$Bit $tmp1562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1562.value) {
        {
            int $tmp1565;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1569 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1571 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1571);
                $tmp1570 = $tmp1571;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1572, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1575 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1574 = $tmp1575;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1569, result1552, result1552->position, NULL, $tmp1570, $tmp1572, &$s1573, $tmp1574, NULL);
                $tmp1568 = $tmp1569;
                $tmp1567 = $tmp1568;
                rawValue1566 = $tmp1567;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1567));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1568));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1574));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1570));
                panda$collections$Array$add$panda$collections$Array$T(result1552->fields, ((panda$core$Object*) rawValue1566));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1552->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1566));
                org$pandalanguage$pandac$FieldDecl* $tmp1579 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1581 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1581);
                $tmp1580 = $tmp1581;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1582, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1585 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1584 = $tmp1585;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1579, result1552, result1552->position, NULL, $tmp1580, $tmp1582, &$s1583, $tmp1584, NULL);
                $tmp1578 = $tmp1579;
                $tmp1577 = $tmp1578;
                data1576 = $tmp1577;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1577));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1578));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1584));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1580));
                panda$collections$Array$add$panda$collections$Array$T(result1552->fields, ((panda$core$Object*) data1576));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1552->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1576));
            }
            $tmp1565 = -1;
            goto $l1563;
            $l1563:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1566));
            rawValue1566 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1576));
            data1576 = NULL;
            switch ($tmp1565) {
                case -1: goto $l1586;
            }
            $l1586:;
        }
        }
        {
            int $tmp1589;
            {
                ITable* $tmp1593 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1593->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1593 = $tmp1593->next;
                }
                $fn1595 $tmp1594 = $tmp1593->methods[0];
                panda$collections$Iterator* $tmp1596 = $tmp1594(((panda$collections$Iterable*) p_members));
                $tmp1592 = $tmp1596;
                $tmp1591 = $tmp1592;
                Iter$510$91590 = $tmp1591;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1591));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1592));
                $l1597:;
                ITable* $tmp1600 = Iter$510$91590->$class->itable;
                while ($tmp1600->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1600 = $tmp1600->next;
                }
                $fn1602 $tmp1601 = $tmp1600->methods[0];
                panda$core$Bit $tmp1603 = $tmp1601(Iter$510$91590);
                panda$core$Bit $tmp1604 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1603);
                bool $tmp1599 = $tmp1604.value;
                if (!$tmp1599) goto $l1598;
                {
                    int $tmp1607;
                    {
                        ITable* $tmp1611 = Iter$510$91590->$class->itable;
                        while ($tmp1611->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1611 = $tmp1611->next;
                        }
                        $fn1613 $tmp1612 = $tmp1611->methods[1];
                        panda$core$Object* $tmp1614 = $tmp1612(Iter$510$91590);
                        $tmp1610 = $tmp1614;
                        $tmp1609 = ((org$pandalanguage$pandac$ASTNode*) $tmp1610);
                        m1608 = $tmp1609;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1609));
                        panda$core$Panda$unref$panda$core$Object($tmp1610);
                        int $tmp1617;
                        {
                            $tmp1619 = m1608;
                            $match$511_131618 = $tmp1619;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1619));
                            panda$core$Bit $tmp1620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$511_131618->$rawValue, ((panda$core$Int64) { 26 }));
                            if ($tmp1620.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp1622 = ((org$pandalanguage$pandac$Position*) ((char*) $match$511_131618->$data + 0));
                                mPosition1621 = *$tmp1622;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1624 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$511_131618->$data + 32));
                                methodKind1623 = *$tmp1624;
                                panda$core$Bit $tmp1625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1623.$rawValue, ((panda$core$Int64) { 2 }));
                                if ($tmp1625.value) {
                                {
                                    {
                                        $match$514_251626 = p_kind;
                                        panda$core$Bit $tmp1627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$514_251626.$rawValue, ((panda$core$Int64) { 0 }));
                                        if ($tmp1627.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$514_251626.$rawValue, ((panda$core$Int64) { 1 }));
                                        if ($tmp1628.value) {
                                        {
                                            panda$core$Object* $tmp1631 = (($fn1630) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp1629 = $tmp1631;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1629), mPosition1621, &$s1632);
                                            panda$core$Panda$unref$panda$core$Object($tmp1629);
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$514_251626.$rawValue, ((panda$core$Int64) { 2 }));
                                        if ($tmp1633.value) {
                                        {
                                            panda$core$Object* $tmp1636 = (($fn1635) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp1634 = $tmp1636;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1634), mPosition1621, &$s1637);
                                            panda$core$Panda$unref$panda$core$Object($tmp1634);
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
                        $tmp1617 = -1;
                        goto $l1615;
                        $l1615:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1619));
                        switch ($tmp1617) {
                            case -1: goto $l1638;
                        }
                        $l1638:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1552, m1608);
                    }
                    $tmp1607 = -1;
                    goto $l1605;
                    $l1605:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1608));
                    m1608 = NULL;
                    switch ($tmp1607) {
                        case -1: goto $l1639;
                    }
                    $l1639:;
                }
                goto $l1597;
                $l1598:;
            }
            $tmp1589 = -1;
            goto $l1587;
            $l1587:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$510$91590));
            Iter$510$91590 = NULL;
            switch ($tmp1589) {
                case -1: goto $l1640;
            }
            $l1640:;
        }
        foundInit1641 = ((panda$core$Bit) { false });
        foundCleanup1642 = ((panda$core$Bit) { false });
        {
            int $tmp1645;
            {
                ITable* $tmp1649 = ((panda$collections$Iterable*) result1552->methods)->$class->itable;
                while ($tmp1649->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1649 = $tmp1649->next;
                }
                $fn1651 $tmp1650 = $tmp1649->methods[0];
                panda$collections$Iterator* $tmp1652 = $tmp1650(((panda$collections$Iterable*) result1552->methods));
                $tmp1648 = $tmp1652;
                $tmp1647 = $tmp1648;
                Iter$529$91646 = $tmp1647;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1647));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1648));
                $l1653:;
                ITable* $tmp1656 = Iter$529$91646->$class->itable;
                while ($tmp1656->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1656 = $tmp1656->next;
                }
                $fn1658 $tmp1657 = $tmp1656->methods[0];
                panda$core$Bit $tmp1659 = $tmp1657(Iter$529$91646);
                panda$core$Bit $tmp1660 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1659);
                bool $tmp1655 = $tmp1660.value;
                if (!$tmp1655) goto $l1654;
                {
                    int $tmp1663;
                    {
                        ITable* $tmp1667 = Iter$529$91646->$class->itable;
                        while ($tmp1667->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1667 = $tmp1667->next;
                        }
                        $fn1669 $tmp1668 = $tmp1667->methods[1];
                        panda$core$Object* $tmp1670 = $tmp1668(Iter$529$91646);
                        $tmp1666 = $tmp1670;
                        $tmp1665 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1666);
                        m1664 = $tmp1665;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1665));
                        panda$core$Panda$unref$panda$core$Object($tmp1666);
                        panda$core$Bit $tmp1671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1664->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
                        if ($tmp1671.value) {
                        {
                            foundInit1641 = ((panda$core$Bit) { true });
                        }
                        }
                        panda$core$Bit $tmp1674 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1664)->name, &$s1673);
                        bool $tmp1672 = $tmp1674.value;
                        if (!$tmp1672) goto $l1675;
                        panda$core$Int64 $tmp1676 = panda$collections$Array$get_count$R$panda$core$Int64(m1664->parameters);
                        panda$core$Bit $tmp1677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1676, ((panda$core$Int64) { 0 }));
                        $tmp1672 = $tmp1677.value;
                        $l1675:;
                        panda$core$Bit $tmp1678 = { $tmp1672 };
                        if ($tmp1678.value) {
                        {
                            foundCleanup1642 = ((panda$core$Bit) { true });
                            panda$core$Bit $tmp1679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp1679.value) {
                            {
                                panda$core$Object* $tmp1682 = (($fn1681) self->compiler->$class->vtable[2])(self->compiler);
                                $tmp1680 = $tmp1682;
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1680), p_position, &$s1683);
                                panda$core$Panda$unref$panda$core$Object($tmp1680);
                            }
                            }
                        }
                        }
                    }
                    $tmp1663 = -1;
                    goto $l1661;
                    $l1661:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1664));
                    m1664 = NULL;
                    switch ($tmp1663) {
                        case -1: goto $l1684;
                    }
                    $l1684:;
                }
                goto $l1653;
                $l1654:;
            }
            $tmp1645 = -1;
            goto $l1643;
            $l1643:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$529$91646));
            Iter$529$91646 = NULL;
            switch ($tmp1645) {
                case -1: goto $l1685;
            }
            $l1685:;
        }
        panda$core$Bit $tmp1688 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1641);
        bool $tmp1687 = $tmp1688.value;
        if (!$tmp1687) goto $l1689;
        panda$core$Bit $tmp1690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        $tmp1687 = $tmp1690.value;
        $l1689:;
        panda$core$Bit $tmp1691 = { $tmp1687 };
        bool $tmp1686 = $tmp1691.value;
        if (!$tmp1686) goto $l1692;
        panda$core$Bit $tmp1694 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1552->name, &$s1693);
        $tmp1686 = $tmp1694.value;
        $l1692:;
        panda$core$Bit $tmp1695 = { $tmp1686 };
        if ($tmp1695.value) {
        {
            int $tmp1698;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1702 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1704 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1704, ((panda$core$Int64) { 8192 }));
                $tmp1703 = $tmp1704;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1705, ((panda$core$Int64) { 2 }));
                panda$collections$Array* $tmp1708 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1708);
                $tmp1707 = $tmp1708;
                org$pandalanguage$pandac$Type* $tmp1710 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1709 = $tmp1710;
                panda$collections$ImmutableArray* $tmp1712 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1712);
                $tmp1711 = $tmp1712;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1702, result1552, p_position, NULL, $tmp1703, $tmp1705, &$s1706, $tmp1707, $tmp1709, $tmp1711);
                $tmp1701 = $tmp1702;
                $tmp1700 = $tmp1701;
                defaultInit1699 = $tmp1700;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1700));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1701));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1711));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1709));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1707));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1703));
                panda$collections$Array$add$panda$collections$Array$T(result1552->methods, ((panda$core$Object*) defaultInit1699));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1552->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1699));
            }
            $tmp1698 = -1;
            goto $l1696;
            $l1696:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1699));
            defaultInit1699 = NULL;
            switch ($tmp1698) {
                case -1: goto $l1713;
            }
            $l1713:;
        }
        }
        panda$core$Bit $tmp1716 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup1642);
        bool $tmp1715 = $tmp1716.value;
        if (!$tmp1715) goto $l1717;
        panda$core$Bit $tmp1719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp1718 = $tmp1719.value;
        if ($tmp1718) goto $l1720;
        panda$core$Bit $tmp1721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        $tmp1718 = $tmp1721.value;
        $l1720:;
        panda$core$Bit $tmp1722 = { $tmp1718 };
        $tmp1715 = $tmp1722.value;
        $l1717:;
        panda$core$Bit $tmp1723 = { $tmp1715 };
        bool $tmp1714 = $tmp1723.value;
        if (!$tmp1714) goto $l1724;
        panda$core$Bit $tmp1726 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1552->name, &$s1725);
        $tmp1714 = $tmp1726.value;
        $l1724:;
        panda$core$Bit $tmp1727 = { $tmp1714 };
        if ($tmp1727.value) {
        {
            int $tmp1730;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1734 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1736 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64 $tmp1737 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 32 }), ((panda$core$Int64) { 8192 }));
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1736, $tmp1737);
                $tmp1735 = $tmp1736;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1738, ((panda$core$Int64) { 0 }));
                panda$collections$Array* $tmp1741 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1741);
                $tmp1740 = $tmp1741;
                org$pandalanguage$pandac$Type* $tmp1743 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1742 = $tmp1743;
                panda$collections$ImmutableArray* $tmp1745 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1745);
                $tmp1744 = $tmp1745;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1734, result1552, p_position, NULL, $tmp1735, $tmp1738, &$s1739, $tmp1740, $tmp1742, $tmp1744);
                $tmp1733 = $tmp1734;
                $tmp1732 = $tmp1733;
                defaultCleanup1731 = $tmp1732;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1732));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1733));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1744));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1742));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1740));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1735));
                panda$collections$Array$add$panda$collections$Array$T(result1552->methods, ((panda$core$Object*) defaultCleanup1731));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1552->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1731));
            }
            $tmp1730 = -1;
            goto $l1728;
            $l1728:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1731));
            defaultCleanup1731 = NULL;
            switch ($tmp1730) {
                case -1: goto $l1746;
            }
            $l1746:;
        }
        }
        panda$core$Bit $tmp1747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1747.value) {
        {
            haveFields1748 = ((panda$core$Bit) { false });
            {
                int $tmp1751;
                {
                    ITable* $tmp1755 = ((panda$collections$Iterable*) result1552->choiceEntries)->$class->itable;
                    while ($tmp1755->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1755 = $tmp1755->next;
                    }
                    $fn1757 $tmp1756 = $tmp1755->methods[0];
                    panda$collections$Iterator* $tmp1758 = $tmp1756(((panda$collections$Iterable*) result1552->choiceEntries));
                    $tmp1754 = $tmp1758;
                    $tmp1753 = $tmp1754;
                    Iter$558$131752 = $tmp1753;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1753));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1754));
                    $l1759:;
                    ITable* $tmp1762 = Iter$558$131752->$class->itable;
                    while ($tmp1762->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1762 = $tmp1762->next;
                    }
                    $fn1764 $tmp1763 = $tmp1762->methods[0];
                    panda$core$Bit $tmp1765 = $tmp1763(Iter$558$131752);
                    panda$core$Bit $tmp1766 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1765);
                    bool $tmp1761 = $tmp1766.value;
                    if (!$tmp1761) goto $l1760;
                    {
                        int $tmp1769;
                        {
                            ITable* $tmp1773 = Iter$558$131752->$class->itable;
                            while ($tmp1773->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1773 = $tmp1773->next;
                            }
                            $fn1775 $tmp1774 = $tmp1773->methods[1];
                            panda$core$Object* $tmp1776 = $tmp1774(Iter$558$131752);
                            $tmp1772 = $tmp1776;
                            $tmp1771 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1772);
                            e1770 = $tmp1771;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1771));
                            panda$core$Panda$unref$panda$core$Object($tmp1772);
                            panda$core$Int64 $tmp1777 = panda$collections$Array$get_count$R$panda$core$Int64(e1770->fields);
                            panda$core$Bit $tmp1778 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1777, ((panda$core$Int64) { 0 }));
                            if ($tmp1778.value) {
                            {
                                haveFields1748 = ((panda$core$Bit) { true });
                                $tmp1769 = 0;
                                goto $l1767;
                                $l1779:;
                                goto $l1760;
                            }
                            }
                        }
                        $tmp1769 = -1;
                        goto $l1767;
                        $l1767:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1770));
                        e1770 = NULL;
                        switch ($tmp1769) {
                            case 0: goto $l1779;
                            case -1: goto $l1780;
                        }
                        $l1780:;
                    }
                    goto $l1759;
                    $l1760:;
                }
                $tmp1751 = -1;
                goto $l1749;
                $l1749:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$558$131752));
                Iter$558$131752 = NULL;
                switch ($tmp1751) {
                    case -1: goto $l1781;
                }
                $l1781:;
            }
            panda$core$Bit $tmp1782 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1748);
            if ($tmp1782.value) {
            {
                {
                    $tmp1783 = result1552->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp1786 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp1785 = $tmp1786;
                    $tmp1784 = $tmp1785;
                    result1552->rawSuper = $tmp1784;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1784));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1785));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1783));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp1790 = (($fn1789) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1788 = $tmp1790;
        panda$core$Object* $tmp1791 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1788)->currentClass);
        $tmp1787 = $tmp1791;
        panda$core$Panda$unref$panda$core$Object($tmp1787);
        panda$core$Panda$unref$panda$core$Object($tmp1788);
        $tmp1793 = result1552;
        $returnValue1792 = $tmp1793;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1793));
        $tmp1402 = 0;
        goto $l1400;
        $l1794:;
        return $returnValue1792;
    }
    $l1400:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1403));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1420));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1436));
    annotations1436 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1440));
    parameters1440 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1511));
    supertypes1511 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1552));
    result1552 = NULL;
    switch ($tmp1402) {
        case 0: goto $l1794;
    }
    $l1796:;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$574$91800 = NULL;
    panda$collections$Iterator* $tmp1801;
    panda$collections$Iterator* $tmp1802;
    org$pandalanguage$pandac$ClassDecl* inner1818 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1819;
    panda$core$Object* $tmp1820;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp1799;
        {
            ITable* $tmp1803 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp1803->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1803 = $tmp1803->next;
            }
            $fn1805 $tmp1804 = $tmp1803->methods[0];
            panda$collections$Iterator* $tmp1806 = $tmp1804(((panda$collections$Iterable*) p_cl->classes));
            $tmp1802 = $tmp1806;
            $tmp1801 = $tmp1802;
            Iter$574$91800 = $tmp1801;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1801));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1802));
            $l1807:;
            ITable* $tmp1810 = Iter$574$91800->$class->itable;
            while ($tmp1810->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1810 = $tmp1810->next;
            }
            $fn1812 $tmp1811 = $tmp1810->methods[0];
            panda$core$Bit $tmp1813 = $tmp1811(Iter$574$91800);
            panda$core$Bit $tmp1814 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1813);
            bool $tmp1809 = $tmp1814.value;
            if (!$tmp1809) goto $l1808;
            {
                int $tmp1817;
                {
                    ITable* $tmp1821 = Iter$574$91800->$class->itable;
                    while ($tmp1821->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1821 = $tmp1821->next;
                    }
                    $fn1823 $tmp1822 = $tmp1821->methods[1];
                    panda$core$Object* $tmp1824 = $tmp1822(Iter$574$91800);
                    $tmp1820 = $tmp1824;
                    $tmp1819 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1820);
                    inner1818 = $tmp1819;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1819));
                    panda$core$Panda$unref$panda$core$Object($tmp1820);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1818, p_arr);
                }
                $tmp1817 = -1;
                goto $l1815;
                $l1815:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1818));
                inner1818 = NULL;
                switch ($tmp1817) {
                    case -1: goto $l1825;
                }
                $l1825:;
            }
            goto $l1807;
            $l1808:;
        }
        $tmp1799 = -1;
        goto $l1797;
        $l1797:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$574$91800));
        Iter$574$91800 = NULL;
        switch ($tmp1799) {
            case -1: goto $l1826;
        }
        $l1826:;
    }
}
void org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$collections$List* p_classes) {
    org$pandalanguage$pandac$ClassDecl* $tmp1830;
    org$pandalanguage$pandac$ClassDecl* $tmp1831;
    org$pandalanguage$pandac$ClassDecl* $tmp1832;
    org$pandalanguage$pandac$Position $tmp1834;
    org$pandalanguage$pandac$Annotations* $tmp1835;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp1837;
    panda$collections$Array* $tmp1839;
    panda$collections$Array* $tmp1841;
    panda$core$Object* $tmp1843;
    org$pandalanguage$pandac$MethodDecl* defaultInit1849 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1850;
    org$pandalanguage$pandac$MethodDecl* $tmp1851;
    org$pandalanguage$pandac$Position $tmp1853;
    org$pandalanguage$pandac$Annotations* $tmp1854;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1856;
    panda$collections$Array* $tmp1858;
    org$pandalanguage$pandac$Type* $tmp1860;
    panda$collections$ImmutableArray* $tmp1862;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1864 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1865;
    org$pandalanguage$pandac$MethodDecl* $tmp1866;
    org$pandalanguage$pandac$Position $tmp1868;
    org$pandalanguage$pandac$Annotations* $tmp1869;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1872;
    panda$collections$Array* $tmp1874;
    org$pandalanguage$pandac$Type* $tmp1876;
    panda$collections$ImmutableArray* $tmp1878;
    if (((panda$core$Bit) { self->bareCodeClass == NULL }).value) {
    {
        int $tmp1829;
        {
            {
                $tmp1830 = self->bareCodeClass;
                org$pandalanguage$pandac$ClassDecl* $tmp1833 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
                org$pandalanguage$pandac$Position$init(&$tmp1834);
                org$pandalanguage$pandac$Annotations* $tmp1836 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1836);
                $tmp1835 = $tmp1836;
                org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp1837, ((panda$core$Int64) { 0 }));
                panda$collections$Array* $tmp1840 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1840);
                $tmp1839 = $tmp1840;
                panda$collections$Array* $tmp1842 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1842);
                $tmp1841 = $tmp1842;
                panda$core$Object* $tmp1845 = (($fn1844) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1843 = $tmp1845;
                org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1833, p_source, $tmp1834, p_aliases, NULL, $tmp1835, $tmp1837, &$s1838, ((panda$collections$ListView*) $tmp1839), $tmp1841, ((org$pandalanguage$pandac$Compiler*) $tmp1843)->root);
                $tmp1832 = $tmp1833;
                $tmp1831 = $tmp1832;
                self->bareCodeClass = $tmp1831;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1831));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1832));
                panda$core$Panda$unref$panda$core$Object($tmp1843);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1841));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1839));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1835));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1830));
            }
            ITable* $tmp1846 = ((panda$collections$CollectionWriter*) p_classes)->$class->itable;
            while ($tmp1846->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
                $tmp1846 = $tmp1846->next;
            }
            $fn1848 $tmp1847 = $tmp1846->methods[0];
            $tmp1847(((panda$collections$CollectionWriter*) p_classes), ((panda$core$Object*) self->bareCodeClass));
            org$pandalanguage$pandac$MethodDecl* $tmp1852 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp1853);
            org$pandalanguage$pandac$Annotations* $tmp1855 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1855, ((panda$core$Int64) { 8192 }));
            $tmp1854 = $tmp1855;
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1856, ((panda$core$Int64) { 2 }));
            panda$collections$Array* $tmp1859 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp1859);
            $tmp1858 = $tmp1859;
            org$pandalanguage$pandac$Type* $tmp1861 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp1860 = $tmp1861;
            panda$collections$ImmutableArray* $tmp1863 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp1863);
            $tmp1862 = $tmp1863;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1852, self->bareCodeClass, $tmp1853, NULL, $tmp1854, $tmp1856, &$s1857, $tmp1858, $tmp1860, $tmp1862);
            $tmp1851 = $tmp1852;
            $tmp1850 = $tmp1851;
            defaultInit1849 = $tmp1850;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1850));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1851));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1862));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1860));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1858));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1854));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultInit1849));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1849));
            org$pandalanguage$pandac$MethodDecl* $tmp1867 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp1868);
            org$pandalanguage$pandac$Annotations* $tmp1870 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64 $tmp1871 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 32 }), ((panda$core$Int64) { 8192 }));
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1870, $tmp1871);
            $tmp1869 = $tmp1870;
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1872, ((panda$core$Int64) { 0 }));
            panda$collections$Array* $tmp1875 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp1875);
            $tmp1874 = $tmp1875;
            org$pandalanguage$pandac$Type* $tmp1877 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp1876 = $tmp1877;
            panda$collections$ImmutableArray* $tmp1879 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp1879);
            $tmp1878 = $tmp1879;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1867, self->bareCodeClass, $tmp1868, NULL, $tmp1869, $tmp1872, &$s1873, $tmp1874, $tmp1876, $tmp1878);
            $tmp1866 = $tmp1867;
            $tmp1865 = $tmp1866;
            defaultCleanup1864 = $tmp1865;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1865));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1866));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1878));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1876));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1874));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1869));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultCleanup1864));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1864));
        }
        $tmp1829 = -1;
        goto $l1827;
        $l1827:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1849));
        defaultInit1849 = NULL;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1864));
        defaultCleanup1864 = NULL;
        switch ($tmp1829) {
            case -1: goto $l1880;
        }
        $l1880:;
    }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$601_91884 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1885;
    panda$collections$ImmutableArray* entries1887 = NULL;
    panda$collections$Array* result1892 = NULL;
    panda$collections$Array* $tmp1893;
    panda$collections$Array* $tmp1894;
    panda$core$String* currentPackage1896 = NULL;
    panda$core$String* $tmp1897;
    panda$collections$HashMap* aliases1899 = NULL;
    panda$collections$HashMap* $tmp1900;
    panda$collections$HashMap* $tmp1901;
    panda$collections$Iterator* Iter$606$171906 = NULL;
    panda$collections$Iterator* $tmp1907;
    panda$collections$Iterator* $tmp1908;
    org$pandalanguage$pandac$ASTNode* e1924 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1925;
    panda$core$Object* $tmp1926;
    org$pandalanguage$pandac$ASTNode* $match$607_211934 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1935;
    panda$core$String* name1937 = NULL;
    panda$core$String* $tmp1939;
    panda$core$String* $tmp1940;
    panda$core$String* fullName1942 = NULL;
    panda$core$String$Index$nullable idx1947;
    panda$core$String* alias1950 = NULL;
    panda$core$String* $tmp1951;
    panda$core$String* $tmp1952;
    panda$core$String* $tmp1953;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1954;
    panda$core$String* $tmp1957;
    panda$core$String* $tmp1958;
    org$pandalanguage$pandac$Position position1961;
    org$pandalanguage$pandac$ASTNode* dc1963 = NULL;
    panda$collections$ImmutableArray* annotations1965 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1967;
    panda$core$String* name1969 = NULL;
    panda$collections$ImmutableArray* generics1971 = NULL;
    panda$collections$ImmutableArray* supertypes1973 = NULL;
    panda$collections$ImmutableArray* members1975 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl1980 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1981;
    org$pandalanguage$pandac$ClassDecl* $tmp1982;
    org$pandalanguage$pandac$Position position1986;
    org$pandalanguage$pandac$ASTNode* dc1988 = NULL;
    panda$collections$ImmutableArray* annotations1990 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1992;
    panda$core$String* rawName1994 = NULL;
    panda$collections$ImmutableArray* parameters1996 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType1998 = NULL;
    panda$collections$ImmutableArray* statements2000 = NULL;
    panda$core$String* name2005 = NULL;
    panda$core$String* $tmp2011;
    panda$core$String* $tmp2012;
    panda$collections$Array* mainParameters2014 = NULL;
    panda$collections$Array* $tmp2015;
    panda$collections$Array* $tmp2016;
    panda$collections$Array* mainStatements2018 = NULL;
    panda$collections$Array* $tmp2019;
    panda$collections$Array* $tmp2020;
    panda$collections$Array* mainArguments2022 = NULL;
    panda$collections$Array* $tmp2023;
    panda$collections$Array* $tmp2024;
    panda$collections$Iterator* Iter$636$332029 = NULL;
    panda$collections$Iterator* $tmp2030;
    panda$collections$Iterator* $tmp2031;
    org$pandalanguage$pandac$ASTNode* p2047 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2048;
    panda$core$Object* $tmp2049;
    org$pandalanguage$pandac$ASTNode* $match$637_372057 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2058;
    org$pandalanguage$pandac$Position position2060;
    panda$core$String* name2062 = NULL;
    org$pandalanguage$pandac$ASTNode* type2064 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2066;
    org$pandalanguage$pandac$Type* $tmp2068;
    org$pandalanguage$pandac$ASTNode* $tmp2070;
    org$pandalanguage$pandac$ASTNode* bareConstruct2075 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2076;
    org$pandalanguage$pandac$ASTNode* $tmp2077;
    org$pandalanguage$pandac$ASTNode* $tmp2079;
    panda$collections$ImmutableArray* $tmp2082;
    org$pandalanguage$pandac$ASTNode* $tmp2084;
    org$pandalanguage$pandac$ASTNode* $tmp2086;
    panda$collections$ImmutableArray* $tmp2088;
    org$pandalanguage$pandac$Type* returnType2090 = NULL;
    org$pandalanguage$pandac$Type* $tmp2091;
    org$pandalanguage$pandac$Type* $tmp2092;
    org$pandalanguage$pandac$Type* $tmp2093;
    org$pandalanguage$pandac$Type* $tmp2095;
    org$pandalanguage$pandac$Type* $tmp2096;
    org$pandalanguage$pandac$Type* $tmp2097;
    org$pandalanguage$pandac$MethodDecl* bareMain2099 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2100;
    org$pandalanguage$pandac$MethodDecl* $tmp2101;
    org$pandalanguage$pandac$Position $tmp2103;
    org$pandalanguage$pandac$Annotations* $tmp2104;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2106;
    panda$collections$ImmutableArray* $tmp2108;
    panda$core$String* $tmp2111;
    panda$core$String* $tmp2112;
    panda$core$Object* $tmp2113;
    org$pandalanguage$pandac$MethodDecl* m2116 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2117;
    org$pandalanguage$pandac$MethodDecl* $tmp2118;
    panda$core$Object* $tmp2120;
    org$pandalanguage$pandac$Position position2125;
    org$pandalanguage$pandac$ASTNode* dc2127 = NULL;
    panda$collections$ImmutableArray* annotations2129 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl2131 = NULL;
    panda$collections$ListView* $returnValue2136;
    panda$collections$ListView* $tmp2137;
    int $tmp1883;
    {
        $tmp1885 = p_file;
        $match$601_91884 = $tmp1885;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1885));
        panda$core$Bit $tmp1886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$601_91884->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1886.value) {
        {
            panda$collections$ImmutableArray** $tmp1888 = ((panda$collections$ImmutableArray**) ((char*) $match$601_91884->$data + 0));
            entries1887 = *$tmp1888;
            int $tmp1891;
            {
                panda$collections$Array* $tmp1895 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1895);
                $tmp1894 = $tmp1895;
                $tmp1893 = $tmp1894;
                result1892 = $tmp1893;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1893));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1894));
                $tmp1897 = &$s1898;
                currentPackage1896 = $tmp1897;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1897));
                panda$collections$HashMap* $tmp1902 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp1902);
                $tmp1901 = $tmp1902;
                $tmp1900 = $tmp1901;
                aliases1899 = $tmp1900;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1900));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1901));
                {
                    int $tmp1905;
                    {
                        ITable* $tmp1909 = ((panda$collections$Iterable*) entries1887)->$class->itable;
                        while ($tmp1909->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1909 = $tmp1909->next;
                        }
                        $fn1911 $tmp1910 = $tmp1909->methods[0];
                        panda$collections$Iterator* $tmp1912 = $tmp1910(((panda$collections$Iterable*) entries1887));
                        $tmp1908 = $tmp1912;
                        $tmp1907 = $tmp1908;
                        Iter$606$171906 = $tmp1907;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1907));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1908));
                        $l1913:;
                        ITable* $tmp1916 = Iter$606$171906->$class->itable;
                        while ($tmp1916->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1916 = $tmp1916->next;
                        }
                        $fn1918 $tmp1917 = $tmp1916->methods[0];
                        panda$core$Bit $tmp1919 = $tmp1917(Iter$606$171906);
                        panda$core$Bit $tmp1920 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1919);
                        bool $tmp1915 = $tmp1920.value;
                        if (!$tmp1915) goto $l1914;
                        {
                            int $tmp1923;
                            {
                                ITable* $tmp1927 = Iter$606$171906->$class->itable;
                                while ($tmp1927->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1927 = $tmp1927->next;
                                }
                                $fn1929 $tmp1928 = $tmp1927->methods[1];
                                panda$core$Object* $tmp1930 = $tmp1928(Iter$606$171906);
                                $tmp1926 = $tmp1930;
                                $tmp1925 = ((org$pandalanguage$pandac$ASTNode*) $tmp1926);
                                e1924 = $tmp1925;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1925));
                                panda$core$Panda$unref$panda$core$Object($tmp1926);
                                int $tmp1933;
                                {
                                    $tmp1935 = e1924;
                                    $match$607_211934 = $tmp1935;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1935));
                                    panda$core$Bit $tmp1936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$607_211934->$rawValue, ((panda$core$Int64) { 30 }));
                                    if ($tmp1936.value) {
                                    {
                                        panda$core$String** $tmp1938 = ((panda$core$String**) ((char*) $match$607_211934->$data + 16));
                                        name1937 = *$tmp1938;
                                        {
                                            $tmp1939 = currentPackage1896;
                                            $tmp1940 = name1937;
                                            currentPackage1896 = $tmp1940;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1940));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1939));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$607_211934->$rawValue, ((panda$core$Int64) { 46 }));
                                    if ($tmp1941.value) {
                                    {
                                        panda$core$String** $tmp1943 = ((panda$core$String**) ((char*) $match$607_211934->$data + 16));
                                        fullName1942 = *$tmp1943;
                                        int $tmp1946;
                                        {
                                            panda$core$String$Index$nullable $tmp1949 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName1942, &$s1948);
                                            idx1947 = $tmp1949;
                                            memset(&alias1950, 0, sizeof(alias1950));
                                            if (((panda$core$Bit) { idx1947.nonnull }).value) {
                                            {
                                                {
                                                    $tmp1951 = alias1950;
                                                    panda$core$String$Index $tmp1955 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName1942, ((panda$core$String$Index) idx1947.value));
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1954, ((panda$core$String$Index$nullable) { $tmp1955, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                                    panda$core$String* $tmp1956 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName1942, $tmp1954);
                                                    $tmp1953 = $tmp1956;
                                                    $tmp1952 = $tmp1953;
                                                    alias1950 = $tmp1952;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1952));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1953));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1951));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp1957 = alias1950;
                                                    $tmp1958 = fullName1942;
                                                    alias1950 = $tmp1958;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1958));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1957));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1899, ((panda$collections$Key*) alias1950), ((panda$core$Object*) fullName1942));
                                        }
                                        $tmp1946 = -1;
                                        goto $l1944;
                                        $l1944:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias1950));
                                        switch ($tmp1946) {
                                            case -1: goto $l1959;
                                        }
                                        $l1959:;
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$607_211934->$rawValue, ((panda$core$Int64) { 11 }));
                                    if ($tmp1960.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp1962 = ((org$pandalanguage$pandac$Position*) ((char*) $match$607_211934->$data + 0));
                                        position1961 = *$tmp1962;
                                        org$pandalanguage$pandac$ASTNode** $tmp1964 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$607_211934->$data + 16));
                                        dc1963 = *$tmp1964;
                                        panda$collections$ImmutableArray** $tmp1966 = ((panda$collections$ImmutableArray**) ((char*) $match$607_211934->$data + 24));
                                        annotations1965 = *$tmp1966;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp1968 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$607_211934->$data + 32));
                                        kind1967 = *$tmp1968;
                                        panda$core$String** $tmp1970 = ((panda$core$String**) ((char*) $match$607_211934->$data + 40));
                                        name1969 = *$tmp1970;
                                        panda$collections$ImmutableArray** $tmp1972 = ((panda$collections$ImmutableArray**) ((char*) $match$607_211934->$data + 48));
                                        generics1971 = *$tmp1972;
                                        panda$collections$ImmutableArray** $tmp1974 = ((panda$collections$ImmutableArray**) ((char*) $match$607_211934->$data + 56));
                                        supertypes1973 = *$tmp1974;
                                        panda$collections$ImmutableArray** $tmp1976 = ((panda$collections$ImmutableArray**) ((char*) $match$607_211934->$data + 64));
                                        members1975 = *$tmp1976;
                                        int $tmp1979;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp1983 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1899), currentPackage1896, position1961, dc1963, annotations1965, kind1967, name1969, generics1971, supertypes1973, members1975);
                                            $tmp1982 = $tmp1983;
                                            $tmp1981 = $tmp1982;
                                            cl1980 = $tmp1981;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1981));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1982));
                                            if (((panda$core$Bit) { cl1980 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl1980, result1892);
                                            }
                                            }
                                        }
                                        $tmp1979 = -1;
                                        goto $l1977;
                                        $l1977:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1980));
                                        cl1980 = NULL;
                                        switch ($tmp1979) {
                                            case -1: goto $l1984;
                                        }
                                        $l1984:;
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$607_211934->$rawValue, ((panda$core$Int64) { 26 }));
                                    if ($tmp1985.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp1987 = ((org$pandalanguage$pandac$Position*) ((char*) $match$607_211934->$data + 0));
                                        position1986 = *$tmp1987;
                                        org$pandalanguage$pandac$ASTNode** $tmp1989 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$607_211934->$data + 16));
                                        dc1988 = *$tmp1989;
                                        panda$collections$ImmutableArray** $tmp1991 = ((panda$collections$ImmutableArray**) ((char*) $match$607_211934->$data + 24));
                                        annotations1990 = *$tmp1991;
                                        org$pandalanguage$pandac$MethodDecl$Kind* $tmp1993 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$607_211934->$data + 32));
                                        kind1992 = *$tmp1993;
                                        panda$core$String** $tmp1995 = ((panda$core$String**) ((char*) $match$607_211934->$data + 40));
                                        rawName1994 = *$tmp1995;
                                        panda$collections$ImmutableArray** $tmp1997 = ((panda$collections$ImmutableArray**) ((char*) $match$607_211934->$data + 48));
                                        parameters1996 = *$tmp1997;
                                        org$pandalanguage$pandac$ASTNode** $tmp1999 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$607_211934->$data + 56));
                                        rawReturnType1998 = *$tmp1999;
                                        panda$collections$ImmutableArray** $tmp2001 = ((panda$collections$ImmutableArray**) ((char*) $match$607_211934->$data + 64));
                                        statements2000 = *$tmp2001;
                                        int $tmp2004;
                                        {
                                            org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases1899), ((panda$collections$List*) result1892));
                                            memset(&name2005, 0, sizeof(name2005));
                                            panda$core$Bit $tmp2007 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(rawName1994, &$s2006);
                                            if ($tmp2007.value) {
                                            {
                                                int $tmp2010;
                                                {
                                                    {
                                                        $tmp2011 = name2005;
                                                        $tmp2012 = &$s2013;
                                                        name2005 = $tmp2012;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2012));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2011));
                                                    }
                                                    panda$collections$Array* $tmp2017 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2017);
                                                    $tmp2016 = $tmp2017;
                                                    $tmp2015 = $tmp2016;
                                                    mainParameters2014 = $tmp2015;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2015));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2016));
                                                    panda$collections$Array* $tmp2021 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2021);
                                                    $tmp2020 = $tmp2021;
                                                    $tmp2019 = $tmp2020;
                                                    mainStatements2018 = $tmp2019;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2019));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2020));
                                                    panda$collections$Array* $tmp2025 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2025);
                                                    $tmp2024 = $tmp2025;
                                                    $tmp2023 = $tmp2024;
                                                    mainArguments2022 = $tmp2023;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2023));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2024));
                                                    {
                                                        int $tmp2028;
                                                        {
                                                            ITable* $tmp2032 = ((panda$collections$Iterable*) parameters1996)->$class->itable;
                                                            while ($tmp2032->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                                                $tmp2032 = $tmp2032->next;
                                                            }
                                                            $fn2034 $tmp2033 = $tmp2032->methods[0];
                                                            panda$collections$Iterator* $tmp2035 = $tmp2033(((panda$collections$Iterable*) parameters1996));
                                                            $tmp2031 = $tmp2035;
                                                            $tmp2030 = $tmp2031;
                                                            Iter$636$332029 = $tmp2030;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2030));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2031));
                                                            $l2036:;
                                                            ITable* $tmp2039 = Iter$636$332029->$class->itable;
                                                            while ($tmp2039->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                $tmp2039 = $tmp2039->next;
                                                            }
                                                            $fn2041 $tmp2040 = $tmp2039->methods[0];
                                                            panda$core$Bit $tmp2042 = $tmp2040(Iter$636$332029);
                                                            panda$core$Bit $tmp2043 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2042);
                                                            bool $tmp2038 = $tmp2043.value;
                                                            if (!$tmp2038) goto $l2037;
                                                            {
                                                                int $tmp2046;
                                                                {
                                                                    ITable* $tmp2050 = Iter$636$332029->$class->itable;
                                                                    while ($tmp2050->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                        $tmp2050 = $tmp2050->next;
                                                                    }
                                                                    $fn2052 $tmp2051 = $tmp2050->methods[1];
                                                                    panda$core$Object* $tmp2053 = $tmp2051(Iter$636$332029);
                                                                    $tmp2049 = $tmp2053;
                                                                    $tmp2048 = ((org$pandalanguage$pandac$ASTNode*) $tmp2049);
                                                                    p2047 = $tmp2048;
                                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2048));
                                                                    panda$core$Panda$unref$panda$core$Object($tmp2049);
                                                                    int $tmp2056;
                                                                    {
                                                                        $tmp2058 = p2047;
                                                                        $match$637_372057 = $tmp2058;
                                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2058));
                                                                        panda$core$Bit $tmp2059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$637_372057->$rawValue, ((panda$core$Int64) { 31 }));
                                                                        if ($tmp2059.value) {
                                                                        {
                                                                            org$pandalanguage$pandac$Position* $tmp2061 = ((org$pandalanguage$pandac$Position*) ((char*) $match$637_372057->$data + 0));
                                                                            position2060 = *$tmp2061;
                                                                            panda$core$String** $tmp2063 = ((panda$core$String**) ((char*) $match$637_372057->$data + 16));
                                                                            name2062 = *$tmp2063;
                                                                            org$pandalanguage$pandac$ASTNode** $tmp2065 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$637_372057->$data + 24));
                                                                            type2064 = *$tmp2065;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2067 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                                                            org$pandalanguage$pandac$Type* $tmp2069 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type2064);
                                                                            $tmp2068 = $tmp2069;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp2067, name2062, $tmp2068);
                                                                            $tmp2066 = $tmp2067;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainParameters2014, ((panda$core$Object*) $tmp2066));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2066));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2068));
                                                                            org$pandalanguage$pandac$ASTNode* $tmp2071 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2071, ((panda$core$Int64) { 20 }), position2060, name2062);
                                                                            $tmp2070 = $tmp2071;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainArguments2022, ((panda$core$Object*) $tmp2070));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2070));
                                                                        }
                                                                        }
                                                                        else {
                                                                        {
                                                                            PANDA_ASSERT(((panda$core$Bit) { false }).value);
                                                                        }
                                                                        }
                                                                    }
                                                                    $tmp2056 = -1;
                                                                    goto $l2054;
                                                                    $l2054:;
                                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2058));
                                                                    switch ($tmp2056) {
                                                                        case -1: goto $l2072;
                                                                    }
                                                                    $l2072:;
                                                                }
                                                                $tmp2046 = -1;
                                                                goto $l2044;
                                                                $l2044:;
                                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p2047));
                                                                p2047 = NULL;
                                                                switch ($tmp2046) {
                                                                    case -1: goto $l2073;
                                                                }
                                                                $l2073:;
                                                            }
                                                            goto $l2036;
                                                            $l2037:;
                                                        }
                                                        $tmp2028 = -1;
                                                        goto $l2026;
                                                        $l2026:;
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$636$332029));
                                                        Iter$636$332029 = NULL;
                                                        switch ($tmp2028) {
                                                            case -1: goto $l2074;
                                                        }
                                                        $l2074:;
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp2078 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2080 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2080, ((panda$core$Int64) { 20 }), position1986, &$s2081);
                                                    $tmp2079 = $tmp2080;
                                                    panda$collections$ImmutableArray* $tmp2083 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                                                    panda$collections$ImmutableArray$init($tmp2083);
                                                    $tmp2082 = $tmp2083;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2078, ((panda$core$Int64) { 8 }), position1986, $tmp2079, $tmp2082);
                                                    $tmp2077 = $tmp2078;
                                                    $tmp2076 = $tmp2077;
                                                    bareConstruct2075 = $tmp2076;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2076));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2077));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2082));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2079));
                                                    org$pandalanguage$pandac$ASTNode* $tmp2085 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2087 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2087, ((panda$core$Int64) { 15 }), position1986, bareConstruct2075, name2005);
                                                    $tmp2086 = $tmp2087;
                                                    panda$collections$ImmutableArray* $tmp2089 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainArguments2022);
                                                    $tmp2088 = $tmp2089;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2085, ((panda$core$Int64) { 8 }), position1986, $tmp2086, $tmp2088);
                                                    $tmp2084 = $tmp2085;
                                                    panda$collections$Array$add$panda$collections$Array$T(mainStatements2018, ((panda$core$Object*) $tmp2084));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2084));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2088));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2086));
                                                    memset(&returnType2090, 0, sizeof(returnType2090));
                                                    if (((panda$core$Bit) { rawReturnType1998 != NULL }).value) {
                                                    {
                                                        {
                                                            $tmp2091 = returnType2090;
                                                            org$pandalanguage$pandac$Type* $tmp2094 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, rawReturnType1998);
                                                            $tmp2093 = $tmp2094;
                                                            $tmp2092 = $tmp2093;
                                                            returnType2090 = $tmp2092;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2092));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2093));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2091));
                                                        }
                                                    }
                                                    }
                                                    else {
                                                    {
                                                        {
                                                            $tmp2095 = returnType2090;
                                                            org$pandalanguage$pandac$Type* $tmp2098 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                            $tmp2097 = $tmp2098;
                                                            $tmp2096 = $tmp2097;
                                                            returnType2090 = $tmp2096;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2096));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2097));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2095));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$MethodDecl* $tmp2102 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                                                    org$pandalanguage$pandac$Position$init(&$tmp2103);
                                                    org$pandalanguage$pandac$Annotations* $tmp2105 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                                                    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2105, ((panda$core$Int64) { 16 }));
                                                    $tmp2104 = $tmp2105;
                                                    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2106, ((panda$core$Int64) { 0 }));
                                                    panda$collections$ImmutableArray* $tmp2109 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainStatements2018);
                                                    $tmp2108 = $tmp2109;
                                                    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2102, self->bareCodeClass, $tmp2103, NULL, $tmp2104, $tmp2106, &$s2107, mainParameters2014, returnType2090, $tmp2108);
                                                    $tmp2101 = $tmp2102;
                                                    $tmp2100 = $tmp2101;
                                                    bareMain2099 = $tmp2100;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2100));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2101));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2108));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2104));
                                                    panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) bareMain2099));
                                                }
                                                $tmp2010 = -1;
                                                goto $l2008;
                                                $l2008:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainParameters2014));
                                                mainParameters2014 = NULL;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainStatements2018));
                                                mainStatements2018 = NULL;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainArguments2022));
                                                mainArguments2022 = NULL;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareConstruct2075));
                                                bareConstruct2075 = NULL;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType2090));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareMain2099));
                                                bareMain2099 = NULL;
                                                switch ($tmp2010) {
                                                    case -1: goto $l2110;
                                                }
                                                $l2110:;
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2111 = name2005;
                                                    $tmp2112 = rawName1994;
                                                    name2005 = $tmp2112;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2112));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2111));
                                                }
                                            }
                                            }
                                            panda$core$Object* $tmp2115 = (($fn2114) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp2113 = $tmp2115;
                                            panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2113)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2113);
                                            org$pandalanguage$pandac$MethodDecl* $tmp2119 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, self->bareCodeClass, position1986, dc1988, annotations1990, kind1992, name2005, parameters1996, rawReturnType1998, statements2000);
                                            $tmp2118 = $tmp2119;
                                            $tmp2117 = $tmp2118;
                                            m2116 = $tmp2117;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2117));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2118));
                                            panda$core$Object* $tmp2122 = (($fn2121) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp2120 = $tmp2122;
                                            panda$collections$Stack$pop$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2120)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2120);
                                            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) m2116));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) m2116));
                                        }
                                        $tmp2004 = -1;
                                        goto $l2002;
                                        $l2002:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2005));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2116));
                                        m2116 = NULL;
                                        switch ($tmp2004) {
                                            case -1: goto $l2123;
                                        }
                                        $l2123:;
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp2124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$607_211934->$rawValue, ((panda$core$Int64) { 16 }));
                                    if ($tmp2124.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2126 = ((org$pandalanguage$pandac$Position*) ((char*) $match$607_211934->$data + 0));
                                        position2125 = *$tmp2126;
                                        org$pandalanguage$pandac$ASTNode** $tmp2128 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$607_211934->$data + 16));
                                        dc2127 = *$tmp2128;
                                        panda$collections$ImmutableArray** $tmp2130 = ((panda$collections$ImmutableArray**) ((char*) $match$607_211934->$data + 24));
                                        annotations2129 = *$tmp2130;
                                        org$pandalanguage$pandac$ASTNode** $tmp2132 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$607_211934->$data + 32));
                                        varDecl2131 = *$tmp2132;
                                        org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases1899), ((panda$collections$List*) result1892));
                                        org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, self->bareCodeClass, position2125, dc2127, annotations2129, varDecl2131);
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
                                $tmp1933 = -1;
                                goto $l1931;
                                $l1931:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1935));
                                switch ($tmp1933) {
                                    case -1: goto $l2133;
                                }
                                $l2133:;
                            }
                            $tmp1923 = -1;
                            goto $l1921;
                            $l1921:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1924));
                            e1924 = NULL;
                            switch ($tmp1923) {
                                case -1: goto $l2134;
                            }
                            $l2134:;
                        }
                        goto $l1913;
                        $l1914:;
                    }
                    $tmp1905 = -1;
                    goto $l1903;
                    $l1903:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$606$171906));
                    Iter$606$171906 = NULL;
                    switch ($tmp1905) {
                        case -1: goto $l2135;
                    }
                    $l2135:;
                }
                $tmp2137 = ((panda$collections$ListView*) result1892);
                $returnValue2136 = $tmp2137;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2137));
                $tmp1891 = 0;
                goto $l1889;
                $l2138:;
                $tmp1883 = 0;
                goto $l1881;
                $l2139:;
                return $returnValue2136;
            }
            $l1889:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1892));
            result1892 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1896));
            currentPackage1896 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases1899));
            aliases1899 = NULL;
            switch ($tmp1891) {
                case 0: goto $l2138;
            }
            $l2141:;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp1883 = -1;
    goto $l1881;
    $l1881:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1885));
    switch ($tmp1883) {
        case 0: goto $l2139;
        case -1: goto $l2142;
    }
    $l2142:;
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp2145;
    {
    }
    $tmp2145 = -1;
    goto $l2143;
    $l2143:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2145) {
        case -1: goto $l2146;
    }
    $l2146:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->bareCodeClass));
}

