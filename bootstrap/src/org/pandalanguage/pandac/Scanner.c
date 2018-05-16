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
typedef panda$collections$Iterator* (*$fn120)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn127)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn138)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn204)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn274)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn281)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn292)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn387)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn394)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn405)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn433)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn440)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn451)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn496)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn503)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn514)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn545)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn552)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn563)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn597)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn604)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn615)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn642)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn649)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn660)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn686)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn693)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn704)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn718)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn725)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn736)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn807)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn814)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn825)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn848)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn855)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn866)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn880)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn887)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn898)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn922)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn929)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn940)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn953)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn972)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn979)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn990)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1051)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1058)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1069)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1105)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1121)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1262)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1269)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1280)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1344)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1351)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1362)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1394)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn1400)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1409)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1420)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1427)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1438)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1449)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1452)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1487)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1494)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1505)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1522)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1527)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1543)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1550)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1561)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1573)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1649)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1656)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1667)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1681)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1697)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1704)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1715)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1749)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1756)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1767)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x6f\x6e\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x27", 30, -1250916154819313721, NULL };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x68\x61\x76\x65\x20\x61\x20\x62\x6f\x64\x79", 16, -7652461387112275530, NULL };
static panda$core$String $s1204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s1585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s1786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

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
    panda$core$Int64 flags111;
    panda$collections$Iterator* Iter$39$9115 = NULL;
    panda$collections$Iterator* $tmp116;
    panda$collections$Iterator* $tmp117;
    org$pandalanguage$pandac$ASTNode* c133 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp134;
    panda$core$Object* $tmp135;
    org$pandalanguage$pandac$ASTNode* $match$40_13143 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp144;
    org$pandalanguage$pandac$Position position146;
    panda$core$String* text148 = NULL;
    panda$core$String* $match$42_21153 = NULL;
    panda$core$String* $tmp154;
    panda$core$Object* $tmp203;
    panda$core$String* $tmp206;
    panda$core$String* $tmp207;
    org$pandalanguage$pandac$Annotations* $finallyReturn215;
    org$pandalanguage$pandac$Annotations* $tmp217;
    org$pandalanguage$pandac$Annotations* $tmp218;
    flags111 = ((panda$core$Int64) { 0 });
    {
        int $tmp114;
        {
            ITable* $tmp118 = ((panda$collections$Iterable*) p_a)->$class->itable;
            while ($tmp118->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp118 = $tmp118->next;
            }
            $fn120 $tmp119 = $tmp118->methods[0];
            panda$collections$Iterator* $tmp121 = $tmp119(((panda$collections$Iterable*) p_a));
            $tmp117 = $tmp121;
            $tmp116 = $tmp117;
            Iter$39$9115 = $tmp116;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp116));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp117));
            $l122:;
            ITable* $tmp125 = Iter$39$9115->$class->itable;
            while ($tmp125->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp125 = $tmp125->next;
            }
            $fn127 $tmp126 = $tmp125->methods[0];
            panda$core$Bit $tmp128 = $tmp126(Iter$39$9115);
            panda$core$Bit $tmp129 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp128);
            bool $tmp124 = $tmp129.value;
            if (!$tmp124) goto $l123;
            {
                int $tmp132;
                {
                    ITable* $tmp136 = Iter$39$9115->$class->itable;
                    while ($tmp136->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp136 = $tmp136->next;
                    }
                    $fn138 $tmp137 = $tmp136->methods[1];
                    panda$core$Object* $tmp139 = $tmp137(Iter$39$9115);
                    $tmp135 = $tmp139;
                    $tmp134 = ((org$pandalanguage$pandac$ASTNode*) $tmp135);
                    c133 = $tmp134;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp134));
                    panda$core$Panda$unref$panda$core$Object($tmp135);
                    int $tmp142;
                    {
                        $tmp144 = c133;
                        $match$40_13143 = $tmp144;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp144));
                        panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$40_13143->$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp145.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp147 = ((org$pandalanguage$pandac$Position*) ((char*) $match$40_13143->$data + 0));
                            position146 = *$tmp147;
                            panda$core$String** $tmp149 = ((panda$core$String**) ((char*) $match$40_13143->$data + 16));
                            text148 = *$tmp149;
                            int $tmp152;
                            {
                                $tmp154 = text148;
                                $match$42_21153 = $tmp154;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
                                panda$core$Bit $tmp156 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21153, &$s155);
                                if ($tmp156.value) {
                                {
                                    panda$core$Int64 $tmp157 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                                    panda$core$Int64 $tmp158 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags111, $tmp157);
                                    flags111 = $tmp158;
                                }
                                }
                                else {
                                panda$core$Bit $tmp160 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21153, &$s159);
                                if ($tmp160.value) {
                                {
                                    panda$core$Int64 $tmp161 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                                    panda$core$Int64 $tmp162 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags111, $tmp161);
                                    flags111 = $tmp162;
                                }
                                }
                                else {
                                panda$core$Bit $tmp164 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21153, &$s163);
                                if ($tmp164.value) {
                                {
                                    panda$core$Int64 $tmp165 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                                    panda$core$Int64 $tmp166 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags111, $tmp165);
                                    flags111 = $tmp166;
                                }
                                }
                                else {
                                panda$core$Bit $tmp168 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21153, &$s167);
                                if ($tmp168.value) {
                                {
                                    panda$core$Int64 $tmp169 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                                    panda$core$Int64 $tmp170 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags111, $tmp169);
                                    flags111 = $tmp170;
                                }
                                }
                                else {
                                panda$core$Bit $tmp172 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21153, &$s171);
                                if ($tmp172.value) {
                                {
                                    panda$core$Int64 $tmp173 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                                    panda$core$Int64 $tmp174 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags111, $tmp173);
                                    flags111 = $tmp174;
                                }
                                }
                                else {
                                panda$core$Bit $tmp176 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21153, &$s175);
                                if ($tmp176.value) {
                                {
                                    panda$core$Int64 $tmp177 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                                    panda$core$Int64 $tmp178 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags111, $tmp177);
                                    flags111 = $tmp178;
                                }
                                }
                                else {
                                panda$core$Bit $tmp180 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21153, &$s179);
                                if ($tmp180.value) {
                                {
                                    panda$core$Int64 $tmp181 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                                    panda$core$Int64 $tmp182 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags111, $tmp181);
                                    flags111 = $tmp182;
                                }
                                }
                                else {
                                panda$core$Bit $tmp184 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21153, &$s183);
                                if ($tmp184.value) {
                                {
                                    panda$core$Int64 $tmp185 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                                    panda$core$Int64 $tmp186 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags111, $tmp185);
                                    flags111 = $tmp186;
                                }
                                }
                                else {
                                panda$core$Bit $tmp188 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21153, &$s187);
                                if ($tmp188.value) {
                                {
                                    panda$core$Int64 $tmp189 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                                    panda$core$Int64 $tmp190 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags111, $tmp189);
                                    flags111 = $tmp190;
                                }
                                }
                                else {
                                panda$core$Bit $tmp192 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21153, &$s191);
                                if ($tmp192.value) {
                                {
                                    panda$core$Int64 $tmp193 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                                    panda$core$Int64 $tmp194 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags111, $tmp193);
                                    flags111 = $tmp194;
                                }
                                }
                                else {
                                panda$core$Bit $tmp196 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21153, &$s195);
                                if ($tmp196.value) {
                                {
                                    panda$core$Int64 $tmp197 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                                    panda$core$Int64 $tmp198 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags111, $tmp197);
                                    flags111 = $tmp198;
                                }
                                }
                                else {
                                panda$core$Bit $tmp200 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21153, &$s199);
                                if ($tmp200.value) {
                                {
                                    panda$core$Int64 $tmp201 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 12 }));
                                    panda$core$Int64 $tmp202 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags111, $tmp201);
                                    flags111 = $tmp202;
                                }
                                }
                                else {
                                {
                                    panda$core$Object* $tmp205 = (($fn204) self->compiler->$class->vtable[2])(self->compiler);
                                    $tmp203 = $tmp205;
                                    panda$core$String* $tmp209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s208, text148);
                                    $tmp207 = $tmp209;
                                    panda$core$String* $tmp211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp207, &$s210);
                                    $tmp206 = $tmp211;
                                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp203), position146, $tmp206);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
                                    panda$core$Panda$unref$panda$core$Object($tmp203);
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            $tmp152 = -1;
                            goto $l150;
                            $l150:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
                            switch ($tmp152) {
                                case -1: goto $l212;
                            }
                            $l212:;
                        }
                        }
                        else {
                        {
                            PANDA_ASSERT(((panda$core$Bit) { false }).value);
                        }
                        }
                    }
                    $tmp142 = -1;
                    goto $l140;
                    $l140:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
                    switch ($tmp142) {
                        case -1: goto $l213;
                    }
                    $l213:;
                }
                $tmp132 = -1;
                goto $l130;
                $l130:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c133));
                c133 = NULL;
                switch ($tmp132) {
                    case -1: goto $l214;
                }
                $l214:;
            }
            goto $l122;
            $l123:;
        }
        $tmp114 = -1;
        goto $l112;
        $l112:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$39$9115));
        Iter$39$9115 = NULL;
        switch ($tmp114) {
            case -1: goto $l215;
        }
        $l215:;
    }
    org$pandalanguage$pandac$Annotations* $tmp219 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp219, flags111);
    $tmp218 = $tmp219;
    $tmp217 = $tmp218;
    $finallyReturn215 = $tmp217;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
    return $finallyReturn215;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment224 = NULL;
    panda$core$String* $tmp225;
    panda$core$String* $tmp226;
    org$pandalanguage$pandac$ASTNode* $match$73_13230 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp231;
    org$pandalanguage$pandac$Position position233;
    panda$core$String* text235 = NULL;
    panda$core$String* $tmp237;
    panda$core$String* $tmp238;
    org$pandalanguage$pandac$Annotations* annotations240 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp241;
    org$pandalanguage$pandac$Annotations* $tmp242;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind244;
    org$pandalanguage$pandac$ASTNode* $match$82_9248 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp249;
    org$pandalanguage$pandac$Variable$Kind kind251;
    panda$collections$ImmutableArray* decls253 = NULL;
    org$pandalanguage$pandac$Variable$Kind $match$84_17255;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp257;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp259;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp261;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp265;
    panda$collections$Iterator* Iter$95$17269 = NULL;
    panda$collections$Iterator* $tmp270;
    panda$collections$Iterator* $tmp271;
    org$pandalanguage$pandac$ASTNode* decl287 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp288;
    panda$core$Object* $tmp289;
    org$pandalanguage$pandac$ASTNode* $match$96_21297 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp298;
    org$pandalanguage$pandac$Position declPosition300;
    org$pandalanguage$pandac$ASTNode* target302 = NULL;
    org$pandalanguage$pandac$ASTNode* value304 = NULL;
    panda$core$String* name309 = NULL;
    org$pandalanguage$pandac$Type* type310 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$100_29314 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp315;
    panda$core$String* id317 = NULL;
    panda$core$String* $tmp319;
    panda$core$String* $tmp320;
    org$pandalanguage$pandac$Type* $tmp321;
    org$pandalanguage$pandac$Type* $tmp322;
    org$pandalanguage$pandac$Type* $tmp323;
    panda$core$String* id326 = NULL;
    org$pandalanguage$pandac$ASTNode* idType328 = NULL;
    panda$core$String* $tmp330;
    panda$core$String* $tmp331;
    org$pandalanguage$pandac$Type* $tmp332;
    org$pandalanguage$pandac$Type* $tmp333;
    org$pandalanguage$pandac$Type* $tmp334;
    org$pandalanguage$pandac$FieldDecl* field337 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp338;
    org$pandalanguage$pandac$FieldDecl* $tmp339;
    int $tmp223;
    {
        memset(&doccomment224, 0, sizeof(doccomment224));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp225 = doccomment224;
                $tmp226 = NULL;
                doccomment224 = $tmp226;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp226));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp225));
            }
        }
        }
        else {
        {
            int $tmp229;
            {
                $tmp231 = p_rawDoccomment;
                $match$73_13230 = $tmp231;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp231));
                panda$core$Bit $tmp232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_13230->$rawValue, ((panda$core$Int64) { 34 }));
                if ($tmp232.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp234 = ((org$pandalanguage$pandac$Position*) ((char*) $match$73_13230->$data + 0));
                    position233 = *$tmp234;
                    panda$core$String** $tmp236 = ((panda$core$String**) ((char*) $match$73_13230->$data + 16));
                    text235 = *$tmp236;
                    {
                        $tmp237 = doccomment224;
                        $tmp238 = text235;
                        doccomment224 = $tmp238;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp238));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp237));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp229 = -1;
            goto $l227;
            $l227:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp231));
            switch ($tmp229) {
                case -1: goto $l239;
            }
            $l239:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp243 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp242 = $tmp243;
        $tmp241 = $tmp242;
        annotations240 = $tmp241;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp241));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
        memset(&fieldKind244, 0, sizeof(fieldKind244));
        int $tmp247;
        {
            $tmp249 = p_varDecl;
            $match$82_9248 = $tmp249;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp249));
            panda$core$Bit $tmp250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$82_9248->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp250.value) {
            {
                org$pandalanguage$pandac$Variable$Kind* $tmp252 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$82_9248->$data + 16));
                kind251 = *$tmp252;
                panda$collections$ImmutableArray** $tmp254 = ((panda$collections$ImmutableArray**) ((char*) $match$82_9248->$data + 24));
                decls253 = *$tmp254;
                {
                    $match$84_17255 = kind251;
                    panda$core$Bit $tmp256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_17255.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp256.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp257, ((panda$core$Int64) { 0 }));
                        fieldKind244 = $tmp257;
                    }
                    }
                    else {
                    panda$core$Bit $tmp258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_17255.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp258.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp259, ((panda$core$Int64) { 1 }));
                        fieldKind244 = $tmp259;
                    }
                    }
                    else {
                    panda$core$Bit $tmp260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_17255.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp260.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp261, ((panda$core$Int64) { 2 }));
                        fieldKind244 = $tmp261;
                        panda$core$Int64 $tmp262 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                        panda$core$Int64 $tmp263 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations240->flags, $tmp262);
                        annotations240->flags = $tmp263;
                    }
                    }
                    else {
                    panda$core$Bit $tmp264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_17255.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp264.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp265, ((panda$core$Int64) { 3 }));
                        fieldKind244 = $tmp265;
                    }
                    }
                    }
                    }
                    }
                }
                {
                    int $tmp268;
                    {
                        ITable* $tmp272 = ((panda$collections$Iterable*) decls253)->$class->itable;
                        while ($tmp272->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp272 = $tmp272->next;
                        }
                        $fn274 $tmp273 = $tmp272->methods[0];
                        panda$collections$Iterator* $tmp275 = $tmp273(((panda$collections$Iterable*) decls253));
                        $tmp271 = $tmp275;
                        $tmp270 = $tmp271;
                        Iter$95$17269 = $tmp270;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp270));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp271));
                        $l276:;
                        ITable* $tmp279 = Iter$95$17269->$class->itable;
                        while ($tmp279->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp279 = $tmp279->next;
                        }
                        $fn281 $tmp280 = $tmp279->methods[0];
                        panda$core$Bit $tmp282 = $tmp280(Iter$95$17269);
                        panda$core$Bit $tmp283 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp282);
                        bool $tmp278 = $tmp283.value;
                        if (!$tmp278) goto $l277;
                        {
                            int $tmp286;
                            {
                                ITable* $tmp290 = Iter$95$17269->$class->itable;
                                while ($tmp290->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp290 = $tmp290->next;
                                }
                                $fn292 $tmp291 = $tmp290->methods[1];
                                panda$core$Object* $tmp293 = $tmp291(Iter$95$17269);
                                $tmp289 = $tmp293;
                                $tmp288 = ((org$pandalanguage$pandac$ASTNode*) $tmp289);
                                decl287 = $tmp288;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp288));
                                panda$core$Panda$unref$panda$core$Object($tmp289);
                                int $tmp296;
                                {
                                    $tmp298 = decl287;
                                    $match$96_21297 = $tmp298;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
                                    panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$96_21297->$rawValue, ((panda$core$Int64) { 11 }));
                                    if ($tmp299.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp301 = ((org$pandalanguage$pandac$Position*) ((char*) $match$96_21297->$data + 0));
                                        declPosition300 = *$tmp301;
                                        org$pandalanguage$pandac$ASTNode** $tmp303 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$96_21297->$data + 16));
                                        target302 = *$tmp303;
                                        org$pandalanguage$pandac$ASTNode** $tmp305 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$96_21297->$data + 24));
                                        value304 = *$tmp305;
                                        int $tmp308;
                                        {
                                            memset(&name309, 0, sizeof(name309));
                                            memset(&type310, 0, sizeof(type310));
                                            int $tmp313;
                                            {
                                                $tmp315 = target302;
                                                $match$100_29314 = $tmp315;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp315));
                                                panda$core$Bit $tmp316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$100_29314->$rawValue, ((panda$core$Int64) { 18 }));
                                                if ($tmp316.value) {
                                                {
                                                    panda$core$String** $tmp318 = ((panda$core$String**) ((char*) $match$100_29314->$data + 16));
                                                    id317 = *$tmp318;
                                                    {
                                                        $tmp319 = name309;
                                                        $tmp320 = id317;
                                                        name309 = $tmp320;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp320));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
                                                    }
                                                    {
                                                        $tmp321 = type310;
                                                        org$pandalanguage$pandac$Type* $tmp324 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                        $tmp323 = $tmp324;
                                                        $tmp322 = $tmp323;
                                                        type310 = $tmp322;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp322));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp323));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp321));
                                                    }
                                                }
                                                }
                                                else {
                                                panda$core$Bit $tmp325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$100_29314->$rawValue, ((panda$core$Int64) { 37 }));
                                                if ($tmp325.value) {
                                                {
                                                    panda$core$String** $tmp327 = ((panda$core$String**) ((char*) $match$100_29314->$data + 16));
                                                    id326 = *$tmp327;
                                                    org$pandalanguage$pandac$ASTNode** $tmp329 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$100_29314->$data + 24));
                                                    idType328 = *$tmp329;
                                                    {
                                                        $tmp330 = name309;
                                                        $tmp331 = id326;
                                                        name309 = $tmp331;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp331));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
                                                    }
                                                    {
                                                        $tmp332 = type310;
                                                        org$pandalanguage$pandac$Type* $tmp335 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType328);
                                                        $tmp334 = $tmp335;
                                                        $tmp333 = $tmp334;
                                                        type310 = $tmp333;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp333));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp334));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
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
                                            $tmp313 = -1;
                                            goto $l311;
                                            $l311:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
                                            switch ($tmp313) {
                                                case -1: goto $l336;
                                            }
                                            $l336:;
                                            org$pandalanguage$pandac$FieldDecl* $tmp340 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp340, p_owner, declPosition300, doccomment224, annotations240, fieldKind244, name309, type310, value304);
                                            $tmp339 = $tmp340;
                                            $tmp338 = $tmp339;
                                            field337 = $tmp338;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp338));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field337));
                                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field337));
                                        }
                                        $tmp308 = -1;
                                        goto $l306;
                                        $l306:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name309));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type310));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field337));
                                        field337 = NULL;
                                        switch ($tmp308) {
                                            case -1: goto $l341;
                                        }
                                        $l341:;
                                    }
                                    }
                                    else {
                                    {
                                        PANDA_ASSERT(((panda$core$Bit) { false }).value);
                                    }
                                    }
                                }
                                $tmp296 = -1;
                                goto $l294;
                                $l294:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
                                switch ($tmp296) {
                                    case -1: goto $l342;
                                }
                                $l342:;
                            }
                            $tmp286 = -1;
                            goto $l284;
                            $l284:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl287));
                            decl287 = NULL;
                            switch ($tmp286) {
                                case -1: goto $l343;
                            }
                            $l343:;
                        }
                        goto $l276;
                        $l277:;
                    }
                    $tmp268 = -1;
                    goto $l266;
                    $l266:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$95$17269));
                    Iter$95$17269 = NULL;
                    switch ($tmp268) {
                        case -1: goto $l344;
                    }
                    $l344:;
                }
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
        $tmp247 = -1;
        goto $l245;
        $l245:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
        switch ($tmp247) {
            case -1: goto $l345;
        }
        $l345:;
    }
    $tmp223 = -1;
    goto $l221;
    $l221:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment224));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations240));
    annotations240 = NULL;
    switch ($tmp223) {
        case -1: goto $l346;
    }
    $l346:;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$125_9350 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp351;
    org$pandalanguage$pandac$ASTNode* test353 = NULL;
    panda$core$Int64 $finallyReturn354;
    org$pandalanguage$pandac$ASTNode* left360 = NULL;
    org$pandalanguage$pandac$ASTNode* right362 = NULL;
    panda$core$Int64 $finallyReturn363;
    panda$core$Int64 $finallyReturn371;
    panda$collections$ImmutableArray* statements376 = NULL;
    panda$core$Int64 result378;
    panda$collections$Iterator* Iter$134$17382 = NULL;
    panda$collections$Iterator* $tmp383;
    panda$collections$Iterator* $tmp384;
    org$pandalanguage$pandac$ASTNode* s400 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp401;
    panda$core$Object* $tmp402;
    panda$core$Int64 $finallyReturn410;
    panda$core$Int64 $finallyReturn414;
    org$pandalanguage$pandac$ASTNode* target419 = NULL;
    panda$collections$ImmutableArray* args421 = NULL;
    panda$core$Int64 result423;
    panda$collections$Iterator* Iter$142$17428 = NULL;
    panda$collections$Iterator* $tmp429;
    panda$collections$Iterator* $tmp430;
    org$pandalanguage$pandac$ASTNode* a446 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp447;
    panda$core$Object* $tmp448;
    panda$core$Int64 $finallyReturn456;
    org$pandalanguage$pandac$ASTNode* base461 = NULL;
    panda$core$Int64 $finallyReturn462;
    panda$core$Int64 $finallyReturn467;
    org$pandalanguage$pandac$ASTNode* value472 = NULL;
    panda$core$Int64 $finallyReturn473;
    panda$core$Int64 $finallyReturn476;
    panda$collections$ImmutableArray* statements482 = NULL;
    org$pandalanguage$pandac$ASTNode* test484 = NULL;
    panda$core$Int64 result486;
    panda$collections$Iterator* Iter$157$17491 = NULL;
    panda$collections$Iterator* $tmp492;
    panda$collections$Iterator* $tmp493;
    org$pandalanguage$pandac$ASTNode* s509 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp510;
    panda$core$Object* $tmp511;
    panda$core$Int64 $finallyReturn519;
    org$pandalanguage$pandac$ASTNode* base524 = NULL;
    panda$core$Int64 $finallyReturn525;
    org$pandalanguage$pandac$ASTNode* list531 = NULL;
    panda$collections$ImmutableArray* statements533 = NULL;
    panda$core$Int64 result535;
    panda$collections$Iterator* Iter$165$17540 = NULL;
    panda$collections$Iterator* $tmp541;
    panda$collections$Iterator* $tmp542;
    org$pandalanguage$pandac$ASTNode* s558 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp559;
    panda$core$Object* $tmp560;
    panda$core$Int64 $finallyReturn568;
    panda$core$Int64 $finallyReturn572;
    panda$core$Int64 $finallyReturn576;
    org$pandalanguage$pandac$ASTNode* test581 = NULL;
    panda$collections$ImmutableArray* ifTrue583 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse585 = NULL;
    panda$core$Int64 result587;
    panda$collections$Iterator* Iter$175$17592 = NULL;
    panda$collections$Iterator* $tmp593;
    panda$collections$Iterator* $tmp594;
    org$pandalanguage$pandac$ASTNode* s610 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp611;
    panda$core$Object* $tmp612;
    panda$core$Int64 $finallyReturn622;
    panda$core$Int64 $finallyReturn626;
    panda$collections$ImmutableArray* statements631 = NULL;
    panda$core$Int64 result633;
    panda$collections$Iterator* Iter$186$17637 = NULL;
    panda$collections$Iterator* $tmp638;
    panda$collections$Iterator* $tmp639;
    org$pandalanguage$pandac$ASTNode* s655 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp656;
    panda$core$Object* $tmp657;
    panda$core$Int64 $finallyReturn665;
    org$pandalanguage$pandac$ASTNode* value670 = NULL;
    panda$collections$ImmutableArray* whens672 = NULL;
    panda$collections$ImmutableArray* other674 = NULL;
    panda$core$Int64 result676;
    panda$collections$Iterator* Iter$192$17681 = NULL;
    panda$collections$Iterator* $tmp682;
    panda$collections$Iterator* $tmp683;
    org$pandalanguage$pandac$ASTNode* w699 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp700;
    panda$core$Object* $tmp701;
    panda$collections$Iterator* Iter$196$21713 = NULL;
    panda$collections$Iterator* $tmp714;
    panda$collections$Iterator* $tmp715;
    org$pandalanguage$pandac$ASTNode* s731 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp732;
    panda$core$Object* $tmp733;
    panda$core$Int64 $finallyReturn741;
    panda$core$Int64 $finallyReturn745;
    panda$core$Int64 $finallyReturn749;
    org$pandalanguage$pandac$ASTNode* base754 = NULL;
    panda$core$Int64 $finallyReturn755;
    panda$core$Int64 $finallyReturn761;
    panda$core$Int64 $finallyReturn765;
    org$pandalanguage$pandac$ASTNode* value770 = NULL;
    panda$core$Int64 $finallyReturn771;
    panda$core$Int64 $finallyReturn774;
    panda$core$Int64 $finallyReturn779;
    panda$core$Int64 $finallyReturn783;
    panda$core$Int64 $finallyReturn787;
    panda$core$Int64 $finallyReturn791;
    panda$collections$ImmutableArray* decls796 = NULL;
    panda$core$Int64 result798;
    panda$collections$Iterator* Iter$226$17802 = NULL;
    panda$collections$Iterator* $tmp803;
    panda$collections$Iterator* $tmp804;
    org$pandalanguage$pandac$ASTNode* decl820 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp821;
    panda$core$Object* $tmp822;
    panda$core$Int64 $finallyReturn830;
    panda$collections$ImmutableArray* tests835 = NULL;
    panda$collections$ImmutableArray* statements837 = NULL;
    panda$core$Int64 result839;
    panda$collections$Iterator* Iter$232$17843 = NULL;
    panda$collections$Iterator* $tmp844;
    panda$collections$Iterator* $tmp845;
    org$pandalanguage$pandac$ASTNode* test861 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp862;
    panda$core$Object* $tmp863;
    panda$collections$Iterator* Iter$235$17875 = NULL;
    panda$collections$Iterator* $tmp876;
    panda$collections$Iterator* $tmp877;
    org$pandalanguage$pandac$ASTNode* s893 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp894;
    panda$core$Object* $tmp895;
    panda$core$Int64 $finallyReturn903;
    org$pandalanguage$pandac$ASTNode* test908 = NULL;
    panda$collections$ImmutableArray* statements910 = NULL;
    panda$core$Int64 result912;
    panda$collections$Iterator* Iter$241$17917 = NULL;
    panda$collections$Iterator* $tmp918;
    panda$collections$Iterator* $tmp919;
    org$pandalanguage$pandac$ASTNode* s935 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp936;
    panda$core$Object* $tmp937;
    panda$core$Int64 $finallyReturn945;
    int $tmp349;
    {
        $tmp351 = p_node;
        $match$125_9350 = $tmp351;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp351));
        panda$core$Bit $tmp352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp352.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp354 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9350->$data + 16));
            test353 = *$tmp354;
            panda$core$Int64 $tmp356 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test353);
            $finallyReturn354 = $tmp356;
            $tmp349 = 0;
            goto $l347;
            $l357:;
            return $finallyReturn354;
        }
        }
        else {
        panda$core$Bit $tmp359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp359.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp361 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9350->$data + 16));
            left360 = *$tmp361;
            org$pandalanguage$pandac$ASTNode** $tmp363 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9350->$data + 32));
            right362 = *$tmp363;
            panda$core$Int64 $tmp365 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left360);
            panda$core$Int64 $tmp366 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp365);
            panda$core$Int64 $tmp367 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right362);
            panda$core$Int64 $tmp368 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp366, $tmp367);
            $finallyReturn363 = $tmp368;
            $tmp349 = 1;
            goto $l347;
            $l369:;
            return $finallyReturn363;
        }
        }
        else {
        panda$core$Bit $tmp371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp371.value) {
        {
            $finallyReturn371 = ((panda$core$Int64) { 1 });
            $tmp349 = 2;
            goto $l347;
            $l373:;
            return $finallyReturn371;
        }
        }
        else {
        panda$core$Bit $tmp375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp375.value) {
        {
            panda$collections$ImmutableArray** $tmp377 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9350->$data + 16));
            statements376 = *$tmp377;
            result378 = ((panda$core$Int64) { 0 });
            {
                int $tmp381;
                {
                    ITable* $tmp385 = ((panda$collections$Iterable*) statements376)->$class->itable;
                    while ($tmp385->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp385 = $tmp385->next;
                    }
                    $fn387 $tmp386 = $tmp385->methods[0];
                    panda$collections$Iterator* $tmp388 = $tmp386(((panda$collections$Iterable*) statements376));
                    $tmp384 = $tmp388;
                    $tmp383 = $tmp384;
                    Iter$134$17382 = $tmp383;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp383));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp384));
                    $l389:;
                    ITable* $tmp392 = Iter$134$17382->$class->itable;
                    while ($tmp392->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp392 = $tmp392->next;
                    }
                    $fn394 $tmp393 = $tmp392->methods[0];
                    panda$core$Bit $tmp395 = $tmp393(Iter$134$17382);
                    panda$core$Bit $tmp396 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp395);
                    bool $tmp391 = $tmp396.value;
                    if (!$tmp391) goto $l390;
                    {
                        int $tmp399;
                        {
                            ITable* $tmp403 = Iter$134$17382->$class->itable;
                            while ($tmp403->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp403 = $tmp403->next;
                            }
                            $fn405 $tmp404 = $tmp403->methods[1];
                            panda$core$Object* $tmp406 = $tmp404(Iter$134$17382);
                            $tmp402 = $tmp406;
                            $tmp401 = ((org$pandalanguage$pandac$ASTNode*) $tmp402);
                            s400 = $tmp401;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp401));
                            panda$core$Panda$unref$panda$core$Object($tmp402);
                            panda$core$Int64 $tmp407 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s400);
                            panda$core$Int64 $tmp408 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result378, $tmp407);
                            result378 = $tmp408;
                        }
                        $tmp399 = -1;
                        goto $l397;
                        $l397:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s400));
                        s400 = NULL;
                        switch ($tmp399) {
                            case -1: goto $l409;
                        }
                        $l409:;
                    }
                    goto $l389;
                    $l390:;
                }
                $tmp381 = -1;
                goto $l379;
                $l379:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$134$17382));
                Iter$134$17382 = NULL;
                switch ($tmp381) {
                    case -1: goto $l410;
                }
                $l410:;
            }
            $finallyReturn410 = result378;
            $tmp349 = 3;
            goto $l347;
            $l412:;
            return $finallyReturn410;
        }
        }
        else {
        panda$core$Bit $tmp414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp414.value) {
        {
            $finallyReturn414 = ((panda$core$Int64) { 1 });
            $tmp349 = 4;
            goto $l347;
            $l416:;
            return $finallyReturn414;
        }
        }
        else {
        panda$core$Bit $tmp418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp418.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp420 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9350->$data + 16));
            target419 = *$tmp420;
            panda$collections$ImmutableArray** $tmp422 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9350->$data + 24));
            args421 = *$tmp422;
            panda$core$Int64 $tmp424 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target419);
            result423 = $tmp424;
            {
                int $tmp427;
                {
                    ITable* $tmp431 = ((panda$collections$Iterable*) args421)->$class->itable;
                    while ($tmp431->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp431 = $tmp431->next;
                    }
                    $fn433 $tmp432 = $tmp431->methods[0];
                    panda$collections$Iterator* $tmp434 = $tmp432(((panda$collections$Iterable*) args421));
                    $tmp430 = $tmp434;
                    $tmp429 = $tmp430;
                    Iter$142$17428 = $tmp429;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp429));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp430));
                    $l435:;
                    ITable* $tmp438 = Iter$142$17428->$class->itable;
                    while ($tmp438->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp438 = $tmp438->next;
                    }
                    $fn440 $tmp439 = $tmp438->methods[0];
                    panda$core$Bit $tmp441 = $tmp439(Iter$142$17428);
                    panda$core$Bit $tmp442 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp441);
                    bool $tmp437 = $tmp442.value;
                    if (!$tmp437) goto $l436;
                    {
                        int $tmp445;
                        {
                            ITable* $tmp449 = Iter$142$17428->$class->itable;
                            while ($tmp449->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp449 = $tmp449->next;
                            }
                            $fn451 $tmp450 = $tmp449->methods[1];
                            panda$core$Object* $tmp452 = $tmp450(Iter$142$17428);
                            $tmp448 = $tmp452;
                            $tmp447 = ((org$pandalanguage$pandac$ASTNode*) $tmp448);
                            a446 = $tmp447;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp447));
                            panda$core$Panda$unref$panda$core$Object($tmp448);
                            panda$core$Int64 $tmp453 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a446);
                            panda$core$Int64 $tmp454 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result423, $tmp453);
                            result423 = $tmp454;
                        }
                        $tmp445 = -1;
                        goto $l443;
                        $l443:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a446));
                        a446 = NULL;
                        switch ($tmp445) {
                            case -1: goto $l455;
                        }
                        $l455:;
                    }
                    goto $l435;
                    $l436:;
                }
                $tmp427 = -1;
                goto $l425;
                $l425:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$142$17428));
                Iter$142$17428 = NULL;
                switch ($tmp427) {
                    case -1: goto $l456;
                }
                $l456:;
            }
            $finallyReturn456 = result423;
            $tmp349 = 5;
            goto $l347;
            $l458:;
            return $finallyReturn456;
        }
        }
        else {
        panda$core$Bit $tmp460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp460.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp462 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9350->$data + 16));
            base461 = *$tmp462;
            panda$core$Int64 $tmp464 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base461);
            $finallyReturn462 = $tmp464;
            $tmp349 = 6;
            goto $l347;
            $l465:;
            return $finallyReturn462;
        }
        }
        else {
        panda$core$Bit $tmp467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp467.value) {
        {
            $finallyReturn467 = ((panda$core$Int64) { 1 });
            $tmp349 = 7;
            goto $l347;
            $l469:;
            return $finallyReturn467;
        }
        }
        else {
        panda$core$Bit $tmp471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp471.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp473 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9350->$data + 24));
            value472 = *$tmp473;
            if (((panda$core$Bit) { value472 == NULL }).value) {
            {
                $finallyReturn473 = ((panda$core$Int64) { 0 });
                $tmp349 = 8;
                goto $l347;
                $l475:;
                return $finallyReturn473;
            }
            }
            panda$core$Int64 $tmp478 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value472);
            $finallyReturn476 = $tmp478;
            $tmp349 = 9;
            goto $l347;
            $l479:;
            return $finallyReturn476;
        }
        }
        else {
        panda$core$Bit $tmp481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp481.value) {
        {
            panda$collections$ImmutableArray** $tmp483 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9350->$data + 24));
            statements482 = *$tmp483;
            org$pandalanguage$pandac$ASTNode** $tmp485 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9350->$data + 32));
            test484 = *$tmp485;
            panda$core$Int64 $tmp487 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test484);
            result486 = $tmp487;
            {
                int $tmp490;
                {
                    ITable* $tmp494 = ((panda$collections$Iterable*) statements482)->$class->itable;
                    while ($tmp494->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp494 = $tmp494->next;
                    }
                    $fn496 $tmp495 = $tmp494->methods[0];
                    panda$collections$Iterator* $tmp497 = $tmp495(((panda$collections$Iterable*) statements482));
                    $tmp493 = $tmp497;
                    $tmp492 = $tmp493;
                    Iter$157$17491 = $tmp492;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp492));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp493));
                    $l498:;
                    ITable* $tmp501 = Iter$157$17491->$class->itable;
                    while ($tmp501->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp501 = $tmp501->next;
                    }
                    $fn503 $tmp502 = $tmp501->methods[0];
                    panda$core$Bit $tmp504 = $tmp502(Iter$157$17491);
                    panda$core$Bit $tmp505 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp504);
                    bool $tmp500 = $tmp505.value;
                    if (!$tmp500) goto $l499;
                    {
                        int $tmp508;
                        {
                            ITable* $tmp512 = Iter$157$17491->$class->itable;
                            while ($tmp512->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp512 = $tmp512->next;
                            }
                            $fn514 $tmp513 = $tmp512->methods[1];
                            panda$core$Object* $tmp515 = $tmp513(Iter$157$17491);
                            $tmp511 = $tmp515;
                            $tmp510 = ((org$pandalanguage$pandac$ASTNode*) $tmp511);
                            s509 = $tmp510;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp510));
                            panda$core$Panda$unref$panda$core$Object($tmp511);
                            panda$core$Int64 $tmp516 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s509);
                            panda$core$Int64 $tmp517 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result486, $tmp516);
                            result486 = $tmp517;
                        }
                        $tmp508 = -1;
                        goto $l506;
                        $l506:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s509));
                        s509 = NULL;
                        switch ($tmp508) {
                            case -1: goto $l518;
                        }
                        $l518:;
                    }
                    goto $l498;
                    $l499:;
                }
                $tmp490 = -1;
                goto $l488;
                $l488:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$157$17491));
                Iter$157$17491 = NULL;
                switch ($tmp490) {
                    case -1: goto $l519;
                }
                $l519:;
            }
            $finallyReturn519 = result486;
            $tmp349 = 10;
            goto $l347;
            $l521:;
            return $finallyReturn519;
        }
        }
        else {
        panda$core$Bit $tmp523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp523.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp525 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9350->$data + 16));
            base524 = *$tmp525;
            panda$core$Int64 $tmp527 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base524);
            $finallyReturn525 = $tmp527;
            $tmp349 = 11;
            goto $l347;
            $l528:;
            return $finallyReturn525;
        }
        }
        else {
        panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp530.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp532 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9350->$data + 32));
            list531 = *$tmp532;
            panda$collections$ImmutableArray** $tmp534 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9350->$data + 40));
            statements533 = *$tmp534;
            panda$core$Int64 $tmp536 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list531);
            result535 = $tmp536;
            {
                int $tmp539;
                {
                    ITable* $tmp543 = ((panda$collections$Iterable*) statements533)->$class->itable;
                    while ($tmp543->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp543 = $tmp543->next;
                    }
                    $fn545 $tmp544 = $tmp543->methods[0];
                    panda$collections$Iterator* $tmp546 = $tmp544(((panda$collections$Iterable*) statements533));
                    $tmp542 = $tmp546;
                    $tmp541 = $tmp542;
                    Iter$165$17540 = $tmp541;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp541));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp542));
                    $l547:;
                    ITable* $tmp550 = Iter$165$17540->$class->itable;
                    while ($tmp550->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp550 = $tmp550->next;
                    }
                    $fn552 $tmp551 = $tmp550->methods[0];
                    panda$core$Bit $tmp553 = $tmp551(Iter$165$17540);
                    panda$core$Bit $tmp554 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp553);
                    bool $tmp549 = $tmp554.value;
                    if (!$tmp549) goto $l548;
                    {
                        int $tmp557;
                        {
                            ITable* $tmp561 = Iter$165$17540->$class->itable;
                            while ($tmp561->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp561 = $tmp561->next;
                            }
                            $fn563 $tmp562 = $tmp561->methods[1];
                            panda$core$Object* $tmp564 = $tmp562(Iter$165$17540);
                            $tmp560 = $tmp564;
                            $tmp559 = ((org$pandalanguage$pandac$ASTNode*) $tmp560);
                            s558 = $tmp559;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp559));
                            panda$core$Panda$unref$panda$core$Object($tmp560);
                            panda$core$Int64 $tmp565 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s558);
                            panda$core$Int64 $tmp566 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result535, $tmp565);
                            result535 = $tmp566;
                        }
                        $tmp557 = -1;
                        goto $l555;
                        $l555:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s558));
                        s558 = NULL;
                        switch ($tmp557) {
                            case -1: goto $l567;
                        }
                        $l567:;
                    }
                    goto $l547;
                    $l548:;
                }
                $tmp539 = -1;
                goto $l537;
                $l537:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$165$17540));
                Iter$165$17540 = NULL;
                switch ($tmp539) {
                    case -1: goto $l568;
                }
                $l568:;
            }
            $finallyReturn568 = result535;
            $tmp349 = 12;
            goto $l347;
            $l570:;
            return $finallyReturn568;
        }
        }
        else {
        panda$core$Bit $tmp572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp572.value) {
        {
            $finallyReturn572 = ((panda$core$Int64) { 0 });
            $tmp349 = 13;
            goto $l347;
            $l574:;
            return $finallyReturn572;
        }
        }
        else {
        panda$core$Bit $tmp576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp576.value) {
        {
            $finallyReturn576 = ((panda$core$Int64) { 1 });
            $tmp349 = 14;
            goto $l347;
            $l578:;
            return $finallyReturn576;
        }
        }
        else {
        panda$core$Bit $tmp580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp580.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp582 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9350->$data + 16));
            test581 = *$tmp582;
            panda$collections$ImmutableArray** $tmp584 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9350->$data + 24));
            ifTrue583 = *$tmp584;
            org$pandalanguage$pandac$ASTNode** $tmp586 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9350->$data + 32));
            ifFalse585 = *$tmp586;
            panda$core$Int64 $tmp588 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test581);
            result587 = $tmp588;
            {
                int $tmp591;
                {
                    ITable* $tmp595 = ((panda$collections$Iterable*) ifTrue583)->$class->itable;
                    while ($tmp595->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp595 = $tmp595->next;
                    }
                    $fn597 $tmp596 = $tmp595->methods[0];
                    panda$collections$Iterator* $tmp598 = $tmp596(((panda$collections$Iterable*) ifTrue583));
                    $tmp594 = $tmp598;
                    $tmp593 = $tmp594;
                    Iter$175$17592 = $tmp593;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp593));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp594));
                    $l599:;
                    ITable* $tmp602 = Iter$175$17592->$class->itable;
                    while ($tmp602->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp602 = $tmp602->next;
                    }
                    $fn604 $tmp603 = $tmp602->methods[0];
                    panda$core$Bit $tmp605 = $tmp603(Iter$175$17592);
                    panda$core$Bit $tmp606 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp605);
                    bool $tmp601 = $tmp606.value;
                    if (!$tmp601) goto $l600;
                    {
                        int $tmp609;
                        {
                            ITable* $tmp613 = Iter$175$17592->$class->itable;
                            while ($tmp613->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp613 = $tmp613->next;
                            }
                            $fn615 $tmp614 = $tmp613->methods[1];
                            panda$core$Object* $tmp616 = $tmp614(Iter$175$17592);
                            $tmp612 = $tmp616;
                            $tmp611 = ((org$pandalanguage$pandac$ASTNode*) $tmp612);
                            s610 = $tmp611;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp611));
                            panda$core$Panda$unref$panda$core$Object($tmp612);
                            panda$core$Int64 $tmp617 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s610);
                            panda$core$Int64 $tmp618 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result587, $tmp617);
                            result587 = $tmp618;
                        }
                        $tmp609 = -1;
                        goto $l607;
                        $l607:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s610));
                        s610 = NULL;
                        switch ($tmp609) {
                            case -1: goto $l619;
                        }
                        $l619:;
                    }
                    goto $l599;
                    $l600:;
                }
                $tmp591 = -1;
                goto $l589;
                $l589:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$175$17592));
                Iter$175$17592 = NULL;
                switch ($tmp591) {
                    case -1: goto $l620;
                }
                $l620:;
            }
            if (((panda$core$Bit) { ifFalse585 != NULL }).value) {
            {
                panda$core$Int64 $tmp621 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse585);
                panda$core$Int64 $tmp622 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result587, $tmp621);
                result587 = $tmp622;
            }
            }
            $finallyReturn622 = result587;
            $tmp349 = 15;
            goto $l347;
            $l624:;
            return $finallyReturn622;
        }
        }
        else {
        panda$core$Bit $tmp626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp626.value) {
        {
            $finallyReturn626 = ((panda$core$Int64) { 1 });
            $tmp349 = 16;
            goto $l347;
            $l628:;
            return $finallyReturn626;
        }
        }
        else {
        panda$core$Bit $tmp630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp630.value) {
        {
            panda$collections$ImmutableArray** $tmp632 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9350->$data + 24));
            statements631 = *$tmp632;
            result633 = ((panda$core$Int64) { 0 });
            {
                int $tmp636;
                {
                    ITable* $tmp640 = ((panda$collections$Iterable*) statements631)->$class->itable;
                    while ($tmp640->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp640 = $tmp640->next;
                    }
                    $fn642 $tmp641 = $tmp640->methods[0];
                    panda$collections$Iterator* $tmp643 = $tmp641(((panda$collections$Iterable*) statements631));
                    $tmp639 = $tmp643;
                    $tmp638 = $tmp639;
                    Iter$186$17637 = $tmp638;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp638));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp639));
                    $l644:;
                    ITable* $tmp647 = Iter$186$17637->$class->itable;
                    while ($tmp647->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp647 = $tmp647->next;
                    }
                    $fn649 $tmp648 = $tmp647->methods[0];
                    panda$core$Bit $tmp650 = $tmp648(Iter$186$17637);
                    panda$core$Bit $tmp651 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp650);
                    bool $tmp646 = $tmp651.value;
                    if (!$tmp646) goto $l645;
                    {
                        int $tmp654;
                        {
                            ITable* $tmp658 = Iter$186$17637->$class->itable;
                            while ($tmp658->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp658 = $tmp658->next;
                            }
                            $fn660 $tmp659 = $tmp658->methods[1];
                            panda$core$Object* $tmp661 = $tmp659(Iter$186$17637);
                            $tmp657 = $tmp661;
                            $tmp656 = ((org$pandalanguage$pandac$ASTNode*) $tmp657);
                            s655 = $tmp656;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp656));
                            panda$core$Panda$unref$panda$core$Object($tmp657);
                            panda$core$Int64 $tmp662 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s655);
                            panda$core$Int64 $tmp663 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result633, $tmp662);
                            result633 = $tmp663;
                        }
                        $tmp654 = -1;
                        goto $l652;
                        $l652:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s655));
                        s655 = NULL;
                        switch ($tmp654) {
                            case -1: goto $l664;
                        }
                        $l664:;
                    }
                    goto $l644;
                    $l645:;
                }
                $tmp636 = -1;
                goto $l634;
                $l634:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$186$17637));
                Iter$186$17637 = NULL;
                switch ($tmp636) {
                    case -1: goto $l665;
                }
                $l665:;
            }
            $finallyReturn665 = result633;
            $tmp349 = 17;
            goto $l347;
            $l667:;
            return $finallyReturn665;
        }
        }
        else {
        panda$core$Bit $tmp669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp669.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp671 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9350->$data + 16));
            value670 = *$tmp671;
            panda$collections$ImmutableArray** $tmp673 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9350->$data + 24));
            whens672 = *$tmp673;
            panda$collections$ImmutableArray** $tmp675 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9350->$data + 32));
            other674 = *$tmp675;
            panda$core$Int64 $tmp677 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value670);
            result676 = $tmp677;
            {
                int $tmp680;
                {
                    ITable* $tmp684 = ((panda$collections$Iterable*) whens672)->$class->itable;
                    while ($tmp684->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp684 = $tmp684->next;
                    }
                    $fn686 $tmp685 = $tmp684->methods[0];
                    panda$collections$Iterator* $tmp687 = $tmp685(((panda$collections$Iterable*) whens672));
                    $tmp683 = $tmp687;
                    $tmp682 = $tmp683;
                    Iter$192$17681 = $tmp682;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp682));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp683));
                    $l688:;
                    ITable* $tmp691 = Iter$192$17681->$class->itable;
                    while ($tmp691->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp691 = $tmp691->next;
                    }
                    $fn693 $tmp692 = $tmp691->methods[0];
                    panda$core$Bit $tmp694 = $tmp692(Iter$192$17681);
                    panda$core$Bit $tmp695 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp694);
                    bool $tmp690 = $tmp695.value;
                    if (!$tmp690) goto $l689;
                    {
                        int $tmp698;
                        {
                            ITable* $tmp702 = Iter$192$17681->$class->itable;
                            while ($tmp702->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp702 = $tmp702->next;
                            }
                            $fn704 $tmp703 = $tmp702->methods[1];
                            panda$core$Object* $tmp705 = $tmp703(Iter$192$17681);
                            $tmp701 = $tmp705;
                            $tmp700 = ((org$pandalanguage$pandac$ASTNode*) $tmp701);
                            w699 = $tmp700;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp700));
                            panda$core$Panda$unref$panda$core$Object($tmp701);
                            panda$core$Int64 $tmp706 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w699);
                            panda$core$Int64 $tmp707 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result676, $tmp706);
                            result676 = $tmp707;
                        }
                        $tmp698 = -1;
                        goto $l696;
                        $l696:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w699));
                        w699 = NULL;
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$192$17681));
                Iter$192$17681 = NULL;
                switch ($tmp680) {
                    case -1: goto $l709;
                }
                $l709:;
            }
            if (((panda$core$Bit) { other674 != NULL }).value) {
            {
                {
                    int $tmp712;
                    {
                        ITable* $tmp716 = ((panda$collections$Iterable*) other674)->$class->itable;
                        while ($tmp716->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp716 = $tmp716->next;
                        }
                        $fn718 $tmp717 = $tmp716->methods[0];
                        panda$collections$Iterator* $tmp719 = $tmp717(((panda$collections$Iterable*) other674));
                        $tmp715 = $tmp719;
                        $tmp714 = $tmp715;
                        Iter$196$21713 = $tmp714;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp714));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp715));
                        $l720:;
                        ITable* $tmp723 = Iter$196$21713->$class->itable;
                        while ($tmp723->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp723 = $tmp723->next;
                        }
                        $fn725 $tmp724 = $tmp723->methods[0];
                        panda$core$Bit $tmp726 = $tmp724(Iter$196$21713);
                        panda$core$Bit $tmp727 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp726);
                        bool $tmp722 = $tmp727.value;
                        if (!$tmp722) goto $l721;
                        {
                            int $tmp730;
                            {
                                ITable* $tmp734 = Iter$196$21713->$class->itable;
                                while ($tmp734->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp734 = $tmp734->next;
                                }
                                $fn736 $tmp735 = $tmp734->methods[1];
                                panda$core$Object* $tmp737 = $tmp735(Iter$196$21713);
                                $tmp733 = $tmp737;
                                $tmp732 = ((org$pandalanguage$pandac$ASTNode*) $tmp733);
                                s731 = $tmp732;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp732));
                                panda$core$Panda$unref$panda$core$Object($tmp733);
                                panda$core$Int64 $tmp738 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s731);
                                panda$core$Int64 $tmp739 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result676, $tmp738);
                                result676 = $tmp739;
                            }
                            $tmp730 = -1;
                            goto $l728;
                            $l728:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s731));
                            s731 = NULL;
                            switch ($tmp730) {
                                case -1: goto $l740;
                            }
                            $l740:;
                        }
                        goto $l720;
                        $l721:;
                    }
                    $tmp712 = -1;
                    goto $l710;
                    $l710:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$196$21713));
                    Iter$196$21713 = NULL;
                    switch ($tmp712) {
                        case -1: goto $l741;
                    }
                    $l741:;
                }
            }
            }
            $finallyReturn741 = result676;
            $tmp349 = 18;
            goto $l347;
            $l743:;
            return $finallyReturn741;
        }
        }
        else {
        panda$core$Bit $tmp745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp745.value) {
        {
            $finallyReturn745 = ((panda$core$Int64) { 1 });
            $tmp349 = 19;
            goto $l347;
            $l747:;
            return $finallyReturn745;
        }
        }
        else {
        panda$core$Bit $tmp749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp749.value) {
        {
            $finallyReturn749 = ((panda$core$Int64) { 0 });
            $tmp349 = 20;
            goto $l347;
            $l751:;
            return $finallyReturn749;
        }
        }
        else {
        panda$core$Bit $tmp753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp753.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp755 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9350->$data + 24));
            base754 = *$tmp755;
            panda$core$Int64 $tmp757 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base754);
            panda$core$Int64 $tmp758 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp757);
            $finallyReturn755 = $tmp758;
            $tmp349 = 21;
            goto $l347;
            $l759:;
            return $finallyReturn755;
        }
        }
        else {
        panda$core$Bit $tmp761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp761.value) {
        {
            $finallyReturn761 = ((panda$core$Int64) { 1 });
            $tmp349 = 22;
            goto $l347;
            $l763:;
            return $finallyReturn761;
        }
        }
        else {
        panda$core$Bit $tmp765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp765.value) {
        {
            $finallyReturn765 = ((panda$core$Int64) { 1 });
            $tmp349 = 23;
            goto $l347;
            $l767:;
            return $finallyReturn765;
        }
        }
        else {
        panda$core$Bit $tmp769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp769.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp771 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9350->$data + 16));
            value770 = *$tmp771;
            if (((panda$core$Bit) { value770 == NULL }).value) {
            {
                $finallyReturn771 = ((panda$core$Int64) { 0 });
                $tmp349 = 24;
                goto $l347;
                $l773:;
                return $finallyReturn771;
            }
            }
            panda$core$Int64 $tmp776 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value770);
            $finallyReturn774 = $tmp776;
            $tmp349 = 25;
            goto $l347;
            $l777:;
            return $finallyReturn774;
        }
        }
        else {
        panda$core$Bit $tmp779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp779.value) {
        {
            $finallyReturn779 = ((panda$core$Int64) { 1 });
            $tmp349 = 26;
            goto $l347;
            $l781:;
            return $finallyReturn779;
        }
        }
        else {
        panda$core$Bit $tmp783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp783.value) {
        {
            $finallyReturn783 = ((panda$core$Int64) { 1 });
            $tmp349 = 27;
            goto $l347;
            $l785:;
            return $finallyReturn783;
        }
        }
        else {
        panda$core$Bit $tmp787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp787.value) {
        {
            $finallyReturn787 = ((panda$core$Int64) { 1 });
            $tmp349 = 28;
            goto $l347;
            $l789:;
            return $finallyReturn787;
        }
        }
        else {
        panda$core$Bit $tmp791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp791.value) {
        {
            $finallyReturn791 = ((panda$core$Int64) { 0 });
            $tmp349 = 29;
            goto $l347;
            $l793:;
            return $finallyReturn791;
        }
        }
        else {
        panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp795.value) {
        {
            panda$collections$ImmutableArray** $tmp797 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9350->$data + 24));
            decls796 = *$tmp797;
            result798 = ((panda$core$Int64) { 0 });
            {
                int $tmp801;
                {
                    ITable* $tmp805 = ((panda$collections$Iterable*) decls796)->$class->itable;
                    while ($tmp805->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp805 = $tmp805->next;
                    }
                    $fn807 $tmp806 = $tmp805->methods[0];
                    panda$collections$Iterator* $tmp808 = $tmp806(((panda$collections$Iterable*) decls796));
                    $tmp804 = $tmp808;
                    $tmp803 = $tmp804;
                    Iter$226$17802 = $tmp803;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp803));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp804));
                    $l809:;
                    ITable* $tmp812 = Iter$226$17802->$class->itable;
                    while ($tmp812->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp812 = $tmp812->next;
                    }
                    $fn814 $tmp813 = $tmp812->methods[0];
                    panda$core$Bit $tmp815 = $tmp813(Iter$226$17802);
                    panda$core$Bit $tmp816 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp815);
                    bool $tmp811 = $tmp816.value;
                    if (!$tmp811) goto $l810;
                    {
                        int $tmp819;
                        {
                            ITable* $tmp823 = Iter$226$17802->$class->itable;
                            while ($tmp823->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp823 = $tmp823->next;
                            }
                            $fn825 $tmp824 = $tmp823->methods[1];
                            panda$core$Object* $tmp826 = $tmp824(Iter$226$17802);
                            $tmp822 = $tmp826;
                            $tmp821 = ((org$pandalanguage$pandac$ASTNode*) $tmp822);
                            decl820 = $tmp821;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp821));
                            panda$core$Panda$unref$panda$core$Object($tmp822);
                            panda$core$Int64 $tmp827 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl820);
                            panda$core$Int64 $tmp828 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result798, $tmp827);
                            result798 = $tmp828;
                        }
                        $tmp819 = -1;
                        goto $l817;
                        $l817:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl820));
                        decl820 = NULL;
                        switch ($tmp819) {
                            case -1: goto $l829;
                        }
                        $l829:;
                    }
                    goto $l809;
                    $l810:;
                }
                $tmp801 = -1;
                goto $l799;
                $l799:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$226$17802));
                Iter$226$17802 = NULL;
                switch ($tmp801) {
                    case -1: goto $l830;
                }
                $l830:;
            }
            $finallyReturn830 = result798;
            $tmp349 = 30;
            goto $l347;
            $l832:;
            return $finallyReturn830;
        }
        }
        else {
        panda$core$Bit $tmp834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp834.value) {
        {
            panda$collections$ImmutableArray** $tmp836 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9350->$data + 16));
            tests835 = *$tmp836;
            panda$collections$ImmutableArray** $tmp838 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9350->$data + 24));
            statements837 = *$tmp838;
            result839 = ((panda$core$Int64) { 0 });
            {
                int $tmp842;
                {
                    ITable* $tmp846 = ((panda$collections$Iterable*) tests835)->$class->itable;
                    while ($tmp846->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp846 = $tmp846->next;
                    }
                    $fn848 $tmp847 = $tmp846->methods[0];
                    panda$collections$Iterator* $tmp849 = $tmp847(((panda$collections$Iterable*) tests835));
                    $tmp845 = $tmp849;
                    $tmp844 = $tmp845;
                    Iter$232$17843 = $tmp844;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp844));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp845));
                    $l850:;
                    ITable* $tmp853 = Iter$232$17843->$class->itable;
                    while ($tmp853->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp853 = $tmp853->next;
                    }
                    $fn855 $tmp854 = $tmp853->methods[0];
                    panda$core$Bit $tmp856 = $tmp854(Iter$232$17843);
                    panda$core$Bit $tmp857 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp856);
                    bool $tmp852 = $tmp857.value;
                    if (!$tmp852) goto $l851;
                    {
                        int $tmp860;
                        {
                            ITable* $tmp864 = Iter$232$17843->$class->itable;
                            while ($tmp864->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp864 = $tmp864->next;
                            }
                            $fn866 $tmp865 = $tmp864->methods[1];
                            panda$core$Object* $tmp867 = $tmp865(Iter$232$17843);
                            $tmp863 = $tmp867;
                            $tmp862 = ((org$pandalanguage$pandac$ASTNode*) $tmp863);
                            test861 = $tmp862;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp862));
                            panda$core$Panda$unref$panda$core$Object($tmp863);
                            panda$core$Int64 $tmp868 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test861);
                            panda$core$Int64 $tmp869 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result839, $tmp868);
                            result839 = $tmp869;
                        }
                        $tmp860 = -1;
                        goto $l858;
                        $l858:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test861));
                        test861 = NULL;
                        switch ($tmp860) {
                            case -1: goto $l870;
                        }
                        $l870:;
                    }
                    goto $l850;
                    $l851:;
                }
                $tmp842 = -1;
                goto $l840;
                $l840:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$232$17843));
                Iter$232$17843 = NULL;
                switch ($tmp842) {
                    case -1: goto $l871;
                }
                $l871:;
            }
            {
                int $tmp874;
                {
                    ITable* $tmp878 = ((panda$collections$Iterable*) statements837)->$class->itable;
                    while ($tmp878->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp878 = $tmp878->next;
                    }
                    $fn880 $tmp879 = $tmp878->methods[0];
                    panda$collections$Iterator* $tmp881 = $tmp879(((panda$collections$Iterable*) statements837));
                    $tmp877 = $tmp881;
                    $tmp876 = $tmp877;
                    Iter$235$17875 = $tmp876;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp876));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp877));
                    $l882:;
                    ITable* $tmp885 = Iter$235$17875->$class->itable;
                    while ($tmp885->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp885 = $tmp885->next;
                    }
                    $fn887 $tmp886 = $tmp885->methods[0];
                    panda$core$Bit $tmp888 = $tmp886(Iter$235$17875);
                    panda$core$Bit $tmp889 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp888);
                    bool $tmp884 = $tmp889.value;
                    if (!$tmp884) goto $l883;
                    {
                        int $tmp892;
                        {
                            ITable* $tmp896 = Iter$235$17875->$class->itable;
                            while ($tmp896->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp896 = $tmp896->next;
                            }
                            $fn898 $tmp897 = $tmp896->methods[1];
                            panda$core$Object* $tmp899 = $tmp897(Iter$235$17875);
                            $tmp895 = $tmp899;
                            $tmp894 = ((org$pandalanguage$pandac$ASTNode*) $tmp895);
                            s893 = $tmp894;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp894));
                            panda$core$Panda$unref$panda$core$Object($tmp895);
                            panda$core$Int64 $tmp900 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s893);
                            panda$core$Int64 $tmp901 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result839, $tmp900);
                            result839 = $tmp901;
                        }
                        $tmp892 = -1;
                        goto $l890;
                        $l890:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s893));
                        s893 = NULL;
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$235$17875));
                Iter$235$17875 = NULL;
                switch ($tmp874) {
                    case -1: goto $l903;
                }
                $l903:;
            }
            $finallyReturn903 = result839;
            $tmp349 = 31;
            goto $l347;
            $l905:;
            return $finallyReturn903;
        }
        }
        else {
        panda$core$Bit $tmp907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9350->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp907.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp909 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9350->$data + 24));
            test908 = *$tmp909;
            panda$collections$ImmutableArray** $tmp911 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9350->$data + 32));
            statements910 = *$tmp911;
            panda$core$Int64 $tmp913 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test908);
            result912 = $tmp913;
            {
                int $tmp916;
                {
                    ITable* $tmp920 = ((panda$collections$Iterable*) statements910)->$class->itable;
                    while ($tmp920->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp920 = $tmp920->next;
                    }
                    $fn922 $tmp921 = $tmp920->methods[0];
                    panda$collections$Iterator* $tmp923 = $tmp921(((panda$collections$Iterable*) statements910));
                    $tmp919 = $tmp923;
                    $tmp918 = $tmp919;
                    Iter$241$17917 = $tmp918;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp918));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp919));
                    $l924:;
                    ITable* $tmp927 = Iter$241$17917->$class->itable;
                    while ($tmp927->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp927 = $tmp927->next;
                    }
                    $fn929 $tmp928 = $tmp927->methods[0];
                    panda$core$Bit $tmp930 = $tmp928(Iter$241$17917);
                    panda$core$Bit $tmp931 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp930);
                    bool $tmp926 = $tmp931.value;
                    if (!$tmp926) goto $l925;
                    {
                        int $tmp934;
                        {
                            ITable* $tmp938 = Iter$241$17917->$class->itable;
                            while ($tmp938->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp938 = $tmp938->next;
                            }
                            $fn940 $tmp939 = $tmp938->methods[1];
                            panda$core$Object* $tmp941 = $tmp939(Iter$241$17917);
                            $tmp937 = $tmp941;
                            $tmp936 = ((org$pandalanguage$pandac$ASTNode*) $tmp937);
                            s935 = $tmp936;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp936));
                            panda$core$Panda$unref$panda$core$Object($tmp937);
                            panda$core$Int64 $tmp942 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s935);
                            panda$core$Int64 $tmp943 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result912, $tmp942);
                            result912 = $tmp943;
                        }
                        $tmp934 = -1;
                        goto $l932;
                        $l932:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s935));
                        s935 = NULL;
                        switch ($tmp934) {
                            case -1: goto $l944;
                        }
                        $l944:;
                    }
                    goto $l924;
                    $l925:;
                }
                $tmp916 = -1;
                goto $l914;
                $l914:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$241$17917));
                Iter$241$17917 = NULL;
                switch ($tmp916) {
                    case -1: goto $l945;
                }
                $l945:;
            }
            $finallyReturn945 = result912;
            $tmp349 = 32;
            goto $l347;
            $l947:;
            return $finallyReturn945;
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
    $tmp349 = -1;
    goto $l347;
    $l347:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp351));
    switch ($tmp349) {
        case 24: goto $l773;
        case 4: goto $l416;
        case 20: goto $l751;
        case 28: goto $l789;
        case 19: goto $l747;
        case 23: goto $l767;
        case 29: goto $l793;
        case 18: goto $l743;
        case 30: goto $l832;
        case 10: goto $l521;
        case 2: goto $l373;
        case 32: goto $l947;
        case 15: goto $l624;
        case 11: goto $l528;
        case 6: goto $l465;
        case 5: goto $l458;
        case 3: goto $l412;
        case 16: goto $l628;
        case 0: goto $l357;
        case 12: goto $l570;
        case 31: goto $l905;
        case 26: goto $l781;
        case 8: goto $l475;
        case 17: goto $l667;
        case 25: goto $l777;
        case -1: goto $l949;
        case 21: goto $l759;
        case 9: goto $l479;
        case 1: goto $l369;
        case 13: goto $l574;
        case 7: goto $l469;
        case 27: goto $l785;
        case 22: goto $l763;
        case 14: goto $l578;
    }
    $l949:;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Object* $tmp952;
    panda$core$Int64 c963;
    panda$collections$Iterator* Iter$254$13967 = NULL;
    panda$collections$Iterator* $tmp968;
    panda$collections$Iterator* $tmp969;
    org$pandalanguage$pandac$ASTNode* s985 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp986;
    panda$core$Object* $tmp987;
    panda$core$Bit $finallyReturn994;
    panda$core$Bit $finallyReturn1000;
    panda$core$Bit $finallyReturn1002;
    panda$core$Object* $tmp954 = (($fn953) self->compiler->$class->vtable[2])(self->compiler);
    $tmp952 = $tmp954;
    panda$core$Bit $tmp955 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp952)->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp951 = $tmp955.value;
    panda$core$Panda$unref$panda$core$Object($tmp952);
    if (!$tmp951) goto $l956;
    panda$core$Bit $tmp957 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp958 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp957);
    $tmp951 = $tmp958.value;
    $l956:;
    panda$core$Bit $tmp959 = { $tmp951 };
    bool $tmp950 = $tmp959.value;
    if (!$tmp950) goto $l960;
    panda$core$Bit $tmp961 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp950 = $tmp961.value;
    $l960:;
    panda$core$Bit $tmp962 = { $tmp950 };
    if ($tmp962.value) {
    {
        c963 = ((panda$core$Int64) { 0 });
        {
            int $tmp966;
            {
                ITable* $tmp970 = ((panda$collections$Iterable*) p_statements)->$class->itable;
                while ($tmp970->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp970 = $tmp970->next;
                }
                $fn972 $tmp971 = $tmp970->methods[0];
                panda$collections$Iterator* $tmp973 = $tmp971(((panda$collections$Iterable*) p_statements));
                $tmp969 = $tmp973;
                $tmp968 = $tmp969;
                Iter$254$13967 = $tmp968;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp968));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp969));
                $l974:;
                ITable* $tmp977 = Iter$254$13967->$class->itable;
                while ($tmp977->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp977 = $tmp977->next;
                }
                $fn979 $tmp978 = $tmp977->methods[0];
                panda$core$Bit $tmp980 = $tmp978(Iter$254$13967);
                panda$core$Bit $tmp981 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp980);
                bool $tmp976 = $tmp981.value;
                if (!$tmp976) goto $l975;
                {
                    int $tmp984;
                    {
                        ITable* $tmp988 = Iter$254$13967->$class->itable;
                        while ($tmp988->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp988 = $tmp988->next;
                        }
                        $fn990 $tmp989 = $tmp988->methods[1];
                        panda$core$Object* $tmp991 = $tmp989(Iter$254$13967);
                        $tmp987 = $tmp991;
                        $tmp986 = ((org$pandalanguage$pandac$ASTNode*) $tmp987);
                        s985 = $tmp986;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp986));
                        panda$core$Panda$unref$panda$core$Object($tmp987);
                        panda$core$Int64 $tmp992 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s985);
                        panda$core$Int64 $tmp993 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c963, $tmp992);
                        c963 = $tmp993;
                        panda$core$Bit $tmp994 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c963, ((panda$core$Int64) { 10 }));
                        if ($tmp994.value) {
                        {
                            $finallyReturn994 = ((panda$core$Bit) { false });
                            $tmp984 = 0;
                            goto $l982;
                            $l996:;
                            $tmp966 = 0;
                            goto $l964;
                            $l997:;
                            return $finallyReturn994;
                        }
                        }
                    }
                    $tmp984 = -1;
                    goto $l982;
                    $l982:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s985));
                    s985 = NULL;
                    switch ($tmp984) {
                        case 0: goto $l996;
                        case -1: goto $l999;
                    }
                    $l999:;
                }
                goto $l974;
                $l975:;
            }
            $tmp966 = -1;
            goto $l964;
            $l964:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$254$13967));
            Iter$254$13967 = NULL;
            switch ($tmp966) {
                case -1: goto $l1000;
                case 0: goto $l997;
            }
            $l1000:;
        }
        $finallyReturn1000 = ((panda$core$Bit) { true });
        return $finallyReturn1000;
    }
    }
    $finallyReturn1002 = ((panda$core$Bit) { false });
    return $finallyReturn1002;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment1008 = NULL;
    panda$core$String* $tmp1009;
    panda$core$String* $tmp1010;
    org$pandalanguage$pandac$ASTNode* $match$275_131014 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1015;
    org$pandalanguage$pandac$Position position1017;
    panda$core$String* text1019 = NULL;
    panda$core$String* $tmp1021;
    panda$core$String* $tmp1022;
    org$pandalanguage$pandac$Annotations* annotations1024 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1025;
    org$pandalanguage$pandac$Annotations* $tmp1026;
    panda$collections$Array* parameters1039 = NULL;
    panda$collections$Array* $tmp1040;
    panda$collections$Array* $tmp1041;
    panda$collections$Iterator* Iter$287$91046 = NULL;
    panda$collections$Iterator* $tmp1047;
    panda$collections$Iterator* $tmp1048;
    org$pandalanguage$pandac$ASTNode* p1064 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1065;
    panda$core$Object* $tmp1066;
    org$pandalanguage$pandac$ASTNode* $match$288_131074 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1075;
    panda$core$String* name1077 = NULL;
    org$pandalanguage$pandac$ASTNode* type1079 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1081;
    org$pandalanguage$pandac$Type* $tmp1083;
    org$pandalanguage$pandac$Type* returnType1088 = NULL;
    org$pandalanguage$pandac$Type* $tmp1089;
    org$pandalanguage$pandac$Type* $tmp1090;
    org$pandalanguage$pandac$Type* $tmp1091;
    org$pandalanguage$pandac$Type* $tmp1093;
    org$pandalanguage$pandac$Type* $tmp1094;
    org$pandalanguage$pandac$Type* $tmp1095;
    org$pandalanguage$pandac$Type* $tmp1100;
    panda$core$Object* $tmp1104;
    panda$core$Object* $tmp1120;
    panda$core$String* $tmp1123;
    panda$core$String* $tmp1124;
    org$pandalanguage$pandac$MethodDecl* $finallyReturn1128;
    org$pandalanguage$pandac$MethodDecl* $tmp1130;
    org$pandalanguage$pandac$MethodDecl* $tmp1131;
    int $tmp1007;
    {
        memset(&doccomment1008, 0, sizeof(doccomment1008));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1009 = doccomment1008;
                $tmp1010 = NULL;
                doccomment1008 = $tmp1010;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1010));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1009));
            }
        }
        }
        else {
        {
            int $tmp1013;
            {
                $tmp1015 = p_rawDoccomment;
                $match$275_131014 = $tmp1015;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1015));
                panda$core$Bit $tmp1016 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$275_131014->$rawValue, ((panda$core$Int64) { 34 }));
                if ($tmp1016.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1018 = ((org$pandalanguage$pandac$Position*) ((char*) $match$275_131014->$data + 0));
                    position1017 = *$tmp1018;
                    panda$core$String** $tmp1020 = ((panda$core$String**) ((char*) $match$275_131014->$data + 16));
                    text1019 = *$tmp1020;
                    {
                        $tmp1021 = doccomment1008;
                        $tmp1022 = text1019;
                        doccomment1008 = $tmp1022;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1022));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1021));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1013 = -1;
            goto $l1011;
            $l1011:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1015));
            switch ($tmp1013) {
                case -1: goto $l1023;
            }
            $l1023:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1027 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1026 = $tmp1027;
        $tmp1025 = $tmp1026;
        annotations1024 = $tmp1025;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1025));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1026));
        panda$core$Bit $tmp1030 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        bool $tmp1029 = $tmp1030.value;
        if (!$tmp1029) goto $l1031;
        panda$core$Bit $tmp1032 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
        $tmp1029 = $tmp1032.value;
        $l1031:;
        panda$core$Bit $tmp1033 = { $tmp1029 };
        bool $tmp1028 = $tmp1033.value;
        if ($tmp1028) goto $l1034;
        panda$core$Bit $tmp1035 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations1024);
        $tmp1028 = $tmp1035.value;
        $l1034:;
        panda$core$Bit $tmp1036 = { $tmp1028 };
        if ($tmp1036.value) {
        {
            panda$core$Int64 $tmp1037 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
            panda$core$Int64 $tmp1038 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1024->flags, $tmp1037);
            annotations1024->flags = $tmp1038;
        }
        }
        panda$collections$Array* $tmp1042 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1042);
        $tmp1041 = $tmp1042;
        $tmp1040 = $tmp1041;
        parameters1039 = $tmp1040;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1040));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1041));
        {
            int $tmp1045;
            {
                ITable* $tmp1049 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1049->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1049 = $tmp1049->next;
                }
                $fn1051 $tmp1050 = $tmp1049->methods[0];
                panda$collections$Iterator* $tmp1052 = $tmp1050(((panda$collections$Iterable*) p_rawParameters));
                $tmp1048 = $tmp1052;
                $tmp1047 = $tmp1048;
                Iter$287$91046 = $tmp1047;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1047));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1048));
                $l1053:;
                ITable* $tmp1056 = Iter$287$91046->$class->itable;
                while ($tmp1056->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1056 = $tmp1056->next;
                }
                $fn1058 $tmp1057 = $tmp1056->methods[0];
                panda$core$Bit $tmp1059 = $tmp1057(Iter$287$91046);
                panda$core$Bit $tmp1060 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1059);
                bool $tmp1055 = $tmp1060.value;
                if (!$tmp1055) goto $l1054;
                {
                    int $tmp1063;
                    {
                        ITable* $tmp1067 = Iter$287$91046->$class->itable;
                        while ($tmp1067->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1067 = $tmp1067->next;
                        }
                        $fn1069 $tmp1068 = $tmp1067->methods[1];
                        panda$core$Object* $tmp1070 = $tmp1068(Iter$287$91046);
                        $tmp1066 = $tmp1070;
                        $tmp1065 = ((org$pandalanguage$pandac$ASTNode*) $tmp1066);
                        p1064 = $tmp1065;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1065));
                        panda$core$Panda$unref$panda$core$Object($tmp1066);
                        int $tmp1073;
                        {
                            $tmp1075 = p1064;
                            $match$288_131074 = $tmp1075;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1075));
                            panda$core$Bit $tmp1076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$288_131074->$rawValue, ((panda$core$Int64) { 28 }));
                            if ($tmp1076.value) {
                            {
                                panda$core$String** $tmp1078 = ((panda$core$String**) ((char*) $match$288_131074->$data + 16));
                                name1077 = *$tmp1078;
                                org$pandalanguage$pandac$ASTNode** $tmp1080 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$288_131074->$data + 24));
                                type1079 = *$tmp1080;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1082 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1084 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1079);
                                $tmp1083 = $tmp1084;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1082, name1077, $tmp1083);
                                $tmp1081 = $tmp1082;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1039, ((panda$core$Object*) $tmp1081));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1081));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1083));
                            }
                            }
                            else {
                            {
                                PANDA_ASSERT(((panda$core$Bit) { false }).value);
                            }
                            }
                        }
                        $tmp1073 = -1;
                        goto $l1071;
                        $l1071:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1075));
                        switch ($tmp1073) {
                            case -1: goto $l1085;
                        }
                        $l1085:;
                    }
                    $tmp1063 = -1;
                    goto $l1061;
                    $l1061:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1064));
                    p1064 = NULL;
                    switch ($tmp1063) {
                        case -1: goto $l1086;
                    }
                    $l1086:;
                }
                goto $l1053;
                $l1054:;
            }
            $tmp1045 = -1;
            goto $l1043;
            $l1043:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$287$91046));
            Iter$287$91046 = NULL;
            switch ($tmp1045) {
                case -1: goto $l1087;
            }
            $l1087:;
        }
        memset(&returnType1088, 0, sizeof(returnType1088));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1089 = returnType1088;
                org$pandalanguage$pandac$Type* $tmp1092 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1091 = $tmp1092;
                $tmp1090 = $tmp1091;
                returnType1088 = $tmp1090;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1090));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1091));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1089));
            }
        }
        }
        else {
        {
            {
                $tmp1093 = returnType1088;
                org$pandalanguage$pandac$Type* $tmp1096 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1095 = $tmp1096;
                $tmp1094 = $tmp1095;
                returnType1088 = $tmp1094;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1094));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1095));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1093));
            }
        }
        }
        panda$core$Bit $tmp1098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
        bool $tmp1097 = $tmp1098.value;
        if (!$tmp1097) goto $l1099;
        org$pandalanguage$pandac$Type* $tmp1101 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1100 = $tmp1101;
        panda$core$Bit $tmp1102 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1088, $tmp1100);
        $tmp1097 = $tmp1102.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1100));
        $l1099:;
        panda$core$Bit $tmp1103 = { $tmp1097 };
        if ($tmp1103.value) {
        {
            panda$core$Object* $tmp1106 = (($fn1105) self->compiler->$class->vtable[2])(self->compiler);
            $tmp1104 = $tmp1106;
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1104), p_position, &$s1107);
            panda$core$Panda$unref$panda$core$Object($tmp1104);
        }
        }
        bool $tmp1108 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1108) goto $l1109;
        panda$core$Bit $tmp1110 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1024, p_statements);
        $tmp1108 = $tmp1110.value;
        $l1109:;
        panda$core$Bit $tmp1111 = { $tmp1108 };
        if ($tmp1111.value) {
        {
            panda$core$Int64 $tmp1112 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp1113 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1024->flags, $tmp1112);
            annotations1024->flags = $tmp1113;
        }
        }
        if (((panda$core$Bit) { p_statements == NULL }).value) {
        {
            panda$core$Bit $tmp1114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1114.value) {
            {
                panda$core$Int64 $tmp1115 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                panda$core$Int64 $tmp1116 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1024->flags, $tmp1115);
                annotations1024->flags = $tmp1116;
            }
            }
            else {
            panda$core$Int64 $tmp1117 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
            panda$core$Int64 $tmp1118 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1024->flags, $tmp1117);
            panda$core$Bit $tmp1119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1118, ((panda$core$Int64) { 0 }));
            if ($tmp1119.value) {
            {
                panda$core$Object* $tmp1122 = (($fn1121) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1120 = $tmp1122;
                panda$core$String* $tmp1126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1125, p_name);
                $tmp1124 = $tmp1126;
                panda$core$String* $tmp1128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1124, &$s1127);
                $tmp1123 = $tmp1128;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1120), p_position, $tmp1123);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1123));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1124));
                panda$core$Panda$unref$panda$core$Object($tmp1120);
            }
            }
            }
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1132 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1132, p_owner, p_position, doccomment1008, annotations1024, p_kind, p_name, parameters1039, returnType1088, p_statements);
        $tmp1131 = $tmp1132;
        $tmp1130 = $tmp1131;
        $finallyReturn1128 = $tmp1130;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1131));
        $tmp1007 = 0;
        goto $l1005;
        $l1133:;
        return $finallyReturn1128;
    }
    $l1005:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1008));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1024));
    annotations1024 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1039));
    parameters1039 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1088));
    switch ($tmp1007) {
        case 0: goto $l1133;
    }
    $l1135:;
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$321_91139 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1140;
    org$pandalanguage$pandac$Position position1142;
    org$pandalanguage$pandac$ASTNode* dc1144 = NULL;
    panda$collections$ImmutableArray* annotations1146 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1148 = NULL;
    org$pandalanguage$pandac$Position position1151;
    org$pandalanguage$pandac$ASTNode* dc1153 = NULL;
    panda$collections$ImmutableArray* annotations1155 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1157;
    panda$core$String* name1159 = NULL;
    panda$collections$ImmutableArray* parameters1161 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType1163 = NULL;
    panda$collections$ImmutableArray* statements1165 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1170 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1171;
    org$pandalanguage$pandac$MethodDecl* $tmp1172;
    org$pandalanguage$pandac$Position position1176;
    org$pandalanguage$pandac$ASTNode* dc1178 = NULL;
    panda$collections$ImmutableArray* annotations1180 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1182;
    panda$core$String* name1184 = NULL;
    panda$collections$ImmutableArray* generics1186 = NULL;
    panda$collections$ImmutableArray* supertypes1188 = NULL;
    panda$collections$ImmutableArray* members1190 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1195 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1196;
    org$pandalanguage$pandac$ClassDecl* $tmp1197;
    panda$core$Weak* $tmp1199;
    panda$core$Weak* $tmp1200;
    panda$core$Weak* $tmp1201;
    panda$core$String* $tmp1203;
    org$pandalanguage$pandac$Alias* $tmp1207;
    panda$core$String* $tmp1209;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1210;
    org$pandalanguage$pandac$Position $tmp1214;
    org$pandalanguage$pandac$Alias* $tmp1215;
    panda$core$String* $tmp1217;
    org$pandalanguage$pandac$Position $tmp1219;
    org$pandalanguage$pandac$Position position1222;
    org$pandalanguage$pandac$ASTNode* dc1224 = NULL;
    panda$core$String* name1226 = NULL;
    panda$collections$ImmutableArray* fields1228 = NULL;
    int $tmp1138;
    {
        $tmp1140 = p_node;
        $match$321_91139 = $tmp1140;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1140));
        panda$core$Bit $tmp1141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_91139->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1141.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1143 = ((org$pandalanguage$pandac$Position*) ((char*) $match$321_91139->$data + 0));
            position1142 = *$tmp1143;
            org$pandalanguage$pandac$ASTNode** $tmp1145 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$321_91139->$data + 16));
            dc1144 = *$tmp1145;
            panda$collections$ImmutableArray** $tmp1147 = ((panda$collections$ImmutableArray**) ((char*) $match$321_91139->$data + 24));
            annotations1146 = *$tmp1147;
            org$pandalanguage$pandac$ASTNode** $tmp1149 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$321_91139->$data + 32));
            varDecl1148 = *$tmp1149;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1142, dc1144, annotations1146, varDecl1148);
        }
        }
        else {
        panda$core$Bit $tmp1150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_91139->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1150.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1152 = ((org$pandalanguage$pandac$Position*) ((char*) $match$321_91139->$data + 0));
            position1151 = *$tmp1152;
            org$pandalanguage$pandac$ASTNode** $tmp1154 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$321_91139->$data + 16));
            dc1153 = *$tmp1154;
            panda$collections$ImmutableArray** $tmp1156 = ((panda$collections$ImmutableArray**) ((char*) $match$321_91139->$data + 24));
            annotations1155 = *$tmp1156;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1158 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$321_91139->$data + 32));
            kind1157 = *$tmp1158;
            panda$core$String** $tmp1160 = ((panda$core$String**) ((char*) $match$321_91139->$data + 40));
            name1159 = *$tmp1160;
            panda$collections$ImmutableArray** $tmp1162 = ((panda$collections$ImmutableArray**) ((char*) $match$321_91139->$data + 48));
            parameters1161 = *$tmp1162;
            org$pandalanguage$pandac$ASTNode** $tmp1164 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$321_91139->$data + 56));
            rawReturnType1163 = *$tmp1164;
            panda$collections$ImmutableArray** $tmp1166 = ((panda$collections$ImmutableArray**) ((char*) $match$321_91139->$data + 64));
            statements1165 = *$tmp1166;
            int $tmp1169;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1173 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1151, dc1153, annotations1155, kind1157, name1159, parameters1161, rawReturnType1163, statements1165);
                $tmp1172 = $tmp1173;
                $tmp1171 = $tmp1172;
                m1170 = $tmp1171;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1171));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1172));
                if (((panda$core$Bit) { m1170 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1170));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1170));
                }
                }
            }
            $tmp1169 = -1;
            goto $l1167;
            $l1167:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1170));
            m1170 = NULL;
            switch ($tmp1169) {
                case -1: goto $l1174;
            }
            $l1174:;
        }
        }
        else {
        panda$core$Bit $tmp1175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_91139->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1175.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1177 = ((org$pandalanguage$pandac$Position*) ((char*) $match$321_91139->$data + 0));
            position1176 = *$tmp1177;
            org$pandalanguage$pandac$ASTNode** $tmp1179 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$321_91139->$data + 16));
            dc1178 = *$tmp1179;
            panda$collections$ImmutableArray** $tmp1181 = ((panda$collections$ImmutableArray**) ((char*) $match$321_91139->$data + 24));
            annotations1180 = *$tmp1181;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1183 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$321_91139->$data + 32));
            kind1182 = *$tmp1183;
            panda$core$String** $tmp1185 = ((panda$core$String**) ((char*) $match$321_91139->$data + 40));
            name1184 = *$tmp1185;
            panda$collections$ImmutableArray** $tmp1187 = ((panda$collections$ImmutableArray**) ((char*) $match$321_91139->$data + 48));
            generics1186 = *$tmp1187;
            panda$collections$ImmutableArray** $tmp1189 = ((panda$collections$ImmutableArray**) ((char*) $match$321_91139->$data + 56));
            supertypes1188 = *$tmp1189;
            panda$collections$ImmutableArray** $tmp1191 = ((panda$collections$ImmutableArray**) ((char*) $match$321_91139->$data + 64));
            members1190 = *$tmp1191;
            int $tmp1194;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1198 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, p_cl->name, position1176, dc1178, annotations1180, kind1182, name1184, generics1186, supertypes1188, members1190);
                $tmp1197 = $tmp1198;
                $tmp1196 = $tmp1197;
                inner1195 = $tmp1196;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1196));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1197));
                if (((panda$core$Bit) { inner1195 != NULL }).value) {
                {
                    {
                        $tmp1199 = inner1195->owner;
                        panda$core$Weak* $tmp1202 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp1202, ((panda$core$Object*) p_cl));
                        $tmp1201 = $tmp1202;
                        $tmp1200 = $tmp1201;
                        inner1195->owner = $tmp1200;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1200));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1201));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1199));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1195));
                    panda$core$String* $tmp1205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_cl->name, &$s1204);
                    $tmp1203 = $tmp1205;
                    panda$core$Bit $tmp1206 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(inner1195->name, $tmp1203);
                    PANDA_ASSERT($tmp1206.value);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1203));
                    org$pandalanguage$pandac$Alias* $tmp1208 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$Int64 $tmp1211 = panda$core$String$length$R$panda$core$Int64(p_cl->name);
                    panda$core$Int64 $tmp1212 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1211, ((panda$core$Int64) { 1 }));
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1210, ((panda$core$Int64$nullable) { $tmp1212, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                    panda$core$String* $tmp1213 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(inner1195->name, $tmp1210);
                    $tmp1209 = $tmp1213;
                    org$pandalanguage$pandac$Position$init(&$tmp1214);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1208, $tmp1209, inner1195->name, $tmp1214);
                    $tmp1207 = $tmp1208;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1207));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1207));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1209));
                    org$pandalanguage$pandac$Alias* $tmp1216 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$String* $tmp1218 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1217 = $tmp1218;
                    org$pandalanguage$pandac$Position$init(&$tmp1219);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1216, $tmp1217, p_cl->name, $tmp1219);
                    $tmp1215 = $tmp1216;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(inner1195->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1215));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1215));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1217));
                }
                }
            }
            $tmp1194 = -1;
            goto $l1192;
            $l1192:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1195));
            inner1195 = NULL;
            switch ($tmp1194) {
                case -1: goto $l1220;
            }
            $l1220:;
        }
        }
        else {
        panda$core$Bit $tmp1221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_91139->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1221.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1223 = ((org$pandalanguage$pandac$Position*) ((char*) $match$321_91139->$data + 0));
            position1222 = *$tmp1223;
            org$pandalanguage$pandac$ASTNode** $tmp1225 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$321_91139->$data + 16));
            dc1224 = *$tmp1225;
            panda$core$String** $tmp1227 = ((panda$core$String**) ((char*) $match$321_91139->$data + 24));
            name1226 = *$tmp1227;
            panda$collections$ImmutableArray** $tmp1229 = ((panda$collections$ImmutableArray**) ((char*) $match$321_91139->$data + 32));
            fields1228 = *$tmp1229;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1222, dc1224, name1226, fields1228);
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
    $tmp1138 = -1;
    goto $l1136;
    $l1136:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1140));
    switch ($tmp1138) {
        case -1: goto $l1230;
    }
    $l1230:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1234 = NULL;
    panda$core$String* $tmp1235;
    panda$core$String* $tmp1236;
    org$pandalanguage$pandac$ASTNode* $match$359_131240 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1241;
    org$pandalanguage$pandac$Position position1243;
    panda$core$String* text1245 = NULL;
    panda$core$String* $tmp1247;
    panda$core$String* $tmp1248;
    panda$collections$Array* fields1250 = NULL;
    panda$collections$Array* $tmp1251;
    panda$collections$Array* $tmp1252;
    panda$collections$Iterator* Iter$367$91257 = NULL;
    panda$collections$Iterator* $tmp1258;
    panda$collections$Iterator* $tmp1259;
    org$pandalanguage$pandac$ASTNode* t1275 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1276;
    panda$core$Object* $tmp1277;
    org$pandalanguage$pandac$Type* $tmp1282;
    org$pandalanguage$pandac$ChoiceEntry* entry1286 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1287;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1288;
    int $tmp1233;
    {
        memset(&doccomment1234, 0, sizeof(doccomment1234));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1235 = doccomment1234;
                $tmp1236 = NULL;
                doccomment1234 = $tmp1236;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1236));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1235));
            }
        }
        }
        else {
        {
            int $tmp1239;
            {
                $tmp1241 = p_rawDoccomment;
                $match$359_131240 = $tmp1241;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1241));
                panda$core$Bit $tmp1242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$359_131240->$rawValue, ((panda$core$Int64) { 34 }));
                if ($tmp1242.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1244 = ((org$pandalanguage$pandac$Position*) ((char*) $match$359_131240->$data + 0));
                    position1243 = *$tmp1244;
                    panda$core$String** $tmp1246 = ((panda$core$String**) ((char*) $match$359_131240->$data + 16));
                    text1245 = *$tmp1246;
                    {
                        $tmp1247 = doccomment1234;
                        $tmp1248 = text1245;
                        doccomment1234 = $tmp1248;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1248));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1247));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1239 = -1;
            goto $l1237;
            $l1237:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1241));
            switch ($tmp1239) {
                case -1: goto $l1249;
            }
            $l1249:;
        }
        }
        panda$collections$Array* $tmp1253 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1253);
        $tmp1252 = $tmp1253;
        $tmp1251 = $tmp1252;
        fields1250 = $tmp1251;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1251));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1252));
        {
            int $tmp1256;
            {
                ITable* $tmp1260 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1260->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1260 = $tmp1260->next;
                }
                $fn1262 $tmp1261 = $tmp1260->methods[0];
                panda$collections$Iterator* $tmp1263 = $tmp1261(((panda$collections$Iterable*) p_rawFields));
                $tmp1259 = $tmp1263;
                $tmp1258 = $tmp1259;
                Iter$367$91257 = $tmp1258;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1258));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1259));
                $l1264:;
                ITable* $tmp1267 = Iter$367$91257->$class->itable;
                while ($tmp1267->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1267 = $tmp1267->next;
                }
                $fn1269 $tmp1268 = $tmp1267->methods[0];
                panda$core$Bit $tmp1270 = $tmp1268(Iter$367$91257);
                panda$core$Bit $tmp1271 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1270);
                bool $tmp1266 = $tmp1271.value;
                if (!$tmp1266) goto $l1265;
                {
                    int $tmp1274;
                    {
                        ITable* $tmp1278 = Iter$367$91257->$class->itable;
                        while ($tmp1278->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1278 = $tmp1278->next;
                        }
                        $fn1280 $tmp1279 = $tmp1278->methods[1];
                        panda$core$Object* $tmp1281 = $tmp1279(Iter$367$91257);
                        $tmp1277 = $tmp1281;
                        $tmp1276 = ((org$pandalanguage$pandac$ASTNode*) $tmp1277);
                        t1275 = $tmp1276;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1276));
                        panda$core$Panda$unref$panda$core$Object($tmp1277);
                        org$pandalanguage$pandac$Type* $tmp1283 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1275);
                        $tmp1282 = $tmp1283;
                        panda$collections$Array$add$panda$collections$Array$T(fields1250, ((panda$core$Object*) $tmp1282));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1282));
                    }
                    $tmp1274 = -1;
                    goto $l1272;
                    $l1272:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1275));
                    t1275 = NULL;
                    switch ($tmp1274) {
                        case -1: goto $l1284;
                    }
                    $l1284:;
                }
                goto $l1264;
                $l1265:;
            }
            $tmp1256 = -1;
            goto $l1254;
            $l1254:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$367$91257));
            Iter$367$91257 = NULL;
            switch ($tmp1256) {
                case -1: goto $l1285;
            }
            $l1285:;
        }
        org$pandalanguage$pandac$ChoiceEntry* $tmp1289 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(97, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
        panda$core$Int64 $tmp1290 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
        org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1289, p_cl, p_position, p_name, doccomment1234, $tmp1290, ((panda$collections$ListView*) fields1250));
        $tmp1288 = $tmp1289;
        $tmp1287 = $tmp1288;
        entry1286 = $tmp1287;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1287));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1288));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry1286));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1286));
    }
    $tmp1233 = -1;
    goto $l1231;
    $l1231:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1234));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1250));
    fields1250 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1286));
    entry1286 = NULL;
    switch ($tmp1233) {
        case -1: goto $l1291;
    }
    $l1291:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1295 = NULL;
    panda$core$String* $tmp1298;
    panda$core$String* $tmp1299;
    panda$core$String* $tmp1300;
    panda$core$String* $tmp1301;
    panda$core$String* $tmp1302;
    panda$core$String* $tmp1303;
    panda$core$String* $tmp1310;
    panda$core$String* $tmp1311;
    panda$core$String* doccomment1312 = NULL;
    panda$core$String* $tmp1313;
    panda$core$String* $tmp1314;
    org$pandalanguage$pandac$ASTNode* $match$393_131318 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1319;
    org$pandalanguage$pandac$Position position1321;
    panda$core$String* text1323 = NULL;
    panda$core$String* $tmp1325;
    panda$core$String* $tmp1326;
    org$pandalanguage$pandac$Annotations* annotations1328 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1329;
    org$pandalanguage$pandac$Annotations* $tmp1330;
    panda$collections$Array* parameters1332 = NULL;
    panda$collections$Array* $tmp1333;
    panda$collections$Array* $tmp1334;
    panda$collections$Iterator* Iter$403$131339 = NULL;
    panda$collections$Iterator* $tmp1340;
    panda$collections$Iterator* $tmp1341;
    org$pandalanguage$pandac$ASTNode* p1357 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1358;
    panda$core$Object* $tmp1359;
    panda$core$String* name1364 = NULL;
    org$pandalanguage$pandac$Type* bound1365 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$406_171369 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1370;
    panda$core$String* id1372 = NULL;
    panda$core$String* $tmp1374;
    panda$core$String* $tmp1375;
    org$pandalanguage$pandac$Type* $tmp1376;
    org$pandalanguage$pandac$Type* $tmp1377;
    org$pandalanguage$pandac$Type* $tmp1378;
    panda$core$String* id1381 = NULL;
    org$pandalanguage$pandac$ASTNode* type1383 = NULL;
    panda$core$String* $tmp1385;
    panda$core$String* $tmp1386;
    org$pandalanguage$pandac$Type* $tmp1387;
    org$pandalanguage$pandac$Type* $tmp1388;
    org$pandalanguage$pandac$Type* $tmp1389;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1392;
    panda$core$Object* $tmp1399;
    panda$collections$Array* supertypes1403 = NULL;
    panda$collections$Array* $tmp1404;
    panda$collections$Array* $tmp1405;
    panda$core$Object* $tmp1408;
    panda$collections$Iterator* Iter$427$131415 = NULL;
    panda$collections$Iterator* $tmp1416;
    panda$collections$Iterator* $tmp1417;
    org$pandalanguage$pandac$ASTNode* s1433 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1434;
    panda$core$Object* $tmp1435;
    org$pandalanguage$pandac$Type* $tmp1440;
    org$pandalanguage$pandac$ClassDecl* result1444 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1445;
    org$pandalanguage$pandac$ClassDecl* $tmp1446;
    panda$core$Object* $tmp1448;
    panda$core$Object* $tmp1451;
    org$pandalanguage$pandac$FieldDecl* rawValue1458 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1459;
    org$pandalanguage$pandac$FieldDecl* $tmp1460;
    org$pandalanguage$pandac$Annotations* $tmp1462;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1464;
    org$pandalanguage$pandac$Type* $tmp1466;
    org$pandalanguage$pandac$FieldDecl* data1468 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1469;
    org$pandalanguage$pandac$FieldDecl* $tmp1470;
    org$pandalanguage$pandac$Annotations* $tmp1472;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1474;
    org$pandalanguage$pandac$Type* $tmp1476;
    panda$collections$Iterator* Iter$444$91482 = NULL;
    panda$collections$Iterator* $tmp1483;
    panda$collections$Iterator* $tmp1484;
    org$pandalanguage$pandac$ASTNode* m1500 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1501;
    panda$core$Object* $tmp1502;
    org$pandalanguage$pandac$ASTNode* $match$445_131510 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1511;
    org$pandalanguage$pandac$Position mPosition1513;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1515;
    org$pandalanguage$pandac$ClassDecl$Kind $match$448_251518;
    panda$core$Object* $tmp1521;
    panda$core$Object* $tmp1526;
    panda$core$Bit foundInit1533;
    panda$core$Bit foundCleanup1534;
    panda$collections$Iterator* Iter$463$91538 = NULL;
    panda$collections$Iterator* $tmp1539;
    panda$collections$Iterator* $tmp1540;
    org$pandalanguage$pandac$MethodDecl* m1556 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1557;
    panda$core$Object* $tmp1558;
    panda$core$Object* $tmp1572;
    org$pandalanguage$pandac$MethodDecl* defaultInit1591 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1592;
    org$pandalanguage$pandac$MethodDecl* $tmp1593;
    org$pandalanguage$pandac$Annotations* $tmp1595;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1597;
    panda$collections$Array* $tmp1599;
    org$pandalanguage$pandac$Type* $tmp1601;
    panda$collections$ImmutableArray* $tmp1603;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1623 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1624;
    org$pandalanguage$pandac$MethodDecl* $tmp1625;
    org$pandalanguage$pandac$Annotations* $tmp1627;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1630;
    panda$collections$Array* $tmp1632;
    org$pandalanguage$pandac$Type* $tmp1634;
    panda$collections$ImmutableArray* $tmp1636;
    panda$core$Bit haveFields1640;
    panda$collections$Iterator* Iter$491$131644 = NULL;
    panda$collections$Iterator* $tmp1645;
    panda$collections$Iterator* $tmp1646;
    org$pandalanguage$pandac$ChoiceEntry* e1662 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1663;
    panda$core$Object* $tmp1664;
    org$pandalanguage$pandac$Type* $tmp1675;
    org$pandalanguage$pandac$Type* $tmp1676;
    org$pandalanguage$pandac$Type* $tmp1677;
    panda$core$Object* $tmp1679;
    panda$core$Object* $tmp1680;
    org$pandalanguage$pandac$ClassDecl* $finallyReturn1683;
    org$pandalanguage$pandac$ClassDecl* $tmp1685;
    int $tmp1294;
    {
        memset(&fullName1295, 0, sizeof(fullName1295));
        panda$core$Bit $tmp1297 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s1296);
        if ($tmp1297.value) {
        {
            {
                $tmp1298 = fullName1295;
                panda$core$String* $tmp1304 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1303 = $tmp1304;
                panda$core$String* $tmp1306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1303, &$s1305);
                $tmp1302 = $tmp1306;
                panda$core$String* $tmp1307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1302, p_name);
                $tmp1301 = $tmp1307;
                panda$core$String* $tmp1309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1301, &$s1308);
                $tmp1300 = $tmp1309;
                $tmp1299 = $tmp1300;
                fullName1295 = $tmp1299;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1299));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1300));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1301));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1302));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1303));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1298));
            }
        }
        }
        else {
        {
            {
                $tmp1310 = fullName1295;
                $tmp1311 = p_name;
                fullName1295 = $tmp1311;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1311));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1310));
            }
        }
        }
        memset(&doccomment1312, 0, sizeof(doccomment1312));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1313 = doccomment1312;
                $tmp1314 = NULL;
                doccomment1312 = $tmp1314;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1314));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1313));
            }
        }
        }
        else {
        {
            int $tmp1317;
            {
                $tmp1319 = p_rawDoccomment;
                $match$393_131318 = $tmp1319;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1319));
                panda$core$Bit $tmp1320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$393_131318->$rawValue, ((panda$core$Int64) { 34 }));
                if ($tmp1320.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1322 = ((org$pandalanguage$pandac$Position*) ((char*) $match$393_131318->$data + 0));
                    position1321 = *$tmp1322;
                    panda$core$String** $tmp1324 = ((panda$core$String**) ((char*) $match$393_131318->$data + 16));
                    text1323 = *$tmp1324;
                    {
                        $tmp1325 = doccomment1312;
                        $tmp1326 = text1323;
                        doccomment1312 = $tmp1326;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1326));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1325));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1317 = -1;
            goto $l1315;
            $l1315:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1319));
            switch ($tmp1317) {
                case -1: goto $l1327;
            }
            $l1327:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1331 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1330 = $tmp1331;
        $tmp1329 = $tmp1330;
        annotations1328 = $tmp1329;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1329));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1330));
        panda$collections$Array* $tmp1335 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1335);
        $tmp1334 = $tmp1335;
        $tmp1333 = $tmp1334;
        parameters1332 = $tmp1333;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1333));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1334));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1338;
                {
                    ITable* $tmp1342 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1342->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1342 = $tmp1342->next;
                    }
                    $fn1344 $tmp1343 = $tmp1342->methods[0];
                    panda$collections$Iterator* $tmp1345 = $tmp1343(((panda$collections$Iterable*) p_generics));
                    $tmp1341 = $tmp1345;
                    $tmp1340 = $tmp1341;
                    Iter$403$131339 = $tmp1340;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1340));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1341));
                    $l1346:;
                    ITable* $tmp1349 = Iter$403$131339->$class->itable;
                    while ($tmp1349->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1349 = $tmp1349->next;
                    }
                    $fn1351 $tmp1350 = $tmp1349->methods[0];
                    panda$core$Bit $tmp1352 = $tmp1350(Iter$403$131339);
                    panda$core$Bit $tmp1353 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1352);
                    bool $tmp1348 = $tmp1353.value;
                    if (!$tmp1348) goto $l1347;
                    {
                        int $tmp1356;
                        {
                            ITable* $tmp1360 = Iter$403$131339->$class->itable;
                            while ($tmp1360->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1360 = $tmp1360->next;
                            }
                            $fn1362 $tmp1361 = $tmp1360->methods[1];
                            panda$core$Object* $tmp1363 = $tmp1361(Iter$403$131339);
                            $tmp1359 = $tmp1363;
                            $tmp1358 = ((org$pandalanguage$pandac$ASTNode*) $tmp1359);
                            p1357 = $tmp1358;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1358));
                            panda$core$Panda$unref$panda$core$Object($tmp1359);
                            memset(&name1364, 0, sizeof(name1364));
                            memset(&bound1365, 0, sizeof(bound1365));
                            int $tmp1368;
                            {
                                $tmp1370 = p1357;
                                $match$406_171369 = $tmp1370;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1370));
                                panda$core$Bit $tmp1371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$406_171369->$rawValue, ((panda$core$Int64) { 18 }));
                                if ($tmp1371.value) {
                                {
                                    panda$core$String** $tmp1373 = ((panda$core$String**) ((char*) $match$406_171369->$data + 16));
                                    id1372 = *$tmp1373;
                                    {
                                        $tmp1374 = name1364;
                                        $tmp1375 = id1372;
                                        name1364 = $tmp1375;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1375));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1374));
                                    }
                                    {
                                        $tmp1376 = bound1365;
                                        org$pandalanguage$pandac$Type* $tmp1379 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1378 = $tmp1379;
                                        $tmp1377 = $tmp1378;
                                        bound1365 = $tmp1377;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1377));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1378));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1376));
                                    }
                                }
                                }
                                else {
                                panda$core$Bit $tmp1380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$406_171369->$rawValue, ((panda$core$Int64) { 37 }));
                                if ($tmp1380.value) {
                                {
                                    panda$core$String** $tmp1382 = ((panda$core$String**) ((char*) $match$406_171369->$data + 16));
                                    id1381 = *$tmp1382;
                                    org$pandalanguage$pandac$ASTNode** $tmp1384 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$406_171369->$data + 24));
                                    type1383 = *$tmp1384;
                                    {
                                        $tmp1385 = name1364;
                                        $tmp1386 = id1381;
                                        name1364 = $tmp1386;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1386));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1385));
                                    }
                                    {
                                        $tmp1387 = bound1365;
                                        org$pandalanguage$pandac$Type* $tmp1390 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1383);
                                        $tmp1389 = $tmp1390;
                                        $tmp1388 = $tmp1389;
                                        bound1365 = $tmp1388;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1388));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1389));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1387));
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
                            $tmp1368 = -1;
                            goto $l1366;
                            $l1366:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1370));
                            switch ($tmp1368) {
                                case -1: goto $l1391;
                            }
                            $l1391:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1393 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1395 = (($fn1394) p1357->$class->vtable[2])(p1357);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1393, $tmp1395, fullName1295, name1364, bound1365);
                            $tmp1392 = $tmp1393;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1332, ((panda$core$Object*) $tmp1392));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1392));
                        }
                        $tmp1356 = -1;
                        goto $l1354;
                        $l1354:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1357));
                        p1357 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1364));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1365));
                        switch ($tmp1356) {
                            case -1: goto $l1396;
                        }
                        $l1396:;
                    }
                    goto $l1346;
                    $l1347:;
                }
                $tmp1338 = -1;
                goto $l1336;
                $l1336:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$403$131339));
                Iter$403$131339 = NULL;
                switch ($tmp1338) {
                    case -1: goto $l1397;
                }
                $l1397:;
            }
            panda$core$Bit $tmp1398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1398.value) {
            {
                panda$core$Object* $tmp1401 = (($fn1400) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1399 = $tmp1401;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1399), p_position, &$s1402);
                panda$core$Panda$unref$panda$core$Object($tmp1399);
            }
            }
        }
        }
        panda$collections$Array* $tmp1406 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1406);
        $tmp1405 = $tmp1406;
        $tmp1404 = $tmp1405;
        supertypes1403 = $tmp1404;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1404));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1405));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Bit $tmp1407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1407.value) {
            {
                panda$core$Object* $tmp1410 = (($fn1409) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1408 = $tmp1410;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1408), p_position, &$s1411);
                panda$core$Panda$unref$panda$core$Object($tmp1408);
            }
            }
            {
                int $tmp1414;
                {
                    ITable* $tmp1418 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1418->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1418 = $tmp1418->next;
                    }
                    $fn1420 $tmp1419 = $tmp1418->methods[0];
                    panda$collections$Iterator* $tmp1421 = $tmp1419(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1417 = $tmp1421;
                    $tmp1416 = $tmp1417;
                    Iter$427$131415 = $tmp1416;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1416));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1417));
                    $l1422:;
                    ITable* $tmp1425 = Iter$427$131415->$class->itable;
                    while ($tmp1425->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1425 = $tmp1425->next;
                    }
                    $fn1427 $tmp1426 = $tmp1425->methods[0];
                    panda$core$Bit $tmp1428 = $tmp1426(Iter$427$131415);
                    panda$core$Bit $tmp1429 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1428);
                    bool $tmp1424 = $tmp1429.value;
                    if (!$tmp1424) goto $l1423;
                    {
                        int $tmp1432;
                        {
                            ITable* $tmp1436 = Iter$427$131415->$class->itable;
                            while ($tmp1436->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1436 = $tmp1436->next;
                            }
                            $fn1438 $tmp1437 = $tmp1436->methods[1];
                            panda$core$Object* $tmp1439 = $tmp1437(Iter$427$131415);
                            $tmp1435 = $tmp1439;
                            $tmp1434 = ((org$pandalanguage$pandac$ASTNode*) $tmp1435);
                            s1433 = $tmp1434;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1434));
                            panda$core$Panda$unref$panda$core$Object($tmp1435);
                            org$pandalanguage$pandac$Type* $tmp1441 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1433);
                            $tmp1440 = $tmp1441;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1403, ((panda$core$Object*) $tmp1440));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1440));
                        }
                        $tmp1432 = -1;
                        goto $l1430;
                        $l1430:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1433));
                        s1433 = NULL;
                        switch ($tmp1432) {
                            case -1: goto $l1442;
                        }
                        $l1442:;
                    }
                    goto $l1422;
                    $l1423:;
                }
                $tmp1414 = -1;
                goto $l1412;
                $l1412:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$427$131415));
                Iter$427$131415 = NULL;
                switch ($tmp1414) {
                    case -1: goto $l1443;
                }
                $l1443:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1447 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1450 = (($fn1449) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1448 = $tmp1450;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1447, p_source, p_position, p_aliases, doccomment1312, annotations1328, p_kind, fullName1295, ((panda$collections$ListView*) supertypes1403), parameters1332, ((org$pandalanguage$pandac$Compiler*) $tmp1448)->root);
        $tmp1446 = $tmp1447;
        $tmp1445 = $tmp1446;
        result1444 = $tmp1445;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1445));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1446));
        panda$core$Panda$unref$panda$core$Object($tmp1448);
        panda$core$Object* $tmp1453 = (($fn1452) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1451 = $tmp1453;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1451)->currentClass, ((panda$core$Object*) result1444));
        panda$core$Panda$unref$panda$core$Object($tmp1451);
        panda$core$Bit $tmp1454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1454.value) {
        {
            int $tmp1457;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1461 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1463 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1463);
                $tmp1462 = $tmp1463;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1464, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1467 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1466 = $tmp1467;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1461, result1444, result1444->position, NULL, $tmp1462, $tmp1464, &$s1465, $tmp1466, NULL);
                $tmp1460 = $tmp1461;
                $tmp1459 = $tmp1460;
                rawValue1458 = $tmp1459;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1459));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1460));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1466));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1462));
                panda$collections$Array$add$panda$collections$Array$T(result1444->fields, ((panda$core$Object*) rawValue1458));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1444->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1458));
                org$pandalanguage$pandac$FieldDecl* $tmp1471 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1473 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1473);
                $tmp1472 = $tmp1473;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1474, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1477 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1476 = $tmp1477;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1471, result1444, result1444->position, NULL, $tmp1472, $tmp1474, &$s1475, $tmp1476, NULL);
                $tmp1470 = $tmp1471;
                $tmp1469 = $tmp1470;
                data1468 = $tmp1469;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1469));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1470));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1476));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1472));
                panda$collections$Array$add$panda$collections$Array$T(result1444->fields, ((panda$core$Object*) data1468));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1444->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1468));
            }
            $tmp1457 = -1;
            goto $l1455;
            $l1455:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1458));
            rawValue1458 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1468));
            data1468 = NULL;
            switch ($tmp1457) {
                case -1: goto $l1478;
            }
            $l1478:;
        }
        }
        {
            int $tmp1481;
            {
                ITable* $tmp1485 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1485->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1485 = $tmp1485->next;
                }
                $fn1487 $tmp1486 = $tmp1485->methods[0];
                panda$collections$Iterator* $tmp1488 = $tmp1486(((panda$collections$Iterable*) p_members));
                $tmp1484 = $tmp1488;
                $tmp1483 = $tmp1484;
                Iter$444$91482 = $tmp1483;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1483));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1484));
                $l1489:;
                ITable* $tmp1492 = Iter$444$91482->$class->itable;
                while ($tmp1492->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1492 = $tmp1492->next;
                }
                $fn1494 $tmp1493 = $tmp1492->methods[0];
                panda$core$Bit $tmp1495 = $tmp1493(Iter$444$91482);
                panda$core$Bit $tmp1496 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1495);
                bool $tmp1491 = $tmp1496.value;
                if (!$tmp1491) goto $l1490;
                {
                    int $tmp1499;
                    {
                        ITable* $tmp1503 = Iter$444$91482->$class->itable;
                        while ($tmp1503->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1503 = $tmp1503->next;
                        }
                        $fn1505 $tmp1504 = $tmp1503->methods[1];
                        panda$core$Object* $tmp1506 = $tmp1504(Iter$444$91482);
                        $tmp1502 = $tmp1506;
                        $tmp1501 = ((org$pandalanguage$pandac$ASTNode*) $tmp1502);
                        m1500 = $tmp1501;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1501));
                        panda$core$Panda$unref$panda$core$Object($tmp1502);
                        int $tmp1509;
                        {
                            $tmp1511 = m1500;
                            $match$445_131510 = $tmp1511;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1511));
                            panda$core$Bit $tmp1512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$445_131510->$rawValue, ((panda$core$Int64) { 24 }));
                            if ($tmp1512.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp1514 = ((org$pandalanguage$pandac$Position*) ((char*) $match$445_131510->$data + 0));
                                mPosition1513 = *$tmp1514;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1516 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$445_131510->$data + 32));
                                methodKind1515 = *$tmp1516;
                                panda$core$Bit $tmp1517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1515.$rawValue, ((panda$core$Int64) { 2 }));
                                if ($tmp1517.value) {
                                {
                                    {
                                        $match$448_251518 = p_kind;
                                        panda$core$Bit $tmp1519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_251518.$rawValue, ((panda$core$Int64) { 0 }));
                                        if ($tmp1519.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_251518.$rawValue, ((panda$core$Int64) { 1 }));
                                        if ($tmp1520.value) {
                                        {
                                            panda$core$Object* $tmp1523 = (($fn1522) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp1521 = $tmp1523;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1521), mPosition1513, &$s1524);
                                            panda$core$Panda$unref$panda$core$Object($tmp1521);
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_251518.$rawValue, ((panda$core$Int64) { 2 }));
                                        if ($tmp1525.value) {
                                        {
                                            panda$core$Object* $tmp1528 = (($fn1527) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp1526 = $tmp1528;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1526), mPosition1513, &$s1529);
                                            panda$core$Panda$unref$panda$core$Object($tmp1526);
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
                        $tmp1509 = -1;
                        goto $l1507;
                        $l1507:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1511));
                        switch ($tmp1509) {
                            case -1: goto $l1530;
                        }
                        $l1530:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1444, m1500);
                    }
                    $tmp1499 = -1;
                    goto $l1497;
                    $l1497:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1500));
                    m1500 = NULL;
                    switch ($tmp1499) {
                        case -1: goto $l1531;
                    }
                    $l1531:;
                }
                goto $l1489;
                $l1490:;
            }
            $tmp1481 = -1;
            goto $l1479;
            $l1479:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$444$91482));
            Iter$444$91482 = NULL;
            switch ($tmp1481) {
                case -1: goto $l1532;
            }
            $l1532:;
        }
        foundInit1533 = ((panda$core$Bit) { false });
        foundCleanup1534 = ((panda$core$Bit) { false });
        {
            int $tmp1537;
            {
                ITable* $tmp1541 = ((panda$collections$Iterable*) result1444->methods)->$class->itable;
                while ($tmp1541->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1541 = $tmp1541->next;
                }
                $fn1543 $tmp1542 = $tmp1541->methods[0];
                panda$collections$Iterator* $tmp1544 = $tmp1542(((panda$collections$Iterable*) result1444->methods));
                $tmp1540 = $tmp1544;
                $tmp1539 = $tmp1540;
                Iter$463$91538 = $tmp1539;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1539));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1540));
                $l1545:;
                ITable* $tmp1548 = Iter$463$91538->$class->itable;
                while ($tmp1548->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1548 = $tmp1548->next;
                }
                $fn1550 $tmp1549 = $tmp1548->methods[0];
                panda$core$Bit $tmp1551 = $tmp1549(Iter$463$91538);
                panda$core$Bit $tmp1552 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1551);
                bool $tmp1547 = $tmp1552.value;
                if (!$tmp1547) goto $l1546;
                {
                    int $tmp1555;
                    {
                        ITable* $tmp1559 = Iter$463$91538->$class->itable;
                        while ($tmp1559->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1559 = $tmp1559->next;
                        }
                        $fn1561 $tmp1560 = $tmp1559->methods[1];
                        panda$core$Object* $tmp1562 = $tmp1560(Iter$463$91538);
                        $tmp1558 = $tmp1562;
                        $tmp1557 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1558);
                        m1556 = $tmp1557;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1557));
                        panda$core$Panda$unref$panda$core$Object($tmp1558);
                        panda$core$Bit $tmp1563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1556->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
                        if ($tmp1563.value) {
                        {
                            foundInit1533 = ((panda$core$Bit) { true });
                        }
                        }
                        panda$core$Bit $tmp1566 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1556)->name, &$s1565);
                        bool $tmp1564 = $tmp1566.value;
                        if (!$tmp1564) goto $l1567;
                        panda$core$Int64 $tmp1568 = panda$collections$Array$get_count$R$panda$core$Int64(m1556->parameters);
                        panda$core$Bit $tmp1569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1568, ((panda$core$Int64) { 0 }));
                        $tmp1564 = $tmp1569.value;
                        $l1567:;
                        panda$core$Bit $tmp1570 = { $tmp1564 };
                        if ($tmp1570.value) {
                        {
                            foundCleanup1534 = ((panda$core$Bit) { true });
                            panda$core$Bit $tmp1571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp1571.value) {
                            {
                                panda$core$Object* $tmp1574 = (($fn1573) self->compiler->$class->vtable[2])(self->compiler);
                                $tmp1572 = $tmp1574;
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1572), p_position, &$s1575);
                                panda$core$Panda$unref$panda$core$Object($tmp1572);
                            }
                            }
                        }
                        }
                    }
                    $tmp1555 = -1;
                    goto $l1553;
                    $l1553:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1556));
                    m1556 = NULL;
                    switch ($tmp1555) {
                        case -1: goto $l1576;
                    }
                    $l1576:;
                }
                goto $l1545;
                $l1546:;
            }
            $tmp1537 = -1;
            goto $l1535;
            $l1535:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$463$91538));
            Iter$463$91538 = NULL;
            switch ($tmp1537) {
                case -1: goto $l1577;
            }
            $l1577:;
        }
        panda$core$Bit $tmp1580 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1533);
        bool $tmp1579 = $tmp1580.value;
        if (!$tmp1579) goto $l1581;
        panda$core$Bit $tmp1582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        $tmp1579 = $tmp1582.value;
        $l1581:;
        panda$core$Bit $tmp1583 = { $tmp1579 };
        bool $tmp1578 = $tmp1583.value;
        if (!$tmp1578) goto $l1584;
        panda$core$Bit $tmp1586 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1444->name, &$s1585);
        $tmp1578 = $tmp1586.value;
        $l1584:;
        panda$core$Bit $tmp1587 = { $tmp1578 };
        if ($tmp1587.value) {
        {
            int $tmp1590;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1594 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1596 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1596);
                $tmp1595 = $tmp1596;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1597, ((panda$core$Int64) { 2 }));
                panda$collections$Array* $tmp1600 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1600);
                $tmp1599 = $tmp1600;
                org$pandalanguage$pandac$Type* $tmp1602 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1601 = $tmp1602;
                panda$collections$ImmutableArray* $tmp1604 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1604);
                $tmp1603 = $tmp1604;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1594, result1444, p_position, NULL, $tmp1595, $tmp1597, &$s1598, $tmp1599, $tmp1601, $tmp1603);
                $tmp1593 = $tmp1594;
                $tmp1592 = $tmp1593;
                defaultInit1591 = $tmp1592;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1592));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1593));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1603));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1601));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1599));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1595));
                panda$collections$Array$add$panda$collections$Array$T(result1444->methods, ((panda$core$Object*) defaultInit1591));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1444->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1591));
            }
            $tmp1590 = -1;
            goto $l1588;
            $l1588:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1591));
            defaultInit1591 = NULL;
            switch ($tmp1590) {
                case -1: goto $l1605;
            }
            $l1605:;
        }
        }
        panda$core$Bit $tmp1608 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup1534);
        bool $tmp1607 = $tmp1608.value;
        if (!$tmp1607) goto $l1609;
        panda$core$Bit $tmp1611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp1610 = $tmp1611.value;
        if ($tmp1610) goto $l1612;
        panda$core$Bit $tmp1613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        $tmp1610 = $tmp1613.value;
        $l1612:;
        panda$core$Bit $tmp1614 = { $tmp1610 };
        $tmp1607 = $tmp1614.value;
        $l1609:;
        panda$core$Bit $tmp1615 = { $tmp1607 };
        bool $tmp1606 = $tmp1615.value;
        if (!$tmp1606) goto $l1616;
        panda$core$Bit $tmp1618 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1444->name, &$s1617);
        $tmp1606 = $tmp1618.value;
        $l1616:;
        panda$core$Bit $tmp1619 = { $tmp1606 };
        if ($tmp1619.value) {
        {
            int $tmp1622;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1626 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1628 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64 $tmp1629 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1628, $tmp1629);
                $tmp1627 = $tmp1628;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1630, ((panda$core$Int64) { 0 }));
                panda$collections$Array* $tmp1633 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1633);
                $tmp1632 = $tmp1633;
                org$pandalanguage$pandac$Type* $tmp1635 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1634 = $tmp1635;
                panda$collections$ImmutableArray* $tmp1637 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1637);
                $tmp1636 = $tmp1637;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1626, result1444, p_position, NULL, $tmp1627, $tmp1630, &$s1631, $tmp1632, $tmp1634, $tmp1636);
                $tmp1625 = $tmp1626;
                $tmp1624 = $tmp1625;
                defaultCleanup1623 = $tmp1624;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1624));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1625));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1636));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1634));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1632));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1627));
                panda$collections$Array$add$panda$collections$Array$T(result1444->methods, ((panda$core$Object*) defaultCleanup1623));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1444->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1623));
            }
            $tmp1622 = -1;
            goto $l1620;
            $l1620:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1623));
            defaultCleanup1623 = NULL;
            switch ($tmp1622) {
                case -1: goto $l1638;
            }
            $l1638:;
        }
        }
        panda$core$Bit $tmp1639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1639.value) {
        {
            haveFields1640 = ((panda$core$Bit) { false });
            {
                int $tmp1643;
                {
                    ITable* $tmp1647 = ((panda$collections$Iterable*) result1444->choiceEntries)->$class->itable;
                    while ($tmp1647->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1647 = $tmp1647->next;
                    }
                    $fn1649 $tmp1648 = $tmp1647->methods[0];
                    panda$collections$Iterator* $tmp1650 = $tmp1648(((panda$collections$Iterable*) result1444->choiceEntries));
                    $tmp1646 = $tmp1650;
                    $tmp1645 = $tmp1646;
                    Iter$491$131644 = $tmp1645;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1645));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1646));
                    $l1651:;
                    ITable* $tmp1654 = Iter$491$131644->$class->itable;
                    while ($tmp1654->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1654 = $tmp1654->next;
                    }
                    $fn1656 $tmp1655 = $tmp1654->methods[0];
                    panda$core$Bit $tmp1657 = $tmp1655(Iter$491$131644);
                    panda$core$Bit $tmp1658 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1657);
                    bool $tmp1653 = $tmp1658.value;
                    if (!$tmp1653) goto $l1652;
                    {
                        int $tmp1661;
                        {
                            ITable* $tmp1665 = Iter$491$131644->$class->itable;
                            while ($tmp1665->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1665 = $tmp1665->next;
                            }
                            $fn1667 $tmp1666 = $tmp1665->methods[1];
                            panda$core$Object* $tmp1668 = $tmp1666(Iter$491$131644);
                            $tmp1664 = $tmp1668;
                            $tmp1663 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1664);
                            e1662 = $tmp1663;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1663));
                            panda$core$Panda$unref$panda$core$Object($tmp1664);
                            panda$core$Int64 $tmp1669 = panda$collections$Array$get_count$R$panda$core$Int64(e1662->fields);
                            panda$core$Bit $tmp1670 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1669, ((panda$core$Int64) { 0 }));
                            if ($tmp1670.value) {
                            {
                                haveFields1640 = ((panda$core$Bit) { true });
                                $tmp1661 = 0;
                                goto $l1659;
                                $l1671:;
                                goto $l1652;
                            }
                            }
                        }
                        $tmp1661 = -1;
                        goto $l1659;
                        $l1659:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1662));
                        e1662 = NULL;
                        switch ($tmp1661) {
                            case 0: goto $l1671;
                            case -1: goto $l1672;
                        }
                        $l1672:;
                    }
                    goto $l1651;
                    $l1652:;
                }
                $tmp1643 = -1;
                goto $l1641;
                $l1641:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$491$131644));
                Iter$491$131644 = NULL;
                switch ($tmp1643) {
                    case -1: goto $l1673;
                }
                $l1673:;
            }
            panda$core$Bit $tmp1674 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1640);
            if ($tmp1674.value) {
            {
                {
                    $tmp1675 = result1444->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp1678 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp1677 = $tmp1678;
                    $tmp1676 = $tmp1677;
                    result1444->rawSuper = $tmp1676;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1676));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1677));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1675));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp1682 = (($fn1681) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1680 = $tmp1682;
        panda$core$Object* $tmp1683 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1680)->currentClass);
        $tmp1679 = $tmp1683;
        panda$core$Panda$unref$panda$core$Object($tmp1679);
        panda$core$Panda$unref$panda$core$Object($tmp1680);
        $tmp1685 = result1444;
        $finallyReturn1683 = $tmp1685;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1685));
        $tmp1294 = 0;
        goto $l1292;
        $l1686:;
        return $finallyReturn1683;
    }
    $l1292:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1295));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1312));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1328));
    annotations1328 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1332));
    parameters1332 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1403));
    supertypes1403 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1444));
    result1444 = NULL;
    switch ($tmp1294) {
        case 0: goto $l1686;
    }
    $l1688:;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$507$91692 = NULL;
    panda$collections$Iterator* $tmp1693;
    panda$collections$Iterator* $tmp1694;
    org$pandalanguage$pandac$ClassDecl* inner1710 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1711;
    panda$core$Object* $tmp1712;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp1691;
        {
            ITable* $tmp1695 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp1695->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1695 = $tmp1695->next;
            }
            $fn1697 $tmp1696 = $tmp1695->methods[0];
            panda$collections$Iterator* $tmp1698 = $tmp1696(((panda$collections$Iterable*) p_cl->classes));
            $tmp1694 = $tmp1698;
            $tmp1693 = $tmp1694;
            Iter$507$91692 = $tmp1693;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1693));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1694));
            $l1699:;
            ITable* $tmp1702 = Iter$507$91692->$class->itable;
            while ($tmp1702->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1702 = $tmp1702->next;
            }
            $fn1704 $tmp1703 = $tmp1702->methods[0];
            panda$core$Bit $tmp1705 = $tmp1703(Iter$507$91692);
            panda$core$Bit $tmp1706 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1705);
            bool $tmp1701 = $tmp1706.value;
            if (!$tmp1701) goto $l1700;
            {
                int $tmp1709;
                {
                    ITable* $tmp1713 = Iter$507$91692->$class->itable;
                    while ($tmp1713->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1713 = $tmp1713->next;
                    }
                    $fn1715 $tmp1714 = $tmp1713->methods[1];
                    panda$core$Object* $tmp1716 = $tmp1714(Iter$507$91692);
                    $tmp1712 = $tmp1716;
                    $tmp1711 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1712);
                    inner1710 = $tmp1711;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1711));
                    panda$core$Panda$unref$panda$core$Object($tmp1712);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1710, p_arr);
                }
                $tmp1709 = -1;
                goto $l1707;
                $l1707:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1710));
                inner1710 = NULL;
                switch ($tmp1709) {
                    case -1: goto $l1717;
                }
                $l1717:;
            }
            goto $l1699;
            $l1700:;
        }
        $tmp1691 = -1;
        goto $l1689;
        $l1689:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$507$91692));
        Iter$507$91692 = NULL;
        switch ($tmp1691) {
            case -1: goto $l1718;
        }
        $l1718:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$513_91722 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1723;
    panda$collections$ImmutableArray* entries1725 = NULL;
    panda$collections$Array* result1730 = NULL;
    panda$collections$Array* $tmp1731;
    panda$collections$Array* $tmp1732;
    panda$core$String* currentPackage1734 = NULL;
    panda$core$String* $tmp1735;
    panda$collections$HashMap* aliases1737 = NULL;
    panda$collections$HashMap* $tmp1738;
    panda$collections$HashMap* $tmp1739;
    panda$collections$Iterator* Iter$518$171744 = NULL;
    panda$collections$Iterator* $tmp1745;
    panda$collections$Iterator* $tmp1746;
    org$pandalanguage$pandac$ASTNode* e1762 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1763;
    panda$core$Object* $tmp1764;
    org$pandalanguage$pandac$ASTNode* $match$519_211772 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1773;
    panda$core$String* name1775 = NULL;
    panda$core$String* $tmp1777;
    panda$core$String* $tmp1778;
    panda$core$String* fullName1780 = NULL;
    panda$core$String$Index$nullable idx1785;
    panda$core$String* alias1788 = NULL;
    panda$core$String* $tmp1789;
    panda$core$String* $tmp1790;
    panda$core$String* $tmp1791;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1792;
    panda$core$String* $tmp1795;
    panda$core$String* $tmp1796;
    org$pandalanguage$pandac$Position position1799;
    org$pandalanguage$pandac$ASTNode* dc1801 = NULL;
    panda$collections$ImmutableArray* annotations1803 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1805;
    panda$core$String* name1807 = NULL;
    panda$collections$ImmutableArray* generics1809 = NULL;
    panda$collections$ImmutableArray* supertypes1811 = NULL;
    panda$collections$ImmutableArray* members1813 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl1818 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1819;
    org$pandalanguage$pandac$ClassDecl* $tmp1820;
    panda$collections$ListView* $finallyReturn1825;
    panda$collections$ListView* $tmp1827;
    int $tmp1721;
    {
        $tmp1723 = p_file;
        $match$513_91722 = $tmp1723;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1723));
        panda$core$Bit $tmp1724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_91722->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1724.value) {
        {
            panda$collections$ImmutableArray** $tmp1726 = ((panda$collections$ImmutableArray**) ((char*) $match$513_91722->$data + 0));
            entries1725 = *$tmp1726;
            int $tmp1729;
            {
                panda$collections$Array* $tmp1733 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1733);
                $tmp1732 = $tmp1733;
                $tmp1731 = $tmp1732;
                result1730 = $tmp1731;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1731));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1732));
                $tmp1735 = &$s1736;
                currentPackage1734 = $tmp1735;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1735));
                panda$collections$HashMap* $tmp1740 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp1740);
                $tmp1739 = $tmp1740;
                $tmp1738 = $tmp1739;
                aliases1737 = $tmp1738;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1738));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1739));
                {
                    int $tmp1743;
                    {
                        ITable* $tmp1747 = ((panda$collections$Iterable*) entries1725)->$class->itable;
                        while ($tmp1747->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1747 = $tmp1747->next;
                        }
                        $fn1749 $tmp1748 = $tmp1747->methods[0];
                        panda$collections$Iterator* $tmp1750 = $tmp1748(((panda$collections$Iterable*) entries1725));
                        $tmp1746 = $tmp1750;
                        $tmp1745 = $tmp1746;
                        Iter$518$171744 = $tmp1745;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1745));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1746));
                        $l1751:;
                        ITable* $tmp1754 = Iter$518$171744->$class->itable;
                        while ($tmp1754->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1754 = $tmp1754->next;
                        }
                        $fn1756 $tmp1755 = $tmp1754->methods[0];
                        panda$core$Bit $tmp1757 = $tmp1755(Iter$518$171744);
                        panda$core$Bit $tmp1758 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1757);
                        bool $tmp1753 = $tmp1758.value;
                        if (!$tmp1753) goto $l1752;
                        {
                            int $tmp1761;
                            {
                                ITable* $tmp1765 = Iter$518$171744->$class->itable;
                                while ($tmp1765->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1765 = $tmp1765->next;
                                }
                                $fn1767 $tmp1766 = $tmp1765->methods[1];
                                panda$core$Object* $tmp1768 = $tmp1766(Iter$518$171744);
                                $tmp1764 = $tmp1768;
                                $tmp1763 = ((org$pandalanguage$pandac$ASTNode*) $tmp1764);
                                e1762 = $tmp1763;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1763));
                                panda$core$Panda$unref$panda$core$Object($tmp1764);
                                int $tmp1771;
                                {
                                    $tmp1773 = e1762;
                                    $match$519_211772 = $tmp1773;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1773));
                                    panda$core$Bit $tmp1774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$519_211772->$rawValue, ((panda$core$Int64) { 27 }));
                                    if ($tmp1774.value) {
                                    {
                                        panda$core$String** $tmp1776 = ((panda$core$String**) ((char*) $match$519_211772->$data + 16));
                                        name1775 = *$tmp1776;
                                        {
                                            $tmp1777 = currentPackage1734;
                                            $tmp1778 = name1775;
                                            currentPackage1734 = $tmp1778;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1778));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1777));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$519_211772->$rawValue, ((panda$core$Int64) { 38 }));
                                    if ($tmp1779.value) {
                                    {
                                        panda$core$String** $tmp1781 = ((panda$core$String**) ((char*) $match$519_211772->$data + 16));
                                        fullName1780 = *$tmp1781;
                                        int $tmp1784;
                                        {
                                            panda$core$String$Index$nullable $tmp1787 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName1780, &$s1786);
                                            idx1785 = $tmp1787;
                                            memset(&alias1788, 0, sizeof(alias1788));
                                            if (((panda$core$Bit) { idx1785.nonnull }).value) {
                                            {
                                                {
                                                    $tmp1789 = alias1788;
                                                    panda$core$String$Index $tmp1793 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName1780, ((panda$core$String$Index) idx1785.value));
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1792, ((panda$core$String$Index$nullable) { $tmp1793, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                                    panda$core$String* $tmp1794 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName1780, $tmp1792);
                                                    $tmp1791 = $tmp1794;
                                                    $tmp1790 = $tmp1791;
                                                    alias1788 = $tmp1790;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1790));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1791));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1789));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp1795 = alias1788;
                                                    $tmp1796 = fullName1780;
                                                    alias1788 = $tmp1796;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1796));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1795));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1737, ((panda$collections$Key*) alias1788), ((panda$core$Object*) fullName1780));
                                        }
                                        $tmp1784 = -1;
                                        goto $l1782;
                                        $l1782:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias1788));
                                        switch ($tmp1784) {
                                            case -1: goto $l1797;
                                        }
                                        $l1797:;
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$519_211772->$rawValue, ((panda$core$Int64) { 9 }));
                                    if ($tmp1798.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp1800 = ((org$pandalanguage$pandac$Position*) ((char*) $match$519_211772->$data + 0));
                                        position1799 = *$tmp1800;
                                        org$pandalanguage$pandac$ASTNode** $tmp1802 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$519_211772->$data + 16));
                                        dc1801 = *$tmp1802;
                                        panda$collections$ImmutableArray** $tmp1804 = ((panda$collections$ImmutableArray**) ((char*) $match$519_211772->$data + 24));
                                        annotations1803 = *$tmp1804;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp1806 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$519_211772->$data + 32));
                                        kind1805 = *$tmp1806;
                                        panda$core$String** $tmp1808 = ((panda$core$String**) ((char*) $match$519_211772->$data + 40));
                                        name1807 = *$tmp1808;
                                        panda$collections$ImmutableArray** $tmp1810 = ((panda$collections$ImmutableArray**) ((char*) $match$519_211772->$data + 48));
                                        generics1809 = *$tmp1810;
                                        panda$collections$ImmutableArray** $tmp1812 = ((panda$collections$ImmutableArray**) ((char*) $match$519_211772->$data + 56));
                                        supertypes1811 = *$tmp1812;
                                        panda$collections$ImmutableArray** $tmp1814 = ((panda$collections$ImmutableArray**) ((char*) $match$519_211772->$data + 64));
                                        members1813 = *$tmp1814;
                                        int $tmp1817;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp1821 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1737), currentPackage1734, position1799, dc1801, annotations1803, kind1805, name1807, generics1809, supertypes1811, members1813);
                                            $tmp1820 = $tmp1821;
                                            $tmp1819 = $tmp1820;
                                            cl1818 = $tmp1819;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1819));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1820));
                                            if (((panda$core$Bit) { cl1818 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl1818, result1730);
                                            }
                                            }
                                        }
                                        $tmp1817 = -1;
                                        goto $l1815;
                                        $l1815:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1818));
                                        cl1818 = NULL;
                                        switch ($tmp1817) {
                                            case -1: goto $l1822;
                                        }
                                        $l1822:;
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
                                $tmp1771 = -1;
                                goto $l1769;
                                $l1769:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1773));
                                switch ($tmp1771) {
                                    case -1: goto $l1823;
                                }
                                $l1823:;
                            }
                            $tmp1761 = -1;
                            goto $l1759;
                            $l1759:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1762));
                            e1762 = NULL;
                            switch ($tmp1761) {
                                case -1: goto $l1824;
                            }
                            $l1824:;
                        }
                        goto $l1751;
                        $l1752:;
                    }
                    $tmp1743 = -1;
                    goto $l1741;
                    $l1741:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$518$171744));
                    Iter$518$171744 = NULL;
                    switch ($tmp1743) {
                        case -1: goto $l1825;
                    }
                    $l1825:;
                }
                $tmp1827 = ((panda$collections$ListView*) result1730);
                $finallyReturn1825 = $tmp1827;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1827));
                $tmp1729 = 0;
                goto $l1727;
                $l1828:;
                $tmp1721 = 0;
                goto $l1719;
                $l1829:;
                return $finallyReturn1825;
            }
            $l1727:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1730));
            result1730 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1734));
            currentPackage1734 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases1737));
            aliases1737 = NULL;
            switch ($tmp1729) {
                case 0: goto $l1828;
            }
            $l1831:;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp1721 = -1;
    goto $l1719;
    $l1719:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1723));
    switch ($tmp1721) {
        case 0: goto $l1829;
        case -1: goto $l1832;
    }
    $l1832:;
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp1835;
    {
    }
    $tmp1835 = -1;
    goto $l1833;
    $l1833:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1835) {
        case -1: goto $l1836;
    }
    $l1836:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
}

