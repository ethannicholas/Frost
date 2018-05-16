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

typedef panda$collections$Iterator* (*$fn71)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn78)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn89)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn100)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn117)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn124)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn135)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn201)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn271)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn278)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn289)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn384)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn391)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn402)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn430)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn437)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn448)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn493)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn500)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn511)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn542)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn549)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn560)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn594)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn601)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn612)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn639)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn646)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn657)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn683)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn690)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn701)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn715)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn722)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn733)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn804)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn811)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn822)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn845)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn852)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn863)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn877)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn884)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn895)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn919)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn926)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn937)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn950)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn969)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn976)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn987)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1048)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1055)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1066)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1102)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1118)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1259)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1266)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1277)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1341)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1348)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1359)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1391)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn1397)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1406)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1417)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1424)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1435)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1446)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1449)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1484)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1491)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1502)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1519)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1524)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1540)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1547)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1558)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1570)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1646)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1653)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1664)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1678)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1694)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1701)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1712)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1746)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1753)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1764)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x6f\x6e\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x27", 30, -1250916154819313721, NULL };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x68\x61\x76\x65\x20\x61\x20\x62\x6f\x64\x79", 16, -7652461387112275530, NULL };
static panda$core$String $s1201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

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
    panda$collections$Array* finalArgs59 = NULL;
    panda$collections$Array* $tmp60;
    panda$collections$Array* $tmp61;
    panda$collections$Iterator* Iter$28$1766 = NULL;
    panda$collections$Iterator* $tmp67;
    panda$collections$Iterator* $tmp68;
    org$pandalanguage$pandac$ASTNode* arg84 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp85;
    panda$core$Object* $tmp86;
    org$pandalanguage$pandac$Type* $tmp91;
    org$pandalanguage$pandac$Type* $finallyReturn94;
    org$pandalanguage$pandac$Type* $tmp96;
    org$pandalanguage$pandac$Type* $tmp97;
    org$pandalanguage$pandac$Type* $tmp98;
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
                finalArgs59 = $tmp60;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp60));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
                {
                    int $tmp65;
                    {
                        ITable* $tmp69 = ((panda$collections$Iterable*) args54)->$class->itable;
                        while ($tmp69->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp69 = $tmp69->next;
                        }
                        $fn71 $tmp70 = $tmp69->methods[0];
                        panda$collections$Iterator* $tmp72 = $tmp70(((panda$collections$Iterable*) args54));
                        $tmp68 = $tmp72;
                        $tmp67 = $tmp68;
                        Iter$28$1766 = $tmp67;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp67));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp68));
                        $l73:;
                        ITable* $tmp76 = Iter$28$1766->$class->itable;
                        while ($tmp76->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp76 = $tmp76->next;
                        }
                        $fn78 $tmp77 = $tmp76->methods[0];
                        panda$core$Bit $tmp79 = $tmp77(Iter$28$1766);
                        panda$core$Bit $tmp80 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp79);
                        bool $tmp75 = $tmp80.value;
                        if (!$tmp75) goto $l74;
                        {
                            int $tmp83;
                            {
                                ITable* $tmp87 = Iter$28$1766->$class->itable;
                                while ($tmp87->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp87 = $tmp87->next;
                                }
                                $fn89 $tmp88 = $tmp87->methods[1];
                                panda$core$Object* $tmp90 = $tmp88(Iter$28$1766);
                                $tmp86 = $tmp90;
                                $tmp85 = ((org$pandalanguage$pandac$ASTNode*) $tmp86);
                                arg84 = $tmp85;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp85));
                                panda$core$Panda$unref$panda$core$Object($tmp86);
                                org$pandalanguage$pandac$Type* $tmp92 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, arg84);
                                $tmp91 = $tmp92;
                                panda$collections$Array$add$panda$collections$Array$T(finalArgs59, ((panda$core$Object*) $tmp91));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
                            }
                            $tmp83 = -1;
                            goto $l81;
                            $l81:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg84));
                            arg84 = NULL;
                            switch ($tmp83) {
                                case -1: goto $l93;
                            }
                            $l93:;
                        }
                        goto $l73;
                        $l74:;
                    }
                    $tmp65 = -1;
                    goto $l63;
                    $l63:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$28$1766));
                    Iter$28$1766 = NULL;
                    switch ($tmp65) {
                        case -1: goto $l94;
                    }
                    $l94:;
                }
                org$pandalanguage$pandac$Type* $tmp99 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                org$pandalanguage$pandac$Position $tmp101 = (($fn100) p_type->$class->vtable[2])(p_type);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp99, base52, ((panda$core$Int64) { 10 }), $tmp101);
                $tmp98 = $tmp99;
                org$pandalanguage$pandac$Type* $tmp102 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp98, ((panda$collections$ListView*) finalArgs59));
                $tmp97 = $tmp102;
                $tmp96 = $tmp97;
                $finallyReturn94 = $tmp96;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp96));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp97));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
                $tmp58 = 0;
                goto $l56;
                $l103:;
                $tmp8 = 2;
                goto $l6;
                $l104:;
                return $finallyReturn94;
            }
            $l56:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalArgs59));
            finalArgs59 = NULL;
            switch ($tmp58) {
                case 0: goto $l103;
            }
            $l106:;
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
        case 1: goto $l46;
        case -1: goto $l107;
        case 0: goto $l20;
        case 2: goto $l104;
    }
    $l107:;
}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, panda$collections$ImmutableArray* p_a) {
    panda$core$Int64 flags108;
    panda$collections$Iterator* Iter$39$9112 = NULL;
    panda$collections$Iterator* $tmp113;
    panda$collections$Iterator* $tmp114;
    org$pandalanguage$pandac$ASTNode* c130 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp131;
    panda$core$Object* $tmp132;
    org$pandalanguage$pandac$ASTNode* $match$40_13140 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp141;
    org$pandalanguage$pandac$Position position143;
    panda$core$String* text145 = NULL;
    panda$core$String* $match$42_21150 = NULL;
    panda$core$String* $tmp151;
    panda$core$Object* $tmp200;
    panda$core$String* $tmp203;
    panda$core$String* $tmp204;
    org$pandalanguage$pandac$Annotations* $finallyReturn212;
    org$pandalanguage$pandac$Annotations* $tmp214;
    org$pandalanguage$pandac$Annotations* $tmp215;
    flags108 = ((panda$core$Int64) { 0 });
    {
        int $tmp111;
        {
            ITable* $tmp115 = ((panda$collections$Iterable*) p_a)->$class->itable;
            while ($tmp115->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp115 = $tmp115->next;
            }
            $fn117 $tmp116 = $tmp115->methods[0];
            panda$collections$Iterator* $tmp118 = $tmp116(((panda$collections$Iterable*) p_a));
            $tmp114 = $tmp118;
            $tmp113 = $tmp114;
            Iter$39$9112 = $tmp113;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp113));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
            $l119:;
            ITable* $tmp122 = Iter$39$9112->$class->itable;
            while ($tmp122->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp122 = $tmp122->next;
            }
            $fn124 $tmp123 = $tmp122->methods[0];
            panda$core$Bit $tmp125 = $tmp123(Iter$39$9112);
            panda$core$Bit $tmp126 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp125);
            bool $tmp121 = $tmp126.value;
            if (!$tmp121) goto $l120;
            {
                int $tmp129;
                {
                    ITable* $tmp133 = Iter$39$9112->$class->itable;
                    while ($tmp133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp133 = $tmp133->next;
                    }
                    $fn135 $tmp134 = $tmp133->methods[1];
                    panda$core$Object* $tmp136 = $tmp134(Iter$39$9112);
                    $tmp132 = $tmp136;
                    $tmp131 = ((org$pandalanguage$pandac$ASTNode*) $tmp132);
                    c130 = $tmp131;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp131));
                    panda$core$Panda$unref$panda$core$Object($tmp132);
                    int $tmp139;
                    {
                        $tmp141 = c130;
                        $match$40_13140 = $tmp141;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp141));
                        panda$core$Bit $tmp142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$40_13140->$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp142.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp144 = ((org$pandalanguage$pandac$Position*) ((char*) $match$40_13140->$data + 0));
                            position143 = *$tmp144;
                            panda$core$String** $tmp146 = ((panda$core$String**) ((char*) $match$40_13140->$data + 16));
                            text145 = *$tmp146;
                            int $tmp149;
                            {
                                $tmp151 = text145;
                                $match$42_21150 = $tmp151;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
                                panda$core$Bit $tmp153 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21150, &$s152);
                                if ($tmp153.value) {
                                {
                                    panda$core$Int64 $tmp154 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                                    panda$core$Int64 $tmp155 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags108, $tmp154);
                                    flags108 = $tmp155;
                                }
                                }
                                else {
                                panda$core$Bit $tmp157 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21150, &$s156);
                                if ($tmp157.value) {
                                {
                                    panda$core$Int64 $tmp158 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                                    panda$core$Int64 $tmp159 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags108, $tmp158);
                                    flags108 = $tmp159;
                                }
                                }
                                else {
                                panda$core$Bit $tmp161 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21150, &$s160);
                                if ($tmp161.value) {
                                {
                                    panda$core$Int64 $tmp162 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                                    panda$core$Int64 $tmp163 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags108, $tmp162);
                                    flags108 = $tmp163;
                                }
                                }
                                else {
                                panda$core$Bit $tmp165 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21150, &$s164);
                                if ($tmp165.value) {
                                {
                                    panda$core$Int64 $tmp166 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                                    panda$core$Int64 $tmp167 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags108, $tmp166);
                                    flags108 = $tmp167;
                                }
                                }
                                else {
                                panda$core$Bit $tmp169 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21150, &$s168);
                                if ($tmp169.value) {
                                {
                                    panda$core$Int64 $tmp170 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                                    panda$core$Int64 $tmp171 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags108, $tmp170);
                                    flags108 = $tmp171;
                                }
                                }
                                else {
                                panda$core$Bit $tmp173 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21150, &$s172);
                                if ($tmp173.value) {
                                {
                                    panda$core$Int64 $tmp174 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                                    panda$core$Int64 $tmp175 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags108, $tmp174);
                                    flags108 = $tmp175;
                                }
                                }
                                else {
                                panda$core$Bit $tmp177 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21150, &$s176);
                                if ($tmp177.value) {
                                {
                                    panda$core$Int64 $tmp178 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                                    panda$core$Int64 $tmp179 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags108, $tmp178);
                                    flags108 = $tmp179;
                                }
                                }
                                else {
                                panda$core$Bit $tmp181 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21150, &$s180);
                                if ($tmp181.value) {
                                {
                                    panda$core$Int64 $tmp182 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                                    panda$core$Int64 $tmp183 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags108, $tmp182);
                                    flags108 = $tmp183;
                                }
                                }
                                else {
                                panda$core$Bit $tmp185 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21150, &$s184);
                                if ($tmp185.value) {
                                {
                                    panda$core$Int64 $tmp186 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                                    panda$core$Int64 $tmp187 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags108, $tmp186);
                                    flags108 = $tmp187;
                                }
                                }
                                else {
                                panda$core$Bit $tmp189 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21150, &$s188);
                                if ($tmp189.value) {
                                {
                                    panda$core$Int64 $tmp190 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                                    panda$core$Int64 $tmp191 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags108, $tmp190);
                                    flags108 = $tmp191;
                                }
                                }
                                else {
                                panda$core$Bit $tmp193 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21150, &$s192);
                                if ($tmp193.value) {
                                {
                                    panda$core$Int64 $tmp194 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                                    panda$core$Int64 $tmp195 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags108, $tmp194);
                                    flags108 = $tmp195;
                                }
                                }
                                else {
                                panda$core$Bit $tmp197 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$42_21150, &$s196);
                                if ($tmp197.value) {
                                {
                                    panda$core$Int64 $tmp198 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 12 }));
                                    panda$core$Int64 $tmp199 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags108, $tmp198);
                                    flags108 = $tmp199;
                                }
                                }
                                else {
                                {
                                    panda$core$Object* $tmp202 = (($fn201) self->compiler->$class->vtable[2])(self->compiler);
                                    $tmp200 = $tmp202;
                                    panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s205, text145);
                                    $tmp204 = $tmp206;
                                    panda$core$String* $tmp208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp204, &$s207);
                                    $tmp203 = $tmp208;
                                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp200), position143, $tmp203);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp204));
                                    panda$core$Panda$unref$panda$core$Object($tmp200);
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            $tmp149 = -1;
                            goto $l147;
                            $l147:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
                            switch ($tmp149) {
                                case -1: goto $l209;
                            }
                            $l209:;
                        }
                        }
                        else {
                        {
                            PANDA_ASSERT(((panda$core$Bit) { false }).value);
                        }
                        }
                    }
                    $tmp139 = -1;
                    goto $l137;
                    $l137:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp141));
                    switch ($tmp139) {
                        case -1: goto $l210;
                    }
                    $l210:;
                }
                $tmp129 = -1;
                goto $l127;
                $l127:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c130));
                c130 = NULL;
                switch ($tmp129) {
                    case -1: goto $l211;
                }
                $l211:;
            }
            goto $l119;
            $l120:;
        }
        $tmp111 = -1;
        goto $l109;
        $l109:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$39$9112));
        Iter$39$9112 = NULL;
        switch ($tmp111) {
            case -1: goto $l212;
        }
        $l212:;
    }
    org$pandalanguage$pandac$Annotations* $tmp216 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp216, flags108);
    $tmp215 = $tmp216;
    $tmp214 = $tmp215;
    $finallyReturn212 = $tmp214;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp214));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp215));
    return $finallyReturn212;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment221 = NULL;
    panda$core$String* $tmp222;
    panda$core$String* $tmp223;
    org$pandalanguage$pandac$ASTNode* $match$73_13227 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp228;
    org$pandalanguage$pandac$Position position230;
    panda$core$String* text232 = NULL;
    panda$core$String* $tmp234;
    panda$core$String* $tmp235;
    org$pandalanguage$pandac$Annotations* annotations237 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp238;
    org$pandalanguage$pandac$Annotations* $tmp239;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind241;
    org$pandalanguage$pandac$ASTNode* $match$82_9245 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp246;
    org$pandalanguage$pandac$Variable$Kind kind248;
    panda$collections$ImmutableArray* decls250 = NULL;
    org$pandalanguage$pandac$Variable$Kind $match$84_17252;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp254;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp256;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp258;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp262;
    panda$collections$Iterator* Iter$95$17266 = NULL;
    panda$collections$Iterator* $tmp267;
    panda$collections$Iterator* $tmp268;
    org$pandalanguage$pandac$ASTNode* decl284 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp285;
    panda$core$Object* $tmp286;
    org$pandalanguage$pandac$ASTNode* $match$96_21294 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp295;
    org$pandalanguage$pandac$Position declPosition297;
    org$pandalanguage$pandac$ASTNode* target299 = NULL;
    org$pandalanguage$pandac$ASTNode* value301 = NULL;
    panda$core$String* name306 = NULL;
    org$pandalanguage$pandac$Type* type307 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$100_29311 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp312;
    panda$core$String* id314 = NULL;
    panda$core$String* $tmp316;
    panda$core$String* $tmp317;
    org$pandalanguage$pandac$Type* $tmp318;
    org$pandalanguage$pandac$Type* $tmp319;
    org$pandalanguage$pandac$Type* $tmp320;
    panda$core$String* id323 = NULL;
    org$pandalanguage$pandac$ASTNode* idType325 = NULL;
    panda$core$String* $tmp327;
    panda$core$String* $tmp328;
    org$pandalanguage$pandac$Type* $tmp329;
    org$pandalanguage$pandac$Type* $tmp330;
    org$pandalanguage$pandac$Type* $tmp331;
    org$pandalanguage$pandac$FieldDecl* field334 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp335;
    org$pandalanguage$pandac$FieldDecl* $tmp336;
    int $tmp220;
    {
        memset(&doccomment221, 0, sizeof(doccomment221));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp222 = doccomment221;
                $tmp223 = NULL;
                doccomment221 = $tmp223;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp222));
            }
        }
        }
        else {
        {
            int $tmp226;
            {
                $tmp228 = p_rawDoccomment;
                $match$73_13227 = $tmp228;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp228));
                panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_13227->$rawValue, ((panda$core$Int64) { 34 }));
                if ($tmp229.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp231 = ((org$pandalanguage$pandac$Position*) ((char*) $match$73_13227->$data + 0));
                    position230 = *$tmp231;
                    panda$core$String** $tmp233 = ((panda$core$String**) ((char*) $match$73_13227->$data + 16));
                    text232 = *$tmp233;
                    {
                        $tmp234 = doccomment221;
                        $tmp235 = text232;
                        doccomment221 = $tmp235;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp235));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp234));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp226 = -1;
            goto $l224;
            $l224:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp228));
            switch ($tmp226) {
                case -1: goto $l236;
            }
            $l236:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp240 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp239 = $tmp240;
        $tmp238 = $tmp239;
        annotations237 = $tmp238;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp238));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
        memset(&fieldKind241, 0, sizeof(fieldKind241));
        int $tmp244;
        {
            $tmp246 = p_varDecl;
            $match$82_9245 = $tmp246;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp246));
            panda$core$Bit $tmp247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$82_9245->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp247.value) {
            {
                org$pandalanguage$pandac$Variable$Kind* $tmp249 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$82_9245->$data + 16));
                kind248 = *$tmp249;
                panda$collections$ImmutableArray** $tmp251 = ((panda$collections$ImmutableArray**) ((char*) $match$82_9245->$data + 24));
                decls250 = *$tmp251;
                {
                    $match$84_17252 = kind248;
                    panda$core$Bit $tmp253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_17252.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp253.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp254, ((panda$core$Int64) { 0 }));
                        fieldKind241 = $tmp254;
                    }
                    }
                    else {
                    panda$core$Bit $tmp255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_17252.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp255.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp256, ((panda$core$Int64) { 1 }));
                        fieldKind241 = $tmp256;
                    }
                    }
                    else {
                    panda$core$Bit $tmp257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_17252.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp257.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp258, ((panda$core$Int64) { 2 }));
                        fieldKind241 = $tmp258;
                        panda$core$Int64 $tmp259 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                        panda$core$Int64 $tmp260 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations237->flags, $tmp259);
                        annotations237->flags = $tmp260;
                    }
                    }
                    else {
                    panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_17252.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp261.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp262, ((panda$core$Int64) { 3 }));
                        fieldKind241 = $tmp262;
                    }
                    }
                    }
                    }
                    }
                }
                {
                    int $tmp265;
                    {
                        ITable* $tmp269 = ((panda$collections$Iterable*) decls250)->$class->itable;
                        while ($tmp269->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp269 = $tmp269->next;
                        }
                        $fn271 $tmp270 = $tmp269->methods[0];
                        panda$collections$Iterator* $tmp272 = $tmp270(((panda$collections$Iterable*) decls250));
                        $tmp268 = $tmp272;
                        $tmp267 = $tmp268;
                        Iter$95$17266 = $tmp267;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp267));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp268));
                        $l273:;
                        ITable* $tmp276 = Iter$95$17266->$class->itable;
                        while ($tmp276->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp276 = $tmp276->next;
                        }
                        $fn278 $tmp277 = $tmp276->methods[0];
                        panda$core$Bit $tmp279 = $tmp277(Iter$95$17266);
                        panda$core$Bit $tmp280 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp279);
                        bool $tmp275 = $tmp280.value;
                        if (!$tmp275) goto $l274;
                        {
                            int $tmp283;
                            {
                                ITable* $tmp287 = Iter$95$17266->$class->itable;
                                while ($tmp287->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp287 = $tmp287->next;
                                }
                                $fn289 $tmp288 = $tmp287->methods[1];
                                panda$core$Object* $tmp290 = $tmp288(Iter$95$17266);
                                $tmp286 = $tmp290;
                                $tmp285 = ((org$pandalanguage$pandac$ASTNode*) $tmp286);
                                decl284 = $tmp285;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp285));
                                panda$core$Panda$unref$panda$core$Object($tmp286);
                                int $tmp293;
                                {
                                    $tmp295 = decl284;
                                    $match$96_21294 = $tmp295;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp295));
                                    panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$96_21294->$rawValue, ((panda$core$Int64) { 11 }));
                                    if ($tmp296.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp298 = ((org$pandalanguage$pandac$Position*) ((char*) $match$96_21294->$data + 0));
                                        declPosition297 = *$tmp298;
                                        org$pandalanguage$pandac$ASTNode** $tmp300 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$96_21294->$data + 16));
                                        target299 = *$tmp300;
                                        org$pandalanguage$pandac$ASTNode** $tmp302 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$96_21294->$data + 24));
                                        value301 = *$tmp302;
                                        int $tmp305;
                                        {
                                            memset(&name306, 0, sizeof(name306));
                                            memset(&type307, 0, sizeof(type307));
                                            int $tmp310;
                                            {
                                                $tmp312 = target299;
                                                $match$100_29311 = $tmp312;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
                                                panda$core$Bit $tmp313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$100_29311->$rawValue, ((panda$core$Int64) { 18 }));
                                                if ($tmp313.value) {
                                                {
                                                    panda$core$String** $tmp315 = ((panda$core$String**) ((char*) $match$100_29311->$data + 16));
                                                    id314 = *$tmp315;
                                                    {
                                                        $tmp316 = name306;
                                                        $tmp317 = id314;
                                                        name306 = $tmp317;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp317));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
                                                    }
                                                    {
                                                        $tmp318 = type307;
                                                        org$pandalanguage$pandac$Type* $tmp321 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                        $tmp320 = $tmp321;
                                                        $tmp319 = $tmp320;
                                                        type307 = $tmp319;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp319));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp318));
                                                    }
                                                }
                                                }
                                                else {
                                                panda$core$Bit $tmp322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$100_29311->$rawValue, ((panda$core$Int64) { 37 }));
                                                if ($tmp322.value) {
                                                {
                                                    panda$core$String** $tmp324 = ((panda$core$String**) ((char*) $match$100_29311->$data + 16));
                                                    id323 = *$tmp324;
                                                    org$pandalanguage$pandac$ASTNode** $tmp326 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$100_29311->$data + 24));
                                                    idType325 = *$tmp326;
                                                    {
                                                        $tmp327 = name306;
                                                        $tmp328 = id323;
                                                        name306 = $tmp328;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp328));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
                                                    }
                                                    {
                                                        $tmp329 = type307;
                                                        org$pandalanguage$pandac$Type* $tmp332 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType325);
                                                        $tmp331 = $tmp332;
                                                        $tmp330 = $tmp331;
                                                        type307 = $tmp330;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp330));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp331));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp329));
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
                                            $tmp310 = -1;
                                            goto $l308;
                                            $l308:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
                                            switch ($tmp310) {
                                                case -1: goto $l333;
                                            }
                                            $l333:;
                                            org$pandalanguage$pandac$FieldDecl* $tmp337 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp337, p_owner, declPosition297, doccomment221, annotations237, fieldKind241, name306, type307, value301);
                                            $tmp336 = $tmp337;
                                            $tmp335 = $tmp336;
                                            field334 = $tmp335;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp335));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp336));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field334));
                                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field334));
                                        }
                                        $tmp305 = -1;
                                        goto $l303;
                                        $l303:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name306));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type307));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field334));
                                        field334 = NULL;
                                        switch ($tmp305) {
                                            case -1: goto $l338;
                                        }
                                        $l338:;
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
                                    case -1: goto $l339;
                                }
                                $l339:;
                            }
                            $tmp283 = -1;
                            goto $l281;
                            $l281:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl284));
                            decl284 = NULL;
                            switch ($tmp283) {
                                case -1: goto $l340;
                            }
                            $l340:;
                        }
                        goto $l273;
                        $l274:;
                    }
                    $tmp265 = -1;
                    goto $l263;
                    $l263:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$95$17266));
                    Iter$95$17266 = NULL;
                    switch ($tmp265) {
                        case -1: goto $l341;
                    }
                    $l341:;
                }
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
        $tmp244 = -1;
        goto $l242;
        $l242:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
        switch ($tmp244) {
            case -1: goto $l342;
        }
        $l342:;
    }
    $tmp220 = -1;
    goto $l218;
    $l218:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment221));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations237));
    annotations237 = NULL;
    switch ($tmp220) {
        case -1: goto $l343;
    }
    $l343:;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$125_9347 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp348;
    org$pandalanguage$pandac$ASTNode* test350 = NULL;
    panda$core$Int64 $finallyReturn351;
    org$pandalanguage$pandac$ASTNode* left357 = NULL;
    org$pandalanguage$pandac$ASTNode* right359 = NULL;
    panda$core$Int64 $finallyReturn360;
    panda$core$Int64 $finallyReturn368;
    panda$collections$ImmutableArray* statements373 = NULL;
    panda$core$Int64 result375;
    panda$collections$Iterator* Iter$134$17379 = NULL;
    panda$collections$Iterator* $tmp380;
    panda$collections$Iterator* $tmp381;
    org$pandalanguage$pandac$ASTNode* s397 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp398;
    panda$core$Object* $tmp399;
    panda$core$Int64 $finallyReturn407;
    panda$core$Int64 $finallyReturn411;
    org$pandalanguage$pandac$ASTNode* target416 = NULL;
    panda$collections$ImmutableArray* args418 = NULL;
    panda$core$Int64 result420;
    panda$collections$Iterator* Iter$142$17425 = NULL;
    panda$collections$Iterator* $tmp426;
    panda$collections$Iterator* $tmp427;
    org$pandalanguage$pandac$ASTNode* a443 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp444;
    panda$core$Object* $tmp445;
    panda$core$Int64 $finallyReturn453;
    org$pandalanguage$pandac$ASTNode* base458 = NULL;
    panda$core$Int64 $finallyReturn459;
    panda$core$Int64 $finallyReturn464;
    org$pandalanguage$pandac$ASTNode* value469 = NULL;
    panda$core$Int64 $finallyReturn470;
    panda$core$Int64 $finallyReturn473;
    panda$collections$ImmutableArray* statements479 = NULL;
    org$pandalanguage$pandac$ASTNode* test481 = NULL;
    panda$core$Int64 result483;
    panda$collections$Iterator* Iter$157$17488 = NULL;
    panda$collections$Iterator* $tmp489;
    panda$collections$Iterator* $tmp490;
    org$pandalanguage$pandac$ASTNode* s506 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp507;
    panda$core$Object* $tmp508;
    panda$core$Int64 $finallyReturn516;
    org$pandalanguage$pandac$ASTNode* base521 = NULL;
    panda$core$Int64 $finallyReturn522;
    org$pandalanguage$pandac$ASTNode* list528 = NULL;
    panda$collections$ImmutableArray* statements530 = NULL;
    panda$core$Int64 result532;
    panda$collections$Iterator* Iter$165$17537 = NULL;
    panda$collections$Iterator* $tmp538;
    panda$collections$Iterator* $tmp539;
    org$pandalanguage$pandac$ASTNode* s555 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp556;
    panda$core$Object* $tmp557;
    panda$core$Int64 $finallyReturn565;
    panda$core$Int64 $finallyReturn569;
    panda$core$Int64 $finallyReturn573;
    org$pandalanguage$pandac$ASTNode* test578 = NULL;
    panda$collections$ImmutableArray* ifTrue580 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse582 = NULL;
    panda$core$Int64 result584;
    panda$collections$Iterator* Iter$175$17589 = NULL;
    panda$collections$Iterator* $tmp590;
    panda$collections$Iterator* $tmp591;
    org$pandalanguage$pandac$ASTNode* s607 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp608;
    panda$core$Object* $tmp609;
    panda$core$Int64 $finallyReturn619;
    panda$core$Int64 $finallyReturn623;
    panda$collections$ImmutableArray* statements628 = NULL;
    panda$core$Int64 result630;
    panda$collections$Iterator* Iter$186$17634 = NULL;
    panda$collections$Iterator* $tmp635;
    panda$collections$Iterator* $tmp636;
    org$pandalanguage$pandac$ASTNode* s652 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp653;
    panda$core$Object* $tmp654;
    panda$core$Int64 $finallyReturn662;
    org$pandalanguage$pandac$ASTNode* value667 = NULL;
    panda$collections$ImmutableArray* whens669 = NULL;
    panda$collections$ImmutableArray* other671 = NULL;
    panda$core$Int64 result673;
    panda$collections$Iterator* Iter$192$17678 = NULL;
    panda$collections$Iterator* $tmp679;
    panda$collections$Iterator* $tmp680;
    org$pandalanguage$pandac$ASTNode* w696 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp697;
    panda$core$Object* $tmp698;
    panda$collections$Iterator* Iter$196$21710 = NULL;
    panda$collections$Iterator* $tmp711;
    panda$collections$Iterator* $tmp712;
    org$pandalanguage$pandac$ASTNode* s728 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp729;
    panda$core$Object* $tmp730;
    panda$core$Int64 $finallyReturn738;
    panda$core$Int64 $finallyReturn742;
    panda$core$Int64 $finallyReturn746;
    org$pandalanguage$pandac$ASTNode* base751 = NULL;
    panda$core$Int64 $finallyReturn752;
    panda$core$Int64 $finallyReturn758;
    panda$core$Int64 $finallyReturn762;
    org$pandalanguage$pandac$ASTNode* value767 = NULL;
    panda$core$Int64 $finallyReturn768;
    panda$core$Int64 $finallyReturn771;
    panda$core$Int64 $finallyReturn776;
    panda$core$Int64 $finallyReturn780;
    panda$core$Int64 $finallyReturn784;
    panda$core$Int64 $finallyReturn788;
    panda$collections$ImmutableArray* decls793 = NULL;
    panda$core$Int64 result795;
    panda$collections$Iterator* Iter$226$17799 = NULL;
    panda$collections$Iterator* $tmp800;
    panda$collections$Iterator* $tmp801;
    org$pandalanguage$pandac$ASTNode* decl817 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp818;
    panda$core$Object* $tmp819;
    panda$core$Int64 $finallyReturn827;
    panda$collections$ImmutableArray* tests832 = NULL;
    panda$collections$ImmutableArray* statements834 = NULL;
    panda$core$Int64 result836;
    panda$collections$Iterator* Iter$232$17840 = NULL;
    panda$collections$Iterator* $tmp841;
    panda$collections$Iterator* $tmp842;
    org$pandalanguage$pandac$ASTNode* test858 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp859;
    panda$core$Object* $tmp860;
    panda$collections$Iterator* Iter$235$17872 = NULL;
    panda$collections$Iterator* $tmp873;
    panda$collections$Iterator* $tmp874;
    org$pandalanguage$pandac$ASTNode* s890 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp891;
    panda$core$Object* $tmp892;
    panda$core$Int64 $finallyReturn900;
    org$pandalanguage$pandac$ASTNode* test905 = NULL;
    panda$collections$ImmutableArray* statements907 = NULL;
    panda$core$Int64 result909;
    panda$collections$Iterator* Iter$241$17914 = NULL;
    panda$collections$Iterator* $tmp915;
    panda$collections$Iterator* $tmp916;
    org$pandalanguage$pandac$ASTNode* s932 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp933;
    panda$core$Object* $tmp934;
    panda$core$Int64 $finallyReturn942;
    int $tmp346;
    {
        $tmp348 = p_node;
        $match$125_9347 = $tmp348;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp348));
        panda$core$Bit $tmp349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp349.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp351 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9347->$data + 16));
            test350 = *$tmp351;
            panda$core$Int64 $tmp353 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test350);
            $finallyReturn351 = $tmp353;
            $tmp346 = 0;
            goto $l344;
            $l354:;
            return $finallyReturn351;
        }
        }
        else {
        panda$core$Bit $tmp356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp356.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp358 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9347->$data + 16));
            left357 = *$tmp358;
            org$pandalanguage$pandac$ASTNode** $tmp360 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9347->$data + 32));
            right359 = *$tmp360;
            panda$core$Int64 $tmp362 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left357);
            panda$core$Int64 $tmp363 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp362);
            panda$core$Int64 $tmp364 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right359);
            panda$core$Int64 $tmp365 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp363, $tmp364);
            $finallyReturn360 = $tmp365;
            $tmp346 = 1;
            goto $l344;
            $l366:;
            return $finallyReturn360;
        }
        }
        else {
        panda$core$Bit $tmp368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp368.value) {
        {
            $finallyReturn368 = ((panda$core$Int64) { 1 });
            $tmp346 = 2;
            goto $l344;
            $l370:;
            return $finallyReturn368;
        }
        }
        else {
        panda$core$Bit $tmp372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp372.value) {
        {
            panda$collections$ImmutableArray** $tmp374 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9347->$data + 16));
            statements373 = *$tmp374;
            result375 = ((panda$core$Int64) { 0 });
            {
                int $tmp378;
                {
                    ITable* $tmp382 = ((panda$collections$Iterable*) statements373)->$class->itable;
                    while ($tmp382->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp382 = $tmp382->next;
                    }
                    $fn384 $tmp383 = $tmp382->methods[0];
                    panda$collections$Iterator* $tmp385 = $tmp383(((panda$collections$Iterable*) statements373));
                    $tmp381 = $tmp385;
                    $tmp380 = $tmp381;
                    Iter$134$17379 = $tmp380;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp380));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
                    $l386:;
                    ITable* $tmp389 = Iter$134$17379->$class->itable;
                    while ($tmp389->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp389 = $tmp389->next;
                    }
                    $fn391 $tmp390 = $tmp389->methods[0];
                    panda$core$Bit $tmp392 = $tmp390(Iter$134$17379);
                    panda$core$Bit $tmp393 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp392);
                    bool $tmp388 = $tmp393.value;
                    if (!$tmp388) goto $l387;
                    {
                        int $tmp396;
                        {
                            ITable* $tmp400 = Iter$134$17379->$class->itable;
                            while ($tmp400->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp400 = $tmp400->next;
                            }
                            $fn402 $tmp401 = $tmp400->methods[1];
                            panda$core$Object* $tmp403 = $tmp401(Iter$134$17379);
                            $tmp399 = $tmp403;
                            $tmp398 = ((org$pandalanguage$pandac$ASTNode*) $tmp399);
                            s397 = $tmp398;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp398));
                            panda$core$Panda$unref$panda$core$Object($tmp399);
                            panda$core$Int64 $tmp404 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s397);
                            panda$core$Int64 $tmp405 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result375, $tmp404);
                            result375 = $tmp405;
                        }
                        $tmp396 = -1;
                        goto $l394;
                        $l394:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s397));
                        s397 = NULL;
                        switch ($tmp396) {
                            case -1: goto $l406;
                        }
                        $l406:;
                    }
                    goto $l386;
                    $l387:;
                }
                $tmp378 = -1;
                goto $l376;
                $l376:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$134$17379));
                Iter$134$17379 = NULL;
                switch ($tmp378) {
                    case -1: goto $l407;
                }
                $l407:;
            }
            $finallyReturn407 = result375;
            $tmp346 = 3;
            goto $l344;
            $l409:;
            return $finallyReturn407;
        }
        }
        else {
        panda$core$Bit $tmp411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp411.value) {
        {
            $finallyReturn411 = ((panda$core$Int64) { 1 });
            $tmp346 = 4;
            goto $l344;
            $l413:;
            return $finallyReturn411;
        }
        }
        else {
        panda$core$Bit $tmp415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp415.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp417 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9347->$data + 16));
            target416 = *$tmp417;
            panda$collections$ImmutableArray** $tmp419 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9347->$data + 24));
            args418 = *$tmp419;
            panda$core$Int64 $tmp421 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target416);
            result420 = $tmp421;
            {
                int $tmp424;
                {
                    ITable* $tmp428 = ((panda$collections$Iterable*) args418)->$class->itable;
                    while ($tmp428->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp428 = $tmp428->next;
                    }
                    $fn430 $tmp429 = $tmp428->methods[0];
                    panda$collections$Iterator* $tmp431 = $tmp429(((panda$collections$Iterable*) args418));
                    $tmp427 = $tmp431;
                    $tmp426 = $tmp427;
                    Iter$142$17425 = $tmp426;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp426));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp427));
                    $l432:;
                    ITable* $tmp435 = Iter$142$17425->$class->itable;
                    while ($tmp435->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp435 = $tmp435->next;
                    }
                    $fn437 $tmp436 = $tmp435->methods[0];
                    panda$core$Bit $tmp438 = $tmp436(Iter$142$17425);
                    panda$core$Bit $tmp439 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp438);
                    bool $tmp434 = $tmp439.value;
                    if (!$tmp434) goto $l433;
                    {
                        int $tmp442;
                        {
                            ITable* $tmp446 = Iter$142$17425->$class->itable;
                            while ($tmp446->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp446 = $tmp446->next;
                            }
                            $fn448 $tmp447 = $tmp446->methods[1];
                            panda$core$Object* $tmp449 = $tmp447(Iter$142$17425);
                            $tmp445 = $tmp449;
                            $tmp444 = ((org$pandalanguage$pandac$ASTNode*) $tmp445);
                            a443 = $tmp444;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp444));
                            panda$core$Panda$unref$panda$core$Object($tmp445);
                            panda$core$Int64 $tmp450 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a443);
                            panda$core$Int64 $tmp451 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result420, $tmp450);
                            result420 = $tmp451;
                        }
                        $tmp442 = -1;
                        goto $l440;
                        $l440:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a443));
                        a443 = NULL;
                        switch ($tmp442) {
                            case -1: goto $l452;
                        }
                        $l452:;
                    }
                    goto $l432;
                    $l433:;
                }
                $tmp424 = -1;
                goto $l422;
                $l422:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$142$17425));
                Iter$142$17425 = NULL;
                switch ($tmp424) {
                    case -1: goto $l453;
                }
                $l453:;
            }
            $finallyReturn453 = result420;
            $tmp346 = 5;
            goto $l344;
            $l455:;
            return $finallyReturn453;
        }
        }
        else {
        panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp457.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp459 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9347->$data + 16));
            base458 = *$tmp459;
            panda$core$Int64 $tmp461 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base458);
            $finallyReturn459 = $tmp461;
            $tmp346 = 6;
            goto $l344;
            $l462:;
            return $finallyReturn459;
        }
        }
        else {
        panda$core$Bit $tmp464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp464.value) {
        {
            $finallyReturn464 = ((panda$core$Int64) { 1 });
            $tmp346 = 7;
            goto $l344;
            $l466:;
            return $finallyReturn464;
        }
        }
        else {
        panda$core$Bit $tmp468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp468.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp470 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9347->$data + 24));
            value469 = *$tmp470;
            if (((panda$core$Bit) { value469 == NULL }).value) {
            {
                $finallyReturn470 = ((panda$core$Int64) { 0 });
                $tmp346 = 8;
                goto $l344;
                $l472:;
                return $finallyReturn470;
            }
            }
            panda$core$Int64 $tmp475 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value469);
            $finallyReturn473 = $tmp475;
            $tmp346 = 9;
            goto $l344;
            $l476:;
            return $finallyReturn473;
        }
        }
        else {
        panda$core$Bit $tmp478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp478.value) {
        {
            panda$collections$ImmutableArray** $tmp480 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9347->$data + 24));
            statements479 = *$tmp480;
            org$pandalanguage$pandac$ASTNode** $tmp482 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9347->$data + 32));
            test481 = *$tmp482;
            panda$core$Int64 $tmp484 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test481);
            result483 = $tmp484;
            {
                int $tmp487;
                {
                    ITable* $tmp491 = ((panda$collections$Iterable*) statements479)->$class->itable;
                    while ($tmp491->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp491 = $tmp491->next;
                    }
                    $fn493 $tmp492 = $tmp491->methods[0];
                    panda$collections$Iterator* $tmp494 = $tmp492(((panda$collections$Iterable*) statements479));
                    $tmp490 = $tmp494;
                    $tmp489 = $tmp490;
                    Iter$157$17488 = $tmp489;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp489));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
                    $l495:;
                    ITable* $tmp498 = Iter$157$17488->$class->itable;
                    while ($tmp498->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp498 = $tmp498->next;
                    }
                    $fn500 $tmp499 = $tmp498->methods[0];
                    panda$core$Bit $tmp501 = $tmp499(Iter$157$17488);
                    panda$core$Bit $tmp502 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp501);
                    bool $tmp497 = $tmp502.value;
                    if (!$tmp497) goto $l496;
                    {
                        int $tmp505;
                        {
                            ITable* $tmp509 = Iter$157$17488->$class->itable;
                            while ($tmp509->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp509 = $tmp509->next;
                            }
                            $fn511 $tmp510 = $tmp509->methods[1];
                            panda$core$Object* $tmp512 = $tmp510(Iter$157$17488);
                            $tmp508 = $tmp512;
                            $tmp507 = ((org$pandalanguage$pandac$ASTNode*) $tmp508);
                            s506 = $tmp507;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp507));
                            panda$core$Panda$unref$panda$core$Object($tmp508);
                            panda$core$Int64 $tmp513 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s506);
                            panda$core$Int64 $tmp514 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result483, $tmp513);
                            result483 = $tmp514;
                        }
                        $tmp505 = -1;
                        goto $l503;
                        $l503:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s506));
                        s506 = NULL;
                        switch ($tmp505) {
                            case -1: goto $l515;
                        }
                        $l515:;
                    }
                    goto $l495;
                    $l496:;
                }
                $tmp487 = -1;
                goto $l485;
                $l485:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$157$17488));
                Iter$157$17488 = NULL;
                switch ($tmp487) {
                    case -1: goto $l516;
                }
                $l516:;
            }
            $finallyReturn516 = result483;
            $tmp346 = 10;
            goto $l344;
            $l518:;
            return $finallyReturn516;
        }
        }
        else {
        panda$core$Bit $tmp520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp520.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp522 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9347->$data + 16));
            base521 = *$tmp522;
            panda$core$Int64 $tmp524 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base521);
            $finallyReturn522 = $tmp524;
            $tmp346 = 11;
            goto $l344;
            $l525:;
            return $finallyReturn522;
        }
        }
        else {
        panda$core$Bit $tmp527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp527.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp529 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9347->$data + 32));
            list528 = *$tmp529;
            panda$collections$ImmutableArray** $tmp531 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9347->$data + 40));
            statements530 = *$tmp531;
            panda$core$Int64 $tmp533 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list528);
            result532 = $tmp533;
            {
                int $tmp536;
                {
                    ITable* $tmp540 = ((panda$collections$Iterable*) statements530)->$class->itable;
                    while ($tmp540->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp540 = $tmp540->next;
                    }
                    $fn542 $tmp541 = $tmp540->methods[0];
                    panda$collections$Iterator* $tmp543 = $tmp541(((panda$collections$Iterable*) statements530));
                    $tmp539 = $tmp543;
                    $tmp538 = $tmp539;
                    Iter$165$17537 = $tmp538;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp538));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp539));
                    $l544:;
                    ITable* $tmp547 = Iter$165$17537->$class->itable;
                    while ($tmp547->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp547 = $tmp547->next;
                    }
                    $fn549 $tmp548 = $tmp547->methods[0];
                    panda$core$Bit $tmp550 = $tmp548(Iter$165$17537);
                    panda$core$Bit $tmp551 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp550);
                    bool $tmp546 = $tmp551.value;
                    if (!$tmp546) goto $l545;
                    {
                        int $tmp554;
                        {
                            ITable* $tmp558 = Iter$165$17537->$class->itable;
                            while ($tmp558->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp558 = $tmp558->next;
                            }
                            $fn560 $tmp559 = $tmp558->methods[1];
                            panda$core$Object* $tmp561 = $tmp559(Iter$165$17537);
                            $tmp557 = $tmp561;
                            $tmp556 = ((org$pandalanguage$pandac$ASTNode*) $tmp557);
                            s555 = $tmp556;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp556));
                            panda$core$Panda$unref$panda$core$Object($tmp557);
                            panda$core$Int64 $tmp562 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s555);
                            panda$core$Int64 $tmp563 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result532, $tmp562);
                            result532 = $tmp563;
                        }
                        $tmp554 = -1;
                        goto $l552;
                        $l552:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s555));
                        s555 = NULL;
                        switch ($tmp554) {
                            case -1: goto $l564;
                        }
                        $l564:;
                    }
                    goto $l544;
                    $l545:;
                }
                $tmp536 = -1;
                goto $l534;
                $l534:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$165$17537));
                Iter$165$17537 = NULL;
                switch ($tmp536) {
                    case -1: goto $l565;
                }
                $l565:;
            }
            $finallyReturn565 = result532;
            $tmp346 = 12;
            goto $l344;
            $l567:;
            return $finallyReturn565;
        }
        }
        else {
        panda$core$Bit $tmp569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp569.value) {
        {
            $finallyReturn569 = ((panda$core$Int64) { 0 });
            $tmp346 = 13;
            goto $l344;
            $l571:;
            return $finallyReturn569;
        }
        }
        else {
        panda$core$Bit $tmp573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp573.value) {
        {
            $finallyReturn573 = ((panda$core$Int64) { 1 });
            $tmp346 = 14;
            goto $l344;
            $l575:;
            return $finallyReturn573;
        }
        }
        else {
        panda$core$Bit $tmp577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp577.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp579 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9347->$data + 16));
            test578 = *$tmp579;
            panda$collections$ImmutableArray** $tmp581 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9347->$data + 24));
            ifTrue580 = *$tmp581;
            org$pandalanguage$pandac$ASTNode** $tmp583 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9347->$data + 32));
            ifFalse582 = *$tmp583;
            panda$core$Int64 $tmp585 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test578);
            result584 = $tmp585;
            {
                int $tmp588;
                {
                    ITable* $tmp592 = ((panda$collections$Iterable*) ifTrue580)->$class->itable;
                    while ($tmp592->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp592 = $tmp592->next;
                    }
                    $fn594 $tmp593 = $tmp592->methods[0];
                    panda$collections$Iterator* $tmp595 = $tmp593(((panda$collections$Iterable*) ifTrue580));
                    $tmp591 = $tmp595;
                    $tmp590 = $tmp591;
                    Iter$175$17589 = $tmp590;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp590));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp591));
                    $l596:;
                    ITable* $tmp599 = Iter$175$17589->$class->itable;
                    while ($tmp599->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp599 = $tmp599->next;
                    }
                    $fn601 $tmp600 = $tmp599->methods[0];
                    panda$core$Bit $tmp602 = $tmp600(Iter$175$17589);
                    panda$core$Bit $tmp603 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp602);
                    bool $tmp598 = $tmp603.value;
                    if (!$tmp598) goto $l597;
                    {
                        int $tmp606;
                        {
                            ITable* $tmp610 = Iter$175$17589->$class->itable;
                            while ($tmp610->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp610 = $tmp610->next;
                            }
                            $fn612 $tmp611 = $tmp610->methods[1];
                            panda$core$Object* $tmp613 = $tmp611(Iter$175$17589);
                            $tmp609 = $tmp613;
                            $tmp608 = ((org$pandalanguage$pandac$ASTNode*) $tmp609);
                            s607 = $tmp608;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp608));
                            panda$core$Panda$unref$panda$core$Object($tmp609);
                            panda$core$Int64 $tmp614 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s607);
                            panda$core$Int64 $tmp615 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result584, $tmp614);
                            result584 = $tmp615;
                        }
                        $tmp606 = -1;
                        goto $l604;
                        $l604:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s607));
                        s607 = NULL;
                        switch ($tmp606) {
                            case -1: goto $l616;
                        }
                        $l616:;
                    }
                    goto $l596;
                    $l597:;
                }
                $tmp588 = -1;
                goto $l586;
                $l586:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$175$17589));
                Iter$175$17589 = NULL;
                switch ($tmp588) {
                    case -1: goto $l617;
                }
                $l617:;
            }
            if (((panda$core$Bit) { ifFalse582 != NULL }).value) {
            {
                panda$core$Int64 $tmp618 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse582);
                panda$core$Int64 $tmp619 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result584, $tmp618);
                result584 = $tmp619;
            }
            }
            $finallyReturn619 = result584;
            $tmp346 = 15;
            goto $l344;
            $l621:;
            return $finallyReturn619;
        }
        }
        else {
        panda$core$Bit $tmp623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp623.value) {
        {
            $finallyReturn623 = ((panda$core$Int64) { 1 });
            $tmp346 = 16;
            goto $l344;
            $l625:;
            return $finallyReturn623;
        }
        }
        else {
        panda$core$Bit $tmp627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp627.value) {
        {
            panda$collections$ImmutableArray** $tmp629 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9347->$data + 24));
            statements628 = *$tmp629;
            result630 = ((panda$core$Int64) { 0 });
            {
                int $tmp633;
                {
                    ITable* $tmp637 = ((panda$collections$Iterable*) statements628)->$class->itable;
                    while ($tmp637->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp637 = $tmp637->next;
                    }
                    $fn639 $tmp638 = $tmp637->methods[0];
                    panda$collections$Iterator* $tmp640 = $tmp638(((panda$collections$Iterable*) statements628));
                    $tmp636 = $tmp640;
                    $tmp635 = $tmp636;
                    Iter$186$17634 = $tmp635;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp635));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp636));
                    $l641:;
                    ITable* $tmp644 = Iter$186$17634->$class->itable;
                    while ($tmp644->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp644 = $tmp644->next;
                    }
                    $fn646 $tmp645 = $tmp644->methods[0];
                    panda$core$Bit $tmp647 = $tmp645(Iter$186$17634);
                    panda$core$Bit $tmp648 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp647);
                    bool $tmp643 = $tmp648.value;
                    if (!$tmp643) goto $l642;
                    {
                        int $tmp651;
                        {
                            ITable* $tmp655 = Iter$186$17634->$class->itable;
                            while ($tmp655->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp655 = $tmp655->next;
                            }
                            $fn657 $tmp656 = $tmp655->methods[1];
                            panda$core$Object* $tmp658 = $tmp656(Iter$186$17634);
                            $tmp654 = $tmp658;
                            $tmp653 = ((org$pandalanguage$pandac$ASTNode*) $tmp654);
                            s652 = $tmp653;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp653));
                            panda$core$Panda$unref$panda$core$Object($tmp654);
                            panda$core$Int64 $tmp659 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s652);
                            panda$core$Int64 $tmp660 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result630, $tmp659);
                            result630 = $tmp660;
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$186$17634));
                Iter$186$17634 = NULL;
                switch ($tmp633) {
                    case -1: goto $l662;
                }
                $l662:;
            }
            $finallyReturn662 = result630;
            $tmp346 = 17;
            goto $l344;
            $l664:;
            return $finallyReturn662;
        }
        }
        else {
        panda$core$Bit $tmp666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp666.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp668 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9347->$data + 16));
            value667 = *$tmp668;
            panda$collections$ImmutableArray** $tmp670 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9347->$data + 24));
            whens669 = *$tmp670;
            panda$collections$ImmutableArray** $tmp672 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9347->$data + 32));
            other671 = *$tmp672;
            panda$core$Int64 $tmp674 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value667);
            result673 = $tmp674;
            {
                int $tmp677;
                {
                    ITable* $tmp681 = ((panda$collections$Iterable*) whens669)->$class->itable;
                    while ($tmp681->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp681 = $tmp681->next;
                    }
                    $fn683 $tmp682 = $tmp681->methods[0];
                    panda$collections$Iterator* $tmp684 = $tmp682(((panda$collections$Iterable*) whens669));
                    $tmp680 = $tmp684;
                    $tmp679 = $tmp680;
                    Iter$192$17678 = $tmp679;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp679));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp680));
                    $l685:;
                    ITable* $tmp688 = Iter$192$17678->$class->itable;
                    while ($tmp688->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp688 = $tmp688->next;
                    }
                    $fn690 $tmp689 = $tmp688->methods[0];
                    panda$core$Bit $tmp691 = $tmp689(Iter$192$17678);
                    panda$core$Bit $tmp692 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp691);
                    bool $tmp687 = $tmp692.value;
                    if (!$tmp687) goto $l686;
                    {
                        int $tmp695;
                        {
                            ITable* $tmp699 = Iter$192$17678->$class->itable;
                            while ($tmp699->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp699 = $tmp699->next;
                            }
                            $fn701 $tmp700 = $tmp699->methods[1];
                            panda$core$Object* $tmp702 = $tmp700(Iter$192$17678);
                            $tmp698 = $tmp702;
                            $tmp697 = ((org$pandalanguage$pandac$ASTNode*) $tmp698);
                            w696 = $tmp697;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp697));
                            panda$core$Panda$unref$panda$core$Object($tmp698);
                            panda$core$Int64 $tmp703 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w696);
                            panda$core$Int64 $tmp704 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result673, $tmp703);
                            result673 = $tmp704;
                        }
                        $tmp695 = -1;
                        goto $l693;
                        $l693:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w696));
                        w696 = NULL;
                        switch ($tmp695) {
                            case -1: goto $l705;
                        }
                        $l705:;
                    }
                    goto $l685;
                    $l686:;
                }
                $tmp677 = -1;
                goto $l675;
                $l675:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$192$17678));
                Iter$192$17678 = NULL;
                switch ($tmp677) {
                    case -1: goto $l706;
                }
                $l706:;
            }
            if (((panda$core$Bit) { other671 != NULL }).value) {
            {
                {
                    int $tmp709;
                    {
                        ITable* $tmp713 = ((panda$collections$Iterable*) other671)->$class->itable;
                        while ($tmp713->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp713 = $tmp713->next;
                        }
                        $fn715 $tmp714 = $tmp713->methods[0];
                        panda$collections$Iterator* $tmp716 = $tmp714(((panda$collections$Iterable*) other671));
                        $tmp712 = $tmp716;
                        $tmp711 = $tmp712;
                        Iter$196$21710 = $tmp711;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp711));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp712));
                        $l717:;
                        ITable* $tmp720 = Iter$196$21710->$class->itable;
                        while ($tmp720->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp720 = $tmp720->next;
                        }
                        $fn722 $tmp721 = $tmp720->methods[0];
                        panda$core$Bit $tmp723 = $tmp721(Iter$196$21710);
                        panda$core$Bit $tmp724 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp723);
                        bool $tmp719 = $tmp724.value;
                        if (!$tmp719) goto $l718;
                        {
                            int $tmp727;
                            {
                                ITable* $tmp731 = Iter$196$21710->$class->itable;
                                while ($tmp731->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp731 = $tmp731->next;
                                }
                                $fn733 $tmp732 = $tmp731->methods[1];
                                panda$core$Object* $tmp734 = $tmp732(Iter$196$21710);
                                $tmp730 = $tmp734;
                                $tmp729 = ((org$pandalanguage$pandac$ASTNode*) $tmp730);
                                s728 = $tmp729;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp729));
                                panda$core$Panda$unref$panda$core$Object($tmp730);
                                panda$core$Int64 $tmp735 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s728);
                                panda$core$Int64 $tmp736 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result673, $tmp735);
                                result673 = $tmp736;
                            }
                            $tmp727 = -1;
                            goto $l725;
                            $l725:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s728));
                            s728 = NULL;
                            switch ($tmp727) {
                                case -1: goto $l737;
                            }
                            $l737:;
                        }
                        goto $l717;
                        $l718:;
                    }
                    $tmp709 = -1;
                    goto $l707;
                    $l707:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$196$21710));
                    Iter$196$21710 = NULL;
                    switch ($tmp709) {
                        case -1: goto $l738;
                    }
                    $l738:;
                }
            }
            }
            $finallyReturn738 = result673;
            $tmp346 = 18;
            goto $l344;
            $l740:;
            return $finallyReturn738;
        }
        }
        else {
        panda$core$Bit $tmp742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp742.value) {
        {
            $finallyReturn742 = ((panda$core$Int64) { 1 });
            $tmp346 = 19;
            goto $l344;
            $l744:;
            return $finallyReturn742;
        }
        }
        else {
        panda$core$Bit $tmp746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp746.value) {
        {
            $finallyReturn746 = ((panda$core$Int64) { 0 });
            $tmp346 = 20;
            goto $l344;
            $l748:;
            return $finallyReturn746;
        }
        }
        else {
        panda$core$Bit $tmp750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp750.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp752 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9347->$data + 24));
            base751 = *$tmp752;
            panda$core$Int64 $tmp754 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base751);
            panda$core$Int64 $tmp755 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp754);
            $finallyReturn752 = $tmp755;
            $tmp346 = 21;
            goto $l344;
            $l756:;
            return $finallyReturn752;
        }
        }
        else {
        panda$core$Bit $tmp758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp758.value) {
        {
            $finallyReturn758 = ((panda$core$Int64) { 1 });
            $tmp346 = 22;
            goto $l344;
            $l760:;
            return $finallyReturn758;
        }
        }
        else {
        panda$core$Bit $tmp762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp762.value) {
        {
            $finallyReturn762 = ((panda$core$Int64) { 1 });
            $tmp346 = 23;
            goto $l344;
            $l764:;
            return $finallyReturn762;
        }
        }
        else {
        panda$core$Bit $tmp766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp766.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp768 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9347->$data + 16));
            value767 = *$tmp768;
            if (((panda$core$Bit) { value767 == NULL }).value) {
            {
                $finallyReturn768 = ((panda$core$Int64) { 0 });
                $tmp346 = 24;
                goto $l344;
                $l770:;
                return $finallyReturn768;
            }
            }
            panda$core$Int64 $tmp773 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value767);
            $finallyReturn771 = $tmp773;
            $tmp346 = 25;
            goto $l344;
            $l774:;
            return $finallyReturn771;
        }
        }
        else {
        panda$core$Bit $tmp776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp776.value) {
        {
            $finallyReturn776 = ((panda$core$Int64) { 1 });
            $tmp346 = 26;
            goto $l344;
            $l778:;
            return $finallyReturn776;
        }
        }
        else {
        panda$core$Bit $tmp780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp780.value) {
        {
            $finallyReturn780 = ((panda$core$Int64) { 1 });
            $tmp346 = 27;
            goto $l344;
            $l782:;
            return $finallyReturn780;
        }
        }
        else {
        panda$core$Bit $tmp784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp784.value) {
        {
            $finallyReturn784 = ((panda$core$Int64) { 1 });
            $tmp346 = 28;
            goto $l344;
            $l786:;
            return $finallyReturn784;
        }
        }
        else {
        panda$core$Bit $tmp788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp788.value) {
        {
            $finallyReturn788 = ((panda$core$Int64) { 0 });
            $tmp346 = 29;
            goto $l344;
            $l790:;
            return $finallyReturn788;
        }
        }
        else {
        panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp792.value) {
        {
            panda$collections$ImmutableArray** $tmp794 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9347->$data + 24));
            decls793 = *$tmp794;
            result795 = ((panda$core$Int64) { 0 });
            {
                int $tmp798;
                {
                    ITable* $tmp802 = ((panda$collections$Iterable*) decls793)->$class->itable;
                    while ($tmp802->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp802 = $tmp802->next;
                    }
                    $fn804 $tmp803 = $tmp802->methods[0];
                    panda$collections$Iterator* $tmp805 = $tmp803(((panda$collections$Iterable*) decls793));
                    $tmp801 = $tmp805;
                    $tmp800 = $tmp801;
                    Iter$226$17799 = $tmp800;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp800));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp801));
                    $l806:;
                    ITable* $tmp809 = Iter$226$17799->$class->itable;
                    while ($tmp809->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp809 = $tmp809->next;
                    }
                    $fn811 $tmp810 = $tmp809->methods[0];
                    panda$core$Bit $tmp812 = $tmp810(Iter$226$17799);
                    panda$core$Bit $tmp813 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp812);
                    bool $tmp808 = $tmp813.value;
                    if (!$tmp808) goto $l807;
                    {
                        int $tmp816;
                        {
                            ITable* $tmp820 = Iter$226$17799->$class->itable;
                            while ($tmp820->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp820 = $tmp820->next;
                            }
                            $fn822 $tmp821 = $tmp820->methods[1];
                            panda$core$Object* $tmp823 = $tmp821(Iter$226$17799);
                            $tmp819 = $tmp823;
                            $tmp818 = ((org$pandalanguage$pandac$ASTNode*) $tmp819);
                            decl817 = $tmp818;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp818));
                            panda$core$Panda$unref$panda$core$Object($tmp819);
                            panda$core$Int64 $tmp824 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl817);
                            panda$core$Int64 $tmp825 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result795, $tmp824);
                            result795 = $tmp825;
                        }
                        $tmp816 = -1;
                        goto $l814;
                        $l814:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl817));
                        decl817 = NULL;
                        switch ($tmp816) {
                            case -1: goto $l826;
                        }
                        $l826:;
                    }
                    goto $l806;
                    $l807:;
                }
                $tmp798 = -1;
                goto $l796;
                $l796:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$226$17799));
                Iter$226$17799 = NULL;
                switch ($tmp798) {
                    case -1: goto $l827;
                }
                $l827:;
            }
            $finallyReturn827 = result795;
            $tmp346 = 30;
            goto $l344;
            $l829:;
            return $finallyReturn827;
        }
        }
        else {
        panda$core$Bit $tmp831 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp831.value) {
        {
            panda$collections$ImmutableArray** $tmp833 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9347->$data + 16));
            tests832 = *$tmp833;
            panda$collections$ImmutableArray** $tmp835 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9347->$data + 24));
            statements834 = *$tmp835;
            result836 = ((panda$core$Int64) { 0 });
            {
                int $tmp839;
                {
                    ITable* $tmp843 = ((panda$collections$Iterable*) tests832)->$class->itable;
                    while ($tmp843->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp843 = $tmp843->next;
                    }
                    $fn845 $tmp844 = $tmp843->methods[0];
                    panda$collections$Iterator* $tmp846 = $tmp844(((panda$collections$Iterable*) tests832));
                    $tmp842 = $tmp846;
                    $tmp841 = $tmp842;
                    Iter$232$17840 = $tmp841;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp841));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp842));
                    $l847:;
                    ITable* $tmp850 = Iter$232$17840->$class->itable;
                    while ($tmp850->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp850 = $tmp850->next;
                    }
                    $fn852 $tmp851 = $tmp850->methods[0];
                    panda$core$Bit $tmp853 = $tmp851(Iter$232$17840);
                    panda$core$Bit $tmp854 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp853);
                    bool $tmp849 = $tmp854.value;
                    if (!$tmp849) goto $l848;
                    {
                        int $tmp857;
                        {
                            ITable* $tmp861 = Iter$232$17840->$class->itable;
                            while ($tmp861->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp861 = $tmp861->next;
                            }
                            $fn863 $tmp862 = $tmp861->methods[1];
                            panda$core$Object* $tmp864 = $tmp862(Iter$232$17840);
                            $tmp860 = $tmp864;
                            $tmp859 = ((org$pandalanguage$pandac$ASTNode*) $tmp860);
                            test858 = $tmp859;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp859));
                            panda$core$Panda$unref$panda$core$Object($tmp860);
                            panda$core$Int64 $tmp865 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test858);
                            panda$core$Int64 $tmp866 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result836, $tmp865);
                            result836 = $tmp866;
                        }
                        $tmp857 = -1;
                        goto $l855;
                        $l855:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test858));
                        test858 = NULL;
                        switch ($tmp857) {
                            case -1: goto $l867;
                        }
                        $l867:;
                    }
                    goto $l847;
                    $l848:;
                }
                $tmp839 = -1;
                goto $l837;
                $l837:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$232$17840));
                Iter$232$17840 = NULL;
                switch ($tmp839) {
                    case -1: goto $l868;
                }
                $l868:;
            }
            {
                int $tmp871;
                {
                    ITable* $tmp875 = ((panda$collections$Iterable*) statements834)->$class->itable;
                    while ($tmp875->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp875 = $tmp875->next;
                    }
                    $fn877 $tmp876 = $tmp875->methods[0];
                    panda$collections$Iterator* $tmp878 = $tmp876(((panda$collections$Iterable*) statements834));
                    $tmp874 = $tmp878;
                    $tmp873 = $tmp874;
                    Iter$235$17872 = $tmp873;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp873));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp874));
                    $l879:;
                    ITable* $tmp882 = Iter$235$17872->$class->itable;
                    while ($tmp882->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp882 = $tmp882->next;
                    }
                    $fn884 $tmp883 = $tmp882->methods[0];
                    panda$core$Bit $tmp885 = $tmp883(Iter$235$17872);
                    panda$core$Bit $tmp886 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp885);
                    bool $tmp881 = $tmp886.value;
                    if (!$tmp881) goto $l880;
                    {
                        int $tmp889;
                        {
                            ITable* $tmp893 = Iter$235$17872->$class->itable;
                            while ($tmp893->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp893 = $tmp893->next;
                            }
                            $fn895 $tmp894 = $tmp893->methods[1];
                            panda$core$Object* $tmp896 = $tmp894(Iter$235$17872);
                            $tmp892 = $tmp896;
                            $tmp891 = ((org$pandalanguage$pandac$ASTNode*) $tmp892);
                            s890 = $tmp891;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp891));
                            panda$core$Panda$unref$panda$core$Object($tmp892);
                            panda$core$Int64 $tmp897 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s890);
                            panda$core$Int64 $tmp898 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result836, $tmp897);
                            result836 = $tmp898;
                        }
                        $tmp889 = -1;
                        goto $l887;
                        $l887:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s890));
                        s890 = NULL;
                        switch ($tmp889) {
                            case -1: goto $l899;
                        }
                        $l899:;
                    }
                    goto $l879;
                    $l880:;
                }
                $tmp871 = -1;
                goto $l869;
                $l869:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$235$17872));
                Iter$235$17872 = NULL;
                switch ($tmp871) {
                    case -1: goto $l900;
                }
                $l900:;
            }
            $finallyReturn900 = result836;
            $tmp346 = 31;
            goto $l344;
            $l902:;
            return $finallyReturn900;
        }
        }
        else {
        panda$core$Bit $tmp904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9347->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp904.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp906 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$125_9347->$data + 24));
            test905 = *$tmp906;
            panda$collections$ImmutableArray** $tmp908 = ((panda$collections$ImmutableArray**) ((char*) $match$125_9347->$data + 32));
            statements907 = *$tmp908;
            panda$core$Int64 $tmp910 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test905);
            result909 = $tmp910;
            {
                int $tmp913;
                {
                    ITable* $tmp917 = ((panda$collections$Iterable*) statements907)->$class->itable;
                    while ($tmp917->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp917 = $tmp917->next;
                    }
                    $fn919 $tmp918 = $tmp917->methods[0];
                    panda$collections$Iterator* $tmp920 = $tmp918(((panda$collections$Iterable*) statements907));
                    $tmp916 = $tmp920;
                    $tmp915 = $tmp916;
                    Iter$241$17914 = $tmp915;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp915));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp916));
                    $l921:;
                    ITable* $tmp924 = Iter$241$17914->$class->itable;
                    while ($tmp924->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp924 = $tmp924->next;
                    }
                    $fn926 $tmp925 = $tmp924->methods[0];
                    panda$core$Bit $tmp927 = $tmp925(Iter$241$17914);
                    panda$core$Bit $tmp928 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp927);
                    bool $tmp923 = $tmp928.value;
                    if (!$tmp923) goto $l922;
                    {
                        int $tmp931;
                        {
                            ITable* $tmp935 = Iter$241$17914->$class->itable;
                            while ($tmp935->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp935 = $tmp935->next;
                            }
                            $fn937 $tmp936 = $tmp935->methods[1];
                            panda$core$Object* $tmp938 = $tmp936(Iter$241$17914);
                            $tmp934 = $tmp938;
                            $tmp933 = ((org$pandalanguage$pandac$ASTNode*) $tmp934);
                            s932 = $tmp933;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp933));
                            panda$core$Panda$unref$panda$core$Object($tmp934);
                            panda$core$Int64 $tmp939 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s932);
                            panda$core$Int64 $tmp940 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result909, $tmp939);
                            result909 = $tmp940;
                        }
                        $tmp931 = -1;
                        goto $l929;
                        $l929:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s932));
                        s932 = NULL;
                        switch ($tmp931) {
                            case -1: goto $l941;
                        }
                        $l941:;
                    }
                    goto $l921;
                    $l922:;
                }
                $tmp913 = -1;
                goto $l911;
                $l911:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$241$17914));
                Iter$241$17914 = NULL;
                switch ($tmp913) {
                    case -1: goto $l942;
                }
                $l942:;
            }
            $finallyReturn942 = result909;
            $tmp346 = 32;
            goto $l344;
            $l944:;
            return $finallyReturn942;
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
    $tmp346 = -1;
    goto $l344;
    $l344:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp348));
    switch ($tmp346) {
        case 29: goto $l790;
        case 20: goto $l748;
        case 23: goto $l764;
        case 10: goto $l518;
        case 24: goto $l770;
        case 11: goto $l525;
        case 19: goto $l744;
        case 2: goto $l370;
        case 32: goto $l944;
        case 16: goto $l625;
        case 6: goto $l462;
        case -1: goto $l946;
        case 21: goto $l756;
        case 5: goto $l455;
        case 0: goto $l354;
        case 25: goto $l774;
        case 18: goto $l740;
        case 27: goto $l782;
        case 12: goto $l567;
        case 31: goto $l902;
        case 13: goto $l571;
        case 26: goto $l778;
        case 4: goto $l413;
        case 17: goto $l664;
        case 9: goto $l476;
        case 1: goto $l366;
        case 3: goto $l409;
        case 7: goto $l466;
        case 15: goto $l621;
        case 22: goto $l760;
        case 30: goto $l829;
        case 8: goto $l472;
        case 28: goto $l786;
        case 14: goto $l575;
    }
    $l946:;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Object* $tmp949;
    panda$core$Int64 c960;
    panda$collections$Iterator* Iter$254$13964 = NULL;
    panda$collections$Iterator* $tmp965;
    panda$collections$Iterator* $tmp966;
    org$pandalanguage$pandac$ASTNode* s982 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp983;
    panda$core$Object* $tmp984;
    panda$core$Bit $finallyReturn991;
    panda$core$Bit $finallyReturn997;
    panda$core$Bit $finallyReturn999;
    panda$core$Object* $tmp951 = (($fn950) self->compiler->$class->vtable[2])(self->compiler);
    $tmp949 = $tmp951;
    panda$core$Bit $tmp952 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp949)->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp948 = $tmp952.value;
    panda$core$Panda$unref$panda$core$Object($tmp949);
    if (!$tmp948) goto $l953;
    panda$core$Bit $tmp954 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp955 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp954);
    $tmp948 = $tmp955.value;
    $l953:;
    panda$core$Bit $tmp956 = { $tmp948 };
    bool $tmp947 = $tmp956.value;
    if (!$tmp947) goto $l957;
    panda$core$Bit $tmp958 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp947 = $tmp958.value;
    $l957:;
    panda$core$Bit $tmp959 = { $tmp947 };
    if ($tmp959.value) {
    {
        c960 = ((panda$core$Int64) { 0 });
        {
            int $tmp963;
            {
                ITable* $tmp967 = ((panda$collections$Iterable*) p_statements)->$class->itable;
                while ($tmp967->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp967 = $tmp967->next;
                }
                $fn969 $tmp968 = $tmp967->methods[0];
                panda$collections$Iterator* $tmp970 = $tmp968(((panda$collections$Iterable*) p_statements));
                $tmp966 = $tmp970;
                $tmp965 = $tmp966;
                Iter$254$13964 = $tmp965;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp965));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp966));
                $l971:;
                ITable* $tmp974 = Iter$254$13964->$class->itable;
                while ($tmp974->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp974 = $tmp974->next;
                }
                $fn976 $tmp975 = $tmp974->methods[0];
                panda$core$Bit $tmp977 = $tmp975(Iter$254$13964);
                panda$core$Bit $tmp978 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp977);
                bool $tmp973 = $tmp978.value;
                if (!$tmp973) goto $l972;
                {
                    int $tmp981;
                    {
                        ITable* $tmp985 = Iter$254$13964->$class->itable;
                        while ($tmp985->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp985 = $tmp985->next;
                        }
                        $fn987 $tmp986 = $tmp985->methods[1];
                        panda$core$Object* $tmp988 = $tmp986(Iter$254$13964);
                        $tmp984 = $tmp988;
                        $tmp983 = ((org$pandalanguage$pandac$ASTNode*) $tmp984);
                        s982 = $tmp983;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp983));
                        panda$core$Panda$unref$panda$core$Object($tmp984);
                        panda$core$Int64 $tmp989 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s982);
                        panda$core$Int64 $tmp990 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c960, $tmp989);
                        c960 = $tmp990;
                        panda$core$Bit $tmp991 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c960, ((panda$core$Int64) { 10 }));
                        if ($tmp991.value) {
                        {
                            $finallyReturn991 = ((panda$core$Bit) { false });
                            $tmp981 = 0;
                            goto $l979;
                            $l993:;
                            $tmp963 = 0;
                            goto $l961;
                            $l994:;
                            return $finallyReturn991;
                        }
                        }
                    }
                    $tmp981 = -1;
                    goto $l979;
                    $l979:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s982));
                    s982 = NULL;
                    switch ($tmp981) {
                        case 0: goto $l993;
                        case -1: goto $l996;
                    }
                    $l996:;
                }
                goto $l971;
                $l972:;
            }
            $tmp963 = -1;
            goto $l961;
            $l961:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$254$13964));
            Iter$254$13964 = NULL;
            switch ($tmp963) {
                case -1: goto $l997;
                case 0: goto $l994;
            }
            $l997:;
        }
        $finallyReturn997 = ((panda$core$Bit) { true });
        return $finallyReturn997;
    }
    }
    $finallyReturn999 = ((panda$core$Bit) { false });
    return $finallyReturn999;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment1005 = NULL;
    panda$core$String* $tmp1006;
    panda$core$String* $tmp1007;
    org$pandalanguage$pandac$ASTNode* $match$275_131011 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1012;
    org$pandalanguage$pandac$Position position1014;
    panda$core$String* text1016 = NULL;
    panda$core$String* $tmp1018;
    panda$core$String* $tmp1019;
    org$pandalanguage$pandac$Annotations* annotations1021 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1022;
    org$pandalanguage$pandac$Annotations* $tmp1023;
    panda$collections$Array* parameters1036 = NULL;
    panda$collections$Array* $tmp1037;
    panda$collections$Array* $tmp1038;
    panda$collections$Iterator* Iter$287$91043 = NULL;
    panda$collections$Iterator* $tmp1044;
    panda$collections$Iterator* $tmp1045;
    org$pandalanguage$pandac$ASTNode* p1061 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1062;
    panda$core$Object* $tmp1063;
    org$pandalanguage$pandac$ASTNode* $match$288_131071 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1072;
    panda$core$String* name1074 = NULL;
    org$pandalanguage$pandac$ASTNode* type1076 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1078;
    org$pandalanguage$pandac$Type* $tmp1080;
    org$pandalanguage$pandac$Type* returnType1085 = NULL;
    org$pandalanguage$pandac$Type* $tmp1086;
    org$pandalanguage$pandac$Type* $tmp1087;
    org$pandalanguage$pandac$Type* $tmp1088;
    org$pandalanguage$pandac$Type* $tmp1090;
    org$pandalanguage$pandac$Type* $tmp1091;
    org$pandalanguage$pandac$Type* $tmp1092;
    org$pandalanguage$pandac$Type* $tmp1097;
    panda$core$Object* $tmp1101;
    panda$core$Object* $tmp1117;
    panda$core$String* $tmp1120;
    panda$core$String* $tmp1121;
    org$pandalanguage$pandac$MethodDecl* $finallyReturn1125;
    org$pandalanguage$pandac$MethodDecl* $tmp1127;
    org$pandalanguage$pandac$MethodDecl* $tmp1128;
    int $tmp1004;
    {
        memset(&doccomment1005, 0, sizeof(doccomment1005));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1006 = doccomment1005;
                $tmp1007 = NULL;
                doccomment1005 = $tmp1007;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1007));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1006));
            }
        }
        }
        else {
        {
            int $tmp1010;
            {
                $tmp1012 = p_rawDoccomment;
                $match$275_131011 = $tmp1012;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1012));
                panda$core$Bit $tmp1013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$275_131011->$rawValue, ((panda$core$Int64) { 34 }));
                if ($tmp1013.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1015 = ((org$pandalanguage$pandac$Position*) ((char*) $match$275_131011->$data + 0));
                    position1014 = *$tmp1015;
                    panda$core$String** $tmp1017 = ((panda$core$String**) ((char*) $match$275_131011->$data + 16));
                    text1016 = *$tmp1017;
                    {
                        $tmp1018 = doccomment1005;
                        $tmp1019 = text1016;
                        doccomment1005 = $tmp1019;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1019));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1018));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1010 = -1;
            goto $l1008;
            $l1008:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1012));
            switch ($tmp1010) {
                case -1: goto $l1020;
            }
            $l1020:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1024 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1023 = $tmp1024;
        $tmp1022 = $tmp1023;
        annotations1021 = $tmp1022;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1022));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1023));
        panda$core$Bit $tmp1027 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        bool $tmp1026 = $tmp1027.value;
        if (!$tmp1026) goto $l1028;
        panda$core$Bit $tmp1029 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
        $tmp1026 = $tmp1029.value;
        $l1028:;
        panda$core$Bit $tmp1030 = { $tmp1026 };
        bool $tmp1025 = $tmp1030.value;
        if ($tmp1025) goto $l1031;
        panda$core$Bit $tmp1032 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations1021);
        $tmp1025 = $tmp1032.value;
        $l1031:;
        panda$core$Bit $tmp1033 = { $tmp1025 };
        if ($tmp1033.value) {
        {
            panda$core$Int64 $tmp1034 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
            panda$core$Int64 $tmp1035 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1021->flags, $tmp1034);
            annotations1021->flags = $tmp1035;
        }
        }
        panda$collections$Array* $tmp1039 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1039);
        $tmp1038 = $tmp1039;
        $tmp1037 = $tmp1038;
        parameters1036 = $tmp1037;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1037));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1038));
        {
            int $tmp1042;
            {
                ITable* $tmp1046 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1046->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1046 = $tmp1046->next;
                }
                $fn1048 $tmp1047 = $tmp1046->methods[0];
                panda$collections$Iterator* $tmp1049 = $tmp1047(((panda$collections$Iterable*) p_rawParameters));
                $tmp1045 = $tmp1049;
                $tmp1044 = $tmp1045;
                Iter$287$91043 = $tmp1044;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1044));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1045));
                $l1050:;
                ITable* $tmp1053 = Iter$287$91043->$class->itable;
                while ($tmp1053->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1053 = $tmp1053->next;
                }
                $fn1055 $tmp1054 = $tmp1053->methods[0];
                panda$core$Bit $tmp1056 = $tmp1054(Iter$287$91043);
                panda$core$Bit $tmp1057 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1056);
                bool $tmp1052 = $tmp1057.value;
                if (!$tmp1052) goto $l1051;
                {
                    int $tmp1060;
                    {
                        ITable* $tmp1064 = Iter$287$91043->$class->itable;
                        while ($tmp1064->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1064 = $tmp1064->next;
                        }
                        $fn1066 $tmp1065 = $tmp1064->methods[1];
                        panda$core$Object* $tmp1067 = $tmp1065(Iter$287$91043);
                        $tmp1063 = $tmp1067;
                        $tmp1062 = ((org$pandalanguage$pandac$ASTNode*) $tmp1063);
                        p1061 = $tmp1062;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1062));
                        panda$core$Panda$unref$panda$core$Object($tmp1063);
                        int $tmp1070;
                        {
                            $tmp1072 = p1061;
                            $match$288_131071 = $tmp1072;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1072));
                            panda$core$Bit $tmp1073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$288_131071->$rawValue, ((panda$core$Int64) { 28 }));
                            if ($tmp1073.value) {
                            {
                                panda$core$String** $tmp1075 = ((panda$core$String**) ((char*) $match$288_131071->$data + 16));
                                name1074 = *$tmp1075;
                                org$pandalanguage$pandac$ASTNode** $tmp1077 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$288_131071->$data + 24));
                                type1076 = *$tmp1077;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1079 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1081 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1076);
                                $tmp1080 = $tmp1081;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1079, name1074, $tmp1080);
                                $tmp1078 = $tmp1079;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1036, ((panda$core$Object*) $tmp1078));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1078));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1080));
                            }
                            }
                            else {
                            {
                                PANDA_ASSERT(((panda$core$Bit) { false }).value);
                            }
                            }
                        }
                        $tmp1070 = -1;
                        goto $l1068;
                        $l1068:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1072));
                        switch ($tmp1070) {
                            case -1: goto $l1082;
                        }
                        $l1082:;
                    }
                    $tmp1060 = -1;
                    goto $l1058;
                    $l1058:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1061));
                    p1061 = NULL;
                    switch ($tmp1060) {
                        case -1: goto $l1083;
                    }
                    $l1083:;
                }
                goto $l1050;
                $l1051:;
            }
            $tmp1042 = -1;
            goto $l1040;
            $l1040:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$287$91043));
            Iter$287$91043 = NULL;
            switch ($tmp1042) {
                case -1: goto $l1084;
            }
            $l1084:;
        }
        memset(&returnType1085, 0, sizeof(returnType1085));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1086 = returnType1085;
                org$pandalanguage$pandac$Type* $tmp1089 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1088 = $tmp1089;
                $tmp1087 = $tmp1088;
                returnType1085 = $tmp1087;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1087));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1088));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1086));
            }
        }
        }
        else {
        {
            {
                $tmp1090 = returnType1085;
                org$pandalanguage$pandac$Type* $tmp1093 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1092 = $tmp1093;
                $tmp1091 = $tmp1092;
                returnType1085 = $tmp1091;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1091));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1092));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1090));
            }
        }
        }
        panda$core$Bit $tmp1095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
        bool $tmp1094 = $tmp1095.value;
        if (!$tmp1094) goto $l1096;
        org$pandalanguage$pandac$Type* $tmp1098 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1097 = $tmp1098;
        panda$core$Bit $tmp1099 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1085, $tmp1097);
        $tmp1094 = $tmp1099.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1097));
        $l1096:;
        panda$core$Bit $tmp1100 = { $tmp1094 };
        if ($tmp1100.value) {
        {
            panda$core$Object* $tmp1103 = (($fn1102) self->compiler->$class->vtable[2])(self->compiler);
            $tmp1101 = $tmp1103;
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1101), p_position, &$s1104);
            panda$core$Panda$unref$panda$core$Object($tmp1101);
        }
        }
        bool $tmp1105 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1105) goto $l1106;
        panda$core$Bit $tmp1107 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1021, p_statements);
        $tmp1105 = $tmp1107.value;
        $l1106:;
        panda$core$Bit $tmp1108 = { $tmp1105 };
        if ($tmp1108.value) {
        {
            panda$core$Int64 $tmp1109 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp1110 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1021->flags, $tmp1109);
            annotations1021->flags = $tmp1110;
        }
        }
        if (((panda$core$Bit) { p_statements == NULL }).value) {
        {
            panda$core$Bit $tmp1111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1111.value) {
            {
                panda$core$Int64 $tmp1112 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                panda$core$Int64 $tmp1113 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1021->flags, $tmp1112);
                annotations1021->flags = $tmp1113;
            }
            }
            else {
            panda$core$Int64 $tmp1114 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
            panda$core$Int64 $tmp1115 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1021->flags, $tmp1114);
            panda$core$Bit $tmp1116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1115, ((panda$core$Int64) { 0 }));
            if ($tmp1116.value) {
            {
                panda$core$Object* $tmp1119 = (($fn1118) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1117 = $tmp1119;
                panda$core$String* $tmp1123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1122, p_name);
                $tmp1121 = $tmp1123;
                panda$core$String* $tmp1125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1121, &$s1124);
                $tmp1120 = $tmp1125;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1117), p_position, $tmp1120);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1120));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1121));
                panda$core$Panda$unref$panda$core$Object($tmp1117);
            }
            }
            }
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1129 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1129, p_owner, p_position, doccomment1005, annotations1021, p_kind, p_name, parameters1036, returnType1085, p_statements);
        $tmp1128 = $tmp1129;
        $tmp1127 = $tmp1128;
        $finallyReturn1125 = $tmp1127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1127));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1128));
        $tmp1004 = 0;
        goto $l1002;
        $l1130:;
        return $finallyReturn1125;
    }
    $l1002:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1005));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1021));
    annotations1021 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1036));
    parameters1036 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1085));
    switch ($tmp1004) {
        case 0: goto $l1130;
    }
    $l1132:;
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$321_91136 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1137;
    org$pandalanguage$pandac$Position position1139;
    org$pandalanguage$pandac$ASTNode* dc1141 = NULL;
    panda$collections$ImmutableArray* annotations1143 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1145 = NULL;
    org$pandalanguage$pandac$Position position1148;
    org$pandalanguage$pandac$ASTNode* dc1150 = NULL;
    panda$collections$ImmutableArray* annotations1152 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1154;
    panda$core$String* name1156 = NULL;
    panda$collections$ImmutableArray* parameters1158 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType1160 = NULL;
    panda$collections$ImmutableArray* statements1162 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1167 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1168;
    org$pandalanguage$pandac$MethodDecl* $tmp1169;
    org$pandalanguage$pandac$Position position1173;
    org$pandalanguage$pandac$ASTNode* dc1175 = NULL;
    panda$collections$ImmutableArray* annotations1177 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1179;
    panda$core$String* name1181 = NULL;
    panda$collections$ImmutableArray* generics1183 = NULL;
    panda$collections$ImmutableArray* supertypes1185 = NULL;
    panda$collections$ImmutableArray* members1187 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1192 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1193;
    org$pandalanguage$pandac$ClassDecl* $tmp1194;
    panda$core$Weak* $tmp1196;
    panda$core$Weak* $tmp1197;
    panda$core$Weak* $tmp1198;
    panda$core$String* $tmp1200;
    org$pandalanguage$pandac$Alias* $tmp1204;
    panda$core$String* $tmp1206;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1207;
    org$pandalanguage$pandac$Position $tmp1211;
    org$pandalanguage$pandac$Alias* $tmp1212;
    panda$core$String* $tmp1214;
    org$pandalanguage$pandac$Position $tmp1216;
    org$pandalanguage$pandac$Position position1219;
    org$pandalanguage$pandac$ASTNode* dc1221 = NULL;
    panda$core$String* name1223 = NULL;
    panda$collections$ImmutableArray* fields1225 = NULL;
    int $tmp1135;
    {
        $tmp1137 = p_node;
        $match$321_91136 = $tmp1137;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1137));
        panda$core$Bit $tmp1138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_91136->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1138.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1140 = ((org$pandalanguage$pandac$Position*) ((char*) $match$321_91136->$data + 0));
            position1139 = *$tmp1140;
            org$pandalanguage$pandac$ASTNode** $tmp1142 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$321_91136->$data + 16));
            dc1141 = *$tmp1142;
            panda$collections$ImmutableArray** $tmp1144 = ((panda$collections$ImmutableArray**) ((char*) $match$321_91136->$data + 24));
            annotations1143 = *$tmp1144;
            org$pandalanguage$pandac$ASTNode** $tmp1146 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$321_91136->$data + 32));
            varDecl1145 = *$tmp1146;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1139, dc1141, annotations1143, varDecl1145);
        }
        }
        else {
        panda$core$Bit $tmp1147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_91136->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1147.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1149 = ((org$pandalanguage$pandac$Position*) ((char*) $match$321_91136->$data + 0));
            position1148 = *$tmp1149;
            org$pandalanguage$pandac$ASTNode** $tmp1151 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$321_91136->$data + 16));
            dc1150 = *$tmp1151;
            panda$collections$ImmutableArray** $tmp1153 = ((panda$collections$ImmutableArray**) ((char*) $match$321_91136->$data + 24));
            annotations1152 = *$tmp1153;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1155 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$321_91136->$data + 32));
            kind1154 = *$tmp1155;
            panda$core$String** $tmp1157 = ((panda$core$String**) ((char*) $match$321_91136->$data + 40));
            name1156 = *$tmp1157;
            panda$collections$ImmutableArray** $tmp1159 = ((panda$collections$ImmutableArray**) ((char*) $match$321_91136->$data + 48));
            parameters1158 = *$tmp1159;
            org$pandalanguage$pandac$ASTNode** $tmp1161 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$321_91136->$data + 56));
            rawReturnType1160 = *$tmp1161;
            panda$collections$ImmutableArray** $tmp1163 = ((panda$collections$ImmutableArray**) ((char*) $match$321_91136->$data + 64));
            statements1162 = *$tmp1163;
            int $tmp1166;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1170 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1148, dc1150, annotations1152, kind1154, name1156, parameters1158, rawReturnType1160, statements1162);
                $tmp1169 = $tmp1170;
                $tmp1168 = $tmp1169;
                m1167 = $tmp1168;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1168));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1169));
                if (((panda$core$Bit) { m1167 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1167));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1167));
                }
                }
            }
            $tmp1166 = -1;
            goto $l1164;
            $l1164:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1167));
            m1167 = NULL;
            switch ($tmp1166) {
                case -1: goto $l1171;
            }
            $l1171:;
        }
        }
        else {
        panda$core$Bit $tmp1172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_91136->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1172.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1174 = ((org$pandalanguage$pandac$Position*) ((char*) $match$321_91136->$data + 0));
            position1173 = *$tmp1174;
            org$pandalanguage$pandac$ASTNode** $tmp1176 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$321_91136->$data + 16));
            dc1175 = *$tmp1176;
            panda$collections$ImmutableArray** $tmp1178 = ((panda$collections$ImmutableArray**) ((char*) $match$321_91136->$data + 24));
            annotations1177 = *$tmp1178;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1180 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$321_91136->$data + 32));
            kind1179 = *$tmp1180;
            panda$core$String** $tmp1182 = ((panda$core$String**) ((char*) $match$321_91136->$data + 40));
            name1181 = *$tmp1182;
            panda$collections$ImmutableArray** $tmp1184 = ((panda$collections$ImmutableArray**) ((char*) $match$321_91136->$data + 48));
            generics1183 = *$tmp1184;
            panda$collections$ImmutableArray** $tmp1186 = ((panda$collections$ImmutableArray**) ((char*) $match$321_91136->$data + 56));
            supertypes1185 = *$tmp1186;
            panda$collections$ImmutableArray** $tmp1188 = ((panda$collections$ImmutableArray**) ((char*) $match$321_91136->$data + 64));
            members1187 = *$tmp1188;
            int $tmp1191;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1195 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, p_cl->name, position1173, dc1175, annotations1177, kind1179, name1181, generics1183, supertypes1185, members1187);
                $tmp1194 = $tmp1195;
                $tmp1193 = $tmp1194;
                inner1192 = $tmp1193;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1193));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1194));
                if (((panda$core$Bit) { inner1192 != NULL }).value) {
                {
                    {
                        $tmp1196 = inner1192->owner;
                        panda$core$Weak* $tmp1199 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp1199, ((panda$core$Object*) p_cl));
                        $tmp1198 = $tmp1199;
                        $tmp1197 = $tmp1198;
                        inner1192->owner = $tmp1197;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1197));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1198));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1196));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1192));
                    panda$core$String* $tmp1202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_cl->name, &$s1201);
                    $tmp1200 = $tmp1202;
                    panda$core$Bit $tmp1203 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(inner1192->name, $tmp1200);
                    PANDA_ASSERT($tmp1203.value);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1200));
                    org$pandalanguage$pandac$Alias* $tmp1205 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$Int64 $tmp1208 = panda$core$String$length$R$panda$core$Int64(p_cl->name);
                    panda$core$Int64 $tmp1209 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1208, ((panda$core$Int64) { 1 }));
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1207, ((panda$core$Int64$nullable) { $tmp1209, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                    panda$core$String* $tmp1210 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(inner1192->name, $tmp1207);
                    $tmp1206 = $tmp1210;
                    org$pandalanguage$pandac$Position$init(&$tmp1211);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1205, $tmp1206, inner1192->name, $tmp1211);
                    $tmp1204 = $tmp1205;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1204));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1204));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1206));
                    org$pandalanguage$pandac$Alias* $tmp1213 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$String* $tmp1215 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1214 = $tmp1215;
                    org$pandalanguage$pandac$Position$init(&$tmp1216);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1213, $tmp1214, p_cl->name, $tmp1216);
                    $tmp1212 = $tmp1213;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(inner1192->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1212));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1212));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1214));
                }
                }
            }
            $tmp1191 = -1;
            goto $l1189;
            $l1189:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1192));
            inner1192 = NULL;
            switch ($tmp1191) {
                case -1: goto $l1217;
            }
            $l1217:;
        }
        }
        else {
        panda$core$Bit $tmp1218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_91136->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1218.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1220 = ((org$pandalanguage$pandac$Position*) ((char*) $match$321_91136->$data + 0));
            position1219 = *$tmp1220;
            org$pandalanguage$pandac$ASTNode** $tmp1222 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$321_91136->$data + 16));
            dc1221 = *$tmp1222;
            panda$core$String** $tmp1224 = ((panda$core$String**) ((char*) $match$321_91136->$data + 24));
            name1223 = *$tmp1224;
            panda$collections$ImmutableArray** $tmp1226 = ((panda$collections$ImmutableArray**) ((char*) $match$321_91136->$data + 32));
            fields1225 = *$tmp1226;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1219, dc1221, name1223, fields1225);
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
    $tmp1135 = -1;
    goto $l1133;
    $l1133:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1137));
    switch ($tmp1135) {
        case -1: goto $l1227;
    }
    $l1227:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1231 = NULL;
    panda$core$String* $tmp1232;
    panda$core$String* $tmp1233;
    org$pandalanguage$pandac$ASTNode* $match$359_131237 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1238;
    org$pandalanguage$pandac$Position position1240;
    panda$core$String* text1242 = NULL;
    panda$core$String* $tmp1244;
    panda$core$String* $tmp1245;
    panda$collections$Array* fields1247 = NULL;
    panda$collections$Array* $tmp1248;
    panda$collections$Array* $tmp1249;
    panda$collections$Iterator* Iter$367$91254 = NULL;
    panda$collections$Iterator* $tmp1255;
    panda$collections$Iterator* $tmp1256;
    org$pandalanguage$pandac$ASTNode* t1272 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1273;
    panda$core$Object* $tmp1274;
    org$pandalanguage$pandac$Type* $tmp1279;
    org$pandalanguage$pandac$ChoiceEntry* entry1283 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1284;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1285;
    int $tmp1230;
    {
        memset(&doccomment1231, 0, sizeof(doccomment1231));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1232 = doccomment1231;
                $tmp1233 = NULL;
                doccomment1231 = $tmp1233;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1233));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1232));
            }
        }
        }
        else {
        {
            int $tmp1236;
            {
                $tmp1238 = p_rawDoccomment;
                $match$359_131237 = $tmp1238;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1238));
                panda$core$Bit $tmp1239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$359_131237->$rawValue, ((panda$core$Int64) { 34 }));
                if ($tmp1239.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1241 = ((org$pandalanguage$pandac$Position*) ((char*) $match$359_131237->$data + 0));
                    position1240 = *$tmp1241;
                    panda$core$String** $tmp1243 = ((panda$core$String**) ((char*) $match$359_131237->$data + 16));
                    text1242 = *$tmp1243;
                    {
                        $tmp1244 = doccomment1231;
                        $tmp1245 = text1242;
                        doccomment1231 = $tmp1245;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1245));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1244));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1236 = -1;
            goto $l1234;
            $l1234:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1238));
            switch ($tmp1236) {
                case -1: goto $l1246;
            }
            $l1246:;
        }
        }
        panda$collections$Array* $tmp1250 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1250);
        $tmp1249 = $tmp1250;
        $tmp1248 = $tmp1249;
        fields1247 = $tmp1248;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1248));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1249));
        {
            int $tmp1253;
            {
                ITable* $tmp1257 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1257->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1257 = $tmp1257->next;
                }
                $fn1259 $tmp1258 = $tmp1257->methods[0];
                panda$collections$Iterator* $tmp1260 = $tmp1258(((panda$collections$Iterable*) p_rawFields));
                $tmp1256 = $tmp1260;
                $tmp1255 = $tmp1256;
                Iter$367$91254 = $tmp1255;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1255));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1256));
                $l1261:;
                ITable* $tmp1264 = Iter$367$91254->$class->itable;
                while ($tmp1264->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1264 = $tmp1264->next;
                }
                $fn1266 $tmp1265 = $tmp1264->methods[0];
                panda$core$Bit $tmp1267 = $tmp1265(Iter$367$91254);
                panda$core$Bit $tmp1268 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1267);
                bool $tmp1263 = $tmp1268.value;
                if (!$tmp1263) goto $l1262;
                {
                    int $tmp1271;
                    {
                        ITable* $tmp1275 = Iter$367$91254->$class->itable;
                        while ($tmp1275->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1275 = $tmp1275->next;
                        }
                        $fn1277 $tmp1276 = $tmp1275->methods[1];
                        panda$core$Object* $tmp1278 = $tmp1276(Iter$367$91254);
                        $tmp1274 = $tmp1278;
                        $tmp1273 = ((org$pandalanguage$pandac$ASTNode*) $tmp1274);
                        t1272 = $tmp1273;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1273));
                        panda$core$Panda$unref$panda$core$Object($tmp1274);
                        org$pandalanguage$pandac$Type* $tmp1280 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1272);
                        $tmp1279 = $tmp1280;
                        panda$collections$Array$add$panda$collections$Array$T(fields1247, ((panda$core$Object*) $tmp1279));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1279));
                    }
                    $tmp1271 = -1;
                    goto $l1269;
                    $l1269:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1272));
                    t1272 = NULL;
                    switch ($tmp1271) {
                        case -1: goto $l1281;
                    }
                    $l1281:;
                }
                goto $l1261;
                $l1262:;
            }
            $tmp1253 = -1;
            goto $l1251;
            $l1251:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$367$91254));
            Iter$367$91254 = NULL;
            switch ($tmp1253) {
                case -1: goto $l1282;
            }
            $l1282:;
        }
        org$pandalanguage$pandac$ChoiceEntry* $tmp1286 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(97, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
        panda$core$Int64 $tmp1287 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
        org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1286, p_cl, p_position, p_name, doccomment1231, $tmp1287, ((panda$collections$ListView*) fields1247));
        $tmp1285 = $tmp1286;
        $tmp1284 = $tmp1285;
        entry1283 = $tmp1284;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1284));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1285));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry1283));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1283));
    }
    $tmp1230 = -1;
    goto $l1228;
    $l1228:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1231));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1247));
    fields1247 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1283));
    entry1283 = NULL;
    switch ($tmp1230) {
        case -1: goto $l1288;
    }
    $l1288:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1292 = NULL;
    panda$core$String* $tmp1295;
    panda$core$String* $tmp1296;
    panda$core$String* $tmp1297;
    panda$core$String* $tmp1298;
    panda$core$String* $tmp1299;
    panda$core$String* $tmp1300;
    panda$core$String* $tmp1307;
    panda$core$String* $tmp1308;
    panda$core$String* doccomment1309 = NULL;
    panda$core$String* $tmp1310;
    panda$core$String* $tmp1311;
    org$pandalanguage$pandac$ASTNode* $match$393_131315 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1316;
    org$pandalanguage$pandac$Position position1318;
    panda$core$String* text1320 = NULL;
    panda$core$String* $tmp1322;
    panda$core$String* $tmp1323;
    org$pandalanguage$pandac$Annotations* annotations1325 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1326;
    org$pandalanguage$pandac$Annotations* $tmp1327;
    panda$collections$Array* parameters1329 = NULL;
    panda$collections$Array* $tmp1330;
    panda$collections$Array* $tmp1331;
    panda$collections$Iterator* Iter$403$131336 = NULL;
    panda$collections$Iterator* $tmp1337;
    panda$collections$Iterator* $tmp1338;
    org$pandalanguage$pandac$ASTNode* p1354 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1355;
    panda$core$Object* $tmp1356;
    panda$core$String* name1361 = NULL;
    org$pandalanguage$pandac$Type* bound1362 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$406_171366 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1367;
    panda$core$String* id1369 = NULL;
    panda$core$String* $tmp1371;
    panda$core$String* $tmp1372;
    org$pandalanguage$pandac$Type* $tmp1373;
    org$pandalanguage$pandac$Type* $tmp1374;
    org$pandalanguage$pandac$Type* $tmp1375;
    panda$core$String* id1378 = NULL;
    org$pandalanguage$pandac$ASTNode* type1380 = NULL;
    panda$core$String* $tmp1382;
    panda$core$String* $tmp1383;
    org$pandalanguage$pandac$Type* $tmp1384;
    org$pandalanguage$pandac$Type* $tmp1385;
    org$pandalanguage$pandac$Type* $tmp1386;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1389;
    panda$core$Object* $tmp1396;
    panda$collections$Array* supertypes1400 = NULL;
    panda$collections$Array* $tmp1401;
    panda$collections$Array* $tmp1402;
    panda$core$Object* $tmp1405;
    panda$collections$Iterator* Iter$427$131412 = NULL;
    panda$collections$Iterator* $tmp1413;
    panda$collections$Iterator* $tmp1414;
    org$pandalanguage$pandac$ASTNode* s1430 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1431;
    panda$core$Object* $tmp1432;
    org$pandalanguage$pandac$Type* $tmp1437;
    org$pandalanguage$pandac$ClassDecl* result1441 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1442;
    org$pandalanguage$pandac$ClassDecl* $tmp1443;
    panda$core$Object* $tmp1445;
    panda$core$Object* $tmp1448;
    org$pandalanguage$pandac$FieldDecl* rawValue1455 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1456;
    org$pandalanguage$pandac$FieldDecl* $tmp1457;
    org$pandalanguage$pandac$Annotations* $tmp1459;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1461;
    org$pandalanguage$pandac$Type* $tmp1463;
    org$pandalanguage$pandac$FieldDecl* data1465 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1466;
    org$pandalanguage$pandac$FieldDecl* $tmp1467;
    org$pandalanguage$pandac$Annotations* $tmp1469;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1471;
    org$pandalanguage$pandac$Type* $tmp1473;
    panda$collections$Iterator* Iter$444$91479 = NULL;
    panda$collections$Iterator* $tmp1480;
    panda$collections$Iterator* $tmp1481;
    org$pandalanguage$pandac$ASTNode* m1497 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1498;
    panda$core$Object* $tmp1499;
    org$pandalanguage$pandac$ASTNode* $match$445_131507 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1508;
    org$pandalanguage$pandac$Position mPosition1510;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1512;
    org$pandalanguage$pandac$ClassDecl$Kind $match$448_251515;
    panda$core$Object* $tmp1518;
    panda$core$Object* $tmp1523;
    panda$core$Bit foundInit1530;
    panda$core$Bit foundCleanup1531;
    panda$collections$Iterator* Iter$463$91535 = NULL;
    panda$collections$Iterator* $tmp1536;
    panda$collections$Iterator* $tmp1537;
    org$pandalanguage$pandac$MethodDecl* m1553 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1554;
    panda$core$Object* $tmp1555;
    panda$core$Object* $tmp1569;
    org$pandalanguage$pandac$MethodDecl* defaultInit1588 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1589;
    org$pandalanguage$pandac$MethodDecl* $tmp1590;
    org$pandalanguage$pandac$Annotations* $tmp1592;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1594;
    panda$collections$Array* $tmp1596;
    org$pandalanguage$pandac$Type* $tmp1598;
    panda$collections$ImmutableArray* $tmp1600;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1620 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1621;
    org$pandalanguage$pandac$MethodDecl* $tmp1622;
    org$pandalanguage$pandac$Annotations* $tmp1624;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1627;
    panda$collections$Array* $tmp1629;
    org$pandalanguage$pandac$Type* $tmp1631;
    panda$collections$ImmutableArray* $tmp1633;
    panda$core$Bit haveFields1637;
    panda$collections$Iterator* Iter$491$131641 = NULL;
    panda$collections$Iterator* $tmp1642;
    panda$collections$Iterator* $tmp1643;
    org$pandalanguage$pandac$ChoiceEntry* e1659 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1660;
    panda$core$Object* $tmp1661;
    org$pandalanguage$pandac$Type* $tmp1672;
    org$pandalanguage$pandac$Type* $tmp1673;
    org$pandalanguage$pandac$Type* $tmp1674;
    panda$core$Object* $tmp1676;
    panda$core$Object* $tmp1677;
    org$pandalanguage$pandac$ClassDecl* $finallyReturn1680;
    org$pandalanguage$pandac$ClassDecl* $tmp1682;
    int $tmp1291;
    {
        memset(&fullName1292, 0, sizeof(fullName1292));
        panda$core$Bit $tmp1294 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s1293);
        if ($tmp1294.value) {
        {
            {
                $tmp1295 = fullName1292;
                panda$core$String* $tmp1301 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1300 = $tmp1301;
                panda$core$String* $tmp1303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1300, &$s1302);
                $tmp1299 = $tmp1303;
                panda$core$String* $tmp1304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1299, p_name);
                $tmp1298 = $tmp1304;
                panda$core$String* $tmp1306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1298, &$s1305);
                $tmp1297 = $tmp1306;
                $tmp1296 = $tmp1297;
                fullName1292 = $tmp1296;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1296));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1297));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1298));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1299));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1300));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1295));
            }
        }
        }
        else {
        {
            {
                $tmp1307 = fullName1292;
                $tmp1308 = p_name;
                fullName1292 = $tmp1308;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1308));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1307));
            }
        }
        }
        memset(&doccomment1309, 0, sizeof(doccomment1309));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1310 = doccomment1309;
                $tmp1311 = NULL;
                doccomment1309 = $tmp1311;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1311));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1310));
            }
        }
        }
        else {
        {
            int $tmp1314;
            {
                $tmp1316 = p_rawDoccomment;
                $match$393_131315 = $tmp1316;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1316));
                panda$core$Bit $tmp1317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$393_131315->$rawValue, ((panda$core$Int64) { 34 }));
                if ($tmp1317.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1319 = ((org$pandalanguage$pandac$Position*) ((char*) $match$393_131315->$data + 0));
                    position1318 = *$tmp1319;
                    panda$core$String** $tmp1321 = ((panda$core$String**) ((char*) $match$393_131315->$data + 16));
                    text1320 = *$tmp1321;
                    {
                        $tmp1322 = doccomment1309;
                        $tmp1323 = text1320;
                        doccomment1309 = $tmp1323;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1323));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1322));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1314 = -1;
            goto $l1312;
            $l1312:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1316));
            switch ($tmp1314) {
                case -1: goto $l1324;
            }
            $l1324:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1328 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1327 = $tmp1328;
        $tmp1326 = $tmp1327;
        annotations1325 = $tmp1326;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1326));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1327));
        panda$collections$Array* $tmp1332 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1332);
        $tmp1331 = $tmp1332;
        $tmp1330 = $tmp1331;
        parameters1329 = $tmp1330;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1330));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1331));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1335;
                {
                    ITable* $tmp1339 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1339->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1339 = $tmp1339->next;
                    }
                    $fn1341 $tmp1340 = $tmp1339->methods[0];
                    panda$collections$Iterator* $tmp1342 = $tmp1340(((panda$collections$Iterable*) p_generics));
                    $tmp1338 = $tmp1342;
                    $tmp1337 = $tmp1338;
                    Iter$403$131336 = $tmp1337;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1337));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1338));
                    $l1343:;
                    ITable* $tmp1346 = Iter$403$131336->$class->itable;
                    while ($tmp1346->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1346 = $tmp1346->next;
                    }
                    $fn1348 $tmp1347 = $tmp1346->methods[0];
                    panda$core$Bit $tmp1349 = $tmp1347(Iter$403$131336);
                    panda$core$Bit $tmp1350 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1349);
                    bool $tmp1345 = $tmp1350.value;
                    if (!$tmp1345) goto $l1344;
                    {
                        int $tmp1353;
                        {
                            ITable* $tmp1357 = Iter$403$131336->$class->itable;
                            while ($tmp1357->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1357 = $tmp1357->next;
                            }
                            $fn1359 $tmp1358 = $tmp1357->methods[1];
                            panda$core$Object* $tmp1360 = $tmp1358(Iter$403$131336);
                            $tmp1356 = $tmp1360;
                            $tmp1355 = ((org$pandalanguage$pandac$ASTNode*) $tmp1356);
                            p1354 = $tmp1355;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1355));
                            panda$core$Panda$unref$panda$core$Object($tmp1356);
                            memset(&name1361, 0, sizeof(name1361));
                            memset(&bound1362, 0, sizeof(bound1362));
                            int $tmp1365;
                            {
                                $tmp1367 = p1354;
                                $match$406_171366 = $tmp1367;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1367));
                                panda$core$Bit $tmp1368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$406_171366->$rawValue, ((panda$core$Int64) { 18 }));
                                if ($tmp1368.value) {
                                {
                                    panda$core$String** $tmp1370 = ((panda$core$String**) ((char*) $match$406_171366->$data + 16));
                                    id1369 = *$tmp1370;
                                    {
                                        $tmp1371 = name1361;
                                        $tmp1372 = id1369;
                                        name1361 = $tmp1372;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1372));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1371));
                                    }
                                    {
                                        $tmp1373 = bound1362;
                                        org$pandalanguage$pandac$Type* $tmp1376 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1375 = $tmp1376;
                                        $tmp1374 = $tmp1375;
                                        bound1362 = $tmp1374;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1374));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1375));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1373));
                                    }
                                }
                                }
                                else {
                                panda$core$Bit $tmp1377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$406_171366->$rawValue, ((panda$core$Int64) { 37 }));
                                if ($tmp1377.value) {
                                {
                                    panda$core$String** $tmp1379 = ((panda$core$String**) ((char*) $match$406_171366->$data + 16));
                                    id1378 = *$tmp1379;
                                    org$pandalanguage$pandac$ASTNode** $tmp1381 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$406_171366->$data + 24));
                                    type1380 = *$tmp1381;
                                    {
                                        $tmp1382 = name1361;
                                        $tmp1383 = id1378;
                                        name1361 = $tmp1383;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1383));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1382));
                                    }
                                    {
                                        $tmp1384 = bound1362;
                                        org$pandalanguage$pandac$Type* $tmp1387 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1380);
                                        $tmp1386 = $tmp1387;
                                        $tmp1385 = $tmp1386;
                                        bound1362 = $tmp1385;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1385));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1386));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1384));
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
                            $tmp1365 = -1;
                            goto $l1363;
                            $l1363:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1367));
                            switch ($tmp1365) {
                                case -1: goto $l1388;
                            }
                            $l1388:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1390 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1392 = (($fn1391) p1354->$class->vtable[2])(p1354);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1390, $tmp1392, fullName1292, name1361, bound1362);
                            $tmp1389 = $tmp1390;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1329, ((panda$core$Object*) $tmp1389));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1389));
                        }
                        $tmp1353 = -1;
                        goto $l1351;
                        $l1351:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1354));
                        p1354 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1361));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1362));
                        switch ($tmp1353) {
                            case -1: goto $l1393;
                        }
                        $l1393:;
                    }
                    goto $l1343;
                    $l1344:;
                }
                $tmp1335 = -1;
                goto $l1333;
                $l1333:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$403$131336));
                Iter$403$131336 = NULL;
                switch ($tmp1335) {
                    case -1: goto $l1394;
                }
                $l1394:;
            }
            panda$core$Bit $tmp1395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1395.value) {
            {
                panda$core$Object* $tmp1398 = (($fn1397) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1396 = $tmp1398;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1396), p_position, &$s1399);
                panda$core$Panda$unref$panda$core$Object($tmp1396);
            }
            }
        }
        }
        panda$collections$Array* $tmp1403 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1403);
        $tmp1402 = $tmp1403;
        $tmp1401 = $tmp1402;
        supertypes1400 = $tmp1401;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1401));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1402));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Bit $tmp1404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1404.value) {
            {
                panda$core$Object* $tmp1407 = (($fn1406) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1405 = $tmp1407;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1405), p_position, &$s1408);
                panda$core$Panda$unref$panda$core$Object($tmp1405);
            }
            }
            {
                int $tmp1411;
                {
                    ITable* $tmp1415 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1415->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1415 = $tmp1415->next;
                    }
                    $fn1417 $tmp1416 = $tmp1415->methods[0];
                    panda$collections$Iterator* $tmp1418 = $tmp1416(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1414 = $tmp1418;
                    $tmp1413 = $tmp1414;
                    Iter$427$131412 = $tmp1413;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1413));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1414));
                    $l1419:;
                    ITable* $tmp1422 = Iter$427$131412->$class->itable;
                    while ($tmp1422->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1422 = $tmp1422->next;
                    }
                    $fn1424 $tmp1423 = $tmp1422->methods[0];
                    panda$core$Bit $tmp1425 = $tmp1423(Iter$427$131412);
                    panda$core$Bit $tmp1426 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1425);
                    bool $tmp1421 = $tmp1426.value;
                    if (!$tmp1421) goto $l1420;
                    {
                        int $tmp1429;
                        {
                            ITable* $tmp1433 = Iter$427$131412->$class->itable;
                            while ($tmp1433->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1433 = $tmp1433->next;
                            }
                            $fn1435 $tmp1434 = $tmp1433->methods[1];
                            panda$core$Object* $tmp1436 = $tmp1434(Iter$427$131412);
                            $tmp1432 = $tmp1436;
                            $tmp1431 = ((org$pandalanguage$pandac$ASTNode*) $tmp1432);
                            s1430 = $tmp1431;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1431));
                            panda$core$Panda$unref$panda$core$Object($tmp1432);
                            org$pandalanguage$pandac$Type* $tmp1438 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1430);
                            $tmp1437 = $tmp1438;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1400, ((panda$core$Object*) $tmp1437));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1437));
                        }
                        $tmp1429 = -1;
                        goto $l1427;
                        $l1427:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1430));
                        s1430 = NULL;
                        switch ($tmp1429) {
                            case -1: goto $l1439;
                        }
                        $l1439:;
                    }
                    goto $l1419;
                    $l1420:;
                }
                $tmp1411 = -1;
                goto $l1409;
                $l1409:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$427$131412));
                Iter$427$131412 = NULL;
                switch ($tmp1411) {
                    case -1: goto $l1440;
                }
                $l1440:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1444 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1447 = (($fn1446) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1445 = $tmp1447;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1444, p_source, p_position, p_aliases, doccomment1309, annotations1325, p_kind, fullName1292, ((panda$collections$ListView*) supertypes1400), parameters1329, ((org$pandalanguage$pandac$Compiler*) $tmp1445)->root);
        $tmp1443 = $tmp1444;
        $tmp1442 = $tmp1443;
        result1441 = $tmp1442;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1442));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1443));
        panda$core$Panda$unref$panda$core$Object($tmp1445);
        panda$core$Object* $tmp1450 = (($fn1449) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1448 = $tmp1450;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1448)->currentClass, ((panda$core$Object*) result1441));
        panda$core$Panda$unref$panda$core$Object($tmp1448);
        panda$core$Bit $tmp1451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1451.value) {
        {
            int $tmp1454;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1458 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1460 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1460);
                $tmp1459 = $tmp1460;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1461, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1464 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1463 = $tmp1464;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1458, result1441, result1441->position, NULL, $tmp1459, $tmp1461, &$s1462, $tmp1463, NULL);
                $tmp1457 = $tmp1458;
                $tmp1456 = $tmp1457;
                rawValue1455 = $tmp1456;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1456));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1457));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1463));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1459));
                panda$collections$Array$add$panda$collections$Array$T(result1441->fields, ((panda$core$Object*) rawValue1455));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1441->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1455));
                org$pandalanguage$pandac$FieldDecl* $tmp1468 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1470 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1470);
                $tmp1469 = $tmp1470;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1471, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1474 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1473 = $tmp1474;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1468, result1441, result1441->position, NULL, $tmp1469, $tmp1471, &$s1472, $tmp1473, NULL);
                $tmp1467 = $tmp1468;
                $tmp1466 = $tmp1467;
                data1465 = $tmp1466;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1466));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1467));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1473));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1469));
                panda$collections$Array$add$panda$collections$Array$T(result1441->fields, ((panda$core$Object*) data1465));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1441->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1465));
            }
            $tmp1454 = -1;
            goto $l1452;
            $l1452:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1455));
            rawValue1455 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1465));
            data1465 = NULL;
            switch ($tmp1454) {
                case -1: goto $l1475;
            }
            $l1475:;
        }
        }
        {
            int $tmp1478;
            {
                ITable* $tmp1482 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1482->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1482 = $tmp1482->next;
                }
                $fn1484 $tmp1483 = $tmp1482->methods[0];
                panda$collections$Iterator* $tmp1485 = $tmp1483(((panda$collections$Iterable*) p_members));
                $tmp1481 = $tmp1485;
                $tmp1480 = $tmp1481;
                Iter$444$91479 = $tmp1480;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1480));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1481));
                $l1486:;
                ITable* $tmp1489 = Iter$444$91479->$class->itable;
                while ($tmp1489->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1489 = $tmp1489->next;
                }
                $fn1491 $tmp1490 = $tmp1489->methods[0];
                panda$core$Bit $tmp1492 = $tmp1490(Iter$444$91479);
                panda$core$Bit $tmp1493 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1492);
                bool $tmp1488 = $tmp1493.value;
                if (!$tmp1488) goto $l1487;
                {
                    int $tmp1496;
                    {
                        ITable* $tmp1500 = Iter$444$91479->$class->itable;
                        while ($tmp1500->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1500 = $tmp1500->next;
                        }
                        $fn1502 $tmp1501 = $tmp1500->methods[1];
                        panda$core$Object* $tmp1503 = $tmp1501(Iter$444$91479);
                        $tmp1499 = $tmp1503;
                        $tmp1498 = ((org$pandalanguage$pandac$ASTNode*) $tmp1499);
                        m1497 = $tmp1498;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1498));
                        panda$core$Panda$unref$panda$core$Object($tmp1499);
                        int $tmp1506;
                        {
                            $tmp1508 = m1497;
                            $match$445_131507 = $tmp1508;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1508));
                            panda$core$Bit $tmp1509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$445_131507->$rawValue, ((panda$core$Int64) { 24 }));
                            if ($tmp1509.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp1511 = ((org$pandalanguage$pandac$Position*) ((char*) $match$445_131507->$data + 0));
                                mPosition1510 = *$tmp1511;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1513 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$445_131507->$data + 32));
                                methodKind1512 = *$tmp1513;
                                panda$core$Bit $tmp1514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1512.$rawValue, ((panda$core$Int64) { 2 }));
                                if ($tmp1514.value) {
                                {
                                    {
                                        $match$448_251515 = p_kind;
                                        panda$core$Bit $tmp1516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_251515.$rawValue, ((panda$core$Int64) { 0 }));
                                        if ($tmp1516.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_251515.$rawValue, ((panda$core$Int64) { 1 }));
                                        if ($tmp1517.value) {
                                        {
                                            panda$core$Object* $tmp1520 = (($fn1519) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp1518 = $tmp1520;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1518), mPosition1510, &$s1521);
                                            panda$core$Panda$unref$panda$core$Object($tmp1518);
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_251515.$rawValue, ((panda$core$Int64) { 2 }));
                                        if ($tmp1522.value) {
                                        {
                                            panda$core$Object* $tmp1525 = (($fn1524) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp1523 = $tmp1525;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1523), mPosition1510, &$s1526);
                                            panda$core$Panda$unref$panda$core$Object($tmp1523);
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
                        $tmp1506 = -1;
                        goto $l1504;
                        $l1504:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1508));
                        switch ($tmp1506) {
                            case -1: goto $l1527;
                        }
                        $l1527:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1441, m1497);
                    }
                    $tmp1496 = -1;
                    goto $l1494;
                    $l1494:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1497));
                    m1497 = NULL;
                    switch ($tmp1496) {
                        case -1: goto $l1528;
                    }
                    $l1528:;
                }
                goto $l1486;
                $l1487:;
            }
            $tmp1478 = -1;
            goto $l1476;
            $l1476:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$444$91479));
            Iter$444$91479 = NULL;
            switch ($tmp1478) {
                case -1: goto $l1529;
            }
            $l1529:;
        }
        foundInit1530 = ((panda$core$Bit) { false });
        foundCleanup1531 = ((panda$core$Bit) { false });
        {
            int $tmp1534;
            {
                ITable* $tmp1538 = ((panda$collections$Iterable*) result1441->methods)->$class->itable;
                while ($tmp1538->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1538 = $tmp1538->next;
                }
                $fn1540 $tmp1539 = $tmp1538->methods[0];
                panda$collections$Iterator* $tmp1541 = $tmp1539(((panda$collections$Iterable*) result1441->methods));
                $tmp1537 = $tmp1541;
                $tmp1536 = $tmp1537;
                Iter$463$91535 = $tmp1536;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1536));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1537));
                $l1542:;
                ITable* $tmp1545 = Iter$463$91535->$class->itable;
                while ($tmp1545->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1545 = $tmp1545->next;
                }
                $fn1547 $tmp1546 = $tmp1545->methods[0];
                panda$core$Bit $tmp1548 = $tmp1546(Iter$463$91535);
                panda$core$Bit $tmp1549 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1548);
                bool $tmp1544 = $tmp1549.value;
                if (!$tmp1544) goto $l1543;
                {
                    int $tmp1552;
                    {
                        ITable* $tmp1556 = Iter$463$91535->$class->itable;
                        while ($tmp1556->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1556 = $tmp1556->next;
                        }
                        $fn1558 $tmp1557 = $tmp1556->methods[1];
                        panda$core$Object* $tmp1559 = $tmp1557(Iter$463$91535);
                        $tmp1555 = $tmp1559;
                        $tmp1554 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1555);
                        m1553 = $tmp1554;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1554));
                        panda$core$Panda$unref$panda$core$Object($tmp1555);
                        panda$core$Bit $tmp1560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1553->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
                        if ($tmp1560.value) {
                        {
                            foundInit1530 = ((panda$core$Bit) { true });
                        }
                        }
                        panda$core$Bit $tmp1563 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1553)->name, &$s1562);
                        bool $tmp1561 = $tmp1563.value;
                        if (!$tmp1561) goto $l1564;
                        panda$core$Int64 $tmp1565 = panda$collections$Array$get_count$R$panda$core$Int64(m1553->parameters);
                        panda$core$Bit $tmp1566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1565, ((panda$core$Int64) { 0 }));
                        $tmp1561 = $tmp1566.value;
                        $l1564:;
                        panda$core$Bit $tmp1567 = { $tmp1561 };
                        if ($tmp1567.value) {
                        {
                            foundCleanup1531 = ((panda$core$Bit) { true });
                            panda$core$Bit $tmp1568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp1568.value) {
                            {
                                panda$core$Object* $tmp1571 = (($fn1570) self->compiler->$class->vtable[2])(self->compiler);
                                $tmp1569 = $tmp1571;
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1569), p_position, &$s1572);
                                panda$core$Panda$unref$panda$core$Object($tmp1569);
                            }
                            }
                        }
                        }
                    }
                    $tmp1552 = -1;
                    goto $l1550;
                    $l1550:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1553));
                    m1553 = NULL;
                    switch ($tmp1552) {
                        case -1: goto $l1573;
                    }
                    $l1573:;
                }
                goto $l1542;
                $l1543:;
            }
            $tmp1534 = -1;
            goto $l1532;
            $l1532:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$463$91535));
            Iter$463$91535 = NULL;
            switch ($tmp1534) {
                case -1: goto $l1574;
            }
            $l1574:;
        }
        panda$core$Bit $tmp1577 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1530);
        bool $tmp1576 = $tmp1577.value;
        if (!$tmp1576) goto $l1578;
        panda$core$Bit $tmp1579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        $tmp1576 = $tmp1579.value;
        $l1578:;
        panda$core$Bit $tmp1580 = { $tmp1576 };
        bool $tmp1575 = $tmp1580.value;
        if (!$tmp1575) goto $l1581;
        panda$core$Bit $tmp1583 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1441->name, &$s1582);
        $tmp1575 = $tmp1583.value;
        $l1581:;
        panda$core$Bit $tmp1584 = { $tmp1575 };
        if ($tmp1584.value) {
        {
            int $tmp1587;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1591 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1593 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1593);
                $tmp1592 = $tmp1593;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1594, ((panda$core$Int64) { 2 }));
                panda$collections$Array* $tmp1597 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1597);
                $tmp1596 = $tmp1597;
                org$pandalanguage$pandac$Type* $tmp1599 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1598 = $tmp1599;
                panda$collections$ImmutableArray* $tmp1601 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1601);
                $tmp1600 = $tmp1601;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1591, result1441, p_position, NULL, $tmp1592, $tmp1594, &$s1595, $tmp1596, $tmp1598, $tmp1600);
                $tmp1590 = $tmp1591;
                $tmp1589 = $tmp1590;
                defaultInit1588 = $tmp1589;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1589));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1590));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1600));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1598));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1596));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1592));
                panda$collections$Array$add$panda$collections$Array$T(result1441->methods, ((panda$core$Object*) defaultInit1588));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1441->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1588));
            }
            $tmp1587 = -1;
            goto $l1585;
            $l1585:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1588));
            defaultInit1588 = NULL;
            switch ($tmp1587) {
                case -1: goto $l1602;
            }
            $l1602:;
        }
        }
        panda$core$Bit $tmp1605 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup1531);
        bool $tmp1604 = $tmp1605.value;
        if (!$tmp1604) goto $l1606;
        panda$core$Bit $tmp1608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp1607 = $tmp1608.value;
        if ($tmp1607) goto $l1609;
        panda$core$Bit $tmp1610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        $tmp1607 = $tmp1610.value;
        $l1609:;
        panda$core$Bit $tmp1611 = { $tmp1607 };
        $tmp1604 = $tmp1611.value;
        $l1606:;
        panda$core$Bit $tmp1612 = { $tmp1604 };
        bool $tmp1603 = $tmp1612.value;
        if (!$tmp1603) goto $l1613;
        panda$core$Bit $tmp1615 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1441->name, &$s1614);
        $tmp1603 = $tmp1615.value;
        $l1613:;
        panda$core$Bit $tmp1616 = { $tmp1603 };
        if ($tmp1616.value) {
        {
            int $tmp1619;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1623 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1625 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64 $tmp1626 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1625, $tmp1626);
                $tmp1624 = $tmp1625;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1627, ((panda$core$Int64) { 0 }));
                panda$collections$Array* $tmp1630 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1630);
                $tmp1629 = $tmp1630;
                org$pandalanguage$pandac$Type* $tmp1632 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1631 = $tmp1632;
                panda$collections$ImmutableArray* $tmp1634 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1634);
                $tmp1633 = $tmp1634;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1623, result1441, p_position, NULL, $tmp1624, $tmp1627, &$s1628, $tmp1629, $tmp1631, $tmp1633);
                $tmp1622 = $tmp1623;
                $tmp1621 = $tmp1622;
                defaultCleanup1620 = $tmp1621;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1621));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1622));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1633));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1631));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1629));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1624));
                panda$collections$Array$add$panda$collections$Array$T(result1441->methods, ((panda$core$Object*) defaultCleanup1620));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1441->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1620));
            }
            $tmp1619 = -1;
            goto $l1617;
            $l1617:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1620));
            defaultCleanup1620 = NULL;
            switch ($tmp1619) {
                case -1: goto $l1635;
            }
            $l1635:;
        }
        }
        panda$core$Bit $tmp1636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1636.value) {
        {
            haveFields1637 = ((panda$core$Bit) { false });
            {
                int $tmp1640;
                {
                    ITable* $tmp1644 = ((panda$collections$Iterable*) result1441->choiceEntries)->$class->itable;
                    while ($tmp1644->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1644 = $tmp1644->next;
                    }
                    $fn1646 $tmp1645 = $tmp1644->methods[0];
                    panda$collections$Iterator* $tmp1647 = $tmp1645(((panda$collections$Iterable*) result1441->choiceEntries));
                    $tmp1643 = $tmp1647;
                    $tmp1642 = $tmp1643;
                    Iter$491$131641 = $tmp1642;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1642));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1643));
                    $l1648:;
                    ITable* $tmp1651 = Iter$491$131641->$class->itable;
                    while ($tmp1651->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1651 = $tmp1651->next;
                    }
                    $fn1653 $tmp1652 = $tmp1651->methods[0];
                    panda$core$Bit $tmp1654 = $tmp1652(Iter$491$131641);
                    panda$core$Bit $tmp1655 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1654);
                    bool $tmp1650 = $tmp1655.value;
                    if (!$tmp1650) goto $l1649;
                    {
                        int $tmp1658;
                        {
                            ITable* $tmp1662 = Iter$491$131641->$class->itable;
                            while ($tmp1662->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1662 = $tmp1662->next;
                            }
                            $fn1664 $tmp1663 = $tmp1662->methods[1];
                            panda$core$Object* $tmp1665 = $tmp1663(Iter$491$131641);
                            $tmp1661 = $tmp1665;
                            $tmp1660 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1661);
                            e1659 = $tmp1660;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1660));
                            panda$core$Panda$unref$panda$core$Object($tmp1661);
                            panda$core$Int64 $tmp1666 = panda$collections$Array$get_count$R$panda$core$Int64(e1659->fields);
                            panda$core$Bit $tmp1667 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1666, ((panda$core$Int64) { 0 }));
                            if ($tmp1667.value) {
                            {
                                haveFields1637 = ((panda$core$Bit) { true });
                                $tmp1658 = 0;
                                goto $l1656;
                                $l1668:;
                                goto $l1649;
                            }
                            }
                        }
                        $tmp1658 = -1;
                        goto $l1656;
                        $l1656:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1659));
                        e1659 = NULL;
                        switch ($tmp1658) {
                            case -1: goto $l1669;
                            case 0: goto $l1668;
                        }
                        $l1669:;
                    }
                    goto $l1648;
                    $l1649:;
                }
                $tmp1640 = -1;
                goto $l1638;
                $l1638:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$491$131641));
                Iter$491$131641 = NULL;
                switch ($tmp1640) {
                    case -1: goto $l1670;
                }
                $l1670:;
            }
            panda$core$Bit $tmp1671 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1637);
            if ($tmp1671.value) {
            {
                {
                    $tmp1672 = result1441->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp1675 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp1674 = $tmp1675;
                    $tmp1673 = $tmp1674;
                    result1441->rawSuper = $tmp1673;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1673));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1674));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1672));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp1679 = (($fn1678) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1677 = $tmp1679;
        panda$core$Object* $tmp1680 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1677)->currentClass);
        $tmp1676 = $tmp1680;
        panda$core$Panda$unref$panda$core$Object($tmp1676);
        panda$core$Panda$unref$panda$core$Object($tmp1677);
        $tmp1682 = result1441;
        $finallyReturn1680 = $tmp1682;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1682));
        $tmp1291 = 0;
        goto $l1289;
        $l1683:;
        return $finallyReturn1680;
    }
    $l1289:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1292));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1309));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1325));
    annotations1325 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1329));
    parameters1329 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1400));
    supertypes1400 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1441));
    result1441 = NULL;
    switch ($tmp1291) {
        case 0: goto $l1683;
    }
    $l1685:;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$507$91689 = NULL;
    panda$collections$Iterator* $tmp1690;
    panda$collections$Iterator* $tmp1691;
    org$pandalanguage$pandac$ClassDecl* inner1707 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1708;
    panda$core$Object* $tmp1709;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp1688;
        {
            ITable* $tmp1692 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp1692->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1692 = $tmp1692->next;
            }
            $fn1694 $tmp1693 = $tmp1692->methods[0];
            panda$collections$Iterator* $tmp1695 = $tmp1693(((panda$collections$Iterable*) p_cl->classes));
            $tmp1691 = $tmp1695;
            $tmp1690 = $tmp1691;
            Iter$507$91689 = $tmp1690;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1690));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1691));
            $l1696:;
            ITable* $tmp1699 = Iter$507$91689->$class->itable;
            while ($tmp1699->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1699 = $tmp1699->next;
            }
            $fn1701 $tmp1700 = $tmp1699->methods[0];
            panda$core$Bit $tmp1702 = $tmp1700(Iter$507$91689);
            panda$core$Bit $tmp1703 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1702);
            bool $tmp1698 = $tmp1703.value;
            if (!$tmp1698) goto $l1697;
            {
                int $tmp1706;
                {
                    ITable* $tmp1710 = Iter$507$91689->$class->itable;
                    while ($tmp1710->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1710 = $tmp1710->next;
                    }
                    $fn1712 $tmp1711 = $tmp1710->methods[1];
                    panda$core$Object* $tmp1713 = $tmp1711(Iter$507$91689);
                    $tmp1709 = $tmp1713;
                    $tmp1708 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1709);
                    inner1707 = $tmp1708;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1708));
                    panda$core$Panda$unref$panda$core$Object($tmp1709);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1707, p_arr);
                }
                $tmp1706 = -1;
                goto $l1704;
                $l1704:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1707));
                inner1707 = NULL;
                switch ($tmp1706) {
                    case -1: goto $l1714;
                }
                $l1714:;
            }
            goto $l1696;
            $l1697:;
        }
        $tmp1688 = -1;
        goto $l1686;
        $l1686:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$507$91689));
        Iter$507$91689 = NULL;
        switch ($tmp1688) {
            case -1: goto $l1715;
        }
        $l1715:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$513_91719 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1720;
    panda$collections$ImmutableArray* entries1722 = NULL;
    panda$collections$Array* result1727 = NULL;
    panda$collections$Array* $tmp1728;
    panda$collections$Array* $tmp1729;
    panda$core$String* currentPackage1731 = NULL;
    panda$core$String* $tmp1732;
    panda$collections$HashMap* aliases1734 = NULL;
    panda$collections$HashMap* $tmp1735;
    panda$collections$HashMap* $tmp1736;
    panda$collections$Iterator* Iter$518$171741 = NULL;
    panda$collections$Iterator* $tmp1742;
    panda$collections$Iterator* $tmp1743;
    org$pandalanguage$pandac$ASTNode* e1759 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1760;
    panda$core$Object* $tmp1761;
    org$pandalanguage$pandac$ASTNode* $match$519_211769 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1770;
    panda$core$String* name1772 = NULL;
    panda$core$String* $tmp1774;
    panda$core$String* $tmp1775;
    panda$core$String* fullName1777 = NULL;
    panda$core$String$Index$nullable idx1782;
    panda$core$String* alias1785 = NULL;
    panda$core$String* $tmp1786;
    panda$core$String* $tmp1787;
    panda$core$String* $tmp1788;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1789;
    panda$core$String* $tmp1792;
    panda$core$String* $tmp1793;
    org$pandalanguage$pandac$Position position1796;
    org$pandalanguage$pandac$ASTNode* dc1798 = NULL;
    panda$collections$ImmutableArray* annotations1800 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1802;
    panda$core$String* name1804 = NULL;
    panda$collections$ImmutableArray* generics1806 = NULL;
    panda$collections$ImmutableArray* supertypes1808 = NULL;
    panda$collections$ImmutableArray* members1810 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl1815 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1816;
    org$pandalanguage$pandac$ClassDecl* $tmp1817;
    panda$collections$ListView* $finallyReturn1822;
    panda$collections$ListView* $tmp1824;
    int $tmp1718;
    {
        $tmp1720 = p_file;
        $match$513_91719 = $tmp1720;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1720));
        panda$core$Bit $tmp1721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_91719->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1721.value) {
        {
            panda$collections$ImmutableArray** $tmp1723 = ((panda$collections$ImmutableArray**) ((char*) $match$513_91719->$data + 0));
            entries1722 = *$tmp1723;
            int $tmp1726;
            {
                panda$collections$Array* $tmp1730 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1730);
                $tmp1729 = $tmp1730;
                $tmp1728 = $tmp1729;
                result1727 = $tmp1728;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1728));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1729));
                $tmp1732 = &$s1733;
                currentPackage1731 = $tmp1732;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1732));
                panda$collections$HashMap* $tmp1737 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp1737);
                $tmp1736 = $tmp1737;
                $tmp1735 = $tmp1736;
                aliases1734 = $tmp1735;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1735));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1736));
                {
                    int $tmp1740;
                    {
                        ITable* $tmp1744 = ((panda$collections$Iterable*) entries1722)->$class->itable;
                        while ($tmp1744->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1744 = $tmp1744->next;
                        }
                        $fn1746 $tmp1745 = $tmp1744->methods[0];
                        panda$collections$Iterator* $tmp1747 = $tmp1745(((panda$collections$Iterable*) entries1722));
                        $tmp1743 = $tmp1747;
                        $tmp1742 = $tmp1743;
                        Iter$518$171741 = $tmp1742;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1742));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1743));
                        $l1748:;
                        ITable* $tmp1751 = Iter$518$171741->$class->itable;
                        while ($tmp1751->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1751 = $tmp1751->next;
                        }
                        $fn1753 $tmp1752 = $tmp1751->methods[0];
                        panda$core$Bit $tmp1754 = $tmp1752(Iter$518$171741);
                        panda$core$Bit $tmp1755 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1754);
                        bool $tmp1750 = $tmp1755.value;
                        if (!$tmp1750) goto $l1749;
                        {
                            int $tmp1758;
                            {
                                ITable* $tmp1762 = Iter$518$171741->$class->itable;
                                while ($tmp1762->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1762 = $tmp1762->next;
                                }
                                $fn1764 $tmp1763 = $tmp1762->methods[1];
                                panda$core$Object* $tmp1765 = $tmp1763(Iter$518$171741);
                                $tmp1761 = $tmp1765;
                                $tmp1760 = ((org$pandalanguage$pandac$ASTNode*) $tmp1761);
                                e1759 = $tmp1760;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1760));
                                panda$core$Panda$unref$panda$core$Object($tmp1761);
                                int $tmp1768;
                                {
                                    $tmp1770 = e1759;
                                    $match$519_211769 = $tmp1770;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1770));
                                    panda$core$Bit $tmp1771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$519_211769->$rawValue, ((panda$core$Int64) { 27 }));
                                    if ($tmp1771.value) {
                                    {
                                        panda$core$String** $tmp1773 = ((panda$core$String**) ((char*) $match$519_211769->$data + 16));
                                        name1772 = *$tmp1773;
                                        {
                                            $tmp1774 = currentPackage1731;
                                            $tmp1775 = name1772;
                                            currentPackage1731 = $tmp1775;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1775));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1774));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$519_211769->$rawValue, ((panda$core$Int64) { 38 }));
                                    if ($tmp1776.value) {
                                    {
                                        panda$core$String** $tmp1778 = ((panda$core$String**) ((char*) $match$519_211769->$data + 16));
                                        fullName1777 = *$tmp1778;
                                        int $tmp1781;
                                        {
                                            panda$core$String$Index$nullable $tmp1784 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName1777, &$s1783);
                                            idx1782 = $tmp1784;
                                            memset(&alias1785, 0, sizeof(alias1785));
                                            if (((panda$core$Bit) { idx1782.nonnull }).value) {
                                            {
                                                {
                                                    $tmp1786 = alias1785;
                                                    panda$core$String$Index $tmp1790 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName1777, ((panda$core$String$Index) idx1782.value));
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1789, ((panda$core$String$Index$nullable) { $tmp1790, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                                    panda$core$String* $tmp1791 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName1777, $tmp1789);
                                                    $tmp1788 = $tmp1791;
                                                    $tmp1787 = $tmp1788;
                                                    alias1785 = $tmp1787;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1787));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1788));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1786));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp1792 = alias1785;
                                                    $tmp1793 = fullName1777;
                                                    alias1785 = $tmp1793;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1793));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1792));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1734, ((panda$collections$Key*) alias1785), ((panda$core$Object*) fullName1777));
                                        }
                                        $tmp1781 = -1;
                                        goto $l1779;
                                        $l1779:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias1785));
                                        switch ($tmp1781) {
                                            case -1: goto $l1794;
                                        }
                                        $l1794:;
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$519_211769->$rawValue, ((panda$core$Int64) { 9 }));
                                    if ($tmp1795.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp1797 = ((org$pandalanguage$pandac$Position*) ((char*) $match$519_211769->$data + 0));
                                        position1796 = *$tmp1797;
                                        org$pandalanguage$pandac$ASTNode** $tmp1799 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$519_211769->$data + 16));
                                        dc1798 = *$tmp1799;
                                        panda$collections$ImmutableArray** $tmp1801 = ((panda$collections$ImmutableArray**) ((char*) $match$519_211769->$data + 24));
                                        annotations1800 = *$tmp1801;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp1803 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$519_211769->$data + 32));
                                        kind1802 = *$tmp1803;
                                        panda$core$String** $tmp1805 = ((panda$core$String**) ((char*) $match$519_211769->$data + 40));
                                        name1804 = *$tmp1805;
                                        panda$collections$ImmutableArray** $tmp1807 = ((panda$collections$ImmutableArray**) ((char*) $match$519_211769->$data + 48));
                                        generics1806 = *$tmp1807;
                                        panda$collections$ImmutableArray** $tmp1809 = ((panda$collections$ImmutableArray**) ((char*) $match$519_211769->$data + 56));
                                        supertypes1808 = *$tmp1809;
                                        panda$collections$ImmutableArray** $tmp1811 = ((panda$collections$ImmutableArray**) ((char*) $match$519_211769->$data + 64));
                                        members1810 = *$tmp1811;
                                        int $tmp1814;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp1818 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1734), currentPackage1731, position1796, dc1798, annotations1800, kind1802, name1804, generics1806, supertypes1808, members1810);
                                            $tmp1817 = $tmp1818;
                                            $tmp1816 = $tmp1817;
                                            cl1815 = $tmp1816;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1816));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1817));
                                            if (((panda$core$Bit) { cl1815 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl1815, result1727);
                                            }
                                            }
                                        }
                                        $tmp1814 = -1;
                                        goto $l1812;
                                        $l1812:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1815));
                                        cl1815 = NULL;
                                        switch ($tmp1814) {
                                            case -1: goto $l1819;
                                        }
                                        $l1819:;
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
                                $tmp1768 = -1;
                                goto $l1766;
                                $l1766:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1770));
                                switch ($tmp1768) {
                                    case -1: goto $l1820;
                                }
                                $l1820:;
                            }
                            $tmp1758 = -1;
                            goto $l1756;
                            $l1756:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1759));
                            e1759 = NULL;
                            switch ($tmp1758) {
                                case -1: goto $l1821;
                            }
                            $l1821:;
                        }
                        goto $l1748;
                        $l1749:;
                    }
                    $tmp1740 = -1;
                    goto $l1738;
                    $l1738:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$518$171741));
                    Iter$518$171741 = NULL;
                    switch ($tmp1740) {
                        case -1: goto $l1822;
                    }
                    $l1822:;
                }
                $tmp1824 = ((panda$collections$ListView*) result1727);
                $finallyReturn1822 = $tmp1824;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1824));
                $tmp1726 = 0;
                goto $l1724;
                $l1825:;
                $tmp1718 = 0;
                goto $l1716;
                $l1826:;
                return $finallyReturn1822;
            }
            $l1724:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1727));
            result1727 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1731));
            currentPackage1731 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases1734));
            aliases1734 = NULL;
            switch ($tmp1726) {
                case 0: goto $l1825;
            }
            $l1828:;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp1718 = -1;
    goto $l1716;
    $l1716:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1720));
    switch ($tmp1718) {
        case -1: goto $l1829;
        case 0: goto $l1826;
    }
    $l1829:;
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp1832;
    {
    }
    $tmp1832 = -1;
    goto $l1830;
    $l1830:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1832) {
        case -1: goto $l1833;
    }
    $l1833:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
}

