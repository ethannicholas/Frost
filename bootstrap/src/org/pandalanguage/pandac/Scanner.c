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
#include "panda/collections/ImmutableArray.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Panda.h"
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

typedef panda$collections$Iterator* (*$fn43)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn49)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn55)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn68)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn74)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn80)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn169)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn175)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn181)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn229)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn235)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn241)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn256)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn262)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn268)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn291)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn297)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn303)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn321)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn327)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn333)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn351)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn357)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn363)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn377)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn383)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn389)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn405)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn411)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn417)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn424)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn430)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn436)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn464)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn470)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn476)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn489)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn495)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn501)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn508)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn514)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn520)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn534)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn540)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn546)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn564)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn570)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn576)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn607)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn613)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn619)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn737)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn743)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn749)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn760)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn766)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn772)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn903)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn909)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn915)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn932)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn944)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn950)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn956)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn982)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn988)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn994)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1014)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1020)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1026)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1086)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1092)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1098)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1109)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1115)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1121)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1138)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1144)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1150)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x6f\x6e\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x27", 30, -1250916154819313721, NULL };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x68\x61\x76\x65\x20\x61\x20\x62\x6f\x64\x79", 16, -7652461387112275530, NULL };
static panda$core$String $s707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1052 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1065 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s1160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    {
        self->compiler = p_compiler;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_type) {
    org$pandalanguage$pandac$ASTNode* $match$18_92;
    org$pandalanguage$pandac$Position position4;
    panda$core$String* name6;
    org$pandalanguage$pandac$Position position11;
    org$pandalanguage$pandac$ASTNode* base13;
    panda$collections$Array* subtypes15;
    org$pandalanguage$pandac$Position position25;
    panda$core$String* base27;
    panda$collections$ImmutableArray* args29;
    panda$collections$Array* subtypes31;
    panda$core$MutableString* name34;
    panda$core$Char8 $tmp37;
    panda$core$String* separator38;
    panda$collections$Iterator* arg$Iter40;
    org$pandalanguage$pandac$ASTNode* arg52;
    org$pandalanguage$pandac$Type* subtype57;
    panda$core$Char8 $tmp60;
    {
        $match$18_92 = p_type;
        panda$core$Bit $tmp3 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$18_92->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp3.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5 = ((org$pandalanguage$pandac$Position*) ((char*) $match$18_92->$data + 0));
            position4 = *$tmp5;
            panda$core$String** $tmp7 = ((panda$core$String**) ((char*) $match$18_92->$data + 16));
            name6 = *$tmp7;
            org$pandalanguage$pandac$Type* $tmp8 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
            $tmp8->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp8->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp8, name6, ((panda$core$Int64) { 10 }), position4);
            return $tmp8;
        }
        }
        else {
        panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$18_92->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp10.value) {
        {
            org$pandalanguage$pandac$Position* $tmp12 = ((org$pandalanguage$pandac$Position*) ((char*) $match$18_92->$data + 0));
            position11 = *$tmp12;
            org$pandalanguage$pandac$ASTNode** $tmp14 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$18_92->$data + 16));
            base13 = *$tmp14;
            panda$collections$Array* $tmp16 = (panda$collections$Array*) pandaZAlloc(40);
            $tmp16->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp16->refCount.value = 1;
            panda$collections$Array$init($tmp16);
            subtypes15 = $tmp16;
            org$pandalanguage$pandac$Type* $tmp18 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, base13);
            panda$collections$Array$add$panda$collections$Array$T(subtypes15, ((panda$core$Object*) $tmp18));
            org$pandalanguage$pandac$Type* $tmp19 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
            $tmp19->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp19->refCount.value = 1;
            panda$core$Object* $tmp21 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes15, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp23 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp21))->name, &$s22);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp19, $tmp23, ((panda$core$Int64) { 11 }), position11, ((panda$collections$ListView*) subtypes15), ((panda$core$Bit) { false }));
            return $tmp19;
        }
        }
        else {
        panda$core$Bit $tmp24 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$18_92->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp24.value) {
        {
            org$pandalanguage$pandac$Position* $tmp26 = ((org$pandalanguage$pandac$Position*) ((char*) $match$18_92->$data + 0));
            position25 = *$tmp26;
            panda$core$String** $tmp28 = ((panda$core$String**) ((char*) $match$18_92->$data + 16));
            base27 = *$tmp28;
            panda$collections$ImmutableArray** $tmp30 = ((panda$collections$ImmutableArray**) ((char*) $match$18_92->$data + 24));
            args29 = *$tmp30;
            panda$collections$Array* $tmp32 = (panda$collections$Array*) pandaZAlloc(40);
            $tmp32->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp32->refCount.value = 1;
            panda$collections$Array$init($tmp32);
            subtypes31 = $tmp32;
            panda$core$MutableString* $tmp35 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp35->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp35->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp35, base27);
            name34 = $tmp35;
            panda$core$Char8$init$panda$core$UInt8(&$tmp37, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name34, $tmp37);
            separator38 = &$s39;
            {
                ITable* $tmp41 = ((panda$collections$Iterable*) args29)->$class->itable;
                while ($tmp41->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp41 = $tmp41->next;
                }
                $fn43 $tmp42 = $tmp41->methods[0];
                panda$collections$Iterator* $tmp44 = $tmp42(((panda$collections$Iterable*) args29));
                arg$Iter40 = $tmp44;
                $l45:;
                ITable* $tmp47 = arg$Iter40->$class->itable;
                while ($tmp47->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp47 = $tmp47->next;
                }
                $fn49 $tmp48 = $tmp47->methods[0];
                panda$core$Bit $tmp50 = $tmp48(arg$Iter40);
                panda$core$Bit $tmp51 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp50);
                if (!$tmp51.value) goto $l46;
                {
                    ITable* $tmp53 = arg$Iter40->$class->itable;
                    while ($tmp53->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp53 = $tmp53->next;
                    }
                    $fn55 $tmp54 = $tmp53->methods[1];
                    panda$core$Object* $tmp56 = $tmp54(arg$Iter40);
                    arg52 = ((org$pandalanguage$pandac$ASTNode*) $tmp56);
                    org$pandalanguage$pandac$Type* $tmp58 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, arg52);
                    subtype57 = $tmp58;
                    panda$collections$Array$add$panda$collections$Array$T(subtypes31, ((panda$core$Object*) subtype57));
                    panda$core$MutableString$append$panda$core$String(name34, separator38);
                    panda$core$MutableString$append$panda$core$String(name34, ((org$pandalanguage$pandac$Symbol*) subtype57)->name);
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator38));
                        separator38 = &$s59;
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtype57));
                }
                goto $l45;
                $l46:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp60, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name34, $tmp60);
            org$pandalanguage$pandac$Type* $tmp61 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
            $tmp61->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp61->refCount.value = 1;
            panda$core$String* $tmp63 = panda$core$MutableString$finish$R$panda$core$String(name34);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp61, $tmp63, ((panda$core$Int64) { 21 }), position25, ((panda$collections$ListView*) subtypes31), ((panda$core$Bit) { false }));
            return $tmp61;
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
    panda$core$Int64 flags64;
    panda$collections$Iterator* c$Iter65;
    org$pandalanguage$pandac$ASTNode* c77;
    org$pandalanguage$pandac$ASTNode* $match$47_1382;
    org$pandalanguage$pandac$Position position84;
    panda$core$String* text86;
    panda$core$String* $match$49_2188;
    flags64 = ((panda$core$Int64) { 0 });
    {
        ITable* $tmp66 = ((panda$collections$Iterable*) p_a)->$class->itable;
        while ($tmp66->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp66 = $tmp66->next;
        }
        $fn68 $tmp67 = $tmp66->methods[0];
        panda$collections$Iterator* $tmp69 = $tmp67(((panda$collections$Iterable*) p_a));
        c$Iter65 = $tmp69;
        $l70:;
        ITable* $tmp72 = c$Iter65->$class->itable;
        while ($tmp72->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp72 = $tmp72->next;
        }
        $fn74 $tmp73 = $tmp72->methods[0];
        panda$core$Bit $tmp75 = $tmp73(c$Iter65);
        panda$core$Bit $tmp76 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp75);
        if (!$tmp76.value) goto $l71;
        {
            ITable* $tmp78 = c$Iter65->$class->itable;
            while ($tmp78->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp78 = $tmp78->next;
            }
            $fn80 $tmp79 = $tmp78->methods[1];
            panda$core$Object* $tmp81 = $tmp79(c$Iter65);
            c77 = ((org$pandalanguage$pandac$ASTNode*) $tmp81);
            {
                $match$47_1382 = c77;
                panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_1382->$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp83.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp85 = ((org$pandalanguage$pandac$Position*) ((char*) $match$47_1382->$data + 0));
                    position84 = *$tmp85;
                    panda$core$String** $tmp87 = ((panda$core$String**) ((char*) $match$47_1382->$data + 16));
                    text86 = *$tmp87;
                    {
                        $match$49_2188 = text86;
                        panda$core$Bit $tmp90 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2188, &$s89);
                        if ($tmp90.value) {
                        {
                            panda$core$Int64 $tmp91 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                            panda$core$Int64 $tmp92 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags64, $tmp91);
                            flags64 = $tmp92;
                        }
                        }
                        else {
                        panda$core$Bit $tmp94 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2188, &$s93);
                        if ($tmp94.value) {
                        {
                            panda$core$Int64 $tmp95 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                            panda$core$Int64 $tmp96 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags64, $tmp95);
                            flags64 = $tmp96;
                        }
                        }
                        else {
                        panda$core$Bit $tmp98 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2188, &$s97);
                        if ($tmp98.value) {
                        {
                            panda$core$Int64 $tmp99 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                            panda$core$Int64 $tmp100 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags64, $tmp99);
                            flags64 = $tmp100;
                        }
                        }
                        else {
                        panda$core$Bit $tmp102 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2188, &$s101);
                        if ($tmp102.value) {
                        {
                            panda$core$Int64 $tmp103 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                            panda$core$Int64 $tmp104 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags64, $tmp103);
                            flags64 = $tmp104;
                        }
                        }
                        else {
                        panda$core$Bit $tmp106 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2188, &$s105);
                        if ($tmp106.value) {
                        {
                            panda$core$Int64 $tmp107 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                            panda$core$Int64 $tmp108 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags64, $tmp107);
                            flags64 = $tmp108;
                        }
                        }
                        else {
                        panda$core$Bit $tmp110 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2188, &$s109);
                        if ($tmp110.value) {
                        {
                            panda$core$Int64 $tmp111 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                            panda$core$Int64 $tmp112 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags64, $tmp111);
                            flags64 = $tmp112;
                        }
                        }
                        else {
                        panda$core$Bit $tmp114 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2188, &$s113);
                        if ($tmp114.value) {
                        {
                            panda$core$Int64 $tmp115 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                            panda$core$Int64 $tmp116 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags64, $tmp115);
                            flags64 = $tmp116;
                        }
                        }
                        else {
                        panda$core$Bit $tmp118 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2188, &$s117);
                        if ($tmp118.value) {
                        {
                            panda$core$Int64 $tmp119 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                            panda$core$Int64 $tmp120 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags64, $tmp119);
                            flags64 = $tmp120;
                        }
                        }
                        else {
                        panda$core$Bit $tmp122 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2188, &$s121);
                        if ($tmp122.value) {
                        {
                            panda$core$Int64 $tmp123 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                            panda$core$Int64 $tmp124 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags64, $tmp123);
                            flags64 = $tmp124;
                        }
                        }
                        else {
                        panda$core$Bit $tmp126 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2188, &$s125);
                        if ($tmp126.value) {
                        {
                            panda$core$Int64 $tmp127 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                            panda$core$Int64 $tmp128 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags64, $tmp127);
                            flags64 = $tmp128;
                        }
                        }
                        else {
                        panda$core$Bit $tmp130 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2188, &$s129);
                        if ($tmp130.value) {
                        {
                            panda$core$Int64 $tmp131 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                            panda$core$Int64 $tmp132 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags64, $tmp131);
                            flags64 = $tmp132;
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s133, text86);
                            panda$core$String* $tmp136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp134, &$s135);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, position84, $tmp136);
                        }
                        }
                        }
                        }
                        }
                        }
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
        goto $l70;
        $l71:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp69));
    }
    org$pandalanguage$pandac$Annotations* $tmp137 = (org$pandalanguage$pandac$Annotations*) pandaZAlloc(24);
    $tmp137->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp137->refCount.value = 1;
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp137, flags64);
    return $tmp137;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment139;
    org$pandalanguage$pandac$ASTNode* $match$79_13140;
    org$pandalanguage$pandac$Position position142;
    panda$core$String* text144;
    org$pandalanguage$pandac$Annotations* annotations146;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind148;
    org$pandalanguage$pandac$ASTNode* $match$88_9149;
    org$pandalanguage$pandac$Variable$Kind kind151;
    panda$collections$ImmutableArray* decls153;
    org$pandalanguage$pandac$Variable$Kind $match$90_17155;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp157;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp159;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp161;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp165;
    panda$collections$Iterator* decl$Iter166;
    org$pandalanguage$pandac$ASTNode* decl178;
    org$pandalanguage$pandac$ASTNode* $match$102_21183;
    org$pandalanguage$pandac$Position declPosition185;
    org$pandalanguage$pandac$ASTNode* target187;
    org$pandalanguage$pandac$ASTNode* value189;
    panda$core$String* name191;
    org$pandalanguage$pandac$Type* type192;
    org$pandalanguage$pandac$ASTNode* $match$106_29193;
    panda$core$String* id195;
    panda$core$String* id199;
    org$pandalanguage$pandac$ASTNode* idType201;
    org$pandalanguage$pandac$FieldDecl* field204;
    memset(&doccomment139, 0, sizeof(doccomment139));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment139 = NULL;
        }
    }
    }
    else {
    {
        {
            $match$79_13140 = p_rawDoccomment;
            panda$core$Bit $tmp141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$79_13140->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp141.value) {
            {
                org$pandalanguage$pandac$Position* $tmp143 = ((org$pandalanguage$pandac$Position*) ((char*) $match$79_13140->$data + 0));
                position142 = *$tmp143;
                panda$core$String** $tmp145 = ((panda$core$String**) ((char*) $match$79_13140->$data + 16));
                text144 = *$tmp145;
                {
                    doccomment139 = text144;
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
    org$pandalanguage$pandac$Annotations* $tmp147 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations146 = $tmp147;
    memset(&fieldKind148, 0, sizeof(fieldKind148));
    {
        $match$88_9149 = p_varDecl;
        panda$core$Bit $tmp150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$88_9149->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp150.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp152 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$88_9149->$data + 16));
            kind151 = *$tmp152;
            panda$collections$ImmutableArray** $tmp154 = ((panda$collections$ImmutableArray**) ((char*) $match$88_9149->$data + 24));
            decls153 = *$tmp154;
            {
                $match$90_17155 = kind151;
                panda$core$Bit $tmp156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17155.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp156.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp157, ((panda$core$Int64) { 0 }));
                    fieldKind148 = $tmp157;
                }
                }
                else {
                panda$core$Bit $tmp158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17155.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp158.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp159, ((panda$core$Int64) { 1 }));
                    fieldKind148 = $tmp159;
                }
                }
                else {
                panda$core$Bit $tmp160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17155.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp160.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp161, ((panda$core$Int64) { 2 }));
                    fieldKind148 = $tmp161;
                    panda$core$Int64 $tmp162 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp163 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations146->flags, $tmp162);
                    annotations146->flags = $tmp163;
                }
                }
                else {
                panda$core$Bit $tmp164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17155.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp164.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp165, ((panda$core$Int64) { 3 }));
                    fieldKind148 = $tmp165;
                }
                }
                }
                }
                }
            }
            {
                ITable* $tmp167 = ((panda$collections$Iterable*) decls153)->$class->itable;
                while ($tmp167->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp167 = $tmp167->next;
                }
                $fn169 $tmp168 = $tmp167->methods[0];
                panda$collections$Iterator* $tmp170 = $tmp168(((panda$collections$Iterable*) decls153));
                decl$Iter166 = $tmp170;
                $l171:;
                ITable* $tmp173 = decl$Iter166->$class->itable;
                while ($tmp173->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp173 = $tmp173->next;
                }
                $fn175 $tmp174 = $tmp173->methods[0];
                panda$core$Bit $tmp176 = $tmp174(decl$Iter166);
                panda$core$Bit $tmp177 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp176);
                if (!$tmp177.value) goto $l172;
                {
                    ITable* $tmp179 = decl$Iter166->$class->itable;
                    while ($tmp179->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp179 = $tmp179->next;
                    }
                    $fn181 $tmp180 = $tmp179->methods[1];
                    panda$core$Object* $tmp182 = $tmp180(decl$Iter166);
                    decl178 = ((org$pandalanguage$pandac$ASTNode*) $tmp182);
                    {
                        $match$102_21183 = decl178;
                        panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$102_21183->$rawValue, ((panda$core$Int64) { 11 }));
                        if ($tmp184.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp186 = ((org$pandalanguage$pandac$Position*) ((char*) $match$102_21183->$data + 0));
                            declPosition185 = *$tmp186;
                            org$pandalanguage$pandac$ASTNode** $tmp188 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$102_21183->$data + 16));
                            target187 = *$tmp188;
                            org$pandalanguage$pandac$ASTNode** $tmp190 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$102_21183->$data + 24));
                            value189 = *$tmp190;
                            memset(&name191, 0, sizeof(name191));
                            memset(&type192, 0, sizeof(type192));
                            {
                                $match$106_29193 = target187;
                                panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$106_29193->$rawValue, ((panda$core$Int64) { 18 }));
                                if ($tmp194.value) {
                                {
                                    panda$core$String** $tmp196 = ((panda$core$String**) ((char*) $match$106_29193->$data + 16));
                                    id195 = *$tmp196;
                                    {
                                        name191 = id195;
                                    }
                                    {
                                        org$pandalanguage$pandac$Type* $tmp197 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                        type192 = $tmp197;
                                    }
                                }
                                }
                                else {
                                panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$106_29193->$rawValue, ((panda$core$Int64) { 36 }));
                                if ($tmp198.value) {
                                {
                                    panda$core$String** $tmp200 = ((panda$core$String**) ((char*) $match$106_29193->$data + 16));
                                    id199 = *$tmp200;
                                    org$pandalanguage$pandac$ASTNode** $tmp202 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$106_29193->$data + 24));
                                    idType201 = *$tmp202;
                                    {
                                        name191 = id199;
                                    }
                                    {
                                        org$pandalanguage$pandac$Type* $tmp203 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType201);
                                        type192 = $tmp203;
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
                            org$pandalanguage$pandac$FieldDecl* $tmp205 = (org$pandalanguage$pandac$FieldDecl*) pandaZAlloc(113);
                            $tmp205->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                            $tmp205->refCount.value = 1;
                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp205, p_owner, declPosition185, doccomment139, annotations146, fieldKind148, name191, type192, value189);
                            field204 = $tmp205;
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field204));
                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field204));
                        }
                        }
                        else {
                        {
                            PANDA_ASSERT(((panda$core$Bit) { false }).value);
                        }
                        }
                    }
                }
                goto $l171;
                $l172:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations146));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment139));
    }
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$131_9207;
    org$pandalanguage$pandac$ASTNode* test209;
    org$pandalanguage$pandac$ASTNode* left213;
    org$pandalanguage$pandac$ASTNode* right215;
    panda$collections$ImmutableArray* statements223;
    panda$core$Int64 result225;
    panda$collections$Iterator* s$Iter226;
    org$pandalanguage$pandac$ASTNode* s238;
    org$pandalanguage$pandac$ASTNode* target247;
    panda$collections$ImmutableArray* args249;
    panda$core$Int64 result251;
    panda$collections$Iterator* a$Iter253;
    org$pandalanguage$pandac$ASTNode* a265;
    org$pandalanguage$pandac$ASTNode* base273;
    org$pandalanguage$pandac$ASTNode* value278;
    panda$collections$ImmutableArray* statements282;
    org$pandalanguage$pandac$ASTNode* test284;
    panda$core$Int64 result286;
    panda$collections$Iterator* s$Iter288;
    org$pandalanguage$pandac$ASTNode* s300;
    org$pandalanguage$pandac$ASTNode* base308;
    org$pandalanguage$pandac$ASTNode* list312;
    panda$collections$ImmutableArray* statements314;
    panda$core$Int64 result316;
    panda$collections$Iterator* s$Iter318;
    org$pandalanguage$pandac$ASTNode* s330;
    org$pandalanguage$pandac$ASTNode* test340;
    panda$collections$ImmutableArray* ifTrue342;
    org$pandalanguage$pandac$ASTNode* ifFalse344;
    panda$core$Int64 result346;
    panda$collections$Iterator* s$Iter348;
    org$pandalanguage$pandac$ASTNode* s360;
    panda$collections$ImmutableArray* statements371;
    panda$core$Int64 result373;
    panda$collections$Iterator* s$Iter374;
    org$pandalanguage$pandac$ASTNode* s386;
    org$pandalanguage$pandac$ASTNode* value394;
    panda$collections$ImmutableArray* whens396;
    panda$collections$ImmutableArray* other398;
    panda$core$Int64 result400;
    panda$collections$Iterator* w$Iter402;
    org$pandalanguage$pandac$ASTNode* w414;
    panda$collections$Iterator* s$Iter421;
    org$pandalanguage$pandac$ASTNode* s433;
    org$pandalanguage$pandac$ASTNode* base443;
    org$pandalanguage$pandac$ASTNode* value450;
    panda$collections$ImmutableArray* decls458;
    panda$core$Int64 result460;
    panda$collections$Iterator* decl$Iter461;
    org$pandalanguage$pandac$ASTNode* decl473;
    panda$collections$ImmutableArray* tests481;
    panda$collections$ImmutableArray* statements483;
    panda$core$Int64 result485;
    panda$collections$Iterator* test$Iter486;
    org$pandalanguage$pandac$ASTNode* test498;
    panda$collections$Iterator* s$Iter505;
    org$pandalanguage$pandac$ASTNode* s517;
    org$pandalanguage$pandac$ASTNode* test525;
    panda$collections$ImmutableArray* statements527;
    panda$core$Int64 result529;
    panda$collections$Iterator* s$Iter531;
    org$pandalanguage$pandac$ASTNode* s543;
    {
        $match$131_9207 = p_node;
        panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp208.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp210 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9207->$data + 16));
            test209 = *$tmp210;
            panda$core$Int64 $tmp211 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test209);
            return $tmp211;
        }
        }
        else {
        panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp212.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp214 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9207->$data + 16));
            left213 = *$tmp214;
            org$pandalanguage$pandac$ASTNode** $tmp216 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9207->$data + 32));
            right215 = *$tmp216;
            panda$core$Int64 $tmp217 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left213);
            panda$core$Int64 $tmp218 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp217);
            panda$core$Int64 $tmp219 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right215);
            panda$core$Int64 $tmp220 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp218, $tmp219);
            return $tmp220;
        }
        }
        else {
        panda$core$Bit $tmp221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp221.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp222.value) {
        {
            panda$collections$ImmutableArray** $tmp224 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9207->$data + 16));
            statements223 = *$tmp224;
            result225 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp227 = ((panda$collections$Iterable*) statements223)->$class->itable;
                while ($tmp227->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp227 = $tmp227->next;
                }
                $fn229 $tmp228 = $tmp227->methods[0];
                panda$collections$Iterator* $tmp230 = $tmp228(((panda$collections$Iterable*) statements223));
                s$Iter226 = $tmp230;
                $l231:;
                ITable* $tmp233 = s$Iter226->$class->itable;
                while ($tmp233->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp233 = $tmp233->next;
                }
                $fn235 $tmp234 = $tmp233->methods[0];
                panda$core$Bit $tmp236 = $tmp234(s$Iter226);
                panda$core$Bit $tmp237 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp236);
                if (!$tmp237.value) goto $l232;
                {
                    ITable* $tmp239 = s$Iter226->$class->itable;
                    while ($tmp239->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp239 = $tmp239->next;
                    }
                    $fn241 $tmp240 = $tmp239->methods[1];
                    panda$core$Object* $tmp242 = $tmp240(s$Iter226);
                    s238 = ((org$pandalanguage$pandac$ASTNode*) $tmp242);
                    panda$core$Int64 $tmp243 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s238);
                    panda$core$Int64 $tmp244 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result225, $tmp243);
                    result225 = $tmp244;
                }
                goto $l231;
                $l232:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp230));
            }
            return result225;
        }
        }
        else {
        panda$core$Bit $tmp245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp245.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp246.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp248 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9207->$data + 16));
            target247 = *$tmp248;
            panda$collections$ImmutableArray** $tmp250 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9207->$data + 24));
            args249 = *$tmp250;
            panda$core$Int64 $tmp252 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target247);
            result251 = $tmp252;
            {
                ITable* $tmp254 = ((panda$collections$Iterable*) args249)->$class->itable;
                while ($tmp254->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp254 = $tmp254->next;
                }
                $fn256 $tmp255 = $tmp254->methods[0];
                panda$collections$Iterator* $tmp257 = $tmp255(((panda$collections$Iterable*) args249));
                a$Iter253 = $tmp257;
                $l258:;
                ITable* $tmp260 = a$Iter253->$class->itable;
                while ($tmp260->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp260 = $tmp260->next;
                }
                $fn262 $tmp261 = $tmp260->methods[0];
                panda$core$Bit $tmp263 = $tmp261(a$Iter253);
                panda$core$Bit $tmp264 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp263);
                if (!$tmp264.value) goto $l259;
                {
                    ITable* $tmp266 = a$Iter253->$class->itable;
                    while ($tmp266->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp266 = $tmp266->next;
                    }
                    $fn268 $tmp267 = $tmp266->methods[1];
                    panda$core$Object* $tmp269 = $tmp267(a$Iter253);
                    a265 = ((org$pandalanguage$pandac$ASTNode*) $tmp269);
                    panda$core$Int64 $tmp270 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a265);
                    panda$core$Int64 $tmp271 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result251, $tmp270);
                    result251 = $tmp271;
                }
                goto $l258;
                $l259:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp257));
            }
            return result251;
        }
        }
        else {
        panda$core$Bit $tmp272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp272.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp274 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9207->$data + 16));
            base273 = *$tmp274;
            panda$core$Int64 $tmp275 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base273);
            return $tmp275;
        }
        }
        else {
        panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp276.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp277.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp279 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9207->$data + 24));
            value278 = *$tmp279;
            if (((panda$core$Bit) { value278 == NULL }).value) {
            {
                return ((panda$core$Int64) { 0 });
            }
            }
            panda$core$Int64 $tmp280 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value278);
            return $tmp280;
        }
        }
        else {
        panda$core$Bit $tmp281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp281.value) {
        {
            panda$collections$ImmutableArray** $tmp283 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9207->$data + 24));
            statements282 = *$tmp283;
            org$pandalanguage$pandac$ASTNode** $tmp285 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9207->$data + 32));
            test284 = *$tmp285;
            panda$core$Int64 $tmp287 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test284);
            result286 = $tmp287;
            {
                ITable* $tmp289 = ((panda$collections$Iterable*) statements282)->$class->itable;
                while ($tmp289->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp289 = $tmp289->next;
                }
                $fn291 $tmp290 = $tmp289->methods[0];
                panda$collections$Iterator* $tmp292 = $tmp290(((panda$collections$Iterable*) statements282));
                s$Iter288 = $tmp292;
                $l293:;
                ITable* $tmp295 = s$Iter288->$class->itable;
                while ($tmp295->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp295 = $tmp295->next;
                }
                $fn297 $tmp296 = $tmp295->methods[0];
                panda$core$Bit $tmp298 = $tmp296(s$Iter288);
                panda$core$Bit $tmp299 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp298);
                if (!$tmp299.value) goto $l294;
                {
                    ITable* $tmp301 = s$Iter288->$class->itable;
                    while ($tmp301->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp301 = $tmp301->next;
                    }
                    $fn303 $tmp302 = $tmp301->methods[1];
                    panda$core$Object* $tmp304 = $tmp302(s$Iter288);
                    s300 = ((org$pandalanguage$pandac$ASTNode*) $tmp304);
                    panda$core$Int64 $tmp305 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s300);
                    panda$core$Int64 $tmp306 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result286, $tmp305);
                    result286 = $tmp306;
                }
                goto $l293;
                $l294:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp292));
            }
            return result286;
        }
        }
        else {
        panda$core$Bit $tmp307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp307.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp309 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9207->$data + 16));
            base308 = *$tmp309;
            panda$core$Int64 $tmp310 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base308);
            return $tmp310;
        }
        }
        else {
        panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp311.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp313 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9207->$data + 32));
            list312 = *$tmp313;
            panda$collections$ImmutableArray** $tmp315 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9207->$data + 40));
            statements314 = *$tmp315;
            panda$core$Int64 $tmp317 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list312);
            result316 = $tmp317;
            {
                ITable* $tmp319 = ((panda$collections$Iterable*) statements314)->$class->itable;
                while ($tmp319->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp319 = $tmp319->next;
                }
                $fn321 $tmp320 = $tmp319->methods[0];
                panda$collections$Iterator* $tmp322 = $tmp320(((panda$collections$Iterable*) statements314));
                s$Iter318 = $tmp322;
                $l323:;
                ITable* $tmp325 = s$Iter318->$class->itable;
                while ($tmp325->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp325 = $tmp325->next;
                }
                $fn327 $tmp326 = $tmp325->methods[0];
                panda$core$Bit $tmp328 = $tmp326(s$Iter318);
                panda$core$Bit $tmp329 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp328);
                if (!$tmp329.value) goto $l324;
                {
                    ITable* $tmp331 = s$Iter318->$class->itable;
                    while ($tmp331->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp331 = $tmp331->next;
                    }
                    $fn333 $tmp332 = $tmp331->methods[1];
                    panda$core$Object* $tmp334 = $tmp332(s$Iter318);
                    s330 = ((org$pandalanguage$pandac$ASTNode*) $tmp334);
                    panda$core$Int64 $tmp335 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s330);
                    panda$core$Int64 $tmp336 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result316, $tmp335);
                    result316 = $tmp336;
                }
                goto $l323;
                $l324:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
            }
            return result316;
        }
        }
        else {
        panda$core$Bit $tmp337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp337.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp338.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp339.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp341 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9207->$data + 16));
            test340 = *$tmp341;
            panda$collections$ImmutableArray** $tmp343 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9207->$data + 24));
            ifTrue342 = *$tmp343;
            org$pandalanguage$pandac$ASTNode** $tmp345 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9207->$data + 32));
            ifFalse344 = *$tmp345;
            panda$core$Int64 $tmp347 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test340);
            result346 = $tmp347;
            {
                ITable* $tmp349 = ((panda$collections$Iterable*) ifTrue342)->$class->itable;
                while ($tmp349->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp349 = $tmp349->next;
                }
                $fn351 $tmp350 = $tmp349->methods[0];
                panda$collections$Iterator* $tmp352 = $tmp350(((panda$collections$Iterable*) ifTrue342));
                s$Iter348 = $tmp352;
                $l353:;
                ITable* $tmp355 = s$Iter348->$class->itable;
                while ($tmp355->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp355 = $tmp355->next;
                }
                $fn357 $tmp356 = $tmp355->methods[0];
                panda$core$Bit $tmp358 = $tmp356(s$Iter348);
                panda$core$Bit $tmp359 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp358);
                if (!$tmp359.value) goto $l354;
                {
                    ITable* $tmp361 = s$Iter348->$class->itable;
                    while ($tmp361->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp361 = $tmp361->next;
                    }
                    $fn363 $tmp362 = $tmp361->methods[1];
                    panda$core$Object* $tmp364 = $tmp362(s$Iter348);
                    s360 = ((org$pandalanguage$pandac$ASTNode*) $tmp364);
                    panda$core$Int64 $tmp365 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s360);
                    panda$core$Int64 $tmp366 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result346, $tmp365);
                    result346 = $tmp366;
                }
                goto $l353;
                $l354:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
            }
            if (((panda$core$Bit) { ifFalse344 != NULL }).value) {
            {
                panda$core$Int64 $tmp367 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse344);
                panda$core$Int64 $tmp368 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result346, $tmp367);
                result346 = $tmp368;
            }
            }
            return result346;
        }
        }
        else {
        panda$core$Bit $tmp369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp369.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp370.value) {
        {
            panda$collections$ImmutableArray** $tmp372 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9207->$data + 24));
            statements371 = *$tmp372;
            result373 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp375 = ((panda$collections$Iterable*) statements371)->$class->itable;
                while ($tmp375->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp375 = $tmp375->next;
                }
                $fn377 $tmp376 = $tmp375->methods[0];
                panda$collections$Iterator* $tmp378 = $tmp376(((panda$collections$Iterable*) statements371));
                s$Iter374 = $tmp378;
                $l379:;
                ITable* $tmp381 = s$Iter374->$class->itable;
                while ($tmp381->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp381 = $tmp381->next;
                }
                $fn383 $tmp382 = $tmp381->methods[0];
                panda$core$Bit $tmp384 = $tmp382(s$Iter374);
                panda$core$Bit $tmp385 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp384);
                if (!$tmp385.value) goto $l380;
                {
                    ITable* $tmp387 = s$Iter374->$class->itable;
                    while ($tmp387->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp387 = $tmp387->next;
                    }
                    $fn389 $tmp388 = $tmp387->methods[1];
                    panda$core$Object* $tmp390 = $tmp388(s$Iter374);
                    s386 = ((org$pandalanguage$pandac$ASTNode*) $tmp390);
                    panda$core$Int64 $tmp391 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s386);
                    panda$core$Int64 $tmp392 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result373, $tmp391);
                    result373 = $tmp392;
                }
                goto $l379;
                $l380:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp378));
            }
            return result373;
        }
        }
        else {
        panda$core$Bit $tmp393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp393.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp395 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9207->$data + 16));
            value394 = *$tmp395;
            panda$collections$ImmutableArray** $tmp397 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9207->$data + 24));
            whens396 = *$tmp397;
            panda$collections$ImmutableArray** $tmp399 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9207->$data + 32));
            other398 = *$tmp399;
            panda$core$Int64 $tmp401 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value394);
            result400 = $tmp401;
            {
                ITable* $tmp403 = ((panda$collections$Iterable*) whens396)->$class->itable;
                while ($tmp403->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp403 = $tmp403->next;
                }
                $fn405 $tmp404 = $tmp403->methods[0];
                panda$collections$Iterator* $tmp406 = $tmp404(((panda$collections$Iterable*) whens396));
                w$Iter402 = $tmp406;
                $l407:;
                ITable* $tmp409 = w$Iter402->$class->itable;
                while ($tmp409->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp409 = $tmp409->next;
                }
                $fn411 $tmp410 = $tmp409->methods[0];
                panda$core$Bit $tmp412 = $tmp410(w$Iter402);
                panda$core$Bit $tmp413 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp412);
                if (!$tmp413.value) goto $l408;
                {
                    ITable* $tmp415 = w$Iter402->$class->itable;
                    while ($tmp415->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp415 = $tmp415->next;
                    }
                    $fn417 $tmp416 = $tmp415->methods[1];
                    panda$core$Object* $tmp418 = $tmp416(w$Iter402);
                    w414 = ((org$pandalanguage$pandac$ASTNode*) $tmp418);
                    panda$core$Int64 $tmp419 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w414);
                    panda$core$Int64 $tmp420 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result400, $tmp419);
                    result400 = $tmp420;
                }
                goto $l407;
                $l408:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp406));
            }
            if (((panda$core$Bit) { other398 != NULL }).value) {
            {
                {
                    ITable* $tmp422 = ((panda$collections$Iterable*) other398)->$class->itable;
                    while ($tmp422->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp422 = $tmp422->next;
                    }
                    $fn424 $tmp423 = $tmp422->methods[0];
                    panda$collections$Iterator* $tmp425 = $tmp423(((panda$collections$Iterable*) other398));
                    s$Iter421 = $tmp425;
                    $l426:;
                    ITable* $tmp428 = s$Iter421->$class->itable;
                    while ($tmp428->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp428 = $tmp428->next;
                    }
                    $fn430 $tmp429 = $tmp428->methods[0];
                    panda$core$Bit $tmp431 = $tmp429(s$Iter421);
                    panda$core$Bit $tmp432 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp431);
                    if (!$tmp432.value) goto $l427;
                    {
                        ITable* $tmp434 = s$Iter421->$class->itable;
                        while ($tmp434->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp434 = $tmp434->next;
                        }
                        $fn436 $tmp435 = $tmp434->methods[1];
                        panda$core$Object* $tmp437 = $tmp435(s$Iter421);
                        s433 = ((org$pandalanguage$pandac$ASTNode*) $tmp437);
                        panda$core$Int64 $tmp438 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s433);
                        panda$core$Int64 $tmp439 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result400, $tmp438);
                        result400 = $tmp439;
                    }
                    goto $l426;
                    $l427:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
                }
            }
            }
            return result400;
        }
        }
        else {
        panda$core$Bit $tmp440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp440.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp441.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp442.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp444 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9207->$data + 24));
            base443 = *$tmp444;
            panda$core$Int64 $tmp445 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base443);
            panda$core$Int64 $tmp446 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp445);
            return $tmp446;
        }
        }
        else {
        panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp447.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp448.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp449.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp451 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9207->$data + 16));
            value450 = *$tmp451;
            if (((panda$core$Bit) { value450 == NULL }).value) {
            {
                return ((panda$core$Int64) { 0 });
            }
            }
            panda$core$Int64 $tmp452 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value450);
            return $tmp452;
        }
        }
        else {
        panda$core$Bit $tmp453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp453.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp454.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp455.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp456.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp457.value) {
        {
            panda$collections$ImmutableArray** $tmp459 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9207->$data + 24));
            decls458 = *$tmp459;
            result460 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp462 = ((panda$collections$Iterable*) decls458)->$class->itable;
                while ($tmp462->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp462 = $tmp462->next;
                }
                $fn464 $tmp463 = $tmp462->methods[0];
                panda$collections$Iterator* $tmp465 = $tmp463(((panda$collections$Iterable*) decls458));
                decl$Iter461 = $tmp465;
                $l466:;
                ITable* $tmp468 = decl$Iter461->$class->itable;
                while ($tmp468->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp468 = $tmp468->next;
                }
                $fn470 $tmp469 = $tmp468->methods[0];
                panda$core$Bit $tmp471 = $tmp469(decl$Iter461);
                panda$core$Bit $tmp472 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp471);
                if (!$tmp472.value) goto $l467;
                {
                    ITable* $tmp474 = decl$Iter461->$class->itable;
                    while ($tmp474->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp474 = $tmp474->next;
                    }
                    $fn476 $tmp475 = $tmp474->methods[1];
                    panda$core$Object* $tmp477 = $tmp475(decl$Iter461);
                    decl473 = ((org$pandalanguage$pandac$ASTNode*) $tmp477);
                    panda$core$Int64 $tmp478 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl473);
                    panda$core$Int64 $tmp479 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result460, $tmp478);
                    result460 = $tmp479;
                }
                goto $l466;
                $l467:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp465));
            }
            return result460;
        }
        }
        else {
        panda$core$Bit $tmp480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp480.value) {
        {
            panda$collections$ImmutableArray** $tmp482 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9207->$data + 16));
            tests481 = *$tmp482;
            panda$collections$ImmutableArray** $tmp484 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9207->$data + 24));
            statements483 = *$tmp484;
            result485 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp487 = ((panda$collections$Iterable*) tests481)->$class->itable;
                while ($tmp487->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp487 = $tmp487->next;
                }
                $fn489 $tmp488 = $tmp487->methods[0];
                panda$collections$Iterator* $tmp490 = $tmp488(((panda$collections$Iterable*) tests481));
                test$Iter486 = $tmp490;
                $l491:;
                ITable* $tmp493 = test$Iter486->$class->itable;
                while ($tmp493->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp493 = $tmp493->next;
                }
                $fn495 $tmp494 = $tmp493->methods[0];
                panda$core$Bit $tmp496 = $tmp494(test$Iter486);
                panda$core$Bit $tmp497 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp496);
                if (!$tmp497.value) goto $l492;
                {
                    ITable* $tmp499 = test$Iter486->$class->itable;
                    while ($tmp499->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp499 = $tmp499->next;
                    }
                    $fn501 $tmp500 = $tmp499->methods[1];
                    panda$core$Object* $tmp502 = $tmp500(test$Iter486);
                    test498 = ((org$pandalanguage$pandac$ASTNode*) $tmp502);
                    panda$core$Int64 $tmp503 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test498);
                    panda$core$Int64 $tmp504 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result485, $tmp503);
                    result485 = $tmp504;
                }
                goto $l491;
                $l492:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
            }
            {
                ITable* $tmp506 = ((panda$collections$Iterable*) statements483)->$class->itable;
                while ($tmp506->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp506 = $tmp506->next;
                }
                $fn508 $tmp507 = $tmp506->methods[0];
                panda$collections$Iterator* $tmp509 = $tmp507(((panda$collections$Iterable*) statements483));
                s$Iter505 = $tmp509;
                $l510:;
                ITable* $tmp512 = s$Iter505->$class->itable;
                while ($tmp512->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp512 = $tmp512->next;
                }
                $fn514 $tmp513 = $tmp512->methods[0];
                panda$core$Bit $tmp515 = $tmp513(s$Iter505);
                panda$core$Bit $tmp516 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp515);
                if (!$tmp516.value) goto $l511;
                {
                    ITable* $tmp518 = s$Iter505->$class->itable;
                    while ($tmp518->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp518 = $tmp518->next;
                    }
                    $fn520 $tmp519 = $tmp518->methods[1];
                    panda$core$Object* $tmp521 = $tmp519(s$Iter505);
                    s517 = ((org$pandalanguage$pandac$ASTNode*) $tmp521);
                    panda$core$Int64 $tmp522 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s517);
                    panda$core$Int64 $tmp523 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result485, $tmp522);
                    result485 = $tmp523;
                }
                goto $l510;
                $l511:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp509));
            }
            return result485;
        }
        }
        else {
        panda$core$Bit $tmp524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9207->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp524.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp526 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9207->$data + 24));
            test525 = *$tmp526;
            panda$collections$ImmutableArray** $tmp528 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9207->$data + 32));
            statements527 = *$tmp528;
            panda$core$Int64 $tmp530 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test525);
            result529 = $tmp530;
            {
                ITable* $tmp532 = ((panda$collections$Iterable*) statements527)->$class->itable;
                while ($tmp532->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp532 = $tmp532->next;
                }
                $fn534 $tmp533 = $tmp532->methods[0];
                panda$collections$Iterator* $tmp535 = $tmp533(((panda$collections$Iterable*) statements527));
                s$Iter531 = $tmp535;
                $l536:;
                ITable* $tmp538 = s$Iter531->$class->itable;
                while ($tmp538->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp538 = $tmp538->next;
                }
                $fn540 $tmp539 = $tmp538->methods[0];
                panda$core$Bit $tmp541 = $tmp539(s$Iter531);
                panda$core$Bit $tmp542 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp541);
                if (!$tmp542.value) goto $l537;
                {
                    ITable* $tmp544 = s$Iter531->$class->itable;
                    while ($tmp544->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp544 = $tmp544->next;
                    }
                    $fn546 $tmp545 = $tmp544->methods[1];
                    panda$core$Object* $tmp547 = $tmp545(s$Iter531);
                    s543 = ((org$pandalanguage$pandac$ASTNode*) $tmp547);
                    panda$core$Int64 $tmp548 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s543);
                    panda$core$Int64 $tmp549 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result529, $tmp548);
                    result529 = $tmp549;
                }
                goto $l536;
                $l537:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp535));
            }
            return result529;
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
    panda$core$Int64 c560;
    panda$collections$Iterator* s$Iter561;
    org$pandalanguage$pandac$ASTNode* s573;
    panda$core$Bit $tmp552 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp551 = $tmp552.value;
    if (!$tmp551) goto $l553;
    panda$core$Bit $tmp554 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp555 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp554);
    $tmp551 = $tmp555.value;
    $l553:;
    panda$core$Bit $tmp556 = { $tmp551 };
    bool $tmp550 = $tmp556.value;
    if (!$tmp550) goto $l557;
    panda$core$Bit $tmp558 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp550 = $tmp558.value;
    $l557:;
    panda$core$Bit $tmp559 = { $tmp550 };
    if ($tmp559.value) {
    {
        c560 = ((panda$core$Int64) { 0 });
        {
            ITable* $tmp562 = ((panda$collections$Iterable*) p_statements)->$class->itable;
            while ($tmp562->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp562 = $tmp562->next;
            }
            $fn564 $tmp563 = $tmp562->methods[0];
            panda$collections$Iterator* $tmp565 = $tmp563(((panda$collections$Iterable*) p_statements));
            s$Iter561 = $tmp565;
            $l566:;
            ITable* $tmp568 = s$Iter561->$class->itable;
            while ($tmp568->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp568 = $tmp568->next;
            }
            $fn570 $tmp569 = $tmp568->methods[0];
            panda$core$Bit $tmp571 = $tmp569(s$Iter561);
            panda$core$Bit $tmp572 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp571);
            if (!$tmp572.value) goto $l567;
            {
                ITable* $tmp574 = s$Iter561->$class->itable;
                while ($tmp574->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp574 = $tmp574->next;
                }
                $fn576 $tmp575 = $tmp574->methods[1];
                panda$core$Object* $tmp577 = $tmp575(s$Iter561);
                s573 = ((org$pandalanguage$pandac$ASTNode*) $tmp577);
                panda$core$Int64 $tmp578 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s573);
                panda$core$Int64 $tmp579 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c560, $tmp578);
                c560 = $tmp579;
                panda$core$Bit $tmp580 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c560, ((panda$core$Int64) { 10 }));
                if ($tmp580.value) {
                {
                    return ((panda$core$Bit) { false });
                }
                }
            }
            goto $l566;
            $l567:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp565));
        }
        return ((panda$core$Bit) { true });
    }
    }
    return ((panda$core$Bit) { false });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment581;
    org$pandalanguage$pandac$ASTNode* $match$281_13582;
    org$pandalanguage$pandac$Position position584;
    panda$core$String* text586;
    org$pandalanguage$pandac$Annotations* annotations588;
    panda$collections$Array* parameters601;
    panda$collections$Iterator* p$Iter604;
    org$pandalanguage$pandac$ASTNode* p616;
    org$pandalanguage$pandac$ASTNode* $match$294_13621;
    panda$core$String* name623;
    org$pandalanguage$pandac$ASTNode* type625;
    org$pandalanguage$pandac$Type* returnType630;
    org$pandalanguage$pandac$MethodDecl* tmp1656;
    memset(&doccomment581, 0, sizeof(doccomment581));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment581 = NULL;
        }
    }
    }
    else {
    {
        {
            $match$281_13582 = p_rawDoccomment;
            panda$core$Bit $tmp583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$281_13582->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp583.value) {
            {
                org$pandalanguage$pandac$Position* $tmp585 = ((org$pandalanguage$pandac$Position*) ((char*) $match$281_13582->$data + 0));
                position584 = *$tmp585;
                panda$core$String** $tmp587 = ((panda$core$String**) ((char*) $match$281_13582->$data + 16));
                text586 = *$tmp587;
                {
                    doccomment581 = text586;
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
    org$pandalanguage$pandac$Annotations* $tmp589 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations588 = $tmp589;
    panda$core$Bit $tmp592 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp591 = $tmp592.value;
    if (!$tmp591) goto $l593;
    panda$core$Bit $tmp594 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
    $tmp591 = $tmp594.value;
    $l593:;
    panda$core$Bit $tmp595 = { $tmp591 };
    bool $tmp590 = $tmp595.value;
    if ($tmp590) goto $l596;
    panda$core$Bit $tmp597 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations588);
    $tmp590 = $tmp597.value;
    $l596:;
    panda$core$Bit $tmp598 = { $tmp590 };
    if ($tmp598.value) {
    {
        panda$core$Int64 $tmp599 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp600 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations588->flags, $tmp599);
        annotations588->flags = $tmp600;
    }
    }
    panda$collections$Array* $tmp602 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp602->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp602->refCount.value = 1;
    panda$collections$Array$init($tmp602);
    parameters601 = $tmp602;
    {
        ITable* $tmp605 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
        while ($tmp605->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp605 = $tmp605->next;
        }
        $fn607 $tmp606 = $tmp605->methods[0];
        panda$collections$Iterator* $tmp608 = $tmp606(((panda$collections$Iterable*) p_rawParameters));
        p$Iter604 = $tmp608;
        $l609:;
        ITable* $tmp611 = p$Iter604->$class->itable;
        while ($tmp611->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp611 = $tmp611->next;
        }
        $fn613 $tmp612 = $tmp611->methods[0];
        panda$core$Bit $tmp614 = $tmp612(p$Iter604);
        panda$core$Bit $tmp615 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp614);
        if (!$tmp615.value) goto $l610;
        {
            ITable* $tmp617 = p$Iter604->$class->itable;
            while ($tmp617->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp617 = $tmp617->next;
            }
            $fn619 $tmp618 = $tmp617->methods[1];
            panda$core$Object* $tmp620 = $tmp618(p$Iter604);
            p616 = ((org$pandalanguage$pandac$ASTNode*) $tmp620);
            {
                $match$294_13621 = p616;
                panda$core$Bit $tmp622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$294_13621->$rawValue, ((panda$core$Int64) { 27 }));
                if ($tmp622.value) {
                {
                    panda$core$String** $tmp624 = ((panda$core$String**) ((char*) $match$294_13621->$data + 16));
                    name623 = *$tmp624;
                    org$pandalanguage$pandac$ASTNode** $tmp626 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$294_13621->$data + 24));
                    type625 = *$tmp626;
                    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp627 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaZAlloc(32);
                    $tmp627->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                    $tmp627->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp629 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type625);
                    org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp627, name623, $tmp629);
                    panda$collections$Array$add$panda$collections$Array$T(parameters601, ((panda$core$Object*) $tmp627));
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l609;
        $l610:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp608));
    }
    memset(&returnType630, 0, sizeof(returnType630));
    if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp631 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
            returnType630 = $tmp631;
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp632 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            returnType630 = $tmp632;
        }
    }
    }
    panda$core$Bit $tmp634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
    bool $tmp633 = $tmp634.value;
    if (!$tmp633) goto $l635;
    org$pandalanguage$pandac$Type* $tmp636 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp637 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType630, $tmp636);
    $tmp633 = $tmp637.value;
    $l635:;
    panda$core$Bit $tmp638 = { $tmp633 };
    if ($tmp638.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s639);
    }
    }
    bool $tmp640 = ((panda$core$Bit) { p_statements != NULL }).value;
    if (!$tmp640) goto $l641;
    panda$core$Bit $tmp642 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations588, p_statements);
    $tmp640 = $tmp642.value;
    $l641:;
    panda$core$Bit $tmp643 = { $tmp640 };
    if ($tmp643.value) {
    {
        panda$core$Int64 $tmp644 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp645 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations588->flags, $tmp644);
        annotations588->flags = $tmp645;
    }
    }
    if (((panda$core$Bit) { p_statements == NULL }).value) {
    {
        panda$core$Bit $tmp646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp646.value) {
        {
            panda$core$Int64 $tmp647 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
            panda$core$Int64 $tmp648 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations588->flags, $tmp647);
            annotations588->flags = $tmp648;
        }
        }
        else {
        panda$core$Int64 $tmp649 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
        panda$core$Int64 $tmp650 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations588->flags, $tmp649);
        panda$core$Bit $tmp651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp650, ((panda$core$Int64) { 0 }));
        if ($tmp651.value) {
        {
            panda$core$String* $tmp653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s652, p_name);
            panda$core$String* $tmp655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp653, &$s654);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, $tmp655);
        }
        }
        }
    }
    }
    {
        org$pandalanguage$pandac$MethodDecl* $tmp657 = (org$pandalanguage$pandac$MethodDecl*) pandaZAlloc(136);
        $tmp657->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp657->refCount.value = 1;
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp657, p_owner, p_position, doccomment581, annotations588, p_kind, p_name, parameters601, returnType630, p_statements);
        tmp1656 = $tmp657;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations588));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters601));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType630));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment581));
        }
        return tmp1656;
    }
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$327_9659;
    org$pandalanguage$pandac$Position position661;
    org$pandalanguage$pandac$ASTNode* dc663;
    panda$collections$ImmutableArray* annotations665;
    org$pandalanguage$pandac$ASTNode* varDecl667;
    org$pandalanguage$pandac$Position position670;
    org$pandalanguage$pandac$ASTNode* dc672;
    panda$collections$ImmutableArray* annotations674;
    org$pandalanguage$pandac$MethodDecl$Kind kind676;
    panda$core$String* name678;
    panda$collections$ImmutableArray* parameters680;
    org$pandalanguage$pandac$ASTNode* rawReturnType682;
    panda$collections$ImmutableArray* statements684;
    org$pandalanguage$pandac$MethodDecl* m686;
    org$pandalanguage$pandac$Position position689;
    org$pandalanguage$pandac$ASTNode* dc691;
    panda$collections$ImmutableArray* annotations693;
    org$pandalanguage$pandac$ClassDecl$Kind kind695;
    panda$core$String* name697;
    panda$collections$ImmutableArray* generics699;
    panda$collections$ImmutableArray* supertypes701;
    panda$collections$ImmutableArray* members703;
    org$pandalanguage$pandac$ClassDecl* inner705;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp710;
    org$pandalanguage$pandac$Position position716;
    org$pandalanguage$pandac$ASTNode* dc718;
    panda$core$String* name720;
    panda$collections$ImmutableArray* fields722;
    {
        $match$327_9659 = p_node;
        panda$core$Bit $tmp660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9659->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp660.value) {
        {
            org$pandalanguage$pandac$Position* $tmp662 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9659->$data + 0));
            position661 = *$tmp662;
            org$pandalanguage$pandac$ASTNode** $tmp664 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9659->$data + 16));
            dc663 = *$tmp664;
            panda$collections$ImmutableArray** $tmp666 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9659->$data + 24));
            annotations665 = *$tmp666;
            org$pandalanguage$pandac$ASTNode** $tmp668 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9659->$data + 32));
            varDecl667 = *$tmp668;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position661, dc663, annotations665, varDecl667);
        }
        }
        else {
        panda$core$Bit $tmp669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9659->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp669.value) {
        {
            org$pandalanguage$pandac$Position* $tmp671 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9659->$data + 0));
            position670 = *$tmp671;
            org$pandalanguage$pandac$ASTNode** $tmp673 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9659->$data + 16));
            dc672 = *$tmp673;
            panda$collections$ImmutableArray** $tmp675 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9659->$data + 24));
            annotations674 = *$tmp675;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp677 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$327_9659->$data + 32));
            kind676 = *$tmp677;
            panda$core$String** $tmp679 = ((panda$core$String**) ((char*) $match$327_9659->$data + 40));
            name678 = *$tmp679;
            panda$collections$ImmutableArray** $tmp681 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9659->$data + 48));
            parameters680 = *$tmp681;
            org$pandalanguage$pandac$ASTNode** $tmp683 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9659->$data + 56));
            rawReturnType682 = *$tmp683;
            panda$collections$ImmutableArray** $tmp685 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9659->$data + 64));
            statements684 = *$tmp685;
            org$pandalanguage$pandac$MethodDecl* $tmp687 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position670, dc672, annotations674, kind676, name678, parameters680, rawReturnType682, statements684);
            m686 = $tmp687;
            if (((panda$core$Bit) { m686 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m686));
                panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m686));
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9659->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp688.value) {
        {
            org$pandalanguage$pandac$Position* $tmp690 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9659->$data + 0));
            position689 = *$tmp690;
            org$pandalanguage$pandac$ASTNode** $tmp692 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9659->$data + 16));
            dc691 = *$tmp692;
            panda$collections$ImmutableArray** $tmp694 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9659->$data + 24));
            annotations693 = *$tmp694;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp696 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$327_9659->$data + 32));
            kind695 = *$tmp696;
            panda$core$String** $tmp698 = ((panda$core$String**) ((char*) $match$327_9659->$data + 40));
            name697 = *$tmp698;
            panda$collections$ImmutableArray** $tmp700 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9659->$data + 48));
            generics699 = *$tmp700;
            panda$collections$ImmutableArray** $tmp702 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9659->$data + 56));
            supertypes701 = *$tmp702;
            panda$collections$ImmutableArray** $tmp704 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9659->$data + 64));
            members703 = *$tmp704;
            org$pandalanguage$pandac$ClassDecl* $tmp706 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, ((org$pandalanguage$pandac$Symbol*) p_cl)->name, position689, dc691, annotations693, kind695, name697, generics699, supertypes701, members703);
            inner705 = $tmp706;
            if (((panda$core$Bit) { inner705 != NULL }).value) {
            {
                {
                    inner705->owner = p_cl;
                }
                panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner705));
                panda$core$String* $tmp708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s707);
                panda$core$Bit $tmp709 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner705)->name, $tmp708);
                PANDA_ASSERT($tmp709.value);
                panda$core$Int64 $tmp711 = panda$core$String$length$R$panda$core$Int64(((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$Int64 $tmp712 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp711, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp710, ((panda$core$Int64$nullable) { $tmp712, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp713 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner705)->name, $tmp710);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner705), $tmp713);
                panda$collections$Array$add$panda$collections$Array$T(inner705->symbolTable->parents, ((panda$core$Object*) p_cl->symbolTable));
                panda$core$String* $tmp714 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner705->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_cl), $tmp714);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9659->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp715.value) {
        {
            org$pandalanguage$pandac$Position* $tmp717 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9659->$data + 0));
            position716 = *$tmp717;
            org$pandalanguage$pandac$ASTNode** $tmp719 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9659->$data + 16));
            dc718 = *$tmp719;
            panda$core$String** $tmp721 = ((panda$core$String**) ((char*) $match$327_9659->$data + 24));
            name720 = *$tmp721;
            panda$collections$ImmutableArray** $tmp723 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9659->$data + 32));
            fields722 = *$tmp723;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position716, dc718, name720, fields722);
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
    panda$core$String* doccomment724;
    org$pandalanguage$pandac$ASTNode* $match$365_13725;
    org$pandalanguage$pandac$Position position727;
    panda$core$String* text729;
    panda$collections$Array* fields731;
    panda$collections$Iterator* t$Iter734;
    org$pandalanguage$pandac$ASTNode* t746;
    org$pandalanguage$pandac$ChoiceEntry* entry752;
    panda$core$Bit found756;
    panda$collections$Iterator* m$Iter757;
    org$pandalanguage$pandac$MethodDecl* m769;
    panda$core$Range$LTpanda$core$Int64$GT $tmp782;
    panda$collections$Array* parameters808;
    panda$collections$Array* statements815;
    org$pandalanguage$pandac$parser$Token$Kind $tmp823;
    panda$core$Range$LTpanda$core$Int64$GT $tmp827;
    org$pandalanguage$pandac$parser$Token$Kind $tmp856;
    org$pandalanguage$pandac$MethodDecl* synthetic870;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp875;
    memset(&doccomment724, 0, sizeof(doccomment724));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment724 = NULL;
        }
    }
    }
    else {
    {
        {
            $match$365_13725 = p_rawDoccomment;
            panda$core$Bit $tmp726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$365_13725->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp726.value) {
            {
                org$pandalanguage$pandac$Position* $tmp728 = ((org$pandalanguage$pandac$Position*) ((char*) $match$365_13725->$data + 0));
                position727 = *$tmp728;
                panda$core$String** $tmp730 = ((panda$core$String**) ((char*) $match$365_13725->$data + 16));
                text729 = *$tmp730;
                {
                    doccomment724 = text729;
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
    panda$collections$Array* $tmp732 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp732->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp732->refCount.value = 1;
    panda$collections$Array$init($tmp732);
    fields731 = $tmp732;
    {
        ITable* $tmp735 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
        while ($tmp735->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp735 = $tmp735->next;
        }
        $fn737 $tmp736 = $tmp735->methods[0];
        panda$collections$Iterator* $tmp738 = $tmp736(((panda$collections$Iterable*) p_rawFields));
        t$Iter734 = $tmp738;
        $l739:;
        ITable* $tmp741 = t$Iter734->$class->itable;
        while ($tmp741->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp741 = $tmp741->next;
        }
        $fn743 $tmp742 = $tmp741->methods[0];
        panda$core$Bit $tmp744 = $tmp742(t$Iter734);
        panda$core$Bit $tmp745 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp744);
        if (!$tmp745.value) goto $l740;
        {
            ITable* $tmp747 = t$Iter734->$class->itable;
            while ($tmp747->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp747 = $tmp747->next;
            }
            $fn749 $tmp748 = $tmp747->methods[1];
            panda$core$Object* $tmp750 = $tmp748(t$Iter734);
            t746 = ((org$pandalanguage$pandac$ASTNode*) $tmp750);
            org$pandalanguage$pandac$Type* $tmp751 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t746);
            panda$collections$Array$add$panda$collections$Array$T(fields731, ((panda$core$Object*) $tmp751));
        }
        goto $l739;
        $l740:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp738));
    }
    org$pandalanguage$pandac$ChoiceEntry* $tmp753 = (org$pandalanguage$pandac$ChoiceEntry*) pandaZAlloc(97);
    $tmp753->$class = (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class;
    $tmp753->refCount.value = 1;
    panda$core$Int64 $tmp755 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
    org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp753, p_cl, p_position, p_name, doccomment724, $tmp755, ((panda$collections$ListView*) fields731));
    entry752 = $tmp753;
    panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry752));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry752));
    found756 = ((panda$core$Bit) { false });
    {
        ITable* $tmp758 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp758->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp758 = $tmp758->next;
        }
        $fn760 $tmp759 = $tmp758->methods[0];
        panda$collections$Iterator* $tmp761 = $tmp759(((panda$collections$Iterable*) p_cl->methods));
        m$Iter757 = $tmp761;
        $l762:;
        ITable* $tmp764 = m$Iter757->$class->itable;
        while ($tmp764->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp764 = $tmp764->next;
        }
        $fn766 $tmp765 = $tmp764->methods[0];
        panda$core$Bit $tmp767 = $tmp765(m$Iter757);
        panda$core$Bit $tmp768 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp767);
        if (!$tmp768.value) goto $l763;
        {
            ITable* $tmp770 = m$Iter757->$class->itable;
            while ($tmp770->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp770 = $tmp770->next;
            }
            $fn772 $tmp771 = $tmp770->methods[1];
            panda$core$Object* $tmp773 = $tmp771(m$Iter757);
            m769 = ((org$pandalanguage$pandac$MethodDecl*) $tmp773);
            panda$core$Bit $tmp774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m769->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp774.value);
            panda$core$Int64 $tmp775 = panda$collections$Array$get_count$R$panda$core$Int64(m769->parameters);
            panda$core$Int64 $tmp776 = panda$collections$Array$get_count$R$panda$core$Int64(fields731);
            panda$core$Int64 $tmp777 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp776, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp778 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp775, $tmp777);
            if ($tmp778.value) {
            {
                goto $l762;
            }
            }
            panda$core$Object* $tmp779 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m769->parameters, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp780 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp781 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp779)->type, $tmp780);
            PANDA_ASSERT($tmp781.value);
            panda$core$Int64 $tmp783 = panda$collections$Array$get_count$R$panda$core$Int64(fields731);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp782, ((panda$core$Int64) { 0 }), $tmp783, ((panda$core$Bit) { false }));
            int64_t $tmp785 = $tmp782.min.value;
            panda$core$Int64 i784 = { $tmp785 };
            int64_t $tmp787 = $tmp782.max.value;
            bool $tmp788 = $tmp782.inclusive.value;
            if ($tmp788) goto $l795; else goto $l796;
            $l795:;
            if ($tmp785 <= $tmp787) goto $l789; else goto $l791;
            $l796:;
            if ($tmp785 < $tmp787) goto $l789; else goto $l791;
            $l789:;
            {
                panda$core$Object* $tmp797 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields731, i784);
                panda$core$Int64 $tmp798 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i784, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp799 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m769->parameters, $tmp798);
                panda$core$Bit $tmp800 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp797), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp799)->type);
                if ($tmp800.value) {
                {
                    goto $l762;
                }
                }
            }
            $l792:;
            int64_t $tmp802 = $tmp787 - i784.value;
            if ($tmp788) goto $l803; else goto $l804;
            $l803:;
            if ((uint64_t) $tmp802 >= 1) goto $l801; else goto $l791;
            $l804:;
            if ((uint64_t) $tmp802 > 1) goto $l801; else goto $l791;
            $l801:;
            i784.value += 1;
            goto $l789;
            $l791:;
            {
                entry752->initMethod = m769;
            }
            found756 = ((panda$core$Bit) { true });
            goto $l763;
        }
        goto $l762;
        $l763:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp761));
    }
    panda$core$Bit $tmp807 = panda$core$Bit$$NOT$R$panda$core$Bit(found756);
    if ($tmp807.value) {
    {
        panda$collections$Array* $tmp809 = (panda$collections$Array*) pandaZAlloc(40);
        $tmp809->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp809->refCount.value = 1;
        panda$collections$Array$init($tmp809);
        parameters808 = $tmp809;
        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp811 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaZAlloc(32);
        $tmp811->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
        $tmp811->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp814 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp811, &$s813, $tmp814);
        panda$collections$Array$add$panda$collections$Array$T(parameters808, ((panda$core$Object*) $tmp811));
        panda$collections$Array* $tmp816 = (panda$collections$Array*) pandaZAlloc(40);
        $tmp816->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp816->refCount.value = 1;
        panda$collections$Array$init($tmp816);
        statements815 = $tmp816;
        org$pandalanguage$pandac$ASTNode* $tmp818 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp818->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp818->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode* $tmp820 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp820->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp820->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp820, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s822);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp823, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$ASTNode* $tmp824 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp824->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp824->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp824, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s826);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp818, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp820, $tmp823, $tmp824);
        panda$collections$Array$add$panda$collections$Array$T(statements815, ((panda$core$Object*) $tmp818));
        panda$core$Int64 $tmp828 = panda$collections$Array$get_count$R$panda$core$Int64(fields731);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp827, ((panda$core$Int64) { 0 }), $tmp828, ((panda$core$Bit) { false }));
        int64_t $tmp830 = $tmp827.min.value;
        panda$core$Int64 i829 = { $tmp830 };
        int64_t $tmp832 = $tmp827.max.value;
        bool $tmp833 = $tmp827.inclusive.value;
        if ($tmp833) goto $l840; else goto $l841;
        $l840:;
        if ($tmp830 <= $tmp832) goto $l834; else goto $l836;
        $l841:;
        if ($tmp830 < $tmp832) goto $l834; else goto $l836;
        $l834:;
        {
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp842 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaZAlloc(32);
            $tmp842->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp842->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp845;
            $tmp845 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp845->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp845->refCount = 1;
            $tmp845->value = i829;
            panda$core$String* $tmp846 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s844, ((panda$core$Object*) $tmp845));
            panda$core$String* $tmp848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp846, &$s847);
            panda$core$Object* $tmp849 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields731, i829);
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp842, $tmp848, ((org$pandalanguage$pandac$Type*) $tmp849));
            panda$collections$Array$add$panda$collections$Array$T(parameters808, ((panda$core$Object*) $tmp842));
            org$pandalanguage$pandac$ASTNode* $tmp850 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp850->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp850->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode* $tmp852 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp852->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp852->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode* $tmp854 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp854->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp854->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp854, ((panda$core$Int64) { 32 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64($tmp852, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp854, entry752, i829);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp856, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$ASTNode* $tmp857 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp857->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp857->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp860;
            $tmp860 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp860->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp860->refCount = 1;
            $tmp860->value = i829;
            panda$core$String* $tmp861 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s859, ((panda$core$Object*) $tmp860));
            panda$core$String* $tmp863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp861, &$s862);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp857, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp863);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp850, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp852, $tmp856, $tmp857);
            panda$collections$Array$add$panda$collections$Array$T(statements815, ((panda$core$Object*) $tmp850));
        }
        $l837:;
        int64_t $tmp865 = $tmp832 - i829.value;
        if ($tmp833) goto $l866; else goto $l867;
        $l866:;
        if ((uint64_t) $tmp865 >= 1) goto $l864; else goto $l836;
        $l867:;
        if ((uint64_t) $tmp865 > 1) goto $l864; else goto $l836;
        $l864:;
        i829.value += 1;
        goto $l834;
        $l836:;
        org$pandalanguage$pandac$MethodDecl* $tmp871 = (org$pandalanguage$pandac$MethodDecl*) pandaZAlloc(136);
        $tmp871->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp871->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp873 = (org$pandalanguage$pandac$Annotations*) pandaZAlloc(24);
        $tmp873->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp873->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp873);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp875, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$Type* $tmp877 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp878 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements815);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp871, p_cl, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, NULL, $tmp873, $tmp875, &$s876, parameters808, $tmp877, $tmp878);
        synthetic870 = $tmp871;
        {
            entry752->initMethod = synthetic870;
        }
        panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) synthetic870));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) synthetic870));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters808));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements815));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) synthetic870));
        }
    }
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields731));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry752));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment724));
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName879;
    panda$core$String* doccomment888;
    org$pandalanguage$pandac$ASTNode* $match$440_13889;
    org$pandalanguage$pandac$Position position891;
    panda$core$String* text893;
    org$pandalanguage$pandac$Annotations* annotations895;
    panda$collections$Array* parameters897;
    panda$collections$Iterator* p$Iter900;
    org$pandalanguage$pandac$ASTNode* p912;
    panda$core$String* name917;
    org$pandalanguage$pandac$Type* bound918;
    org$pandalanguage$pandac$ASTNode* $match$453_17919;
    panda$core$String* id921;
    panda$core$String* id925;
    org$pandalanguage$pandac$ASTNode* type927;
    panda$collections$Array* supertypes936;
    panda$collections$Iterator* s$Iter941;
    org$pandalanguage$pandac$ASTNode* s953;
    org$pandalanguage$pandac$ClassDecl* result959;
    org$pandalanguage$pandac$FieldDecl* rawValue963;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp968;
    org$pandalanguage$pandac$FieldDecl* data971;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp976;
    panda$collections$Iterator* m$Iter979;
    org$pandalanguage$pandac$ASTNode* m991;
    org$pandalanguage$pandac$ASTNode* $match$492_13996;
    org$pandalanguage$pandac$Position mPosition998;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1000;
    org$pandalanguage$pandac$ClassDecl$Kind $match$495_251003;
    panda$core$Bit foundInit1009;
    panda$core$Bit foundCleanup1010;
    panda$collections$Iterator* m$Iter1011;
    org$pandalanguage$pandac$MethodDecl* m1023;
    org$pandalanguage$pandac$MethodDecl* defaultInit1046;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1051;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1068;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1074;
    panda$core$Bit haveFields1082;
    panda$collections$Iterator* e$Iter1083;
    org$pandalanguage$pandac$ChoiceEntry* e1095;
    org$pandalanguage$pandac$ClassDecl* tmp21105;
    memset(&fullName879, 0, sizeof(fullName879));
    panda$core$Bit $tmp881 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s880);
    if ($tmp881.value) {
    {
        {
            panda$core$String* $tmp882 = panda$core$String$convert$R$panda$core$String(p_contextName);
            panda$core$String* $tmp884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp882, &$s883);
            panda$core$String* $tmp885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp884, p_name);
            panda$core$String* $tmp887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp885, &$s886);
            fullName879 = $tmp887;
        }
    }
    }
    else {
    {
        {
            fullName879 = p_name;
        }
    }
    }
    memset(&doccomment888, 0, sizeof(doccomment888));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment888 = NULL;
        }
    }
    }
    else {
    {
        {
            $match$440_13889 = p_rawDoccomment;
            panda$core$Bit $tmp890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$440_13889->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp890.value) {
            {
                org$pandalanguage$pandac$Position* $tmp892 = ((org$pandalanguage$pandac$Position*) ((char*) $match$440_13889->$data + 0));
                position891 = *$tmp892;
                panda$core$String** $tmp894 = ((panda$core$String**) ((char*) $match$440_13889->$data + 16));
                text893 = *$tmp894;
                {
                    doccomment888 = text893;
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
    org$pandalanguage$pandac$Annotations* $tmp896 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations895 = $tmp896;
    panda$collections$Array* $tmp898 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp898->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp898->refCount.value = 1;
    panda$collections$Array$init($tmp898);
    parameters897 = $tmp898;
    if (((panda$core$Bit) { p_generics != NULL }).value) {
    {
        {
            ITable* $tmp901 = ((panda$collections$Iterable*) p_generics)->$class->itable;
            while ($tmp901->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp901 = $tmp901->next;
            }
            $fn903 $tmp902 = $tmp901->methods[0];
            panda$collections$Iterator* $tmp904 = $tmp902(((panda$collections$Iterable*) p_generics));
            p$Iter900 = $tmp904;
            $l905:;
            ITable* $tmp907 = p$Iter900->$class->itable;
            while ($tmp907->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp907 = $tmp907->next;
            }
            $fn909 $tmp908 = $tmp907->methods[0];
            panda$core$Bit $tmp910 = $tmp908(p$Iter900);
            panda$core$Bit $tmp911 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp910);
            if (!$tmp911.value) goto $l906;
            {
                ITable* $tmp913 = p$Iter900->$class->itable;
                while ($tmp913->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp913 = $tmp913->next;
                }
                $fn915 $tmp914 = $tmp913->methods[1];
                panda$core$Object* $tmp916 = $tmp914(p$Iter900);
                p912 = ((org$pandalanguage$pandac$ASTNode*) $tmp916);
                memset(&name917, 0, sizeof(name917));
                memset(&bound918, 0, sizeof(bound918));
                {
                    $match$453_17919 = p912;
                    panda$core$Bit $tmp920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453_17919->$rawValue, ((panda$core$Int64) { 18 }));
                    if ($tmp920.value) {
                    {
                        panda$core$String** $tmp922 = ((panda$core$String**) ((char*) $match$453_17919->$data + 16));
                        id921 = *$tmp922;
                        {
                            name917 = id921;
                        }
                        {
                            org$pandalanguage$pandac$Type* $tmp923 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                            bound918 = $tmp923;
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453_17919->$rawValue, ((panda$core$Int64) { 36 }));
                    if ($tmp924.value) {
                    {
                        panda$core$String** $tmp926 = ((panda$core$String**) ((char*) $match$453_17919->$data + 16));
                        id925 = *$tmp926;
                        org$pandalanguage$pandac$ASTNode** $tmp928 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$453_17919->$data + 24));
                        type927 = *$tmp928;
                        {
                            name917 = id925;
                        }
                        {
                            org$pandalanguage$pandac$Type* $tmp929 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type927);
                            bound918 = $tmp929;
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
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp930 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaZAlloc(72);
                $tmp930->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp930->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp933 = (($fn932) p912->$class->vtable[2])(p912);
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp930, $tmp933, fullName879, name917, bound918);
                panda$collections$Array$add$panda$collections$Array$T(parameters897, ((panda$core$Object*) $tmp930));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound918));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name917));
                }
            }
            goto $l905;
            $l906:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp904));
        }
        panda$core$Bit $tmp934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp934.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s935);
        }
        }
    }
    }
    panda$collections$Array* $tmp937 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp937->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp937->refCount.value = 1;
    panda$collections$Array$init($tmp937);
    supertypes936 = $tmp937;
    if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
    {
        panda$core$Bit $tmp939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp939.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s940);
        }
        }
        {
            ITable* $tmp942 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
            while ($tmp942->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp942 = $tmp942->next;
            }
            $fn944 $tmp943 = $tmp942->methods[0];
            panda$collections$Iterator* $tmp945 = $tmp943(((panda$collections$Iterable*) p_rawSupertypes));
            s$Iter941 = $tmp945;
            $l946:;
            ITable* $tmp948 = s$Iter941->$class->itable;
            while ($tmp948->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp948 = $tmp948->next;
            }
            $fn950 $tmp949 = $tmp948->methods[0];
            panda$core$Bit $tmp951 = $tmp949(s$Iter941);
            panda$core$Bit $tmp952 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp951);
            if (!$tmp952.value) goto $l947;
            {
                ITable* $tmp954 = s$Iter941->$class->itable;
                while ($tmp954->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp954 = $tmp954->next;
                }
                $fn956 $tmp955 = $tmp954->methods[1];
                panda$core$Object* $tmp957 = $tmp955(s$Iter941);
                s953 = ((org$pandalanguage$pandac$ASTNode*) $tmp957);
                org$pandalanguage$pandac$Type* $tmp958 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s953);
                panda$collections$Array$add$panda$collections$Array$T(supertypes936, ((panda$core$Object*) $tmp958));
            }
            goto $l946;
            $l947:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp945));
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp960 = (org$pandalanguage$pandac$ClassDecl*) pandaZAlloc(201);
    $tmp960->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp960->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp960, p_source, p_position, p_aliases, doccomment888, annotations895, p_kind, fullName879, ((panda$collections$ListView*) supertypes936), parameters897, self->compiler->root);
    result959 = $tmp960;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result959));
    panda$core$Bit $tmp962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp962.value) {
    {
        org$pandalanguage$pandac$FieldDecl* $tmp964 = (org$pandalanguage$pandac$FieldDecl*) pandaZAlloc(113);
        $tmp964->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
        $tmp964->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp966 = (org$pandalanguage$pandac$Annotations*) pandaZAlloc(24);
        $tmp966->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp966->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp966);
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp968, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp970 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp964, result959, ((org$pandalanguage$pandac$Symbol*) result959)->position, NULL, $tmp966, $tmp968, &$s969, $tmp970, NULL);
        rawValue963 = $tmp964;
        panda$collections$Array$add$panda$collections$Array$T(result959->fields, ((panda$core$Object*) rawValue963));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result959->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue963));
        org$pandalanguage$pandac$FieldDecl* $tmp972 = (org$pandalanguage$pandac$FieldDecl*) pandaZAlloc(113);
        $tmp972->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
        $tmp972->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp974 = (org$pandalanguage$pandac$Annotations*) pandaZAlloc(24);
        $tmp974->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp974->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp974);
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp976, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp978 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp972, result959, ((org$pandalanguage$pandac$Symbol*) result959)->position, NULL, $tmp974, $tmp976, &$s977, $tmp978, NULL);
        data971 = $tmp972;
        panda$collections$Array$add$panda$collections$Array$T(result959->fields, ((panda$core$Object*) data971));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result959->symbolTable, ((org$pandalanguage$pandac$Symbol*) data971));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue963));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data971));
        }
    }
    }
    {
        ITable* $tmp980 = ((panda$collections$Iterable*) p_members)->$class->itable;
        while ($tmp980->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp980 = $tmp980->next;
        }
        $fn982 $tmp981 = $tmp980->methods[0];
        panda$collections$Iterator* $tmp983 = $tmp981(((panda$collections$Iterable*) p_members));
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
            m991 = ((org$pandalanguage$pandac$ASTNode*) $tmp995);
            {
                $match$492_13996 = m991;
                panda$core$Bit $tmp997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$492_13996->$rawValue, ((panda$core$Int64) { 23 }));
                if ($tmp997.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp999 = ((org$pandalanguage$pandac$Position*) ((char*) $match$492_13996->$data + 0));
                    mPosition998 = *$tmp999;
                    org$pandalanguage$pandac$MethodDecl$Kind* $tmp1001 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$492_13996->$data + 32));
                    methodKind1000 = *$tmp1001;
                    panda$core$Bit $tmp1002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1000.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1002.value) {
                    {
                        {
                            $match$495_251003 = p_kind;
                            panda$core$Bit $tmp1004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_251003.$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp1004.value) {
                            {
                            }
                            }
                            else {
                            panda$core$Bit $tmp1005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_251003.$rawValue, ((panda$core$Int64) { 1 }));
                            if ($tmp1005.value) {
                            {
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, mPosition998, &$s1006);
                            }
                            }
                            else {
                            panda$core$Bit $tmp1007 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_251003.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp1007.value) {
                            {
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, mPosition998, &$s1008);
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
            org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result959, m991);
        }
        goto $l984;
        $l985:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp983));
    }
    foundInit1009 = ((panda$core$Bit) { false });
    foundCleanup1010 = ((panda$core$Bit) { false });
    {
        ITable* $tmp1012 = ((panda$collections$Iterable*) result959->methods)->$class->itable;
        while ($tmp1012->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1012 = $tmp1012->next;
        }
        $fn1014 $tmp1013 = $tmp1012->methods[0];
        panda$collections$Iterator* $tmp1015 = $tmp1013(((panda$collections$Iterable*) result959->methods));
        m$Iter1011 = $tmp1015;
        $l1016:;
        ITable* $tmp1018 = m$Iter1011->$class->itable;
        while ($tmp1018->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1018 = $tmp1018->next;
        }
        $fn1020 $tmp1019 = $tmp1018->methods[0];
        panda$core$Bit $tmp1021 = $tmp1019(m$Iter1011);
        panda$core$Bit $tmp1022 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1021);
        if (!$tmp1022.value) goto $l1017;
        {
            ITable* $tmp1024 = m$Iter1011->$class->itable;
            while ($tmp1024->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1024 = $tmp1024->next;
            }
            $fn1026 $tmp1025 = $tmp1024->methods[1];
            panda$core$Object* $tmp1027 = $tmp1025(m$Iter1011);
            m1023 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1027);
            panda$core$Bit $tmp1028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1023->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1028.value) {
            {
                foundInit1009 = ((panda$core$Bit) { true });
            }
            }
            panda$core$Bit $tmp1031 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1023)->name, &$s1030);
            bool $tmp1029 = $tmp1031.value;
            if (!$tmp1029) goto $l1032;
            panda$core$Int64 $tmp1033 = panda$collections$Array$get_count$R$panda$core$Int64(m1023->parameters);
            panda$core$Bit $tmp1034 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1033, ((panda$core$Int64) { 0 }));
            $tmp1029 = $tmp1034.value;
            $l1032:;
            panda$core$Bit $tmp1035 = { $tmp1029 };
            if ($tmp1035.value) {
            {
                foundCleanup1010 = ((panda$core$Bit) { true });
            }
            }
        }
        goto $l1016;
        $l1017:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1015));
    }
    panda$core$Bit $tmp1038 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1009);
    bool $tmp1037 = $tmp1038.value;
    if (!$tmp1037) goto $l1039;
    panda$core$Bit $tmp1040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
    $tmp1037 = $tmp1040.value;
    $l1039:;
    panda$core$Bit $tmp1041 = { $tmp1037 };
    bool $tmp1036 = $tmp1041.value;
    if (!$tmp1036) goto $l1042;
    panda$core$Bit $tmp1044 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result959)->name, &$s1043);
    $tmp1036 = $tmp1044.value;
    $l1042:;
    panda$core$Bit $tmp1045 = { $tmp1036 };
    if ($tmp1045.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp1047 = (org$pandalanguage$pandac$MethodDecl*) pandaZAlloc(136);
        $tmp1047->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp1047->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp1049 = (org$pandalanguage$pandac$Annotations*) pandaZAlloc(24);
        $tmp1049->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp1049->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp1049);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1051, ((panda$core$Int64) { 2 }));
        panda$collections$Array* $tmp1053 = (panda$collections$Array*) pandaZAlloc(40);
        $tmp1053->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1053->refCount.value = 1;
        panda$collections$Array$init($tmp1053);
        org$pandalanguage$pandac$Type* $tmp1055 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp1056 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
        $tmp1056->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp1056->refCount.value = 1;
        panda$collections$ImmutableArray$init($tmp1056);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1047, result959, p_position, NULL, $tmp1049, $tmp1051, &$s1052, $tmp1053, $tmp1055, $tmp1056);
        defaultInit1046 = $tmp1047;
        panda$collections$Array$add$panda$collections$Array$T(result959->methods, ((panda$core$Object*) defaultInit1046));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result959->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1046));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1046));
    }
    }
    panda$core$Bit $tmp1060 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup1010);
    bool $tmp1059 = $tmp1060.value;
    if (!$tmp1059) goto $l1061;
    panda$core$Bit $tmp1062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
    $tmp1059 = $tmp1062.value;
    $l1061:;
    panda$core$Bit $tmp1063 = { $tmp1059 };
    bool $tmp1058 = $tmp1063.value;
    if (!$tmp1058) goto $l1064;
    panda$core$Bit $tmp1066 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result959)->name, &$s1065);
    $tmp1058 = $tmp1066.value;
    $l1064:;
    panda$core$Bit $tmp1067 = { $tmp1058 };
    if ($tmp1067.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp1069 = (org$pandalanguage$pandac$MethodDecl*) pandaZAlloc(136);
        $tmp1069->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp1069->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp1071 = (org$pandalanguage$pandac$Annotations*) pandaZAlloc(24);
        $tmp1071->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp1071->refCount.value = 1;
        panda$core$Int64 $tmp1073 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1071, $tmp1073);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1074, ((panda$core$Int64) { 0 }));
        panda$collections$Array* $tmp1076 = (panda$collections$Array*) pandaZAlloc(40);
        $tmp1076->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1076->refCount.value = 1;
        panda$collections$Array$init($tmp1076);
        org$pandalanguage$pandac$Type* $tmp1078 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp1079 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
        $tmp1079->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp1079->refCount.value = 1;
        panda$collections$ImmutableArray$init($tmp1079);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1069, result959, p_position, NULL, $tmp1071, $tmp1074, &$s1075, $tmp1076, $tmp1078, $tmp1079);
        defaultCleanup1068 = $tmp1069;
        panda$collections$Array$add$panda$collections$Array$T(result959->methods, ((panda$core$Object*) defaultCleanup1068));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result959->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1068));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1068));
    }
    }
    panda$core$Bit $tmp1081 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp1081.value) {
    {
        haveFields1082 = ((panda$core$Bit) { false });
        {
            ITable* $tmp1084 = ((panda$collections$Iterable*) result959->choiceEntries)->$class->itable;
            while ($tmp1084->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1084 = $tmp1084->next;
            }
            $fn1086 $tmp1085 = $tmp1084->methods[0];
            panda$collections$Iterator* $tmp1087 = $tmp1085(((panda$collections$Iterable*) result959->choiceEntries));
            e$Iter1083 = $tmp1087;
            $l1088:;
            ITable* $tmp1090 = e$Iter1083->$class->itable;
            while ($tmp1090->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1090 = $tmp1090->next;
            }
            $fn1092 $tmp1091 = $tmp1090->methods[0];
            panda$core$Bit $tmp1093 = $tmp1091(e$Iter1083);
            panda$core$Bit $tmp1094 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1093);
            if (!$tmp1094.value) goto $l1089;
            {
                ITable* $tmp1096 = e$Iter1083->$class->itable;
                while ($tmp1096->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1096 = $tmp1096->next;
                }
                $fn1098 $tmp1097 = $tmp1096->methods[1];
                panda$core$Object* $tmp1099 = $tmp1097(e$Iter1083);
                e1095 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1099);
                panda$core$Int64 $tmp1100 = panda$collections$Array$get_count$R$panda$core$Int64(e1095->fields);
                panda$core$Bit $tmp1101 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1100, ((panda$core$Int64) { 0 }));
                if ($tmp1101.value) {
                {
                    haveFields1082 = ((panda$core$Bit) { true });
                    goto $l1089;
                }
                }
            }
            goto $l1088;
            $l1089:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1087));
        }
        panda$core$Bit $tmp1102 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1082);
        if ($tmp1102.value) {
        {
            {
                org$pandalanguage$pandac$Type* $tmp1103 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                result959->rawSuper = $tmp1103;
            }
        }
        }
    }
    }
    panda$core$Object* $tmp1104 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    {
        tmp21105 = result959;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName879));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result959));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations895));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters897));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes936));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment888));
        }
        return tmp21105;
    }
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter1106;
    org$pandalanguage$pandac$ClassDecl* inner1118;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp1107 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp1107->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1107 = $tmp1107->next;
        }
        $fn1109 $tmp1108 = $tmp1107->methods[0];
        panda$collections$Iterator* $tmp1110 = $tmp1108(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter1106 = $tmp1110;
        $l1111:;
        ITable* $tmp1113 = inner$Iter1106->$class->itable;
        while ($tmp1113->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1113 = $tmp1113->next;
        }
        $fn1115 $tmp1114 = $tmp1113->methods[0];
        panda$core$Bit $tmp1116 = $tmp1114(inner$Iter1106);
        panda$core$Bit $tmp1117 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1116);
        if (!$tmp1117.value) goto $l1112;
        {
            ITable* $tmp1119 = inner$Iter1106->$class->itable;
            while ($tmp1119->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1119 = $tmp1119->next;
            }
            $fn1121 $tmp1120 = $tmp1119->methods[1];
            panda$core$Object* $tmp1122 = $tmp1120(inner$Iter1106);
            inner1118 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1122);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1118, p_arr);
        }
        goto $l1111;
        $l1112:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1110));
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$556_91123;
    panda$collections$ImmutableArray* entries1125;
    panda$collections$Array* result1127;
    panda$core$String* currentPackage1130;
    panda$collections$HashMap* aliases1132;
    panda$collections$Iterator* e$Iter1135;
    org$pandalanguage$pandac$ASTNode* e1147;
    org$pandalanguage$pandac$ASTNode* $match$562_211152;
    panda$core$String* name1154;
    panda$core$String* fullName1157;
    panda$core$String$Index$nullable idx1159;
    panda$core$String* alias1162;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1163;
    org$pandalanguage$pandac$Position position1167;
    org$pandalanguage$pandac$ASTNode* dc1169;
    panda$collections$ImmutableArray* annotations1171;
    org$pandalanguage$pandac$ClassDecl$Kind kind1173;
    panda$core$String* name1175;
    panda$collections$ImmutableArray* generics1177;
    panda$collections$ImmutableArray* supertypes1179;
    panda$collections$ImmutableArray* members1181;
    org$pandalanguage$pandac$ClassDecl* cl1183;
    {
        $match$556_91123 = p_file;
        panda$core$Bit $tmp1124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$556_91123->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1124.value) {
        {
            panda$collections$ImmutableArray** $tmp1126 = ((panda$collections$ImmutableArray**) ((char*) $match$556_91123->$data + 0));
            entries1125 = *$tmp1126;
            panda$collections$Array* $tmp1128 = (panda$collections$Array*) pandaZAlloc(40);
            $tmp1128->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1128->refCount.value = 1;
            panda$collections$Array$init($tmp1128);
            result1127 = $tmp1128;
            currentPackage1130 = &$s1131;
            panda$collections$HashMap* $tmp1133 = (panda$collections$HashMap*) pandaZAlloc(56);
            $tmp1133->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1133->refCount.value = 1;
            panda$collections$HashMap$init($tmp1133);
            aliases1132 = $tmp1133;
            {
                ITable* $tmp1136 = ((panda$collections$Iterable*) entries1125)->$class->itable;
                while ($tmp1136->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1136 = $tmp1136->next;
                }
                $fn1138 $tmp1137 = $tmp1136->methods[0];
                panda$collections$Iterator* $tmp1139 = $tmp1137(((panda$collections$Iterable*) entries1125));
                e$Iter1135 = $tmp1139;
                $l1140:;
                ITable* $tmp1142 = e$Iter1135->$class->itable;
                while ($tmp1142->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1142 = $tmp1142->next;
                }
                $fn1144 $tmp1143 = $tmp1142->methods[0];
                panda$core$Bit $tmp1145 = $tmp1143(e$Iter1135);
                panda$core$Bit $tmp1146 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1145);
                if (!$tmp1146.value) goto $l1141;
                {
                    ITable* $tmp1148 = e$Iter1135->$class->itable;
                    while ($tmp1148->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1148 = $tmp1148->next;
                    }
                    $fn1150 $tmp1149 = $tmp1148->methods[1];
                    panda$core$Object* $tmp1151 = $tmp1149(e$Iter1135);
                    e1147 = ((org$pandalanguage$pandac$ASTNode*) $tmp1151);
                    {
                        $match$562_211152 = e1147;
                        panda$core$Bit $tmp1153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$562_211152->$rawValue, ((panda$core$Int64) { 26 }));
                        if ($tmp1153.value) {
                        {
                            panda$core$String** $tmp1155 = ((panda$core$String**) ((char*) $match$562_211152->$data + 16));
                            name1154 = *$tmp1155;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1130));
                                currentPackage1130 = name1154;
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp1156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$562_211152->$rawValue, ((panda$core$Int64) { 37 }));
                        if ($tmp1156.value) {
                        {
                            panda$core$String** $tmp1158 = ((panda$core$String**) ((char*) $match$562_211152->$data + 16));
                            fullName1157 = *$tmp1158;
                            panda$core$String$Index$nullable $tmp1161 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName1157, &$s1160);
                            idx1159 = $tmp1161;
                            memset(&alias1162, 0, sizeof(alias1162));
                            if (((panda$core$Bit) { idx1159.nonnull }).value) {
                            {
                                {
                                    panda$core$String$Index $tmp1164 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName1157, ((panda$core$String$Index) idx1159.value));
                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1163, ((panda$core$String$Index$nullable) { $tmp1164, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                    panda$core$String* $tmp1165 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName1157, $tmp1163);
                                    alias1162 = $tmp1165;
                                }
                            }
                            }
                            else {
                            {
                                {
                                    alias1162 = fullName1157;
                                }
                            }
                            }
                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1132, ((panda$collections$Key*) alias1162), ((panda$core$Object*) fullName1157));
                        }
                        }
                        else {
                        panda$core$Bit $tmp1166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$562_211152->$rawValue, ((panda$core$Int64) { 9 }));
                        if ($tmp1166.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp1168 = ((org$pandalanguage$pandac$Position*) ((char*) $match$562_211152->$data + 0));
                            position1167 = *$tmp1168;
                            org$pandalanguage$pandac$ASTNode** $tmp1170 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$562_211152->$data + 16));
                            dc1169 = *$tmp1170;
                            panda$collections$ImmutableArray** $tmp1172 = ((panda$collections$ImmutableArray**) ((char*) $match$562_211152->$data + 24));
                            annotations1171 = *$tmp1172;
                            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1174 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$562_211152->$data + 32));
                            kind1173 = *$tmp1174;
                            panda$core$String** $tmp1176 = ((panda$core$String**) ((char*) $match$562_211152->$data + 40));
                            name1175 = *$tmp1176;
                            panda$collections$ImmutableArray** $tmp1178 = ((panda$collections$ImmutableArray**) ((char*) $match$562_211152->$data + 48));
                            generics1177 = *$tmp1178;
                            panda$collections$ImmutableArray** $tmp1180 = ((panda$collections$ImmutableArray**) ((char*) $match$562_211152->$data + 56));
                            supertypes1179 = *$tmp1180;
                            panda$collections$ImmutableArray** $tmp1182 = ((panda$collections$ImmutableArray**) ((char*) $match$562_211152->$data + 64));
                            members1181 = *$tmp1182;
                            org$pandalanguage$pandac$ClassDecl* $tmp1184 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1132), currentPackage1130, position1167, dc1169, annotations1171, kind1173, name1175, generics1177, supertypes1179, members1181);
                            cl1183 = $tmp1184;
                            if (((panda$core$Bit) { cl1183 != NULL }).value) {
                            {
                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl1183, result1127);
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
                    }
                }
                goto $l1140;
                $l1141:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1139));
            }
            return ((panda$collections$ListView*) result1127);
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

