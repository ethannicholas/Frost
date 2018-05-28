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
#include "panda/core/Range.LTpanda/core/Int64.GT.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Scanner$cleanup, org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit, org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT} };

typedef panda$collections$Iterator* (*$fn88)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn95)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn106)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn117)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn158)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn165)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn176)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn193)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn223)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn230)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn241)(panda$collections$Iterator*);
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
typedef panda$collections$Iterator* (*$fn933)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn940)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn951)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn973)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn980)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn991)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1005)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1012)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1023)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1046)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1053)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1064)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1076)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1095)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1102)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1113)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1187)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1194)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1205)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1237)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1256)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1263)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1274)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1455)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1462)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1473)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1537)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1544)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1555)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1587)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1607)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1614)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1625)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1636)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1639)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1674)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1681)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1692)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1724)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1731)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1742)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1831)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1838)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1849)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1863)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1879)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1886)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1897)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1918)(panda$core$Weak*);
typedef void (*$fn1922)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Object* (*$fn1960)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1994)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2001)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2012)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2119)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2126)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2137)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2201)(panda$core$Weak*);
typedef panda$core$Object* (*$fn2212)(panda$core$Weak*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 20, -2825162788070047205, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, -230432251521796329, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s1763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s1931 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1949 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2031 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static panda$core$String $s2192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp2;
    panda$core$Weak* $tmp3;
    panda$core$Weak* $tmp4;
    self->compiler = NULL;
    self->bareCodeClass = NULL;
    self->source = NULL;
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
    org$pandalanguage$pandac$ASTNode* $match$25_99 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp10;
    org$pandalanguage$pandac$IRNode* node12 = NULL;
    org$pandalanguage$pandac$IRNode* $match$27_1717 = NULL;
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
    panda$collections$Iterator* Iter$41$1783 = NULL;
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
    org$pandalanguage$pandac$parser$Token$Kind $match$47_17137;
    org$pandalanguage$pandac$Type$Kind $tmp139;
    org$pandalanguage$pandac$Type$Kind $tmp141;
    org$pandalanguage$pandac$Type$Kind $tmp143;
    org$pandalanguage$pandac$Type$Kind $tmp145;
    panda$collections$Array* parameters146 = NULL;
    panda$collections$Array* $tmp147;
    panda$collections$Array* $tmp148;
    panda$collections$Iterator* Iter$60$17153 = NULL;
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
        $match$25_99 = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25_99->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp11.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp13 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$25_99->$data + 0));
            node12 = *$tmp13;
            int $tmp16;
            {
                $tmp18 = node12;
                $match$27_1717 = $tmp18;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
                panda$core$Bit $tmp19 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$27_1717->$rawValue, ((panda$core$Int64) { 38 }));
                if ($tmp19.value) {
                {
                    org$pandalanguage$pandac$Type** $tmp21 = ((org$pandalanguage$pandac$Type**) ((char*) $match$27_1717->$data + 16));
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
        panda$core$Bit $tmp28 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25_99->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp28.value) {
        {
            org$pandalanguage$pandac$Position* $tmp30 = ((org$pandalanguage$pandac$Position*) ((char*) $match$25_99->$data + 0));
            position29 = *$tmp30;
            panda$core$String** $tmp32 = ((panda$core$String**) ((char*) $match$25_99->$data + 16));
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
        panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25_99->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp39.value) {
        {
            org$pandalanguage$pandac$Position* $tmp41 = ((org$pandalanguage$pandac$Position*) ((char*) $match$25_99->$data + 0));
            position40 = *$tmp41;
            org$pandalanguage$pandac$ASTNode** $tmp43 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$25_99->$data + 16));
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
        panda$core$Bit $tmp66 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25_99->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp66.value) {
        {
            org$pandalanguage$pandac$Position* $tmp68 = ((org$pandalanguage$pandac$Position*) ((char*) $match$25_99->$data + 0));
            position67 = *$tmp68;
            panda$core$String** $tmp70 = ((panda$core$String**) ((char*) $match$25_99->$data + 16));
            base69 = *$tmp70;
            panda$collections$ImmutableArray** $tmp72 = ((panda$collections$ImmutableArray**) ((char*) $match$25_99->$data + 24));
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
                        Iter$41$1783 = $tmp84;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp84));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
                        $l90:;
                        ITable* $tmp93 = Iter$41$1783->$class->itable;
                        while ($tmp93->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp93 = $tmp93->next;
                        }
                        $fn95 $tmp94 = $tmp93->methods[0];
                        panda$core$Bit $tmp96 = $tmp94(Iter$41$1783);
                        panda$core$Bit $tmp97 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp96);
                        bool $tmp92 = $tmp97.value;
                        if (!$tmp92) goto $l91;
                        {
                            int $tmp100;
                            {
                                ITable* $tmp104 = Iter$41$1783->$class->itable;
                                while ($tmp104->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp104 = $tmp104->next;
                                }
                                $fn106 $tmp105 = $tmp104->methods[1];
                                panda$core$Object* $tmp107 = $tmp105(Iter$41$1783);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$41$1783));
                    Iter$41$1783 = NULL;
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
        panda$core$Bit $tmp124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25_99->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp124.value) {
        {
            org$pandalanguage$pandac$Position* $tmp126 = ((org$pandalanguage$pandac$Position*) ((char*) $match$25_99->$data + 0));
            position125 = *$tmp126;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp128 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$25_99->$data + 16));
            kind127 = *$tmp128;
            panda$collections$ImmutableArray** $tmp130 = ((panda$collections$ImmutableArray**) ((char*) $match$25_99->$data + 24));
            rawParameters129 = *$tmp130;
            org$pandalanguage$pandac$ASTNode** $tmp132 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$25_99->$data + 32));
            rawReturnType131 = *$tmp132;
            int $tmp135;
            {
                memset(&typeKind136, 0, sizeof(typeKind136));
                {
                    $match$47_17137 = kind127;
                    panda$core$Bit $tmp138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_17137.$rawValue, ((panda$core$Int64) { 90 }));
                    if ($tmp138.value) {
                    {
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp139, ((panda$core$Int64) { 14 }));
                        typeKind136 = $tmp139;
                    }
                    }
                    else {
                    panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_17137.$rawValue, ((panda$core$Int64) { 91 }));
                    if ($tmp140.value) {
                    {
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp141, ((panda$core$Int64) { 15 }));
                        typeKind136 = $tmp141;
                    }
                    }
                    else {
                    panda$core$Bit $tmp142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_17137.$rawValue, ((panda$core$Int64) { 92 }));
                    if ($tmp142.value) {
                    {
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp143, ((panda$core$Int64) { 16 }));
                        typeKind136 = $tmp143;
                    }
                    }
                    else {
                    panda$core$Bit $tmp144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_17137.$rawValue, ((panda$core$Int64) { 93 }));
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
                        Iter$60$17153 = $tmp154;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
                        $l160:;
                        ITable* $tmp163 = Iter$60$17153->$class->itable;
                        while ($tmp163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp163 = $tmp163->next;
                        }
                        $fn165 $tmp164 = $tmp163->methods[0];
                        panda$core$Bit $tmp166 = $tmp164(Iter$60$17153);
                        panda$core$Bit $tmp167 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp166);
                        bool $tmp162 = $tmp167.value;
                        if (!$tmp162) goto $l161;
                        {
                            int $tmp170;
                            {
                                ITable* $tmp174 = Iter$60$17153->$class->itable;
                                while ($tmp174->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp174 = $tmp174->next;
                                }
                                $fn176 $tmp175 = $tmp174->methods[1];
                                panda$core$Object* $tmp177 = $tmp175(Iter$60$17153);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$60$17153));
                    Iter$60$17153 = NULL;
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
panda$core$Int64 org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Position p_position, panda$core$Int64 p_flags, panda$core$Int64 p_flag) {
    panda$core$Int64 $returnValue206;
    panda$core$Int64 $tmp203 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_flags, p_flag);
    panda$core$Bit $tmp204 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp203, ((panda$core$Int64) { 0 }));
    if ($tmp204.value) {
    {
        org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s205);
    }
    }
    panda$core$Int64 $tmp207 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_flags, p_flag);
    $returnValue206 = $tmp207;
    return $returnValue206;
}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, panda$collections$ImmutableArray* p_a) {
    panda$core$Int64 flags212;
    panda$collections$Array* expressions213 = NULL;
    panda$collections$Array* $tmp214;
    panda$collections$Iterator* Iter$86$9218 = NULL;
    panda$collections$Iterator* $tmp219;
    panda$collections$Iterator* $tmp220;
    org$pandalanguage$pandac$ASTNode* c236 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp237;
    panda$core$Object* $tmp238;
    org$pandalanguage$pandac$ASTNode* $match$87_13246 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp247;
    org$pandalanguage$pandac$Position p249;
    panda$core$String* text251 = NULL;
    org$pandalanguage$pandac$ASTNode* rawExpr253 = NULL;
    org$pandalanguage$pandac$ASTNode* expr258 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp259;
    panda$core$String* $match$90_21263 = NULL;
    panda$core$String* $tmp264;
    panda$collections$Array* $tmp306;
    panda$collections$Array* $tmp307;
    panda$collections$Array* $tmp308;
    org$pandalanguage$pandac$Annotations$Expression* $tmp310;
    org$pandalanguage$pandac$ASTNode* $tmp312;
    org$pandalanguage$pandac$ASTNode* $tmp313;
    panda$collections$Array* $tmp316;
    panda$collections$Array* $tmp317;
    panda$collections$Array* $tmp318;
    org$pandalanguage$pandac$Annotations$Expression* $tmp320;
    org$pandalanguage$pandac$ASTNode* $tmp322;
    org$pandalanguage$pandac$ASTNode* $tmp323;
    panda$collections$Array* $tmp326;
    panda$collections$Array* $tmp327;
    panda$collections$Array* $tmp328;
    org$pandalanguage$pandac$Annotations$Expression* $tmp330;
    org$pandalanguage$pandac$ASTNode* $tmp332;
    org$pandalanguage$pandac$ASTNode* $tmp333;
    panda$collections$Array* $tmp336;
    panda$collections$Array* $tmp337;
    panda$collections$Array* $tmp338;
    org$pandalanguage$pandac$Annotations$Expression* $tmp340;
    org$pandalanguage$pandac$ASTNode* $tmp342;
    org$pandalanguage$pandac$ASTNode* $tmp343;
    panda$core$String* $tmp344;
    panda$core$String* $tmp345;
    panda$core$String* $tmp351;
    panda$core$String* $tmp352;
    org$pandalanguage$pandac$Annotations* $returnValue361;
    org$pandalanguage$pandac$Annotations* $tmp362;
    org$pandalanguage$pandac$Annotations* $tmp363;
    int $tmp211;
    {
        flags212 = ((panda$core$Int64) { 0 });
        $tmp214 = NULL;
        expressions213 = $tmp214;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp214));
        {
            int $tmp217;
            {
                ITable* $tmp221 = ((panda$collections$Iterable*) p_a)->$class->itable;
                while ($tmp221->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp221 = $tmp221->next;
                }
                $fn223 $tmp222 = $tmp221->methods[0];
                panda$collections$Iterator* $tmp224 = $tmp222(((panda$collections$Iterable*) p_a));
                $tmp220 = $tmp224;
                $tmp219 = $tmp220;
                Iter$86$9218 = $tmp219;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp219));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
                $l225:;
                ITable* $tmp228 = Iter$86$9218->$class->itable;
                while ($tmp228->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp228 = $tmp228->next;
                }
                $fn230 $tmp229 = $tmp228->methods[0];
                panda$core$Bit $tmp231 = $tmp229(Iter$86$9218);
                panda$core$Bit $tmp232 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp231);
                bool $tmp227 = $tmp232.value;
                if (!$tmp227) goto $l226;
                {
                    int $tmp235;
                    {
                        ITable* $tmp239 = Iter$86$9218->$class->itable;
                        while ($tmp239->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp239 = $tmp239->next;
                        }
                        $fn241 $tmp240 = $tmp239->methods[1];
                        panda$core$Object* $tmp242 = $tmp240(Iter$86$9218);
                        $tmp238 = $tmp242;
                        $tmp237 = ((org$pandalanguage$pandac$ASTNode*) $tmp238);
                        c236 = $tmp237;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp237));
                        panda$core$Panda$unref$panda$core$Object($tmp238);
                        int $tmp245;
                        {
                            $tmp247 = c236;
                            $match$87_13246 = $tmp247;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp247));
                            panda$core$Bit $tmp248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$87_13246->$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp248.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp250 = ((org$pandalanguage$pandac$Position*) ((char*) $match$87_13246->$data + 0));
                                p249 = *$tmp250;
                                panda$core$String** $tmp252 = ((panda$core$String**) ((char*) $match$87_13246->$data + 16));
                                text251 = *$tmp252;
                                org$pandalanguage$pandac$ASTNode** $tmp254 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$87_13246->$data + 24));
                                rawExpr253 = *$tmp254;
                                int $tmp257;
                                {
                                    $tmp259 = rawExpr253;
                                    expr258 = $tmp259;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp259));
                                    int $tmp262;
                                    {
                                        $tmp264 = text251;
                                        $match$90_21263 = $tmp264;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp264));
                                        panda$core$Bit $tmp266 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21263, &$s265);
                                        if ($tmp266.value) {
                                        {
                                            panda$core$Int64 $tmp267 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p249, flags212, ((panda$core$Int64) { 2 }));
                                            flags212 = $tmp267;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp269 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21263, &$s268);
                                        if ($tmp269.value) {
                                        {
                                            panda$core$Int64 $tmp270 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p249, flags212, ((panda$core$Int64) { 4 }));
                                            flags212 = $tmp270;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp272 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21263, &$s271);
                                        if ($tmp272.value) {
                                        {
                                            panda$core$Int64 $tmp273 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p249, flags212, ((panda$core$Int64) { 8 }));
                                            flags212 = $tmp273;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp275 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21263, &$s274);
                                        if ($tmp275.value) {
                                        {
                                            panda$core$Int64 $tmp276 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p249, flags212, ((panda$core$Int64) { 16 }));
                                            flags212 = $tmp276;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp278 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21263, &$s277);
                                        if ($tmp278.value) {
                                        {
                                            panda$core$Int64 $tmp279 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p249, flags212, ((panda$core$Int64) { 32 }));
                                            flags212 = $tmp279;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp281 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21263, &$s280);
                                        if ($tmp281.value) {
                                        {
                                            panda$core$Int64 $tmp282 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p249, flags212, ((panda$core$Int64) { 64 }));
                                            flags212 = $tmp282;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp284 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21263, &$s283);
                                        if ($tmp284.value) {
                                        {
                                            panda$core$Int64 $tmp285 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p249, flags212, ((panda$core$Int64) { 128 }));
                                            flags212 = $tmp285;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp287 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21263, &$s286);
                                        if ($tmp287.value) {
                                        {
                                            panda$core$Int64 $tmp288 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p249, flags212, ((panda$core$Int64) { 256 }));
                                            flags212 = $tmp288;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp290 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21263, &$s289);
                                        if ($tmp290.value) {
                                        {
                                            panda$core$Int64 $tmp291 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p249, flags212, ((panda$core$Int64) { 512 }));
                                            flags212 = $tmp291;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp293 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21263, &$s292);
                                        if ($tmp293.value) {
                                        {
                                            panda$core$Int64 $tmp294 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p249, flags212, ((panda$core$Int64) { 1024 }));
                                            flags212 = $tmp294;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp296 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21263, &$s295);
                                        if ($tmp296.value) {
                                        {
                                            panda$core$Int64 $tmp297 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p249, flags212, ((panda$core$Int64) { 2048 }));
                                            flags212 = $tmp297;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp299 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21263, &$s298);
                                        if ($tmp299.value) {
                                        {
                                            panda$core$Int64 $tmp300 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p249, flags212, ((panda$core$Int64) { 4096 }));
                                            flags212 = $tmp300;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp302 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21263, &$s301);
                                        if ($tmp302.value) {
                                        {
                                            panda$core$Int64 $tmp303 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p249, flags212, ((panda$core$Int64) { 16384 }));
                                            flags212 = $tmp303;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp305 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21263, &$s304);
                                        if ($tmp305.value) {
                                        {
                                            if (((panda$core$Bit) { expressions213 == NULL }).value) {
                                            {
                                                {
                                                    $tmp306 = expressions213;
                                                    panda$collections$Array* $tmp309 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp309);
                                                    $tmp308 = $tmp309;
                                                    $tmp307 = $tmp308;
                                                    expressions213 = $tmp307;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp307));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp308));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp311 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp311, ((panda$core$Int64) { 0 }), expr258);
                                            $tmp310 = $tmp311;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions213, ((panda$core$Object*) $tmp310));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp310));
                                            {
                                                $tmp312 = expr258;
                                                $tmp313 = NULL;
                                                expr258 = $tmp313;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp313));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp315 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21263, &$s314);
                                        if ($tmp315.value) {
                                        {
                                            if (((panda$core$Bit) { expressions213 == NULL }).value) {
                                            {
                                                {
                                                    $tmp316 = expressions213;
                                                    panda$collections$Array* $tmp319 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp319);
                                                    $tmp318 = $tmp319;
                                                    $tmp317 = $tmp318;
                                                    expressions213 = $tmp317;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp317));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp318));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp321 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp321, ((panda$core$Int64) { 1 }), expr258);
                                            $tmp320 = $tmp321;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions213, ((panda$core$Object*) $tmp320));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
                                            {
                                                $tmp322 = expr258;
                                                $tmp323 = NULL;
                                                expr258 = $tmp323;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp323));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp325 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21263, &$s324);
                                        if ($tmp325.value) {
                                        {
                                            if (((panda$core$Bit) { expressions213 == NULL }).value) {
                                            {
                                                {
                                                    $tmp326 = expressions213;
                                                    panda$collections$Array* $tmp329 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp329);
                                                    $tmp328 = $tmp329;
                                                    $tmp327 = $tmp328;
                                                    expressions213 = $tmp327;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp327));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp328));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp326));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp331 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp331, ((panda$core$Int64) { 2 }), expr258);
                                            $tmp330 = $tmp331;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions213, ((panda$core$Object*) $tmp330));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
                                            {
                                                $tmp332 = expr258;
                                                $tmp333 = NULL;
                                                expr258 = $tmp333;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp333));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp335 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21263, &$s334);
                                        if ($tmp335.value) {
                                        {
                                            if (((panda$core$Bit) { expressions213 == NULL }).value) {
                                            {
                                                {
                                                    $tmp336 = expressions213;
                                                    panda$collections$Array* $tmp339 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp339);
                                                    $tmp338 = $tmp339;
                                                    $tmp337 = $tmp338;
                                                    expressions213 = $tmp337;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp337));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp338));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp336));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp341 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp341, ((panda$core$Int64) { 3 }), expr258);
                                            $tmp340 = $tmp341;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions213, ((panda$core$Object*) $tmp340));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp340));
                                            {
                                                $tmp342 = expr258;
                                                $tmp343 = NULL;
                                                expr258 = $tmp343;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp343));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp342));
                                            }
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$String* $tmp347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s346, text251);
                                            $tmp345 = $tmp347;
                                            panda$core$String* $tmp349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp345, &$s348);
                                            $tmp344 = $tmp349;
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p249, $tmp344);
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp344));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp345));
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
                                    $tmp262 = -1;
                                    goto $l260;
                                    $l260:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
                                    switch ($tmp262) {
                                        case -1: goto $l350;
                                    }
                                    $l350:;
                                    if (((panda$core$Bit) { expr258 != NULL }).value) {
                                    {
                                        panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s353, text251);
                                        $tmp352 = $tmp354;
                                        panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp352, &$s355);
                                        $tmp351 = $tmp356;
                                        org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p249, $tmp351);
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp351));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
                                    }
                                    }
                                }
                                $tmp257 = -1;
                                goto $l255;
                                $l255:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr258));
                                expr258 = NULL;
                                switch ($tmp257) {
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
                        $tmp245 = -1;
                        goto $l243;
                        $l243:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
                        switch ($tmp245) {
                            case -1: goto $l358;
                        }
                        $l358:;
                    }
                    $tmp235 = -1;
                    goto $l233;
                    $l233:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c236));
                    c236 = NULL;
                    switch ($tmp235) {
                        case -1: goto $l359;
                    }
                    $l359:;
                }
                goto $l225;
                $l226:;
            }
            $tmp217 = -1;
            goto $l215;
            $l215:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$86$9218));
            Iter$86$9218 = NULL;
            switch ($tmp217) {
                case -1: goto $l360;
            }
            $l360:;
        }
        org$pandalanguage$pandac$Annotations* $tmp364 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q($tmp364, flags212, ((panda$collections$ListView*) expressions213));
        $tmp363 = $tmp364;
        $tmp362 = $tmp363;
        $returnValue361 = $tmp362;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp362));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp363));
        $tmp211 = 0;
        goto $l209;
        $l365:;
        return $returnValue361;
    }
    $l209:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions213));
    switch ($tmp211) {
        case 0: goto $l365;
    }
    $l367:;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment371 = NULL;
    panda$core$String* $tmp372;
    panda$core$String* $tmp373;
    org$pandalanguage$pandac$ASTNode* $match$149_13377 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp378;
    org$pandalanguage$pandac$Position position380;
    panda$core$String* text382 = NULL;
    panda$core$String* $tmp384;
    panda$core$String* $tmp385;
    org$pandalanguage$pandac$Annotations* annotations387 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp388;
    org$pandalanguage$pandac$Annotations* $tmp389;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind391;
    org$pandalanguage$pandac$ASTNode* $match$158_9395 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp396;
    org$pandalanguage$pandac$Variable$Kind kind398;
    panda$collections$ImmutableArray* decls400 = NULL;
    org$pandalanguage$pandac$Variable$Kind $match$160_17402;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp404;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp406;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp408;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp411;
    panda$collections$Iterator* Iter$171$17415 = NULL;
    panda$collections$Iterator* $tmp416;
    panda$collections$Iterator* $tmp417;
    org$pandalanguage$pandac$ASTNode* decl433 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp434;
    panda$core$Object* $tmp435;
    org$pandalanguage$pandac$ASTNode* $match$172_21443 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp444;
    org$pandalanguage$pandac$Position declPosition446;
    org$pandalanguage$pandac$ASTNode* target448 = NULL;
    org$pandalanguage$pandac$ASTNode* value450 = NULL;
    panda$core$String* name455 = NULL;
    org$pandalanguage$pandac$Type* type456 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$176_29460 = NULL;
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
                $match$149_13377 = $tmp378;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp378));
                panda$core$Bit $tmp379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$149_13377->$rawValue, ((panda$core$Int64) { 38 }));
                if ($tmp379.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp381 = ((org$pandalanguage$pandac$Position*) ((char*) $match$149_13377->$data + 0));
                    position380 = *$tmp381;
                    panda$core$String** $tmp383 = ((panda$core$String**) ((char*) $match$149_13377->$data + 16));
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
            $match$158_9395 = $tmp396;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp396));
            panda$core$Bit $tmp397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$158_9395->$rawValue, ((panda$core$Int64) { 47 }));
            if ($tmp397.value) {
            {
                org$pandalanguage$pandac$Variable$Kind* $tmp399 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$158_9395->$data + 16));
                kind398 = *$tmp399;
                panda$collections$ImmutableArray** $tmp401 = ((panda$collections$ImmutableArray**) ((char*) $match$158_9395->$data + 24));
                decls400 = *$tmp401;
                {
                    $match$160_17402 = kind398;
                    panda$core$Bit $tmp403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$160_17402.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp403.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp404, ((panda$core$Int64) { 0 }));
                        fieldKind391 = $tmp404;
                    }
                    }
                    else {
                    panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$160_17402.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp405.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp406, ((panda$core$Int64) { 1 }));
                        fieldKind391 = $tmp406;
                    }
                    }
                    else {
                    panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$160_17402.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp407.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp408, ((panda$core$Int64) { 2 }));
                        fieldKind391 = $tmp408;
                        panda$core$Int64 $tmp409 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations387->flags, ((panda$core$Int64) { 16 }));
                        annotations387->flags = $tmp409;
                    }
                    }
                    else {
                    panda$core$Bit $tmp410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$160_17402.$rawValue, ((panda$core$Int64) { 3 }));
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
                        Iter$171$17415 = $tmp416;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp416));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
                        $l422:;
                        ITable* $tmp425 = Iter$171$17415->$class->itable;
                        while ($tmp425->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp425 = $tmp425->next;
                        }
                        $fn427 $tmp426 = $tmp425->methods[0];
                        panda$core$Bit $tmp428 = $tmp426(Iter$171$17415);
                        panda$core$Bit $tmp429 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp428);
                        bool $tmp424 = $tmp429.value;
                        if (!$tmp424) goto $l423;
                        {
                            int $tmp432;
                            {
                                ITable* $tmp436 = Iter$171$17415->$class->itable;
                                while ($tmp436->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp436 = $tmp436->next;
                                }
                                $fn438 $tmp437 = $tmp436->methods[1];
                                panda$core$Object* $tmp439 = $tmp437(Iter$171$17415);
                                $tmp435 = $tmp439;
                                $tmp434 = ((org$pandalanguage$pandac$ASTNode*) $tmp435);
                                decl433 = $tmp434;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp434));
                                panda$core$Panda$unref$panda$core$Object($tmp435);
                                int $tmp442;
                                {
                                    $tmp444 = decl433;
                                    $match$172_21443 = $tmp444;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp444));
                                    panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$172_21443->$rawValue, ((panda$core$Int64) { 13 }));
                                    if ($tmp445.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp447 = ((org$pandalanguage$pandac$Position*) ((char*) $match$172_21443->$data + 0));
                                        declPosition446 = *$tmp447;
                                        org$pandalanguage$pandac$ASTNode** $tmp449 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$172_21443->$data + 16));
                                        target448 = *$tmp449;
                                        org$pandalanguage$pandac$ASTNode** $tmp451 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$172_21443->$data + 24));
                                        value450 = *$tmp451;
                                        int $tmp454;
                                        {
                                            memset(&name455, 0, sizeof(name455));
                                            memset(&type456, 0, sizeof(type456));
                                            int $tmp459;
                                            {
                                                $tmp461 = target448;
                                                $match$176_29460 = $tmp461;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp461));
                                                panda$core$Bit $tmp462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$176_29460->$rawValue, ((panda$core$Int64) { 20 }));
                                                if ($tmp462.value) {
                                                {
                                                    panda$core$String** $tmp464 = ((panda$core$String**) ((char*) $match$176_29460->$data + 16));
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
                                                panda$core$Bit $tmp471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$176_29460->$rawValue, ((panda$core$Int64) { 44 }));
                                                if ($tmp471.value) {
                                                {
                                                    panda$core$String** $tmp473 = ((panda$core$String**) ((char*) $match$176_29460->$data + 16));
                                                    id472 = *$tmp473;
                                                    org$pandalanguage$pandac$ASTNode** $tmp475 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$176_29460->$data + 24));
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$171$17415));
                    Iter$171$17415 = NULL;
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
    org$pandalanguage$pandac$ASTNode* $match$201_9496 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp497;
    org$pandalanguage$pandac$ASTNode* test499 = NULL;
    panda$core$Int64 $returnValue501;
    org$pandalanguage$pandac$ASTNode* left506 = NULL;
    org$pandalanguage$pandac$ASTNode* right508 = NULL;
    panda$collections$ImmutableArray* statements520 = NULL;
    panda$core$Int64 result522;
    panda$collections$Iterator* Iter$210$17526 = NULL;
    panda$collections$Iterator* $tmp527;
    panda$collections$Iterator* $tmp528;
    org$pandalanguage$pandac$ASTNode* s544 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp545;
    panda$core$Object* $tmp546;
    org$pandalanguage$pandac$ASTNode* target561 = NULL;
    panda$collections$ImmutableArray* args563 = NULL;
    panda$core$Int64 result565;
    panda$collections$Iterator* Iter$218$17570 = NULL;
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
    panda$collections$Iterator* Iter$233$17628 = NULL;
    panda$collections$Iterator* $tmp629;
    panda$collections$Iterator* $tmp630;
    org$pandalanguage$pandac$ASTNode* s646 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp647;
    panda$core$Object* $tmp648;
    org$pandalanguage$pandac$ASTNode* base660 = NULL;
    org$pandalanguage$pandac$ASTNode* list666 = NULL;
    panda$collections$ImmutableArray* statements668 = NULL;
    panda$core$Int64 result670;
    panda$collections$Iterator* Iter$241$17675 = NULL;
    panda$collections$Iterator* $tmp676;
    panda$collections$Iterator* $tmp677;
    org$pandalanguage$pandac$ASTNode* s693 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp694;
    panda$core$Object* $tmp695;
    org$pandalanguage$pandac$ASTNode* test713 = NULL;
    panda$collections$ImmutableArray* ifTrue715 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse717 = NULL;
    panda$core$Int64 result719;
    panda$collections$Iterator* Iter$251$17724 = NULL;
    panda$collections$Iterator* $tmp725;
    panda$collections$Iterator* $tmp726;
    org$pandalanguage$pandac$ASTNode* s742 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp743;
    panda$core$Object* $tmp744;
    panda$collections$ImmutableArray* statements761 = NULL;
    panda$core$Int64 result763;
    panda$collections$Iterator* Iter$262$17767 = NULL;
    panda$collections$Iterator* $tmp768;
    panda$collections$Iterator* $tmp769;
    org$pandalanguage$pandac$ASTNode* s785 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp786;
    panda$core$Object* $tmp787;
    org$pandalanguage$pandac$ASTNode* value799 = NULL;
    panda$collections$ImmutableArray* whens801 = NULL;
    panda$collections$ImmutableArray* other803 = NULL;
    panda$core$Int64 result805;
    panda$collections$Iterator* Iter$268$17810 = NULL;
    panda$collections$Iterator* $tmp811;
    panda$collections$Iterator* $tmp812;
    org$pandalanguage$pandac$ASTNode* w828 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp829;
    panda$core$Object* $tmp830;
    panda$collections$Iterator* Iter$272$21842 = NULL;
    panda$collections$Iterator* $tmp843;
    panda$collections$Iterator* $tmp844;
    org$pandalanguage$pandac$ASTNode* s860 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp861;
    panda$core$Object* $tmp862;
    org$pandalanguage$pandac$ASTNode* base883 = NULL;
    org$pandalanguage$pandac$ASTNode* value896 = NULL;
    panda$collections$ImmutableArray* decls922 = NULL;
    panda$core$Int64 result924;
    panda$collections$Iterator* Iter$308$17928 = NULL;
    panda$collections$Iterator* $tmp929;
    panda$collections$Iterator* $tmp930;
    org$pandalanguage$pandac$ASTNode* decl946 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp947;
    panda$core$Object* $tmp948;
    panda$collections$ImmutableArray* tests960 = NULL;
    panda$collections$ImmutableArray* statements962 = NULL;
    panda$core$Int64 result964;
    panda$collections$Iterator* Iter$314$17968 = NULL;
    panda$collections$Iterator* $tmp969;
    panda$collections$Iterator* $tmp970;
    org$pandalanguage$pandac$ASTNode* test986 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp987;
    panda$core$Object* $tmp988;
    panda$collections$Iterator* Iter$317$171000 = NULL;
    panda$collections$Iterator* $tmp1001;
    panda$collections$Iterator* $tmp1002;
    org$pandalanguage$pandac$ASTNode* s1018 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1019;
    panda$core$Object* $tmp1020;
    org$pandalanguage$pandac$ASTNode* test1032 = NULL;
    panda$collections$ImmutableArray* statements1034 = NULL;
    panda$core$Int64 result1036;
    panda$collections$Iterator* Iter$323$171041 = NULL;
    panda$collections$Iterator* $tmp1042;
    panda$collections$Iterator* $tmp1043;
    org$pandalanguage$pandac$ASTNode* s1059 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1060;
    panda$core$Object* $tmp1061;
    int $tmp495;
    {
        $tmp497 = p_node;
        $match$201_9496 = $tmp497;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp497));
        panda$core$Bit $tmp498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp498.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp500 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9496->$data + 16));
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
        panda$core$Bit $tmp505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp505.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp507 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9496->$data + 16));
            left506 = *$tmp507;
            org$pandalanguage$pandac$ASTNode** $tmp509 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9496->$data + 32));
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
        panda$core$Bit $tmp516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 5 }));
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
        panda$core$Bit $tmp519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp519.value) {
        {
            panda$collections$ImmutableArray** $tmp521 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9496->$data + 16));
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
                    Iter$210$17526 = $tmp527;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp527));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp528));
                    $l533:;
                    ITable* $tmp536 = Iter$210$17526->$class->itable;
                    while ($tmp536->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp536 = $tmp536->next;
                    }
                    $fn538 $tmp537 = $tmp536->methods[0];
                    panda$core$Bit $tmp539 = $tmp537(Iter$210$17526);
                    panda$core$Bit $tmp540 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp539);
                    bool $tmp535 = $tmp540.value;
                    if (!$tmp535) goto $l534;
                    {
                        int $tmp543;
                        {
                            ITable* $tmp547 = Iter$210$17526->$class->itable;
                            while ($tmp547->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp547 = $tmp547->next;
                            }
                            $fn549 $tmp548 = $tmp547->methods[1];
                            panda$core$Object* $tmp550 = $tmp548(Iter$210$17526);
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$210$17526));
                Iter$210$17526 = NULL;
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
        panda$core$Bit $tmp557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 7 }));
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
        panda$core$Bit $tmp560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp560.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp562 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9496->$data + 16));
            target561 = *$tmp562;
            panda$collections$ImmutableArray** $tmp564 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9496->$data + 24));
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
                    Iter$218$17570 = $tmp571;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp571));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp572));
                    $l577:;
                    ITable* $tmp580 = Iter$218$17570->$class->itable;
                    while ($tmp580->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp580 = $tmp580->next;
                    }
                    $fn582 $tmp581 = $tmp580->methods[0];
                    panda$core$Bit $tmp583 = $tmp581(Iter$218$17570);
                    panda$core$Bit $tmp584 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp583);
                    bool $tmp579 = $tmp584.value;
                    if (!$tmp579) goto $l578;
                    {
                        int $tmp587;
                        {
                            ITable* $tmp591 = Iter$218$17570->$class->itable;
                            while ($tmp591->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp591 = $tmp591->next;
                            }
                            $fn593 $tmp592 = $tmp591->methods[1];
                            panda$core$Object* $tmp594 = $tmp592(Iter$218$17570);
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$218$17570));
                Iter$218$17570 = NULL;
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
        panda$core$Bit $tmp601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp601.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp603 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9496->$data + 16));
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
        panda$core$Bit $tmp607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 12 }));
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
        panda$core$Bit $tmp610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp610.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp612 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9496->$data + 24));
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
        panda$core$Bit $tmp618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp618.value) {
        {
            panda$collections$ImmutableArray** $tmp620 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9496->$data + 24));
            statements619 = *$tmp620;
            org$pandalanguage$pandac$ASTNode** $tmp622 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9496->$data + 32));
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
                    Iter$233$17628 = $tmp629;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp629));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
                    $l635:;
                    ITable* $tmp638 = Iter$233$17628->$class->itable;
                    while ($tmp638->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp638 = $tmp638->next;
                    }
                    $fn640 $tmp639 = $tmp638->methods[0];
                    panda$core$Bit $tmp641 = $tmp639(Iter$233$17628);
                    panda$core$Bit $tmp642 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp641);
                    bool $tmp637 = $tmp642.value;
                    if (!$tmp637) goto $l636;
                    {
                        int $tmp645;
                        {
                            ITable* $tmp649 = Iter$233$17628->$class->itable;
                            while ($tmp649->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp649 = $tmp649->next;
                            }
                            $fn651 $tmp650 = $tmp649->methods[1];
                            panda$core$Object* $tmp652 = $tmp650(Iter$233$17628);
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$233$17628));
                Iter$233$17628 = NULL;
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
        panda$core$Bit $tmp659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp659.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp661 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9496->$data + 16));
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
        panda$core$Bit $tmp665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp665.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp667 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9496->$data + 32));
            list666 = *$tmp667;
            panda$collections$ImmutableArray** $tmp669 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9496->$data + 40));
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
                    Iter$241$17675 = $tmp676;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp676));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp677));
                    $l682:;
                    ITable* $tmp685 = Iter$241$17675->$class->itable;
                    while ($tmp685->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp685 = $tmp685->next;
                    }
                    $fn687 $tmp686 = $tmp685->methods[0];
                    panda$core$Bit $tmp688 = $tmp686(Iter$241$17675);
                    panda$core$Bit $tmp689 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp688);
                    bool $tmp684 = $tmp689.value;
                    if (!$tmp684) goto $l683;
                    {
                        int $tmp692;
                        {
                            ITable* $tmp696 = Iter$241$17675->$class->itable;
                            while ($tmp696->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp696 = $tmp696->next;
                            }
                            $fn698 $tmp697 = $tmp696->methods[1];
                            panda$core$Object* $tmp699 = $tmp697(Iter$241$17675);
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$241$17675));
                Iter$241$17675 = NULL;
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
        panda$core$Bit $tmp706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 19 }));
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
        panda$core$Bit $tmp709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 20 }));
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
        panda$core$Bit $tmp712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp712.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp714 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9496->$data + 16));
            test713 = *$tmp714;
            panda$collections$ImmutableArray** $tmp716 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9496->$data + 24));
            ifTrue715 = *$tmp716;
            org$pandalanguage$pandac$ASTNode** $tmp718 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9496->$data + 32));
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
                    Iter$251$17724 = $tmp725;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp725));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp726));
                    $l731:;
                    ITable* $tmp734 = Iter$251$17724->$class->itable;
                    while ($tmp734->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp734 = $tmp734->next;
                    }
                    $fn736 $tmp735 = $tmp734->methods[0];
                    panda$core$Bit $tmp737 = $tmp735(Iter$251$17724);
                    panda$core$Bit $tmp738 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp737);
                    bool $tmp733 = $tmp738.value;
                    if (!$tmp733) goto $l732;
                    {
                        int $tmp741;
                        {
                            ITable* $tmp745 = Iter$251$17724->$class->itable;
                            while ($tmp745->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp745 = $tmp745->next;
                            }
                            $fn747 $tmp746 = $tmp745->methods[1];
                            panda$core$Object* $tmp748 = $tmp746(Iter$251$17724);
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$251$17724));
                Iter$251$17724 = NULL;
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
        panda$core$Bit $tmp757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 22 }));
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
        panda$core$Bit $tmp760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp760.value) {
        {
            panda$collections$ImmutableArray** $tmp762 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9496->$data + 24));
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
                    Iter$262$17767 = $tmp768;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp768));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp769));
                    $l774:;
                    ITable* $tmp777 = Iter$262$17767->$class->itable;
                    while ($tmp777->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp777 = $tmp777->next;
                    }
                    $fn779 $tmp778 = $tmp777->methods[0];
                    panda$core$Bit $tmp780 = $tmp778(Iter$262$17767);
                    panda$core$Bit $tmp781 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp780);
                    bool $tmp776 = $tmp781.value;
                    if (!$tmp776) goto $l775;
                    {
                        int $tmp784;
                        {
                            ITable* $tmp788 = Iter$262$17767->$class->itable;
                            while ($tmp788->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp788 = $tmp788->next;
                            }
                            $fn790 $tmp789 = $tmp788->methods[1];
                            panda$core$Object* $tmp791 = $tmp789(Iter$262$17767);
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$262$17767));
                Iter$262$17767 = NULL;
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
        panda$core$Bit $tmp798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp798.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp800 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9496->$data + 16));
            value799 = *$tmp800;
            panda$collections$ImmutableArray** $tmp802 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9496->$data + 24));
            whens801 = *$tmp802;
            panda$collections$ImmutableArray** $tmp804 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9496->$data + 32));
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
                    Iter$268$17810 = $tmp811;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp811));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp812));
                    $l817:;
                    ITable* $tmp820 = Iter$268$17810->$class->itable;
                    while ($tmp820->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp820 = $tmp820->next;
                    }
                    $fn822 $tmp821 = $tmp820->methods[0];
                    panda$core$Bit $tmp823 = $tmp821(Iter$268$17810);
                    panda$core$Bit $tmp824 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp823);
                    bool $tmp819 = $tmp824.value;
                    if (!$tmp819) goto $l818;
                    {
                        int $tmp827;
                        {
                            ITable* $tmp831 = Iter$268$17810->$class->itable;
                            while ($tmp831->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp831 = $tmp831->next;
                            }
                            $fn833 $tmp832 = $tmp831->methods[1];
                            panda$core$Object* $tmp834 = $tmp832(Iter$268$17810);
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$268$17810));
                Iter$268$17810 = NULL;
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
                        Iter$272$21842 = $tmp843;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp843));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp844));
                        $l849:;
                        ITable* $tmp852 = Iter$272$21842->$class->itable;
                        while ($tmp852->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp852 = $tmp852->next;
                        }
                        $fn854 $tmp853 = $tmp852->methods[0];
                        panda$core$Bit $tmp855 = $tmp853(Iter$272$21842);
                        panda$core$Bit $tmp856 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp855);
                        bool $tmp851 = $tmp856.value;
                        if (!$tmp851) goto $l850;
                        {
                            int $tmp859;
                            {
                                ITable* $tmp863 = Iter$272$21842->$class->itable;
                                while ($tmp863->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp863 = $tmp863->next;
                                }
                                $fn865 $tmp864 = $tmp863->methods[1];
                                panda$core$Object* $tmp866 = $tmp864(Iter$272$21842);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$272$21842));
                    Iter$272$21842 = NULL;
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
        panda$core$Bit $tmp873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp873.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 10 });
            $tmp495 = 19;
            goto $l493;
            $l874:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp876.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 1 });
            $tmp495 = 20;
            goto $l493;
            $l877:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp879.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 0 });
            $tmp495 = 21;
            goto $l493;
            $l880:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp882.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp884 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9496->$data + 24));
            base883 = *$tmp884;
            panda$core$Int64 $tmp885 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base883);
            panda$core$Int64 $tmp886 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp885);
            $returnValue501 = $tmp886;
            $tmp495 = 22;
            goto $l493;
            $l887:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 33 }));
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
        panda$core$Bit $tmp892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp892.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 1 });
            $tmp495 = 24;
            goto $l493;
            $l893:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp895.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp897 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9496->$data + 16));
            value896 = *$tmp897;
            if (((panda$core$Bit) { value896 == NULL }).value) {
            {
                $returnValue501 = ((panda$core$Int64) { 0 });
                $tmp495 = 25;
                goto $l493;
                $l898:;
                return $returnValue501;
            }
            }
            panda$core$Int64 $tmp900 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value896);
            $returnValue501 = $tmp900;
            $tmp495 = 26;
            goto $l493;
            $l901:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 37 }));
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
        panda$core$Bit $tmp906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 38 }));
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
        panda$core$Bit $tmp909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp909.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 1 });
            $tmp495 = 29;
            goto $l493;
            $l910:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp912.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 0 });
            $tmp495 = 30;
            goto $l493;
            $l913:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp915.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 10 });
            $tmp495 = 31;
            goto $l493;
            $l916:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp918.value) {
        {
            $returnValue501 = ((panda$core$Int64) { 10 });
            $tmp495 = 32;
            goto $l493;
            $l919:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp921.value) {
        {
            panda$collections$ImmutableArray** $tmp923 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9496->$data + 24));
            decls922 = *$tmp923;
            result924 = ((panda$core$Int64) { 0 });
            {
                int $tmp927;
                {
                    ITable* $tmp931 = ((panda$collections$Iterable*) decls922)->$class->itable;
                    while ($tmp931->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp931 = $tmp931->next;
                    }
                    $fn933 $tmp932 = $tmp931->methods[0];
                    panda$collections$Iterator* $tmp934 = $tmp932(((panda$collections$Iterable*) decls922));
                    $tmp930 = $tmp934;
                    $tmp929 = $tmp930;
                    Iter$308$17928 = $tmp929;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp929));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp930));
                    $l935:;
                    ITable* $tmp938 = Iter$308$17928->$class->itable;
                    while ($tmp938->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp938 = $tmp938->next;
                    }
                    $fn940 $tmp939 = $tmp938->methods[0];
                    panda$core$Bit $tmp941 = $tmp939(Iter$308$17928);
                    panda$core$Bit $tmp942 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp941);
                    bool $tmp937 = $tmp942.value;
                    if (!$tmp937) goto $l936;
                    {
                        int $tmp945;
                        {
                            ITable* $tmp949 = Iter$308$17928->$class->itable;
                            while ($tmp949->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp949 = $tmp949->next;
                            }
                            $fn951 $tmp950 = $tmp949->methods[1];
                            panda$core$Object* $tmp952 = $tmp950(Iter$308$17928);
                            $tmp948 = $tmp952;
                            $tmp947 = ((org$pandalanguage$pandac$ASTNode*) $tmp948);
                            decl946 = $tmp947;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp947));
                            panda$core$Panda$unref$panda$core$Object($tmp948);
                            panda$core$Int64 $tmp953 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl946);
                            panda$core$Int64 $tmp954 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result924, $tmp953);
                            result924 = $tmp954;
                        }
                        $tmp945 = -1;
                        goto $l943;
                        $l943:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl946));
                        decl946 = NULL;
                        switch ($tmp945) {
                            case -1: goto $l955;
                        }
                        $l955:;
                    }
                    goto $l935;
                    $l936:;
                }
                $tmp927 = -1;
                goto $l925;
                $l925:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$308$17928));
                Iter$308$17928 = NULL;
                switch ($tmp927) {
                    case -1: goto $l956;
                }
                $l956:;
            }
            $returnValue501 = result924;
            $tmp495 = 33;
            goto $l493;
            $l957:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp959.value) {
        {
            panda$collections$ImmutableArray** $tmp961 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9496->$data + 16));
            tests960 = *$tmp961;
            panda$collections$ImmutableArray** $tmp963 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9496->$data + 24));
            statements962 = *$tmp963;
            result964 = ((panda$core$Int64) { 0 });
            {
                int $tmp967;
                {
                    ITable* $tmp971 = ((panda$collections$Iterable*) tests960)->$class->itable;
                    while ($tmp971->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp971 = $tmp971->next;
                    }
                    $fn973 $tmp972 = $tmp971->methods[0];
                    panda$collections$Iterator* $tmp974 = $tmp972(((panda$collections$Iterable*) tests960));
                    $tmp970 = $tmp974;
                    $tmp969 = $tmp970;
                    Iter$314$17968 = $tmp969;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp969));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp970));
                    $l975:;
                    ITable* $tmp978 = Iter$314$17968->$class->itable;
                    while ($tmp978->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp978 = $tmp978->next;
                    }
                    $fn980 $tmp979 = $tmp978->methods[0];
                    panda$core$Bit $tmp981 = $tmp979(Iter$314$17968);
                    panda$core$Bit $tmp982 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp981);
                    bool $tmp977 = $tmp982.value;
                    if (!$tmp977) goto $l976;
                    {
                        int $tmp985;
                        {
                            ITable* $tmp989 = Iter$314$17968->$class->itable;
                            while ($tmp989->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp989 = $tmp989->next;
                            }
                            $fn991 $tmp990 = $tmp989->methods[1];
                            panda$core$Object* $tmp992 = $tmp990(Iter$314$17968);
                            $tmp988 = $tmp992;
                            $tmp987 = ((org$pandalanguage$pandac$ASTNode*) $tmp988);
                            test986 = $tmp987;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp987));
                            panda$core$Panda$unref$panda$core$Object($tmp988);
                            panda$core$Int64 $tmp993 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test986);
                            panda$core$Int64 $tmp994 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result964, $tmp993);
                            result964 = $tmp994;
                        }
                        $tmp985 = -1;
                        goto $l983;
                        $l983:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test986));
                        test986 = NULL;
                        switch ($tmp985) {
                            case -1: goto $l995;
                        }
                        $l995:;
                    }
                    goto $l975;
                    $l976:;
                }
                $tmp967 = -1;
                goto $l965;
                $l965:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$314$17968));
                Iter$314$17968 = NULL;
                switch ($tmp967) {
                    case -1: goto $l996;
                }
                $l996:;
            }
            {
                int $tmp999;
                {
                    ITable* $tmp1003 = ((panda$collections$Iterable*) statements962)->$class->itable;
                    while ($tmp1003->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1003 = $tmp1003->next;
                    }
                    $fn1005 $tmp1004 = $tmp1003->methods[0];
                    panda$collections$Iterator* $tmp1006 = $tmp1004(((panda$collections$Iterable*) statements962));
                    $tmp1002 = $tmp1006;
                    $tmp1001 = $tmp1002;
                    Iter$317$171000 = $tmp1001;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1001));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1002));
                    $l1007:;
                    ITable* $tmp1010 = Iter$317$171000->$class->itable;
                    while ($tmp1010->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1010 = $tmp1010->next;
                    }
                    $fn1012 $tmp1011 = $tmp1010->methods[0];
                    panda$core$Bit $tmp1013 = $tmp1011(Iter$317$171000);
                    panda$core$Bit $tmp1014 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1013);
                    bool $tmp1009 = $tmp1014.value;
                    if (!$tmp1009) goto $l1008;
                    {
                        int $tmp1017;
                        {
                            ITable* $tmp1021 = Iter$317$171000->$class->itable;
                            while ($tmp1021->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1021 = $tmp1021->next;
                            }
                            $fn1023 $tmp1022 = $tmp1021->methods[1];
                            panda$core$Object* $tmp1024 = $tmp1022(Iter$317$171000);
                            $tmp1020 = $tmp1024;
                            $tmp1019 = ((org$pandalanguage$pandac$ASTNode*) $tmp1020);
                            s1018 = $tmp1019;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1019));
                            panda$core$Panda$unref$panda$core$Object($tmp1020);
                            panda$core$Int64 $tmp1025 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1018);
                            panda$core$Int64 $tmp1026 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result964, $tmp1025);
                            result964 = $tmp1026;
                        }
                        $tmp1017 = -1;
                        goto $l1015;
                        $l1015:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1018));
                        s1018 = NULL;
                        switch ($tmp1017) {
                            case -1: goto $l1027;
                        }
                        $l1027:;
                    }
                    goto $l1007;
                    $l1008:;
                }
                $tmp999 = -1;
                goto $l997;
                $l997:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$317$171000));
                Iter$317$171000 = NULL;
                switch ($tmp999) {
                    case -1: goto $l1028;
                }
                $l1028:;
            }
            $returnValue501 = result964;
            $tmp495 = 34;
            goto $l493;
            $l1029:;
            return $returnValue501;
        }
        }
        else {
        panda$core$Bit $tmp1031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9496->$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp1031.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1033 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9496->$data + 24));
            test1032 = *$tmp1033;
            panda$collections$ImmutableArray** $tmp1035 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9496->$data + 32));
            statements1034 = *$tmp1035;
            panda$core$Int64 $tmp1037 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1032);
            result1036 = $tmp1037;
            {
                int $tmp1040;
                {
                    ITable* $tmp1044 = ((panda$collections$Iterable*) statements1034)->$class->itable;
                    while ($tmp1044->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1044 = $tmp1044->next;
                    }
                    $fn1046 $tmp1045 = $tmp1044->methods[0];
                    panda$collections$Iterator* $tmp1047 = $tmp1045(((panda$collections$Iterable*) statements1034));
                    $tmp1043 = $tmp1047;
                    $tmp1042 = $tmp1043;
                    Iter$323$171041 = $tmp1042;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1042));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1043));
                    $l1048:;
                    ITable* $tmp1051 = Iter$323$171041->$class->itable;
                    while ($tmp1051->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1051 = $tmp1051->next;
                    }
                    $fn1053 $tmp1052 = $tmp1051->methods[0];
                    panda$core$Bit $tmp1054 = $tmp1052(Iter$323$171041);
                    panda$core$Bit $tmp1055 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1054);
                    bool $tmp1050 = $tmp1055.value;
                    if (!$tmp1050) goto $l1049;
                    {
                        int $tmp1058;
                        {
                            ITable* $tmp1062 = Iter$323$171041->$class->itable;
                            while ($tmp1062->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1062 = $tmp1062->next;
                            }
                            $fn1064 $tmp1063 = $tmp1062->methods[1];
                            panda$core$Object* $tmp1065 = $tmp1063(Iter$323$171041);
                            $tmp1061 = $tmp1065;
                            $tmp1060 = ((org$pandalanguage$pandac$ASTNode*) $tmp1061);
                            s1059 = $tmp1060;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1060));
                            panda$core$Panda$unref$panda$core$Object($tmp1061);
                            panda$core$Int64 $tmp1066 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1059);
                            panda$core$Int64 $tmp1067 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1036, $tmp1066);
                            result1036 = $tmp1067;
                        }
                        $tmp1058 = -1;
                        goto $l1056;
                        $l1056:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1059));
                        s1059 = NULL;
                        switch ($tmp1058) {
                            case -1: goto $l1068;
                        }
                        $l1068:;
                    }
                    goto $l1048;
                    $l1049:;
                }
                $tmp1040 = -1;
                goto $l1038;
                $l1038:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$323$171041));
                Iter$323$171041 = NULL;
                switch ($tmp1040) {
                    case -1: goto $l1069;
                }
                $l1069:;
            }
            $returnValue501 = result1036;
            $tmp495 = 35;
            goto $l493;
            $l1070:;
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
        }
        }
    }
    $tmp495 = -1;
    goto $l493;
    $l493:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp497));
    switch ($tmp495) {
        case 4: goto $l558;
        case -1: goto $l1072;
        case 33: goto $l957;
        case 32: goto $l919;
        case 10: goto $l657;
        case 11: goto $l663;
        case 2: goto $l517;
        case 21: goto $l880;
        case 20: goto $l877;
        case 13: goto $l707;
        case 18: goto $l871;
        case 14: goto $l710;
        case 19: goto $l874;
        case 31: goto $l916;
        case 12: goto $l704;
        case 26: goto $l901;
        case 8: goto $l613;
        case 0: goto $l503;
        case 30: goto $l913;
        case 7: goto $l608;
        case 25: goto $l898;
        case 29: goto $l910;
        case 6: goto $l605;
        case 17: goto $l796;
        case 28: goto $l907;
        case 24: goto $l893;
        case 34: goto $l1029;
        case 35: goto $l1070;
        case 5: goto $l599;
        case 1: goto $l514;
        case 27: goto $l904;
        case 15: goto $l755;
        case 16: goto $l758;
        case 22: goto $l887;
        case 9: goto $l616;
        case 3: goto $l555;
        case 23: goto $l890;
    }
    $l1072:;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Object* $tmp1075;
    panda$core$Int64 c1086;
    panda$collections$Iterator* Iter$336$131090 = NULL;
    panda$collections$Iterator* $tmp1091;
    panda$collections$Iterator* $tmp1092;
    org$pandalanguage$pandac$ASTNode* s1108 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1109;
    panda$core$Object* $tmp1110;
    panda$core$Bit $returnValue1118;
    panda$core$Object* $tmp1077 = (($fn1076) self->compiler->$class->vtable[2])(self->compiler);
    $tmp1075 = $tmp1077;
    panda$core$Bit $tmp1078 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1075)->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp1074 = $tmp1078.value;
    panda$core$Panda$unref$panda$core$Object($tmp1075);
    if (!$tmp1074) goto $l1079;
    panda$core$Bit $tmp1080 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp1081 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1080);
    $tmp1074 = $tmp1081.value;
    $l1079:;
    panda$core$Bit $tmp1082 = { $tmp1074 };
    bool $tmp1073 = $tmp1082.value;
    if (!$tmp1073) goto $l1083;
    panda$core$Bit $tmp1084 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp1073 = $tmp1084.value;
    $l1083:;
    panda$core$Bit $tmp1085 = { $tmp1073 };
    if ($tmp1085.value) {
    {
        c1086 = ((panda$core$Int64) { 0 });
        {
            int $tmp1089;
            {
                ITable* $tmp1093 = ((panda$collections$Iterable*) p_statements)->$class->itable;
                while ($tmp1093->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1093 = $tmp1093->next;
                }
                $fn1095 $tmp1094 = $tmp1093->methods[0];
                panda$collections$Iterator* $tmp1096 = $tmp1094(((panda$collections$Iterable*) p_statements));
                $tmp1092 = $tmp1096;
                $tmp1091 = $tmp1092;
                Iter$336$131090 = $tmp1091;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1091));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1092));
                $l1097:;
                ITable* $tmp1100 = Iter$336$131090->$class->itable;
                while ($tmp1100->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1100 = $tmp1100->next;
                }
                $fn1102 $tmp1101 = $tmp1100->methods[0];
                panda$core$Bit $tmp1103 = $tmp1101(Iter$336$131090);
                panda$core$Bit $tmp1104 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1103);
                bool $tmp1099 = $tmp1104.value;
                if (!$tmp1099) goto $l1098;
                {
                    int $tmp1107;
                    {
                        ITable* $tmp1111 = Iter$336$131090->$class->itable;
                        while ($tmp1111->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1111 = $tmp1111->next;
                        }
                        $fn1113 $tmp1112 = $tmp1111->methods[1];
                        panda$core$Object* $tmp1114 = $tmp1112(Iter$336$131090);
                        $tmp1110 = $tmp1114;
                        $tmp1109 = ((org$pandalanguage$pandac$ASTNode*) $tmp1110);
                        s1108 = $tmp1109;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1109));
                        panda$core$Panda$unref$panda$core$Object($tmp1110);
                        panda$core$Int64 $tmp1115 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1108);
                        panda$core$Int64 $tmp1116 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c1086, $tmp1115);
                        c1086 = $tmp1116;
                        panda$core$Bit $tmp1117 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c1086, ((panda$core$Int64) { 10 }));
                        if ($tmp1117.value) {
                        {
                            $returnValue1118 = ((panda$core$Bit) { false });
                            $tmp1107 = 0;
                            goto $l1105;
                            $l1119:;
                            $tmp1089 = 0;
                            goto $l1087;
                            $l1120:;
                            return $returnValue1118;
                        }
                        }
                    }
                    $tmp1107 = -1;
                    goto $l1105;
                    $l1105:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1108));
                    s1108 = NULL;
                    switch ($tmp1107) {
                        case -1: goto $l1122;
                        case 0: goto $l1119;
                    }
                    $l1122:;
                }
                goto $l1097;
                $l1098:;
            }
            $tmp1089 = -1;
            goto $l1087;
            $l1087:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$336$131090));
            Iter$336$131090 = NULL;
            switch ($tmp1089) {
                case 0: goto $l1120;
                case -1: goto $l1123;
            }
            $l1123:;
        }
        $returnValue1118 = ((panda$core$Bit) { true });
        return $returnValue1118;
    }
    }
    $returnValue1118 = ((panda$core$Bit) { false });
    return $returnValue1118;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawGenerics, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment1129 = NULL;
    panda$core$String* $tmp1130;
    panda$core$String* $tmp1131;
    org$pandalanguage$pandac$ASTNode* $match$357_131135 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1136;
    org$pandalanguage$pandac$Position position1138;
    panda$core$String* text1140 = NULL;
    panda$core$String* $tmp1142;
    panda$core$String* $tmp1143;
    org$pandalanguage$pandac$Annotations* annotations1145 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1146;
    org$pandalanguage$pandac$Annotations* $tmp1147;
    panda$collections$Array* generics1159 = NULL;
    panda$collections$Array* $tmp1163;
    panda$collections$Array* $tmp1164;
    panda$collections$Array* $tmp1165;
    panda$core$String* fullName1167 = NULL;
    panda$core$String* $tmp1168;
    panda$core$String* $tmp1169;
    panda$core$String* $tmp1170;
    panda$core$String* $tmp1171;
    panda$core$String* $tmp1172;
    panda$collections$Iterator* Iter$372$131182 = NULL;
    panda$collections$Iterator* $tmp1183;
    panda$collections$Iterator* $tmp1184;
    org$pandalanguage$pandac$ASTNode* p1200 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1201;
    panda$core$Object* $tmp1202;
    panda$core$String* parameterName1207 = NULL;
    org$pandalanguage$pandac$Type* bound1208 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$375_171212 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1213;
    panda$core$String* id1215 = NULL;
    panda$core$String* $tmp1217;
    panda$core$String* $tmp1218;
    org$pandalanguage$pandac$Type* $tmp1219;
    org$pandalanguage$pandac$Type* $tmp1220;
    org$pandalanguage$pandac$Type* $tmp1221;
    panda$core$String* id1224 = NULL;
    org$pandalanguage$pandac$ASTNode* type1226 = NULL;
    panda$core$String* $tmp1228;
    panda$core$String* $tmp1229;
    org$pandalanguage$pandac$Type* $tmp1230;
    org$pandalanguage$pandac$Type* $tmp1231;
    org$pandalanguage$pandac$Type* $tmp1232;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1235;
    panda$collections$Array* $tmp1242;
    panda$collections$Array* $tmp1243;
    panda$collections$Array* parameters1244 = NULL;
    panda$collections$Array* $tmp1245;
    panda$collections$Array* $tmp1246;
    panda$collections$Iterator* Iter$393$91251 = NULL;
    panda$collections$Iterator* $tmp1252;
    panda$collections$Iterator* $tmp1253;
    org$pandalanguage$pandac$ASTNode* p1269 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1270;
    panda$core$Object* $tmp1271;
    org$pandalanguage$pandac$ASTNode* $match$394_131279 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1280;
    panda$core$String* name1282 = NULL;
    org$pandalanguage$pandac$ASTNode* type1284 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1286;
    org$pandalanguage$pandac$Type* $tmp1288;
    org$pandalanguage$pandac$Type* returnType1293 = NULL;
    org$pandalanguage$pandac$Type* $tmp1294;
    org$pandalanguage$pandac$Type* $tmp1295;
    org$pandalanguage$pandac$Type* $tmp1296;
    org$pandalanguage$pandac$Type* $tmp1298;
    org$pandalanguage$pandac$Type* $tmp1299;
    org$pandalanguage$pandac$Type* $tmp1300;
    org$pandalanguage$pandac$Type* $tmp1305;
    org$pandalanguage$pandac$MethodDecl* $returnValue1320;
    org$pandalanguage$pandac$MethodDecl* $tmp1321;
    org$pandalanguage$pandac$MethodDecl* $tmp1322;
    int $tmp1128;
    {
        memset(&doccomment1129, 0, sizeof(doccomment1129));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1130 = doccomment1129;
                $tmp1131 = NULL;
                doccomment1129 = $tmp1131;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1131));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1130));
            }
        }
        }
        else {
        {
            int $tmp1134;
            {
                $tmp1136 = p_rawDoccomment;
                $match$357_131135 = $tmp1136;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1136));
                panda$core$Bit $tmp1137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$357_131135->$rawValue, ((panda$core$Int64) { 38 }));
                if ($tmp1137.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1139 = ((org$pandalanguage$pandac$Position*) ((char*) $match$357_131135->$data + 0));
                    position1138 = *$tmp1139;
                    panda$core$String** $tmp1141 = ((panda$core$String**) ((char*) $match$357_131135->$data + 16));
                    text1140 = *$tmp1141;
                    {
                        $tmp1142 = doccomment1129;
                        $tmp1143 = text1140;
                        doccomment1129 = $tmp1143;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1143));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1142));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1134 = -1;
            goto $l1132;
            $l1132:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1136));
            switch ($tmp1134) {
                case -1: goto $l1144;
            }
            $l1144:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1148 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1147 = $tmp1148;
        $tmp1146 = $tmp1147;
        annotations1145 = $tmp1146;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1146));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1147));
        panda$core$Bit $tmp1151 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        bool $tmp1150 = $tmp1151.value;
        if (!$tmp1150) goto $l1152;
        panda$core$Bit $tmp1153 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
        $tmp1150 = $tmp1153.value;
        $l1152:;
        panda$core$Bit $tmp1154 = { $tmp1150 };
        bool $tmp1149 = $tmp1154.value;
        if ($tmp1149) goto $l1155;
        panda$core$Bit $tmp1156 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations1145);
        $tmp1149 = $tmp1156.value;
        $l1155:;
        panda$core$Bit $tmp1157 = { $tmp1149 };
        if ($tmp1157.value) {
        {
            panda$core$Int64 $tmp1158 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1145->flags, ((panda$core$Int64) { 256 }));
            annotations1145->flags = $tmp1158;
        }
        }
        memset(&generics1159, 0, sizeof(generics1159));
        if (((panda$core$Bit) { p_rawGenerics != NULL }).value) {
        {
            int $tmp1162;
            {
                {
                    $tmp1163 = generics1159;
                    panda$collections$Array* $tmp1166 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1166);
                    $tmp1165 = $tmp1166;
                    $tmp1164 = $tmp1165;
                    generics1159 = $tmp1164;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1164));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1165));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1163));
                }
                panda$core$String* $tmp1173 = panda$core$String$convert$R$panda$core$String(p_owner->name);
                $tmp1172 = $tmp1173;
                panda$core$String* $tmp1175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1172, &$s1174);
                $tmp1171 = $tmp1175;
                panda$core$String* $tmp1176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1171, p_name);
                $tmp1170 = $tmp1176;
                panda$core$String* $tmp1178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1170, &$s1177);
                $tmp1169 = $tmp1178;
                $tmp1168 = $tmp1169;
                fullName1167 = $tmp1168;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1168));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1169));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1170));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1171));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1172));
                {
                    int $tmp1181;
                    {
                        ITable* $tmp1185 = ((panda$collections$Iterable*) p_rawGenerics)->$class->itable;
                        while ($tmp1185->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1185 = $tmp1185->next;
                        }
                        $fn1187 $tmp1186 = $tmp1185->methods[0];
                        panda$collections$Iterator* $tmp1188 = $tmp1186(((panda$collections$Iterable*) p_rawGenerics));
                        $tmp1184 = $tmp1188;
                        $tmp1183 = $tmp1184;
                        Iter$372$131182 = $tmp1183;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1183));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1184));
                        $l1189:;
                        ITable* $tmp1192 = Iter$372$131182->$class->itable;
                        while ($tmp1192->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1192 = $tmp1192->next;
                        }
                        $fn1194 $tmp1193 = $tmp1192->methods[0];
                        panda$core$Bit $tmp1195 = $tmp1193(Iter$372$131182);
                        panda$core$Bit $tmp1196 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1195);
                        bool $tmp1191 = $tmp1196.value;
                        if (!$tmp1191) goto $l1190;
                        {
                            int $tmp1199;
                            {
                                ITable* $tmp1203 = Iter$372$131182->$class->itable;
                                while ($tmp1203->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1203 = $tmp1203->next;
                                }
                                $fn1205 $tmp1204 = $tmp1203->methods[1];
                                panda$core$Object* $tmp1206 = $tmp1204(Iter$372$131182);
                                $tmp1202 = $tmp1206;
                                $tmp1201 = ((org$pandalanguage$pandac$ASTNode*) $tmp1202);
                                p1200 = $tmp1201;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1201));
                                panda$core$Panda$unref$panda$core$Object($tmp1202);
                                memset(&parameterName1207, 0, sizeof(parameterName1207));
                                memset(&bound1208, 0, sizeof(bound1208));
                                int $tmp1211;
                                {
                                    $tmp1213 = p1200;
                                    $match$375_171212 = $tmp1213;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1213));
                                    panda$core$Bit $tmp1214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$375_171212->$rawValue, ((panda$core$Int64) { 20 }));
                                    if ($tmp1214.value) {
                                    {
                                        panda$core$String** $tmp1216 = ((panda$core$String**) ((char*) $match$375_171212->$data + 16));
                                        id1215 = *$tmp1216;
                                        {
                                            $tmp1217 = parameterName1207;
                                            $tmp1218 = id1215;
                                            parameterName1207 = $tmp1218;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1218));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1217));
                                        }
                                        {
                                            $tmp1219 = bound1208;
                                            org$pandalanguage$pandac$Type* $tmp1222 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                            $tmp1221 = $tmp1222;
                                            $tmp1220 = $tmp1221;
                                            bound1208 = $tmp1220;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1220));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1221));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1219));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$375_171212->$rawValue, ((panda$core$Int64) { 44 }));
                                    if ($tmp1223.value) {
                                    {
                                        panda$core$String** $tmp1225 = ((panda$core$String**) ((char*) $match$375_171212->$data + 16));
                                        id1224 = *$tmp1225;
                                        org$pandalanguage$pandac$ASTNode** $tmp1227 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$375_171212->$data + 24));
                                        type1226 = *$tmp1227;
                                        {
                                            $tmp1228 = parameterName1207;
                                            $tmp1229 = id1224;
                                            parameterName1207 = $tmp1229;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1229));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1228));
                                        }
                                        {
                                            $tmp1230 = bound1208;
                                            org$pandalanguage$pandac$Type* $tmp1233 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1226);
                                            $tmp1232 = $tmp1233;
                                            $tmp1231 = $tmp1232;
                                            bound1208 = $tmp1231;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1231));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1232));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1230));
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
                                $tmp1211 = -1;
                                goto $l1209;
                                $l1209:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1213));
                                switch ($tmp1211) {
                                    case -1: goto $l1234;
                                }
                                $l1234:;
                                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1236 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                                org$pandalanguage$pandac$Position $tmp1238 = (($fn1237) p1200->$class->vtable[2])(p1200);
                                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1236, $tmp1238, fullName1167, parameterName1207, bound1208);
                                $tmp1235 = $tmp1236;
                                panda$collections$Array$add$panda$collections$Array$T(generics1159, ((panda$core$Object*) $tmp1235));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1235));
                            }
                            $tmp1199 = -1;
                            goto $l1197;
                            $l1197:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1208));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameterName1207));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1200));
                            p1200 = NULL;
                            switch ($tmp1199) {
                                case -1: goto $l1239;
                            }
                            $l1239:;
                        }
                        goto $l1189;
                        $l1190:;
                    }
                    $tmp1181 = -1;
                    goto $l1179;
                    $l1179:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$372$131182));
                    Iter$372$131182 = NULL;
                    switch ($tmp1181) {
                        case -1: goto $l1240;
                    }
                    $l1240:;
                }
            }
            $tmp1162 = -1;
            goto $l1160;
            $l1160:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1167));
            fullName1167 = NULL;
            switch ($tmp1162) {
                case -1: goto $l1241;
            }
            $l1241:;
        }
        }
        else {
        {
            {
                $tmp1242 = generics1159;
                $tmp1243 = NULL;
                generics1159 = $tmp1243;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1243));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1242));
            }
        }
        }
        panda$collections$Array* $tmp1247 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1247);
        $tmp1246 = $tmp1247;
        $tmp1245 = $tmp1246;
        parameters1244 = $tmp1245;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1245));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1246));
        {
            int $tmp1250;
            {
                ITable* $tmp1254 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1254->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1254 = $tmp1254->next;
                }
                $fn1256 $tmp1255 = $tmp1254->methods[0];
                panda$collections$Iterator* $tmp1257 = $tmp1255(((panda$collections$Iterable*) p_rawParameters));
                $tmp1253 = $tmp1257;
                $tmp1252 = $tmp1253;
                Iter$393$91251 = $tmp1252;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1252));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1253));
                $l1258:;
                ITable* $tmp1261 = Iter$393$91251->$class->itable;
                while ($tmp1261->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1261 = $tmp1261->next;
                }
                $fn1263 $tmp1262 = $tmp1261->methods[0];
                panda$core$Bit $tmp1264 = $tmp1262(Iter$393$91251);
                panda$core$Bit $tmp1265 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1264);
                bool $tmp1260 = $tmp1265.value;
                if (!$tmp1260) goto $l1259;
                {
                    int $tmp1268;
                    {
                        ITable* $tmp1272 = Iter$393$91251->$class->itable;
                        while ($tmp1272->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1272 = $tmp1272->next;
                        }
                        $fn1274 $tmp1273 = $tmp1272->methods[1];
                        panda$core$Object* $tmp1275 = $tmp1273(Iter$393$91251);
                        $tmp1271 = $tmp1275;
                        $tmp1270 = ((org$pandalanguage$pandac$ASTNode*) $tmp1271);
                        p1269 = $tmp1270;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1270));
                        panda$core$Panda$unref$panda$core$Object($tmp1271);
                        int $tmp1278;
                        {
                            $tmp1280 = p1269;
                            $match$394_131279 = $tmp1280;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1280));
                            panda$core$Bit $tmp1281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$394_131279->$rawValue, ((panda$core$Int64) { 31 }));
                            if ($tmp1281.value) {
                            {
                                panda$core$String** $tmp1283 = ((panda$core$String**) ((char*) $match$394_131279->$data + 16));
                                name1282 = *$tmp1283;
                                org$pandalanguage$pandac$ASTNode** $tmp1285 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$394_131279->$data + 24));
                                type1284 = *$tmp1285;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1287 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1289 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1284);
                                $tmp1288 = $tmp1289;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1287, name1282, $tmp1288);
                                $tmp1286 = $tmp1287;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1244, ((panda$core$Object*) $tmp1286));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1286));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1288));
                            }
                            }
                            else {
                            {
                                PANDA_ASSERT(((panda$core$Bit) { false }).value);
                            }
                            }
                        }
                        $tmp1278 = -1;
                        goto $l1276;
                        $l1276:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1280));
                        switch ($tmp1278) {
                            case -1: goto $l1290;
                        }
                        $l1290:;
                    }
                    $tmp1268 = -1;
                    goto $l1266;
                    $l1266:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1269));
                    p1269 = NULL;
                    switch ($tmp1268) {
                        case -1: goto $l1291;
                    }
                    $l1291:;
                }
                goto $l1258;
                $l1259:;
            }
            $tmp1250 = -1;
            goto $l1248;
            $l1248:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$393$91251));
            Iter$393$91251 = NULL;
            switch ($tmp1250) {
                case -1: goto $l1292;
            }
            $l1292:;
        }
        memset(&returnType1293, 0, sizeof(returnType1293));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1294 = returnType1293;
                org$pandalanguage$pandac$Type* $tmp1297 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1296 = $tmp1297;
                $tmp1295 = $tmp1296;
                returnType1293 = $tmp1295;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1295));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1296));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1294));
            }
        }
        }
        else {
        {
            {
                $tmp1298 = returnType1293;
                org$pandalanguage$pandac$Type* $tmp1301 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1300 = $tmp1301;
                $tmp1299 = $tmp1300;
                returnType1293 = $tmp1299;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1299));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1300));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1298));
            }
        }
        }
        panda$core$Bit $tmp1303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
        bool $tmp1302 = $tmp1303.value;
        if (!$tmp1302) goto $l1304;
        org$pandalanguage$pandac$Type* $tmp1306 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1305 = $tmp1306;
        panda$core$Bit $tmp1307 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1293, $tmp1305);
        $tmp1302 = $tmp1307.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1305));
        $l1304:;
        panda$core$Bit $tmp1308 = { $tmp1302 };
        if ($tmp1308.value) {
        {
            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1309);
        }
        }
        bool $tmp1310 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1310) goto $l1311;
        panda$core$Bit $tmp1312 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1145, p_statements);
        $tmp1310 = $tmp1312.value;
        $l1311:;
        panda$core$Bit $tmp1313 = { $tmp1310 };
        if ($tmp1313.value) {
        {
            panda$core$Int64 $tmp1314 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1145->flags, ((panda$core$Int64) { 1024 }));
            annotations1145->flags = $tmp1314;
        }
        }
        bool $tmp1315 = ((panda$core$Bit) { p_statements == NULL }).value;
        if (!$tmp1315) goto $l1316;
        panda$core$Bit $tmp1317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        $tmp1315 = $tmp1317.value;
        $l1316:;
        panda$core$Bit $tmp1318 = { $tmp1315 };
        if ($tmp1318.value) {
        {
            panda$core$Int64 $tmp1319 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1145->flags, ((panda$core$Int64) { 512 }));
            annotations1145->flags = $tmp1319;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1323 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1323, p_owner, p_position, doccomment1129, annotations1145, p_kind, p_name, generics1159, parameters1244, returnType1293, p_statements);
        $tmp1322 = $tmp1323;
        $tmp1321 = $tmp1322;
        $returnValue1320 = $tmp1321;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1321));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1322));
        $tmp1128 = 0;
        goto $l1126;
        $l1324:;
        return $returnValue1320;
    }
    $l1126:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1293));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1244));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics1159));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1145));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1129));
    annotations1145 = NULL;
    parameters1244 = NULL;
    switch ($tmp1128) {
        case 0: goto $l1324;
    }
    $l1326:;
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$422_91330 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1331;
    org$pandalanguage$pandac$Position position1333;
    org$pandalanguage$pandac$ASTNode* dc1335 = NULL;
    panda$collections$ImmutableArray* annotations1337 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1339 = NULL;
    org$pandalanguage$pandac$Position position1342;
    org$pandalanguage$pandac$ASTNode* dc1344 = NULL;
    panda$collections$ImmutableArray* annotations1346 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1348;
    panda$core$String* name1350 = NULL;
    panda$collections$ImmutableArray* generics1352 = NULL;
    panda$collections$ImmutableArray* parameters1354 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1356 = NULL;
    panda$collections$ImmutableArray* statements1358 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1363 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1364;
    org$pandalanguage$pandac$MethodDecl* $tmp1365;
    org$pandalanguage$pandac$Position position1369;
    org$pandalanguage$pandac$ASTNode* dc1371 = NULL;
    panda$collections$ImmutableArray* annotations1373 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1375;
    panda$core$String* name1377 = NULL;
    panda$collections$ImmutableArray* generics1379 = NULL;
    panda$collections$ImmutableArray* supertypes1381 = NULL;
    panda$collections$ImmutableArray* members1383 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1388 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1389;
    org$pandalanguage$pandac$ClassDecl* $tmp1390;
    panda$core$Weak* $tmp1392;
    panda$core$Weak* $tmp1393;
    panda$core$Weak* $tmp1394;
    panda$core$String* $tmp1396;
    org$pandalanguage$pandac$Alias* $tmp1400;
    panda$core$String* $tmp1402;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1403;
    org$pandalanguage$pandac$Position $tmp1407;
    org$pandalanguage$pandac$Alias* $tmp1408;
    panda$core$String* $tmp1410;
    org$pandalanguage$pandac$Position $tmp1412;
    org$pandalanguage$pandac$Position position1415;
    org$pandalanguage$pandac$ASTNode* dc1417 = NULL;
    panda$core$String* name1419 = NULL;
    panda$collections$ImmutableArray* fields1421 = NULL;
    int $tmp1329;
    {
        $tmp1331 = p_node;
        $match$422_91330 = $tmp1331;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1331));
        panda$core$Bit $tmp1332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91330->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1332.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1334 = ((org$pandalanguage$pandac$Position*) ((char*) $match$422_91330->$data + 0));
            position1333 = *$tmp1334;
            org$pandalanguage$pandac$ASTNode** $tmp1336 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$422_91330->$data + 16));
            dc1335 = *$tmp1336;
            panda$collections$ImmutableArray** $tmp1338 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91330->$data + 24));
            annotations1337 = *$tmp1338;
            org$pandalanguage$pandac$ASTNode** $tmp1340 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$422_91330->$data + 32));
            varDecl1339 = *$tmp1340;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1333, dc1335, annotations1337, varDecl1339);
        }
        }
        else {
        panda$core$Bit $tmp1341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91330->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1341.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1343 = ((org$pandalanguage$pandac$Position*) ((char*) $match$422_91330->$data + 0));
            position1342 = *$tmp1343;
            org$pandalanguage$pandac$ASTNode** $tmp1345 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$422_91330->$data + 16));
            dc1344 = *$tmp1345;
            panda$collections$ImmutableArray** $tmp1347 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91330->$data + 24));
            annotations1346 = *$tmp1347;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1349 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$422_91330->$data + 32));
            kind1348 = *$tmp1349;
            panda$core$String** $tmp1351 = ((panda$core$String**) ((char*) $match$422_91330->$data + 40));
            name1350 = *$tmp1351;
            panda$collections$ImmutableArray** $tmp1353 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91330->$data + 48));
            generics1352 = *$tmp1353;
            panda$collections$ImmutableArray** $tmp1355 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91330->$data + 56));
            parameters1354 = *$tmp1355;
            org$pandalanguage$pandac$ASTNode** $tmp1357 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$422_91330->$data + 64));
            returnType1356 = *$tmp1357;
            panda$collections$ImmutableArray** $tmp1359 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91330->$data + 72));
            statements1358 = *$tmp1359;
            int $tmp1362;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1366 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1342, dc1344, annotations1346, kind1348, name1350, generics1352, parameters1354, returnType1356, statements1358);
                $tmp1365 = $tmp1366;
                $tmp1364 = $tmp1365;
                m1363 = $tmp1364;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1364));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1365));
                if (((panda$core$Bit) { m1363 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1363));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1363));
                }
                }
            }
            $tmp1362 = -1;
            goto $l1360;
            $l1360:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1363));
            m1363 = NULL;
            switch ($tmp1362) {
                case -1: goto $l1367;
            }
            $l1367:;
        }
        }
        else {
        panda$core$Bit $tmp1368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91330->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1368.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1370 = ((org$pandalanguage$pandac$Position*) ((char*) $match$422_91330->$data + 0));
            position1369 = *$tmp1370;
            org$pandalanguage$pandac$ASTNode** $tmp1372 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$422_91330->$data + 16));
            dc1371 = *$tmp1372;
            panda$collections$ImmutableArray** $tmp1374 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91330->$data + 24));
            annotations1373 = *$tmp1374;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1376 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$422_91330->$data + 32));
            kind1375 = *$tmp1376;
            panda$core$String** $tmp1378 = ((panda$core$String**) ((char*) $match$422_91330->$data + 40));
            name1377 = *$tmp1378;
            panda$collections$ImmutableArray** $tmp1380 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91330->$data + 48));
            generics1379 = *$tmp1380;
            panda$collections$ImmutableArray** $tmp1382 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91330->$data + 56));
            supertypes1381 = *$tmp1382;
            panda$collections$ImmutableArray** $tmp1384 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91330->$data + 64));
            members1383 = *$tmp1384;
            int $tmp1387;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1391 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, p_cl->name, position1369, dc1371, annotations1373, kind1375, name1377, generics1379, supertypes1381, members1383);
                $tmp1390 = $tmp1391;
                $tmp1389 = $tmp1390;
                inner1388 = $tmp1389;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1389));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1390));
                if (((panda$core$Bit) { inner1388 != NULL }).value) {
                {
                    {
                        $tmp1392 = inner1388->owner;
                        panda$core$Weak* $tmp1395 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp1395, ((panda$core$Object*) p_cl));
                        $tmp1394 = $tmp1395;
                        $tmp1393 = $tmp1394;
                        inner1388->owner = $tmp1393;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1393));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1394));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1392));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1388));
                    panda$core$String* $tmp1398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_cl->name, &$s1397);
                    $tmp1396 = $tmp1398;
                    panda$core$Bit $tmp1399 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(inner1388->name, $tmp1396);
                    PANDA_ASSERT($tmp1399.value);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1396));
                    org$pandalanguage$pandac$Alias* $tmp1401 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$Int64 $tmp1404 = panda$core$String$length$R$panda$core$Int64(p_cl->name);
                    panda$core$Int64 $tmp1405 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1404, ((panda$core$Int64) { 1 }));
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1403, ((panda$core$Int64$nullable) { $tmp1405, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                    panda$core$String* $tmp1406 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(inner1388->name, $tmp1403);
                    $tmp1402 = $tmp1406;
                    org$pandalanguage$pandac$Position$init(&$tmp1407);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1401, $tmp1402, inner1388->name, $tmp1407);
                    $tmp1400 = $tmp1401;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1400));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1400));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1402));
                    org$pandalanguage$pandac$Alias* $tmp1409 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$String* $tmp1411 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1410 = $tmp1411;
                    org$pandalanguage$pandac$Position$init(&$tmp1412);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1409, $tmp1410, p_cl->name, $tmp1412);
                    $tmp1408 = $tmp1409;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(inner1388->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1408));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1408));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1410));
                }
                }
            }
            $tmp1387 = -1;
            goto $l1385;
            $l1385:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1388));
            inner1388 = NULL;
            switch ($tmp1387) {
                case -1: goto $l1413;
            }
            $l1413:;
        }
        }
        else {
        panda$core$Bit $tmp1414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91330->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1414.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1416 = ((org$pandalanguage$pandac$Position*) ((char*) $match$422_91330->$data + 0));
            position1415 = *$tmp1416;
            org$pandalanguage$pandac$ASTNode** $tmp1418 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$422_91330->$data + 16));
            dc1417 = *$tmp1418;
            panda$core$String** $tmp1420 = ((panda$core$String**) ((char*) $match$422_91330->$data + 24));
            name1419 = *$tmp1420;
            panda$collections$ImmutableArray** $tmp1422 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91330->$data + 32));
            fields1421 = *$tmp1422;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1415, dc1417, name1419, fields1421);
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
    $tmp1329 = -1;
    goto $l1327;
    $l1327:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1331));
    switch ($tmp1329) {
        case -1: goto $l1423;
    }
    $l1423:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1427 = NULL;
    panda$core$String* $tmp1428;
    panda$core$String* $tmp1429;
    org$pandalanguage$pandac$ASTNode* $match$460_131433 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1434;
    org$pandalanguage$pandac$Position position1436;
    panda$core$String* text1438 = NULL;
    panda$core$String* $tmp1440;
    panda$core$String* $tmp1441;
    panda$collections$Array* fields1443 = NULL;
    panda$collections$Array* $tmp1444;
    panda$collections$Array* $tmp1445;
    panda$collections$Iterator* Iter$468$91450 = NULL;
    panda$collections$Iterator* $tmp1451;
    panda$collections$Iterator* $tmp1452;
    org$pandalanguage$pandac$ASTNode* t1468 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1469;
    panda$core$Object* $tmp1470;
    org$pandalanguage$pandac$Type* $tmp1475;
    org$pandalanguage$pandac$ChoiceEntry* entry1479 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1480;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1481;
    int $tmp1426;
    {
        memset(&doccomment1427, 0, sizeof(doccomment1427));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1428 = doccomment1427;
                $tmp1429 = NULL;
                doccomment1427 = $tmp1429;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1429));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1428));
            }
        }
        }
        else {
        {
            int $tmp1432;
            {
                $tmp1434 = p_rawDoccomment;
                $match$460_131433 = $tmp1434;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1434));
                panda$core$Bit $tmp1435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$460_131433->$rawValue, ((panda$core$Int64) { 38 }));
                if ($tmp1435.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1437 = ((org$pandalanguage$pandac$Position*) ((char*) $match$460_131433->$data + 0));
                    position1436 = *$tmp1437;
                    panda$core$String** $tmp1439 = ((panda$core$String**) ((char*) $match$460_131433->$data + 16));
                    text1438 = *$tmp1439;
                    {
                        $tmp1440 = doccomment1427;
                        $tmp1441 = text1438;
                        doccomment1427 = $tmp1441;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1441));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1440));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1432 = -1;
            goto $l1430;
            $l1430:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1434));
            switch ($tmp1432) {
                case -1: goto $l1442;
            }
            $l1442:;
        }
        }
        panda$collections$Array* $tmp1446 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1446);
        $tmp1445 = $tmp1446;
        $tmp1444 = $tmp1445;
        fields1443 = $tmp1444;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1444));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1445));
        {
            int $tmp1449;
            {
                ITable* $tmp1453 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1453->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1453 = $tmp1453->next;
                }
                $fn1455 $tmp1454 = $tmp1453->methods[0];
                panda$collections$Iterator* $tmp1456 = $tmp1454(((panda$collections$Iterable*) p_rawFields));
                $tmp1452 = $tmp1456;
                $tmp1451 = $tmp1452;
                Iter$468$91450 = $tmp1451;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1451));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1452));
                $l1457:;
                ITable* $tmp1460 = Iter$468$91450->$class->itable;
                while ($tmp1460->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1460 = $tmp1460->next;
                }
                $fn1462 $tmp1461 = $tmp1460->methods[0];
                panda$core$Bit $tmp1463 = $tmp1461(Iter$468$91450);
                panda$core$Bit $tmp1464 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1463);
                bool $tmp1459 = $tmp1464.value;
                if (!$tmp1459) goto $l1458;
                {
                    int $tmp1467;
                    {
                        ITable* $tmp1471 = Iter$468$91450->$class->itable;
                        while ($tmp1471->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1471 = $tmp1471->next;
                        }
                        $fn1473 $tmp1472 = $tmp1471->methods[1];
                        panda$core$Object* $tmp1474 = $tmp1472(Iter$468$91450);
                        $tmp1470 = $tmp1474;
                        $tmp1469 = ((org$pandalanguage$pandac$ASTNode*) $tmp1470);
                        t1468 = $tmp1469;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1469));
                        panda$core$Panda$unref$panda$core$Object($tmp1470);
                        org$pandalanguage$pandac$Type* $tmp1476 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1468);
                        $tmp1475 = $tmp1476;
                        panda$collections$Array$add$panda$collections$Array$T(fields1443, ((panda$core$Object*) $tmp1475));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1475));
                    }
                    $tmp1467 = -1;
                    goto $l1465;
                    $l1465:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1468));
                    t1468 = NULL;
                    switch ($tmp1467) {
                        case -1: goto $l1477;
                    }
                    $l1477:;
                }
                goto $l1457;
                $l1458:;
            }
            $tmp1449 = -1;
            goto $l1447;
            $l1447:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$468$91450));
            Iter$468$91450 = NULL;
            switch ($tmp1449) {
                case -1: goto $l1478;
            }
            $l1478:;
        }
        org$pandalanguage$pandac$ChoiceEntry* $tmp1482 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
        panda$core$Int64 $tmp1483 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
        org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1482, p_cl, p_position, p_name, doccomment1427, $tmp1483, ((panda$collections$ListView*) fields1443));
        $tmp1481 = $tmp1482;
        $tmp1480 = $tmp1481;
        entry1479 = $tmp1480;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1480));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1481));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry1479));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1479));
    }
    $tmp1426 = -1;
    goto $l1424;
    $l1424:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1479));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1443));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1427));
    fields1443 = NULL;
    entry1479 = NULL;
    switch ($tmp1426) {
        case -1: goto $l1484;
    }
    $l1484:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1488 = NULL;
    panda$core$String* $tmp1491;
    panda$core$String* $tmp1492;
    panda$core$String* $tmp1493;
    panda$core$String* $tmp1494;
    panda$core$String* $tmp1495;
    panda$core$String* $tmp1496;
    panda$core$String* $tmp1503;
    panda$core$String* $tmp1504;
    panda$core$String* doccomment1505 = NULL;
    panda$core$String* $tmp1506;
    panda$core$String* $tmp1507;
    org$pandalanguage$pandac$ASTNode* $match$494_131511 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1512;
    org$pandalanguage$pandac$Position position1514;
    panda$core$String* text1516 = NULL;
    panda$core$String* $tmp1518;
    panda$core$String* $tmp1519;
    org$pandalanguage$pandac$Annotations* annotations1521 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1522;
    org$pandalanguage$pandac$Annotations* $tmp1523;
    panda$collections$Array* parameters1525 = NULL;
    panda$collections$Array* $tmp1526;
    panda$collections$Array* $tmp1527;
    panda$collections$Iterator* Iter$504$131532 = NULL;
    panda$collections$Iterator* $tmp1533;
    panda$collections$Iterator* $tmp1534;
    org$pandalanguage$pandac$ASTNode* p1550 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1551;
    panda$core$Object* $tmp1552;
    panda$core$String* name1557 = NULL;
    org$pandalanguage$pandac$Type* bound1558 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$507_171562 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1563;
    panda$core$String* id1565 = NULL;
    panda$core$String* $tmp1567;
    panda$core$String* $tmp1568;
    org$pandalanguage$pandac$Type* $tmp1569;
    org$pandalanguage$pandac$Type* $tmp1570;
    org$pandalanguage$pandac$Type* $tmp1571;
    panda$core$String* id1574 = NULL;
    org$pandalanguage$pandac$ASTNode* type1576 = NULL;
    panda$core$String* $tmp1578;
    panda$core$String* $tmp1579;
    org$pandalanguage$pandac$Type* $tmp1580;
    org$pandalanguage$pandac$Type* $tmp1581;
    org$pandalanguage$pandac$Type* $tmp1582;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1585;
    panda$collections$Array* supertypes1593 = NULL;
    panda$collections$Array* $tmp1594;
    panda$collections$Array* $tmp1595;
    panda$collections$Iterator* Iter$528$131602 = NULL;
    panda$collections$Iterator* $tmp1603;
    panda$collections$Iterator* $tmp1604;
    org$pandalanguage$pandac$ASTNode* s1620 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1621;
    panda$core$Object* $tmp1622;
    org$pandalanguage$pandac$Type* $tmp1627;
    org$pandalanguage$pandac$ClassDecl* result1631 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1632;
    org$pandalanguage$pandac$ClassDecl* $tmp1633;
    panda$core$Object* $tmp1635;
    panda$core$Object* $tmp1638;
    org$pandalanguage$pandac$FieldDecl* rawValue1645 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1646;
    org$pandalanguage$pandac$FieldDecl* $tmp1647;
    org$pandalanguage$pandac$Annotations* $tmp1649;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1651;
    org$pandalanguage$pandac$Type* $tmp1653;
    org$pandalanguage$pandac$FieldDecl* data1655 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1656;
    org$pandalanguage$pandac$FieldDecl* $tmp1657;
    org$pandalanguage$pandac$Annotations* $tmp1659;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1661;
    org$pandalanguage$pandac$Type* $tmp1663;
    panda$collections$Iterator* Iter$545$91669 = NULL;
    panda$collections$Iterator* $tmp1670;
    panda$collections$Iterator* $tmp1671;
    org$pandalanguage$pandac$ASTNode* m1687 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1688;
    panda$core$Object* $tmp1689;
    org$pandalanguage$pandac$ASTNode* $match$546_131697 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1698;
    org$pandalanguage$pandac$Position mPosition1700;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1702;
    org$pandalanguage$pandac$ClassDecl$Kind $match$549_251705;
    panda$core$Bit foundInit1714;
    panda$core$Bit foundCleanup1715;
    panda$collections$Iterator* Iter$564$91719 = NULL;
    panda$collections$Iterator* $tmp1720;
    panda$collections$Iterator* $tmp1721;
    org$pandalanguage$pandac$MethodDecl* m1737 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1738;
    panda$core$Object* $tmp1739;
    org$pandalanguage$pandac$MethodDecl* defaultInit1769 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1770;
    org$pandalanguage$pandac$MethodDecl* $tmp1771;
    org$pandalanguage$pandac$Annotations* $tmp1773;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1775;
    panda$collections$Array* $tmp1777;
    panda$collections$Array* $tmp1779;
    org$pandalanguage$pandac$Type* $tmp1781;
    panda$collections$ImmutableArray* $tmp1783;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1803 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1804;
    org$pandalanguage$pandac$MethodDecl* $tmp1805;
    org$pandalanguage$pandac$Annotations* $tmp1807;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1810;
    panda$collections$Array* $tmp1812;
    panda$collections$Array* $tmp1814;
    org$pandalanguage$pandac$Type* $tmp1816;
    panda$collections$ImmutableArray* $tmp1818;
    panda$core$Bit haveFields1822;
    panda$collections$Iterator* Iter$594$131826 = NULL;
    panda$collections$Iterator* $tmp1827;
    panda$collections$Iterator* $tmp1828;
    org$pandalanguage$pandac$ChoiceEntry* e1844 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1845;
    panda$core$Object* $tmp1846;
    org$pandalanguage$pandac$Type* $tmp1857;
    org$pandalanguage$pandac$Type* $tmp1858;
    org$pandalanguage$pandac$Type* $tmp1859;
    panda$core$Object* $tmp1861;
    panda$core$Object* $tmp1862;
    org$pandalanguage$pandac$ClassDecl* $returnValue1866;
    org$pandalanguage$pandac$ClassDecl* $tmp1867;
    int $tmp1487;
    {
        memset(&fullName1488, 0, sizeof(fullName1488));
        panda$core$Bit $tmp1490 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s1489);
        if ($tmp1490.value) {
        {
            {
                $tmp1491 = fullName1488;
                panda$core$String* $tmp1497 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1496 = $tmp1497;
                panda$core$String* $tmp1499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1496, &$s1498);
                $tmp1495 = $tmp1499;
                panda$core$String* $tmp1500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1495, p_name);
                $tmp1494 = $tmp1500;
                panda$core$String* $tmp1502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1494, &$s1501);
                $tmp1493 = $tmp1502;
                $tmp1492 = $tmp1493;
                fullName1488 = $tmp1492;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1492));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1493));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1494));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1495));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1496));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1491));
            }
        }
        }
        else {
        {
            {
                $tmp1503 = fullName1488;
                $tmp1504 = p_name;
                fullName1488 = $tmp1504;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1504));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1503));
            }
        }
        }
        memset(&doccomment1505, 0, sizeof(doccomment1505));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1506 = doccomment1505;
                $tmp1507 = NULL;
                doccomment1505 = $tmp1507;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1507));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1506));
            }
        }
        }
        else {
        {
            int $tmp1510;
            {
                $tmp1512 = p_rawDoccomment;
                $match$494_131511 = $tmp1512;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1512));
                panda$core$Bit $tmp1513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$494_131511->$rawValue, ((panda$core$Int64) { 38 }));
                if ($tmp1513.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1515 = ((org$pandalanguage$pandac$Position*) ((char*) $match$494_131511->$data + 0));
                    position1514 = *$tmp1515;
                    panda$core$String** $tmp1517 = ((panda$core$String**) ((char*) $match$494_131511->$data + 16));
                    text1516 = *$tmp1517;
                    {
                        $tmp1518 = doccomment1505;
                        $tmp1519 = text1516;
                        doccomment1505 = $tmp1519;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1519));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1518));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1510 = -1;
            goto $l1508;
            $l1508:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1512));
            switch ($tmp1510) {
                case -1: goto $l1520;
            }
            $l1520:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1524 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1523 = $tmp1524;
        $tmp1522 = $tmp1523;
        annotations1521 = $tmp1522;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1522));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1523));
        panda$collections$Array* $tmp1528 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1528);
        $tmp1527 = $tmp1528;
        $tmp1526 = $tmp1527;
        parameters1525 = $tmp1526;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1526));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1527));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1531;
                {
                    ITable* $tmp1535 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1535->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1535 = $tmp1535->next;
                    }
                    $fn1537 $tmp1536 = $tmp1535->methods[0];
                    panda$collections$Iterator* $tmp1538 = $tmp1536(((panda$collections$Iterable*) p_generics));
                    $tmp1534 = $tmp1538;
                    $tmp1533 = $tmp1534;
                    Iter$504$131532 = $tmp1533;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1533));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1534));
                    $l1539:;
                    ITable* $tmp1542 = Iter$504$131532->$class->itable;
                    while ($tmp1542->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1542 = $tmp1542->next;
                    }
                    $fn1544 $tmp1543 = $tmp1542->methods[0];
                    panda$core$Bit $tmp1545 = $tmp1543(Iter$504$131532);
                    panda$core$Bit $tmp1546 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1545);
                    bool $tmp1541 = $tmp1546.value;
                    if (!$tmp1541) goto $l1540;
                    {
                        int $tmp1549;
                        {
                            ITable* $tmp1553 = Iter$504$131532->$class->itable;
                            while ($tmp1553->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1553 = $tmp1553->next;
                            }
                            $fn1555 $tmp1554 = $tmp1553->methods[1];
                            panda$core$Object* $tmp1556 = $tmp1554(Iter$504$131532);
                            $tmp1552 = $tmp1556;
                            $tmp1551 = ((org$pandalanguage$pandac$ASTNode*) $tmp1552);
                            p1550 = $tmp1551;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1551));
                            panda$core$Panda$unref$panda$core$Object($tmp1552);
                            memset(&name1557, 0, sizeof(name1557));
                            memset(&bound1558, 0, sizeof(bound1558));
                            int $tmp1561;
                            {
                                $tmp1563 = p1550;
                                $match$507_171562 = $tmp1563;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1563));
                                panda$core$Bit $tmp1564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$507_171562->$rawValue, ((panda$core$Int64) { 20 }));
                                if ($tmp1564.value) {
                                {
                                    panda$core$String** $tmp1566 = ((panda$core$String**) ((char*) $match$507_171562->$data + 16));
                                    id1565 = *$tmp1566;
                                    {
                                        $tmp1567 = name1557;
                                        $tmp1568 = id1565;
                                        name1557 = $tmp1568;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1568));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1567));
                                    }
                                    {
                                        $tmp1569 = bound1558;
                                        org$pandalanguage$pandac$Type* $tmp1572 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1571 = $tmp1572;
                                        $tmp1570 = $tmp1571;
                                        bound1558 = $tmp1570;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1570));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1571));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1569));
                                    }
                                }
                                }
                                else {
                                panda$core$Bit $tmp1573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$507_171562->$rawValue, ((panda$core$Int64) { 44 }));
                                if ($tmp1573.value) {
                                {
                                    panda$core$String** $tmp1575 = ((panda$core$String**) ((char*) $match$507_171562->$data + 16));
                                    id1574 = *$tmp1575;
                                    org$pandalanguage$pandac$ASTNode** $tmp1577 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$507_171562->$data + 24));
                                    type1576 = *$tmp1577;
                                    {
                                        $tmp1578 = name1557;
                                        $tmp1579 = id1574;
                                        name1557 = $tmp1579;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1579));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1578));
                                    }
                                    {
                                        $tmp1580 = bound1558;
                                        org$pandalanguage$pandac$Type* $tmp1583 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1576);
                                        $tmp1582 = $tmp1583;
                                        $tmp1581 = $tmp1582;
                                        bound1558 = $tmp1581;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1581));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1582));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1580));
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
                            $tmp1561 = -1;
                            goto $l1559;
                            $l1559:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1563));
                            switch ($tmp1561) {
                                case -1: goto $l1584;
                            }
                            $l1584:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1586 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1588 = (($fn1587) p1550->$class->vtable[2])(p1550);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1586, $tmp1588, fullName1488, name1557, bound1558);
                            $tmp1585 = $tmp1586;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1525, ((panda$core$Object*) $tmp1585));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1585));
                        }
                        $tmp1549 = -1;
                        goto $l1547;
                        $l1547:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1558));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1557));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1550));
                        p1550 = NULL;
                        switch ($tmp1549) {
                            case -1: goto $l1589;
                        }
                        $l1589:;
                    }
                    goto $l1539;
                    $l1540:;
                }
                $tmp1531 = -1;
                goto $l1529;
                $l1529:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$504$131532));
                Iter$504$131532 = NULL;
                switch ($tmp1531) {
                    case -1: goto $l1590;
                }
                $l1590:;
            }
            panda$core$Bit $tmp1591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1591.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1592);
            }
            }
        }
        }
        panda$collections$Array* $tmp1596 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1596);
        $tmp1595 = $tmp1596;
        $tmp1594 = $tmp1595;
        supertypes1593 = $tmp1594;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1594));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1595));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Bit $tmp1597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1597.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1598);
            }
            }
            {
                int $tmp1601;
                {
                    ITable* $tmp1605 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1605->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1605 = $tmp1605->next;
                    }
                    $fn1607 $tmp1606 = $tmp1605->methods[0];
                    panda$collections$Iterator* $tmp1608 = $tmp1606(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1604 = $tmp1608;
                    $tmp1603 = $tmp1604;
                    Iter$528$131602 = $tmp1603;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1603));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1604));
                    $l1609:;
                    ITable* $tmp1612 = Iter$528$131602->$class->itable;
                    while ($tmp1612->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1612 = $tmp1612->next;
                    }
                    $fn1614 $tmp1613 = $tmp1612->methods[0];
                    panda$core$Bit $tmp1615 = $tmp1613(Iter$528$131602);
                    panda$core$Bit $tmp1616 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1615);
                    bool $tmp1611 = $tmp1616.value;
                    if (!$tmp1611) goto $l1610;
                    {
                        int $tmp1619;
                        {
                            ITable* $tmp1623 = Iter$528$131602->$class->itable;
                            while ($tmp1623->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1623 = $tmp1623->next;
                            }
                            $fn1625 $tmp1624 = $tmp1623->methods[1];
                            panda$core$Object* $tmp1626 = $tmp1624(Iter$528$131602);
                            $tmp1622 = $tmp1626;
                            $tmp1621 = ((org$pandalanguage$pandac$ASTNode*) $tmp1622);
                            s1620 = $tmp1621;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1621));
                            panda$core$Panda$unref$panda$core$Object($tmp1622);
                            org$pandalanguage$pandac$Type* $tmp1628 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1620);
                            $tmp1627 = $tmp1628;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1593, ((panda$core$Object*) $tmp1627));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1627));
                        }
                        $tmp1619 = -1;
                        goto $l1617;
                        $l1617:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1620));
                        s1620 = NULL;
                        switch ($tmp1619) {
                            case -1: goto $l1629;
                        }
                        $l1629:;
                    }
                    goto $l1609;
                    $l1610:;
                }
                $tmp1601 = -1;
                goto $l1599;
                $l1599:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$528$131602));
                Iter$528$131602 = NULL;
                switch ($tmp1601) {
                    case -1: goto $l1630;
                }
                $l1630:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1634 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1637 = (($fn1636) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1635 = $tmp1637;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1634, p_source, p_position, p_aliases, doccomment1505, annotations1521, p_kind, fullName1488, ((panda$collections$ListView*) supertypes1593), parameters1525, ((org$pandalanguage$pandac$Compiler*) $tmp1635)->root);
        $tmp1633 = $tmp1634;
        $tmp1632 = $tmp1633;
        result1631 = $tmp1632;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1632));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1633));
        panda$core$Panda$unref$panda$core$Object($tmp1635);
        panda$core$Object* $tmp1640 = (($fn1639) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1638 = $tmp1640;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1638)->currentClass, ((panda$core$Object*) result1631));
        panda$core$Panda$unref$panda$core$Object($tmp1638);
        panda$core$Bit $tmp1641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1641.value) {
        {
            int $tmp1644;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1648 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1650 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1650);
                $tmp1649 = $tmp1650;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1651, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1654 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1653 = $tmp1654;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1648, result1631, result1631->position, NULL, $tmp1649, $tmp1651, &$s1652, $tmp1653, NULL);
                $tmp1647 = $tmp1648;
                $tmp1646 = $tmp1647;
                rawValue1645 = $tmp1646;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1646));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1647));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1653));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1649));
                panda$collections$Array$add$panda$collections$Array$T(result1631->fields, ((panda$core$Object*) rawValue1645));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1631->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1645));
                org$pandalanguage$pandac$FieldDecl* $tmp1658 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1660 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1660);
                $tmp1659 = $tmp1660;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1661, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1664 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1663 = $tmp1664;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1658, result1631, result1631->position, NULL, $tmp1659, $tmp1661, &$s1662, $tmp1663, NULL);
                $tmp1657 = $tmp1658;
                $tmp1656 = $tmp1657;
                data1655 = $tmp1656;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1656));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1657));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1663));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1659));
                panda$collections$Array$add$panda$collections$Array$T(result1631->fields, ((panda$core$Object*) data1655));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1631->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1655));
            }
            $tmp1644 = -1;
            goto $l1642;
            $l1642:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1655));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1645));
            rawValue1645 = NULL;
            data1655 = NULL;
            switch ($tmp1644) {
                case -1: goto $l1665;
            }
            $l1665:;
        }
        }
        {
            int $tmp1668;
            {
                ITable* $tmp1672 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1672->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1672 = $tmp1672->next;
                }
                $fn1674 $tmp1673 = $tmp1672->methods[0];
                panda$collections$Iterator* $tmp1675 = $tmp1673(((panda$collections$Iterable*) p_members));
                $tmp1671 = $tmp1675;
                $tmp1670 = $tmp1671;
                Iter$545$91669 = $tmp1670;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1670));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1671));
                $l1676:;
                ITable* $tmp1679 = Iter$545$91669->$class->itable;
                while ($tmp1679->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1679 = $tmp1679->next;
                }
                $fn1681 $tmp1680 = $tmp1679->methods[0];
                panda$core$Bit $tmp1682 = $tmp1680(Iter$545$91669);
                panda$core$Bit $tmp1683 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1682);
                bool $tmp1678 = $tmp1683.value;
                if (!$tmp1678) goto $l1677;
                {
                    int $tmp1686;
                    {
                        ITable* $tmp1690 = Iter$545$91669->$class->itable;
                        while ($tmp1690->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1690 = $tmp1690->next;
                        }
                        $fn1692 $tmp1691 = $tmp1690->methods[1];
                        panda$core$Object* $tmp1693 = $tmp1691(Iter$545$91669);
                        $tmp1689 = $tmp1693;
                        $tmp1688 = ((org$pandalanguage$pandac$ASTNode*) $tmp1689);
                        m1687 = $tmp1688;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1688));
                        panda$core$Panda$unref$panda$core$Object($tmp1689);
                        int $tmp1696;
                        {
                            $tmp1698 = m1687;
                            $match$546_131697 = $tmp1698;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1698));
                            panda$core$Bit $tmp1699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$546_131697->$rawValue, ((panda$core$Int64) { 26 }));
                            if ($tmp1699.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp1701 = ((org$pandalanguage$pandac$Position*) ((char*) $match$546_131697->$data + 0));
                                mPosition1700 = *$tmp1701;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1703 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$546_131697->$data + 32));
                                methodKind1702 = *$tmp1703;
                                panda$core$Bit $tmp1704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1702.$rawValue, ((panda$core$Int64) { 2 }));
                                if ($tmp1704.value) {
                                {
                                    {
                                        $match$549_251705 = p_kind;
                                        panda$core$Bit $tmp1706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$549_251705.$rawValue, ((panda$core$Int64) { 0 }));
                                        if ($tmp1706.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$549_251705.$rawValue, ((panda$core$Int64) { 1 }));
                                        if ($tmp1707.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition1700, &$s1708);
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$549_251705.$rawValue, ((panda$core$Int64) { 2 }));
                                        if ($tmp1709.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition1700, &$s1710);
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
                        $tmp1696 = -1;
                        goto $l1694;
                        $l1694:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1698));
                        switch ($tmp1696) {
                            case -1: goto $l1711;
                        }
                        $l1711:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1631, m1687);
                    }
                    $tmp1686 = -1;
                    goto $l1684;
                    $l1684:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1687));
                    m1687 = NULL;
                    switch ($tmp1686) {
                        case -1: goto $l1712;
                    }
                    $l1712:;
                }
                goto $l1676;
                $l1677:;
            }
            $tmp1668 = -1;
            goto $l1666;
            $l1666:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$545$91669));
            Iter$545$91669 = NULL;
            switch ($tmp1668) {
                case -1: goto $l1713;
            }
            $l1713:;
        }
        foundInit1714 = ((panda$core$Bit) { false });
        foundCleanup1715 = ((panda$core$Bit) { false });
        {
            int $tmp1718;
            {
                ITable* $tmp1722 = ((panda$collections$Iterable*) result1631->methods)->$class->itable;
                while ($tmp1722->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1722 = $tmp1722->next;
                }
                $fn1724 $tmp1723 = $tmp1722->methods[0];
                panda$collections$Iterator* $tmp1725 = $tmp1723(((panda$collections$Iterable*) result1631->methods));
                $tmp1721 = $tmp1725;
                $tmp1720 = $tmp1721;
                Iter$564$91719 = $tmp1720;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1720));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1721));
                $l1726:;
                ITable* $tmp1729 = Iter$564$91719->$class->itable;
                while ($tmp1729->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1729 = $tmp1729->next;
                }
                $fn1731 $tmp1730 = $tmp1729->methods[0];
                panda$core$Bit $tmp1732 = $tmp1730(Iter$564$91719);
                panda$core$Bit $tmp1733 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1732);
                bool $tmp1728 = $tmp1733.value;
                if (!$tmp1728) goto $l1727;
                {
                    int $tmp1736;
                    {
                        ITable* $tmp1740 = Iter$564$91719->$class->itable;
                        while ($tmp1740->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1740 = $tmp1740->next;
                        }
                        $fn1742 $tmp1741 = $tmp1740->methods[1];
                        panda$core$Object* $tmp1743 = $tmp1741(Iter$564$91719);
                        $tmp1739 = $tmp1743;
                        $tmp1738 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1739);
                        m1737 = $tmp1738;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1738));
                        panda$core$Panda$unref$panda$core$Object($tmp1739);
                        panda$core$Bit $tmp1744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1737->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
                        if ($tmp1744.value) {
                        {
                            foundInit1714 = ((panda$core$Bit) { true });
                        }
                        }
                        panda$core$Bit $tmp1747 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1737)->name, &$s1746);
                        bool $tmp1745 = $tmp1747.value;
                        if (!$tmp1745) goto $l1748;
                        panda$core$Int64 $tmp1749 = panda$collections$Array$get_count$R$panda$core$Int64(m1737->parameters);
                        panda$core$Bit $tmp1750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1749, ((panda$core$Int64) { 0 }));
                        $tmp1745 = $tmp1750.value;
                        $l1748:;
                        panda$core$Bit $tmp1751 = { $tmp1745 };
                        if ($tmp1751.value) {
                        {
                            foundCleanup1715 = ((panda$core$Bit) { true });
                            panda$core$Bit $tmp1752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp1752.value) {
                            {
                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1753);
                            }
                            }
                        }
                        }
                    }
                    $tmp1736 = -1;
                    goto $l1734;
                    $l1734:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1737));
                    m1737 = NULL;
                    switch ($tmp1736) {
                        case -1: goto $l1754;
                    }
                    $l1754:;
                }
                goto $l1726;
                $l1727:;
            }
            $tmp1718 = -1;
            goto $l1716;
            $l1716:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$564$91719));
            Iter$564$91719 = NULL;
            switch ($tmp1718) {
                case -1: goto $l1755;
            }
            $l1755:;
        }
        panda$core$Bit $tmp1758 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1714);
        bool $tmp1757 = $tmp1758.value;
        if (!$tmp1757) goto $l1759;
        panda$core$Bit $tmp1760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        $tmp1757 = $tmp1760.value;
        $l1759:;
        panda$core$Bit $tmp1761 = { $tmp1757 };
        bool $tmp1756 = $tmp1761.value;
        if (!$tmp1756) goto $l1762;
        panda$core$Bit $tmp1764 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1631->name, &$s1763);
        $tmp1756 = $tmp1764.value;
        $l1762:;
        panda$core$Bit $tmp1765 = { $tmp1756 };
        if ($tmp1765.value) {
        {
            int $tmp1768;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1772 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1774 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1774, ((panda$core$Int64) { 8192 }));
                $tmp1773 = $tmp1774;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1775, ((panda$core$Int64) { 2 }));
                panda$collections$Array* $tmp1778 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1778);
                $tmp1777 = $tmp1778;
                panda$collections$Array* $tmp1780 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1780);
                $tmp1779 = $tmp1780;
                org$pandalanguage$pandac$Type* $tmp1782 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1781 = $tmp1782;
                panda$collections$ImmutableArray* $tmp1784 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1784);
                $tmp1783 = $tmp1784;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1772, result1631, p_position, NULL, $tmp1773, $tmp1775, &$s1776, $tmp1777, $tmp1779, $tmp1781, $tmp1783);
                $tmp1771 = $tmp1772;
                $tmp1770 = $tmp1771;
                defaultInit1769 = $tmp1770;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1770));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1771));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1783));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1781));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1779));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1777));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1773));
                panda$collections$Array$add$panda$collections$Array$T(result1631->methods, ((panda$core$Object*) defaultInit1769));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1631->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1769));
            }
            $tmp1768 = -1;
            goto $l1766;
            $l1766:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1769));
            defaultInit1769 = NULL;
            switch ($tmp1768) {
                case -1: goto $l1785;
            }
            $l1785:;
        }
        }
        panda$core$Bit $tmp1788 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup1715);
        bool $tmp1787 = $tmp1788.value;
        if (!$tmp1787) goto $l1789;
        panda$core$Bit $tmp1791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp1790 = $tmp1791.value;
        if ($tmp1790) goto $l1792;
        panda$core$Bit $tmp1793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        $tmp1790 = $tmp1793.value;
        $l1792:;
        panda$core$Bit $tmp1794 = { $tmp1790 };
        $tmp1787 = $tmp1794.value;
        $l1789:;
        panda$core$Bit $tmp1795 = { $tmp1787 };
        bool $tmp1786 = $tmp1795.value;
        if (!$tmp1786) goto $l1796;
        panda$core$Bit $tmp1798 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1631->name, &$s1797);
        $tmp1786 = $tmp1798.value;
        $l1796:;
        panda$core$Bit $tmp1799 = { $tmp1786 };
        if ($tmp1799.value) {
        {
            int $tmp1802;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1806 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1808 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64 $tmp1809 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 32 }), ((panda$core$Int64) { 8192 }));
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1808, $tmp1809);
                $tmp1807 = $tmp1808;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1810, ((panda$core$Int64) { 0 }));
                panda$collections$Array* $tmp1813 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1813);
                $tmp1812 = $tmp1813;
                panda$collections$Array* $tmp1815 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1815);
                $tmp1814 = $tmp1815;
                org$pandalanguage$pandac$Type* $tmp1817 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1816 = $tmp1817;
                panda$collections$ImmutableArray* $tmp1819 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1819);
                $tmp1818 = $tmp1819;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1806, result1631, p_position, NULL, $tmp1807, $tmp1810, &$s1811, $tmp1812, $tmp1814, $tmp1816, $tmp1818);
                $tmp1805 = $tmp1806;
                $tmp1804 = $tmp1805;
                defaultCleanup1803 = $tmp1804;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1804));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1805));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1818));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1816));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1814));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1812));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1807));
                panda$collections$Array$add$panda$collections$Array$T(result1631->methods, ((panda$core$Object*) defaultCleanup1803));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1631->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1803));
            }
            $tmp1802 = -1;
            goto $l1800;
            $l1800:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1803));
            defaultCleanup1803 = NULL;
            switch ($tmp1802) {
                case -1: goto $l1820;
            }
            $l1820:;
        }
        }
        panda$core$Bit $tmp1821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1821.value) {
        {
            haveFields1822 = ((panda$core$Bit) { false });
            {
                int $tmp1825;
                {
                    ITable* $tmp1829 = ((panda$collections$Iterable*) result1631->choiceEntries)->$class->itable;
                    while ($tmp1829->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1829 = $tmp1829->next;
                    }
                    $fn1831 $tmp1830 = $tmp1829->methods[0];
                    panda$collections$Iterator* $tmp1832 = $tmp1830(((panda$collections$Iterable*) result1631->choiceEntries));
                    $tmp1828 = $tmp1832;
                    $tmp1827 = $tmp1828;
                    Iter$594$131826 = $tmp1827;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1827));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1828));
                    $l1833:;
                    ITable* $tmp1836 = Iter$594$131826->$class->itable;
                    while ($tmp1836->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1836 = $tmp1836->next;
                    }
                    $fn1838 $tmp1837 = $tmp1836->methods[0];
                    panda$core$Bit $tmp1839 = $tmp1837(Iter$594$131826);
                    panda$core$Bit $tmp1840 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1839);
                    bool $tmp1835 = $tmp1840.value;
                    if (!$tmp1835) goto $l1834;
                    {
                        int $tmp1843;
                        {
                            ITable* $tmp1847 = Iter$594$131826->$class->itable;
                            while ($tmp1847->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1847 = $tmp1847->next;
                            }
                            $fn1849 $tmp1848 = $tmp1847->methods[1];
                            panda$core$Object* $tmp1850 = $tmp1848(Iter$594$131826);
                            $tmp1846 = $tmp1850;
                            $tmp1845 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1846);
                            e1844 = $tmp1845;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1845));
                            panda$core$Panda$unref$panda$core$Object($tmp1846);
                            panda$core$Int64 $tmp1851 = panda$collections$Array$get_count$R$panda$core$Int64(e1844->fields);
                            panda$core$Bit $tmp1852 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1851, ((panda$core$Int64) { 0 }));
                            if ($tmp1852.value) {
                            {
                                haveFields1822 = ((panda$core$Bit) { true });
                                $tmp1843 = 0;
                                goto $l1841;
                                $l1853:;
                                goto $l1834;
                            }
                            }
                        }
                        $tmp1843 = -1;
                        goto $l1841;
                        $l1841:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1844));
                        e1844 = NULL;
                        switch ($tmp1843) {
                            case -1: goto $l1854;
                            case 0: goto $l1853;
                        }
                        $l1854:;
                    }
                    goto $l1833;
                    $l1834:;
                }
                $tmp1825 = -1;
                goto $l1823;
                $l1823:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$594$131826));
                Iter$594$131826 = NULL;
                switch ($tmp1825) {
                    case -1: goto $l1855;
                }
                $l1855:;
            }
            panda$core$Bit $tmp1856 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1822);
            if ($tmp1856.value) {
            {
                {
                    $tmp1857 = result1631->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp1860 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp1859 = $tmp1860;
                    $tmp1858 = $tmp1859;
                    result1631->rawSuper = $tmp1858;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1858));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1859));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1857));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp1864 = (($fn1863) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1862 = $tmp1864;
        panda$core$Object* $tmp1865 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1862)->currentClass);
        $tmp1861 = $tmp1865;
        panda$core$Panda$unref$panda$core$Object($tmp1861);
        panda$core$Panda$unref$panda$core$Object($tmp1862);
        $tmp1867 = result1631;
        $returnValue1866 = $tmp1867;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1867));
        $tmp1487 = 0;
        goto $l1485;
        $l1868:;
        return $returnValue1866;
    }
    $l1485:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1631));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1593));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1525));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1521));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1505));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1488));
    annotations1521 = NULL;
    parameters1525 = NULL;
    supertypes1593 = NULL;
    result1631 = NULL;
    switch ($tmp1487) {
        case 0: goto $l1868;
    }
    $l1870:;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$610$91874 = NULL;
    panda$collections$Iterator* $tmp1875;
    panda$collections$Iterator* $tmp1876;
    org$pandalanguage$pandac$ClassDecl* inner1892 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1893;
    panda$core$Object* $tmp1894;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp1873;
        {
            ITable* $tmp1877 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp1877->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1877 = $tmp1877->next;
            }
            $fn1879 $tmp1878 = $tmp1877->methods[0];
            panda$collections$Iterator* $tmp1880 = $tmp1878(((panda$collections$Iterable*) p_cl->classes));
            $tmp1876 = $tmp1880;
            $tmp1875 = $tmp1876;
            Iter$610$91874 = $tmp1875;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1875));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1876));
            $l1881:;
            ITable* $tmp1884 = Iter$610$91874->$class->itable;
            while ($tmp1884->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1884 = $tmp1884->next;
            }
            $fn1886 $tmp1885 = $tmp1884->methods[0];
            panda$core$Bit $tmp1887 = $tmp1885(Iter$610$91874);
            panda$core$Bit $tmp1888 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1887);
            bool $tmp1883 = $tmp1888.value;
            if (!$tmp1883) goto $l1882;
            {
                int $tmp1891;
                {
                    ITable* $tmp1895 = Iter$610$91874->$class->itable;
                    while ($tmp1895->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1895 = $tmp1895->next;
                    }
                    $fn1897 $tmp1896 = $tmp1895->methods[1];
                    panda$core$Object* $tmp1898 = $tmp1896(Iter$610$91874);
                    $tmp1894 = $tmp1898;
                    $tmp1893 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1894);
                    inner1892 = $tmp1893;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1893));
                    panda$core$Panda$unref$panda$core$Object($tmp1894);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1892, p_arr);
                }
                $tmp1891 = -1;
                goto $l1889;
                $l1889:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1892));
                inner1892 = NULL;
                switch ($tmp1891) {
                    case -1: goto $l1899;
                }
                $l1899:;
            }
            goto $l1881;
            $l1882:;
        }
        $tmp1873 = -1;
        goto $l1871;
        $l1871:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$610$91874));
        Iter$610$91874 = NULL;
        switch ($tmp1873) {
            case -1: goto $l1900;
        }
        $l1900:;
    }
}
void org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$collections$List* p_classes) {
    org$pandalanguage$pandac$ClassDecl* $tmp1904;
    org$pandalanguage$pandac$ClassDecl* $tmp1905;
    org$pandalanguage$pandac$ClassDecl* $tmp1906;
    org$pandalanguage$pandac$Position $tmp1908;
    org$pandalanguage$pandac$Annotations* $tmp1909;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp1911;
    panda$collections$Array* $tmp1913;
    panda$collections$Array* $tmp1915;
    panda$core$Object* $tmp1917;
    org$pandalanguage$pandac$MethodDecl* defaultInit1923 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1924;
    org$pandalanguage$pandac$MethodDecl* $tmp1925;
    org$pandalanguage$pandac$Position $tmp1927;
    org$pandalanguage$pandac$Annotations* $tmp1928;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1930;
    panda$collections$Array* $tmp1932;
    panda$collections$Array* $tmp1934;
    org$pandalanguage$pandac$Type* $tmp1936;
    panda$collections$ImmutableArray* $tmp1938;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1940 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1941;
    org$pandalanguage$pandac$MethodDecl* $tmp1942;
    org$pandalanguage$pandac$Position $tmp1944;
    org$pandalanguage$pandac$Annotations* $tmp1945;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1948;
    panda$collections$Array* $tmp1950;
    panda$collections$Array* $tmp1952;
    org$pandalanguage$pandac$Type* $tmp1954;
    panda$collections$ImmutableArray* $tmp1956;
    if (((panda$core$Bit) { self->bareCodeClass == NULL }).value) {
    {
        int $tmp1903;
        {
            {
                $tmp1904 = self->bareCodeClass;
                org$pandalanguage$pandac$ClassDecl* $tmp1907 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
                org$pandalanguage$pandac$Position$init(&$tmp1908);
                org$pandalanguage$pandac$Annotations* $tmp1910 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1910);
                $tmp1909 = $tmp1910;
                org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp1911, ((panda$core$Int64) { 0 }));
                panda$collections$Array* $tmp1914 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1914);
                $tmp1913 = $tmp1914;
                panda$collections$Array* $tmp1916 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1916);
                $tmp1915 = $tmp1916;
                panda$core$Object* $tmp1919 = (($fn1918) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1917 = $tmp1919;
                org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1907, p_source, $tmp1908, p_aliases, NULL, $tmp1909, $tmp1911, &$s1912, ((panda$collections$ListView*) $tmp1913), $tmp1915, ((org$pandalanguage$pandac$Compiler*) $tmp1917)->root);
                $tmp1906 = $tmp1907;
                $tmp1905 = $tmp1906;
                self->bareCodeClass = $tmp1905;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1905));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1906));
                panda$core$Panda$unref$panda$core$Object($tmp1917);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1915));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1913));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1909));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1904));
            }
            ITable* $tmp1920 = ((panda$collections$CollectionWriter*) p_classes)->$class->itable;
            while ($tmp1920->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
                $tmp1920 = $tmp1920->next;
            }
            $fn1922 $tmp1921 = $tmp1920->methods[0];
            $tmp1921(((panda$collections$CollectionWriter*) p_classes), ((panda$core$Object*) self->bareCodeClass));
            org$pandalanguage$pandac$MethodDecl* $tmp1926 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp1927);
            org$pandalanguage$pandac$Annotations* $tmp1929 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1929, ((panda$core$Int64) { 8192 }));
            $tmp1928 = $tmp1929;
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1930, ((panda$core$Int64) { 2 }));
            panda$collections$Array* $tmp1933 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp1933);
            $tmp1932 = $tmp1933;
            panda$collections$Array* $tmp1935 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp1935);
            $tmp1934 = $tmp1935;
            org$pandalanguage$pandac$Type* $tmp1937 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp1936 = $tmp1937;
            panda$collections$ImmutableArray* $tmp1939 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp1939);
            $tmp1938 = $tmp1939;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1926, self->bareCodeClass, $tmp1927, NULL, $tmp1928, $tmp1930, &$s1931, $tmp1932, $tmp1934, $tmp1936, $tmp1938);
            $tmp1925 = $tmp1926;
            $tmp1924 = $tmp1925;
            defaultInit1923 = $tmp1924;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1924));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1925));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1938));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1936));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1934));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1932));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1928));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultInit1923));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1923));
            org$pandalanguage$pandac$MethodDecl* $tmp1943 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp1944);
            org$pandalanguage$pandac$Annotations* $tmp1946 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64 $tmp1947 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 32 }), ((panda$core$Int64) { 8192 }));
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1946, $tmp1947);
            $tmp1945 = $tmp1946;
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1948, ((panda$core$Int64) { 0 }));
            panda$collections$Array* $tmp1951 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp1951);
            $tmp1950 = $tmp1951;
            panda$collections$Array* $tmp1953 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp1953);
            $tmp1952 = $tmp1953;
            org$pandalanguage$pandac$Type* $tmp1955 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp1954 = $tmp1955;
            panda$collections$ImmutableArray* $tmp1957 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp1957);
            $tmp1956 = $tmp1957;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1943, self->bareCodeClass, $tmp1944, NULL, $tmp1945, $tmp1948, &$s1949, $tmp1950, $tmp1952, $tmp1954, $tmp1956);
            $tmp1942 = $tmp1943;
            $tmp1941 = $tmp1942;
            defaultCleanup1940 = $tmp1941;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1941));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1942));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1956));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1954));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1952));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1950));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1945));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultCleanup1940));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1940));
        }
        $tmp1903 = -1;
        goto $l1901;
        $l1901:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1940));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1923));
        defaultInit1923 = NULL;
        defaultCleanup1940 = NULL;
        switch ($tmp1903) {
            case -1: goto $l1958;
        }
        $l1958:;
    }
    }
}
void org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp1959;
    PANDA_ASSERT(((panda$core$Bit) { self->source != NULL }).value);
    panda$core$Object* $tmp1961 = (($fn1960) self->compiler->$class->vtable[2])(self->compiler);
    $tmp1959 = $tmp1961;
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1959), self->source, p_position, p_msg);
    panda$core$Panda$unref$panda$core$Object($tmp1959);
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$io$File* $tmp1962;
    panda$io$File* $tmp1963;
    org$pandalanguage$pandac$ASTNode* $match$644_91967 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1968;
    panda$collections$ImmutableArray* entries1970 = NULL;
    panda$collections$Array* result1975 = NULL;
    panda$collections$Array* $tmp1976;
    panda$collections$Array* $tmp1977;
    panda$core$String* currentPackage1979 = NULL;
    panda$core$String* $tmp1980;
    panda$collections$HashMap* aliases1982 = NULL;
    panda$collections$HashMap* $tmp1983;
    panda$collections$HashMap* $tmp1984;
    panda$collections$Iterator* Iter$649$171989 = NULL;
    panda$collections$Iterator* $tmp1990;
    panda$collections$Iterator* $tmp1991;
    org$pandalanguage$pandac$ASTNode* e2007 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2008;
    panda$core$Object* $tmp2009;
    org$pandalanguage$pandac$ASTNode* $match$650_212017 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2018;
    panda$core$String* name2020 = NULL;
    panda$core$String* $tmp2022;
    panda$core$String* $tmp2023;
    panda$core$String* fullName2025 = NULL;
    panda$core$String$Index$nullable idx2030;
    panda$core$String* alias2033 = NULL;
    panda$core$String* $tmp2034;
    panda$core$String* $tmp2035;
    panda$core$String* $tmp2036;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2037;
    panda$core$String* $tmp2040;
    panda$core$String* $tmp2041;
    org$pandalanguage$pandac$Position position2044;
    org$pandalanguage$pandac$ASTNode* dc2046 = NULL;
    panda$collections$ImmutableArray* annotations2048 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind2050;
    panda$core$String* name2052 = NULL;
    panda$collections$ImmutableArray* generics2054 = NULL;
    panda$collections$ImmutableArray* supertypes2056 = NULL;
    panda$collections$ImmutableArray* members2058 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl2063 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2064;
    org$pandalanguage$pandac$ClassDecl* $tmp2065;
    org$pandalanguage$pandac$Position position2069;
    org$pandalanguage$pandac$ASTNode* dc2071 = NULL;
    panda$collections$ImmutableArray* annotations2073 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind2075;
    panda$core$String* rawName2077 = NULL;
    panda$collections$ImmutableArray* generics2079 = NULL;
    panda$collections$ImmutableArray* parameters2081 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType2083 = NULL;
    panda$collections$ImmutableArray* statements2085 = NULL;
    panda$core$String* name2090 = NULL;
    panda$core$String* $tmp2096;
    panda$core$String* $tmp2097;
    panda$collections$Array* mainParameters2099 = NULL;
    panda$collections$Array* $tmp2100;
    panda$collections$Array* $tmp2101;
    panda$collections$Array* mainStatements2103 = NULL;
    panda$collections$Array* $tmp2104;
    panda$collections$Array* $tmp2105;
    panda$collections$Array* mainArguments2107 = NULL;
    panda$collections$Array* $tmp2108;
    panda$collections$Array* $tmp2109;
    panda$collections$Iterator* Iter$679$332114 = NULL;
    panda$collections$Iterator* $tmp2115;
    panda$collections$Iterator* $tmp2116;
    org$pandalanguage$pandac$ASTNode* p2132 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2133;
    panda$core$Object* $tmp2134;
    org$pandalanguage$pandac$ASTNode* $match$680_372142 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2143;
    org$pandalanguage$pandac$Position position2145;
    panda$core$String* name2147 = NULL;
    org$pandalanguage$pandac$ASTNode* type2149 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2151;
    org$pandalanguage$pandac$Type* $tmp2153;
    org$pandalanguage$pandac$ASTNode* $tmp2155;
    org$pandalanguage$pandac$ASTNode* bareConstruct2160 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2161;
    org$pandalanguage$pandac$ASTNode* $tmp2162;
    org$pandalanguage$pandac$ASTNode* $tmp2164;
    panda$collections$ImmutableArray* $tmp2167;
    org$pandalanguage$pandac$ASTNode* $tmp2169;
    org$pandalanguage$pandac$ASTNode* $tmp2171;
    panda$collections$ImmutableArray* $tmp2173;
    org$pandalanguage$pandac$Type* returnType2175 = NULL;
    org$pandalanguage$pandac$Type* $tmp2176;
    org$pandalanguage$pandac$Type* $tmp2177;
    org$pandalanguage$pandac$Type* $tmp2178;
    org$pandalanguage$pandac$Type* $tmp2180;
    org$pandalanguage$pandac$Type* $tmp2181;
    org$pandalanguage$pandac$Type* $tmp2182;
    org$pandalanguage$pandac$MethodDecl* bareMain2184 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2185;
    org$pandalanguage$pandac$MethodDecl* $tmp2186;
    org$pandalanguage$pandac$Position $tmp2188;
    org$pandalanguage$pandac$Annotations* $tmp2189;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2191;
    panda$collections$Array* $tmp2193;
    panda$collections$ImmutableArray* $tmp2195;
    panda$core$String* $tmp2198;
    panda$core$String* $tmp2199;
    panda$core$Object* $tmp2200;
    org$pandalanguage$pandac$MethodDecl* m2203 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2204;
    org$pandalanguage$pandac$MethodDecl* $tmp2205;
    panda$core$Object* $tmp2211;
    org$pandalanguage$pandac$Position position2216;
    org$pandalanguage$pandac$ASTNode* dc2218 = NULL;
    panda$collections$ImmutableArray* annotations2220 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl2222 = NULL;
    panda$core$Int64 old2224;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2226;
    org$pandalanguage$pandac$FieldDecl* f2244 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp2245;
    panda$core$Object* $tmp2246;
    panda$io$File* $tmp2264;
    panda$io$File* $tmp2265;
    panda$collections$ListView* $returnValue2266;
    panda$collections$ListView* $tmp2267;
    {
        $tmp1962 = self->source;
        $tmp1963 = p_source;
        self->source = $tmp1963;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1963));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1962));
    }
    int $tmp1966;
    {
        $tmp1968 = p_file;
        $match$644_91967 = $tmp1968;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1968));
        panda$core$Bit $tmp1969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$644_91967->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1969.value) {
        {
            panda$collections$ImmutableArray** $tmp1971 = ((panda$collections$ImmutableArray**) ((char*) $match$644_91967->$data + 0));
            entries1970 = *$tmp1971;
            int $tmp1974;
            {
                panda$collections$Array* $tmp1978 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1978);
                $tmp1977 = $tmp1978;
                $tmp1976 = $tmp1977;
                result1975 = $tmp1976;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1976));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1977));
                $tmp1980 = &$s1981;
                currentPackage1979 = $tmp1980;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1980));
                panda$collections$HashMap* $tmp1985 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp1985);
                $tmp1984 = $tmp1985;
                $tmp1983 = $tmp1984;
                aliases1982 = $tmp1983;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1983));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1984));
                {
                    int $tmp1988;
                    {
                        ITable* $tmp1992 = ((panda$collections$Iterable*) entries1970)->$class->itable;
                        while ($tmp1992->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1992 = $tmp1992->next;
                        }
                        $fn1994 $tmp1993 = $tmp1992->methods[0];
                        panda$collections$Iterator* $tmp1995 = $tmp1993(((panda$collections$Iterable*) entries1970));
                        $tmp1991 = $tmp1995;
                        $tmp1990 = $tmp1991;
                        Iter$649$171989 = $tmp1990;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1990));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1991));
                        $l1996:;
                        ITable* $tmp1999 = Iter$649$171989->$class->itable;
                        while ($tmp1999->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1999 = $tmp1999->next;
                        }
                        $fn2001 $tmp2000 = $tmp1999->methods[0];
                        panda$core$Bit $tmp2002 = $tmp2000(Iter$649$171989);
                        panda$core$Bit $tmp2003 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2002);
                        bool $tmp1998 = $tmp2003.value;
                        if (!$tmp1998) goto $l1997;
                        {
                            int $tmp2006;
                            {
                                ITable* $tmp2010 = Iter$649$171989->$class->itable;
                                while ($tmp2010->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2010 = $tmp2010->next;
                                }
                                $fn2012 $tmp2011 = $tmp2010->methods[1];
                                panda$core$Object* $tmp2013 = $tmp2011(Iter$649$171989);
                                $tmp2009 = $tmp2013;
                                $tmp2008 = ((org$pandalanguage$pandac$ASTNode*) $tmp2009);
                                e2007 = $tmp2008;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2008));
                                panda$core$Panda$unref$panda$core$Object($tmp2009);
                                int $tmp2016;
                                {
                                    $tmp2018 = e2007;
                                    $match$650_212017 = $tmp2018;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2018));
                                    panda$core$Bit $tmp2019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$650_212017->$rawValue, ((panda$core$Int64) { 30 }));
                                    if ($tmp2019.value) {
                                    {
                                        panda$core$String** $tmp2021 = ((panda$core$String**) ((char*) $match$650_212017->$data + 16));
                                        name2020 = *$tmp2021;
                                        {
                                            $tmp2022 = currentPackage1979;
                                            $tmp2023 = name2020;
                                            currentPackage1979 = $tmp2023;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2023));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2022));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp2024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$650_212017->$rawValue, ((panda$core$Int64) { 46 }));
                                    if ($tmp2024.value) {
                                    {
                                        panda$core$String** $tmp2026 = ((panda$core$String**) ((char*) $match$650_212017->$data + 16));
                                        fullName2025 = *$tmp2026;
                                        int $tmp2029;
                                        {
                                            panda$core$String$Index$nullable $tmp2032 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName2025, &$s2031);
                                            idx2030 = $tmp2032;
                                            memset(&alias2033, 0, sizeof(alias2033));
                                            if (((panda$core$Bit) { idx2030.nonnull }).value) {
                                            {
                                                {
                                                    $tmp2034 = alias2033;
                                                    panda$core$String$Index $tmp2038 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName2025, ((panda$core$String$Index) idx2030.value));
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp2037, ((panda$core$String$Index$nullable) { $tmp2038, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                                    panda$core$String* $tmp2039 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName2025, $tmp2037);
                                                    $tmp2036 = $tmp2039;
                                                    $tmp2035 = $tmp2036;
                                                    alias2033 = $tmp2035;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2035));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2036));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2034));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2040 = alias2033;
                                                    $tmp2041 = fullName2025;
                                                    alias2033 = $tmp2041;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2041));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2040));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1982, ((panda$collections$Key*) alias2033), ((panda$core$Object*) fullName2025));
                                        }
                                        $tmp2029 = -1;
                                        goto $l2027;
                                        $l2027:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias2033));
                                        switch ($tmp2029) {
                                            case -1: goto $l2042;
                                        }
                                        $l2042:;
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp2043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$650_212017->$rawValue, ((panda$core$Int64) { 11 }));
                                    if ($tmp2043.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2045 = ((org$pandalanguage$pandac$Position*) ((char*) $match$650_212017->$data + 0));
                                        position2044 = *$tmp2045;
                                        org$pandalanguage$pandac$ASTNode** $tmp2047 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$650_212017->$data + 16));
                                        dc2046 = *$tmp2047;
                                        panda$collections$ImmutableArray** $tmp2049 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212017->$data + 24));
                                        annotations2048 = *$tmp2049;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp2051 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$650_212017->$data + 32));
                                        kind2050 = *$tmp2051;
                                        panda$core$String** $tmp2053 = ((panda$core$String**) ((char*) $match$650_212017->$data + 40));
                                        name2052 = *$tmp2053;
                                        panda$collections$ImmutableArray** $tmp2055 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212017->$data + 48));
                                        generics2054 = *$tmp2055;
                                        panda$collections$ImmutableArray** $tmp2057 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212017->$data + 56));
                                        supertypes2056 = *$tmp2057;
                                        panda$collections$ImmutableArray** $tmp2059 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212017->$data + 64));
                                        members2058 = *$tmp2059;
                                        int $tmp2062;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp2066 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1982), currentPackage1979, position2044, dc2046, annotations2048, kind2050, name2052, generics2054, supertypes2056, members2058);
                                            $tmp2065 = $tmp2066;
                                            $tmp2064 = $tmp2065;
                                            cl2063 = $tmp2064;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2064));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2065));
                                            if (((panda$core$Bit) { cl2063 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl2063, result1975);
                                            }
                                            }
                                        }
                                        $tmp2062 = -1;
                                        goto $l2060;
                                        $l2060:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2063));
                                        cl2063 = NULL;
                                        switch ($tmp2062) {
                                            case -1: goto $l2067;
                                        }
                                        $l2067:;
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp2068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$650_212017->$rawValue, ((panda$core$Int64) { 26 }));
                                    if ($tmp2068.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2070 = ((org$pandalanguage$pandac$Position*) ((char*) $match$650_212017->$data + 0));
                                        position2069 = *$tmp2070;
                                        org$pandalanguage$pandac$ASTNode** $tmp2072 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$650_212017->$data + 16));
                                        dc2071 = *$tmp2072;
                                        panda$collections$ImmutableArray** $tmp2074 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212017->$data + 24));
                                        annotations2073 = *$tmp2074;
                                        org$pandalanguage$pandac$MethodDecl$Kind* $tmp2076 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$650_212017->$data + 32));
                                        kind2075 = *$tmp2076;
                                        panda$core$String** $tmp2078 = ((panda$core$String**) ((char*) $match$650_212017->$data + 40));
                                        rawName2077 = *$tmp2078;
                                        panda$collections$ImmutableArray** $tmp2080 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212017->$data + 48));
                                        generics2079 = *$tmp2080;
                                        panda$collections$ImmutableArray** $tmp2082 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212017->$data + 56));
                                        parameters2081 = *$tmp2082;
                                        org$pandalanguage$pandac$ASTNode** $tmp2084 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$650_212017->$data + 64));
                                        rawReturnType2083 = *$tmp2084;
                                        panda$collections$ImmutableArray** $tmp2086 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212017->$data + 72));
                                        statements2085 = *$tmp2086;
                                        int $tmp2089;
                                        {
                                            org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases1982), ((panda$collections$List*) result1975));
                                            memset(&name2090, 0, sizeof(name2090));
                                            panda$core$Bit $tmp2092 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(rawName2077, &$s2091);
                                            if ($tmp2092.value) {
                                            {
                                                int $tmp2095;
                                                {
                                                    {
                                                        $tmp2096 = name2090;
                                                        $tmp2097 = &$s2098;
                                                        name2090 = $tmp2097;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2097));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2096));
                                                    }
                                                    panda$collections$Array* $tmp2102 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2102);
                                                    $tmp2101 = $tmp2102;
                                                    $tmp2100 = $tmp2101;
                                                    mainParameters2099 = $tmp2100;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2100));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2101));
                                                    panda$collections$Array* $tmp2106 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2106);
                                                    $tmp2105 = $tmp2106;
                                                    $tmp2104 = $tmp2105;
                                                    mainStatements2103 = $tmp2104;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2104));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2105));
                                                    panda$collections$Array* $tmp2110 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2110);
                                                    $tmp2109 = $tmp2110;
                                                    $tmp2108 = $tmp2109;
                                                    mainArguments2107 = $tmp2108;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2108));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2109));
                                                    {
                                                        int $tmp2113;
                                                        {
                                                            ITable* $tmp2117 = ((panda$collections$Iterable*) parameters2081)->$class->itable;
                                                            while ($tmp2117->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                                                $tmp2117 = $tmp2117->next;
                                                            }
                                                            $fn2119 $tmp2118 = $tmp2117->methods[0];
                                                            panda$collections$Iterator* $tmp2120 = $tmp2118(((panda$collections$Iterable*) parameters2081));
                                                            $tmp2116 = $tmp2120;
                                                            $tmp2115 = $tmp2116;
                                                            Iter$679$332114 = $tmp2115;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2115));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2116));
                                                            $l2121:;
                                                            ITable* $tmp2124 = Iter$679$332114->$class->itable;
                                                            while ($tmp2124->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                $tmp2124 = $tmp2124->next;
                                                            }
                                                            $fn2126 $tmp2125 = $tmp2124->methods[0];
                                                            panda$core$Bit $tmp2127 = $tmp2125(Iter$679$332114);
                                                            panda$core$Bit $tmp2128 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2127);
                                                            bool $tmp2123 = $tmp2128.value;
                                                            if (!$tmp2123) goto $l2122;
                                                            {
                                                                int $tmp2131;
                                                                {
                                                                    ITable* $tmp2135 = Iter$679$332114->$class->itable;
                                                                    while ($tmp2135->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                        $tmp2135 = $tmp2135->next;
                                                                    }
                                                                    $fn2137 $tmp2136 = $tmp2135->methods[1];
                                                                    panda$core$Object* $tmp2138 = $tmp2136(Iter$679$332114);
                                                                    $tmp2134 = $tmp2138;
                                                                    $tmp2133 = ((org$pandalanguage$pandac$ASTNode*) $tmp2134);
                                                                    p2132 = $tmp2133;
                                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2133));
                                                                    panda$core$Panda$unref$panda$core$Object($tmp2134);
                                                                    int $tmp2141;
                                                                    {
                                                                        $tmp2143 = p2132;
                                                                        $match$680_372142 = $tmp2143;
                                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2143));
                                                                        panda$core$Bit $tmp2144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$680_372142->$rawValue, ((panda$core$Int64) { 31 }));
                                                                        if ($tmp2144.value) {
                                                                        {
                                                                            org$pandalanguage$pandac$Position* $tmp2146 = ((org$pandalanguage$pandac$Position*) ((char*) $match$680_372142->$data + 0));
                                                                            position2145 = *$tmp2146;
                                                                            panda$core$String** $tmp2148 = ((panda$core$String**) ((char*) $match$680_372142->$data + 16));
                                                                            name2147 = *$tmp2148;
                                                                            org$pandalanguage$pandac$ASTNode** $tmp2150 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$680_372142->$data + 24));
                                                                            type2149 = *$tmp2150;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2152 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                                                            org$pandalanguage$pandac$Type* $tmp2154 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type2149);
                                                                            $tmp2153 = $tmp2154;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp2152, name2147, $tmp2153);
                                                                            $tmp2151 = $tmp2152;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainParameters2099, ((panda$core$Object*) $tmp2151));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2151));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2153));
                                                                            org$pandalanguage$pandac$ASTNode* $tmp2156 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2156, ((panda$core$Int64) { 20 }), position2145, name2147);
                                                                            $tmp2155 = $tmp2156;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainArguments2107, ((panda$core$Object*) $tmp2155));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2155));
                                                                        }
                                                                        }
                                                                        else {
                                                                        {
                                                                            PANDA_ASSERT(((panda$core$Bit) { false }).value);
                                                                        }
                                                                        }
                                                                    }
                                                                    $tmp2141 = -1;
                                                                    goto $l2139;
                                                                    $l2139:;
                                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2143));
                                                                    switch ($tmp2141) {
                                                                        case -1: goto $l2157;
                                                                    }
                                                                    $l2157:;
                                                                }
                                                                $tmp2131 = -1;
                                                                goto $l2129;
                                                                $l2129:;
                                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p2132));
                                                                p2132 = NULL;
                                                                switch ($tmp2131) {
                                                                    case -1: goto $l2158;
                                                                }
                                                                $l2158:;
                                                            }
                                                            goto $l2121;
                                                            $l2122:;
                                                        }
                                                        $tmp2113 = -1;
                                                        goto $l2111;
                                                        $l2111:;
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$679$332114));
                                                        Iter$679$332114 = NULL;
                                                        switch ($tmp2113) {
                                                            case -1: goto $l2159;
                                                        }
                                                        $l2159:;
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp2163 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2165 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2165, ((panda$core$Int64) { 20 }), position2069, &$s2166);
                                                    $tmp2164 = $tmp2165;
                                                    panda$collections$ImmutableArray* $tmp2168 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                                                    panda$collections$ImmutableArray$init($tmp2168);
                                                    $tmp2167 = $tmp2168;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2163, ((panda$core$Int64) { 8 }), position2069, $tmp2164, $tmp2167);
                                                    $tmp2162 = $tmp2163;
                                                    $tmp2161 = $tmp2162;
                                                    bareConstruct2160 = $tmp2161;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2161));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2162));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2167));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2164));
                                                    org$pandalanguage$pandac$ASTNode* $tmp2170 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2172 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2172, ((panda$core$Int64) { 15 }), position2069, bareConstruct2160, name2090);
                                                    $tmp2171 = $tmp2172;
                                                    panda$collections$ImmutableArray* $tmp2174 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainArguments2107);
                                                    $tmp2173 = $tmp2174;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2170, ((panda$core$Int64) { 8 }), position2069, $tmp2171, $tmp2173);
                                                    $tmp2169 = $tmp2170;
                                                    panda$collections$Array$add$panda$collections$Array$T(mainStatements2103, ((panda$core$Object*) $tmp2169));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2169));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2173));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2171));
                                                    memset(&returnType2175, 0, sizeof(returnType2175));
                                                    if (((panda$core$Bit) { rawReturnType2083 != NULL }).value) {
                                                    {
                                                        {
                                                            $tmp2176 = returnType2175;
                                                            org$pandalanguage$pandac$Type* $tmp2179 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, rawReturnType2083);
                                                            $tmp2178 = $tmp2179;
                                                            $tmp2177 = $tmp2178;
                                                            returnType2175 = $tmp2177;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2177));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2178));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2176));
                                                        }
                                                    }
                                                    }
                                                    else {
                                                    {
                                                        {
                                                            $tmp2180 = returnType2175;
                                                            org$pandalanguage$pandac$Type* $tmp2183 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                            $tmp2182 = $tmp2183;
                                                            $tmp2181 = $tmp2182;
                                                            returnType2175 = $tmp2181;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2181));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2182));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2180));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$MethodDecl* $tmp2187 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                                                    org$pandalanguage$pandac$Position$init(&$tmp2188);
                                                    org$pandalanguage$pandac$Annotations* $tmp2190 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                                                    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2190, ((panda$core$Int64) { 16 }));
                                                    $tmp2189 = $tmp2190;
                                                    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2191, ((panda$core$Int64) { 0 }));
                                                    panda$collections$Array* $tmp2194 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2194);
                                                    $tmp2193 = $tmp2194;
                                                    panda$collections$ImmutableArray* $tmp2196 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainStatements2103);
                                                    $tmp2195 = $tmp2196;
                                                    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2187, self->bareCodeClass, $tmp2188, NULL, $tmp2189, $tmp2191, &$s2192, $tmp2193, mainParameters2099, returnType2175, $tmp2195);
                                                    $tmp2186 = $tmp2187;
                                                    $tmp2185 = $tmp2186;
                                                    bareMain2184 = $tmp2185;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2185));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2186));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2195));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2193));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2189));
                                                    panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) bareMain2184));
                                                }
                                                $tmp2095 = -1;
                                                goto $l2093;
                                                $l2093:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareMain2184));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType2175));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareConstruct2160));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainArguments2107));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainStatements2103));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainParameters2099));
                                                mainParameters2099 = NULL;
                                                mainStatements2103 = NULL;
                                                mainArguments2107 = NULL;
                                                bareConstruct2160 = NULL;
                                                bareMain2184 = NULL;
                                                switch ($tmp2095) {
                                                    case -1: goto $l2197;
                                                }
                                                $l2197:;
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2198 = name2090;
                                                    $tmp2199 = rawName2077;
                                                    name2090 = $tmp2199;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2199));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2198));
                                                }
                                            }
                                            }
                                            panda$core$Object* $tmp2202 = (($fn2201) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp2200 = $tmp2202;
                                            panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2200)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2200);
                                            org$pandalanguage$pandac$MethodDecl* $tmp2206 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, self->bareCodeClass, position2069, dc2071, annotations2073, kind2075, name2090, generics2079, parameters2081, rawReturnType2083, statements2085);
                                            $tmp2205 = $tmp2206;
                                            $tmp2204 = $tmp2205;
                                            m2203 = $tmp2204;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2204));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2205));
                                            panda$core$Bit $tmp2207 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2203->annotations);
                                            if ($tmp2207.value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) m2203)->position, &$s2208);
                                                panda$core$Int64 $tmp2209 = panda$core$Int64$$BNOT$R$panda$core$Int64(((panda$core$Int64) { 16 }));
                                                panda$core$Int64 $tmp2210 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(m2203->annotations->flags, $tmp2209);
                                                m2203->annotations->flags = $tmp2210;
                                            }
                                            }
                                            panda$core$Object* $tmp2213 = (($fn2212) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp2211 = $tmp2213;
                                            panda$collections$Stack$pop$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2211)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2211);
                                            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) m2203));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) m2203));
                                        }
                                        $tmp2089 = -1;
                                        goto $l2087;
                                        $l2087:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2203));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2090));
                                        m2203 = NULL;
                                        switch ($tmp2089) {
                                            case -1: goto $l2214;
                                        }
                                        $l2214:;
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp2215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$650_212017->$rawValue, ((panda$core$Int64) { 16 }));
                                    if ($tmp2215.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2217 = ((org$pandalanguage$pandac$Position*) ((char*) $match$650_212017->$data + 0));
                                        position2216 = *$tmp2217;
                                        org$pandalanguage$pandac$ASTNode** $tmp2219 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$650_212017->$data + 16));
                                        dc2218 = *$tmp2219;
                                        panda$collections$ImmutableArray** $tmp2221 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212017->$data + 24));
                                        annotations2220 = *$tmp2221;
                                        org$pandalanguage$pandac$ASTNode** $tmp2223 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$650_212017->$data + 32));
                                        varDecl2222 = *$tmp2223;
                                        org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases1982), ((panda$collections$List*) result1975));
                                        panda$core$Int64 $tmp2225 = panda$collections$Array$get_count$R$panda$core$Int64(self->bareCodeClass->fields);
                                        old2224 = $tmp2225;
                                        org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, self->bareCodeClass, position2216, dc2218, annotations2220, varDecl2222);
                                        panda$core$Int64 $tmp2227 = panda$collections$Array$get_count$R$panda$core$Int64(self->bareCodeClass->fields);
                                        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2226, old2224, $tmp2227, ((panda$core$Bit) { false }));
                                        int64_t $tmp2229 = $tmp2226.min.value;
                                        panda$core$Int64 i2228 = { $tmp2229 };
                                        int64_t $tmp2231 = $tmp2226.max.value;
                                        bool $tmp2232 = $tmp2226.inclusive.value;
                                        if ($tmp2232) goto $l2239; else goto $l2240;
                                        $l2239:;
                                        if ($tmp2229 <= $tmp2231) goto $l2233; else goto $l2235;
                                        $l2240:;
                                        if ($tmp2229 < $tmp2231) goto $l2233; else goto $l2235;
                                        $l2233:;
                                        {
                                            int $tmp2243;
                                            {
                                                panda$core$Object* $tmp2247 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->bareCodeClass->fields, i2228);
                                                $tmp2246 = $tmp2247;
                                                $tmp2245 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2246);
                                                f2244 = $tmp2245;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2245));
                                                panda$core$Panda$unref$panda$core$Object($tmp2246);
                                                panda$core$Bit $tmp2249 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(f2244->fieldKind.$rawValue, ((panda$core$Int64) { 2 }));
                                                bool $tmp2248 = $tmp2249.value;
                                                if (!$tmp2248) goto $l2250;
                                                panda$core$Bit $tmp2251 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f2244->annotations);
                                                $tmp2248 = $tmp2251.value;
                                                $l2250:;
                                                panda$core$Bit $tmp2252 = { $tmp2248 };
                                                if ($tmp2252.value) {
                                                {
                                                    org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) f2244)->position, &$s2253);
                                                }
                                                }
                                            }
                                            $tmp2243 = -1;
                                            goto $l2241;
                                            $l2241:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f2244));
                                            f2244 = NULL;
                                            switch ($tmp2243) {
                                                case -1: goto $l2254;
                                            }
                                            $l2254:;
                                        }
                                        $l2236:;
                                        int64_t $tmp2256 = $tmp2231 - i2228.value;
                                        if ($tmp2232) goto $l2257; else goto $l2258;
                                        $l2257:;
                                        if ((uint64_t) $tmp2256 >= 1) goto $l2255; else goto $l2235;
                                        $l2258:;
                                        if ((uint64_t) $tmp2256 > 1) goto $l2255; else goto $l2235;
                                        $l2255:;
                                        i2228.value += 1;
                                        goto $l2233;
                                        $l2235:;
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
                                $tmp2016 = -1;
                                goto $l2014;
                                $l2014:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2018));
                                switch ($tmp2016) {
                                    case -1: goto $l2261;
                                }
                                $l2261:;
                            }
                            $tmp2006 = -1;
                            goto $l2004;
                            $l2004:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2007));
                            e2007 = NULL;
                            switch ($tmp2006) {
                                case -1: goto $l2262;
                            }
                            $l2262:;
                        }
                        goto $l1996;
                        $l1997:;
                    }
                    $tmp1988 = -1;
                    goto $l1986;
                    $l1986:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$649$171989));
                    Iter$649$171989 = NULL;
                    switch ($tmp1988) {
                        case -1: goto $l2263;
                    }
                    $l2263:;
                }
                {
                    $tmp2264 = self->source;
                    $tmp2265 = NULL;
                    self->source = $tmp2265;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2265));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2264));
                }
                $tmp2267 = ((panda$collections$ListView*) result1975);
                $returnValue2266 = $tmp2267;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2267));
                $tmp1974 = 0;
                goto $l1972;
                $l2268:;
                $tmp1966 = 0;
                goto $l1964;
                $l2269:;
                return $returnValue2266;
            }
            $l1972:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases1982));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1979));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1975));
            result1975 = NULL;
            currentPackage1979 = NULL;
            aliases1982 = NULL;
            switch ($tmp1974) {
                case 0: goto $l2268;
            }
            $l2271:;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp1966 = -1;
    goto $l1964;
    $l1964:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1968));
    switch ($tmp1966) {
        case -1: goto $l2272;
        case 0: goto $l2269;
    }
    $l2272:;
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp2275;
    {
    }
    $tmp2275 = -1;
    goto $l2273;
    $l2273:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2275) {
        case -1: goto $l2276;
    }
    $l2276:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->bareCodeClass));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
}

