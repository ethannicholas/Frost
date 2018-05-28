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
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "org/pandalanguage/pandac/Alias.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "panda/io/File.h"
#include "panda/collections/MapView.h"
#include "panda/collections/Stack.h"
#include "panda/collections/List.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/HashMap.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/Key.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Scanner$cleanup, org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit, org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT} };

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
typedef panda$collections$Iterator* (*$fn1178)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1185)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1196)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1228)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1247)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1254)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1265)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1301)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1314)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1457)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1464)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1475)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1539)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1546)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1557)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1589)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn1595)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1604)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1615)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1622)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1633)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1644)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1647)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1682)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1689)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1700)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1717)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1722)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1738)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1745)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1756)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1768)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1848)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1855)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1866)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1880)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1896)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1903)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1914)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1935)(panda$core$Weak*);
typedef void (*$fn1939)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2006)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2013)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2024)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2131)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2138)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2149)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2213)(panda$core$Weak*);
typedef panda$core$Object* (*$fn2220)(panda$core$Weak*);

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
static panda$core$String $s1165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x6f\x6e\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x27", 30, -1250916154819313721, NULL };
static panda$core$String $s1320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x68\x61\x76\x65\x20\x61\x20\x62\x6f\x64\x79", 16, -7652461387112275530, NULL };
static panda$core$String $s1399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1719 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s1780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s1948 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static panda$core$String $s2204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };

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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType182));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters146));
            parameters146 = NULL;
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
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field483));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type456));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name455));
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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations387));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment371));
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
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawGenerics, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
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
    panda$collections$Array* generics1150 = NULL;
    panda$collections$Array* $tmp1154;
    panda$collections$Array* $tmp1155;
    panda$collections$Array* $tmp1156;
    panda$core$String* fullName1158 = NULL;
    panda$core$String* $tmp1159;
    panda$core$String* $tmp1160;
    panda$core$String* $tmp1161;
    panda$core$String* $tmp1162;
    panda$core$String* $tmp1163;
    panda$collections$Iterator* Iter$356$131173 = NULL;
    panda$collections$Iterator* $tmp1174;
    panda$collections$Iterator* $tmp1175;
    org$pandalanguage$pandac$ASTNode* p1191 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1192;
    panda$core$Object* $tmp1193;
    panda$core$String* parameterName1198 = NULL;
    org$pandalanguage$pandac$Type* bound1199 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$359_171203 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1204;
    panda$core$String* id1206 = NULL;
    panda$core$String* $tmp1208;
    panda$core$String* $tmp1209;
    org$pandalanguage$pandac$Type* $tmp1210;
    org$pandalanguage$pandac$Type* $tmp1211;
    org$pandalanguage$pandac$Type* $tmp1212;
    panda$core$String* id1215 = NULL;
    org$pandalanguage$pandac$ASTNode* type1217 = NULL;
    panda$core$String* $tmp1219;
    panda$core$String* $tmp1220;
    org$pandalanguage$pandac$Type* $tmp1221;
    org$pandalanguage$pandac$Type* $tmp1222;
    org$pandalanguage$pandac$Type* $tmp1223;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1226;
    panda$collections$Array* $tmp1233;
    panda$collections$Array* $tmp1234;
    panda$collections$Array* parameters1235 = NULL;
    panda$collections$Array* $tmp1236;
    panda$collections$Array* $tmp1237;
    panda$collections$Iterator* Iter$377$91242 = NULL;
    panda$collections$Iterator* $tmp1243;
    panda$collections$Iterator* $tmp1244;
    org$pandalanguage$pandac$ASTNode* p1260 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1261;
    panda$core$Object* $tmp1262;
    org$pandalanguage$pandac$ASTNode* $match$378_131270 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1271;
    panda$core$String* name1273 = NULL;
    org$pandalanguage$pandac$ASTNode* type1275 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1277;
    org$pandalanguage$pandac$Type* $tmp1279;
    org$pandalanguage$pandac$Type* returnType1284 = NULL;
    org$pandalanguage$pandac$Type* $tmp1285;
    org$pandalanguage$pandac$Type* $tmp1286;
    org$pandalanguage$pandac$Type* $tmp1287;
    org$pandalanguage$pandac$Type* $tmp1289;
    org$pandalanguage$pandac$Type* $tmp1290;
    org$pandalanguage$pandac$Type* $tmp1291;
    org$pandalanguage$pandac$Type* $tmp1296;
    panda$core$Object* $tmp1300;
    panda$core$Object* $tmp1313;
    panda$core$String* $tmp1316;
    panda$core$String* $tmp1317;
    org$pandalanguage$pandac$MethodDecl* $returnValue1322;
    org$pandalanguage$pandac$MethodDecl* $tmp1323;
    org$pandalanguage$pandac$MethodDecl* $tmp1324;
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
        memset(&generics1150, 0, sizeof(generics1150));
        if (((panda$core$Bit) { p_rawGenerics != NULL }).value) {
        {
            int $tmp1153;
            {
                {
                    $tmp1154 = generics1150;
                    panda$collections$Array* $tmp1157 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1157);
                    $tmp1156 = $tmp1157;
                    $tmp1155 = $tmp1156;
                    generics1150 = $tmp1155;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1155));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1156));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1154));
                }
                panda$core$String* $tmp1164 = panda$core$String$convert$R$panda$core$String(p_owner->name);
                $tmp1163 = $tmp1164;
                panda$core$String* $tmp1166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1163, &$s1165);
                $tmp1162 = $tmp1166;
                panda$core$String* $tmp1167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1162, p_name);
                $tmp1161 = $tmp1167;
                panda$core$String* $tmp1169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1161, &$s1168);
                $tmp1160 = $tmp1169;
                $tmp1159 = $tmp1160;
                fullName1158 = $tmp1159;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1159));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1160));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1161));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1162));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1163));
                {
                    int $tmp1172;
                    {
                        ITable* $tmp1176 = ((panda$collections$Iterable*) p_rawGenerics)->$class->itable;
                        while ($tmp1176->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1176 = $tmp1176->next;
                        }
                        $fn1178 $tmp1177 = $tmp1176->methods[0];
                        panda$collections$Iterator* $tmp1179 = $tmp1177(((panda$collections$Iterable*) p_rawGenerics));
                        $tmp1175 = $tmp1179;
                        $tmp1174 = $tmp1175;
                        Iter$356$131173 = $tmp1174;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1174));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1175));
                        $l1180:;
                        ITable* $tmp1183 = Iter$356$131173->$class->itable;
                        while ($tmp1183->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1183 = $tmp1183->next;
                        }
                        $fn1185 $tmp1184 = $tmp1183->methods[0];
                        panda$core$Bit $tmp1186 = $tmp1184(Iter$356$131173);
                        panda$core$Bit $tmp1187 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1186);
                        bool $tmp1182 = $tmp1187.value;
                        if (!$tmp1182) goto $l1181;
                        {
                            int $tmp1190;
                            {
                                ITable* $tmp1194 = Iter$356$131173->$class->itable;
                                while ($tmp1194->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1194 = $tmp1194->next;
                                }
                                $fn1196 $tmp1195 = $tmp1194->methods[1];
                                panda$core$Object* $tmp1197 = $tmp1195(Iter$356$131173);
                                $tmp1193 = $tmp1197;
                                $tmp1192 = ((org$pandalanguage$pandac$ASTNode*) $tmp1193);
                                p1191 = $tmp1192;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1192));
                                panda$core$Panda$unref$panda$core$Object($tmp1193);
                                memset(&parameterName1198, 0, sizeof(parameterName1198));
                                memset(&bound1199, 0, sizeof(bound1199));
                                int $tmp1202;
                                {
                                    $tmp1204 = p1191;
                                    $match$359_171203 = $tmp1204;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1204));
                                    panda$core$Bit $tmp1205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$359_171203->$rawValue, ((panda$core$Int64) { 20 }));
                                    if ($tmp1205.value) {
                                    {
                                        panda$core$String** $tmp1207 = ((panda$core$String**) ((char*) $match$359_171203->$data + 16));
                                        id1206 = *$tmp1207;
                                        {
                                            $tmp1208 = parameterName1198;
                                            $tmp1209 = id1206;
                                            parameterName1198 = $tmp1209;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1209));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1208));
                                        }
                                        {
                                            $tmp1210 = bound1199;
                                            org$pandalanguage$pandac$Type* $tmp1213 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                            $tmp1212 = $tmp1213;
                                            $tmp1211 = $tmp1212;
                                            bound1199 = $tmp1211;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1211));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1212));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1210));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$359_171203->$rawValue, ((panda$core$Int64) { 44 }));
                                    if ($tmp1214.value) {
                                    {
                                        panda$core$String** $tmp1216 = ((panda$core$String**) ((char*) $match$359_171203->$data + 16));
                                        id1215 = *$tmp1216;
                                        org$pandalanguage$pandac$ASTNode** $tmp1218 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$359_171203->$data + 24));
                                        type1217 = *$tmp1218;
                                        {
                                            $tmp1219 = parameterName1198;
                                            $tmp1220 = id1215;
                                            parameterName1198 = $tmp1220;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1220));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1219));
                                        }
                                        {
                                            $tmp1221 = bound1199;
                                            org$pandalanguage$pandac$Type* $tmp1224 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1217);
                                            $tmp1223 = $tmp1224;
                                            $tmp1222 = $tmp1223;
                                            bound1199 = $tmp1222;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1222));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1223));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1221));
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
                                $tmp1202 = -1;
                                goto $l1200;
                                $l1200:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1204));
                                switch ($tmp1202) {
                                    case -1: goto $l1225;
                                }
                                $l1225:;
                                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1227 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                                org$pandalanguage$pandac$Position $tmp1229 = (($fn1228) p1191->$class->vtable[2])(p1191);
                                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1227, $tmp1229, fullName1158, parameterName1198, bound1199);
                                $tmp1226 = $tmp1227;
                                panda$collections$Array$add$panda$collections$Array$T(generics1150, ((panda$core$Object*) $tmp1226));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1226));
                            }
                            $tmp1190 = -1;
                            goto $l1188;
                            $l1188:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1199));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameterName1198));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1191));
                            p1191 = NULL;
                            switch ($tmp1190) {
                                case -1: goto $l1230;
                            }
                            $l1230:;
                        }
                        goto $l1180;
                        $l1181:;
                    }
                    $tmp1172 = -1;
                    goto $l1170;
                    $l1170:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$356$131173));
                    Iter$356$131173 = NULL;
                    switch ($tmp1172) {
                        case -1: goto $l1231;
                    }
                    $l1231:;
                }
            }
            $tmp1153 = -1;
            goto $l1151;
            $l1151:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1158));
            fullName1158 = NULL;
            switch ($tmp1153) {
                case -1: goto $l1232;
            }
            $l1232:;
        }
        }
        else {
        {
            {
                $tmp1233 = generics1150;
                $tmp1234 = NULL;
                generics1150 = $tmp1234;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1234));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1233));
            }
        }
        }
        panda$collections$Array* $tmp1238 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1238);
        $tmp1237 = $tmp1238;
        $tmp1236 = $tmp1237;
        parameters1235 = $tmp1236;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1236));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1237));
        {
            int $tmp1241;
            {
                ITable* $tmp1245 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1245->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1245 = $tmp1245->next;
                }
                $fn1247 $tmp1246 = $tmp1245->methods[0];
                panda$collections$Iterator* $tmp1248 = $tmp1246(((panda$collections$Iterable*) p_rawParameters));
                $tmp1244 = $tmp1248;
                $tmp1243 = $tmp1244;
                Iter$377$91242 = $tmp1243;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1243));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1244));
                $l1249:;
                ITable* $tmp1252 = Iter$377$91242->$class->itable;
                while ($tmp1252->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1252 = $tmp1252->next;
                }
                $fn1254 $tmp1253 = $tmp1252->methods[0];
                panda$core$Bit $tmp1255 = $tmp1253(Iter$377$91242);
                panda$core$Bit $tmp1256 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1255);
                bool $tmp1251 = $tmp1256.value;
                if (!$tmp1251) goto $l1250;
                {
                    int $tmp1259;
                    {
                        ITable* $tmp1263 = Iter$377$91242->$class->itable;
                        while ($tmp1263->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1263 = $tmp1263->next;
                        }
                        $fn1265 $tmp1264 = $tmp1263->methods[1];
                        panda$core$Object* $tmp1266 = $tmp1264(Iter$377$91242);
                        $tmp1262 = $tmp1266;
                        $tmp1261 = ((org$pandalanguage$pandac$ASTNode*) $tmp1262);
                        p1260 = $tmp1261;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1261));
                        panda$core$Panda$unref$panda$core$Object($tmp1262);
                        int $tmp1269;
                        {
                            $tmp1271 = p1260;
                            $match$378_131270 = $tmp1271;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1271));
                            panda$core$Bit $tmp1272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$378_131270->$rawValue, ((panda$core$Int64) { 31 }));
                            if ($tmp1272.value) {
                            {
                                panda$core$String** $tmp1274 = ((panda$core$String**) ((char*) $match$378_131270->$data + 16));
                                name1273 = *$tmp1274;
                                org$pandalanguage$pandac$ASTNode** $tmp1276 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$378_131270->$data + 24));
                                type1275 = *$tmp1276;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1278 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1280 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1275);
                                $tmp1279 = $tmp1280;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1278, name1273, $tmp1279);
                                $tmp1277 = $tmp1278;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1235, ((panda$core$Object*) $tmp1277));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1277));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1279));
                            }
                            }
                            else {
                            {
                                PANDA_ASSERT(((panda$core$Bit) { false }).value);
                            }
                            }
                        }
                        $tmp1269 = -1;
                        goto $l1267;
                        $l1267:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1271));
                        switch ($tmp1269) {
                            case -1: goto $l1281;
                        }
                        $l1281:;
                    }
                    $tmp1259 = -1;
                    goto $l1257;
                    $l1257:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1260));
                    p1260 = NULL;
                    switch ($tmp1259) {
                        case -1: goto $l1282;
                    }
                    $l1282:;
                }
                goto $l1249;
                $l1250:;
            }
            $tmp1241 = -1;
            goto $l1239;
            $l1239:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$377$91242));
            Iter$377$91242 = NULL;
            switch ($tmp1241) {
                case -1: goto $l1283;
            }
            $l1283:;
        }
        memset(&returnType1284, 0, sizeof(returnType1284));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1285 = returnType1284;
                org$pandalanguage$pandac$Type* $tmp1288 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1287 = $tmp1288;
                $tmp1286 = $tmp1287;
                returnType1284 = $tmp1286;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1286));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1287));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1285));
            }
        }
        }
        else {
        {
            {
                $tmp1289 = returnType1284;
                org$pandalanguage$pandac$Type* $tmp1292 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1291 = $tmp1292;
                $tmp1290 = $tmp1291;
                returnType1284 = $tmp1290;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1290));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1291));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1289));
            }
        }
        }
        panda$core$Bit $tmp1294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
        bool $tmp1293 = $tmp1294.value;
        if (!$tmp1293) goto $l1295;
        org$pandalanguage$pandac$Type* $tmp1297 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1296 = $tmp1297;
        panda$core$Bit $tmp1298 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1284, $tmp1296);
        $tmp1293 = $tmp1298.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1296));
        $l1295:;
        panda$core$Bit $tmp1299 = { $tmp1293 };
        if ($tmp1299.value) {
        {
            panda$core$Object* $tmp1302 = (($fn1301) self->compiler->$class->vtable[2])(self->compiler);
            $tmp1300 = $tmp1302;
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1300), p_position, &$s1303);
            panda$core$Panda$unref$panda$core$Object($tmp1300);
        }
        }
        bool $tmp1304 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1304) goto $l1305;
        panda$core$Bit $tmp1306 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1136, p_statements);
        $tmp1304 = $tmp1306.value;
        $l1305:;
        panda$core$Bit $tmp1307 = { $tmp1304 };
        if ($tmp1307.value) {
        {
            panda$core$Int64 $tmp1308 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1136->flags, ((panda$core$Int64) { 1024 }));
            annotations1136->flags = $tmp1308;
        }
        }
        if (((panda$core$Bit) { p_statements == NULL }).value) {
        {
            panda$core$Bit $tmp1309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1309.value) {
            {
                panda$core$Int64 $tmp1310 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1136->flags, ((panda$core$Int64) { 512 }));
                annotations1136->flags = $tmp1310;
            }
            }
            else {
            panda$core$Int64 $tmp1311 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1136->flags, ((panda$core$Int64) { 512 }));
            panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1311, ((panda$core$Int64) { 0 }));
            if ($tmp1312.value) {
            {
                panda$core$Object* $tmp1315 = (($fn1314) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1313 = $tmp1315;
                panda$core$String* $tmp1319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1318, p_name);
                $tmp1317 = $tmp1319;
                panda$core$String* $tmp1321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1317, &$s1320);
                $tmp1316 = $tmp1321;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1313), p_position, $tmp1316);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1316));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1317));
                panda$core$Panda$unref$panda$core$Object($tmp1313);
            }
            }
            }
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1325 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1325, p_owner, p_position, doccomment1120, annotations1136, p_kind, p_name, generics1150, parameters1235, returnType1284, p_statements);
        $tmp1324 = $tmp1325;
        $tmp1323 = $tmp1324;
        $returnValue1322 = $tmp1323;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1323));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1324));
        $tmp1119 = 0;
        goto $l1117;
        $l1326:;
        return $returnValue1322;
    }
    $l1117:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1284));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1235));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics1150));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1136));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1120));
    annotations1136 = NULL;
    parameters1235 = NULL;
    switch ($tmp1119) {
        case 0: goto $l1326;
    }
    $l1328:;
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$411_91332 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1333;
    org$pandalanguage$pandac$Position position1335;
    org$pandalanguage$pandac$ASTNode* dc1337 = NULL;
    panda$collections$ImmutableArray* annotations1339 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1341 = NULL;
    org$pandalanguage$pandac$Position position1344;
    org$pandalanguage$pandac$ASTNode* dc1346 = NULL;
    panda$collections$ImmutableArray* annotations1348 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1350;
    panda$core$String* name1352 = NULL;
    panda$collections$ImmutableArray* generics1354 = NULL;
    panda$collections$ImmutableArray* parameters1356 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1358 = NULL;
    panda$collections$ImmutableArray* statements1360 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1365 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1366;
    org$pandalanguage$pandac$MethodDecl* $tmp1367;
    org$pandalanguage$pandac$Position position1371;
    org$pandalanguage$pandac$ASTNode* dc1373 = NULL;
    panda$collections$ImmutableArray* annotations1375 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1377;
    panda$core$String* name1379 = NULL;
    panda$collections$ImmutableArray* generics1381 = NULL;
    panda$collections$ImmutableArray* supertypes1383 = NULL;
    panda$collections$ImmutableArray* members1385 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1390 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1391;
    org$pandalanguage$pandac$ClassDecl* $tmp1392;
    panda$core$Weak* $tmp1394;
    panda$core$Weak* $tmp1395;
    panda$core$Weak* $tmp1396;
    panda$core$String* $tmp1398;
    org$pandalanguage$pandac$Alias* $tmp1402;
    panda$core$String* $tmp1404;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1405;
    org$pandalanguage$pandac$Position $tmp1409;
    org$pandalanguage$pandac$Alias* $tmp1410;
    panda$core$String* $tmp1412;
    org$pandalanguage$pandac$Position $tmp1414;
    org$pandalanguage$pandac$Position position1417;
    org$pandalanguage$pandac$ASTNode* dc1419 = NULL;
    panda$core$String* name1421 = NULL;
    panda$collections$ImmutableArray* fields1423 = NULL;
    int $tmp1331;
    {
        $tmp1333 = p_node;
        $match$411_91332 = $tmp1333;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1333));
        panda$core$Bit $tmp1334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$411_91332->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1334.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1336 = ((org$pandalanguage$pandac$Position*) ((char*) $match$411_91332->$data + 0));
            position1335 = *$tmp1336;
            org$pandalanguage$pandac$ASTNode** $tmp1338 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$411_91332->$data + 16));
            dc1337 = *$tmp1338;
            panda$collections$ImmutableArray** $tmp1340 = ((panda$collections$ImmutableArray**) ((char*) $match$411_91332->$data + 24));
            annotations1339 = *$tmp1340;
            org$pandalanguage$pandac$ASTNode** $tmp1342 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$411_91332->$data + 32));
            varDecl1341 = *$tmp1342;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1335, dc1337, annotations1339, varDecl1341);
        }
        }
        else {
        panda$core$Bit $tmp1343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$411_91332->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1343.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1345 = ((org$pandalanguage$pandac$Position*) ((char*) $match$411_91332->$data + 0));
            position1344 = *$tmp1345;
            org$pandalanguage$pandac$ASTNode** $tmp1347 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$411_91332->$data + 16));
            dc1346 = *$tmp1347;
            panda$collections$ImmutableArray** $tmp1349 = ((panda$collections$ImmutableArray**) ((char*) $match$411_91332->$data + 24));
            annotations1348 = *$tmp1349;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1351 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$411_91332->$data + 32));
            kind1350 = *$tmp1351;
            panda$core$String** $tmp1353 = ((panda$core$String**) ((char*) $match$411_91332->$data + 40));
            name1352 = *$tmp1353;
            panda$collections$ImmutableArray** $tmp1355 = ((panda$collections$ImmutableArray**) ((char*) $match$411_91332->$data + 48));
            generics1354 = *$tmp1355;
            panda$collections$ImmutableArray** $tmp1357 = ((panda$collections$ImmutableArray**) ((char*) $match$411_91332->$data + 56));
            parameters1356 = *$tmp1357;
            org$pandalanguage$pandac$ASTNode** $tmp1359 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$411_91332->$data + 64));
            returnType1358 = *$tmp1359;
            panda$collections$ImmutableArray** $tmp1361 = ((panda$collections$ImmutableArray**) ((char*) $match$411_91332->$data + 72));
            statements1360 = *$tmp1361;
            int $tmp1364;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1368 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1344, dc1346, annotations1348, kind1350, name1352, generics1354, parameters1356, returnType1358, statements1360);
                $tmp1367 = $tmp1368;
                $tmp1366 = $tmp1367;
                m1365 = $tmp1366;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1366));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1367));
                if (((panda$core$Bit) { m1365 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1365));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1365));
                }
                }
            }
            $tmp1364 = -1;
            goto $l1362;
            $l1362:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1365));
            m1365 = NULL;
            switch ($tmp1364) {
                case -1: goto $l1369;
            }
            $l1369:;
        }
        }
        else {
        panda$core$Bit $tmp1370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$411_91332->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1370.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1372 = ((org$pandalanguage$pandac$Position*) ((char*) $match$411_91332->$data + 0));
            position1371 = *$tmp1372;
            org$pandalanguage$pandac$ASTNode** $tmp1374 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$411_91332->$data + 16));
            dc1373 = *$tmp1374;
            panda$collections$ImmutableArray** $tmp1376 = ((panda$collections$ImmutableArray**) ((char*) $match$411_91332->$data + 24));
            annotations1375 = *$tmp1376;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1378 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$411_91332->$data + 32));
            kind1377 = *$tmp1378;
            panda$core$String** $tmp1380 = ((panda$core$String**) ((char*) $match$411_91332->$data + 40));
            name1379 = *$tmp1380;
            panda$collections$ImmutableArray** $tmp1382 = ((panda$collections$ImmutableArray**) ((char*) $match$411_91332->$data + 48));
            generics1381 = *$tmp1382;
            panda$collections$ImmutableArray** $tmp1384 = ((panda$collections$ImmutableArray**) ((char*) $match$411_91332->$data + 56));
            supertypes1383 = *$tmp1384;
            panda$collections$ImmutableArray** $tmp1386 = ((panda$collections$ImmutableArray**) ((char*) $match$411_91332->$data + 64));
            members1385 = *$tmp1386;
            int $tmp1389;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1393 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, p_cl->name, position1371, dc1373, annotations1375, kind1377, name1379, generics1381, supertypes1383, members1385);
                $tmp1392 = $tmp1393;
                $tmp1391 = $tmp1392;
                inner1390 = $tmp1391;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1391));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1392));
                if (((panda$core$Bit) { inner1390 != NULL }).value) {
                {
                    {
                        $tmp1394 = inner1390->owner;
                        panda$core$Weak* $tmp1397 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp1397, ((panda$core$Object*) p_cl));
                        $tmp1396 = $tmp1397;
                        $tmp1395 = $tmp1396;
                        inner1390->owner = $tmp1395;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1395));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1396));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1394));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1390));
                    panda$core$String* $tmp1400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_cl->name, &$s1399);
                    $tmp1398 = $tmp1400;
                    panda$core$Bit $tmp1401 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(inner1390->name, $tmp1398);
                    PANDA_ASSERT($tmp1401.value);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1398));
                    org$pandalanguage$pandac$Alias* $tmp1403 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$Int64 $tmp1406 = panda$core$String$length$R$panda$core$Int64(p_cl->name);
                    panda$core$Int64 $tmp1407 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1406, ((panda$core$Int64) { 1 }));
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1405, ((panda$core$Int64$nullable) { $tmp1407, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                    panda$core$String* $tmp1408 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(inner1390->name, $tmp1405);
                    $tmp1404 = $tmp1408;
                    org$pandalanguage$pandac$Position$init(&$tmp1409);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1403, $tmp1404, inner1390->name, $tmp1409);
                    $tmp1402 = $tmp1403;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1402));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1402));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1404));
                    org$pandalanguage$pandac$Alias* $tmp1411 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$String* $tmp1413 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1412 = $tmp1413;
                    org$pandalanguage$pandac$Position$init(&$tmp1414);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1411, $tmp1412, p_cl->name, $tmp1414);
                    $tmp1410 = $tmp1411;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(inner1390->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1410));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1410));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1412));
                }
                }
            }
            $tmp1389 = -1;
            goto $l1387;
            $l1387:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1390));
            inner1390 = NULL;
            switch ($tmp1389) {
                case -1: goto $l1415;
            }
            $l1415:;
        }
        }
        else {
        panda$core$Bit $tmp1416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$411_91332->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1416.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1418 = ((org$pandalanguage$pandac$Position*) ((char*) $match$411_91332->$data + 0));
            position1417 = *$tmp1418;
            org$pandalanguage$pandac$ASTNode** $tmp1420 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$411_91332->$data + 16));
            dc1419 = *$tmp1420;
            panda$core$String** $tmp1422 = ((panda$core$String**) ((char*) $match$411_91332->$data + 24));
            name1421 = *$tmp1422;
            panda$collections$ImmutableArray** $tmp1424 = ((panda$collections$ImmutableArray**) ((char*) $match$411_91332->$data + 32));
            fields1423 = *$tmp1424;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1417, dc1419, name1421, fields1423);
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
    $tmp1331 = -1;
    goto $l1329;
    $l1329:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1333));
    switch ($tmp1331) {
        case -1: goto $l1425;
    }
    $l1425:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1429 = NULL;
    panda$core$String* $tmp1430;
    panda$core$String* $tmp1431;
    org$pandalanguage$pandac$ASTNode* $match$449_131435 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1436;
    org$pandalanguage$pandac$Position position1438;
    panda$core$String* text1440 = NULL;
    panda$core$String* $tmp1442;
    panda$core$String* $tmp1443;
    panda$collections$Array* fields1445 = NULL;
    panda$collections$Array* $tmp1446;
    panda$collections$Array* $tmp1447;
    panda$collections$Iterator* Iter$457$91452 = NULL;
    panda$collections$Iterator* $tmp1453;
    panda$collections$Iterator* $tmp1454;
    org$pandalanguage$pandac$ASTNode* t1470 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1471;
    panda$core$Object* $tmp1472;
    org$pandalanguage$pandac$Type* $tmp1477;
    org$pandalanguage$pandac$ChoiceEntry* entry1481 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1482;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1483;
    int $tmp1428;
    {
        memset(&doccomment1429, 0, sizeof(doccomment1429));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1430 = doccomment1429;
                $tmp1431 = NULL;
                doccomment1429 = $tmp1431;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1431));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1430));
            }
        }
        }
        else {
        {
            int $tmp1434;
            {
                $tmp1436 = p_rawDoccomment;
                $match$449_131435 = $tmp1436;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1436));
                panda$core$Bit $tmp1437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$449_131435->$rawValue, ((panda$core$Int64) { 38 }));
                if ($tmp1437.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1439 = ((org$pandalanguage$pandac$Position*) ((char*) $match$449_131435->$data + 0));
                    position1438 = *$tmp1439;
                    panda$core$String** $tmp1441 = ((panda$core$String**) ((char*) $match$449_131435->$data + 16));
                    text1440 = *$tmp1441;
                    {
                        $tmp1442 = doccomment1429;
                        $tmp1443 = text1440;
                        doccomment1429 = $tmp1443;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1443));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1442));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1434 = -1;
            goto $l1432;
            $l1432:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1436));
            switch ($tmp1434) {
                case -1: goto $l1444;
            }
            $l1444:;
        }
        }
        panda$collections$Array* $tmp1448 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1448);
        $tmp1447 = $tmp1448;
        $tmp1446 = $tmp1447;
        fields1445 = $tmp1446;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1446));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1447));
        {
            int $tmp1451;
            {
                ITable* $tmp1455 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1455->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1455 = $tmp1455->next;
                }
                $fn1457 $tmp1456 = $tmp1455->methods[0];
                panda$collections$Iterator* $tmp1458 = $tmp1456(((panda$collections$Iterable*) p_rawFields));
                $tmp1454 = $tmp1458;
                $tmp1453 = $tmp1454;
                Iter$457$91452 = $tmp1453;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1453));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1454));
                $l1459:;
                ITable* $tmp1462 = Iter$457$91452->$class->itable;
                while ($tmp1462->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1462 = $tmp1462->next;
                }
                $fn1464 $tmp1463 = $tmp1462->methods[0];
                panda$core$Bit $tmp1465 = $tmp1463(Iter$457$91452);
                panda$core$Bit $tmp1466 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1465);
                bool $tmp1461 = $tmp1466.value;
                if (!$tmp1461) goto $l1460;
                {
                    int $tmp1469;
                    {
                        ITable* $tmp1473 = Iter$457$91452->$class->itable;
                        while ($tmp1473->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1473 = $tmp1473->next;
                        }
                        $fn1475 $tmp1474 = $tmp1473->methods[1];
                        panda$core$Object* $tmp1476 = $tmp1474(Iter$457$91452);
                        $tmp1472 = $tmp1476;
                        $tmp1471 = ((org$pandalanguage$pandac$ASTNode*) $tmp1472);
                        t1470 = $tmp1471;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1471));
                        panda$core$Panda$unref$panda$core$Object($tmp1472);
                        org$pandalanguage$pandac$Type* $tmp1478 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1470);
                        $tmp1477 = $tmp1478;
                        panda$collections$Array$add$panda$collections$Array$T(fields1445, ((panda$core$Object*) $tmp1477));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1477));
                    }
                    $tmp1469 = -1;
                    goto $l1467;
                    $l1467:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1470));
                    t1470 = NULL;
                    switch ($tmp1469) {
                        case -1: goto $l1479;
                    }
                    $l1479:;
                }
                goto $l1459;
                $l1460:;
            }
            $tmp1451 = -1;
            goto $l1449;
            $l1449:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$457$91452));
            Iter$457$91452 = NULL;
            switch ($tmp1451) {
                case -1: goto $l1480;
            }
            $l1480:;
        }
        org$pandalanguage$pandac$ChoiceEntry* $tmp1484 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
        panda$core$Int64 $tmp1485 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
        org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1484, p_cl, p_position, p_name, doccomment1429, $tmp1485, ((panda$collections$ListView*) fields1445));
        $tmp1483 = $tmp1484;
        $tmp1482 = $tmp1483;
        entry1481 = $tmp1482;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1482));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1483));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry1481));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1481));
    }
    $tmp1428 = -1;
    goto $l1426;
    $l1426:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1481));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1445));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1429));
    fields1445 = NULL;
    entry1481 = NULL;
    switch ($tmp1428) {
        case -1: goto $l1486;
    }
    $l1486:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1490 = NULL;
    panda$core$String* $tmp1493;
    panda$core$String* $tmp1494;
    panda$core$String* $tmp1495;
    panda$core$String* $tmp1496;
    panda$core$String* $tmp1497;
    panda$core$String* $tmp1498;
    panda$core$String* $tmp1505;
    panda$core$String* $tmp1506;
    panda$core$String* doccomment1507 = NULL;
    panda$core$String* $tmp1508;
    panda$core$String* $tmp1509;
    org$pandalanguage$pandac$ASTNode* $match$483_131513 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1514;
    org$pandalanguage$pandac$Position position1516;
    panda$core$String* text1518 = NULL;
    panda$core$String* $tmp1520;
    panda$core$String* $tmp1521;
    org$pandalanguage$pandac$Annotations* annotations1523 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1524;
    org$pandalanguage$pandac$Annotations* $tmp1525;
    panda$collections$Array* parameters1527 = NULL;
    panda$collections$Array* $tmp1528;
    panda$collections$Array* $tmp1529;
    panda$collections$Iterator* Iter$493$131534 = NULL;
    panda$collections$Iterator* $tmp1535;
    panda$collections$Iterator* $tmp1536;
    org$pandalanguage$pandac$ASTNode* p1552 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1553;
    panda$core$Object* $tmp1554;
    panda$core$String* name1559 = NULL;
    org$pandalanguage$pandac$Type* bound1560 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$496_171564 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1565;
    panda$core$String* id1567 = NULL;
    panda$core$String* $tmp1569;
    panda$core$String* $tmp1570;
    org$pandalanguage$pandac$Type* $tmp1571;
    org$pandalanguage$pandac$Type* $tmp1572;
    org$pandalanguage$pandac$Type* $tmp1573;
    panda$core$String* id1576 = NULL;
    org$pandalanguage$pandac$ASTNode* type1578 = NULL;
    panda$core$String* $tmp1580;
    panda$core$String* $tmp1581;
    org$pandalanguage$pandac$Type* $tmp1582;
    org$pandalanguage$pandac$Type* $tmp1583;
    org$pandalanguage$pandac$Type* $tmp1584;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1587;
    panda$core$Object* $tmp1594;
    panda$collections$Array* supertypes1598 = NULL;
    panda$collections$Array* $tmp1599;
    panda$collections$Array* $tmp1600;
    panda$core$Object* $tmp1603;
    panda$collections$Iterator* Iter$517$131610 = NULL;
    panda$collections$Iterator* $tmp1611;
    panda$collections$Iterator* $tmp1612;
    org$pandalanguage$pandac$ASTNode* s1628 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1629;
    panda$core$Object* $tmp1630;
    org$pandalanguage$pandac$Type* $tmp1635;
    org$pandalanguage$pandac$ClassDecl* result1639 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1640;
    org$pandalanguage$pandac$ClassDecl* $tmp1641;
    panda$core$Object* $tmp1643;
    panda$core$Object* $tmp1646;
    org$pandalanguage$pandac$FieldDecl* rawValue1653 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1654;
    org$pandalanguage$pandac$FieldDecl* $tmp1655;
    org$pandalanguage$pandac$Annotations* $tmp1657;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1659;
    org$pandalanguage$pandac$Type* $tmp1661;
    org$pandalanguage$pandac$FieldDecl* data1663 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1664;
    org$pandalanguage$pandac$FieldDecl* $tmp1665;
    org$pandalanguage$pandac$Annotations* $tmp1667;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1669;
    org$pandalanguage$pandac$Type* $tmp1671;
    panda$collections$Iterator* Iter$534$91677 = NULL;
    panda$collections$Iterator* $tmp1678;
    panda$collections$Iterator* $tmp1679;
    org$pandalanguage$pandac$ASTNode* m1695 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1696;
    panda$core$Object* $tmp1697;
    org$pandalanguage$pandac$ASTNode* $match$535_131705 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1706;
    org$pandalanguage$pandac$Position mPosition1708;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1710;
    org$pandalanguage$pandac$ClassDecl$Kind $match$538_251713;
    panda$core$Object* $tmp1716;
    panda$core$Object* $tmp1721;
    panda$core$Bit foundInit1728;
    panda$core$Bit foundCleanup1729;
    panda$collections$Iterator* Iter$553$91733 = NULL;
    panda$collections$Iterator* $tmp1734;
    panda$collections$Iterator* $tmp1735;
    org$pandalanguage$pandac$MethodDecl* m1751 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1752;
    panda$core$Object* $tmp1753;
    panda$core$Object* $tmp1767;
    org$pandalanguage$pandac$MethodDecl* defaultInit1786 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1787;
    org$pandalanguage$pandac$MethodDecl* $tmp1788;
    org$pandalanguage$pandac$Annotations* $tmp1790;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1792;
    panda$collections$Array* $tmp1794;
    panda$collections$Array* $tmp1796;
    org$pandalanguage$pandac$Type* $tmp1798;
    panda$collections$ImmutableArray* $tmp1800;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1820 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1821;
    org$pandalanguage$pandac$MethodDecl* $tmp1822;
    org$pandalanguage$pandac$Annotations* $tmp1824;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1827;
    panda$collections$Array* $tmp1829;
    panda$collections$Array* $tmp1831;
    org$pandalanguage$pandac$Type* $tmp1833;
    panda$collections$ImmutableArray* $tmp1835;
    panda$core$Bit haveFields1839;
    panda$collections$Iterator* Iter$583$131843 = NULL;
    panda$collections$Iterator* $tmp1844;
    panda$collections$Iterator* $tmp1845;
    org$pandalanguage$pandac$ChoiceEntry* e1861 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1862;
    panda$core$Object* $tmp1863;
    org$pandalanguage$pandac$Type* $tmp1874;
    org$pandalanguage$pandac$Type* $tmp1875;
    org$pandalanguage$pandac$Type* $tmp1876;
    panda$core$Object* $tmp1878;
    panda$core$Object* $tmp1879;
    org$pandalanguage$pandac$ClassDecl* $returnValue1883;
    org$pandalanguage$pandac$ClassDecl* $tmp1884;
    int $tmp1489;
    {
        memset(&fullName1490, 0, sizeof(fullName1490));
        panda$core$Bit $tmp1492 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s1491);
        if ($tmp1492.value) {
        {
            {
                $tmp1493 = fullName1490;
                panda$core$String* $tmp1499 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1498 = $tmp1499;
                panda$core$String* $tmp1501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1498, &$s1500);
                $tmp1497 = $tmp1501;
                panda$core$String* $tmp1502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1497, p_name);
                $tmp1496 = $tmp1502;
                panda$core$String* $tmp1504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1496, &$s1503);
                $tmp1495 = $tmp1504;
                $tmp1494 = $tmp1495;
                fullName1490 = $tmp1494;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1494));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1495));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1496));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1497));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1498));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1493));
            }
        }
        }
        else {
        {
            {
                $tmp1505 = fullName1490;
                $tmp1506 = p_name;
                fullName1490 = $tmp1506;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1506));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1505));
            }
        }
        }
        memset(&doccomment1507, 0, sizeof(doccomment1507));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1508 = doccomment1507;
                $tmp1509 = NULL;
                doccomment1507 = $tmp1509;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1509));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1508));
            }
        }
        }
        else {
        {
            int $tmp1512;
            {
                $tmp1514 = p_rawDoccomment;
                $match$483_131513 = $tmp1514;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1514));
                panda$core$Bit $tmp1515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$483_131513->$rawValue, ((panda$core$Int64) { 38 }));
                if ($tmp1515.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1517 = ((org$pandalanguage$pandac$Position*) ((char*) $match$483_131513->$data + 0));
                    position1516 = *$tmp1517;
                    panda$core$String** $tmp1519 = ((panda$core$String**) ((char*) $match$483_131513->$data + 16));
                    text1518 = *$tmp1519;
                    {
                        $tmp1520 = doccomment1507;
                        $tmp1521 = text1518;
                        doccomment1507 = $tmp1521;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1521));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1520));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1512 = -1;
            goto $l1510;
            $l1510:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1514));
            switch ($tmp1512) {
                case -1: goto $l1522;
            }
            $l1522:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1526 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1525 = $tmp1526;
        $tmp1524 = $tmp1525;
        annotations1523 = $tmp1524;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1524));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1525));
        panda$collections$Array* $tmp1530 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1530);
        $tmp1529 = $tmp1530;
        $tmp1528 = $tmp1529;
        parameters1527 = $tmp1528;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1528));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1529));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1533;
                {
                    ITable* $tmp1537 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1537->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1537 = $tmp1537->next;
                    }
                    $fn1539 $tmp1538 = $tmp1537->methods[0];
                    panda$collections$Iterator* $tmp1540 = $tmp1538(((panda$collections$Iterable*) p_generics));
                    $tmp1536 = $tmp1540;
                    $tmp1535 = $tmp1536;
                    Iter$493$131534 = $tmp1535;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1535));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1536));
                    $l1541:;
                    ITable* $tmp1544 = Iter$493$131534->$class->itable;
                    while ($tmp1544->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1544 = $tmp1544->next;
                    }
                    $fn1546 $tmp1545 = $tmp1544->methods[0];
                    panda$core$Bit $tmp1547 = $tmp1545(Iter$493$131534);
                    panda$core$Bit $tmp1548 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1547);
                    bool $tmp1543 = $tmp1548.value;
                    if (!$tmp1543) goto $l1542;
                    {
                        int $tmp1551;
                        {
                            ITable* $tmp1555 = Iter$493$131534->$class->itable;
                            while ($tmp1555->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1555 = $tmp1555->next;
                            }
                            $fn1557 $tmp1556 = $tmp1555->methods[1];
                            panda$core$Object* $tmp1558 = $tmp1556(Iter$493$131534);
                            $tmp1554 = $tmp1558;
                            $tmp1553 = ((org$pandalanguage$pandac$ASTNode*) $tmp1554);
                            p1552 = $tmp1553;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1553));
                            panda$core$Panda$unref$panda$core$Object($tmp1554);
                            memset(&name1559, 0, sizeof(name1559));
                            memset(&bound1560, 0, sizeof(bound1560));
                            int $tmp1563;
                            {
                                $tmp1565 = p1552;
                                $match$496_171564 = $tmp1565;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1565));
                                panda$core$Bit $tmp1566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$496_171564->$rawValue, ((panda$core$Int64) { 20 }));
                                if ($tmp1566.value) {
                                {
                                    panda$core$String** $tmp1568 = ((panda$core$String**) ((char*) $match$496_171564->$data + 16));
                                    id1567 = *$tmp1568;
                                    {
                                        $tmp1569 = name1559;
                                        $tmp1570 = id1567;
                                        name1559 = $tmp1570;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1570));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1569));
                                    }
                                    {
                                        $tmp1571 = bound1560;
                                        org$pandalanguage$pandac$Type* $tmp1574 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1573 = $tmp1574;
                                        $tmp1572 = $tmp1573;
                                        bound1560 = $tmp1572;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1572));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1573));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1571));
                                    }
                                }
                                }
                                else {
                                panda$core$Bit $tmp1575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$496_171564->$rawValue, ((panda$core$Int64) { 44 }));
                                if ($tmp1575.value) {
                                {
                                    panda$core$String** $tmp1577 = ((panda$core$String**) ((char*) $match$496_171564->$data + 16));
                                    id1576 = *$tmp1577;
                                    org$pandalanguage$pandac$ASTNode** $tmp1579 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$496_171564->$data + 24));
                                    type1578 = *$tmp1579;
                                    {
                                        $tmp1580 = name1559;
                                        $tmp1581 = id1576;
                                        name1559 = $tmp1581;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1581));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1580));
                                    }
                                    {
                                        $tmp1582 = bound1560;
                                        org$pandalanguage$pandac$Type* $tmp1585 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1578);
                                        $tmp1584 = $tmp1585;
                                        $tmp1583 = $tmp1584;
                                        bound1560 = $tmp1583;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1583));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1584));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1582));
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
                            $tmp1563 = -1;
                            goto $l1561;
                            $l1561:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1565));
                            switch ($tmp1563) {
                                case -1: goto $l1586;
                            }
                            $l1586:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1588 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1590 = (($fn1589) p1552->$class->vtable[2])(p1552);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1588, $tmp1590, fullName1490, name1559, bound1560);
                            $tmp1587 = $tmp1588;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1527, ((panda$core$Object*) $tmp1587));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1587));
                        }
                        $tmp1551 = -1;
                        goto $l1549;
                        $l1549:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1560));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1559));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1552));
                        p1552 = NULL;
                        switch ($tmp1551) {
                            case -1: goto $l1591;
                        }
                        $l1591:;
                    }
                    goto $l1541;
                    $l1542:;
                }
                $tmp1533 = -1;
                goto $l1531;
                $l1531:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$493$131534));
                Iter$493$131534 = NULL;
                switch ($tmp1533) {
                    case -1: goto $l1592;
                }
                $l1592:;
            }
            panda$core$Bit $tmp1593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1593.value) {
            {
                panda$core$Object* $tmp1596 = (($fn1595) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1594 = $tmp1596;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1594), p_position, &$s1597);
                panda$core$Panda$unref$panda$core$Object($tmp1594);
            }
            }
        }
        }
        panda$collections$Array* $tmp1601 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1601);
        $tmp1600 = $tmp1601;
        $tmp1599 = $tmp1600;
        supertypes1598 = $tmp1599;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1599));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1600));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Bit $tmp1602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1602.value) {
            {
                panda$core$Object* $tmp1605 = (($fn1604) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1603 = $tmp1605;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1603), p_position, &$s1606);
                panda$core$Panda$unref$panda$core$Object($tmp1603);
            }
            }
            {
                int $tmp1609;
                {
                    ITable* $tmp1613 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1613->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1613 = $tmp1613->next;
                    }
                    $fn1615 $tmp1614 = $tmp1613->methods[0];
                    panda$collections$Iterator* $tmp1616 = $tmp1614(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1612 = $tmp1616;
                    $tmp1611 = $tmp1612;
                    Iter$517$131610 = $tmp1611;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1611));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1612));
                    $l1617:;
                    ITable* $tmp1620 = Iter$517$131610->$class->itable;
                    while ($tmp1620->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1620 = $tmp1620->next;
                    }
                    $fn1622 $tmp1621 = $tmp1620->methods[0];
                    panda$core$Bit $tmp1623 = $tmp1621(Iter$517$131610);
                    panda$core$Bit $tmp1624 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1623);
                    bool $tmp1619 = $tmp1624.value;
                    if (!$tmp1619) goto $l1618;
                    {
                        int $tmp1627;
                        {
                            ITable* $tmp1631 = Iter$517$131610->$class->itable;
                            while ($tmp1631->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1631 = $tmp1631->next;
                            }
                            $fn1633 $tmp1632 = $tmp1631->methods[1];
                            panda$core$Object* $tmp1634 = $tmp1632(Iter$517$131610);
                            $tmp1630 = $tmp1634;
                            $tmp1629 = ((org$pandalanguage$pandac$ASTNode*) $tmp1630);
                            s1628 = $tmp1629;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1629));
                            panda$core$Panda$unref$panda$core$Object($tmp1630);
                            org$pandalanguage$pandac$Type* $tmp1636 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1628);
                            $tmp1635 = $tmp1636;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1598, ((panda$core$Object*) $tmp1635));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1635));
                        }
                        $tmp1627 = -1;
                        goto $l1625;
                        $l1625:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1628));
                        s1628 = NULL;
                        switch ($tmp1627) {
                            case -1: goto $l1637;
                        }
                        $l1637:;
                    }
                    goto $l1617;
                    $l1618:;
                }
                $tmp1609 = -1;
                goto $l1607;
                $l1607:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$517$131610));
                Iter$517$131610 = NULL;
                switch ($tmp1609) {
                    case -1: goto $l1638;
                }
                $l1638:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1642 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1645 = (($fn1644) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1643 = $tmp1645;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1642, p_source, p_position, p_aliases, doccomment1507, annotations1523, p_kind, fullName1490, ((panda$collections$ListView*) supertypes1598), parameters1527, ((org$pandalanguage$pandac$Compiler*) $tmp1643)->root);
        $tmp1641 = $tmp1642;
        $tmp1640 = $tmp1641;
        result1639 = $tmp1640;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1640));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1641));
        panda$core$Panda$unref$panda$core$Object($tmp1643);
        panda$core$Object* $tmp1648 = (($fn1647) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1646 = $tmp1648;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1646)->currentClass, ((panda$core$Object*) result1639));
        panda$core$Panda$unref$panda$core$Object($tmp1646);
        panda$core$Bit $tmp1649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1649.value) {
        {
            int $tmp1652;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1656 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1658 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1658);
                $tmp1657 = $tmp1658;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1659, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1662 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1661 = $tmp1662;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1656, result1639, result1639->position, NULL, $tmp1657, $tmp1659, &$s1660, $tmp1661, NULL);
                $tmp1655 = $tmp1656;
                $tmp1654 = $tmp1655;
                rawValue1653 = $tmp1654;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1654));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1655));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1661));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1657));
                panda$collections$Array$add$panda$collections$Array$T(result1639->fields, ((panda$core$Object*) rawValue1653));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1639->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1653));
                org$pandalanguage$pandac$FieldDecl* $tmp1666 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1668 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1668);
                $tmp1667 = $tmp1668;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1669, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1672 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1671 = $tmp1672;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1666, result1639, result1639->position, NULL, $tmp1667, $tmp1669, &$s1670, $tmp1671, NULL);
                $tmp1665 = $tmp1666;
                $tmp1664 = $tmp1665;
                data1663 = $tmp1664;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1664));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1665));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1671));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1667));
                panda$collections$Array$add$panda$collections$Array$T(result1639->fields, ((panda$core$Object*) data1663));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1639->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1663));
            }
            $tmp1652 = -1;
            goto $l1650;
            $l1650:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1663));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1653));
            rawValue1653 = NULL;
            data1663 = NULL;
            switch ($tmp1652) {
                case -1: goto $l1673;
            }
            $l1673:;
        }
        }
        {
            int $tmp1676;
            {
                ITable* $tmp1680 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1680->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1680 = $tmp1680->next;
                }
                $fn1682 $tmp1681 = $tmp1680->methods[0];
                panda$collections$Iterator* $tmp1683 = $tmp1681(((panda$collections$Iterable*) p_members));
                $tmp1679 = $tmp1683;
                $tmp1678 = $tmp1679;
                Iter$534$91677 = $tmp1678;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1678));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1679));
                $l1684:;
                ITable* $tmp1687 = Iter$534$91677->$class->itable;
                while ($tmp1687->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1687 = $tmp1687->next;
                }
                $fn1689 $tmp1688 = $tmp1687->methods[0];
                panda$core$Bit $tmp1690 = $tmp1688(Iter$534$91677);
                panda$core$Bit $tmp1691 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1690);
                bool $tmp1686 = $tmp1691.value;
                if (!$tmp1686) goto $l1685;
                {
                    int $tmp1694;
                    {
                        ITable* $tmp1698 = Iter$534$91677->$class->itable;
                        while ($tmp1698->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1698 = $tmp1698->next;
                        }
                        $fn1700 $tmp1699 = $tmp1698->methods[1];
                        panda$core$Object* $tmp1701 = $tmp1699(Iter$534$91677);
                        $tmp1697 = $tmp1701;
                        $tmp1696 = ((org$pandalanguage$pandac$ASTNode*) $tmp1697);
                        m1695 = $tmp1696;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1696));
                        panda$core$Panda$unref$panda$core$Object($tmp1697);
                        int $tmp1704;
                        {
                            $tmp1706 = m1695;
                            $match$535_131705 = $tmp1706;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1706));
                            panda$core$Bit $tmp1707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$535_131705->$rawValue, ((panda$core$Int64) { 26 }));
                            if ($tmp1707.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp1709 = ((org$pandalanguage$pandac$Position*) ((char*) $match$535_131705->$data + 0));
                                mPosition1708 = *$tmp1709;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1711 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$535_131705->$data + 32));
                                methodKind1710 = *$tmp1711;
                                panda$core$Bit $tmp1712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1710.$rawValue, ((panda$core$Int64) { 2 }));
                                if ($tmp1712.value) {
                                {
                                    {
                                        $match$538_251713 = p_kind;
                                        panda$core$Bit $tmp1714 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$538_251713.$rawValue, ((panda$core$Int64) { 0 }));
                                        if ($tmp1714.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$538_251713.$rawValue, ((panda$core$Int64) { 1 }));
                                        if ($tmp1715.value) {
                                        {
                                            panda$core$Object* $tmp1718 = (($fn1717) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp1716 = $tmp1718;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1716), mPosition1708, &$s1719);
                                            panda$core$Panda$unref$panda$core$Object($tmp1716);
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$538_251713.$rawValue, ((panda$core$Int64) { 2 }));
                                        if ($tmp1720.value) {
                                        {
                                            panda$core$Object* $tmp1723 = (($fn1722) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp1721 = $tmp1723;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1721), mPosition1708, &$s1724);
                                            panda$core$Panda$unref$panda$core$Object($tmp1721);
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
                        $tmp1704 = -1;
                        goto $l1702;
                        $l1702:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1706));
                        switch ($tmp1704) {
                            case -1: goto $l1725;
                        }
                        $l1725:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1639, m1695);
                    }
                    $tmp1694 = -1;
                    goto $l1692;
                    $l1692:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1695));
                    m1695 = NULL;
                    switch ($tmp1694) {
                        case -1: goto $l1726;
                    }
                    $l1726:;
                }
                goto $l1684;
                $l1685:;
            }
            $tmp1676 = -1;
            goto $l1674;
            $l1674:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$534$91677));
            Iter$534$91677 = NULL;
            switch ($tmp1676) {
                case -1: goto $l1727;
            }
            $l1727:;
        }
        foundInit1728 = ((panda$core$Bit) { false });
        foundCleanup1729 = ((panda$core$Bit) { false });
        {
            int $tmp1732;
            {
                ITable* $tmp1736 = ((panda$collections$Iterable*) result1639->methods)->$class->itable;
                while ($tmp1736->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1736 = $tmp1736->next;
                }
                $fn1738 $tmp1737 = $tmp1736->methods[0];
                panda$collections$Iterator* $tmp1739 = $tmp1737(((panda$collections$Iterable*) result1639->methods));
                $tmp1735 = $tmp1739;
                $tmp1734 = $tmp1735;
                Iter$553$91733 = $tmp1734;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1734));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1735));
                $l1740:;
                ITable* $tmp1743 = Iter$553$91733->$class->itable;
                while ($tmp1743->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1743 = $tmp1743->next;
                }
                $fn1745 $tmp1744 = $tmp1743->methods[0];
                panda$core$Bit $tmp1746 = $tmp1744(Iter$553$91733);
                panda$core$Bit $tmp1747 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1746);
                bool $tmp1742 = $tmp1747.value;
                if (!$tmp1742) goto $l1741;
                {
                    int $tmp1750;
                    {
                        ITable* $tmp1754 = Iter$553$91733->$class->itable;
                        while ($tmp1754->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1754 = $tmp1754->next;
                        }
                        $fn1756 $tmp1755 = $tmp1754->methods[1];
                        panda$core$Object* $tmp1757 = $tmp1755(Iter$553$91733);
                        $tmp1753 = $tmp1757;
                        $tmp1752 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1753);
                        m1751 = $tmp1752;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1752));
                        panda$core$Panda$unref$panda$core$Object($tmp1753);
                        panda$core$Bit $tmp1758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1751->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
                        if ($tmp1758.value) {
                        {
                            foundInit1728 = ((panda$core$Bit) { true });
                        }
                        }
                        panda$core$Bit $tmp1761 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1751)->name, &$s1760);
                        bool $tmp1759 = $tmp1761.value;
                        if (!$tmp1759) goto $l1762;
                        panda$core$Int64 $tmp1763 = panda$collections$Array$get_count$R$panda$core$Int64(m1751->parameters);
                        panda$core$Bit $tmp1764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1763, ((panda$core$Int64) { 0 }));
                        $tmp1759 = $tmp1764.value;
                        $l1762:;
                        panda$core$Bit $tmp1765 = { $tmp1759 };
                        if ($tmp1765.value) {
                        {
                            foundCleanup1729 = ((panda$core$Bit) { true });
                            panda$core$Bit $tmp1766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp1766.value) {
                            {
                                panda$core$Object* $tmp1769 = (($fn1768) self->compiler->$class->vtable[2])(self->compiler);
                                $tmp1767 = $tmp1769;
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1767), p_position, &$s1770);
                                panda$core$Panda$unref$panda$core$Object($tmp1767);
                            }
                            }
                        }
                        }
                    }
                    $tmp1750 = -1;
                    goto $l1748;
                    $l1748:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1751));
                    m1751 = NULL;
                    switch ($tmp1750) {
                        case -1: goto $l1771;
                    }
                    $l1771:;
                }
                goto $l1740;
                $l1741:;
            }
            $tmp1732 = -1;
            goto $l1730;
            $l1730:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$553$91733));
            Iter$553$91733 = NULL;
            switch ($tmp1732) {
                case -1: goto $l1772;
            }
            $l1772:;
        }
        panda$core$Bit $tmp1775 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1728);
        bool $tmp1774 = $tmp1775.value;
        if (!$tmp1774) goto $l1776;
        panda$core$Bit $tmp1777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        $tmp1774 = $tmp1777.value;
        $l1776:;
        panda$core$Bit $tmp1778 = { $tmp1774 };
        bool $tmp1773 = $tmp1778.value;
        if (!$tmp1773) goto $l1779;
        panda$core$Bit $tmp1781 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1639->name, &$s1780);
        $tmp1773 = $tmp1781.value;
        $l1779:;
        panda$core$Bit $tmp1782 = { $tmp1773 };
        if ($tmp1782.value) {
        {
            int $tmp1785;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1789 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1791 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1791, ((panda$core$Int64) { 8192 }));
                $tmp1790 = $tmp1791;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1792, ((panda$core$Int64) { 2 }));
                panda$collections$Array* $tmp1795 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1795);
                $tmp1794 = $tmp1795;
                panda$collections$Array* $tmp1797 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1797);
                $tmp1796 = $tmp1797;
                org$pandalanguage$pandac$Type* $tmp1799 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1798 = $tmp1799;
                panda$collections$ImmutableArray* $tmp1801 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1801);
                $tmp1800 = $tmp1801;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1789, result1639, p_position, NULL, $tmp1790, $tmp1792, &$s1793, $tmp1794, $tmp1796, $tmp1798, $tmp1800);
                $tmp1788 = $tmp1789;
                $tmp1787 = $tmp1788;
                defaultInit1786 = $tmp1787;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1787));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1788));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1800));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1798));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1796));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1794));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1790));
                panda$collections$Array$add$panda$collections$Array$T(result1639->methods, ((panda$core$Object*) defaultInit1786));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1639->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1786));
            }
            $tmp1785 = -1;
            goto $l1783;
            $l1783:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1786));
            defaultInit1786 = NULL;
            switch ($tmp1785) {
                case -1: goto $l1802;
            }
            $l1802:;
        }
        }
        panda$core$Bit $tmp1805 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup1729);
        bool $tmp1804 = $tmp1805.value;
        if (!$tmp1804) goto $l1806;
        panda$core$Bit $tmp1808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp1807 = $tmp1808.value;
        if ($tmp1807) goto $l1809;
        panda$core$Bit $tmp1810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        $tmp1807 = $tmp1810.value;
        $l1809:;
        panda$core$Bit $tmp1811 = { $tmp1807 };
        $tmp1804 = $tmp1811.value;
        $l1806:;
        panda$core$Bit $tmp1812 = { $tmp1804 };
        bool $tmp1803 = $tmp1812.value;
        if (!$tmp1803) goto $l1813;
        panda$core$Bit $tmp1815 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1639->name, &$s1814);
        $tmp1803 = $tmp1815.value;
        $l1813:;
        panda$core$Bit $tmp1816 = { $tmp1803 };
        if ($tmp1816.value) {
        {
            int $tmp1819;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1823 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1825 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64 $tmp1826 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 32 }), ((panda$core$Int64) { 8192 }));
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1825, $tmp1826);
                $tmp1824 = $tmp1825;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1827, ((panda$core$Int64) { 0 }));
                panda$collections$Array* $tmp1830 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1830);
                $tmp1829 = $tmp1830;
                panda$collections$Array* $tmp1832 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1832);
                $tmp1831 = $tmp1832;
                org$pandalanguage$pandac$Type* $tmp1834 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1833 = $tmp1834;
                panda$collections$ImmutableArray* $tmp1836 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1836);
                $tmp1835 = $tmp1836;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1823, result1639, p_position, NULL, $tmp1824, $tmp1827, &$s1828, $tmp1829, $tmp1831, $tmp1833, $tmp1835);
                $tmp1822 = $tmp1823;
                $tmp1821 = $tmp1822;
                defaultCleanup1820 = $tmp1821;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1821));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1822));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1835));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1833));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1831));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1829));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1824));
                panda$collections$Array$add$panda$collections$Array$T(result1639->methods, ((panda$core$Object*) defaultCleanup1820));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1639->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1820));
            }
            $tmp1819 = -1;
            goto $l1817;
            $l1817:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1820));
            defaultCleanup1820 = NULL;
            switch ($tmp1819) {
                case -1: goto $l1837;
            }
            $l1837:;
        }
        }
        panda$core$Bit $tmp1838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1838.value) {
        {
            haveFields1839 = ((panda$core$Bit) { false });
            {
                int $tmp1842;
                {
                    ITable* $tmp1846 = ((panda$collections$Iterable*) result1639->choiceEntries)->$class->itable;
                    while ($tmp1846->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1846 = $tmp1846->next;
                    }
                    $fn1848 $tmp1847 = $tmp1846->methods[0];
                    panda$collections$Iterator* $tmp1849 = $tmp1847(((panda$collections$Iterable*) result1639->choiceEntries));
                    $tmp1845 = $tmp1849;
                    $tmp1844 = $tmp1845;
                    Iter$583$131843 = $tmp1844;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1844));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1845));
                    $l1850:;
                    ITable* $tmp1853 = Iter$583$131843->$class->itable;
                    while ($tmp1853->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1853 = $tmp1853->next;
                    }
                    $fn1855 $tmp1854 = $tmp1853->methods[0];
                    panda$core$Bit $tmp1856 = $tmp1854(Iter$583$131843);
                    panda$core$Bit $tmp1857 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1856);
                    bool $tmp1852 = $tmp1857.value;
                    if (!$tmp1852) goto $l1851;
                    {
                        int $tmp1860;
                        {
                            ITable* $tmp1864 = Iter$583$131843->$class->itable;
                            while ($tmp1864->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1864 = $tmp1864->next;
                            }
                            $fn1866 $tmp1865 = $tmp1864->methods[1];
                            panda$core$Object* $tmp1867 = $tmp1865(Iter$583$131843);
                            $tmp1863 = $tmp1867;
                            $tmp1862 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1863);
                            e1861 = $tmp1862;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1862));
                            panda$core$Panda$unref$panda$core$Object($tmp1863);
                            panda$core$Int64 $tmp1868 = panda$collections$Array$get_count$R$panda$core$Int64(e1861->fields);
                            panda$core$Bit $tmp1869 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1868, ((panda$core$Int64) { 0 }));
                            if ($tmp1869.value) {
                            {
                                haveFields1839 = ((panda$core$Bit) { true });
                                $tmp1860 = 0;
                                goto $l1858;
                                $l1870:;
                                goto $l1851;
                            }
                            }
                        }
                        $tmp1860 = -1;
                        goto $l1858;
                        $l1858:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1861));
                        e1861 = NULL;
                        switch ($tmp1860) {
                            case 0: goto $l1870;
                            case -1: goto $l1871;
                        }
                        $l1871:;
                    }
                    goto $l1850;
                    $l1851:;
                }
                $tmp1842 = -1;
                goto $l1840;
                $l1840:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$583$131843));
                Iter$583$131843 = NULL;
                switch ($tmp1842) {
                    case -1: goto $l1872;
                }
                $l1872:;
            }
            panda$core$Bit $tmp1873 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1839);
            if ($tmp1873.value) {
            {
                {
                    $tmp1874 = result1639->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp1877 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp1876 = $tmp1877;
                    $tmp1875 = $tmp1876;
                    result1639->rawSuper = $tmp1875;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1875));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1876));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1874));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp1881 = (($fn1880) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1879 = $tmp1881;
        panda$core$Object* $tmp1882 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1879)->currentClass);
        $tmp1878 = $tmp1882;
        panda$core$Panda$unref$panda$core$Object($tmp1878);
        panda$core$Panda$unref$panda$core$Object($tmp1879);
        $tmp1884 = result1639;
        $returnValue1883 = $tmp1884;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1884));
        $tmp1489 = 0;
        goto $l1487;
        $l1885:;
        return $returnValue1883;
    }
    $l1487:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1639));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1598));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1527));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1523));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1507));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1490));
    annotations1523 = NULL;
    parameters1527 = NULL;
    supertypes1598 = NULL;
    result1639 = NULL;
    switch ($tmp1489) {
        case 0: goto $l1885;
    }
    $l1887:;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$599$91891 = NULL;
    panda$collections$Iterator* $tmp1892;
    panda$collections$Iterator* $tmp1893;
    org$pandalanguage$pandac$ClassDecl* inner1909 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1910;
    panda$core$Object* $tmp1911;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp1890;
        {
            ITable* $tmp1894 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp1894->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1894 = $tmp1894->next;
            }
            $fn1896 $tmp1895 = $tmp1894->methods[0];
            panda$collections$Iterator* $tmp1897 = $tmp1895(((panda$collections$Iterable*) p_cl->classes));
            $tmp1893 = $tmp1897;
            $tmp1892 = $tmp1893;
            Iter$599$91891 = $tmp1892;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1892));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1893));
            $l1898:;
            ITable* $tmp1901 = Iter$599$91891->$class->itable;
            while ($tmp1901->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1901 = $tmp1901->next;
            }
            $fn1903 $tmp1902 = $tmp1901->methods[0];
            panda$core$Bit $tmp1904 = $tmp1902(Iter$599$91891);
            panda$core$Bit $tmp1905 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1904);
            bool $tmp1900 = $tmp1905.value;
            if (!$tmp1900) goto $l1899;
            {
                int $tmp1908;
                {
                    ITable* $tmp1912 = Iter$599$91891->$class->itable;
                    while ($tmp1912->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1912 = $tmp1912->next;
                    }
                    $fn1914 $tmp1913 = $tmp1912->methods[1];
                    panda$core$Object* $tmp1915 = $tmp1913(Iter$599$91891);
                    $tmp1911 = $tmp1915;
                    $tmp1910 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1911);
                    inner1909 = $tmp1910;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1910));
                    panda$core$Panda$unref$panda$core$Object($tmp1911);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1909, p_arr);
                }
                $tmp1908 = -1;
                goto $l1906;
                $l1906:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1909));
                inner1909 = NULL;
                switch ($tmp1908) {
                    case -1: goto $l1916;
                }
                $l1916:;
            }
            goto $l1898;
            $l1899:;
        }
        $tmp1890 = -1;
        goto $l1888;
        $l1888:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$599$91891));
        Iter$599$91891 = NULL;
        switch ($tmp1890) {
            case -1: goto $l1917;
        }
        $l1917:;
    }
}
void org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$collections$List* p_classes) {
    org$pandalanguage$pandac$ClassDecl* $tmp1921;
    org$pandalanguage$pandac$ClassDecl* $tmp1922;
    org$pandalanguage$pandac$ClassDecl* $tmp1923;
    org$pandalanguage$pandac$Position $tmp1925;
    org$pandalanguage$pandac$Annotations* $tmp1926;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp1928;
    panda$collections$Array* $tmp1930;
    panda$collections$Array* $tmp1932;
    panda$core$Object* $tmp1934;
    org$pandalanguage$pandac$MethodDecl* defaultInit1940 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1941;
    org$pandalanguage$pandac$MethodDecl* $tmp1942;
    org$pandalanguage$pandac$Position $tmp1944;
    org$pandalanguage$pandac$Annotations* $tmp1945;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1947;
    panda$collections$Array* $tmp1949;
    panda$collections$Array* $tmp1951;
    org$pandalanguage$pandac$Type* $tmp1953;
    panda$collections$ImmutableArray* $tmp1955;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1957 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1958;
    org$pandalanguage$pandac$MethodDecl* $tmp1959;
    org$pandalanguage$pandac$Position $tmp1961;
    org$pandalanguage$pandac$Annotations* $tmp1962;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1965;
    panda$collections$Array* $tmp1967;
    panda$collections$Array* $tmp1969;
    org$pandalanguage$pandac$Type* $tmp1971;
    panda$collections$ImmutableArray* $tmp1973;
    if (((panda$core$Bit) { self->bareCodeClass == NULL }).value) {
    {
        int $tmp1920;
        {
            {
                $tmp1921 = self->bareCodeClass;
                org$pandalanguage$pandac$ClassDecl* $tmp1924 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
                org$pandalanguage$pandac$Position$init(&$tmp1925);
                org$pandalanguage$pandac$Annotations* $tmp1927 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1927);
                $tmp1926 = $tmp1927;
                org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp1928, ((panda$core$Int64) { 0 }));
                panda$collections$Array* $tmp1931 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1931);
                $tmp1930 = $tmp1931;
                panda$collections$Array* $tmp1933 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1933);
                $tmp1932 = $tmp1933;
                panda$core$Object* $tmp1936 = (($fn1935) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1934 = $tmp1936;
                org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1924, p_source, $tmp1925, p_aliases, NULL, $tmp1926, $tmp1928, &$s1929, ((panda$collections$ListView*) $tmp1930), $tmp1932, ((org$pandalanguage$pandac$Compiler*) $tmp1934)->root);
                $tmp1923 = $tmp1924;
                $tmp1922 = $tmp1923;
                self->bareCodeClass = $tmp1922;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1922));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1923));
                panda$core$Panda$unref$panda$core$Object($tmp1934);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1932));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1930));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1926));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1921));
            }
            ITable* $tmp1937 = ((panda$collections$CollectionWriter*) p_classes)->$class->itable;
            while ($tmp1937->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
                $tmp1937 = $tmp1937->next;
            }
            $fn1939 $tmp1938 = $tmp1937->methods[0];
            $tmp1938(((panda$collections$CollectionWriter*) p_classes), ((panda$core$Object*) self->bareCodeClass));
            org$pandalanguage$pandac$MethodDecl* $tmp1943 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp1944);
            org$pandalanguage$pandac$Annotations* $tmp1946 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1946, ((panda$core$Int64) { 8192 }));
            $tmp1945 = $tmp1946;
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1947, ((panda$core$Int64) { 2 }));
            panda$collections$Array* $tmp1950 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp1950);
            $tmp1949 = $tmp1950;
            panda$collections$Array* $tmp1952 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp1952);
            $tmp1951 = $tmp1952;
            org$pandalanguage$pandac$Type* $tmp1954 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp1953 = $tmp1954;
            panda$collections$ImmutableArray* $tmp1956 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp1956);
            $tmp1955 = $tmp1956;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1943, self->bareCodeClass, $tmp1944, NULL, $tmp1945, $tmp1947, &$s1948, $tmp1949, $tmp1951, $tmp1953, $tmp1955);
            $tmp1942 = $tmp1943;
            $tmp1941 = $tmp1942;
            defaultInit1940 = $tmp1941;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1941));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1942));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1955));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1953));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1951));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1949));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1945));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultInit1940));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1940));
            org$pandalanguage$pandac$MethodDecl* $tmp1960 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp1961);
            org$pandalanguage$pandac$Annotations* $tmp1963 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64 $tmp1964 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 32 }), ((panda$core$Int64) { 8192 }));
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1963, $tmp1964);
            $tmp1962 = $tmp1963;
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1965, ((panda$core$Int64) { 0 }));
            panda$collections$Array* $tmp1968 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp1968);
            $tmp1967 = $tmp1968;
            panda$collections$Array* $tmp1970 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp1970);
            $tmp1969 = $tmp1970;
            org$pandalanguage$pandac$Type* $tmp1972 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp1971 = $tmp1972;
            panda$collections$ImmutableArray* $tmp1974 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp1974);
            $tmp1973 = $tmp1974;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1960, self->bareCodeClass, $tmp1961, NULL, $tmp1962, $tmp1965, &$s1966, $tmp1967, $tmp1969, $tmp1971, $tmp1973);
            $tmp1959 = $tmp1960;
            $tmp1958 = $tmp1959;
            defaultCleanup1957 = $tmp1958;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1958));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1959));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1973));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1971));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1969));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1967));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1962));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultCleanup1957));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1957));
        }
        $tmp1920 = -1;
        goto $l1918;
        $l1918:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1957));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1940));
        defaultInit1940 = NULL;
        defaultCleanup1957 = NULL;
        switch ($tmp1920) {
            case -1: goto $l1975;
        }
        $l1975:;
    }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$627_91979 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1980;
    panda$collections$ImmutableArray* entries1982 = NULL;
    panda$collections$Array* result1987 = NULL;
    panda$collections$Array* $tmp1988;
    panda$collections$Array* $tmp1989;
    panda$core$String* currentPackage1991 = NULL;
    panda$core$String* $tmp1992;
    panda$collections$HashMap* aliases1994 = NULL;
    panda$collections$HashMap* $tmp1995;
    panda$collections$HashMap* $tmp1996;
    panda$collections$Iterator* Iter$632$172001 = NULL;
    panda$collections$Iterator* $tmp2002;
    panda$collections$Iterator* $tmp2003;
    org$pandalanguage$pandac$ASTNode* e2019 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2020;
    panda$core$Object* $tmp2021;
    org$pandalanguage$pandac$ASTNode* $match$633_212029 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2030;
    panda$core$String* name2032 = NULL;
    panda$core$String* $tmp2034;
    panda$core$String* $tmp2035;
    panda$core$String* fullName2037 = NULL;
    panda$core$String$Index$nullable idx2042;
    panda$core$String* alias2045 = NULL;
    panda$core$String* $tmp2046;
    panda$core$String* $tmp2047;
    panda$core$String* $tmp2048;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2049;
    panda$core$String* $tmp2052;
    panda$core$String* $tmp2053;
    org$pandalanguage$pandac$Position position2056;
    org$pandalanguage$pandac$ASTNode* dc2058 = NULL;
    panda$collections$ImmutableArray* annotations2060 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind2062;
    panda$core$String* name2064 = NULL;
    panda$collections$ImmutableArray* generics2066 = NULL;
    panda$collections$ImmutableArray* supertypes2068 = NULL;
    panda$collections$ImmutableArray* members2070 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl2075 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2076;
    org$pandalanguage$pandac$ClassDecl* $tmp2077;
    org$pandalanguage$pandac$Position position2081;
    org$pandalanguage$pandac$ASTNode* dc2083 = NULL;
    panda$collections$ImmutableArray* annotations2085 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind2087;
    panda$core$String* rawName2089 = NULL;
    panda$collections$ImmutableArray* generics2091 = NULL;
    panda$collections$ImmutableArray* parameters2093 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType2095 = NULL;
    panda$collections$ImmutableArray* statements2097 = NULL;
    panda$core$String* name2102 = NULL;
    panda$core$String* $tmp2108;
    panda$core$String* $tmp2109;
    panda$collections$Array* mainParameters2111 = NULL;
    panda$collections$Array* $tmp2112;
    panda$collections$Array* $tmp2113;
    panda$collections$Array* mainStatements2115 = NULL;
    panda$collections$Array* $tmp2116;
    panda$collections$Array* $tmp2117;
    panda$collections$Array* mainArguments2119 = NULL;
    panda$collections$Array* $tmp2120;
    panda$collections$Array* $tmp2121;
    panda$collections$Iterator* Iter$662$332126 = NULL;
    panda$collections$Iterator* $tmp2127;
    panda$collections$Iterator* $tmp2128;
    org$pandalanguage$pandac$ASTNode* p2144 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2145;
    panda$core$Object* $tmp2146;
    org$pandalanguage$pandac$ASTNode* $match$663_372154 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2155;
    org$pandalanguage$pandac$Position position2157;
    panda$core$String* name2159 = NULL;
    org$pandalanguage$pandac$ASTNode* type2161 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2163;
    org$pandalanguage$pandac$Type* $tmp2165;
    org$pandalanguage$pandac$ASTNode* $tmp2167;
    org$pandalanguage$pandac$ASTNode* bareConstruct2172 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2173;
    org$pandalanguage$pandac$ASTNode* $tmp2174;
    org$pandalanguage$pandac$ASTNode* $tmp2176;
    panda$collections$ImmutableArray* $tmp2179;
    org$pandalanguage$pandac$ASTNode* $tmp2181;
    org$pandalanguage$pandac$ASTNode* $tmp2183;
    panda$collections$ImmutableArray* $tmp2185;
    org$pandalanguage$pandac$Type* returnType2187 = NULL;
    org$pandalanguage$pandac$Type* $tmp2188;
    org$pandalanguage$pandac$Type* $tmp2189;
    org$pandalanguage$pandac$Type* $tmp2190;
    org$pandalanguage$pandac$Type* $tmp2192;
    org$pandalanguage$pandac$Type* $tmp2193;
    org$pandalanguage$pandac$Type* $tmp2194;
    org$pandalanguage$pandac$MethodDecl* bareMain2196 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2197;
    org$pandalanguage$pandac$MethodDecl* $tmp2198;
    org$pandalanguage$pandac$Position $tmp2200;
    org$pandalanguage$pandac$Annotations* $tmp2201;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2203;
    panda$collections$Array* $tmp2205;
    panda$collections$ImmutableArray* $tmp2207;
    panda$core$String* $tmp2210;
    panda$core$String* $tmp2211;
    panda$core$Object* $tmp2212;
    org$pandalanguage$pandac$MethodDecl* m2215 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2216;
    org$pandalanguage$pandac$MethodDecl* $tmp2217;
    panda$core$Object* $tmp2219;
    org$pandalanguage$pandac$Position position2224;
    org$pandalanguage$pandac$ASTNode* dc2226 = NULL;
    panda$collections$ImmutableArray* annotations2228 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl2230 = NULL;
    panda$collections$ListView* $returnValue2235;
    panda$collections$ListView* $tmp2236;
    int $tmp1978;
    {
        $tmp1980 = p_file;
        $match$627_91979 = $tmp1980;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1980));
        panda$core$Bit $tmp1981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$627_91979->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1981.value) {
        {
            panda$collections$ImmutableArray** $tmp1983 = ((panda$collections$ImmutableArray**) ((char*) $match$627_91979->$data + 0));
            entries1982 = *$tmp1983;
            int $tmp1986;
            {
                panda$collections$Array* $tmp1990 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1990);
                $tmp1989 = $tmp1990;
                $tmp1988 = $tmp1989;
                result1987 = $tmp1988;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1988));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1989));
                $tmp1992 = &$s1993;
                currentPackage1991 = $tmp1992;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1992));
                panda$collections$HashMap* $tmp1997 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp1997);
                $tmp1996 = $tmp1997;
                $tmp1995 = $tmp1996;
                aliases1994 = $tmp1995;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1995));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1996));
                {
                    int $tmp2000;
                    {
                        ITable* $tmp2004 = ((panda$collections$Iterable*) entries1982)->$class->itable;
                        while ($tmp2004->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2004 = $tmp2004->next;
                        }
                        $fn2006 $tmp2005 = $tmp2004->methods[0];
                        panda$collections$Iterator* $tmp2007 = $tmp2005(((panda$collections$Iterable*) entries1982));
                        $tmp2003 = $tmp2007;
                        $tmp2002 = $tmp2003;
                        Iter$632$172001 = $tmp2002;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2002));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2003));
                        $l2008:;
                        ITable* $tmp2011 = Iter$632$172001->$class->itable;
                        while ($tmp2011->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2011 = $tmp2011->next;
                        }
                        $fn2013 $tmp2012 = $tmp2011->methods[0];
                        panda$core$Bit $tmp2014 = $tmp2012(Iter$632$172001);
                        panda$core$Bit $tmp2015 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2014);
                        bool $tmp2010 = $tmp2015.value;
                        if (!$tmp2010) goto $l2009;
                        {
                            int $tmp2018;
                            {
                                ITable* $tmp2022 = Iter$632$172001->$class->itable;
                                while ($tmp2022->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2022 = $tmp2022->next;
                                }
                                $fn2024 $tmp2023 = $tmp2022->methods[1];
                                panda$core$Object* $tmp2025 = $tmp2023(Iter$632$172001);
                                $tmp2021 = $tmp2025;
                                $tmp2020 = ((org$pandalanguage$pandac$ASTNode*) $tmp2021);
                                e2019 = $tmp2020;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2020));
                                panda$core$Panda$unref$panda$core$Object($tmp2021);
                                int $tmp2028;
                                {
                                    $tmp2030 = e2019;
                                    $match$633_212029 = $tmp2030;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2030));
                                    panda$core$Bit $tmp2031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$633_212029->$rawValue, ((panda$core$Int64) { 30 }));
                                    if ($tmp2031.value) {
                                    {
                                        panda$core$String** $tmp2033 = ((panda$core$String**) ((char*) $match$633_212029->$data + 16));
                                        name2032 = *$tmp2033;
                                        {
                                            $tmp2034 = currentPackage1991;
                                            $tmp2035 = name2032;
                                            currentPackage1991 = $tmp2035;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2035));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2034));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp2036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$633_212029->$rawValue, ((panda$core$Int64) { 46 }));
                                    if ($tmp2036.value) {
                                    {
                                        panda$core$String** $tmp2038 = ((panda$core$String**) ((char*) $match$633_212029->$data + 16));
                                        fullName2037 = *$tmp2038;
                                        int $tmp2041;
                                        {
                                            panda$core$String$Index$nullable $tmp2044 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName2037, &$s2043);
                                            idx2042 = $tmp2044;
                                            memset(&alias2045, 0, sizeof(alias2045));
                                            if (((panda$core$Bit) { idx2042.nonnull }).value) {
                                            {
                                                {
                                                    $tmp2046 = alias2045;
                                                    panda$core$String$Index $tmp2050 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName2037, ((panda$core$String$Index) idx2042.value));
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp2049, ((panda$core$String$Index$nullable) { $tmp2050, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                                    panda$core$String* $tmp2051 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName2037, $tmp2049);
                                                    $tmp2048 = $tmp2051;
                                                    $tmp2047 = $tmp2048;
                                                    alias2045 = $tmp2047;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2047));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2048));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2046));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2052 = alias2045;
                                                    $tmp2053 = fullName2037;
                                                    alias2045 = $tmp2053;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2053));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2052));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1994, ((panda$collections$Key*) alias2045), ((panda$core$Object*) fullName2037));
                                        }
                                        $tmp2041 = -1;
                                        goto $l2039;
                                        $l2039:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias2045));
                                        switch ($tmp2041) {
                                            case -1: goto $l2054;
                                        }
                                        $l2054:;
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp2055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$633_212029->$rawValue, ((panda$core$Int64) { 11 }));
                                    if ($tmp2055.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2057 = ((org$pandalanguage$pandac$Position*) ((char*) $match$633_212029->$data + 0));
                                        position2056 = *$tmp2057;
                                        org$pandalanguage$pandac$ASTNode** $tmp2059 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$633_212029->$data + 16));
                                        dc2058 = *$tmp2059;
                                        panda$collections$ImmutableArray** $tmp2061 = ((panda$collections$ImmutableArray**) ((char*) $match$633_212029->$data + 24));
                                        annotations2060 = *$tmp2061;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp2063 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$633_212029->$data + 32));
                                        kind2062 = *$tmp2063;
                                        panda$core$String** $tmp2065 = ((panda$core$String**) ((char*) $match$633_212029->$data + 40));
                                        name2064 = *$tmp2065;
                                        panda$collections$ImmutableArray** $tmp2067 = ((panda$collections$ImmutableArray**) ((char*) $match$633_212029->$data + 48));
                                        generics2066 = *$tmp2067;
                                        panda$collections$ImmutableArray** $tmp2069 = ((panda$collections$ImmutableArray**) ((char*) $match$633_212029->$data + 56));
                                        supertypes2068 = *$tmp2069;
                                        panda$collections$ImmutableArray** $tmp2071 = ((panda$collections$ImmutableArray**) ((char*) $match$633_212029->$data + 64));
                                        members2070 = *$tmp2071;
                                        int $tmp2074;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp2078 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1994), currentPackage1991, position2056, dc2058, annotations2060, kind2062, name2064, generics2066, supertypes2068, members2070);
                                            $tmp2077 = $tmp2078;
                                            $tmp2076 = $tmp2077;
                                            cl2075 = $tmp2076;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2076));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2077));
                                            if (((panda$core$Bit) { cl2075 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl2075, result1987);
                                            }
                                            }
                                        }
                                        $tmp2074 = -1;
                                        goto $l2072;
                                        $l2072:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2075));
                                        cl2075 = NULL;
                                        switch ($tmp2074) {
                                            case -1: goto $l2079;
                                        }
                                        $l2079:;
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp2080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$633_212029->$rawValue, ((panda$core$Int64) { 26 }));
                                    if ($tmp2080.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2082 = ((org$pandalanguage$pandac$Position*) ((char*) $match$633_212029->$data + 0));
                                        position2081 = *$tmp2082;
                                        org$pandalanguage$pandac$ASTNode** $tmp2084 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$633_212029->$data + 16));
                                        dc2083 = *$tmp2084;
                                        panda$collections$ImmutableArray** $tmp2086 = ((panda$collections$ImmutableArray**) ((char*) $match$633_212029->$data + 24));
                                        annotations2085 = *$tmp2086;
                                        org$pandalanguage$pandac$MethodDecl$Kind* $tmp2088 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$633_212029->$data + 32));
                                        kind2087 = *$tmp2088;
                                        panda$core$String** $tmp2090 = ((panda$core$String**) ((char*) $match$633_212029->$data + 40));
                                        rawName2089 = *$tmp2090;
                                        panda$collections$ImmutableArray** $tmp2092 = ((panda$collections$ImmutableArray**) ((char*) $match$633_212029->$data + 48));
                                        generics2091 = *$tmp2092;
                                        panda$collections$ImmutableArray** $tmp2094 = ((panda$collections$ImmutableArray**) ((char*) $match$633_212029->$data + 56));
                                        parameters2093 = *$tmp2094;
                                        org$pandalanguage$pandac$ASTNode** $tmp2096 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$633_212029->$data + 64));
                                        rawReturnType2095 = *$tmp2096;
                                        panda$collections$ImmutableArray** $tmp2098 = ((panda$collections$ImmutableArray**) ((char*) $match$633_212029->$data + 72));
                                        statements2097 = *$tmp2098;
                                        int $tmp2101;
                                        {
                                            org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases1994), ((panda$collections$List*) result1987));
                                            memset(&name2102, 0, sizeof(name2102));
                                            panda$core$Bit $tmp2104 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(rawName2089, &$s2103);
                                            if ($tmp2104.value) {
                                            {
                                                int $tmp2107;
                                                {
                                                    {
                                                        $tmp2108 = name2102;
                                                        $tmp2109 = &$s2110;
                                                        name2102 = $tmp2109;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2109));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2108));
                                                    }
                                                    panda$collections$Array* $tmp2114 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2114);
                                                    $tmp2113 = $tmp2114;
                                                    $tmp2112 = $tmp2113;
                                                    mainParameters2111 = $tmp2112;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2112));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2113));
                                                    panda$collections$Array* $tmp2118 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2118);
                                                    $tmp2117 = $tmp2118;
                                                    $tmp2116 = $tmp2117;
                                                    mainStatements2115 = $tmp2116;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2116));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2117));
                                                    panda$collections$Array* $tmp2122 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2122);
                                                    $tmp2121 = $tmp2122;
                                                    $tmp2120 = $tmp2121;
                                                    mainArguments2119 = $tmp2120;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2120));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2121));
                                                    {
                                                        int $tmp2125;
                                                        {
                                                            ITable* $tmp2129 = ((panda$collections$Iterable*) parameters2093)->$class->itable;
                                                            while ($tmp2129->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                                                $tmp2129 = $tmp2129->next;
                                                            }
                                                            $fn2131 $tmp2130 = $tmp2129->methods[0];
                                                            panda$collections$Iterator* $tmp2132 = $tmp2130(((panda$collections$Iterable*) parameters2093));
                                                            $tmp2128 = $tmp2132;
                                                            $tmp2127 = $tmp2128;
                                                            Iter$662$332126 = $tmp2127;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2127));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2128));
                                                            $l2133:;
                                                            ITable* $tmp2136 = Iter$662$332126->$class->itable;
                                                            while ($tmp2136->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                $tmp2136 = $tmp2136->next;
                                                            }
                                                            $fn2138 $tmp2137 = $tmp2136->methods[0];
                                                            panda$core$Bit $tmp2139 = $tmp2137(Iter$662$332126);
                                                            panda$core$Bit $tmp2140 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2139);
                                                            bool $tmp2135 = $tmp2140.value;
                                                            if (!$tmp2135) goto $l2134;
                                                            {
                                                                int $tmp2143;
                                                                {
                                                                    ITable* $tmp2147 = Iter$662$332126->$class->itable;
                                                                    while ($tmp2147->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                        $tmp2147 = $tmp2147->next;
                                                                    }
                                                                    $fn2149 $tmp2148 = $tmp2147->methods[1];
                                                                    panda$core$Object* $tmp2150 = $tmp2148(Iter$662$332126);
                                                                    $tmp2146 = $tmp2150;
                                                                    $tmp2145 = ((org$pandalanguage$pandac$ASTNode*) $tmp2146);
                                                                    p2144 = $tmp2145;
                                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2145));
                                                                    panda$core$Panda$unref$panda$core$Object($tmp2146);
                                                                    int $tmp2153;
                                                                    {
                                                                        $tmp2155 = p2144;
                                                                        $match$663_372154 = $tmp2155;
                                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2155));
                                                                        panda$core$Bit $tmp2156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$663_372154->$rawValue, ((panda$core$Int64) { 31 }));
                                                                        if ($tmp2156.value) {
                                                                        {
                                                                            org$pandalanguage$pandac$Position* $tmp2158 = ((org$pandalanguage$pandac$Position*) ((char*) $match$663_372154->$data + 0));
                                                                            position2157 = *$tmp2158;
                                                                            panda$core$String** $tmp2160 = ((panda$core$String**) ((char*) $match$663_372154->$data + 16));
                                                                            name2159 = *$tmp2160;
                                                                            org$pandalanguage$pandac$ASTNode** $tmp2162 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$663_372154->$data + 24));
                                                                            type2161 = *$tmp2162;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2164 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                                                            org$pandalanguage$pandac$Type* $tmp2166 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type2161);
                                                                            $tmp2165 = $tmp2166;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp2164, name2159, $tmp2165);
                                                                            $tmp2163 = $tmp2164;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainParameters2111, ((panda$core$Object*) $tmp2163));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2163));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2165));
                                                                            org$pandalanguage$pandac$ASTNode* $tmp2168 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2168, ((panda$core$Int64) { 20 }), position2157, name2159);
                                                                            $tmp2167 = $tmp2168;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainArguments2119, ((panda$core$Object*) $tmp2167));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2167));
                                                                        }
                                                                        }
                                                                        else {
                                                                        {
                                                                            PANDA_ASSERT(((panda$core$Bit) { false }).value);
                                                                        }
                                                                        }
                                                                    }
                                                                    $tmp2153 = -1;
                                                                    goto $l2151;
                                                                    $l2151:;
                                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2155));
                                                                    switch ($tmp2153) {
                                                                        case -1: goto $l2169;
                                                                    }
                                                                    $l2169:;
                                                                }
                                                                $tmp2143 = -1;
                                                                goto $l2141;
                                                                $l2141:;
                                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p2144));
                                                                p2144 = NULL;
                                                                switch ($tmp2143) {
                                                                    case -1: goto $l2170;
                                                                }
                                                                $l2170:;
                                                            }
                                                            goto $l2133;
                                                            $l2134:;
                                                        }
                                                        $tmp2125 = -1;
                                                        goto $l2123;
                                                        $l2123:;
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$662$332126));
                                                        Iter$662$332126 = NULL;
                                                        switch ($tmp2125) {
                                                            case -1: goto $l2171;
                                                        }
                                                        $l2171:;
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp2175 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2177 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2177, ((panda$core$Int64) { 20 }), position2081, &$s2178);
                                                    $tmp2176 = $tmp2177;
                                                    panda$collections$ImmutableArray* $tmp2180 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                                                    panda$collections$ImmutableArray$init($tmp2180);
                                                    $tmp2179 = $tmp2180;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2175, ((panda$core$Int64) { 8 }), position2081, $tmp2176, $tmp2179);
                                                    $tmp2174 = $tmp2175;
                                                    $tmp2173 = $tmp2174;
                                                    bareConstruct2172 = $tmp2173;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2173));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2174));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2179));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2176));
                                                    org$pandalanguage$pandac$ASTNode* $tmp2182 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2184 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2184, ((panda$core$Int64) { 15 }), position2081, bareConstruct2172, name2102);
                                                    $tmp2183 = $tmp2184;
                                                    panda$collections$ImmutableArray* $tmp2186 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainArguments2119);
                                                    $tmp2185 = $tmp2186;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2182, ((panda$core$Int64) { 8 }), position2081, $tmp2183, $tmp2185);
                                                    $tmp2181 = $tmp2182;
                                                    panda$collections$Array$add$panda$collections$Array$T(mainStatements2115, ((panda$core$Object*) $tmp2181));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2181));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2185));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2183));
                                                    memset(&returnType2187, 0, sizeof(returnType2187));
                                                    if (((panda$core$Bit) { rawReturnType2095 != NULL }).value) {
                                                    {
                                                        {
                                                            $tmp2188 = returnType2187;
                                                            org$pandalanguage$pandac$Type* $tmp2191 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, rawReturnType2095);
                                                            $tmp2190 = $tmp2191;
                                                            $tmp2189 = $tmp2190;
                                                            returnType2187 = $tmp2189;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2189));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2190));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2188));
                                                        }
                                                    }
                                                    }
                                                    else {
                                                    {
                                                        {
                                                            $tmp2192 = returnType2187;
                                                            org$pandalanguage$pandac$Type* $tmp2195 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                            $tmp2194 = $tmp2195;
                                                            $tmp2193 = $tmp2194;
                                                            returnType2187 = $tmp2193;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2193));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2194));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2192));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$MethodDecl* $tmp2199 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                                                    org$pandalanguage$pandac$Position$init(&$tmp2200);
                                                    org$pandalanguage$pandac$Annotations* $tmp2202 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                                                    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2202, ((panda$core$Int64) { 16 }));
                                                    $tmp2201 = $tmp2202;
                                                    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2203, ((panda$core$Int64) { 0 }));
                                                    panda$collections$Array* $tmp2206 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2206);
                                                    $tmp2205 = $tmp2206;
                                                    panda$collections$ImmutableArray* $tmp2208 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainStatements2115);
                                                    $tmp2207 = $tmp2208;
                                                    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2199, self->bareCodeClass, $tmp2200, NULL, $tmp2201, $tmp2203, &$s2204, $tmp2205, mainParameters2111, returnType2187, $tmp2207);
                                                    $tmp2198 = $tmp2199;
                                                    $tmp2197 = $tmp2198;
                                                    bareMain2196 = $tmp2197;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2197));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2198));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2207));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2205));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2201));
                                                    panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) bareMain2196));
                                                }
                                                $tmp2107 = -1;
                                                goto $l2105;
                                                $l2105:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareMain2196));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType2187));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareConstruct2172));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainArguments2119));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainStatements2115));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainParameters2111));
                                                mainParameters2111 = NULL;
                                                mainStatements2115 = NULL;
                                                mainArguments2119 = NULL;
                                                bareConstruct2172 = NULL;
                                                bareMain2196 = NULL;
                                                switch ($tmp2107) {
                                                    case -1: goto $l2209;
                                                }
                                                $l2209:;
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2210 = name2102;
                                                    $tmp2211 = rawName2089;
                                                    name2102 = $tmp2211;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2211));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2210));
                                                }
                                            }
                                            }
                                            panda$core$Object* $tmp2214 = (($fn2213) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp2212 = $tmp2214;
                                            panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2212)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2212);
                                            org$pandalanguage$pandac$MethodDecl* $tmp2218 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, self->bareCodeClass, position2081, dc2083, annotations2085, kind2087, name2102, generics2091, parameters2093, rawReturnType2095, statements2097);
                                            $tmp2217 = $tmp2218;
                                            $tmp2216 = $tmp2217;
                                            m2215 = $tmp2216;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2216));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2217));
                                            panda$core$Object* $tmp2221 = (($fn2220) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp2219 = $tmp2221;
                                            panda$collections$Stack$pop$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2219)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2219);
                                            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) m2215));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) m2215));
                                        }
                                        $tmp2101 = -1;
                                        goto $l2099;
                                        $l2099:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2215));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2102));
                                        m2215 = NULL;
                                        switch ($tmp2101) {
                                            case -1: goto $l2222;
                                        }
                                        $l2222:;
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp2223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$633_212029->$rawValue, ((panda$core$Int64) { 16 }));
                                    if ($tmp2223.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2225 = ((org$pandalanguage$pandac$Position*) ((char*) $match$633_212029->$data + 0));
                                        position2224 = *$tmp2225;
                                        org$pandalanguage$pandac$ASTNode** $tmp2227 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$633_212029->$data + 16));
                                        dc2226 = *$tmp2227;
                                        panda$collections$ImmutableArray** $tmp2229 = ((panda$collections$ImmutableArray**) ((char*) $match$633_212029->$data + 24));
                                        annotations2228 = *$tmp2229;
                                        org$pandalanguage$pandac$ASTNode** $tmp2231 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$633_212029->$data + 32));
                                        varDecl2230 = *$tmp2231;
                                        org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases1994), ((panda$collections$List*) result1987));
                                        org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, self->bareCodeClass, position2224, dc2226, annotations2228, varDecl2230);
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
                                $tmp2028 = -1;
                                goto $l2026;
                                $l2026:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2030));
                                switch ($tmp2028) {
                                    case -1: goto $l2232;
                                }
                                $l2232:;
                            }
                            $tmp2018 = -1;
                            goto $l2016;
                            $l2016:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2019));
                            e2019 = NULL;
                            switch ($tmp2018) {
                                case -1: goto $l2233;
                            }
                            $l2233:;
                        }
                        goto $l2008;
                        $l2009:;
                    }
                    $tmp2000 = -1;
                    goto $l1998;
                    $l1998:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$632$172001));
                    Iter$632$172001 = NULL;
                    switch ($tmp2000) {
                        case -1: goto $l2234;
                    }
                    $l2234:;
                }
                $tmp2236 = ((panda$collections$ListView*) result1987);
                $returnValue2235 = $tmp2236;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2236));
                $tmp1986 = 0;
                goto $l1984;
                $l2237:;
                $tmp1978 = 0;
                goto $l1976;
                $l2238:;
                return $returnValue2235;
            }
            $l1984:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases1994));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1991));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1987));
            result1987 = NULL;
            currentPackage1991 = NULL;
            aliases1994 = NULL;
            switch ($tmp1986) {
                case 0: goto $l2237;
            }
            $l2240:;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp1978 = -1;
    goto $l1976;
    $l1976:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1980));
    switch ($tmp1978) {
        case -1: goto $l2241;
        case 0: goto $l2238;
    }
    $l2241:;
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp2244;
    {
    }
    $tmp2244 = -1;
    goto $l2242;
    $l2242:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2244) {
        case -1: goto $l2245;
    }
    $l2245:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->bareCodeClass));
}

