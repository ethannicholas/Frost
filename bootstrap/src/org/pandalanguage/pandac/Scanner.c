#include "org/pandalanguage/pandac/Scanner.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
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
typedef panda$collections$Iterator* (*$fn602)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn608)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn614)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn729)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn735)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn741)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn751)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn757)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn763)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn880)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn886)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn892)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn908)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn919)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn925)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn931)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn952)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn958)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn964)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn984)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn990)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn996)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1054)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1060)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1066)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1077)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1083)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1089)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1104)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1110)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1116)(panda$collections$Iterator*);

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
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x6f\x6e\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x27", 30, -1250916154819313721, NULL };
static panda$core$String $s648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x68\x61\x76\x65\x20\x61\x20\x62\x6f\x64\x79", 16, -7652461387112275530, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s808 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s911 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s978 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s1015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1022 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = NULL;
    {
        self->compiler = p_compiler;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
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
    panda$collections$Iterator* Iter$30$1736;
    org$pandalanguage$pandac$ASTNode* arg48;
    org$pandalanguage$pandac$Type* subtype53;
    panda$core$Char8 $tmp56;
    org$pandalanguage$pandac$Type* tmp257;
    {
        $match$18_92 = p_type;
        panda$core$Bit $tmp3 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$18_92->$rawValue, ((panda$core$Int64) { 36 }));
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
        panda$core$Bit $tmp9 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$18_92->$rawValue, ((panda$core$Int64) { 26 }));
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
                Iter$30$1736 = $tmp40;
                $l41:;
                ITable* $tmp43 = Iter$30$1736->$class->itable;
                while ($tmp43->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp43 = $tmp43->next;
                }
                $fn45 $tmp44 = $tmp43->methods[0];
                panda$core$Bit $tmp46 = $tmp44(Iter$30$1736);
                panda$core$Bit $tmp47 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp46);
                if (!$tmp47.value) goto $l42;
                {
                    ITable* $tmp49 = Iter$30$1736->$class->itable;
                    while ($tmp49->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp49 = $tmp49->next;
                    }
                    $fn51 $tmp50 = $tmp49->methods[1];
                    panda$core$Object* $tmp52 = $tmp50(Iter$30$1736);
                    arg48 = ((org$pandalanguage$pandac$ASTNode*) $tmp52);
                    org$pandalanguage$pandac$Type* $tmp54 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, arg48);
                    subtype53 = $tmp54;
                    panda$collections$Array$add$panda$collections$Array$T(subtypes29, ((panda$core$Object*) subtype53));
                    panda$core$MutableString$append$panda$core$String(name31, separator34);
                    panda$core$MutableString$append$panda$core$String(name31, ((org$pandalanguage$pandac$Symbol*) subtype53)->name);
                    {
                        separator34 = &$s55;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator34));
                    }
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg48));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtype53));
                    }
                }
                goto $l41;
                $l42:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$30$1736));
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
    panda$collections$Iterator* Iter$46$961;
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
        Iter$46$961 = $tmp65;
        $l66:;
        ITable* $tmp68 = Iter$46$961->$class->itable;
        while ($tmp68->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp68 = $tmp68->next;
        }
        $fn70 $tmp69 = $tmp68->methods[0];
        panda$core$Bit $tmp71 = $tmp69(Iter$46$961);
        panda$core$Bit $tmp72 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp71);
        if (!$tmp72.value) goto $l67;
        {
            ITable* $tmp74 = Iter$46$961->$class->itable;
            while ($tmp74->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp74 = $tmp74->next;
            }
            $fn76 $tmp75 = $tmp74->methods[1];
            panda$core$Object* $tmp77 = $tmp75(Iter$46$961);
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c73));
        }
        goto $l66;
        $l67:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$46$961));
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
    panda$collections$Iterator* Iter$101$17161;
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment134));
        }
    }
    }
    else {
    {
        {
            $match$79_13135 = p_rawDoccomment;
            panda$core$Bit $tmp136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$79_13135->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp136.value) {
            {
                org$pandalanguage$pandac$Position* $tmp138 = ((org$pandalanguage$pandac$Position*) ((char*) $match$79_13135->$data + 0));
                position137 = *$tmp138;
                panda$core$String** $tmp140 = ((panda$core$String**) ((char*) $match$79_13135->$data + 16));
                text139 = *$tmp140;
                {
                    doccomment134 = text139;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment134));
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
        panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$88_9144->$rawValue, ((panda$core$Int64) { 39 }));
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
                Iter$101$17161 = $tmp165;
                $l166:;
                ITable* $tmp168 = Iter$101$17161->$class->itable;
                while ($tmp168->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp168 = $tmp168->next;
                }
                $fn170 $tmp169 = $tmp168->methods[0];
                panda$core$Bit $tmp171 = $tmp169(Iter$101$17161);
                panda$core$Bit $tmp172 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp171);
                if (!$tmp172.value) goto $l167;
                {
                    ITable* $tmp174 = Iter$101$17161->$class->itable;
                    while ($tmp174->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp174 = $tmp174->next;
                    }
                    $fn176 $tmp175 = $tmp174->methods[1];
                    panda$core$Object* $tmp177 = $tmp175(Iter$101$17161);
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
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name186));
                                    }
                                    {
                                        org$pandalanguage$pandac$Type* $tmp192 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                        type187 = $tmp192;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type187));
                                    }
                                }
                                }
                                else {
                                panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$106_29188->$rawValue, ((panda$core$Int64) { 37 }));
                                if ($tmp193.value) {
                                {
                                    panda$core$String** $tmp195 = ((panda$core$String**) ((char*) $match$106_29188->$data + 16));
                                    id194 = *$tmp195;
                                    org$pandalanguage$pandac$ASTNode** $tmp197 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$106_29188->$data + 24));
                                    idType196 = *$tmp197;
                                    {
                                        name186 = id194;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name186));
                                    }
                                    {
                                        org$pandalanguage$pandac$Type* $tmp198 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType196);
                                        type187 = $tmp198;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type187));
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl173));
                }
                goto $l166;
                $l167:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$101$17161));
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
    panda$collections$Iterator* Iter$140$17220;
    org$pandalanguage$pandac$ASTNode* s232;
    org$pandalanguage$pandac$ASTNode* target241;
    panda$collections$ImmutableArray* args243;
    panda$core$Int64 result245;
    panda$collections$Iterator* Iter$148$17247;
    org$pandalanguage$pandac$ASTNode* a259;
    org$pandalanguage$pandac$ASTNode* base267;
    org$pandalanguage$pandac$ASTNode* value272;
    panda$collections$ImmutableArray* statements276;
    org$pandalanguage$pandac$ASTNode* test278;
    panda$core$Int64 result280;
    panda$collections$Iterator* Iter$163$17282;
    org$pandalanguage$pandac$ASTNode* s294;
    org$pandalanguage$pandac$ASTNode* base302;
    org$pandalanguage$pandac$ASTNode* list306;
    panda$collections$ImmutableArray* statements308;
    panda$core$Int64 result310;
    panda$collections$Iterator* Iter$171$17312;
    org$pandalanguage$pandac$ASTNode* s324;
    org$pandalanguage$pandac$ASTNode* test334;
    panda$collections$ImmutableArray* ifTrue336;
    org$pandalanguage$pandac$ASTNode* ifFalse338;
    panda$core$Int64 result340;
    panda$collections$Iterator* Iter$181$17342;
    org$pandalanguage$pandac$ASTNode* s354;
    panda$collections$ImmutableArray* statements365;
    panda$core$Int64 result367;
    panda$collections$Iterator* Iter$192$17368;
    org$pandalanguage$pandac$ASTNode* s380;
    org$pandalanguage$pandac$ASTNode* value388;
    panda$collections$ImmutableArray* whens390;
    panda$collections$ImmutableArray* other392;
    panda$core$Int64 result394;
    panda$collections$Iterator* Iter$198$17396;
    org$pandalanguage$pandac$ASTNode* w408;
    panda$collections$Iterator* Iter$202$21415;
    org$pandalanguage$pandac$ASTNode* s427;
    org$pandalanguage$pandac$ASTNode* base437;
    org$pandalanguage$pandac$ASTNode* value444;
    panda$collections$ImmutableArray* decls452;
    panda$core$Int64 result454;
    panda$collections$Iterator* Iter$232$17455;
    org$pandalanguage$pandac$ASTNode* decl467;
    panda$collections$ImmutableArray* tests475;
    panda$collections$ImmutableArray* statements477;
    panda$core$Int64 result479;
    panda$collections$Iterator* Iter$238$17480;
    org$pandalanguage$pandac$ASTNode* test492;
    panda$collections$Iterator* Iter$241$17499;
    org$pandalanguage$pandac$ASTNode* s511;
    org$pandalanguage$pandac$ASTNode* test519;
    panda$collections$ImmutableArray* statements521;
    panda$core$Int64 result523;
    panda$collections$Iterator* Iter$247$17525;
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
                Iter$140$17220 = $tmp224;
                $l225:;
                ITable* $tmp227 = Iter$140$17220->$class->itable;
                while ($tmp227->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp227 = $tmp227->next;
                }
                $fn229 $tmp228 = $tmp227->methods[0];
                panda$core$Bit $tmp230 = $tmp228(Iter$140$17220);
                panda$core$Bit $tmp231 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp230);
                if (!$tmp231.value) goto $l226;
                {
                    ITable* $tmp233 = Iter$140$17220->$class->itable;
                    while ($tmp233->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp233 = $tmp233->next;
                    }
                    $fn235 $tmp234 = $tmp233->methods[1];
                    panda$core$Object* $tmp236 = $tmp234(Iter$140$17220);
                    s232 = ((org$pandalanguage$pandac$ASTNode*) $tmp236);
                    panda$core$Int64 $tmp237 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s232);
                    panda$core$Int64 $tmp238 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result219, $tmp237);
                    result219 = $tmp238;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s232));
                }
                goto $l225;
                $l226:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$140$17220));
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
                Iter$148$17247 = $tmp251;
                $l252:;
                ITable* $tmp254 = Iter$148$17247->$class->itable;
                while ($tmp254->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp254 = $tmp254->next;
                }
                $fn256 $tmp255 = $tmp254->methods[0];
                panda$core$Bit $tmp257 = $tmp255(Iter$148$17247);
                panda$core$Bit $tmp258 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp257);
                if (!$tmp258.value) goto $l253;
                {
                    ITable* $tmp260 = Iter$148$17247->$class->itable;
                    while ($tmp260->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp260 = $tmp260->next;
                    }
                    $fn262 $tmp261 = $tmp260->methods[1];
                    panda$core$Object* $tmp263 = $tmp261(Iter$148$17247);
                    a259 = ((org$pandalanguage$pandac$ASTNode*) $tmp263);
                    panda$core$Int64 $tmp264 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a259);
                    panda$core$Int64 $tmp265 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result245, $tmp264);
                    result245 = $tmp265;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a259));
                }
                goto $l252;
                $l253:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$148$17247));
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
                Iter$163$17282 = $tmp286;
                $l287:;
                ITable* $tmp289 = Iter$163$17282->$class->itable;
                while ($tmp289->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp289 = $tmp289->next;
                }
                $fn291 $tmp290 = $tmp289->methods[0];
                panda$core$Bit $tmp292 = $tmp290(Iter$163$17282);
                panda$core$Bit $tmp293 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp292);
                if (!$tmp293.value) goto $l288;
                {
                    ITable* $tmp295 = Iter$163$17282->$class->itable;
                    while ($tmp295->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp295 = $tmp295->next;
                    }
                    $fn297 $tmp296 = $tmp295->methods[1];
                    panda$core$Object* $tmp298 = $tmp296(Iter$163$17282);
                    s294 = ((org$pandalanguage$pandac$ASTNode*) $tmp298);
                    panda$core$Int64 $tmp299 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s294);
                    panda$core$Int64 $tmp300 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result280, $tmp299);
                    result280 = $tmp300;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s294));
                }
                goto $l287;
                $l288:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$163$17282));
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
                Iter$171$17312 = $tmp316;
                $l317:;
                ITable* $tmp319 = Iter$171$17312->$class->itable;
                while ($tmp319->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp319 = $tmp319->next;
                }
                $fn321 $tmp320 = $tmp319->methods[0];
                panda$core$Bit $tmp322 = $tmp320(Iter$171$17312);
                panda$core$Bit $tmp323 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp322);
                if (!$tmp323.value) goto $l318;
                {
                    ITable* $tmp325 = Iter$171$17312->$class->itable;
                    while ($tmp325->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp325 = $tmp325->next;
                    }
                    $fn327 $tmp326 = $tmp325->methods[1];
                    panda$core$Object* $tmp328 = $tmp326(Iter$171$17312);
                    s324 = ((org$pandalanguage$pandac$ASTNode*) $tmp328);
                    panda$core$Int64 $tmp329 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s324);
                    panda$core$Int64 $tmp330 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result310, $tmp329);
                    result310 = $tmp330;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s324));
                }
                goto $l317;
                $l318:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$171$17312));
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
                Iter$181$17342 = $tmp346;
                $l347:;
                ITable* $tmp349 = Iter$181$17342->$class->itable;
                while ($tmp349->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp349 = $tmp349->next;
                }
                $fn351 $tmp350 = $tmp349->methods[0];
                panda$core$Bit $tmp352 = $tmp350(Iter$181$17342);
                panda$core$Bit $tmp353 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp352);
                if (!$tmp353.value) goto $l348;
                {
                    ITable* $tmp355 = Iter$181$17342->$class->itable;
                    while ($tmp355->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp355 = $tmp355->next;
                    }
                    $fn357 $tmp356 = $tmp355->methods[1];
                    panda$core$Object* $tmp358 = $tmp356(Iter$181$17342);
                    s354 = ((org$pandalanguage$pandac$ASTNode*) $tmp358);
                    panda$core$Int64 $tmp359 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s354);
                    panda$core$Int64 $tmp360 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result340, $tmp359);
                    result340 = $tmp360;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s354));
                }
                goto $l347;
                $l348:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$181$17342));
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
        panda$core$Bit $tmp364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 22 }));
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
                Iter$192$17368 = $tmp372;
                $l373:;
                ITable* $tmp375 = Iter$192$17368->$class->itable;
                while ($tmp375->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp375 = $tmp375->next;
                }
                $fn377 $tmp376 = $tmp375->methods[0];
                panda$core$Bit $tmp378 = $tmp376(Iter$192$17368);
                panda$core$Bit $tmp379 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp378);
                if (!$tmp379.value) goto $l374;
                {
                    ITable* $tmp381 = Iter$192$17368->$class->itable;
                    while ($tmp381->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp381 = $tmp381->next;
                    }
                    $fn383 $tmp382 = $tmp381->methods[1];
                    panda$core$Object* $tmp384 = $tmp382(Iter$192$17368);
                    s380 = ((org$pandalanguage$pandac$ASTNode*) $tmp384);
                    panda$core$Int64 $tmp385 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s380);
                    panda$core$Int64 $tmp386 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result367, $tmp385);
                    result367 = $tmp386;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s380));
                }
                goto $l373;
                $l374:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$192$17368));
            }
            return result367;
        }
        }
        else {
        panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 23 }));
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
                Iter$198$17396 = $tmp400;
                $l401:;
                ITable* $tmp403 = Iter$198$17396->$class->itable;
                while ($tmp403->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp403 = $tmp403->next;
                }
                $fn405 $tmp404 = $tmp403->methods[0];
                panda$core$Bit $tmp406 = $tmp404(Iter$198$17396);
                panda$core$Bit $tmp407 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp406);
                if (!$tmp407.value) goto $l402;
                {
                    ITable* $tmp409 = Iter$198$17396->$class->itable;
                    while ($tmp409->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp409 = $tmp409->next;
                    }
                    $fn411 $tmp410 = $tmp409->methods[1];
                    panda$core$Object* $tmp412 = $tmp410(Iter$198$17396);
                    w408 = ((org$pandalanguage$pandac$ASTNode*) $tmp412);
                    panda$core$Int64 $tmp413 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w408);
                    panda$core$Int64 $tmp414 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result394, $tmp413);
                    result394 = $tmp414;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w408));
                }
                goto $l401;
                $l402:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$198$17396));
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
                    Iter$202$21415 = $tmp419;
                    $l420:;
                    ITable* $tmp422 = Iter$202$21415->$class->itable;
                    while ($tmp422->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp422 = $tmp422->next;
                    }
                    $fn424 $tmp423 = $tmp422->methods[0];
                    panda$core$Bit $tmp425 = $tmp423(Iter$202$21415);
                    panda$core$Bit $tmp426 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp425);
                    if (!$tmp426.value) goto $l421;
                    {
                        ITable* $tmp428 = Iter$202$21415->$class->itable;
                        while ($tmp428->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp428 = $tmp428->next;
                        }
                        $fn430 $tmp429 = $tmp428->methods[1];
                        panda$core$Object* $tmp431 = $tmp429(Iter$202$21415);
                        s427 = ((org$pandalanguage$pandac$ASTNode*) $tmp431);
                        panda$core$Int64 $tmp432 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s427);
                        panda$core$Int64 $tmp433 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result394, $tmp432);
                        result394 = $tmp433;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s427));
                    }
                    goto $l420;
                    $l421:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$202$21415));
                }
            }
            }
            return result394;
        }
        }
        else {
        panda$core$Bit $tmp434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp434.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp435.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 29 }));
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
        panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp441.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp442.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 32 }));
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
        panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp447.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp448.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp449.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp450.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 39 }));
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
                Iter$232$17455 = $tmp459;
                $l460:;
                ITable* $tmp462 = Iter$232$17455->$class->itable;
                while ($tmp462->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp462 = $tmp462->next;
                }
                $fn464 $tmp463 = $tmp462->methods[0];
                panda$core$Bit $tmp465 = $tmp463(Iter$232$17455);
                panda$core$Bit $tmp466 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp465);
                if (!$tmp466.value) goto $l461;
                {
                    ITable* $tmp468 = Iter$232$17455->$class->itable;
                    while ($tmp468->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp468 = $tmp468->next;
                    }
                    $fn470 $tmp469 = $tmp468->methods[1];
                    panda$core$Object* $tmp471 = $tmp469(Iter$232$17455);
                    decl467 = ((org$pandalanguage$pandac$ASTNode*) $tmp471);
                    panda$core$Int64 $tmp472 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl467);
                    panda$core$Int64 $tmp473 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result454, $tmp472);
                    result454 = $tmp473;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl467));
                }
                goto $l460;
                $l461:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$232$17455));
            }
            return result454;
        }
        }
        else {
        panda$core$Bit $tmp474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 40 }));
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
                Iter$238$17480 = $tmp484;
                $l485:;
                ITable* $tmp487 = Iter$238$17480->$class->itable;
                while ($tmp487->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp487 = $tmp487->next;
                }
                $fn489 $tmp488 = $tmp487->methods[0];
                panda$core$Bit $tmp490 = $tmp488(Iter$238$17480);
                panda$core$Bit $tmp491 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp490);
                if (!$tmp491.value) goto $l486;
                {
                    ITable* $tmp493 = Iter$238$17480->$class->itable;
                    while ($tmp493->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp493 = $tmp493->next;
                    }
                    $fn495 $tmp494 = $tmp493->methods[1];
                    panda$core$Object* $tmp496 = $tmp494(Iter$238$17480);
                    test492 = ((org$pandalanguage$pandac$ASTNode*) $tmp496);
                    panda$core$Int64 $tmp497 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test492);
                    panda$core$Int64 $tmp498 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result479, $tmp497);
                    result479 = $tmp498;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test492));
                }
                goto $l485;
                $l486:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$238$17480));
            }
            {
                ITable* $tmp500 = ((panda$collections$Iterable*) statements477)->$class->itable;
                while ($tmp500->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp500 = $tmp500->next;
                }
                $fn502 $tmp501 = $tmp500->methods[0];
                panda$collections$Iterator* $tmp503 = $tmp501(((panda$collections$Iterable*) statements477));
                Iter$241$17499 = $tmp503;
                $l504:;
                ITable* $tmp506 = Iter$241$17499->$class->itable;
                while ($tmp506->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp506 = $tmp506->next;
                }
                $fn508 $tmp507 = $tmp506->methods[0];
                panda$core$Bit $tmp509 = $tmp507(Iter$241$17499);
                panda$core$Bit $tmp510 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp509);
                if (!$tmp510.value) goto $l505;
                {
                    ITable* $tmp512 = Iter$241$17499->$class->itable;
                    while ($tmp512->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp512 = $tmp512->next;
                    }
                    $fn514 $tmp513 = $tmp512->methods[1];
                    panda$core$Object* $tmp515 = $tmp513(Iter$241$17499);
                    s511 = ((org$pandalanguage$pandac$ASTNode*) $tmp515);
                    panda$core$Int64 $tmp516 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s511);
                    panda$core$Int64 $tmp517 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result479, $tmp516);
                    result479 = $tmp517;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s511));
                }
                goto $l504;
                $l505:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$241$17499));
            }
            return result479;
        }
        }
        else {
        panda$core$Bit $tmp518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9201->$rawValue, ((panda$core$Int64) { 41 }));
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
                Iter$247$17525 = $tmp529;
                $l530:;
                ITable* $tmp532 = Iter$247$17525->$class->itable;
                while ($tmp532->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp532 = $tmp532->next;
                }
                $fn534 $tmp533 = $tmp532->methods[0];
                panda$core$Bit $tmp535 = $tmp533(Iter$247$17525);
                panda$core$Bit $tmp536 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp535);
                if (!$tmp536.value) goto $l531;
                {
                    ITable* $tmp538 = Iter$247$17525->$class->itable;
                    while ($tmp538->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp538 = $tmp538->next;
                    }
                    $fn540 $tmp539 = $tmp538->methods[1];
                    panda$core$Object* $tmp541 = $tmp539(Iter$247$17525);
                    s537 = ((org$pandalanguage$pandac$ASTNode*) $tmp541);
                    panda$core$Int64 $tmp542 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s537);
                    panda$core$Int64 $tmp543 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result523, $tmp542);
                    result523 = $tmp543;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s537));
                }
                goto $l530;
                $l531:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$247$17525));
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
    panda$collections$Iterator* Iter$260$13555;
    org$pandalanguage$pandac$ASTNode* s567;
    panda$core$Bit tmp3575;
    panda$core$Bit tmp4576;
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
            Iter$260$13555 = $tmp559;
            $l560:;
            ITable* $tmp562 = Iter$260$13555->$class->itable;
            while ($tmp562->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp562 = $tmp562->next;
            }
            $fn564 $tmp563 = $tmp562->methods[0];
            panda$core$Bit $tmp565 = $tmp563(Iter$260$13555);
            panda$core$Bit $tmp566 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp565);
            if (!$tmp566.value) goto $l561;
            {
                ITable* $tmp568 = Iter$260$13555->$class->itable;
                while ($tmp568->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp568 = $tmp568->next;
                }
                $fn570 $tmp569 = $tmp568->methods[1];
                panda$core$Object* $tmp571 = $tmp569(Iter$260$13555);
                s567 = ((org$pandalanguage$pandac$ASTNode*) $tmp571);
                panda$core$Int64 $tmp572 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s567);
                panda$core$Int64 $tmp573 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c554, $tmp572);
                c554 = $tmp573;
                panda$core$Bit $tmp574 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c554, ((panda$core$Int64) { 10 }));
                if ($tmp574.value) {
                {
                    {
                        tmp3575 = ((panda$core$Bit) { false });
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s567));
                        {
                            tmp4576 = tmp3575;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$260$13555));
                            return tmp4576;
                        }
                    }
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s567));
            }
            goto $l560;
            $l561:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$260$13555));
        }
        return ((panda$core$Bit) { true });
    }
    }
    return ((panda$core$Bit) { false });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment577;
    org$pandalanguage$pandac$ASTNode* $match$281_13578;
    org$pandalanguage$pandac$Position position580;
    panda$core$String* text582;
    org$pandalanguage$pandac$Annotations* annotations584;
    panda$collections$Array* parameters597;
    panda$collections$Iterator* Iter$293$9599;
    org$pandalanguage$pandac$ASTNode* p611;
    org$pandalanguage$pandac$ASTNode* $match$294_13616;
    panda$core$String* name618;
    org$pandalanguage$pandac$ASTNode* type620;
    org$pandalanguage$pandac$Type* returnType624;
    org$pandalanguage$pandac$MethodDecl* tmp5650;
    memset(&doccomment577, 0, sizeof(doccomment577));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment577 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment577));
        }
    }
    }
    else {
    {
        {
            $match$281_13578 = p_rawDoccomment;
            panda$core$Bit $tmp579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$281_13578->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp579.value) {
            {
                org$pandalanguage$pandac$Position* $tmp581 = ((org$pandalanguage$pandac$Position*) ((char*) $match$281_13578->$data + 0));
                position580 = *$tmp581;
                panda$core$String** $tmp583 = ((panda$core$String**) ((char*) $match$281_13578->$data + 16));
                text582 = *$tmp583;
                {
                    doccomment577 = text582;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment577));
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
    org$pandalanguage$pandac$Annotations* $tmp585 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations584 = $tmp585;
    panda$core$Bit $tmp588 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp587 = $tmp588.value;
    if (!$tmp587) goto $l589;
    panda$core$Bit $tmp590 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
    $tmp587 = $tmp590.value;
    $l589:;
    panda$core$Bit $tmp591 = { $tmp587 };
    bool $tmp586 = $tmp591.value;
    if ($tmp586) goto $l592;
    panda$core$Bit $tmp593 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations584);
    $tmp586 = $tmp593.value;
    $l592:;
    panda$core$Bit $tmp594 = { $tmp586 };
    if ($tmp594.value) {
    {
        panda$core$Int64 $tmp595 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp596 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations584->flags, $tmp595);
        annotations584->flags = $tmp596;
    }
    }
    panda$collections$Array* $tmp598 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp598);
    parameters597 = $tmp598;
    {
        ITable* $tmp600 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
        while ($tmp600->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp600 = $tmp600->next;
        }
        $fn602 $tmp601 = $tmp600->methods[0];
        panda$collections$Iterator* $tmp603 = $tmp601(((panda$collections$Iterable*) p_rawParameters));
        Iter$293$9599 = $tmp603;
        $l604:;
        ITable* $tmp606 = Iter$293$9599->$class->itable;
        while ($tmp606->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp606 = $tmp606->next;
        }
        $fn608 $tmp607 = $tmp606->methods[0];
        panda$core$Bit $tmp609 = $tmp607(Iter$293$9599);
        panda$core$Bit $tmp610 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp609);
        if (!$tmp610.value) goto $l605;
        {
            ITable* $tmp612 = Iter$293$9599->$class->itable;
            while ($tmp612->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp612 = $tmp612->next;
            }
            $fn614 $tmp613 = $tmp612->methods[1];
            panda$core$Object* $tmp615 = $tmp613(Iter$293$9599);
            p611 = ((org$pandalanguage$pandac$ASTNode*) $tmp615);
            {
                $match$294_13616 = p611;
                panda$core$Bit $tmp617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$294_13616->$rawValue, ((panda$core$Int64) { 28 }));
                if ($tmp617.value) {
                {
                    panda$core$String** $tmp619 = ((panda$core$String**) ((char*) $match$294_13616->$data + 16));
                    name618 = *$tmp619;
                    org$pandalanguage$pandac$ASTNode** $tmp621 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$294_13616->$data + 24));
                    type620 = *$tmp621;
                    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp622 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                    org$pandalanguage$pandac$Type* $tmp623 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type620);
                    org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp622, name618, $tmp623);
                    panda$collections$Array$add$panda$collections$Array$T(parameters597, ((panda$core$Object*) $tmp622));
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p611));
        }
        goto $l604;
        $l605:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$293$9599));
    }
    memset(&returnType624, 0, sizeof(returnType624));
    if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp625 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
            returnType624 = $tmp625;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType624));
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp626 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            returnType624 = $tmp626;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType624));
        }
    }
    }
    panda$core$Bit $tmp628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
    bool $tmp627 = $tmp628.value;
    if (!$tmp627) goto $l629;
    org$pandalanguage$pandac$Type* $tmp630 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp631 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType624, $tmp630);
    $tmp627 = $tmp631.value;
    $l629:;
    panda$core$Bit $tmp632 = { $tmp627 };
    if ($tmp632.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s633);
    }
    }
    bool $tmp634 = ((panda$core$Bit) { p_statements != NULL }).value;
    if (!$tmp634) goto $l635;
    panda$core$Bit $tmp636 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations584, p_statements);
    $tmp634 = $tmp636.value;
    $l635:;
    panda$core$Bit $tmp637 = { $tmp634 };
    if ($tmp637.value) {
    {
        panda$core$Int64 $tmp638 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp639 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations584->flags, $tmp638);
        annotations584->flags = $tmp639;
    }
    }
    if (((panda$core$Bit) { p_statements == NULL }).value) {
    {
        panda$core$Bit $tmp640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp640.value) {
        {
            panda$core$Int64 $tmp641 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
            panda$core$Int64 $tmp642 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations584->flags, $tmp641);
            annotations584->flags = $tmp642;
        }
        }
        else {
        panda$core$Int64 $tmp643 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
        panda$core$Int64 $tmp644 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations584->flags, $tmp643);
        panda$core$Bit $tmp645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp644, ((panda$core$Int64) { 0 }));
        if ($tmp645.value) {
        {
            panda$core$String* $tmp647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s646, p_name);
            panda$core$String* $tmp649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp647, &$s648);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, $tmp649);
        }
        }
        }
    }
    }
    {
        org$pandalanguage$pandac$MethodDecl* $tmp651 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp651, p_owner, p_position, doccomment577, annotations584, p_kind, p_name, parameters597, returnType624, p_statements);
        tmp5650 = $tmp651;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations584));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters597));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType624));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment577));
        }
        return tmp5650;
    }
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$327_9652;
    org$pandalanguage$pandac$Position position654;
    org$pandalanguage$pandac$ASTNode* dc656;
    panda$collections$ImmutableArray* annotations658;
    org$pandalanguage$pandac$ASTNode* varDecl660;
    org$pandalanguage$pandac$Position position663;
    org$pandalanguage$pandac$ASTNode* dc665;
    panda$collections$ImmutableArray* annotations667;
    org$pandalanguage$pandac$MethodDecl$Kind kind669;
    panda$core$String* name671;
    panda$collections$ImmutableArray* parameters673;
    org$pandalanguage$pandac$ASTNode* rawReturnType675;
    panda$collections$ImmutableArray* statements677;
    org$pandalanguage$pandac$MethodDecl* m679;
    org$pandalanguage$pandac$Position position682;
    org$pandalanguage$pandac$ASTNode* dc684;
    panda$collections$ImmutableArray* annotations686;
    org$pandalanguage$pandac$ClassDecl$Kind kind688;
    panda$core$String* name690;
    panda$collections$ImmutableArray* generics692;
    panda$collections$ImmutableArray* supertypes694;
    panda$collections$ImmutableArray* members696;
    org$pandalanguage$pandac$ClassDecl* inner698;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp703;
    org$pandalanguage$pandac$Position position709;
    org$pandalanguage$pandac$ASTNode* dc711;
    panda$core$String* name713;
    panda$collections$ImmutableArray* fields715;
    {
        $match$327_9652 = p_node;
        panda$core$Bit $tmp653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9652->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp653.value) {
        {
            org$pandalanguage$pandac$Position* $tmp655 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9652->$data + 0));
            position654 = *$tmp655;
            org$pandalanguage$pandac$ASTNode** $tmp657 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9652->$data + 16));
            dc656 = *$tmp657;
            panda$collections$ImmutableArray** $tmp659 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9652->$data + 24));
            annotations658 = *$tmp659;
            org$pandalanguage$pandac$ASTNode** $tmp661 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9652->$data + 32));
            varDecl660 = *$tmp661;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position654, dc656, annotations658, varDecl660);
        }
        }
        else {
        panda$core$Bit $tmp662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9652->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp662.value) {
        {
            org$pandalanguage$pandac$Position* $tmp664 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9652->$data + 0));
            position663 = *$tmp664;
            org$pandalanguage$pandac$ASTNode** $tmp666 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9652->$data + 16));
            dc665 = *$tmp666;
            panda$collections$ImmutableArray** $tmp668 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9652->$data + 24));
            annotations667 = *$tmp668;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp670 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$327_9652->$data + 32));
            kind669 = *$tmp670;
            panda$core$String** $tmp672 = ((panda$core$String**) ((char*) $match$327_9652->$data + 40));
            name671 = *$tmp672;
            panda$collections$ImmutableArray** $tmp674 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9652->$data + 48));
            parameters673 = *$tmp674;
            org$pandalanguage$pandac$ASTNode** $tmp676 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9652->$data + 56));
            rawReturnType675 = *$tmp676;
            panda$collections$ImmutableArray** $tmp678 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9652->$data + 64));
            statements677 = *$tmp678;
            org$pandalanguage$pandac$MethodDecl* $tmp680 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position663, dc665, annotations667, kind669, name671, parameters673, rawReturnType675, statements677);
            m679 = $tmp680;
            if (((panda$core$Bit) { m679 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m679));
                panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m679));
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m679));
        }
        }
        else {
        panda$core$Bit $tmp681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9652->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp681.value) {
        {
            org$pandalanguage$pandac$Position* $tmp683 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9652->$data + 0));
            position682 = *$tmp683;
            org$pandalanguage$pandac$ASTNode** $tmp685 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9652->$data + 16));
            dc684 = *$tmp685;
            panda$collections$ImmutableArray** $tmp687 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9652->$data + 24));
            annotations686 = *$tmp687;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp689 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$327_9652->$data + 32));
            kind688 = *$tmp689;
            panda$core$String** $tmp691 = ((panda$core$String**) ((char*) $match$327_9652->$data + 40));
            name690 = *$tmp691;
            panda$collections$ImmutableArray** $tmp693 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9652->$data + 48));
            generics692 = *$tmp693;
            panda$collections$ImmutableArray** $tmp695 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9652->$data + 56));
            supertypes694 = *$tmp695;
            panda$collections$ImmutableArray** $tmp697 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9652->$data + 64));
            members696 = *$tmp697;
            org$pandalanguage$pandac$ClassDecl* $tmp699 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, ((org$pandalanguage$pandac$Symbol*) p_cl)->name, position682, dc684, annotations686, kind688, name690, generics692, supertypes694, members696);
            inner698 = $tmp699;
            if (((panda$core$Bit) { inner698 != NULL }).value) {
            {
                {
                    inner698->owner = p_cl;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner698->owner));
                }
                panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner698));
                panda$core$String* $tmp701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s700);
                panda$core$Bit $tmp702 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner698)->name, $tmp701);
                PANDA_ASSERT($tmp702.value);
                panda$core$Int64 $tmp704 = panda$core$String$length$R$panda$core$Int64(((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$Int64 $tmp705 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp704, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp703, ((panda$core$Int64$nullable) { $tmp705, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp706 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner698)->name, $tmp703);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner698), $tmp706);
                panda$collections$Array$add$panda$collections$Array$T(inner698->symbolTable->parents, ((panda$core$Object*) p_cl->symbolTable));
                panda$core$String* $tmp707 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner698->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_cl), $tmp707);
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner698));
        }
        }
        else {
        panda$core$Bit $tmp708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9652->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp708.value) {
        {
            org$pandalanguage$pandac$Position* $tmp710 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9652->$data + 0));
            position709 = *$tmp710;
            org$pandalanguage$pandac$ASTNode** $tmp712 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9652->$data + 16));
            dc711 = *$tmp712;
            panda$core$String** $tmp714 = ((panda$core$String**) ((char*) $match$327_9652->$data + 24));
            name713 = *$tmp714;
            panda$collections$ImmutableArray** $tmp716 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9652->$data + 32));
            fields715 = *$tmp716;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position709, dc711, name713, fields715);
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
    panda$core$String* doccomment717;
    org$pandalanguage$pandac$ASTNode* $match$365_13718;
    org$pandalanguage$pandac$Position position720;
    panda$core$String* text722;
    panda$collections$Array* fields724;
    panda$collections$Iterator* Iter$373$9726;
    org$pandalanguage$pandac$ASTNode* t738;
    org$pandalanguage$pandac$ChoiceEntry* entry744;
    panda$core$Bit found747;
    panda$collections$Iterator* Iter$381$16748;
    org$pandalanguage$pandac$MethodDecl* m760;
    panda$core$Range$LTpanda$core$Int64$GT $tmp773;
    panda$collections$Array* parameters799;
    panda$collections$Array* statements804;
    org$pandalanguage$pandac$parser$Token$Kind $tmp809;
    panda$core$Range$LTpanda$core$Int64$GT $tmp812;
    org$pandalanguage$pandac$parser$Token$Kind $tmp837;
    org$pandalanguage$pandac$MethodDecl* synthetic850;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp853;
    memset(&doccomment717, 0, sizeof(doccomment717));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment717 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment717));
        }
    }
    }
    else {
    {
        {
            $match$365_13718 = p_rawDoccomment;
            panda$core$Bit $tmp719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$365_13718->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp719.value) {
            {
                org$pandalanguage$pandac$Position* $tmp721 = ((org$pandalanguage$pandac$Position*) ((char*) $match$365_13718->$data + 0));
                position720 = *$tmp721;
                panda$core$String** $tmp723 = ((panda$core$String**) ((char*) $match$365_13718->$data + 16));
                text722 = *$tmp723;
                {
                    doccomment717 = text722;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment717));
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
    panda$collections$Array* $tmp725 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp725);
    fields724 = $tmp725;
    {
        ITable* $tmp727 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
        while ($tmp727->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp727 = $tmp727->next;
        }
        $fn729 $tmp728 = $tmp727->methods[0];
        panda$collections$Iterator* $tmp730 = $tmp728(((panda$collections$Iterable*) p_rawFields));
        Iter$373$9726 = $tmp730;
        $l731:;
        ITable* $tmp733 = Iter$373$9726->$class->itable;
        while ($tmp733->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp733 = $tmp733->next;
        }
        $fn735 $tmp734 = $tmp733->methods[0];
        panda$core$Bit $tmp736 = $tmp734(Iter$373$9726);
        panda$core$Bit $tmp737 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp736);
        if (!$tmp737.value) goto $l732;
        {
            ITable* $tmp739 = Iter$373$9726->$class->itable;
            while ($tmp739->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp739 = $tmp739->next;
            }
            $fn741 $tmp740 = $tmp739->methods[1];
            panda$core$Object* $tmp742 = $tmp740(Iter$373$9726);
            t738 = ((org$pandalanguage$pandac$ASTNode*) $tmp742);
            org$pandalanguage$pandac$Type* $tmp743 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t738);
            panda$collections$Array$add$panda$collections$Array$T(fields724, ((panda$core$Object*) $tmp743));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t738));
        }
        goto $l731;
        $l732:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$373$9726));
    }
    org$pandalanguage$pandac$ChoiceEntry* $tmp745 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(97, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
    panda$core$Int64 $tmp746 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
    org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp745, p_cl, p_position, p_name, doccomment717, $tmp746, ((panda$collections$ListView*) fields724));
    entry744 = $tmp745;
    panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry744));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry744));
    found747 = ((panda$core$Bit) { false });
    {
        ITable* $tmp749 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp749->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp749 = $tmp749->next;
        }
        $fn751 $tmp750 = $tmp749->methods[0];
        panda$collections$Iterator* $tmp752 = $tmp750(((panda$collections$Iterable*) p_cl->methods));
        Iter$381$16748 = $tmp752;
        $l753:;
        ITable* $tmp755 = Iter$381$16748->$class->itable;
        while ($tmp755->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp755 = $tmp755->next;
        }
        $fn757 $tmp756 = $tmp755->methods[0];
        panda$core$Bit $tmp758 = $tmp756(Iter$381$16748);
        panda$core$Bit $tmp759 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp758);
        if (!$tmp759.value) goto $l754;
        {
            ITable* $tmp761 = Iter$381$16748->$class->itable;
            while ($tmp761->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp761 = $tmp761->next;
            }
            $fn763 $tmp762 = $tmp761->methods[1];
            panda$core$Object* $tmp764 = $tmp762(Iter$381$16748);
            m760 = ((org$pandalanguage$pandac$MethodDecl*) $tmp764);
            panda$core$Bit $tmp765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m760->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp765.value);
            panda$core$Int64 $tmp766 = panda$collections$Array$get_count$R$panda$core$Int64(m760->parameters);
            panda$core$Int64 $tmp767 = panda$collections$Array$get_count$R$panda$core$Int64(fields724);
            panda$core$Int64 $tmp768 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp767, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp769 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp766, $tmp768);
            if ($tmp769.value) {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m760));
                    goto $l753;
                }
            }
            }
            panda$core$Object* $tmp770 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m760->parameters, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp771 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp772 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp770)->type, $tmp771);
            PANDA_ASSERT($tmp772.value);
            panda$core$Int64 $tmp774 = panda$collections$Array$get_count$R$panda$core$Int64(fields724);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp773, ((panda$core$Int64) { 0 }), $tmp774, ((panda$core$Bit) { false }));
            int64_t $tmp776 = $tmp773.min.value;
            panda$core$Int64 i775 = { $tmp776 };
            int64_t $tmp778 = $tmp773.max.value;
            bool $tmp779 = $tmp773.inclusive.value;
            if ($tmp779) goto $l786; else goto $l787;
            $l786:;
            if ($tmp776 <= $tmp778) goto $l780; else goto $l782;
            $l787:;
            if ($tmp776 < $tmp778) goto $l780; else goto $l782;
            $l780:;
            {
                panda$core$Object* $tmp788 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields724, i775);
                panda$core$Int64 $tmp789 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i775, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp790 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m760->parameters, $tmp789);
                panda$core$Bit $tmp791 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp788), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp790)->type);
                if ($tmp791.value) {
                {
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m760));
                        goto $l753;
                    }
                }
                }
            }
            $l783:;
            int64_t $tmp793 = $tmp778 - i775.value;
            if ($tmp779) goto $l794; else goto $l795;
            $l794:;
            if ((uint64_t) $tmp793 >= 1) goto $l792; else goto $l782;
            $l795:;
            if ((uint64_t) $tmp793 > 1) goto $l792; else goto $l782;
            $l792:;
            i775.value += 1;
            goto $l780;
            $l782:;
            {
                entry744->initMethod = m760;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry744->initMethod));
            }
            found747 = ((panda$core$Bit) { true });
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m760));
                goto $l754;
            }
        }
        goto $l753;
        $l754:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$381$16748));
    }
    panda$core$Bit $tmp798 = panda$core$Bit$$NOT$R$panda$core$Bit(found747);
    if ($tmp798.value) {
    {
        panda$collections$Array* $tmp800 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp800);
        parameters799 = $tmp800;
        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp801 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
        org$pandalanguage$pandac$Type* $tmp803 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp801, &$s802, $tmp803);
        panda$collections$Array$add$panda$collections$Array$T(parameters799, ((panda$core$Object*) $tmp801));
        panda$collections$Array* $tmp805 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp805);
        statements804 = $tmp805;
        org$pandalanguage$pandac$ASTNode* $tmp806 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode* $tmp807 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp807, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s808);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp809, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$ASTNode* $tmp810 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp810, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s811);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp806, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp807, $tmp809, $tmp810);
        panda$collections$Array$add$panda$collections$Array$T(statements804, ((panda$core$Object*) $tmp806));
        panda$core$Int64 $tmp813 = panda$collections$Array$get_count$R$panda$core$Int64(fields724);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp812, ((panda$core$Int64) { 0 }), $tmp813, ((panda$core$Bit) { false }));
        int64_t $tmp815 = $tmp812.min.value;
        panda$core$Int64 i814 = { $tmp815 };
        int64_t $tmp817 = $tmp812.max.value;
        bool $tmp818 = $tmp812.inclusive.value;
        if ($tmp818) goto $l825; else goto $l826;
        $l825:;
        if ($tmp815 <= $tmp817) goto $l819; else goto $l821;
        $l826:;
        if ($tmp815 < $tmp817) goto $l819; else goto $l821;
        $l819:;
        {
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp827 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
            panda$core$Int64$wrapper* $tmp829;
            $tmp829 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp829->value = i814;
            panda$core$String* $tmp830 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s828, ((panda$core$Object*) $tmp829));
            panda$core$String* $tmp832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp830, &$s831);
            panda$core$Object* $tmp833 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields724, i814);
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp827, $tmp832, ((org$pandalanguage$pandac$Type*) $tmp833));
            panda$collections$Array$add$panda$collections$Array$T(parameters799, ((panda$core$Object*) $tmp827));
            org$pandalanguage$pandac$ASTNode* $tmp834 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode* $tmp835 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode* $tmp836 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp836, ((panda$core$Int64) { 33 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64($tmp835, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp836, entry744, i814);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp837, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$ASTNode* $tmp838 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$wrapper* $tmp840;
            $tmp840 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp840->value = i814;
            panda$core$String* $tmp841 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s839, ((panda$core$Object*) $tmp840));
            panda$core$String* $tmp843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp841, &$s842);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp838, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp843);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp834, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp835, $tmp837, $tmp838);
            panda$collections$Array$add$panda$collections$Array$T(statements804, ((panda$core$Object*) $tmp834));
        }
        $l822:;
        int64_t $tmp845 = $tmp817 - i814.value;
        if ($tmp818) goto $l846; else goto $l847;
        $l846:;
        if ((uint64_t) $tmp845 >= 1) goto $l844; else goto $l821;
        $l847:;
        if ((uint64_t) $tmp845 > 1) goto $l844; else goto $l821;
        $l844:;
        i814.value += 1;
        goto $l819;
        $l821:;
        org$pandalanguage$pandac$MethodDecl* $tmp851 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp852 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init($tmp852);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp853, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$Type* $tmp855 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp856 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements804);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp851, p_cl, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, NULL, $tmp852, $tmp853, &$s854, parameters799, $tmp855, $tmp856);
        synthetic850 = $tmp851;
        {
            entry744->initMethod = synthetic850;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry744->initMethod));
        }
        panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) synthetic850));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) synthetic850));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters799));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements804));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) synthetic850));
        }
    }
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields724));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry744));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment717));
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName857;
    panda$core$String* doccomment866;
    org$pandalanguage$pandac$ASTNode* $match$440_13867;
    org$pandalanguage$pandac$Position position869;
    panda$core$String* text871;
    org$pandalanguage$pandac$Annotations* annotations873;
    panda$collections$Array* parameters875;
    panda$collections$Iterator* Iter$450$13877;
    org$pandalanguage$pandac$ASTNode* p889;
    panda$core$String* name894;
    org$pandalanguage$pandac$Type* bound895;
    org$pandalanguage$pandac$ASTNode* $match$453_17896;
    panda$core$String* id898;
    panda$core$String* id902;
    org$pandalanguage$pandac$ASTNode* type904;
    panda$collections$Array* supertypes912;
    panda$collections$Iterator* Iter$474$13916;
    org$pandalanguage$pandac$ASTNode* s928;
    org$pandalanguage$pandac$ClassDecl* result934;
    org$pandalanguage$pandac$FieldDecl* rawValue937;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp940;
    org$pandalanguage$pandac$FieldDecl* data943;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp946;
    panda$collections$Iterator* Iter$491$9949;
    org$pandalanguage$pandac$ASTNode* m961;
    org$pandalanguage$pandac$ASTNode* $match$492_13966;
    org$pandalanguage$pandac$Position mPosition968;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind970;
    org$pandalanguage$pandac$ClassDecl$Kind $match$495_25973;
    panda$core$Bit foundInit979;
    panda$core$Bit foundCleanup980;
    panda$collections$Iterator* Iter$510$9981;
    org$pandalanguage$pandac$MethodDecl* m993;
    org$pandalanguage$pandac$MethodDecl* defaultInit1018;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1021;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1040;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1044;
    panda$core$Bit haveFields1050;
    panda$collections$Iterator* Iter$538$131051;
    org$pandalanguage$pandac$ChoiceEntry* e1063;
    org$pandalanguage$pandac$ClassDecl* tmp61073;
    memset(&fullName857, 0, sizeof(fullName857));
    panda$core$Bit $tmp859 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s858);
    if ($tmp859.value) {
    {
        {
            panda$core$String* $tmp860 = panda$core$String$convert$R$panda$core$String(p_contextName);
            panda$core$String* $tmp862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp860, &$s861);
            panda$core$String* $tmp863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp862, p_name);
            panda$core$String* $tmp865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp863, &$s864);
            fullName857 = $tmp865;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName857));
        }
    }
    }
    else {
    {
        {
            fullName857 = p_name;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName857));
        }
    }
    }
    memset(&doccomment866, 0, sizeof(doccomment866));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment866 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment866));
        }
    }
    }
    else {
    {
        {
            $match$440_13867 = p_rawDoccomment;
            panda$core$Bit $tmp868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$440_13867->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp868.value) {
            {
                org$pandalanguage$pandac$Position* $tmp870 = ((org$pandalanguage$pandac$Position*) ((char*) $match$440_13867->$data + 0));
                position869 = *$tmp870;
                panda$core$String** $tmp872 = ((panda$core$String**) ((char*) $match$440_13867->$data + 16));
                text871 = *$tmp872;
                {
                    doccomment866 = text871;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment866));
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
    org$pandalanguage$pandac$Annotations* $tmp874 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations873 = $tmp874;
    panda$collections$Array* $tmp876 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp876);
    parameters875 = $tmp876;
    if (((panda$core$Bit) { p_generics != NULL }).value) {
    {
        {
            ITable* $tmp878 = ((panda$collections$Iterable*) p_generics)->$class->itable;
            while ($tmp878->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp878 = $tmp878->next;
            }
            $fn880 $tmp879 = $tmp878->methods[0];
            panda$collections$Iterator* $tmp881 = $tmp879(((panda$collections$Iterable*) p_generics));
            Iter$450$13877 = $tmp881;
            $l882:;
            ITable* $tmp884 = Iter$450$13877->$class->itable;
            while ($tmp884->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp884 = $tmp884->next;
            }
            $fn886 $tmp885 = $tmp884->methods[0];
            panda$core$Bit $tmp887 = $tmp885(Iter$450$13877);
            panda$core$Bit $tmp888 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp887);
            if (!$tmp888.value) goto $l883;
            {
                ITable* $tmp890 = Iter$450$13877->$class->itable;
                while ($tmp890->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp890 = $tmp890->next;
                }
                $fn892 $tmp891 = $tmp890->methods[1];
                panda$core$Object* $tmp893 = $tmp891(Iter$450$13877);
                p889 = ((org$pandalanguage$pandac$ASTNode*) $tmp893);
                memset(&name894, 0, sizeof(name894));
                memset(&bound895, 0, sizeof(bound895));
                {
                    $match$453_17896 = p889;
                    panda$core$Bit $tmp897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453_17896->$rawValue, ((panda$core$Int64) { 18 }));
                    if ($tmp897.value) {
                    {
                        panda$core$String** $tmp899 = ((panda$core$String**) ((char*) $match$453_17896->$data + 16));
                        id898 = *$tmp899;
                        {
                            name894 = id898;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name894));
                        }
                        {
                            org$pandalanguage$pandac$Type* $tmp900 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                            bound895 = $tmp900;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound895));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453_17896->$rawValue, ((panda$core$Int64) { 37 }));
                    if ($tmp901.value) {
                    {
                        panda$core$String** $tmp903 = ((panda$core$String**) ((char*) $match$453_17896->$data + 16));
                        id902 = *$tmp903;
                        org$pandalanguage$pandac$ASTNode** $tmp905 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$453_17896->$data + 24));
                        type904 = *$tmp905;
                        {
                            name894 = id902;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name894));
                        }
                        {
                            org$pandalanguage$pandac$Type* $tmp906 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type904);
                            bound895 = $tmp906;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound895));
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
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp907 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                org$pandalanguage$pandac$Position $tmp909 = (($fn908) p889->$class->vtable[2])(p889);
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp907, $tmp909, fullName857, name894, bound895);
                panda$collections$Array$add$panda$collections$Array$T(parameters875, ((panda$core$Object*) $tmp907));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound895));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p889));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name894));
                }
            }
            goto $l882;
            $l883:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$450$13877));
        }
        panda$core$Bit $tmp910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp910.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s911);
        }
        }
    }
    }
    panda$collections$Array* $tmp913 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp913);
    supertypes912 = $tmp913;
    if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
    {
        panda$core$Bit $tmp914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp914.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s915);
        }
        }
        {
            ITable* $tmp917 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
            while ($tmp917->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp917 = $tmp917->next;
            }
            $fn919 $tmp918 = $tmp917->methods[0];
            panda$collections$Iterator* $tmp920 = $tmp918(((panda$collections$Iterable*) p_rawSupertypes));
            Iter$474$13916 = $tmp920;
            $l921:;
            ITable* $tmp923 = Iter$474$13916->$class->itable;
            while ($tmp923->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp923 = $tmp923->next;
            }
            $fn925 $tmp924 = $tmp923->methods[0];
            panda$core$Bit $tmp926 = $tmp924(Iter$474$13916);
            panda$core$Bit $tmp927 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp926);
            if (!$tmp927.value) goto $l922;
            {
                ITable* $tmp929 = Iter$474$13916->$class->itable;
                while ($tmp929->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp929 = $tmp929->next;
                }
                $fn931 $tmp930 = $tmp929->methods[1];
                panda$core$Object* $tmp932 = $tmp930(Iter$474$13916);
                s928 = ((org$pandalanguage$pandac$ASTNode*) $tmp932);
                org$pandalanguage$pandac$Type* $tmp933 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s928);
                panda$collections$Array$add$panda$collections$Array$T(supertypes912, ((panda$core$Object*) $tmp933));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s928));
            }
            goto $l921;
            $l922:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$474$13916));
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp935 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(201, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp935, p_source, p_position, p_aliases, doccomment866, annotations873, p_kind, fullName857, ((panda$collections$ListView*) supertypes912), parameters875, self->compiler->root);
    result934 = $tmp935;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result934));
    panda$core$Bit $tmp936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp936.value) {
    {
        org$pandalanguage$pandac$FieldDecl* $tmp938 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp939 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init($tmp939);
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp940, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp942 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp938, result934, ((org$pandalanguage$pandac$Symbol*) result934)->position, NULL, $tmp939, $tmp940, &$s941, $tmp942, NULL);
        rawValue937 = $tmp938;
        panda$collections$Array$add$panda$collections$Array$T(result934->fields, ((panda$core$Object*) rawValue937));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result934->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue937));
        org$pandalanguage$pandac$FieldDecl* $tmp944 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp945 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init($tmp945);
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp946, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp948 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp944, result934, ((org$pandalanguage$pandac$Symbol*) result934)->position, NULL, $tmp945, $tmp946, &$s947, $tmp948, NULL);
        data943 = $tmp944;
        panda$collections$Array$add$panda$collections$Array$T(result934->fields, ((panda$core$Object*) data943));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result934->symbolTable, ((org$pandalanguage$pandac$Symbol*) data943));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue937));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data943));
        }
    }
    }
    {
        ITable* $tmp950 = ((panda$collections$Iterable*) p_members)->$class->itable;
        while ($tmp950->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp950 = $tmp950->next;
        }
        $fn952 $tmp951 = $tmp950->methods[0];
        panda$collections$Iterator* $tmp953 = $tmp951(((panda$collections$Iterable*) p_members));
        Iter$491$9949 = $tmp953;
        $l954:;
        ITable* $tmp956 = Iter$491$9949->$class->itable;
        while ($tmp956->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp956 = $tmp956->next;
        }
        $fn958 $tmp957 = $tmp956->methods[0];
        panda$core$Bit $tmp959 = $tmp957(Iter$491$9949);
        panda$core$Bit $tmp960 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp959);
        if (!$tmp960.value) goto $l955;
        {
            ITable* $tmp962 = Iter$491$9949->$class->itable;
            while ($tmp962->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp962 = $tmp962->next;
            }
            $fn964 $tmp963 = $tmp962->methods[1];
            panda$core$Object* $tmp965 = $tmp963(Iter$491$9949);
            m961 = ((org$pandalanguage$pandac$ASTNode*) $tmp965);
            {
                $match$492_13966 = m961;
                panda$core$Bit $tmp967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$492_13966->$rawValue, ((panda$core$Int64) { 24 }));
                if ($tmp967.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp969 = ((org$pandalanguage$pandac$Position*) ((char*) $match$492_13966->$data + 0));
                    mPosition968 = *$tmp969;
                    org$pandalanguage$pandac$MethodDecl$Kind* $tmp971 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$492_13966->$data + 32));
                    methodKind970 = *$tmp971;
                    panda$core$Bit $tmp972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind970.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp972.value) {
                    {
                        {
                            $match$495_25973 = p_kind;
                            panda$core$Bit $tmp974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_25973.$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp974.value) {
                            {
                            }
                            }
                            else {
                            panda$core$Bit $tmp975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_25973.$rawValue, ((panda$core$Int64) { 1 }));
                            if ($tmp975.value) {
                            {
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, mPosition968, &$s976);
                            }
                            }
                            else {
                            panda$core$Bit $tmp977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_25973.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp977.value) {
                            {
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, mPosition968, &$s978);
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
            org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result934, m961);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m961));
        }
        goto $l954;
        $l955:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$491$9949));
    }
    foundInit979 = ((panda$core$Bit) { false });
    foundCleanup980 = ((panda$core$Bit) { false });
    {
        ITable* $tmp982 = ((panda$collections$Iterable*) result934->methods)->$class->itable;
        while ($tmp982->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp982 = $tmp982->next;
        }
        $fn984 $tmp983 = $tmp982->methods[0];
        panda$collections$Iterator* $tmp985 = $tmp983(((panda$collections$Iterable*) result934->methods));
        Iter$510$9981 = $tmp985;
        $l986:;
        ITable* $tmp988 = Iter$510$9981->$class->itable;
        while ($tmp988->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp988 = $tmp988->next;
        }
        $fn990 $tmp989 = $tmp988->methods[0];
        panda$core$Bit $tmp991 = $tmp989(Iter$510$9981);
        panda$core$Bit $tmp992 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp991);
        if (!$tmp992.value) goto $l987;
        {
            ITable* $tmp994 = Iter$510$9981->$class->itable;
            while ($tmp994->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp994 = $tmp994->next;
            }
            $fn996 $tmp995 = $tmp994->methods[1];
            panda$core$Object* $tmp997 = $tmp995(Iter$510$9981);
            m993 = ((org$pandalanguage$pandac$MethodDecl*) $tmp997);
            panda$core$Bit $tmp998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m993->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp998.value) {
            {
                foundInit979 = ((panda$core$Bit) { true });
            }
            }
            panda$core$Bit $tmp1001 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m993)->name, &$s1000);
            bool $tmp999 = $tmp1001.value;
            if (!$tmp999) goto $l1002;
            panda$core$Int64 $tmp1003 = panda$collections$Array$get_count$R$panda$core$Int64(m993->parameters);
            panda$core$Bit $tmp1004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1003, ((panda$core$Int64) { 0 }));
            $tmp999 = $tmp1004.value;
            $l1002:;
            panda$core$Bit $tmp1005 = { $tmp999 };
            if ($tmp1005.value) {
            {
                foundCleanup980 = ((panda$core$Bit) { true });
                panda$core$Bit $tmp1006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp1006.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s1007);
                }
                }
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m993));
        }
        goto $l986;
        $l987:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$510$9981));
    }
    panda$core$Bit $tmp1010 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit979);
    bool $tmp1009 = $tmp1010.value;
    if (!$tmp1009) goto $l1011;
    panda$core$Bit $tmp1012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
    $tmp1009 = $tmp1012.value;
    $l1011:;
    panda$core$Bit $tmp1013 = { $tmp1009 };
    bool $tmp1008 = $tmp1013.value;
    if (!$tmp1008) goto $l1014;
    panda$core$Bit $tmp1016 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result934)->name, &$s1015);
    $tmp1008 = $tmp1016.value;
    $l1014:;
    panda$core$Bit $tmp1017 = { $tmp1008 };
    if ($tmp1017.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp1019 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp1020 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init($tmp1020);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1021, ((panda$core$Int64) { 2 }));
        panda$collections$Array* $tmp1023 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1023);
        org$pandalanguage$pandac$Type* $tmp1024 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp1025 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp1025);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1019, result934, p_position, NULL, $tmp1020, $tmp1021, &$s1022, $tmp1023, $tmp1024, $tmp1025);
        defaultInit1018 = $tmp1019;
        panda$collections$Array$add$panda$collections$Array$T(result934->methods, ((panda$core$Object*) defaultInit1018));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result934->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1018));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1018));
    }
    }
    panda$core$Bit $tmp1028 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup980);
    bool $tmp1027 = $tmp1028.value;
    if (!$tmp1027) goto $l1029;
    panda$core$Bit $tmp1031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
    bool $tmp1030 = $tmp1031.value;
    if ($tmp1030) goto $l1032;
    panda$core$Bit $tmp1033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    $tmp1030 = $tmp1033.value;
    $l1032:;
    panda$core$Bit $tmp1034 = { $tmp1030 };
    $tmp1027 = $tmp1034.value;
    $l1029:;
    panda$core$Bit $tmp1035 = { $tmp1027 };
    bool $tmp1026 = $tmp1035.value;
    if (!$tmp1026) goto $l1036;
    panda$core$Bit $tmp1038 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result934)->name, &$s1037);
    $tmp1026 = $tmp1038.value;
    $l1036:;
    panda$core$Bit $tmp1039 = { $tmp1026 };
    if ($tmp1039.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp1041 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp1042 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        panda$core$Int64 $tmp1043 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1042, $tmp1043);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1044, ((panda$core$Int64) { 0 }));
        panda$collections$Array* $tmp1046 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1046);
        org$pandalanguage$pandac$Type* $tmp1047 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp1048 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp1048);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1041, result934, p_position, NULL, $tmp1042, $tmp1044, &$s1045, $tmp1046, $tmp1047, $tmp1048);
        defaultCleanup1040 = $tmp1041;
        panda$collections$Array$add$panda$collections$Array$T(result934->methods, ((panda$core$Object*) defaultCleanup1040));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result934->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1040));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1040));
    }
    }
    panda$core$Bit $tmp1049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp1049.value) {
    {
        haveFields1050 = ((panda$core$Bit) { false });
        {
            ITable* $tmp1052 = ((panda$collections$Iterable*) result934->choiceEntries)->$class->itable;
            while ($tmp1052->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1052 = $tmp1052->next;
            }
            $fn1054 $tmp1053 = $tmp1052->methods[0];
            panda$collections$Iterator* $tmp1055 = $tmp1053(((panda$collections$Iterable*) result934->choiceEntries));
            Iter$538$131051 = $tmp1055;
            $l1056:;
            ITable* $tmp1058 = Iter$538$131051->$class->itable;
            while ($tmp1058->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1058 = $tmp1058->next;
            }
            $fn1060 $tmp1059 = $tmp1058->methods[0];
            panda$core$Bit $tmp1061 = $tmp1059(Iter$538$131051);
            panda$core$Bit $tmp1062 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1061);
            if (!$tmp1062.value) goto $l1057;
            {
                ITable* $tmp1064 = Iter$538$131051->$class->itable;
                while ($tmp1064->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1064 = $tmp1064->next;
                }
                $fn1066 $tmp1065 = $tmp1064->methods[1];
                panda$core$Object* $tmp1067 = $tmp1065(Iter$538$131051);
                e1063 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1067);
                panda$core$Int64 $tmp1068 = panda$collections$Array$get_count$R$panda$core$Int64(e1063->fields);
                panda$core$Bit $tmp1069 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1068, ((panda$core$Int64) { 0 }));
                if ($tmp1069.value) {
                {
                    haveFields1050 = ((panda$core$Bit) { true });
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1063));
                        goto $l1057;
                    }
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1063));
            }
            goto $l1056;
            $l1057:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$538$131051));
        }
        panda$core$Bit $tmp1070 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1050);
        if ($tmp1070.value) {
        {
            {
                org$pandalanguage$pandac$Type* $tmp1071 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                result934->rawSuper = $tmp1071;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result934->rawSuper));
            }
        }
        }
    }
    }
    panda$core$Object* $tmp1072 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    {
        tmp61073 = result934;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName857));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result934));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations873));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters875));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes912));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment866));
        }
        return tmp61073;
    }
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$554$91074;
    org$pandalanguage$pandac$ClassDecl* inner1086;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp1075 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp1075->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1075 = $tmp1075->next;
        }
        $fn1077 $tmp1076 = $tmp1075->methods[0];
        panda$collections$Iterator* $tmp1078 = $tmp1076(((panda$collections$Iterable*) p_cl->classes));
        Iter$554$91074 = $tmp1078;
        $l1079:;
        ITable* $tmp1081 = Iter$554$91074->$class->itable;
        while ($tmp1081->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1081 = $tmp1081->next;
        }
        $fn1083 $tmp1082 = $tmp1081->methods[0];
        panda$core$Bit $tmp1084 = $tmp1082(Iter$554$91074);
        panda$core$Bit $tmp1085 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1084);
        if (!$tmp1085.value) goto $l1080;
        {
            ITable* $tmp1087 = Iter$554$91074->$class->itable;
            while ($tmp1087->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1087 = $tmp1087->next;
            }
            $fn1089 $tmp1088 = $tmp1087->methods[1];
            panda$core$Object* $tmp1090 = $tmp1088(Iter$554$91074);
            inner1086 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1090);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1086, p_arr);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1086));
        }
        goto $l1079;
        $l1080:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$554$91074));
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$560_91091;
    panda$collections$ImmutableArray* entries1093;
    panda$collections$Array* result1095;
    panda$core$String* currentPackage1097;
    panda$collections$HashMap* aliases1099;
    panda$collections$Iterator* Iter$565$171101;
    org$pandalanguage$pandac$ASTNode* e1113;
    org$pandalanguage$pandac$ASTNode* $match$566_211118;
    panda$core$String* name1120;
    panda$core$String* fullName1123;
    panda$core$String$Index$nullable idx1125;
    panda$core$String* alias1128;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1129;
    org$pandalanguage$pandac$Position position1133;
    org$pandalanguage$pandac$ASTNode* dc1135;
    panda$collections$ImmutableArray* annotations1137;
    org$pandalanguage$pandac$ClassDecl$Kind kind1139;
    panda$core$String* name1141;
    panda$collections$ImmutableArray* generics1143;
    panda$collections$ImmutableArray* supertypes1145;
    panda$collections$ImmutableArray* members1147;
    org$pandalanguage$pandac$ClassDecl* cl1149;
    panda$collections$ListView* tmp71151;
    {
        $match$560_91091 = p_file;
        panda$core$Bit $tmp1092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$560_91091->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1092.value) {
        {
            panda$collections$ImmutableArray** $tmp1094 = ((panda$collections$ImmutableArray**) ((char*) $match$560_91091->$data + 0));
            entries1093 = *$tmp1094;
            panda$collections$Array* $tmp1096 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp1096);
            result1095 = $tmp1096;
            currentPackage1097 = &$s1098;
            panda$collections$HashMap* $tmp1100 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
            panda$collections$HashMap$init($tmp1100);
            aliases1099 = $tmp1100;
            {
                ITable* $tmp1102 = ((panda$collections$Iterable*) entries1093)->$class->itable;
                while ($tmp1102->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1102 = $tmp1102->next;
                }
                $fn1104 $tmp1103 = $tmp1102->methods[0];
                panda$collections$Iterator* $tmp1105 = $tmp1103(((panda$collections$Iterable*) entries1093));
                Iter$565$171101 = $tmp1105;
                $l1106:;
                ITable* $tmp1108 = Iter$565$171101->$class->itable;
                while ($tmp1108->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1108 = $tmp1108->next;
                }
                $fn1110 $tmp1109 = $tmp1108->methods[0];
                panda$core$Bit $tmp1111 = $tmp1109(Iter$565$171101);
                panda$core$Bit $tmp1112 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1111);
                if (!$tmp1112.value) goto $l1107;
                {
                    ITable* $tmp1114 = Iter$565$171101->$class->itable;
                    while ($tmp1114->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1114 = $tmp1114->next;
                    }
                    $fn1116 $tmp1115 = $tmp1114->methods[1];
                    panda$core$Object* $tmp1117 = $tmp1115(Iter$565$171101);
                    e1113 = ((org$pandalanguage$pandac$ASTNode*) $tmp1117);
                    {
                        $match$566_211118 = e1113;
                        panda$core$Bit $tmp1119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$566_211118->$rawValue, ((panda$core$Int64) { 27 }));
                        if ($tmp1119.value) {
                        {
                            panda$core$String** $tmp1121 = ((panda$core$String**) ((char*) $match$566_211118->$data + 16));
                            name1120 = *$tmp1121;
                            {
                                currentPackage1097 = name1120;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1097));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp1122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$566_211118->$rawValue, ((panda$core$Int64) { 38 }));
                        if ($tmp1122.value) {
                        {
                            panda$core$String** $tmp1124 = ((panda$core$String**) ((char*) $match$566_211118->$data + 16));
                            fullName1123 = *$tmp1124;
                            panda$core$String$Index$nullable $tmp1127 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName1123, &$s1126);
                            idx1125 = $tmp1127;
                            memset(&alias1128, 0, sizeof(alias1128));
                            if (((panda$core$Bit) { idx1125.nonnull }).value) {
                            {
                                {
                                    panda$core$String$Index $tmp1130 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName1123, ((panda$core$String$Index) idx1125.value));
                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1129, ((panda$core$String$Index$nullable) { $tmp1130, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                    panda$core$String* $tmp1131 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName1123, $tmp1129);
                                    alias1128 = $tmp1131;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias1128));
                                }
                            }
                            }
                            else {
                            {
                                {
                                    alias1128 = fullName1123;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias1128));
                                }
                            }
                            }
                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1099, ((panda$collections$Key*) alias1128), ((panda$core$Object*) fullName1123));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias1128));
                        }
                        }
                        else {
                        panda$core$Bit $tmp1132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$566_211118->$rawValue, ((panda$core$Int64) { 9 }));
                        if ($tmp1132.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp1134 = ((org$pandalanguage$pandac$Position*) ((char*) $match$566_211118->$data + 0));
                            position1133 = *$tmp1134;
                            org$pandalanguage$pandac$ASTNode** $tmp1136 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$566_211118->$data + 16));
                            dc1135 = *$tmp1136;
                            panda$collections$ImmutableArray** $tmp1138 = ((panda$collections$ImmutableArray**) ((char*) $match$566_211118->$data + 24));
                            annotations1137 = *$tmp1138;
                            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1140 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$566_211118->$data + 32));
                            kind1139 = *$tmp1140;
                            panda$core$String** $tmp1142 = ((panda$core$String**) ((char*) $match$566_211118->$data + 40));
                            name1141 = *$tmp1142;
                            panda$collections$ImmutableArray** $tmp1144 = ((panda$collections$ImmutableArray**) ((char*) $match$566_211118->$data + 48));
                            generics1143 = *$tmp1144;
                            panda$collections$ImmutableArray** $tmp1146 = ((panda$collections$ImmutableArray**) ((char*) $match$566_211118->$data + 56));
                            supertypes1145 = *$tmp1146;
                            panda$collections$ImmutableArray** $tmp1148 = ((panda$collections$ImmutableArray**) ((char*) $match$566_211118->$data + 64));
                            members1147 = *$tmp1148;
                            org$pandalanguage$pandac$ClassDecl* $tmp1150 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1099), currentPackage1097, position1133, dc1135, annotations1137, kind1139, name1141, generics1143, supertypes1145, members1147);
                            cl1149 = $tmp1150;
                            if (((panda$core$Bit) { cl1149 != NULL }).value) {
                            {
                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl1149, result1095);
                            }
                            }
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1149));
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1113));
                }
                goto $l1106;
                $l1107:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$565$171101));
            }
            {
                tmp71151 = ((panda$collections$ListView*) result1095);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1097));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1095));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases1099));
                }
                return tmp71151;
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
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
}

