#include "org/pandalanguage/pandac/Scanner.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/ListView.h"
#include "panda/core/Panda.h"
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

typedef panda$collections$Iterator* (*$fn39)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn45)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn51)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn64)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn70)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn76)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn164)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn170)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn176)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn223)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn229)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn235)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn250)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn256)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn262)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn285)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn291)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn297)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn315)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn321)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn327)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn345)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn351)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn357)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn371)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn377)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn383)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn399)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn405)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn411)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn418)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn424)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn430)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn458)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn464)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn470)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn483)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn489)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn495)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn502)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn508)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn514)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn528)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn534)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn540)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn558)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn564)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn570)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn600)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn606)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn612)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn727)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn733)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn739)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn749)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn755)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn761)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn878)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn884)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn890)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn906)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn917)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn923)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn929)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn950)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn956)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn962)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn982)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn988)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn994)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1046)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1052)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1058)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1069)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1075)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1081)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1096)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1102)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1108)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x6f\x6e\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x27", 30, -1250916154819313721, NULL };
static panda$core$String $s646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x68\x61\x76\x65\x20\x61\x20\x62\x6f\x64\x79", 16, -7652461387112275530, NULL };
static panda$core$String $s698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s809 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s829 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s852 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s945 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s998 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1018 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s1118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    {
        self->compiler = p_compiler;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_type) {
    org$pandalanguage$pandac$ASTNode* $match$18_92;
    org$pandalanguage$pandac$Position position4;
    panda$core$String* name6;
    org$pandalanguage$pandac$Position position10;
    org$pandalanguage$pandac$ASTNode* base12;
    panda$collections$Array* subtypes14;
    org$pandalanguage$pandac$Type* tmp117;
    org$pandalanguage$pandac$Position position23;
    panda$core$String* base25;
    panda$collections$ImmutableArray* args27;
    panda$collections$Array* subtypes29;
    panda$core$MutableString* name31;
    panda$core$Char8 $tmp33;
    panda$core$String* separator34;
    panda$collections$Iterator* arg$Iter36;
    org$pandalanguage$pandac$ASTNode* arg48;
    org$pandalanguage$pandac$Type* subtype53;
    panda$core$Char8 $tmp56;
    org$pandalanguage$pandac$Type* tmp257;
    {
        $match$18_92 = p_type;
        panda$core$Bit $tmp3 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$18_92->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp3.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5 = ((org$pandalanguage$pandac$Position*) ((char*) $match$18_92->$data + 0));
            position4 = *$tmp5;
            panda$core$String** $tmp7 = ((panda$core$String**) ((char*) $match$18_92->$data + 16));
            name6 = *$tmp7;
            org$pandalanguage$pandac$Type* $tmp8 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp8, name6, ((panda$core$Int64) { 10 }), position4);
            return $tmp8;
        }
        }
        else {
        panda$core$Bit $tmp9 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$18_92->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp9.value) {
        {
            org$pandalanguage$pandac$Position* $tmp11 = ((org$pandalanguage$pandac$Position*) ((char*) $match$18_92->$data + 0));
            position10 = *$tmp11;
            org$pandalanguage$pandac$ASTNode** $tmp13 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$18_92->$data + 16));
            base12 = *$tmp13;
            panda$collections$Array* $tmp15 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp15);
            subtypes14 = $tmp15;
            org$pandalanguage$pandac$Type* $tmp16 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, base12);
            panda$collections$Array$add$panda$collections$Array$T(subtypes14, ((panda$core$Object*) $tmp16));
            {
                org$pandalanguage$pandac$Type* $tmp18 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$Object* $tmp19 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes14, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp21 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp19))->name, &$s20);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp18, $tmp21, ((panda$core$Int64) { 11 }), position10, ((panda$collections$ListView*) subtypes14), ((panda$core$Bit) { false }));
                tmp117 = $tmp18;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes14));
                return tmp117;
            }
        }
        }
        else {
        panda$core$Bit $tmp22 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$18_92->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp22.value) {
        {
            org$pandalanguage$pandac$Position* $tmp24 = ((org$pandalanguage$pandac$Position*) ((char*) $match$18_92->$data + 0));
            position23 = *$tmp24;
            panda$core$String** $tmp26 = ((panda$core$String**) ((char*) $match$18_92->$data + 16));
            base25 = *$tmp26;
            panda$collections$ImmutableArray** $tmp28 = ((panda$collections$ImmutableArray**) ((char*) $match$18_92->$data + 24));
            args27 = *$tmp28;
            panda$collections$Array* $tmp30 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp30);
            subtypes29 = $tmp30;
            panda$core$MutableString* $tmp32 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp32, base25);
            name31 = $tmp32;
            panda$core$Char8$init$panda$core$UInt8(&$tmp33, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name31, $tmp33);
            separator34 = &$s35;
            {
                ITable* $tmp37 = ((panda$collections$Iterable*) args27)->$class->itable;
                while ($tmp37->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp37 = $tmp37->next;
                }
                $fn39 $tmp38 = $tmp37->methods[0];
                panda$collections$Iterator* $tmp40 = $tmp38(((panda$collections$Iterable*) args27));
                arg$Iter36 = $tmp40;
                $l41:;
                ITable* $tmp43 = arg$Iter36->$class->itable;
                while ($tmp43->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp43 = $tmp43->next;
                }
                $fn45 $tmp44 = $tmp43->methods[0];
                panda$core$Bit $tmp46 = $tmp44(arg$Iter36);
                panda$core$Bit $tmp47 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp46);
                if (!$tmp47.value) goto $l42;
                {
                    ITable* $tmp49 = arg$Iter36->$class->itable;
                    while ($tmp49->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp49 = $tmp49->next;
                    }
                    $fn51 $tmp50 = $tmp49->methods[1];
                    panda$core$Object* $tmp52 = $tmp50(arg$Iter36);
                    arg48 = ((org$pandalanguage$pandac$ASTNode*) $tmp52);
                    org$pandalanguage$pandac$Type* $tmp54 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, arg48);
                    subtype53 = $tmp54;
                    panda$collections$Array$add$panda$collections$Array$T(subtypes29, ((panda$core$Object*) subtype53));
                    panda$core$MutableString$append$panda$core$String(name31, separator34);
                    panda$core$MutableString$append$panda$core$String(name31, ((org$pandalanguage$pandac$Symbol*) subtype53)->name);
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator34));
                        separator34 = &$s55;
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtype53));
                }
                goto $l41;
                $l42:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp56, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name31, $tmp56);
            {
                org$pandalanguage$pandac$Type* $tmp58 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp59 = panda$core$MutableString$finish$R$panda$core$String(name31);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp58, $tmp59, ((panda$core$Int64) { 21 }), position23, ((panda$collections$ListView*) subtypes29), ((panda$core$Bit) { false }));
                tmp257 = $tmp58;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes29));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator34));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name31));
                }
                return tmp257;
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
    }
}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, panda$collections$ImmutableArray* p_a) {
    panda$core$Int64 flags60;
    panda$collections$Iterator* c$Iter61;
    org$pandalanguage$pandac$ASTNode* c73;
    org$pandalanguage$pandac$ASTNode* $match$47_1378;
    org$pandalanguage$pandac$Position position80;
    panda$core$String* text82;
    panda$core$String* $match$49_2184;
    flags60 = ((panda$core$Int64) { 0 });
    {
        ITable* $tmp62 = ((panda$collections$Iterable*) p_a)->$class->itable;
        while ($tmp62->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp62 = $tmp62->next;
        }
        $fn64 $tmp63 = $tmp62->methods[0];
        panda$collections$Iterator* $tmp65 = $tmp63(((panda$collections$Iterable*) p_a));
        c$Iter61 = $tmp65;
        $l66:;
        ITable* $tmp68 = c$Iter61->$class->itable;
        while ($tmp68->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp68 = $tmp68->next;
        }
        $fn70 $tmp69 = $tmp68->methods[0];
        panda$core$Bit $tmp71 = $tmp69(c$Iter61);
        panda$core$Bit $tmp72 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp71);
        if (!$tmp72.value) goto $l67;
        {
            ITable* $tmp74 = c$Iter61->$class->itable;
            while ($tmp74->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp74 = $tmp74->next;
            }
            $fn76 $tmp75 = $tmp74->methods[1];
            panda$core$Object* $tmp77 = $tmp75(c$Iter61);
            c73 = ((org$pandalanguage$pandac$ASTNode*) $tmp77);
            {
                $match$47_1378 = c73;
                panda$core$Bit $tmp79 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_1378->$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp79.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp81 = ((org$pandalanguage$pandac$Position*) ((char*) $match$47_1378->$data + 0));
                    position80 = *$tmp81;
                    panda$core$String** $tmp83 = ((panda$core$String**) ((char*) $match$47_1378->$data + 16));
                    text82 = *$tmp83;
                    {
                        $match$49_2184 = text82;
                        panda$core$Bit $tmp86 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2184, &$s85);
                        if ($tmp86.value) {
                        {
                            panda$core$Int64 $tmp87 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                            panda$core$Int64 $tmp88 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp87);
                            flags60 = $tmp88;
                        }
                        }
                        else {
                        panda$core$Bit $tmp90 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2184, &$s89);
                        if ($tmp90.value) {
                        {
                            panda$core$Int64 $tmp91 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                            panda$core$Int64 $tmp92 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp91);
                            flags60 = $tmp92;
                        }
                        }
                        else {
                        panda$core$Bit $tmp94 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2184, &$s93);
                        if ($tmp94.value) {
                        {
                            panda$core$Int64 $tmp95 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                            panda$core$Int64 $tmp96 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp95);
                            flags60 = $tmp96;
                        }
                        }
                        else {
                        panda$core$Bit $tmp98 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2184, &$s97);
                        if ($tmp98.value) {
                        {
                            panda$core$Int64 $tmp99 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                            panda$core$Int64 $tmp100 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp99);
                            flags60 = $tmp100;
                        }
                        }
                        else {
                        panda$core$Bit $tmp102 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2184, &$s101);
                        if ($tmp102.value) {
                        {
                            panda$core$Int64 $tmp103 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                            panda$core$Int64 $tmp104 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp103);
                            flags60 = $tmp104;
                        }
                        }
                        else {
                        panda$core$Bit $tmp106 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2184, &$s105);
                        if ($tmp106.value) {
                        {
                            panda$core$Int64 $tmp107 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                            panda$core$Int64 $tmp108 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp107);
                            flags60 = $tmp108;
                        }
                        }
                        else {
                        panda$core$Bit $tmp110 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2184, &$s109);
                        if ($tmp110.value) {
                        {
                            panda$core$Int64 $tmp111 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                            panda$core$Int64 $tmp112 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp111);
                            flags60 = $tmp112;
                        }
                        }
                        else {
                        panda$core$Bit $tmp114 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2184, &$s113);
                        if ($tmp114.value) {
                        {
                            panda$core$Int64 $tmp115 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                            panda$core$Int64 $tmp116 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp115);
                            flags60 = $tmp116;
                        }
                        }
                        else {
                        panda$core$Bit $tmp118 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2184, &$s117);
                        if ($tmp118.value) {
                        {
                            panda$core$Int64 $tmp119 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                            panda$core$Int64 $tmp120 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp119);
                            flags60 = $tmp120;
                        }
                        }
                        else {
                        panda$core$Bit $tmp122 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2184, &$s121);
                        if ($tmp122.value) {
                        {
                            panda$core$Int64 $tmp123 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                            panda$core$Int64 $tmp124 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp123);
                            flags60 = $tmp124;
                        }
                        }
                        else {
                        panda$core$Bit $tmp126 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2184, &$s125);
                        if ($tmp126.value) {
                        {
                            panda$core$Int64 $tmp127 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                            panda$core$Int64 $tmp128 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp127);
                            flags60 = $tmp128;
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s129, text82);
                            panda$core$String* $tmp132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp130, &$s131);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, position80, $tmp132);
                        }
                        }
                        }
                        }
                        }
                        }
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
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l66;
        $l67:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
    }
    org$pandalanguage$pandac$Annotations* $tmp133 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp133, flags60);
    return $tmp133;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment134;
    org$pandalanguage$pandac$ASTNode* $match$79_13135;
    org$pandalanguage$pandac$Position position137;
    panda$core$String* text139;
    org$pandalanguage$pandac$Annotations* annotations141;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind143;
    org$pandalanguage$pandac$ASTNode* $match$88_9144;
    org$pandalanguage$pandac$Variable$Kind kind146;
    panda$collections$ImmutableArray* decls148;
    org$pandalanguage$pandac$Variable$Kind $match$90_17150;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp152;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp154;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp156;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp160;
    panda$collections$Iterator* decl$Iter161;
    org$pandalanguage$pandac$ASTNode* decl173;
    org$pandalanguage$pandac$ASTNode* $match$102_21178;
    org$pandalanguage$pandac$Position declPosition180;
    org$pandalanguage$pandac$ASTNode* target182;
    org$pandalanguage$pandac$ASTNode* value184;
    panda$core$String* name186;
    org$pandalanguage$pandac$Type* type187;
    org$pandalanguage$pandac$ASTNode* $match$106_29188;
    panda$core$String* id190;
    panda$core$String* id194;
    org$pandalanguage$pandac$ASTNode* idType196;
    org$pandalanguage$pandac$FieldDecl* field199;
    memset(&doccomment134, 0, sizeof(doccomment134));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment134 = NULL;
        }
    }
    }
    else {
    {
        {
            $match$79_13135 = p_rawDoccomment;
            panda$core$Bit $tmp136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$79_13135->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp136.value) {
            {
                org$pandalanguage$pandac$Position* $tmp138 = ((org$pandalanguage$pandac$Position*) ((char*) $match$79_13135->$data + 0));
                position137 = *$tmp138;
                panda$core$String** $tmp140 = ((panda$core$String**) ((char*) $match$79_13135->$data + 16));
                text139 = *$tmp140;
                {
                    doccomment134 = text139;
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
    }
    org$pandalanguage$pandac$Annotations* $tmp142 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations141 = $tmp142;
    memset(&fieldKind143, 0, sizeof(fieldKind143));
    {
        $match$88_9144 = p_varDecl;
        panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$88_9144->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp145.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp147 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$88_9144->$data + 16));
            kind146 = *$tmp147;
            panda$collections$ImmutableArray** $tmp149 = ((panda$collections$ImmutableArray**) ((char*) $match$88_9144->$data + 24));
            decls148 = *$tmp149;
            {
                $match$90_17150 = kind146;
                panda$core$Bit $tmp151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17150.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp151.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp152, ((panda$core$Int64) { 0 }));
                    fieldKind143 = $tmp152;
                }
                }
                else {
                panda$core$Bit $tmp153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17150.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp153.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp154, ((panda$core$Int64) { 1 }));
                    fieldKind143 = $tmp154;
                }
                }
                else {
                panda$core$Bit $tmp155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17150.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp155.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp156, ((panda$core$Int64) { 2 }));
                    fieldKind143 = $tmp156;
                    panda$core$Int64 $tmp157 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp158 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations141->flags, $tmp157);
                    annotations141->flags = $tmp158;
                }
                }
                else {
                panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17150.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp159.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp160, ((panda$core$Int64) { 3 }));
                    fieldKind143 = $tmp160;
                }
                }
                }
                }
                }
            }
            {
                ITable* $tmp162 = ((panda$collections$Iterable*) decls148)->$class->itable;
                while ($tmp162->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp162 = $tmp162->next;
                }
                $fn164 $tmp163 = $tmp162->methods[0];
                panda$collections$Iterator* $tmp165 = $tmp163(((panda$collections$Iterable*) decls148));
                decl$Iter161 = $tmp165;
                $l166:;
                ITable* $tmp168 = decl$Iter161->$class->itable;
                while ($tmp168->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp168 = $tmp168->next;
                }
                $fn170 $tmp169 = $tmp168->methods[0];
                panda$core$Bit $tmp171 = $tmp169(decl$Iter161);
                panda$core$Bit $tmp172 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp171);
                if (!$tmp172.value) goto $l167;
                {
                    ITable* $tmp174 = decl$Iter161->$class->itable;
                    while ($tmp174->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp174 = $tmp174->next;
                    }
                    $fn176 $tmp175 = $tmp174->methods[1];
                    panda$core$Object* $tmp177 = $tmp175(decl$Iter161);
                    decl173 = ((org$pandalanguage$pandac$ASTNode*) $tmp177);
                    {
                        $match$102_21178 = decl173;
                        panda$core$Bit $tmp179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$102_21178->$rawValue, ((panda$core$Int64) { 11 }));
                        if ($tmp179.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp181 = ((org$pandalanguage$pandac$Position*) ((char*) $match$102_21178->$data + 0));
                            declPosition180 = *$tmp181;
                            org$pandalanguage$pandac$ASTNode** $tmp183 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$102_21178->$data + 16));
                            target182 = *$tmp183;
                            org$pandalanguage$pandac$ASTNode** $tmp185 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$102_21178->$data + 24));
                            value184 = *$tmp185;
                            memset(&name186, 0, sizeof(name186));
                            memset(&type187, 0, sizeof(type187));
                            {
                                $match$106_29188 = target182;
                                panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$106_29188->$rawValue, ((panda$core$Int64) { 18 }));
                                if ($tmp189.value) {
                                {
                                    panda$core$String** $tmp191 = ((panda$core$String**) ((char*) $match$106_29188->$data + 16));
                                    id190 = *$tmp191;
                                    {
                                        name186 = id190;
                                    }
                                    {
                                        org$pandalanguage$pandac$Type* $tmp192 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                        type187 = $tmp192;
                                    }
                                }
                                }
                                else {
                                panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$106_29188->$rawValue, ((panda$core$Int64) { 36 }));
                                if ($tmp193.value) {
                                {
                                    panda$core$String** $tmp195 = ((panda$core$String**) ((char*) $match$106_29188->$data + 16));
                                    id194 = *$tmp195;
                                    org$pandalanguage$pandac$ASTNode** $tmp197 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$106_29188->$data + 24));
                                    idType196 = *$tmp197;
                                    {
                                        name186 = id194;
                                    }
                                    {
                                        org$pandalanguage$pandac$Type* $tmp198 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType196);
                                        type187 = $tmp198;
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
                            org$pandalanguage$pandac$FieldDecl* $tmp200 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp200, p_owner, declPosition180, doccomment134, annotations141, fieldKind143, name186, type187, value184);
                            field199 = $tmp200;
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field199));
                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field199));
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field199));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type187));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $match$106_29188));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name186));
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
                goto $l166;
                $l167:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp165));
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations141));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment134));
    }
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$131_9201;
    org$pandalanguage$pandac$ASTNode* test203;
    org$pandalanguage$pandac$ASTNode* left207;
    org$pandalanguage$pandac$ASTNode* right209;
    panda$collections$ImmutableArray* statements217;
    panda$core$Int64 result219;
    panda$collections$Iterator* s$Iter220;
    org$pandalanguage$pandac$ASTNode* s232;
    org$pandalanguage$pandac$ASTNode* target241;
    panda$collections$ImmutableArray* args243;
    panda$core$Int64 result245;
    panda$collections$Iterator* a$Iter247;
    org$pandalanguage$pandac$ASTNode* a259;
    org$pandalanguage$pandac$ASTNode* base267;
    org$pandalanguage$pandac$ASTNode* value272;
    panda$collections$ImmutableArray* statements276;
    org$pandalanguage$pandac$ASTNode* test278;
    panda$core$Int64 result280;
    panda$collections$Iterator* s$Iter282;
    org$pandalanguage$pandac$ASTNode* s294;
    org$pandalanguage$pandac$ASTNode* base302;
    org$pandalanguage$pandac$ASTNode* list306;
    panda$collections$ImmutableArray* statements308;
    panda$core$Int64 result310;
    panda$collections$Iterator* s$Iter312;
    org$pandalanguage$pandac$ASTNode* s324;
    org$pandalanguage$pandac$ASTNode* test334;
    panda$collections$ImmutableArray* ifTrue336;
    org$pandalanguage$pandac$ASTNode* ifFalse338;
    panda$core$Int64 result340;
    panda$collections$Iterator* s$Iter342;
    org$pandalanguage$pandac$ASTNode* s354;
    panda$collections$ImmutableArray* statements365;
    panda$core$Int64 result367;
    panda$collections$Iterator* s$Iter368;
    org$pandalanguage$pandac$ASTNode* s380;
    org$pandalanguage$pandac$ASTNode* value388;
    panda$collections$ImmutableArray* whens390;
    panda$collections$ImmutableArray* other392;
    panda$core$Int64 result394;
    panda$collections$Iterator* w$Iter396;
    org$pandalanguage$pandac$ASTNode* w408;
    panda$collections$Iterator* s$Iter415;
    org$pandalanguage$pandac$ASTNode* s427;
    org$pandalanguage$pandac$ASTNode* base437;
    org$pandalanguage$pandac$ASTNode* value444;
    panda$collections$ImmutableArray* decls452;
    panda$core$Int64 result454;
    panda$collections$Iterator* decl$Iter455;
    org$pandalanguage$pandac$ASTNode* decl467;
    panda$collections$ImmutableArray* tests475;
    panda$collections$ImmutableArray* statements477;
    panda$core$Int64 result479;
    panda$collections$Iterator* test$Iter480;
    org$pandalanguage$pandac$ASTNode* test492;
    panda$collections$Iterator* s$Iter499;
    org$pandalanguage$pandac$ASTNode* s511;
    org$pandalanguage$pandac$ASTNode* test519;
    panda$collections$ImmutableArray* statements521;
    panda$core$Int64 result523;
    panda$collections$Iterator* s$Iter525;
    org$pandalanguage$pandac$ASTNode* s537;
    {
        $match$131_9201 = p_node;
        panda$core$Bit $tmp202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp202.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp204 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9201->$data + 16));
            test203 = *$tmp204;
            panda$core$Int64 $tmp205 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test203);
            return $tmp205;
        }
        }
        else {
        panda$core$Bit $tmp206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp206.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp208 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9201->$data + 16));
            left207 = *$tmp208;
            org$pandalanguage$pandac$ASTNode** $tmp210 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9201->$data + 32));
            right209 = *$tmp210;
            panda$core$Int64 $tmp211 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left207);
            panda$core$Int64 $tmp212 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp211);
            panda$core$Int64 $tmp213 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right209);
            panda$core$Int64 $tmp214 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp212, $tmp213);
            return $tmp214;
        }
        }
        else {
        panda$core$Bit $tmp215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp215.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp216.value) {
        {
            panda$collections$ImmutableArray** $tmp218 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9201->$data + 16));
            statements217 = *$tmp218;
            result219 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp221 = ((panda$collections$Iterable*) statements217)->$class->itable;
                while ($tmp221->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp221 = $tmp221->next;
                }
                $fn223 $tmp222 = $tmp221->methods[0];
                panda$collections$Iterator* $tmp224 = $tmp222(((panda$collections$Iterable*) statements217));
                s$Iter220 = $tmp224;
                $l225:;
                ITable* $tmp227 = s$Iter220->$class->itable;
                while ($tmp227->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp227 = $tmp227->next;
                }
                $fn229 $tmp228 = $tmp227->methods[0];
                panda$core$Bit $tmp230 = $tmp228(s$Iter220);
                panda$core$Bit $tmp231 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp230);
                if (!$tmp231.value) goto $l226;
                {
                    ITable* $tmp233 = s$Iter220->$class->itable;
                    while ($tmp233->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp233 = $tmp233->next;
                    }
                    $fn235 $tmp234 = $tmp233->methods[1];
                    panda$core$Object* $tmp236 = $tmp234(s$Iter220);
                    s232 = ((org$pandalanguage$pandac$ASTNode*) $tmp236);
                    panda$core$Int64 $tmp237 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s232);
                    panda$core$Int64 $tmp238 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result219, $tmp237);
                    result219 = $tmp238;
                }
                goto $l225;
                $l226:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
            }
            return result219;
        }
        }
        else {
        panda$core$Bit $tmp239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp239.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp240.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp242 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9201->$data + 16));
            target241 = *$tmp242;
            panda$collections$ImmutableArray** $tmp244 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9201->$data + 24));
            args243 = *$tmp244;
            panda$core$Int64 $tmp246 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target241);
            result245 = $tmp246;
            {
                ITable* $tmp248 = ((panda$collections$Iterable*) args243)->$class->itable;
                while ($tmp248->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp248 = $tmp248->next;
                }
                $fn250 $tmp249 = $tmp248->methods[0];
                panda$collections$Iterator* $tmp251 = $tmp249(((panda$collections$Iterable*) args243));
                a$Iter247 = $tmp251;
                $l252:;
                ITable* $tmp254 = a$Iter247->$class->itable;
                while ($tmp254->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp254 = $tmp254->next;
                }
                $fn256 $tmp255 = $tmp254->methods[0];
                panda$core$Bit $tmp257 = $tmp255(a$Iter247);
                panda$core$Bit $tmp258 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp257);
                if (!$tmp258.value) goto $l253;
                {
                    ITable* $tmp260 = a$Iter247->$class->itable;
                    while ($tmp260->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp260 = $tmp260->next;
                    }
                    $fn262 $tmp261 = $tmp260->methods[1];
                    panda$core$Object* $tmp263 = $tmp261(a$Iter247);
                    a259 = ((org$pandalanguage$pandac$ASTNode*) $tmp263);
                    panda$core$Int64 $tmp264 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a259);
                    panda$core$Int64 $tmp265 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result245, $tmp264);
                    result245 = $tmp265;
                }
                goto $l252;
                $l253:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp251));
            }
            return result245;
        }
        }
        else {
        panda$core$Bit $tmp266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp266.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp268 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9201->$data + 16));
            base267 = *$tmp268;
            panda$core$Int64 $tmp269 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base267);
            return $tmp269;
        }
        }
        else {
        panda$core$Bit $tmp270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp270.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp271.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp273 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9201->$data + 24));
            value272 = *$tmp273;
            if (((panda$core$Bit) { value272 == NULL }).value) {
            {
                return ((panda$core$Int64) { 0 });
            }
            }
            panda$core$Int64 $tmp274 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value272);
            return $tmp274;
        }
        }
        else {
        panda$core$Bit $tmp275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp275.value) {
        {
            panda$collections$ImmutableArray** $tmp277 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9201->$data + 24));
            statements276 = *$tmp277;
            org$pandalanguage$pandac$ASTNode** $tmp279 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9201->$data + 32));
            test278 = *$tmp279;
            panda$core$Int64 $tmp281 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test278);
            result280 = $tmp281;
            {
                ITable* $tmp283 = ((panda$collections$Iterable*) statements276)->$class->itable;
                while ($tmp283->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp283 = $tmp283->next;
                }
                $fn285 $tmp284 = $tmp283->methods[0];
                panda$collections$Iterator* $tmp286 = $tmp284(((panda$collections$Iterable*) statements276));
                s$Iter282 = $tmp286;
                $l287:;
                ITable* $tmp289 = s$Iter282->$class->itable;
                while ($tmp289->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp289 = $tmp289->next;
                }
                $fn291 $tmp290 = $tmp289->methods[0];
                panda$core$Bit $tmp292 = $tmp290(s$Iter282);
                panda$core$Bit $tmp293 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp292);
                if (!$tmp293.value) goto $l288;
                {
                    ITable* $tmp295 = s$Iter282->$class->itable;
                    while ($tmp295->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp295 = $tmp295->next;
                    }
                    $fn297 $tmp296 = $tmp295->methods[1];
                    panda$core$Object* $tmp298 = $tmp296(s$Iter282);
                    s294 = ((org$pandalanguage$pandac$ASTNode*) $tmp298);
                    panda$core$Int64 $tmp299 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s294);
                    panda$core$Int64 $tmp300 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result280, $tmp299);
                    result280 = $tmp300;
                }
                goto $l287;
                $l288:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp286));
            }
            return result280;
        }
        }
        else {
        panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp301.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp303 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9201->$data + 16));
            base302 = *$tmp303;
            panda$core$Int64 $tmp304 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base302);
            return $tmp304;
        }
        }
        else {
        panda$core$Bit $tmp305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp305.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp307 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9201->$data + 32));
            list306 = *$tmp307;
            panda$collections$ImmutableArray** $tmp309 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9201->$data + 40));
            statements308 = *$tmp309;
            panda$core$Int64 $tmp311 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list306);
            result310 = $tmp311;
            {
                ITable* $tmp313 = ((panda$collections$Iterable*) statements308)->$class->itable;
                while ($tmp313->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp313 = $tmp313->next;
                }
                $fn315 $tmp314 = $tmp313->methods[0];
                panda$collections$Iterator* $tmp316 = $tmp314(((panda$collections$Iterable*) statements308));
                s$Iter312 = $tmp316;
                $l317:;
                ITable* $tmp319 = s$Iter312->$class->itable;
                while ($tmp319->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp319 = $tmp319->next;
                }
                $fn321 $tmp320 = $tmp319->methods[0];
                panda$core$Bit $tmp322 = $tmp320(s$Iter312);
                panda$core$Bit $tmp323 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp322);
                if (!$tmp323.value) goto $l318;
                {
                    ITable* $tmp325 = s$Iter312->$class->itable;
                    while ($tmp325->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp325 = $tmp325->next;
                    }
                    $fn327 $tmp326 = $tmp325->methods[1];
                    panda$core$Object* $tmp328 = $tmp326(s$Iter312);
                    s324 = ((org$pandalanguage$pandac$ASTNode*) $tmp328);
                    panda$core$Int64 $tmp329 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s324);
                    panda$core$Int64 $tmp330 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result310, $tmp329);
                    result310 = $tmp330;
                }
                goto $l317;
                $l318:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
            }
            return result310;
        }
        }
        else {
        panda$core$Bit $tmp331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp331.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp332.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp333.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp335 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9201->$data + 16));
            test334 = *$tmp335;
            panda$collections$ImmutableArray** $tmp337 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9201->$data + 24));
            ifTrue336 = *$tmp337;
            org$pandalanguage$pandac$ASTNode** $tmp339 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9201->$data + 32));
            ifFalse338 = *$tmp339;
            panda$core$Int64 $tmp341 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test334);
            result340 = $tmp341;
            {
                ITable* $tmp343 = ((panda$collections$Iterable*) ifTrue336)->$class->itable;
                while ($tmp343->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp343 = $tmp343->next;
                }
                $fn345 $tmp344 = $tmp343->methods[0];
                panda$collections$Iterator* $tmp346 = $tmp344(((panda$collections$Iterable*) ifTrue336));
                s$Iter342 = $tmp346;
                $l347:;
                ITable* $tmp349 = s$Iter342->$class->itable;
                while ($tmp349->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp349 = $tmp349->next;
                }
                $fn351 $tmp350 = $tmp349->methods[0];
                panda$core$Bit $tmp352 = $tmp350(s$Iter342);
                panda$core$Bit $tmp353 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp352);
                if (!$tmp353.value) goto $l348;
                {
                    ITable* $tmp355 = s$Iter342->$class->itable;
                    while ($tmp355->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp355 = $tmp355->next;
                    }
                    $fn357 $tmp356 = $tmp355->methods[1];
                    panda$core$Object* $tmp358 = $tmp356(s$Iter342);
                    s354 = ((org$pandalanguage$pandac$ASTNode*) $tmp358);
                    panda$core$Int64 $tmp359 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s354);
                    panda$core$Int64 $tmp360 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result340, $tmp359);
                    result340 = $tmp360;
                }
                goto $l347;
                $l348:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp346));
            }
            if (((panda$core$Bit) { ifFalse338 != NULL }).value) {
            {
                panda$core$Int64 $tmp361 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse338);
                panda$core$Int64 $tmp362 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result340, $tmp361);
                result340 = $tmp362;
            }
            }
            return result340;
        }
        }
        else {
        panda$core$Bit $tmp363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp363.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp364.value) {
        {
            panda$collections$ImmutableArray** $tmp366 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9201->$data + 24));
            statements365 = *$tmp366;
            result367 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp369 = ((panda$collections$Iterable*) statements365)->$class->itable;
                while ($tmp369->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp369 = $tmp369->next;
                }
                $fn371 $tmp370 = $tmp369->methods[0];
                panda$collections$Iterator* $tmp372 = $tmp370(((panda$collections$Iterable*) statements365));
                s$Iter368 = $tmp372;
                $l373:;
                ITable* $tmp375 = s$Iter368->$class->itable;
                while ($tmp375->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp375 = $tmp375->next;
                }
                $fn377 $tmp376 = $tmp375->methods[0];
                panda$core$Bit $tmp378 = $tmp376(s$Iter368);
                panda$core$Bit $tmp379 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp378);
                if (!$tmp379.value) goto $l374;
                {
                    ITable* $tmp381 = s$Iter368->$class->itable;
                    while ($tmp381->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp381 = $tmp381->next;
                    }
                    $fn383 $tmp382 = $tmp381->methods[1];
                    panda$core$Object* $tmp384 = $tmp382(s$Iter368);
                    s380 = ((org$pandalanguage$pandac$ASTNode*) $tmp384);
                    panda$core$Int64 $tmp385 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s380);
                    panda$core$Int64 $tmp386 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result367, $tmp385);
                    result367 = $tmp386;
                }
                goto $l373;
                $l374:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp372));
            }
            return result367;
        }
        }
        else {
        panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp387.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp389 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9201->$data + 16));
            value388 = *$tmp389;
            panda$collections$ImmutableArray** $tmp391 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9201->$data + 24));
            whens390 = *$tmp391;
            panda$collections$ImmutableArray** $tmp393 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9201->$data + 32));
            other392 = *$tmp393;
            panda$core$Int64 $tmp395 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value388);
            result394 = $tmp395;
            {
                ITable* $tmp397 = ((panda$collections$Iterable*) whens390)->$class->itable;
                while ($tmp397->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp397 = $tmp397->next;
                }
                $fn399 $tmp398 = $tmp397->methods[0];
                panda$collections$Iterator* $tmp400 = $tmp398(((panda$collections$Iterable*) whens390));
                w$Iter396 = $tmp400;
                $l401:;
                ITable* $tmp403 = w$Iter396->$class->itable;
                while ($tmp403->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp403 = $tmp403->next;
                }
                $fn405 $tmp404 = $tmp403->methods[0];
                panda$core$Bit $tmp406 = $tmp404(w$Iter396);
                panda$core$Bit $tmp407 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp406);
                if (!$tmp407.value) goto $l402;
                {
                    ITable* $tmp409 = w$Iter396->$class->itable;
                    while ($tmp409->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp409 = $tmp409->next;
                    }
                    $fn411 $tmp410 = $tmp409->methods[1];
                    panda$core$Object* $tmp412 = $tmp410(w$Iter396);
                    w408 = ((org$pandalanguage$pandac$ASTNode*) $tmp412);
                    panda$core$Int64 $tmp413 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w408);
                    panda$core$Int64 $tmp414 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result394, $tmp413);
                    result394 = $tmp414;
                }
                goto $l401;
                $l402:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp400));
            }
            if (((panda$core$Bit) { other392 != NULL }).value) {
            {
                {
                    ITable* $tmp416 = ((panda$collections$Iterable*) other392)->$class->itable;
                    while ($tmp416->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp416 = $tmp416->next;
                    }
                    $fn418 $tmp417 = $tmp416->methods[0];
                    panda$collections$Iterator* $tmp419 = $tmp417(((panda$collections$Iterable*) other392));
                    s$Iter415 = $tmp419;
                    $l420:;
                    ITable* $tmp422 = s$Iter415->$class->itable;
                    while ($tmp422->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp422 = $tmp422->next;
                    }
                    $fn424 $tmp423 = $tmp422->methods[0];
                    panda$core$Bit $tmp425 = $tmp423(s$Iter415);
                    panda$core$Bit $tmp426 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp425);
                    if (!$tmp426.value) goto $l421;
                    {
                        ITable* $tmp428 = s$Iter415->$class->itable;
                        while ($tmp428->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp428 = $tmp428->next;
                        }
                        $fn430 $tmp429 = $tmp428->methods[1];
                        panda$core$Object* $tmp431 = $tmp429(s$Iter415);
                        s427 = ((org$pandalanguage$pandac$ASTNode*) $tmp431);
                        panda$core$Int64 $tmp432 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s427);
                        panda$core$Int64 $tmp433 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result394, $tmp432);
                        result394 = $tmp433;
                    }
                    goto $l420;
                    $l421:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
                }
            }
            }
            return result394;
        }
        }
        else {
        panda$core$Bit $tmp434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp434.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp435.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp436.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp438 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9201->$data + 24));
            base437 = *$tmp438;
            panda$core$Int64 $tmp439 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base437);
            panda$core$Int64 $tmp440 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp439);
            return $tmp440;
        }
        }
        else {
        panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp441.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp442.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp443.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp445 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9201->$data + 16));
            value444 = *$tmp445;
            if (((panda$core$Bit) { value444 == NULL }).value) {
            {
                return ((panda$core$Int64) { 0 });
            }
            }
            panda$core$Int64 $tmp446 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value444);
            return $tmp446;
        }
        }
        else {
        panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp447.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp448.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp449.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp450.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp451.value) {
        {
            panda$collections$ImmutableArray** $tmp453 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9201->$data + 24));
            decls452 = *$tmp453;
            result454 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp456 = ((panda$collections$Iterable*) decls452)->$class->itable;
                while ($tmp456->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp456 = $tmp456->next;
                }
                $fn458 $tmp457 = $tmp456->methods[0];
                panda$collections$Iterator* $tmp459 = $tmp457(((panda$collections$Iterable*) decls452));
                decl$Iter455 = $tmp459;
                $l460:;
                ITable* $tmp462 = decl$Iter455->$class->itable;
                while ($tmp462->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp462 = $tmp462->next;
                }
                $fn464 $tmp463 = $tmp462->methods[0];
                panda$core$Bit $tmp465 = $tmp463(decl$Iter455);
                panda$core$Bit $tmp466 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp465);
                if (!$tmp466.value) goto $l461;
                {
                    ITable* $tmp468 = decl$Iter455->$class->itable;
                    while ($tmp468->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp468 = $tmp468->next;
                    }
                    $fn470 $tmp469 = $tmp468->methods[1];
                    panda$core$Object* $tmp471 = $tmp469(decl$Iter455);
                    decl467 = ((org$pandalanguage$pandac$ASTNode*) $tmp471);
                    panda$core$Int64 $tmp472 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl467);
                    panda$core$Int64 $tmp473 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result454, $tmp472);
                    result454 = $tmp473;
                }
                goto $l460;
                $l461:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp459));
            }
            return result454;
        }
        }
        else {
        panda$core$Bit $tmp474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp474.value) {
        {
            panda$collections$ImmutableArray** $tmp476 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9201->$data + 16));
            tests475 = *$tmp476;
            panda$collections$ImmutableArray** $tmp478 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9201->$data + 24));
            statements477 = *$tmp478;
            result479 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp481 = ((panda$collections$Iterable*) tests475)->$class->itable;
                while ($tmp481->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp481 = $tmp481->next;
                }
                $fn483 $tmp482 = $tmp481->methods[0];
                panda$collections$Iterator* $tmp484 = $tmp482(((panda$collections$Iterable*) tests475));
                test$Iter480 = $tmp484;
                $l485:;
                ITable* $tmp487 = test$Iter480->$class->itable;
                while ($tmp487->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp487 = $tmp487->next;
                }
                $fn489 $tmp488 = $tmp487->methods[0];
                panda$core$Bit $tmp490 = $tmp488(test$Iter480);
                panda$core$Bit $tmp491 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp490);
                if (!$tmp491.value) goto $l486;
                {
                    ITable* $tmp493 = test$Iter480->$class->itable;
                    while ($tmp493->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp493 = $tmp493->next;
                    }
                    $fn495 $tmp494 = $tmp493->methods[1];
                    panda$core$Object* $tmp496 = $tmp494(test$Iter480);
                    test492 = ((org$pandalanguage$pandac$ASTNode*) $tmp496);
                    panda$core$Int64 $tmp497 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test492);
                    panda$core$Int64 $tmp498 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result479, $tmp497);
                    result479 = $tmp498;
                }
                goto $l485;
                $l486:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp484));
            }
            {
                ITable* $tmp500 = ((panda$collections$Iterable*) statements477)->$class->itable;
                while ($tmp500->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp500 = $tmp500->next;
                }
                $fn502 $tmp501 = $tmp500->methods[0];
                panda$collections$Iterator* $tmp503 = $tmp501(((panda$collections$Iterable*) statements477));
                s$Iter499 = $tmp503;
                $l504:;
                ITable* $tmp506 = s$Iter499->$class->itable;
                while ($tmp506->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp506 = $tmp506->next;
                }
                $fn508 $tmp507 = $tmp506->methods[0];
                panda$core$Bit $tmp509 = $tmp507(s$Iter499);
                panda$core$Bit $tmp510 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp509);
                if (!$tmp510.value) goto $l505;
                {
                    ITable* $tmp512 = s$Iter499->$class->itable;
                    while ($tmp512->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp512 = $tmp512->next;
                    }
                    $fn514 $tmp513 = $tmp512->methods[1];
                    panda$core$Object* $tmp515 = $tmp513(s$Iter499);
                    s511 = ((org$pandalanguage$pandac$ASTNode*) $tmp515);
                    panda$core$Int64 $tmp516 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s511);
                    panda$core$Int64 $tmp517 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result479, $tmp516);
                    result479 = $tmp517;
                }
                goto $l504;
                $l505:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp503));
            }
            return result479;
        }
        }
        else {
        panda$core$Bit $tmp518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp518.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp520 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9201->$data + 24));
            test519 = *$tmp520;
            panda$collections$ImmutableArray** $tmp522 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9201->$data + 32));
            statements521 = *$tmp522;
            panda$core$Int64 $tmp524 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test519);
            result523 = $tmp524;
            {
                ITable* $tmp526 = ((panda$collections$Iterable*) statements521)->$class->itable;
                while ($tmp526->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp526 = $tmp526->next;
                }
                $fn528 $tmp527 = $tmp526->methods[0];
                panda$collections$Iterator* $tmp529 = $tmp527(((panda$collections$Iterable*) statements521));
                s$Iter525 = $tmp529;
                $l530:;
                ITable* $tmp532 = s$Iter525->$class->itable;
                while ($tmp532->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp532 = $tmp532->next;
                }
                $fn534 $tmp533 = $tmp532->methods[0];
                panda$core$Bit $tmp535 = $tmp533(s$Iter525);
                panda$core$Bit $tmp536 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp535);
                if (!$tmp536.value) goto $l531;
                {
                    ITable* $tmp538 = s$Iter525->$class->itable;
                    while ($tmp538->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp538 = $tmp538->next;
                    }
                    $fn540 $tmp539 = $tmp538->methods[1];
                    panda$core$Object* $tmp541 = $tmp539(s$Iter525);
                    s537 = ((org$pandalanguage$pandac$ASTNode*) $tmp541);
                    panda$core$Int64 $tmp542 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s537);
                    panda$core$Int64 $tmp543 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result523, $tmp542);
                    result523 = $tmp543;
                }
                goto $l530;
                $l531:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp529));
            }
            return result523;
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
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Int64 c554;
    panda$collections$Iterator* s$Iter555;
    org$pandalanguage$pandac$ASTNode* s567;
    panda$core$Bit $tmp546 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp545 = $tmp546.value;
    if (!$tmp545) goto $l547;
    panda$core$Bit $tmp548 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp549 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp548);
    $tmp545 = $tmp549.value;
    $l547:;
    panda$core$Bit $tmp550 = { $tmp545 };
    bool $tmp544 = $tmp550.value;
    if (!$tmp544) goto $l551;
    panda$core$Bit $tmp552 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp544 = $tmp552.value;
    $l551:;
    panda$core$Bit $tmp553 = { $tmp544 };
    if ($tmp553.value) {
    {
        c554 = ((panda$core$Int64) { 0 });
        {
            ITable* $tmp556 = ((panda$collections$Iterable*) p_statements)->$class->itable;
            while ($tmp556->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp556 = $tmp556->next;
            }
            $fn558 $tmp557 = $tmp556->methods[0];
            panda$collections$Iterator* $tmp559 = $tmp557(((panda$collections$Iterable*) p_statements));
            s$Iter555 = $tmp559;
            $l560:;
            ITable* $tmp562 = s$Iter555->$class->itable;
            while ($tmp562->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp562 = $tmp562->next;
            }
            $fn564 $tmp563 = $tmp562->methods[0];
            panda$core$Bit $tmp565 = $tmp563(s$Iter555);
            panda$core$Bit $tmp566 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp565);
            if (!$tmp566.value) goto $l561;
            {
                ITable* $tmp568 = s$Iter555->$class->itable;
                while ($tmp568->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp568 = $tmp568->next;
                }
                $fn570 $tmp569 = $tmp568->methods[1];
                panda$core$Object* $tmp571 = $tmp569(s$Iter555);
                s567 = ((org$pandalanguage$pandac$ASTNode*) $tmp571);
                panda$core$Int64 $tmp572 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s567);
                panda$core$Int64 $tmp573 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c554, $tmp572);
                c554 = $tmp573;
                panda$core$Bit $tmp574 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c554, ((panda$core$Int64) { 10 }));
                if ($tmp574.value) {
                {
                    return ((panda$core$Bit) { false });
                }
                }
            }
            goto $l560;
            $l561:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp559));
        }
        return ((panda$core$Bit) { true });
    }
    }
    return ((panda$core$Bit) { false });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment575;
    org$pandalanguage$pandac$ASTNode* $match$281_13576;
    org$pandalanguage$pandac$Position position578;
    panda$core$String* text580;
    org$pandalanguage$pandac$Annotations* annotations582;
    panda$collections$Array* parameters595;
    panda$collections$Iterator* p$Iter597;
    org$pandalanguage$pandac$ASTNode* p609;
    org$pandalanguage$pandac$ASTNode* $match$294_13614;
    panda$core$String* name616;
    org$pandalanguage$pandac$ASTNode* type618;
    org$pandalanguage$pandac$Type* returnType622;
    org$pandalanguage$pandac$MethodDecl* tmp3648;
    memset(&doccomment575, 0, sizeof(doccomment575));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment575 = NULL;
        }
    }
    }
    else {
    {
        {
            $match$281_13576 = p_rawDoccomment;
            panda$core$Bit $tmp577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$281_13576->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp577.value) {
            {
                org$pandalanguage$pandac$Position* $tmp579 = ((org$pandalanguage$pandac$Position*) ((char*) $match$281_13576->$data + 0));
                position578 = *$tmp579;
                panda$core$String** $tmp581 = ((panda$core$String**) ((char*) $match$281_13576->$data + 16));
                text580 = *$tmp581;
                {
                    doccomment575 = text580;
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
    }
    org$pandalanguage$pandac$Annotations* $tmp583 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations582 = $tmp583;
    panda$core$Bit $tmp586 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp585 = $tmp586.value;
    if (!$tmp585) goto $l587;
    panda$core$Bit $tmp588 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
    $tmp585 = $tmp588.value;
    $l587:;
    panda$core$Bit $tmp589 = { $tmp585 };
    bool $tmp584 = $tmp589.value;
    if ($tmp584) goto $l590;
    panda$core$Bit $tmp591 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations582);
    $tmp584 = $tmp591.value;
    $l590:;
    panda$core$Bit $tmp592 = { $tmp584 };
    if ($tmp592.value) {
    {
        panda$core$Int64 $tmp593 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp594 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations582->flags, $tmp593);
        annotations582->flags = $tmp594;
    }
    }
    panda$collections$Array* $tmp596 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp596);
    parameters595 = $tmp596;
    {
        ITable* $tmp598 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
        while ($tmp598->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp598 = $tmp598->next;
        }
        $fn600 $tmp599 = $tmp598->methods[0];
        panda$collections$Iterator* $tmp601 = $tmp599(((panda$collections$Iterable*) p_rawParameters));
        p$Iter597 = $tmp601;
        $l602:;
        ITable* $tmp604 = p$Iter597->$class->itable;
        while ($tmp604->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp604 = $tmp604->next;
        }
        $fn606 $tmp605 = $tmp604->methods[0];
        panda$core$Bit $tmp607 = $tmp605(p$Iter597);
        panda$core$Bit $tmp608 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp607);
        if (!$tmp608.value) goto $l603;
        {
            ITable* $tmp610 = p$Iter597->$class->itable;
            while ($tmp610->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp610 = $tmp610->next;
            }
            $fn612 $tmp611 = $tmp610->methods[1];
            panda$core$Object* $tmp613 = $tmp611(p$Iter597);
            p609 = ((org$pandalanguage$pandac$ASTNode*) $tmp613);
            {
                $match$294_13614 = p609;
                panda$core$Bit $tmp615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$294_13614->$rawValue, ((panda$core$Int64) { 27 }));
                if ($tmp615.value) {
                {
                    panda$core$String** $tmp617 = ((panda$core$String**) ((char*) $match$294_13614->$data + 16));
                    name616 = *$tmp617;
                    org$pandalanguage$pandac$ASTNode** $tmp619 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$294_13614->$data + 24));
                    type618 = *$tmp619;
                    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp620 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                    org$pandalanguage$pandac$Type* $tmp621 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type618);
                    org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp620, name616, $tmp621);
                    panda$collections$Array$add$panda$collections$Array$T(parameters595, ((panda$core$Object*) $tmp620));
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l602;
        $l603:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp601));
    }
    memset(&returnType622, 0, sizeof(returnType622));
    if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp623 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
            returnType622 = $tmp623;
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp624 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            returnType622 = $tmp624;
        }
    }
    }
    panda$core$Bit $tmp626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
    bool $tmp625 = $tmp626.value;
    if (!$tmp625) goto $l627;
    org$pandalanguage$pandac$Type* $tmp628 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp629 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType622, $tmp628);
    $tmp625 = $tmp629.value;
    $l627:;
    panda$core$Bit $tmp630 = { $tmp625 };
    if ($tmp630.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s631);
    }
    }
    bool $tmp632 = ((panda$core$Bit) { p_statements != NULL }).value;
    if (!$tmp632) goto $l633;
    panda$core$Bit $tmp634 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations582, p_statements);
    $tmp632 = $tmp634.value;
    $l633:;
    panda$core$Bit $tmp635 = { $tmp632 };
    if ($tmp635.value) {
    {
        panda$core$Int64 $tmp636 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp637 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations582->flags, $tmp636);
        annotations582->flags = $tmp637;
    }
    }
    if (((panda$core$Bit) { p_statements == NULL }).value) {
    {
        panda$core$Bit $tmp638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp638.value) {
        {
            panda$core$Int64 $tmp639 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
            panda$core$Int64 $tmp640 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations582->flags, $tmp639);
            annotations582->flags = $tmp640;
        }
        }
        else {
        panda$core$Int64 $tmp641 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
        panda$core$Int64 $tmp642 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations582->flags, $tmp641);
        panda$core$Bit $tmp643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp642, ((panda$core$Int64) { 0 }));
        if ($tmp643.value) {
        {
            panda$core$String* $tmp645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s644, p_name);
            panda$core$String* $tmp647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp645, &$s646);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, $tmp647);
        }
        }
        }
    }
    }
    {
        org$pandalanguage$pandac$MethodDecl* $tmp649 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp649, p_owner, p_position, doccomment575, annotations582, p_kind, p_name, parameters595, returnType622, p_statements);
        tmp3648 = $tmp649;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations582));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters595));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType622));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment575));
        }
        return tmp3648;
    }
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$327_9650;
    org$pandalanguage$pandac$Position position652;
    org$pandalanguage$pandac$ASTNode* dc654;
    panda$collections$ImmutableArray* annotations656;
    org$pandalanguage$pandac$ASTNode* varDecl658;
    org$pandalanguage$pandac$Position position661;
    org$pandalanguage$pandac$ASTNode* dc663;
    panda$collections$ImmutableArray* annotations665;
    org$pandalanguage$pandac$MethodDecl$Kind kind667;
    panda$core$String* name669;
    panda$collections$ImmutableArray* parameters671;
    org$pandalanguage$pandac$ASTNode* rawReturnType673;
    panda$collections$ImmutableArray* statements675;
    org$pandalanguage$pandac$MethodDecl* m677;
    org$pandalanguage$pandac$Position position680;
    org$pandalanguage$pandac$ASTNode* dc682;
    panda$collections$ImmutableArray* annotations684;
    org$pandalanguage$pandac$ClassDecl$Kind kind686;
    panda$core$String* name688;
    panda$collections$ImmutableArray* generics690;
    panda$collections$ImmutableArray* supertypes692;
    panda$collections$ImmutableArray* members694;
    org$pandalanguage$pandac$ClassDecl* inner696;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp701;
    org$pandalanguage$pandac$Position position707;
    org$pandalanguage$pandac$ASTNode* dc709;
    panda$core$String* name711;
    panda$collections$ImmutableArray* fields713;
    {
        $match$327_9650 = p_node;
        panda$core$Bit $tmp651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9650->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp651.value) {
        {
            org$pandalanguage$pandac$Position* $tmp653 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9650->$data + 0));
            position652 = *$tmp653;
            org$pandalanguage$pandac$ASTNode** $tmp655 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9650->$data + 16));
            dc654 = *$tmp655;
            panda$collections$ImmutableArray** $tmp657 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9650->$data + 24));
            annotations656 = *$tmp657;
            org$pandalanguage$pandac$ASTNode** $tmp659 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9650->$data + 32));
            varDecl658 = *$tmp659;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position652, dc654, annotations656, varDecl658);
        }
        }
        else {
        panda$core$Bit $tmp660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9650->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp660.value) {
        {
            org$pandalanguage$pandac$Position* $tmp662 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9650->$data + 0));
            position661 = *$tmp662;
            org$pandalanguage$pandac$ASTNode** $tmp664 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9650->$data + 16));
            dc663 = *$tmp664;
            panda$collections$ImmutableArray** $tmp666 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9650->$data + 24));
            annotations665 = *$tmp666;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp668 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$327_9650->$data + 32));
            kind667 = *$tmp668;
            panda$core$String** $tmp670 = ((panda$core$String**) ((char*) $match$327_9650->$data + 40));
            name669 = *$tmp670;
            panda$collections$ImmutableArray** $tmp672 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9650->$data + 48));
            parameters671 = *$tmp672;
            org$pandalanguage$pandac$ASTNode** $tmp674 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9650->$data + 56));
            rawReturnType673 = *$tmp674;
            panda$collections$ImmutableArray** $tmp676 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9650->$data + 64));
            statements675 = *$tmp676;
            org$pandalanguage$pandac$MethodDecl* $tmp678 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position661, dc663, annotations665, kind667, name669, parameters671, rawReturnType673, statements675);
            m677 = $tmp678;
            if (((panda$core$Bit) { m677 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m677));
                panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m677));
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m677));
        }
        }
        else {
        panda$core$Bit $tmp679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9650->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp679.value) {
        {
            org$pandalanguage$pandac$Position* $tmp681 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9650->$data + 0));
            position680 = *$tmp681;
            org$pandalanguage$pandac$ASTNode** $tmp683 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9650->$data + 16));
            dc682 = *$tmp683;
            panda$collections$ImmutableArray** $tmp685 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9650->$data + 24));
            annotations684 = *$tmp685;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp687 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$327_9650->$data + 32));
            kind686 = *$tmp687;
            panda$core$String** $tmp689 = ((panda$core$String**) ((char*) $match$327_9650->$data + 40));
            name688 = *$tmp689;
            panda$collections$ImmutableArray** $tmp691 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9650->$data + 48));
            generics690 = *$tmp691;
            panda$collections$ImmutableArray** $tmp693 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9650->$data + 56));
            supertypes692 = *$tmp693;
            panda$collections$ImmutableArray** $tmp695 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9650->$data + 64));
            members694 = *$tmp695;
            org$pandalanguage$pandac$ClassDecl* $tmp697 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, ((org$pandalanguage$pandac$Symbol*) p_cl)->name, position680, dc682, annotations684, kind686, name688, generics690, supertypes692, members694);
            inner696 = $tmp697;
            if (((panda$core$Bit) { inner696 != NULL }).value) {
            {
                {
                    inner696->owner = p_cl;
                }
                panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner696));
                panda$core$String* $tmp699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s698);
                panda$core$Bit $tmp700 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner696)->name, $tmp699);
                PANDA_ASSERT($tmp700.value);
                panda$core$Int64 $tmp702 = panda$core$String$length$R$panda$core$Int64(((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$Int64 $tmp703 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp702, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp701, ((panda$core$Int64$nullable) { $tmp703, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp704 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner696)->name, $tmp701);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner696), $tmp704);
                panda$collections$Array$add$panda$collections$Array$T(inner696->symbolTable->parents, ((panda$core$Object*) p_cl->symbolTable));
                panda$core$String* $tmp705 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner696->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_cl), $tmp705);
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner696));
        }
        }
        else {
        panda$core$Bit $tmp706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9650->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp706.value) {
        {
            org$pandalanguage$pandac$Position* $tmp708 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9650->$data + 0));
            position707 = *$tmp708;
            org$pandalanguage$pandac$ASTNode** $tmp710 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9650->$data + 16));
            dc709 = *$tmp710;
            panda$core$String** $tmp712 = ((panda$core$String**) ((char*) $match$327_9650->$data + 24));
            name711 = *$tmp712;
            panda$collections$ImmutableArray** $tmp714 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9650->$data + 32));
            fields713 = *$tmp714;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position707, dc709, name711, fields713);
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
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment715;
    org$pandalanguage$pandac$ASTNode* $match$365_13716;
    org$pandalanguage$pandac$Position position718;
    panda$core$String* text720;
    panda$collections$Array* fields722;
    panda$collections$Iterator* t$Iter724;
    org$pandalanguage$pandac$ASTNode* t736;
    org$pandalanguage$pandac$ChoiceEntry* entry742;
    panda$core$Bit found745;
    panda$collections$Iterator* m$Iter746;
    org$pandalanguage$pandac$MethodDecl* m758;
    panda$core$Range$LTpanda$core$Int64$GT $tmp771;
    panda$collections$Array* parameters797;
    panda$collections$Array* statements802;
    org$pandalanguage$pandac$parser$Token$Kind $tmp807;
    panda$core$Range$LTpanda$core$Int64$GT $tmp810;
    org$pandalanguage$pandac$parser$Token$Kind $tmp835;
    org$pandalanguage$pandac$MethodDecl* synthetic848;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp851;
    memset(&doccomment715, 0, sizeof(doccomment715));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment715 = NULL;
        }
    }
    }
    else {
    {
        {
            $match$365_13716 = p_rawDoccomment;
            panda$core$Bit $tmp717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$365_13716->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp717.value) {
            {
                org$pandalanguage$pandac$Position* $tmp719 = ((org$pandalanguage$pandac$Position*) ((char*) $match$365_13716->$data + 0));
                position718 = *$tmp719;
                panda$core$String** $tmp721 = ((panda$core$String**) ((char*) $match$365_13716->$data + 16));
                text720 = *$tmp721;
                {
                    doccomment715 = text720;
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
    }
    panda$collections$Array* $tmp723 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp723);
    fields722 = $tmp723;
    {
        ITable* $tmp725 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
        while ($tmp725->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp725 = $tmp725->next;
        }
        $fn727 $tmp726 = $tmp725->methods[0];
        panda$collections$Iterator* $tmp728 = $tmp726(((panda$collections$Iterable*) p_rawFields));
        t$Iter724 = $tmp728;
        $l729:;
        ITable* $tmp731 = t$Iter724->$class->itable;
        while ($tmp731->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp731 = $tmp731->next;
        }
        $fn733 $tmp732 = $tmp731->methods[0];
        panda$core$Bit $tmp734 = $tmp732(t$Iter724);
        panda$core$Bit $tmp735 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp734);
        if (!$tmp735.value) goto $l730;
        {
            ITable* $tmp737 = t$Iter724->$class->itable;
            while ($tmp737->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp737 = $tmp737->next;
            }
            $fn739 $tmp738 = $tmp737->methods[1];
            panda$core$Object* $tmp740 = $tmp738(t$Iter724);
            t736 = ((org$pandalanguage$pandac$ASTNode*) $tmp740);
            org$pandalanguage$pandac$Type* $tmp741 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t736);
            panda$collections$Array$add$panda$collections$Array$T(fields722, ((panda$core$Object*) $tmp741));
        }
        goto $l729;
        $l730:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp728));
    }
    org$pandalanguage$pandac$ChoiceEntry* $tmp743 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(97, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
    panda$core$Int64 $tmp744 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
    org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp743, p_cl, p_position, p_name, doccomment715, $tmp744, ((panda$collections$ListView*) fields722));
    entry742 = $tmp743;
    panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry742));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry742));
    found745 = ((panda$core$Bit) { false });
    {
        ITable* $tmp747 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp747->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp747 = $tmp747->next;
        }
        $fn749 $tmp748 = $tmp747->methods[0];
        panda$collections$Iterator* $tmp750 = $tmp748(((panda$collections$Iterable*) p_cl->methods));
        m$Iter746 = $tmp750;
        $l751:;
        ITable* $tmp753 = m$Iter746->$class->itable;
        while ($tmp753->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp753 = $tmp753->next;
        }
        $fn755 $tmp754 = $tmp753->methods[0];
        panda$core$Bit $tmp756 = $tmp754(m$Iter746);
        panda$core$Bit $tmp757 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp756);
        if (!$tmp757.value) goto $l752;
        {
            ITable* $tmp759 = m$Iter746->$class->itable;
            while ($tmp759->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp759 = $tmp759->next;
            }
            $fn761 $tmp760 = $tmp759->methods[1];
            panda$core$Object* $tmp762 = $tmp760(m$Iter746);
            m758 = ((org$pandalanguage$pandac$MethodDecl*) $tmp762);
            panda$core$Bit $tmp763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m758->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp763.value);
            panda$core$Int64 $tmp764 = panda$collections$Array$get_count$R$panda$core$Int64(m758->parameters);
            panda$core$Int64 $tmp765 = panda$collections$Array$get_count$R$panda$core$Int64(fields722);
            panda$core$Int64 $tmp766 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp765, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp767 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp764, $tmp766);
            if ($tmp767.value) {
            {
                goto $l751;
            }
            }
            panda$core$Object* $tmp768 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m758->parameters, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp769 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp770 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp768)->type, $tmp769);
            PANDA_ASSERT($tmp770.value);
            panda$core$Int64 $tmp772 = panda$collections$Array$get_count$R$panda$core$Int64(fields722);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp771, ((panda$core$Int64) { 0 }), $tmp772, ((panda$core$Bit) { false }));
            int64_t $tmp774 = $tmp771.min.value;
            panda$core$Int64 i773 = { $tmp774 };
            int64_t $tmp776 = $tmp771.max.value;
            bool $tmp777 = $tmp771.inclusive.value;
            if ($tmp777) goto $l784; else goto $l785;
            $l784:;
            if ($tmp774 <= $tmp776) goto $l778; else goto $l780;
            $l785:;
            if ($tmp774 < $tmp776) goto $l778; else goto $l780;
            $l778:;
            {
                panda$core$Object* $tmp786 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields722, i773);
                panda$core$Int64 $tmp787 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i773, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp788 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m758->parameters, $tmp787);
                panda$core$Bit $tmp789 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp786), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp788)->type);
                if ($tmp789.value) {
                {
                    goto $l751;
                }
                }
            }
            $l781:;
            int64_t $tmp791 = $tmp776 - i773.value;
            if ($tmp777) goto $l792; else goto $l793;
            $l792:;
            if ((uint64_t) $tmp791 >= 1) goto $l790; else goto $l780;
            $l793:;
            if ((uint64_t) $tmp791 > 1) goto $l790; else goto $l780;
            $l790:;
            i773.value += 1;
            goto $l778;
            $l780:;
            {
                entry742->initMethod = m758;
            }
            found745 = ((panda$core$Bit) { true });
            goto $l752;
        }
        goto $l751;
        $l752:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp750));
    }
    panda$core$Bit $tmp796 = panda$core$Bit$$NOT$R$panda$core$Bit(found745);
    if ($tmp796.value) {
    {
        panda$collections$Array* $tmp798 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp798);
        parameters797 = $tmp798;
        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp799 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
        org$pandalanguage$pandac$Type* $tmp801 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp799, &$s800, $tmp801);
        panda$collections$Array$add$panda$collections$Array$T(parameters797, ((panda$core$Object*) $tmp799));
        panda$collections$Array* $tmp803 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp803);
        statements802 = $tmp803;
        org$pandalanguage$pandac$ASTNode* $tmp804 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode* $tmp805 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp805, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s806);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp807, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$ASTNode* $tmp808 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp808, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s809);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp804, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp805, $tmp807, $tmp808);
        panda$collections$Array$add$panda$collections$Array$T(statements802, ((panda$core$Object*) $tmp804));
        panda$core$Int64 $tmp811 = panda$collections$Array$get_count$R$panda$core$Int64(fields722);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp810, ((panda$core$Int64) { 0 }), $tmp811, ((panda$core$Bit) { false }));
        int64_t $tmp813 = $tmp810.min.value;
        panda$core$Int64 i812 = { $tmp813 };
        int64_t $tmp815 = $tmp810.max.value;
        bool $tmp816 = $tmp810.inclusive.value;
        if ($tmp816) goto $l823; else goto $l824;
        $l823:;
        if ($tmp813 <= $tmp815) goto $l817; else goto $l819;
        $l824:;
        if ($tmp813 < $tmp815) goto $l817; else goto $l819;
        $l817:;
        {
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp825 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
            panda$core$Int64$wrapper* $tmp827;
            $tmp827 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp827->value = i812;
            panda$core$String* $tmp828 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s826, ((panda$core$Object*) $tmp827));
            panda$core$String* $tmp830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp828, &$s829);
            panda$core$Object* $tmp831 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields722, i812);
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp825, $tmp830, ((org$pandalanguage$pandac$Type*) $tmp831));
            panda$collections$Array$add$panda$collections$Array$T(parameters797, ((panda$core$Object*) $tmp825));
            org$pandalanguage$pandac$ASTNode* $tmp832 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode* $tmp833 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode* $tmp834 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp834, ((panda$core$Int64) { 32 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64($tmp833, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp834, entry742, i812);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp835, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$ASTNode* $tmp836 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$wrapper* $tmp838;
            $tmp838 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp838->value = i812;
            panda$core$String* $tmp839 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s837, ((panda$core$Object*) $tmp838));
            panda$core$String* $tmp841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp839, &$s840);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp836, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp841);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp832, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp833, $tmp835, $tmp836);
            panda$collections$Array$add$panda$collections$Array$T(statements802, ((panda$core$Object*) $tmp832));
        }
        $l820:;
        int64_t $tmp843 = $tmp815 - i812.value;
        if ($tmp816) goto $l844; else goto $l845;
        $l844:;
        if ((uint64_t) $tmp843 >= 1) goto $l842; else goto $l819;
        $l845:;
        if ((uint64_t) $tmp843 > 1) goto $l842; else goto $l819;
        $l842:;
        i812.value += 1;
        goto $l817;
        $l819:;
        org$pandalanguage$pandac$MethodDecl* $tmp849 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp850 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init($tmp850);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp851, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$Type* $tmp853 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp854 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements802);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp849, p_cl, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, NULL, $tmp850, $tmp851, &$s852, parameters797, $tmp853, $tmp854);
        synthetic848 = $tmp849;
        {
            entry742->initMethod = synthetic848;
        }
        panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) synthetic848));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) synthetic848));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters797));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements802));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) synthetic848));
        }
    }
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields722));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry742));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment715));
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName855;
    panda$core$String* doccomment864;
    org$pandalanguage$pandac$ASTNode* $match$440_13865;
    org$pandalanguage$pandac$Position position867;
    panda$core$String* text869;
    org$pandalanguage$pandac$Annotations* annotations871;
    panda$collections$Array* parameters873;
    panda$collections$Iterator* p$Iter875;
    org$pandalanguage$pandac$ASTNode* p887;
    panda$core$String* name892;
    org$pandalanguage$pandac$Type* bound893;
    org$pandalanguage$pandac$ASTNode* $match$453_17894;
    panda$core$String* id896;
    panda$core$String* id900;
    org$pandalanguage$pandac$ASTNode* type902;
    panda$collections$Array* supertypes910;
    panda$collections$Iterator* s$Iter914;
    org$pandalanguage$pandac$ASTNode* s926;
    org$pandalanguage$pandac$ClassDecl* result932;
    org$pandalanguage$pandac$FieldDecl* rawValue935;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp938;
    org$pandalanguage$pandac$FieldDecl* data941;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp944;
    panda$collections$Iterator* m$Iter947;
    org$pandalanguage$pandac$ASTNode* m959;
    org$pandalanguage$pandac$ASTNode* $match$492_13964;
    org$pandalanguage$pandac$Position mPosition966;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind968;
    org$pandalanguage$pandac$ClassDecl$Kind $match$495_25971;
    panda$core$Bit foundInit977;
    panda$core$Bit foundCleanup978;
    panda$collections$Iterator* m$Iter979;
    org$pandalanguage$pandac$MethodDecl* m991;
    org$pandalanguage$pandac$MethodDecl* defaultInit1014;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1017;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1032;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1036;
    panda$core$Bit haveFields1042;
    panda$collections$Iterator* e$Iter1043;
    org$pandalanguage$pandac$ChoiceEntry* e1055;
    org$pandalanguage$pandac$ClassDecl* tmp41065;
    memset(&fullName855, 0, sizeof(fullName855));
    panda$core$Bit $tmp857 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s856);
    if ($tmp857.value) {
    {
        {
            panda$core$String* $tmp858 = panda$core$String$convert$R$panda$core$String(p_contextName);
            panda$core$String* $tmp860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp858, &$s859);
            panda$core$String* $tmp861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp860, p_name);
            panda$core$String* $tmp863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp861, &$s862);
            fullName855 = $tmp863;
        }
    }
    }
    else {
    {
        {
            fullName855 = p_name;
        }
    }
    }
    memset(&doccomment864, 0, sizeof(doccomment864));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment864 = NULL;
        }
    }
    }
    else {
    {
        {
            $match$440_13865 = p_rawDoccomment;
            panda$core$Bit $tmp866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$440_13865->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp866.value) {
            {
                org$pandalanguage$pandac$Position* $tmp868 = ((org$pandalanguage$pandac$Position*) ((char*) $match$440_13865->$data + 0));
                position867 = *$tmp868;
                panda$core$String** $tmp870 = ((panda$core$String**) ((char*) $match$440_13865->$data + 16));
                text869 = *$tmp870;
                {
                    doccomment864 = text869;
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
    }
    org$pandalanguage$pandac$Annotations* $tmp872 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations871 = $tmp872;
    panda$collections$Array* $tmp874 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp874);
    parameters873 = $tmp874;
    if (((panda$core$Bit) { p_generics != NULL }).value) {
    {
        {
            ITable* $tmp876 = ((panda$collections$Iterable*) p_generics)->$class->itable;
            while ($tmp876->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp876 = $tmp876->next;
            }
            $fn878 $tmp877 = $tmp876->methods[0];
            panda$collections$Iterator* $tmp879 = $tmp877(((panda$collections$Iterable*) p_generics));
            p$Iter875 = $tmp879;
            $l880:;
            ITable* $tmp882 = p$Iter875->$class->itable;
            while ($tmp882->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp882 = $tmp882->next;
            }
            $fn884 $tmp883 = $tmp882->methods[0];
            panda$core$Bit $tmp885 = $tmp883(p$Iter875);
            panda$core$Bit $tmp886 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp885);
            if (!$tmp886.value) goto $l881;
            {
                ITable* $tmp888 = p$Iter875->$class->itable;
                while ($tmp888->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp888 = $tmp888->next;
                }
                $fn890 $tmp889 = $tmp888->methods[1];
                panda$core$Object* $tmp891 = $tmp889(p$Iter875);
                p887 = ((org$pandalanguage$pandac$ASTNode*) $tmp891);
                memset(&name892, 0, sizeof(name892));
                memset(&bound893, 0, sizeof(bound893));
                {
                    $match$453_17894 = p887;
                    panda$core$Bit $tmp895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453_17894->$rawValue, ((panda$core$Int64) { 18 }));
                    if ($tmp895.value) {
                    {
                        panda$core$String** $tmp897 = ((panda$core$String**) ((char*) $match$453_17894->$data + 16));
                        id896 = *$tmp897;
                        {
                            name892 = id896;
                        }
                        {
                            org$pandalanguage$pandac$Type* $tmp898 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                            bound893 = $tmp898;
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453_17894->$rawValue, ((panda$core$Int64) { 36 }));
                    if ($tmp899.value) {
                    {
                        panda$core$String** $tmp901 = ((panda$core$String**) ((char*) $match$453_17894->$data + 16));
                        id900 = *$tmp901;
                        org$pandalanguage$pandac$ASTNode** $tmp903 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$453_17894->$data + 24));
                        type902 = *$tmp903;
                        {
                            name892 = id900;
                        }
                        {
                            org$pandalanguage$pandac$Type* $tmp904 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type902);
                            bound893 = $tmp904;
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
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp905 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                org$pandalanguage$pandac$Position $tmp907 = (($fn906) p887->$class->vtable[2])(p887);
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp905, $tmp907, fullName855, name892, bound893);
                panda$collections$Array$add$panda$collections$Array$T(parameters873, ((panda$core$Object*) $tmp905));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound893));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name892));
                }
            }
            goto $l880;
            $l881:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp879));
        }
        panda$core$Bit $tmp908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp908.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s909);
        }
        }
    }
    }
    panda$collections$Array* $tmp911 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp911);
    supertypes910 = $tmp911;
    if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
    {
        panda$core$Bit $tmp912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp912.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s913);
        }
        }
        {
            ITable* $tmp915 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
            while ($tmp915->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp915 = $tmp915->next;
            }
            $fn917 $tmp916 = $tmp915->methods[0];
            panda$collections$Iterator* $tmp918 = $tmp916(((panda$collections$Iterable*) p_rawSupertypes));
            s$Iter914 = $tmp918;
            $l919:;
            ITable* $tmp921 = s$Iter914->$class->itable;
            while ($tmp921->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp921 = $tmp921->next;
            }
            $fn923 $tmp922 = $tmp921->methods[0];
            panda$core$Bit $tmp924 = $tmp922(s$Iter914);
            panda$core$Bit $tmp925 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp924);
            if (!$tmp925.value) goto $l920;
            {
                ITable* $tmp927 = s$Iter914->$class->itable;
                while ($tmp927->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp927 = $tmp927->next;
                }
                $fn929 $tmp928 = $tmp927->methods[1];
                panda$core$Object* $tmp930 = $tmp928(s$Iter914);
                s926 = ((org$pandalanguage$pandac$ASTNode*) $tmp930);
                org$pandalanguage$pandac$Type* $tmp931 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s926);
                panda$collections$Array$add$panda$collections$Array$T(supertypes910, ((panda$core$Object*) $tmp931));
            }
            goto $l919;
            $l920:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp918));
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp933 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(201, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp933, p_source, p_position, p_aliases, doccomment864, annotations871, p_kind, fullName855, ((panda$collections$ListView*) supertypes910), parameters873, self->compiler->root);
    result932 = $tmp933;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result932));
    panda$core$Bit $tmp934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp934.value) {
    {
        org$pandalanguage$pandac$FieldDecl* $tmp936 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp937 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init($tmp937);
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp938, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp940 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp936, result932, ((org$pandalanguage$pandac$Symbol*) result932)->position, NULL, $tmp937, $tmp938, &$s939, $tmp940, NULL);
        rawValue935 = $tmp936;
        panda$collections$Array$add$panda$collections$Array$T(result932->fields, ((panda$core$Object*) rawValue935));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result932->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue935));
        org$pandalanguage$pandac$FieldDecl* $tmp942 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp943 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init($tmp943);
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp944, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp946 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp942, result932, ((org$pandalanguage$pandac$Symbol*) result932)->position, NULL, $tmp943, $tmp944, &$s945, $tmp946, NULL);
        data941 = $tmp942;
        panda$collections$Array$add$panda$collections$Array$T(result932->fields, ((panda$core$Object*) data941));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result932->symbolTable, ((org$pandalanguage$pandac$Symbol*) data941));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue935));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data941));
        }
    }
    }
    {
        ITable* $tmp948 = ((panda$collections$Iterable*) p_members)->$class->itable;
        while ($tmp948->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp948 = $tmp948->next;
        }
        $fn950 $tmp949 = $tmp948->methods[0];
        panda$collections$Iterator* $tmp951 = $tmp949(((panda$collections$Iterable*) p_members));
        m$Iter947 = $tmp951;
        $l952:;
        ITable* $tmp954 = m$Iter947->$class->itable;
        while ($tmp954->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp954 = $tmp954->next;
        }
        $fn956 $tmp955 = $tmp954->methods[0];
        panda$core$Bit $tmp957 = $tmp955(m$Iter947);
        panda$core$Bit $tmp958 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp957);
        if (!$tmp958.value) goto $l953;
        {
            ITable* $tmp960 = m$Iter947->$class->itable;
            while ($tmp960->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp960 = $tmp960->next;
            }
            $fn962 $tmp961 = $tmp960->methods[1];
            panda$core$Object* $tmp963 = $tmp961(m$Iter947);
            m959 = ((org$pandalanguage$pandac$ASTNode*) $tmp963);
            {
                $match$492_13964 = m959;
                panda$core$Bit $tmp965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$492_13964->$rawValue, ((panda$core$Int64) { 23 }));
                if ($tmp965.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp967 = ((org$pandalanguage$pandac$Position*) ((char*) $match$492_13964->$data + 0));
                    mPosition966 = *$tmp967;
                    org$pandalanguage$pandac$MethodDecl$Kind* $tmp969 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$492_13964->$data + 32));
                    methodKind968 = *$tmp969;
                    panda$core$Bit $tmp970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind968.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp970.value) {
                    {
                        {
                            $match$495_25971 = p_kind;
                            panda$core$Bit $tmp972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_25971.$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp972.value) {
                            {
                            }
                            }
                            else {
                            panda$core$Bit $tmp973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_25971.$rawValue, ((panda$core$Int64) { 1 }));
                            if ($tmp973.value) {
                            {
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, mPosition966, &$s974);
                            }
                            }
                            else {
                            panda$core$Bit $tmp975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_25971.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp975.value) {
                            {
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, mPosition966, &$s976);
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
            org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result932, m959);
        }
        goto $l952;
        $l953:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp951));
    }
    foundInit977 = ((panda$core$Bit) { false });
    foundCleanup978 = ((panda$core$Bit) { false });
    {
        ITable* $tmp980 = ((panda$collections$Iterable*) result932->methods)->$class->itable;
        while ($tmp980->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp980 = $tmp980->next;
        }
        $fn982 $tmp981 = $tmp980->methods[0];
        panda$collections$Iterator* $tmp983 = $tmp981(((panda$collections$Iterable*) result932->methods));
        m$Iter979 = $tmp983;
        $l984:;
        ITable* $tmp986 = m$Iter979->$class->itable;
        while ($tmp986->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp986 = $tmp986->next;
        }
        $fn988 $tmp987 = $tmp986->methods[0];
        panda$core$Bit $tmp989 = $tmp987(m$Iter979);
        panda$core$Bit $tmp990 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp989);
        if (!$tmp990.value) goto $l985;
        {
            ITable* $tmp992 = m$Iter979->$class->itable;
            while ($tmp992->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp992 = $tmp992->next;
            }
            $fn994 $tmp993 = $tmp992->methods[1];
            panda$core$Object* $tmp995 = $tmp993(m$Iter979);
            m991 = ((org$pandalanguage$pandac$MethodDecl*) $tmp995);
            panda$core$Bit $tmp996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m991->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp996.value) {
            {
                foundInit977 = ((panda$core$Bit) { true });
            }
            }
            panda$core$Bit $tmp999 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m991)->name, &$s998);
            bool $tmp997 = $tmp999.value;
            if (!$tmp997) goto $l1000;
            panda$core$Int64 $tmp1001 = panda$collections$Array$get_count$R$panda$core$Int64(m991->parameters);
            panda$core$Bit $tmp1002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1001, ((panda$core$Int64) { 0 }));
            $tmp997 = $tmp1002.value;
            $l1000:;
            panda$core$Bit $tmp1003 = { $tmp997 };
            if ($tmp1003.value) {
            {
                foundCleanup978 = ((panda$core$Bit) { true });
            }
            }
        }
        goto $l984;
        $l985:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp983));
    }
    panda$core$Bit $tmp1006 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit977);
    bool $tmp1005 = $tmp1006.value;
    if (!$tmp1005) goto $l1007;
    panda$core$Bit $tmp1008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
    $tmp1005 = $tmp1008.value;
    $l1007:;
    panda$core$Bit $tmp1009 = { $tmp1005 };
    bool $tmp1004 = $tmp1009.value;
    if (!$tmp1004) goto $l1010;
    panda$core$Bit $tmp1012 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result932)->name, &$s1011);
    $tmp1004 = $tmp1012.value;
    $l1010:;
    panda$core$Bit $tmp1013 = { $tmp1004 };
    if ($tmp1013.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp1015 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp1016 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init($tmp1016);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1017, ((panda$core$Int64) { 2 }));
        panda$collections$Array* $tmp1019 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1019);
        org$pandalanguage$pandac$Type* $tmp1020 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp1021 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp1021);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1015, result932, p_position, NULL, $tmp1016, $tmp1017, &$s1018, $tmp1019, $tmp1020, $tmp1021);
        defaultInit1014 = $tmp1015;
        panda$collections$Array$add$panda$collections$Array$T(result932->methods, ((panda$core$Object*) defaultInit1014));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result932->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1014));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1014));
    }
    }
    panda$core$Bit $tmp1024 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup978);
    bool $tmp1023 = $tmp1024.value;
    if (!$tmp1023) goto $l1025;
    panda$core$Bit $tmp1026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
    $tmp1023 = $tmp1026.value;
    $l1025:;
    panda$core$Bit $tmp1027 = { $tmp1023 };
    bool $tmp1022 = $tmp1027.value;
    if (!$tmp1022) goto $l1028;
    panda$core$Bit $tmp1030 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result932)->name, &$s1029);
    $tmp1022 = $tmp1030.value;
    $l1028:;
    panda$core$Bit $tmp1031 = { $tmp1022 };
    if ($tmp1031.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp1033 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp1034 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        panda$core$Int64 $tmp1035 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1034, $tmp1035);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1036, ((panda$core$Int64) { 0 }));
        panda$collections$Array* $tmp1038 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1038);
        org$pandalanguage$pandac$Type* $tmp1039 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp1040 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp1040);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1033, result932, p_position, NULL, $tmp1034, $tmp1036, &$s1037, $tmp1038, $tmp1039, $tmp1040);
        defaultCleanup1032 = $tmp1033;
        panda$collections$Array$add$panda$collections$Array$T(result932->methods, ((panda$core$Object*) defaultCleanup1032));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result932->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1032));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1032));
    }
    }
    panda$core$Bit $tmp1041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp1041.value) {
    {
        haveFields1042 = ((panda$core$Bit) { false });
        {
            ITable* $tmp1044 = ((panda$collections$Iterable*) result932->choiceEntries)->$class->itable;
            while ($tmp1044->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1044 = $tmp1044->next;
            }
            $fn1046 $tmp1045 = $tmp1044->methods[0];
            panda$collections$Iterator* $tmp1047 = $tmp1045(((panda$collections$Iterable*) result932->choiceEntries));
            e$Iter1043 = $tmp1047;
            $l1048:;
            ITable* $tmp1050 = e$Iter1043->$class->itable;
            while ($tmp1050->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1050 = $tmp1050->next;
            }
            $fn1052 $tmp1051 = $tmp1050->methods[0];
            panda$core$Bit $tmp1053 = $tmp1051(e$Iter1043);
            panda$core$Bit $tmp1054 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1053);
            if (!$tmp1054.value) goto $l1049;
            {
                ITable* $tmp1056 = e$Iter1043->$class->itable;
                while ($tmp1056->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1056 = $tmp1056->next;
                }
                $fn1058 $tmp1057 = $tmp1056->methods[1];
                panda$core$Object* $tmp1059 = $tmp1057(e$Iter1043);
                e1055 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1059);
                panda$core$Int64 $tmp1060 = panda$collections$Array$get_count$R$panda$core$Int64(e1055->fields);
                panda$core$Bit $tmp1061 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1060, ((panda$core$Int64) { 0 }));
                if ($tmp1061.value) {
                {
                    haveFields1042 = ((panda$core$Bit) { true });
                    goto $l1049;
                }
                }
            }
            goto $l1048;
            $l1049:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1047));
        }
        panda$core$Bit $tmp1062 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1042);
        if ($tmp1062.value) {
        {
            {
                org$pandalanguage$pandac$Type* $tmp1063 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                result932->rawSuper = $tmp1063;
            }
        }
        }
    }
    }
    panda$core$Object* $tmp1064 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    {
        tmp41065 = result932;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName855));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result932));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations871));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters873));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes910));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment864));
        }
        return tmp41065;
    }
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter1066;
    org$pandalanguage$pandac$ClassDecl* inner1078;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp1067 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp1067->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1067 = $tmp1067->next;
        }
        $fn1069 $tmp1068 = $tmp1067->methods[0];
        panda$collections$Iterator* $tmp1070 = $tmp1068(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter1066 = $tmp1070;
        $l1071:;
        ITable* $tmp1073 = inner$Iter1066->$class->itable;
        while ($tmp1073->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1073 = $tmp1073->next;
        }
        $fn1075 $tmp1074 = $tmp1073->methods[0];
        panda$core$Bit $tmp1076 = $tmp1074(inner$Iter1066);
        panda$core$Bit $tmp1077 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1076);
        if (!$tmp1077.value) goto $l1072;
        {
            ITable* $tmp1079 = inner$Iter1066->$class->itable;
            while ($tmp1079->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1079 = $tmp1079->next;
            }
            $fn1081 $tmp1080 = $tmp1079->methods[1];
            panda$core$Object* $tmp1082 = $tmp1080(inner$Iter1066);
            inner1078 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1082);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1078, p_arr);
        }
        goto $l1071;
        $l1072:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1070));
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$556_91083;
    panda$collections$ImmutableArray* entries1085;
    panda$collections$Array* result1087;
    panda$core$String* currentPackage1089;
    panda$collections$HashMap* aliases1091;
    panda$collections$Iterator* e$Iter1093;
    org$pandalanguage$pandac$ASTNode* e1105;
    org$pandalanguage$pandac$ASTNode* $match$562_211110;
    panda$core$String* name1112;
    panda$core$String* fullName1115;
    panda$core$String$Index$nullable idx1117;
    panda$core$String* alias1120;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1121;
    org$pandalanguage$pandac$Position position1125;
    org$pandalanguage$pandac$ASTNode* dc1127;
    panda$collections$ImmutableArray* annotations1129;
    org$pandalanguage$pandac$ClassDecl$Kind kind1131;
    panda$core$String* name1133;
    panda$collections$ImmutableArray* generics1135;
    panda$collections$ImmutableArray* supertypes1137;
    panda$collections$ImmutableArray* members1139;
    org$pandalanguage$pandac$ClassDecl* cl1141;
    panda$collections$ListView* tmp51143;
    {
        $match$556_91083 = p_file;
        panda$core$Bit $tmp1084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$556_91083->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1084.value) {
        {
            panda$collections$ImmutableArray** $tmp1086 = ((panda$collections$ImmutableArray**) ((char*) $match$556_91083->$data + 0));
            entries1085 = *$tmp1086;
            panda$collections$Array* $tmp1088 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp1088);
            result1087 = $tmp1088;
            currentPackage1089 = &$s1090;
            panda$collections$HashMap* $tmp1092 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
            panda$collections$HashMap$init($tmp1092);
            aliases1091 = $tmp1092;
            {
                ITable* $tmp1094 = ((panda$collections$Iterable*) entries1085)->$class->itable;
                while ($tmp1094->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1094 = $tmp1094->next;
                }
                $fn1096 $tmp1095 = $tmp1094->methods[0];
                panda$collections$Iterator* $tmp1097 = $tmp1095(((panda$collections$Iterable*) entries1085));
                e$Iter1093 = $tmp1097;
                $l1098:;
                ITable* $tmp1100 = e$Iter1093->$class->itable;
                while ($tmp1100->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1100 = $tmp1100->next;
                }
                $fn1102 $tmp1101 = $tmp1100->methods[0];
                panda$core$Bit $tmp1103 = $tmp1101(e$Iter1093);
                panda$core$Bit $tmp1104 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1103);
                if (!$tmp1104.value) goto $l1099;
                {
                    ITable* $tmp1106 = e$Iter1093->$class->itable;
                    while ($tmp1106->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1106 = $tmp1106->next;
                    }
                    $fn1108 $tmp1107 = $tmp1106->methods[1];
                    panda$core$Object* $tmp1109 = $tmp1107(e$Iter1093);
                    e1105 = ((org$pandalanguage$pandac$ASTNode*) $tmp1109);
                    {
                        $match$562_211110 = e1105;
                        panda$core$Bit $tmp1111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$562_211110->$rawValue, ((panda$core$Int64) { 26 }));
                        if ($tmp1111.value) {
                        {
                            panda$core$String** $tmp1113 = ((panda$core$String**) ((char*) $match$562_211110->$data + 16));
                            name1112 = *$tmp1113;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1089));
                                currentPackage1089 = name1112;
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp1114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$562_211110->$rawValue, ((panda$core$Int64) { 37 }));
                        if ($tmp1114.value) {
                        {
                            panda$core$String** $tmp1116 = ((panda$core$String**) ((char*) $match$562_211110->$data + 16));
                            fullName1115 = *$tmp1116;
                            panda$core$String$Index$nullable $tmp1119 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName1115, &$s1118);
                            idx1117 = $tmp1119;
                            memset(&alias1120, 0, sizeof(alias1120));
                            if (((panda$core$Bit) { idx1117.nonnull }).value) {
                            {
                                {
                                    panda$core$String$Index $tmp1122 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName1115, ((panda$core$String$Index) idx1117.value));
                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1121, ((panda$core$String$Index$nullable) { $tmp1122, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                    panda$core$String* $tmp1123 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName1115, $tmp1121);
                                    alias1120 = $tmp1123;
                                }
                            }
                            }
                            else {
                            {
                                {
                                    alias1120 = fullName1115;
                                }
                            }
                            }
                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1091, ((panda$collections$Key*) alias1120), ((panda$core$Object*) fullName1115));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias1120));
                        }
                        }
                        else {
                        panda$core$Bit $tmp1124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$562_211110->$rawValue, ((panda$core$Int64) { 9 }));
                        if ($tmp1124.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp1126 = ((org$pandalanguage$pandac$Position*) ((char*) $match$562_211110->$data + 0));
                            position1125 = *$tmp1126;
                            org$pandalanguage$pandac$ASTNode** $tmp1128 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$562_211110->$data + 16));
                            dc1127 = *$tmp1128;
                            panda$collections$ImmutableArray** $tmp1130 = ((panda$collections$ImmutableArray**) ((char*) $match$562_211110->$data + 24));
                            annotations1129 = *$tmp1130;
                            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1132 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$562_211110->$data + 32));
                            kind1131 = *$tmp1132;
                            panda$core$String** $tmp1134 = ((panda$core$String**) ((char*) $match$562_211110->$data + 40));
                            name1133 = *$tmp1134;
                            panda$collections$ImmutableArray** $tmp1136 = ((panda$collections$ImmutableArray**) ((char*) $match$562_211110->$data + 48));
                            generics1135 = *$tmp1136;
                            panda$collections$ImmutableArray** $tmp1138 = ((panda$collections$ImmutableArray**) ((char*) $match$562_211110->$data + 56));
                            supertypes1137 = *$tmp1138;
                            panda$collections$ImmutableArray** $tmp1140 = ((panda$collections$ImmutableArray**) ((char*) $match$562_211110->$data + 64));
                            members1139 = *$tmp1140;
                            org$pandalanguage$pandac$ClassDecl* $tmp1142 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1091), currentPackage1089, position1125, dc1127, annotations1129, kind1131, name1133, generics1135, supertypes1137, members1139);
                            cl1141 = $tmp1142;
                            if (((panda$core$Bit) { cl1141 != NULL }).value) {
                            {
                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl1141, result1087);
                            }
                            }
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1141));
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
                goto $l1098;
                $l1099:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1097));
            }
            {
                tmp51143 = ((panda$collections$ListView*) result1087);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1089));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1087));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases1091));
                }
                return tmp51143;
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
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
}

