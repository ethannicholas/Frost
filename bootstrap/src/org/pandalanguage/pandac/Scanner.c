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

typedef panda$collections$Iterator* (*$fn38)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn44)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn50)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn62)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn68)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn74)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn162)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn168)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn174)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn221)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn227)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn233)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn248)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn254)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn260)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn283)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn289)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn295)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn313)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn319)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn325)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn343)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn349)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn355)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn369)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn375)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn381)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn397)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn403)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn409)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn416)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn422)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn428)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn456)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn462)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn468)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn481)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn487)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn493)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn500)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn506)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn512)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn526)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn532)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn538)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn556)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn562)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn568)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn598)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn604)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn610)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn725)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn731)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn737)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn747)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn753)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn759)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn876)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn882)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn888)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn904)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn915)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn921)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn927)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn948)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn954)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn960)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn980)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn986)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn992)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1044)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1050)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1056)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1067)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1073)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1079)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1094)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1100)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1106)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x6f\x6e\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x27", 30, -1250916154819313721, NULL };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x68\x61\x76\x65\x20\x61\x20\x62\x6f\x64\x79", 16, -7652461387112275530, NULL };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s798 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s804 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s911 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s972 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

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
    org$pandalanguage$pandac$Position position22;
    panda$core$String* base24;
    panda$collections$ImmutableArray* args26;
    panda$collections$Array* subtypes28;
    panda$core$MutableString* name30;
    panda$core$Char8 $tmp32;
    panda$core$String* separator33;
    panda$collections$Iterator* arg$Iter35;
    org$pandalanguage$pandac$ASTNode* arg47;
    org$pandalanguage$pandac$Type* subtype52;
    panda$core$Char8 $tmp55;
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
            org$pandalanguage$pandac$Type* $tmp17 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            panda$core$Object* $tmp18 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes14, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp20 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp18))->name, &$s19);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp17, $tmp20, ((panda$core$Int64) { 11 }), position10, ((panda$collections$ListView*) subtypes14), ((panda$core$Bit) { false }));
            return $tmp17;
        }
        }
        else {
        panda$core$Bit $tmp21 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$18_92->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp21.value) {
        {
            org$pandalanguage$pandac$Position* $tmp23 = ((org$pandalanguage$pandac$Position*) ((char*) $match$18_92->$data + 0));
            position22 = *$tmp23;
            panda$core$String** $tmp25 = ((panda$core$String**) ((char*) $match$18_92->$data + 16));
            base24 = *$tmp25;
            panda$collections$ImmutableArray** $tmp27 = ((panda$collections$ImmutableArray**) ((char*) $match$18_92->$data + 24));
            args26 = *$tmp27;
            panda$collections$Array* $tmp29 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp29);
            subtypes28 = $tmp29;
            panda$core$MutableString* $tmp31 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp31, base24);
            name30 = $tmp31;
            panda$core$Char8$init$panda$core$UInt8(&$tmp32, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name30, $tmp32);
            separator33 = &$s34;
            {
                ITable* $tmp36 = ((panda$collections$Iterable*) args26)->$class->itable;
                while ($tmp36->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp36 = $tmp36->next;
                }
                $fn38 $tmp37 = $tmp36->methods[0];
                panda$collections$Iterator* $tmp39 = $tmp37(((panda$collections$Iterable*) args26));
                arg$Iter35 = $tmp39;
                $l40:;
                ITable* $tmp42 = arg$Iter35->$class->itable;
                while ($tmp42->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp42 = $tmp42->next;
                }
                $fn44 $tmp43 = $tmp42->methods[0];
                panda$core$Bit $tmp45 = $tmp43(arg$Iter35);
                panda$core$Bit $tmp46 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp45);
                if (!$tmp46.value) goto $l41;
                {
                    ITable* $tmp48 = arg$Iter35->$class->itable;
                    while ($tmp48->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp48 = $tmp48->next;
                    }
                    $fn50 $tmp49 = $tmp48->methods[1];
                    panda$core$Object* $tmp51 = $tmp49(arg$Iter35);
                    arg47 = ((org$pandalanguage$pandac$ASTNode*) $tmp51);
                    org$pandalanguage$pandac$Type* $tmp53 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, arg47);
                    subtype52 = $tmp53;
                    panda$collections$Array$add$panda$collections$Array$T(subtypes28, ((panda$core$Object*) subtype52));
                    panda$core$MutableString$append$panda$core$String(name30, separator33);
                    panda$core$MutableString$append$panda$core$String(name30, ((org$pandalanguage$pandac$Symbol*) subtype52)->name);
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator33));
                        separator33 = &$s54;
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtype52));
                }
                goto $l40;
                $l41:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp55, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name30, $tmp55);
            org$pandalanguage$pandac$Type* $tmp56 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            panda$core$String* $tmp57 = panda$core$MutableString$finish$R$panda$core$String(name30);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp56, $tmp57, ((panda$core$Int64) { 21 }), position22, ((panda$collections$ListView*) subtypes28), ((panda$core$Bit) { false }));
            return $tmp56;
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
    panda$core$Int64 flags58;
    panda$collections$Iterator* c$Iter59;
    org$pandalanguage$pandac$ASTNode* c71;
    org$pandalanguage$pandac$ASTNode* $match$47_1376;
    org$pandalanguage$pandac$Position position78;
    panda$core$String* text80;
    panda$core$String* $match$49_2182;
    flags58 = ((panda$core$Int64) { 0 });
    {
        ITable* $tmp60 = ((panda$collections$Iterable*) p_a)->$class->itable;
        while ($tmp60->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp60 = $tmp60->next;
        }
        $fn62 $tmp61 = $tmp60->methods[0];
        panda$collections$Iterator* $tmp63 = $tmp61(((panda$collections$Iterable*) p_a));
        c$Iter59 = $tmp63;
        $l64:;
        ITable* $tmp66 = c$Iter59->$class->itable;
        while ($tmp66->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp66 = $tmp66->next;
        }
        $fn68 $tmp67 = $tmp66->methods[0];
        panda$core$Bit $tmp69 = $tmp67(c$Iter59);
        panda$core$Bit $tmp70 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp69);
        if (!$tmp70.value) goto $l65;
        {
            ITable* $tmp72 = c$Iter59->$class->itable;
            while ($tmp72->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp72 = $tmp72->next;
            }
            $fn74 $tmp73 = $tmp72->methods[1];
            panda$core$Object* $tmp75 = $tmp73(c$Iter59);
            c71 = ((org$pandalanguage$pandac$ASTNode*) $tmp75);
            {
                $match$47_1376 = c71;
                panda$core$Bit $tmp77 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_1376->$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp77.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp79 = ((org$pandalanguage$pandac$Position*) ((char*) $match$47_1376->$data + 0));
                    position78 = *$tmp79;
                    panda$core$String** $tmp81 = ((panda$core$String**) ((char*) $match$47_1376->$data + 16));
                    text80 = *$tmp81;
                    {
                        $match$49_2182 = text80;
                        panda$core$Bit $tmp84 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2182, &$s83);
                        if ($tmp84.value) {
                        {
                            panda$core$Int64 $tmp85 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                            panda$core$Int64 $tmp86 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags58, $tmp85);
                            flags58 = $tmp86;
                        }
                        }
                        else {
                        panda$core$Bit $tmp88 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2182, &$s87);
                        if ($tmp88.value) {
                        {
                            panda$core$Int64 $tmp89 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                            panda$core$Int64 $tmp90 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags58, $tmp89);
                            flags58 = $tmp90;
                        }
                        }
                        else {
                        panda$core$Bit $tmp92 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2182, &$s91);
                        if ($tmp92.value) {
                        {
                            panda$core$Int64 $tmp93 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                            panda$core$Int64 $tmp94 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags58, $tmp93);
                            flags58 = $tmp94;
                        }
                        }
                        else {
                        panda$core$Bit $tmp96 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2182, &$s95);
                        if ($tmp96.value) {
                        {
                            panda$core$Int64 $tmp97 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                            panda$core$Int64 $tmp98 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags58, $tmp97);
                            flags58 = $tmp98;
                        }
                        }
                        else {
                        panda$core$Bit $tmp100 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2182, &$s99);
                        if ($tmp100.value) {
                        {
                            panda$core$Int64 $tmp101 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                            panda$core$Int64 $tmp102 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags58, $tmp101);
                            flags58 = $tmp102;
                        }
                        }
                        else {
                        panda$core$Bit $tmp104 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2182, &$s103);
                        if ($tmp104.value) {
                        {
                            panda$core$Int64 $tmp105 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                            panda$core$Int64 $tmp106 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags58, $tmp105);
                            flags58 = $tmp106;
                        }
                        }
                        else {
                        panda$core$Bit $tmp108 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2182, &$s107);
                        if ($tmp108.value) {
                        {
                            panda$core$Int64 $tmp109 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                            panda$core$Int64 $tmp110 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags58, $tmp109);
                            flags58 = $tmp110;
                        }
                        }
                        else {
                        panda$core$Bit $tmp112 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2182, &$s111);
                        if ($tmp112.value) {
                        {
                            panda$core$Int64 $tmp113 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                            panda$core$Int64 $tmp114 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags58, $tmp113);
                            flags58 = $tmp114;
                        }
                        }
                        else {
                        panda$core$Bit $tmp116 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2182, &$s115);
                        if ($tmp116.value) {
                        {
                            panda$core$Int64 $tmp117 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                            panda$core$Int64 $tmp118 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags58, $tmp117);
                            flags58 = $tmp118;
                        }
                        }
                        else {
                        panda$core$Bit $tmp120 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2182, &$s119);
                        if ($tmp120.value) {
                        {
                            panda$core$Int64 $tmp121 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                            panda$core$Int64 $tmp122 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags58, $tmp121);
                            flags58 = $tmp122;
                        }
                        }
                        else {
                        panda$core$Bit $tmp124 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2182, &$s123);
                        if ($tmp124.value) {
                        {
                            panda$core$Int64 $tmp125 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                            panda$core$Int64 $tmp126 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags58, $tmp125);
                            flags58 = $tmp126;
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s127, text80);
                            panda$core$String* $tmp130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp128, &$s129);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, position78, $tmp130);
                        }
                        }
                        }
                        }
                        }
                        }
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
        goto $l64;
        $l65:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
    }
    org$pandalanguage$pandac$Annotations* $tmp131 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp131, flags58);
    return $tmp131;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment132;
    org$pandalanguage$pandac$ASTNode* $match$79_13133;
    org$pandalanguage$pandac$Position position135;
    panda$core$String* text137;
    org$pandalanguage$pandac$Annotations* annotations139;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind141;
    org$pandalanguage$pandac$ASTNode* $match$88_9142;
    org$pandalanguage$pandac$Variable$Kind kind144;
    panda$collections$ImmutableArray* decls146;
    org$pandalanguage$pandac$Variable$Kind $match$90_17148;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp150;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp152;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp154;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp158;
    panda$collections$Iterator* decl$Iter159;
    org$pandalanguage$pandac$ASTNode* decl171;
    org$pandalanguage$pandac$ASTNode* $match$102_21176;
    org$pandalanguage$pandac$Position declPosition178;
    org$pandalanguage$pandac$ASTNode* target180;
    org$pandalanguage$pandac$ASTNode* value182;
    panda$core$String* name184;
    org$pandalanguage$pandac$Type* type185;
    org$pandalanguage$pandac$ASTNode* $match$106_29186;
    panda$core$String* id188;
    panda$core$String* id192;
    org$pandalanguage$pandac$ASTNode* idType194;
    org$pandalanguage$pandac$FieldDecl* field197;
    memset(&doccomment132, 0, sizeof(doccomment132));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment132 = NULL;
        }
    }
    }
    else {
    {
        {
            $match$79_13133 = p_rawDoccomment;
            panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$79_13133->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp134.value) {
            {
                org$pandalanguage$pandac$Position* $tmp136 = ((org$pandalanguage$pandac$Position*) ((char*) $match$79_13133->$data + 0));
                position135 = *$tmp136;
                panda$core$String** $tmp138 = ((panda$core$String**) ((char*) $match$79_13133->$data + 16));
                text137 = *$tmp138;
                {
                    doccomment132 = text137;
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
    org$pandalanguage$pandac$Annotations* $tmp140 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations139 = $tmp140;
    memset(&fieldKind141, 0, sizeof(fieldKind141));
    {
        $match$88_9142 = p_varDecl;
        panda$core$Bit $tmp143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$88_9142->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp143.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp145 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$88_9142->$data + 16));
            kind144 = *$tmp145;
            panda$collections$ImmutableArray** $tmp147 = ((panda$collections$ImmutableArray**) ((char*) $match$88_9142->$data + 24));
            decls146 = *$tmp147;
            {
                $match$90_17148 = kind144;
                panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17148.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp149.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp150, ((panda$core$Int64) { 0 }));
                    fieldKind141 = $tmp150;
                }
                }
                else {
                panda$core$Bit $tmp151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17148.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp151.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp152, ((panda$core$Int64) { 1 }));
                    fieldKind141 = $tmp152;
                }
                }
                else {
                panda$core$Bit $tmp153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17148.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp153.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp154, ((panda$core$Int64) { 2 }));
                    fieldKind141 = $tmp154;
                    panda$core$Int64 $tmp155 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp156 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations139->flags, $tmp155);
                    annotations139->flags = $tmp156;
                }
                }
                else {
                panda$core$Bit $tmp157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17148.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp157.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp158, ((panda$core$Int64) { 3 }));
                    fieldKind141 = $tmp158;
                }
                }
                }
                }
                }
            }
            {
                ITable* $tmp160 = ((panda$collections$Iterable*) decls146)->$class->itable;
                while ($tmp160->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp160 = $tmp160->next;
                }
                $fn162 $tmp161 = $tmp160->methods[0];
                panda$collections$Iterator* $tmp163 = $tmp161(((panda$collections$Iterable*) decls146));
                decl$Iter159 = $tmp163;
                $l164:;
                ITable* $tmp166 = decl$Iter159->$class->itable;
                while ($tmp166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp166 = $tmp166->next;
                }
                $fn168 $tmp167 = $tmp166->methods[0];
                panda$core$Bit $tmp169 = $tmp167(decl$Iter159);
                panda$core$Bit $tmp170 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp169);
                if (!$tmp170.value) goto $l165;
                {
                    ITable* $tmp172 = decl$Iter159->$class->itable;
                    while ($tmp172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp172 = $tmp172->next;
                    }
                    $fn174 $tmp173 = $tmp172->methods[1];
                    panda$core$Object* $tmp175 = $tmp173(decl$Iter159);
                    decl171 = ((org$pandalanguage$pandac$ASTNode*) $tmp175);
                    {
                        $match$102_21176 = decl171;
                        panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$102_21176->$rawValue, ((panda$core$Int64) { 11 }));
                        if ($tmp177.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp179 = ((org$pandalanguage$pandac$Position*) ((char*) $match$102_21176->$data + 0));
                            declPosition178 = *$tmp179;
                            org$pandalanguage$pandac$ASTNode** $tmp181 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$102_21176->$data + 16));
                            target180 = *$tmp181;
                            org$pandalanguage$pandac$ASTNode** $tmp183 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$102_21176->$data + 24));
                            value182 = *$tmp183;
                            memset(&name184, 0, sizeof(name184));
                            memset(&type185, 0, sizeof(type185));
                            {
                                $match$106_29186 = target180;
                                panda$core$Bit $tmp187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$106_29186->$rawValue, ((panda$core$Int64) { 18 }));
                                if ($tmp187.value) {
                                {
                                    panda$core$String** $tmp189 = ((panda$core$String**) ((char*) $match$106_29186->$data + 16));
                                    id188 = *$tmp189;
                                    {
                                        name184 = id188;
                                    }
                                    {
                                        org$pandalanguage$pandac$Type* $tmp190 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                        type185 = $tmp190;
                                    }
                                }
                                }
                                else {
                                panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$106_29186->$rawValue, ((panda$core$Int64) { 36 }));
                                if ($tmp191.value) {
                                {
                                    panda$core$String** $tmp193 = ((panda$core$String**) ((char*) $match$106_29186->$data + 16));
                                    id192 = *$tmp193;
                                    org$pandalanguage$pandac$ASTNode** $tmp195 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$106_29186->$data + 24));
                                    idType194 = *$tmp195;
                                    {
                                        name184 = id192;
                                    }
                                    {
                                        org$pandalanguage$pandac$Type* $tmp196 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType194);
                                        type185 = $tmp196;
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
                            org$pandalanguage$pandac$FieldDecl* $tmp198 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp198, p_owner, declPosition178, doccomment132, annotations139, fieldKind141, name184, type185, value182);
                            field197 = $tmp198;
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field197));
                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field197));
                        }
                        }
                        else {
                        {
                            PANDA_ASSERT(((panda$core$Bit) { false }).value);
                        }
                        }
                    }
                }
                goto $l164;
                $l165:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp163));
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations139));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment132));
    }
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$131_9199;
    org$pandalanguage$pandac$ASTNode* test201;
    org$pandalanguage$pandac$ASTNode* left205;
    org$pandalanguage$pandac$ASTNode* right207;
    panda$collections$ImmutableArray* statements215;
    panda$core$Int64 result217;
    panda$collections$Iterator* s$Iter218;
    org$pandalanguage$pandac$ASTNode* s230;
    org$pandalanguage$pandac$ASTNode* target239;
    panda$collections$ImmutableArray* args241;
    panda$core$Int64 result243;
    panda$collections$Iterator* a$Iter245;
    org$pandalanguage$pandac$ASTNode* a257;
    org$pandalanguage$pandac$ASTNode* base265;
    org$pandalanguage$pandac$ASTNode* value270;
    panda$collections$ImmutableArray* statements274;
    org$pandalanguage$pandac$ASTNode* test276;
    panda$core$Int64 result278;
    panda$collections$Iterator* s$Iter280;
    org$pandalanguage$pandac$ASTNode* s292;
    org$pandalanguage$pandac$ASTNode* base300;
    org$pandalanguage$pandac$ASTNode* list304;
    panda$collections$ImmutableArray* statements306;
    panda$core$Int64 result308;
    panda$collections$Iterator* s$Iter310;
    org$pandalanguage$pandac$ASTNode* s322;
    org$pandalanguage$pandac$ASTNode* test332;
    panda$collections$ImmutableArray* ifTrue334;
    org$pandalanguage$pandac$ASTNode* ifFalse336;
    panda$core$Int64 result338;
    panda$collections$Iterator* s$Iter340;
    org$pandalanguage$pandac$ASTNode* s352;
    panda$collections$ImmutableArray* statements363;
    panda$core$Int64 result365;
    panda$collections$Iterator* s$Iter366;
    org$pandalanguage$pandac$ASTNode* s378;
    org$pandalanguage$pandac$ASTNode* value386;
    panda$collections$ImmutableArray* whens388;
    panda$collections$ImmutableArray* other390;
    panda$core$Int64 result392;
    panda$collections$Iterator* w$Iter394;
    org$pandalanguage$pandac$ASTNode* w406;
    panda$collections$Iterator* s$Iter413;
    org$pandalanguage$pandac$ASTNode* s425;
    org$pandalanguage$pandac$ASTNode* base435;
    org$pandalanguage$pandac$ASTNode* value442;
    panda$collections$ImmutableArray* decls450;
    panda$core$Int64 result452;
    panda$collections$Iterator* decl$Iter453;
    org$pandalanguage$pandac$ASTNode* decl465;
    panda$collections$ImmutableArray* tests473;
    panda$collections$ImmutableArray* statements475;
    panda$core$Int64 result477;
    panda$collections$Iterator* test$Iter478;
    org$pandalanguage$pandac$ASTNode* test490;
    panda$collections$Iterator* s$Iter497;
    org$pandalanguage$pandac$ASTNode* s509;
    org$pandalanguage$pandac$ASTNode* test517;
    panda$collections$ImmutableArray* statements519;
    panda$core$Int64 result521;
    panda$collections$Iterator* s$Iter523;
    org$pandalanguage$pandac$ASTNode* s535;
    {
        $match$131_9199 = p_node;
        panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp200.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp202 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9199->$data + 16));
            test201 = *$tmp202;
            panda$core$Int64 $tmp203 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test201);
            return $tmp203;
        }
        }
        else {
        panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp204.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp206 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9199->$data + 16));
            left205 = *$tmp206;
            org$pandalanguage$pandac$ASTNode** $tmp208 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9199->$data + 32));
            right207 = *$tmp208;
            panda$core$Int64 $tmp209 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left205);
            panda$core$Int64 $tmp210 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp209);
            panda$core$Int64 $tmp211 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right207);
            panda$core$Int64 $tmp212 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp210, $tmp211);
            return $tmp212;
        }
        }
        else {
        panda$core$Bit $tmp213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp213.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp214.value) {
        {
            panda$collections$ImmutableArray** $tmp216 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9199->$data + 16));
            statements215 = *$tmp216;
            result217 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp219 = ((panda$collections$Iterable*) statements215)->$class->itable;
                while ($tmp219->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp219 = $tmp219->next;
                }
                $fn221 $tmp220 = $tmp219->methods[0];
                panda$collections$Iterator* $tmp222 = $tmp220(((panda$collections$Iterable*) statements215));
                s$Iter218 = $tmp222;
                $l223:;
                ITable* $tmp225 = s$Iter218->$class->itable;
                while ($tmp225->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp225 = $tmp225->next;
                }
                $fn227 $tmp226 = $tmp225->methods[0];
                panda$core$Bit $tmp228 = $tmp226(s$Iter218);
                panda$core$Bit $tmp229 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp228);
                if (!$tmp229.value) goto $l224;
                {
                    ITable* $tmp231 = s$Iter218->$class->itable;
                    while ($tmp231->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp231 = $tmp231->next;
                    }
                    $fn233 $tmp232 = $tmp231->methods[1];
                    panda$core$Object* $tmp234 = $tmp232(s$Iter218);
                    s230 = ((org$pandalanguage$pandac$ASTNode*) $tmp234);
                    panda$core$Int64 $tmp235 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s230);
                    panda$core$Int64 $tmp236 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result217, $tmp235);
                    result217 = $tmp236;
                }
                goto $l223;
                $l224:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp222));
            }
            return result217;
        }
        }
        else {
        panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp237.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp238.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp240 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9199->$data + 16));
            target239 = *$tmp240;
            panda$collections$ImmutableArray** $tmp242 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9199->$data + 24));
            args241 = *$tmp242;
            panda$core$Int64 $tmp244 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target239);
            result243 = $tmp244;
            {
                ITable* $tmp246 = ((panda$collections$Iterable*) args241)->$class->itable;
                while ($tmp246->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp246 = $tmp246->next;
                }
                $fn248 $tmp247 = $tmp246->methods[0];
                panda$collections$Iterator* $tmp249 = $tmp247(((panda$collections$Iterable*) args241));
                a$Iter245 = $tmp249;
                $l250:;
                ITable* $tmp252 = a$Iter245->$class->itable;
                while ($tmp252->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp252 = $tmp252->next;
                }
                $fn254 $tmp253 = $tmp252->methods[0];
                panda$core$Bit $tmp255 = $tmp253(a$Iter245);
                panda$core$Bit $tmp256 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp255);
                if (!$tmp256.value) goto $l251;
                {
                    ITable* $tmp258 = a$Iter245->$class->itable;
                    while ($tmp258->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp258 = $tmp258->next;
                    }
                    $fn260 $tmp259 = $tmp258->methods[1];
                    panda$core$Object* $tmp261 = $tmp259(a$Iter245);
                    a257 = ((org$pandalanguage$pandac$ASTNode*) $tmp261);
                    panda$core$Int64 $tmp262 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a257);
                    panda$core$Int64 $tmp263 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result243, $tmp262);
                    result243 = $tmp263;
                }
                goto $l250;
                $l251:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
            }
            return result243;
        }
        }
        else {
        panda$core$Bit $tmp264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp264.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp266 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9199->$data + 16));
            base265 = *$tmp266;
            panda$core$Int64 $tmp267 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base265);
            return $tmp267;
        }
        }
        else {
        panda$core$Bit $tmp268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp268.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp269.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp271 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9199->$data + 24));
            value270 = *$tmp271;
            if (((panda$core$Bit) { value270 == NULL }).value) {
            {
                return ((panda$core$Int64) { 0 });
            }
            }
            panda$core$Int64 $tmp272 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value270);
            return $tmp272;
        }
        }
        else {
        panda$core$Bit $tmp273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp273.value) {
        {
            panda$collections$ImmutableArray** $tmp275 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9199->$data + 24));
            statements274 = *$tmp275;
            org$pandalanguage$pandac$ASTNode** $tmp277 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9199->$data + 32));
            test276 = *$tmp277;
            panda$core$Int64 $tmp279 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test276);
            result278 = $tmp279;
            {
                ITable* $tmp281 = ((panda$collections$Iterable*) statements274)->$class->itable;
                while ($tmp281->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp281 = $tmp281->next;
                }
                $fn283 $tmp282 = $tmp281->methods[0];
                panda$collections$Iterator* $tmp284 = $tmp282(((panda$collections$Iterable*) statements274));
                s$Iter280 = $tmp284;
                $l285:;
                ITable* $tmp287 = s$Iter280->$class->itable;
                while ($tmp287->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp287 = $tmp287->next;
                }
                $fn289 $tmp288 = $tmp287->methods[0];
                panda$core$Bit $tmp290 = $tmp288(s$Iter280);
                panda$core$Bit $tmp291 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp290);
                if (!$tmp291.value) goto $l286;
                {
                    ITable* $tmp293 = s$Iter280->$class->itable;
                    while ($tmp293->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp293 = $tmp293->next;
                    }
                    $fn295 $tmp294 = $tmp293->methods[1];
                    panda$core$Object* $tmp296 = $tmp294(s$Iter280);
                    s292 = ((org$pandalanguage$pandac$ASTNode*) $tmp296);
                    panda$core$Int64 $tmp297 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s292);
                    panda$core$Int64 $tmp298 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result278, $tmp297);
                    result278 = $tmp298;
                }
                goto $l285;
                $l286:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp284));
            }
            return result278;
        }
        }
        else {
        panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp299.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp301 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9199->$data + 16));
            base300 = *$tmp301;
            panda$core$Int64 $tmp302 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base300);
            return $tmp302;
        }
        }
        else {
        panda$core$Bit $tmp303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp303.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp305 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9199->$data + 32));
            list304 = *$tmp305;
            panda$collections$ImmutableArray** $tmp307 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9199->$data + 40));
            statements306 = *$tmp307;
            panda$core$Int64 $tmp309 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list304);
            result308 = $tmp309;
            {
                ITable* $tmp311 = ((panda$collections$Iterable*) statements306)->$class->itable;
                while ($tmp311->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp311 = $tmp311->next;
                }
                $fn313 $tmp312 = $tmp311->methods[0];
                panda$collections$Iterator* $tmp314 = $tmp312(((panda$collections$Iterable*) statements306));
                s$Iter310 = $tmp314;
                $l315:;
                ITable* $tmp317 = s$Iter310->$class->itable;
                while ($tmp317->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp317 = $tmp317->next;
                }
                $fn319 $tmp318 = $tmp317->methods[0];
                panda$core$Bit $tmp320 = $tmp318(s$Iter310);
                panda$core$Bit $tmp321 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp320);
                if (!$tmp321.value) goto $l316;
                {
                    ITable* $tmp323 = s$Iter310->$class->itable;
                    while ($tmp323->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp323 = $tmp323->next;
                    }
                    $fn325 $tmp324 = $tmp323->methods[1];
                    panda$core$Object* $tmp326 = $tmp324(s$Iter310);
                    s322 = ((org$pandalanguage$pandac$ASTNode*) $tmp326);
                    panda$core$Int64 $tmp327 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s322);
                    panda$core$Int64 $tmp328 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result308, $tmp327);
                    result308 = $tmp328;
                }
                goto $l315;
                $l316:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp314));
            }
            return result308;
        }
        }
        else {
        panda$core$Bit $tmp329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp329.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp330.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp331.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp333 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9199->$data + 16));
            test332 = *$tmp333;
            panda$collections$ImmutableArray** $tmp335 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9199->$data + 24));
            ifTrue334 = *$tmp335;
            org$pandalanguage$pandac$ASTNode** $tmp337 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9199->$data + 32));
            ifFalse336 = *$tmp337;
            panda$core$Int64 $tmp339 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test332);
            result338 = $tmp339;
            {
                ITable* $tmp341 = ((panda$collections$Iterable*) ifTrue334)->$class->itable;
                while ($tmp341->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp341 = $tmp341->next;
                }
                $fn343 $tmp342 = $tmp341->methods[0];
                panda$collections$Iterator* $tmp344 = $tmp342(((panda$collections$Iterable*) ifTrue334));
                s$Iter340 = $tmp344;
                $l345:;
                ITable* $tmp347 = s$Iter340->$class->itable;
                while ($tmp347->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp347 = $tmp347->next;
                }
                $fn349 $tmp348 = $tmp347->methods[0];
                panda$core$Bit $tmp350 = $tmp348(s$Iter340);
                panda$core$Bit $tmp351 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp350);
                if (!$tmp351.value) goto $l346;
                {
                    ITable* $tmp353 = s$Iter340->$class->itable;
                    while ($tmp353->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp353 = $tmp353->next;
                    }
                    $fn355 $tmp354 = $tmp353->methods[1];
                    panda$core$Object* $tmp356 = $tmp354(s$Iter340);
                    s352 = ((org$pandalanguage$pandac$ASTNode*) $tmp356);
                    panda$core$Int64 $tmp357 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s352);
                    panda$core$Int64 $tmp358 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result338, $tmp357);
                    result338 = $tmp358;
                }
                goto $l345;
                $l346:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp344));
            }
            if (((panda$core$Bit) { ifFalse336 != NULL }).value) {
            {
                panda$core$Int64 $tmp359 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse336);
                panda$core$Int64 $tmp360 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result338, $tmp359);
                result338 = $tmp360;
            }
            }
            return result338;
        }
        }
        else {
        panda$core$Bit $tmp361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp361.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp362.value) {
        {
            panda$collections$ImmutableArray** $tmp364 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9199->$data + 24));
            statements363 = *$tmp364;
            result365 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp367 = ((panda$collections$Iterable*) statements363)->$class->itable;
                while ($tmp367->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp367 = $tmp367->next;
                }
                $fn369 $tmp368 = $tmp367->methods[0];
                panda$collections$Iterator* $tmp370 = $tmp368(((panda$collections$Iterable*) statements363));
                s$Iter366 = $tmp370;
                $l371:;
                ITable* $tmp373 = s$Iter366->$class->itable;
                while ($tmp373->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp373 = $tmp373->next;
                }
                $fn375 $tmp374 = $tmp373->methods[0];
                panda$core$Bit $tmp376 = $tmp374(s$Iter366);
                panda$core$Bit $tmp377 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp376);
                if (!$tmp377.value) goto $l372;
                {
                    ITable* $tmp379 = s$Iter366->$class->itable;
                    while ($tmp379->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp379 = $tmp379->next;
                    }
                    $fn381 $tmp380 = $tmp379->methods[1];
                    panda$core$Object* $tmp382 = $tmp380(s$Iter366);
                    s378 = ((org$pandalanguage$pandac$ASTNode*) $tmp382);
                    panda$core$Int64 $tmp383 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s378);
                    panda$core$Int64 $tmp384 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result365, $tmp383);
                    result365 = $tmp384;
                }
                goto $l371;
                $l372:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp370));
            }
            return result365;
        }
        }
        else {
        panda$core$Bit $tmp385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp385.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp387 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9199->$data + 16));
            value386 = *$tmp387;
            panda$collections$ImmutableArray** $tmp389 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9199->$data + 24));
            whens388 = *$tmp389;
            panda$collections$ImmutableArray** $tmp391 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9199->$data + 32));
            other390 = *$tmp391;
            panda$core$Int64 $tmp393 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value386);
            result392 = $tmp393;
            {
                ITable* $tmp395 = ((panda$collections$Iterable*) whens388)->$class->itable;
                while ($tmp395->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp395 = $tmp395->next;
                }
                $fn397 $tmp396 = $tmp395->methods[0];
                panda$collections$Iterator* $tmp398 = $tmp396(((panda$collections$Iterable*) whens388));
                w$Iter394 = $tmp398;
                $l399:;
                ITable* $tmp401 = w$Iter394->$class->itable;
                while ($tmp401->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp401 = $tmp401->next;
                }
                $fn403 $tmp402 = $tmp401->methods[0];
                panda$core$Bit $tmp404 = $tmp402(w$Iter394);
                panda$core$Bit $tmp405 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp404);
                if (!$tmp405.value) goto $l400;
                {
                    ITable* $tmp407 = w$Iter394->$class->itable;
                    while ($tmp407->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp407 = $tmp407->next;
                    }
                    $fn409 $tmp408 = $tmp407->methods[1];
                    panda$core$Object* $tmp410 = $tmp408(w$Iter394);
                    w406 = ((org$pandalanguage$pandac$ASTNode*) $tmp410);
                    panda$core$Int64 $tmp411 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w406);
                    panda$core$Int64 $tmp412 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result392, $tmp411);
                    result392 = $tmp412;
                }
                goto $l399;
                $l400:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp398));
            }
            if (((panda$core$Bit) { other390 != NULL }).value) {
            {
                {
                    ITable* $tmp414 = ((panda$collections$Iterable*) other390)->$class->itable;
                    while ($tmp414->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp414 = $tmp414->next;
                    }
                    $fn416 $tmp415 = $tmp414->methods[0];
                    panda$collections$Iterator* $tmp417 = $tmp415(((panda$collections$Iterable*) other390));
                    s$Iter413 = $tmp417;
                    $l418:;
                    ITable* $tmp420 = s$Iter413->$class->itable;
                    while ($tmp420->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp420 = $tmp420->next;
                    }
                    $fn422 $tmp421 = $tmp420->methods[0];
                    panda$core$Bit $tmp423 = $tmp421(s$Iter413);
                    panda$core$Bit $tmp424 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp423);
                    if (!$tmp424.value) goto $l419;
                    {
                        ITable* $tmp426 = s$Iter413->$class->itable;
                        while ($tmp426->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp426 = $tmp426->next;
                        }
                        $fn428 $tmp427 = $tmp426->methods[1];
                        panda$core$Object* $tmp429 = $tmp427(s$Iter413);
                        s425 = ((org$pandalanguage$pandac$ASTNode*) $tmp429);
                        panda$core$Int64 $tmp430 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s425);
                        panda$core$Int64 $tmp431 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result392, $tmp430);
                        result392 = $tmp431;
                    }
                    goto $l418;
                    $l419:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
                }
            }
            }
            return result392;
        }
        }
        else {
        panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp432.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp433.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp434.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp436 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9199->$data + 24));
            base435 = *$tmp436;
            panda$core$Int64 $tmp437 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base435);
            panda$core$Int64 $tmp438 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp437);
            return $tmp438;
        }
        }
        else {
        panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp439.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp440.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp441.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp443 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9199->$data + 16));
            value442 = *$tmp443;
            if (((panda$core$Bit) { value442 == NULL }).value) {
            {
                return ((panda$core$Int64) { 0 });
            }
            }
            panda$core$Int64 $tmp444 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value442);
            return $tmp444;
        }
        }
        else {
        panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp445.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp446.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp447.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp448.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp449.value) {
        {
            panda$collections$ImmutableArray** $tmp451 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9199->$data + 24));
            decls450 = *$tmp451;
            result452 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp454 = ((panda$collections$Iterable*) decls450)->$class->itable;
                while ($tmp454->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp454 = $tmp454->next;
                }
                $fn456 $tmp455 = $tmp454->methods[0];
                panda$collections$Iterator* $tmp457 = $tmp455(((panda$collections$Iterable*) decls450));
                decl$Iter453 = $tmp457;
                $l458:;
                ITable* $tmp460 = decl$Iter453->$class->itable;
                while ($tmp460->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp460 = $tmp460->next;
                }
                $fn462 $tmp461 = $tmp460->methods[0];
                panda$core$Bit $tmp463 = $tmp461(decl$Iter453);
                panda$core$Bit $tmp464 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp463);
                if (!$tmp464.value) goto $l459;
                {
                    ITable* $tmp466 = decl$Iter453->$class->itable;
                    while ($tmp466->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp466 = $tmp466->next;
                    }
                    $fn468 $tmp467 = $tmp466->methods[1];
                    panda$core$Object* $tmp469 = $tmp467(decl$Iter453);
                    decl465 = ((org$pandalanguage$pandac$ASTNode*) $tmp469);
                    panda$core$Int64 $tmp470 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl465);
                    panda$core$Int64 $tmp471 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result452, $tmp470);
                    result452 = $tmp471;
                }
                goto $l458;
                $l459:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp457));
            }
            return result452;
        }
        }
        else {
        panda$core$Bit $tmp472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp472.value) {
        {
            panda$collections$ImmutableArray** $tmp474 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9199->$data + 16));
            tests473 = *$tmp474;
            panda$collections$ImmutableArray** $tmp476 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9199->$data + 24));
            statements475 = *$tmp476;
            result477 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp479 = ((panda$collections$Iterable*) tests473)->$class->itable;
                while ($tmp479->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp479 = $tmp479->next;
                }
                $fn481 $tmp480 = $tmp479->methods[0];
                panda$collections$Iterator* $tmp482 = $tmp480(((panda$collections$Iterable*) tests473));
                test$Iter478 = $tmp482;
                $l483:;
                ITable* $tmp485 = test$Iter478->$class->itable;
                while ($tmp485->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp485 = $tmp485->next;
                }
                $fn487 $tmp486 = $tmp485->methods[0];
                panda$core$Bit $tmp488 = $tmp486(test$Iter478);
                panda$core$Bit $tmp489 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp488);
                if (!$tmp489.value) goto $l484;
                {
                    ITable* $tmp491 = test$Iter478->$class->itable;
                    while ($tmp491->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp491 = $tmp491->next;
                    }
                    $fn493 $tmp492 = $tmp491->methods[1];
                    panda$core$Object* $tmp494 = $tmp492(test$Iter478);
                    test490 = ((org$pandalanguage$pandac$ASTNode*) $tmp494);
                    panda$core$Int64 $tmp495 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test490);
                    panda$core$Int64 $tmp496 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result477, $tmp495);
                    result477 = $tmp496;
                }
                goto $l483;
                $l484:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
            }
            {
                ITable* $tmp498 = ((panda$collections$Iterable*) statements475)->$class->itable;
                while ($tmp498->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp498 = $tmp498->next;
                }
                $fn500 $tmp499 = $tmp498->methods[0];
                panda$collections$Iterator* $tmp501 = $tmp499(((panda$collections$Iterable*) statements475));
                s$Iter497 = $tmp501;
                $l502:;
                ITable* $tmp504 = s$Iter497->$class->itable;
                while ($tmp504->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp504 = $tmp504->next;
                }
                $fn506 $tmp505 = $tmp504->methods[0];
                panda$core$Bit $tmp507 = $tmp505(s$Iter497);
                panda$core$Bit $tmp508 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp507);
                if (!$tmp508.value) goto $l503;
                {
                    ITable* $tmp510 = s$Iter497->$class->itable;
                    while ($tmp510->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp510 = $tmp510->next;
                    }
                    $fn512 $tmp511 = $tmp510->methods[1];
                    panda$core$Object* $tmp513 = $tmp511(s$Iter497);
                    s509 = ((org$pandalanguage$pandac$ASTNode*) $tmp513);
                    panda$core$Int64 $tmp514 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s509);
                    panda$core$Int64 $tmp515 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result477, $tmp514);
                    result477 = $tmp515;
                }
                goto $l502;
                $l503:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp501));
            }
            return result477;
        }
        }
        else {
        panda$core$Bit $tmp516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9199->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp516.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp518 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9199->$data + 24));
            test517 = *$tmp518;
            panda$collections$ImmutableArray** $tmp520 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9199->$data + 32));
            statements519 = *$tmp520;
            panda$core$Int64 $tmp522 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test517);
            result521 = $tmp522;
            {
                ITable* $tmp524 = ((panda$collections$Iterable*) statements519)->$class->itable;
                while ($tmp524->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp524 = $tmp524->next;
                }
                $fn526 $tmp525 = $tmp524->methods[0];
                panda$collections$Iterator* $tmp527 = $tmp525(((panda$collections$Iterable*) statements519));
                s$Iter523 = $tmp527;
                $l528:;
                ITable* $tmp530 = s$Iter523->$class->itable;
                while ($tmp530->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp530 = $tmp530->next;
                }
                $fn532 $tmp531 = $tmp530->methods[0];
                panda$core$Bit $tmp533 = $tmp531(s$Iter523);
                panda$core$Bit $tmp534 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp533);
                if (!$tmp534.value) goto $l529;
                {
                    ITable* $tmp536 = s$Iter523->$class->itable;
                    while ($tmp536->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp536 = $tmp536->next;
                    }
                    $fn538 $tmp537 = $tmp536->methods[1];
                    panda$core$Object* $tmp539 = $tmp537(s$Iter523);
                    s535 = ((org$pandalanguage$pandac$ASTNode*) $tmp539);
                    panda$core$Int64 $tmp540 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s535);
                    panda$core$Int64 $tmp541 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result521, $tmp540);
                    result521 = $tmp541;
                }
                goto $l528;
                $l529:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp527));
            }
            return result521;
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
    panda$core$Int64 c552;
    panda$collections$Iterator* s$Iter553;
    org$pandalanguage$pandac$ASTNode* s565;
    panda$core$Bit $tmp544 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp543 = $tmp544.value;
    if (!$tmp543) goto $l545;
    panda$core$Bit $tmp546 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp547 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp546);
    $tmp543 = $tmp547.value;
    $l545:;
    panda$core$Bit $tmp548 = { $tmp543 };
    bool $tmp542 = $tmp548.value;
    if (!$tmp542) goto $l549;
    panda$core$Bit $tmp550 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp542 = $tmp550.value;
    $l549:;
    panda$core$Bit $tmp551 = { $tmp542 };
    if ($tmp551.value) {
    {
        c552 = ((panda$core$Int64) { 0 });
        {
            ITable* $tmp554 = ((panda$collections$Iterable*) p_statements)->$class->itable;
            while ($tmp554->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp554 = $tmp554->next;
            }
            $fn556 $tmp555 = $tmp554->methods[0];
            panda$collections$Iterator* $tmp557 = $tmp555(((panda$collections$Iterable*) p_statements));
            s$Iter553 = $tmp557;
            $l558:;
            ITable* $tmp560 = s$Iter553->$class->itable;
            while ($tmp560->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp560 = $tmp560->next;
            }
            $fn562 $tmp561 = $tmp560->methods[0];
            panda$core$Bit $tmp563 = $tmp561(s$Iter553);
            panda$core$Bit $tmp564 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp563);
            if (!$tmp564.value) goto $l559;
            {
                ITable* $tmp566 = s$Iter553->$class->itable;
                while ($tmp566->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp566 = $tmp566->next;
                }
                $fn568 $tmp567 = $tmp566->methods[1];
                panda$core$Object* $tmp569 = $tmp567(s$Iter553);
                s565 = ((org$pandalanguage$pandac$ASTNode*) $tmp569);
                panda$core$Int64 $tmp570 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s565);
                panda$core$Int64 $tmp571 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c552, $tmp570);
                c552 = $tmp571;
                panda$core$Bit $tmp572 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c552, ((panda$core$Int64) { 10 }));
                if ($tmp572.value) {
                {
                    return ((panda$core$Bit) { false });
                }
                }
            }
            goto $l558;
            $l559:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp557));
        }
        return ((panda$core$Bit) { true });
    }
    }
    return ((panda$core$Bit) { false });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment573;
    org$pandalanguage$pandac$ASTNode* $match$281_13574;
    org$pandalanguage$pandac$Position position576;
    panda$core$String* text578;
    org$pandalanguage$pandac$Annotations* annotations580;
    panda$collections$Array* parameters593;
    panda$collections$Iterator* p$Iter595;
    org$pandalanguage$pandac$ASTNode* p607;
    org$pandalanguage$pandac$ASTNode* $match$294_13612;
    panda$core$String* name614;
    org$pandalanguage$pandac$ASTNode* type616;
    org$pandalanguage$pandac$Type* returnType620;
    org$pandalanguage$pandac$MethodDecl* tmp1646;
    memset(&doccomment573, 0, sizeof(doccomment573));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment573 = NULL;
        }
    }
    }
    else {
    {
        {
            $match$281_13574 = p_rawDoccomment;
            panda$core$Bit $tmp575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$281_13574->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp575.value) {
            {
                org$pandalanguage$pandac$Position* $tmp577 = ((org$pandalanguage$pandac$Position*) ((char*) $match$281_13574->$data + 0));
                position576 = *$tmp577;
                panda$core$String** $tmp579 = ((panda$core$String**) ((char*) $match$281_13574->$data + 16));
                text578 = *$tmp579;
                {
                    doccomment573 = text578;
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
    org$pandalanguage$pandac$Annotations* $tmp581 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations580 = $tmp581;
    panda$core$Bit $tmp584 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp583 = $tmp584.value;
    if (!$tmp583) goto $l585;
    panda$core$Bit $tmp586 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
    $tmp583 = $tmp586.value;
    $l585:;
    panda$core$Bit $tmp587 = { $tmp583 };
    bool $tmp582 = $tmp587.value;
    if ($tmp582) goto $l588;
    panda$core$Bit $tmp589 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations580);
    $tmp582 = $tmp589.value;
    $l588:;
    panda$core$Bit $tmp590 = { $tmp582 };
    if ($tmp590.value) {
    {
        panda$core$Int64 $tmp591 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp592 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations580->flags, $tmp591);
        annotations580->flags = $tmp592;
    }
    }
    panda$collections$Array* $tmp594 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp594);
    parameters593 = $tmp594;
    {
        ITable* $tmp596 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
        while ($tmp596->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp596 = $tmp596->next;
        }
        $fn598 $tmp597 = $tmp596->methods[0];
        panda$collections$Iterator* $tmp599 = $tmp597(((panda$collections$Iterable*) p_rawParameters));
        p$Iter595 = $tmp599;
        $l600:;
        ITable* $tmp602 = p$Iter595->$class->itable;
        while ($tmp602->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp602 = $tmp602->next;
        }
        $fn604 $tmp603 = $tmp602->methods[0];
        panda$core$Bit $tmp605 = $tmp603(p$Iter595);
        panda$core$Bit $tmp606 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp605);
        if (!$tmp606.value) goto $l601;
        {
            ITable* $tmp608 = p$Iter595->$class->itable;
            while ($tmp608->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp608 = $tmp608->next;
            }
            $fn610 $tmp609 = $tmp608->methods[1];
            panda$core$Object* $tmp611 = $tmp609(p$Iter595);
            p607 = ((org$pandalanguage$pandac$ASTNode*) $tmp611);
            {
                $match$294_13612 = p607;
                panda$core$Bit $tmp613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$294_13612->$rawValue, ((panda$core$Int64) { 27 }));
                if ($tmp613.value) {
                {
                    panda$core$String** $tmp615 = ((panda$core$String**) ((char*) $match$294_13612->$data + 16));
                    name614 = *$tmp615;
                    org$pandalanguage$pandac$ASTNode** $tmp617 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$294_13612->$data + 24));
                    type616 = *$tmp617;
                    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp618 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                    org$pandalanguage$pandac$Type* $tmp619 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type616);
                    org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp618, name614, $tmp619);
                    panda$collections$Array$add$panda$collections$Array$T(parameters593, ((panda$core$Object*) $tmp618));
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l600;
        $l601:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp599));
    }
    memset(&returnType620, 0, sizeof(returnType620));
    if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp621 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
            returnType620 = $tmp621;
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp622 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            returnType620 = $tmp622;
        }
    }
    }
    panda$core$Bit $tmp624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
    bool $tmp623 = $tmp624.value;
    if (!$tmp623) goto $l625;
    org$pandalanguage$pandac$Type* $tmp626 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp627 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType620, $tmp626);
    $tmp623 = $tmp627.value;
    $l625:;
    panda$core$Bit $tmp628 = { $tmp623 };
    if ($tmp628.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s629);
    }
    }
    bool $tmp630 = ((panda$core$Bit) { p_statements != NULL }).value;
    if (!$tmp630) goto $l631;
    panda$core$Bit $tmp632 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations580, p_statements);
    $tmp630 = $tmp632.value;
    $l631:;
    panda$core$Bit $tmp633 = { $tmp630 };
    if ($tmp633.value) {
    {
        panda$core$Int64 $tmp634 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp635 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations580->flags, $tmp634);
        annotations580->flags = $tmp635;
    }
    }
    if (((panda$core$Bit) { p_statements == NULL }).value) {
    {
        panda$core$Bit $tmp636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp636.value) {
        {
            panda$core$Int64 $tmp637 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
            panda$core$Int64 $tmp638 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations580->flags, $tmp637);
            annotations580->flags = $tmp638;
        }
        }
        else {
        panda$core$Int64 $tmp639 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
        panda$core$Int64 $tmp640 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations580->flags, $tmp639);
        panda$core$Bit $tmp641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp640, ((panda$core$Int64) { 0 }));
        if ($tmp641.value) {
        {
            panda$core$String* $tmp643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s642, p_name);
            panda$core$String* $tmp645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp643, &$s644);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, $tmp645);
        }
        }
        }
    }
    }
    {
        org$pandalanguage$pandac$MethodDecl* $tmp647 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp647, p_owner, p_position, doccomment573, annotations580, p_kind, p_name, parameters593, returnType620, p_statements);
        tmp1646 = $tmp647;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations580));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters593));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType620));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment573));
        }
        return tmp1646;
    }
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$327_9648;
    org$pandalanguage$pandac$Position position650;
    org$pandalanguage$pandac$ASTNode* dc652;
    panda$collections$ImmutableArray* annotations654;
    org$pandalanguage$pandac$ASTNode* varDecl656;
    org$pandalanguage$pandac$Position position659;
    org$pandalanguage$pandac$ASTNode* dc661;
    panda$collections$ImmutableArray* annotations663;
    org$pandalanguage$pandac$MethodDecl$Kind kind665;
    panda$core$String* name667;
    panda$collections$ImmutableArray* parameters669;
    org$pandalanguage$pandac$ASTNode* rawReturnType671;
    panda$collections$ImmutableArray* statements673;
    org$pandalanguage$pandac$MethodDecl* m675;
    org$pandalanguage$pandac$Position position678;
    org$pandalanguage$pandac$ASTNode* dc680;
    panda$collections$ImmutableArray* annotations682;
    org$pandalanguage$pandac$ClassDecl$Kind kind684;
    panda$core$String* name686;
    panda$collections$ImmutableArray* generics688;
    panda$collections$ImmutableArray* supertypes690;
    panda$collections$ImmutableArray* members692;
    org$pandalanguage$pandac$ClassDecl* inner694;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp699;
    org$pandalanguage$pandac$Position position705;
    org$pandalanguage$pandac$ASTNode* dc707;
    panda$core$String* name709;
    panda$collections$ImmutableArray* fields711;
    {
        $match$327_9648 = p_node;
        panda$core$Bit $tmp649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9648->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp649.value) {
        {
            org$pandalanguage$pandac$Position* $tmp651 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9648->$data + 0));
            position650 = *$tmp651;
            org$pandalanguage$pandac$ASTNode** $tmp653 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9648->$data + 16));
            dc652 = *$tmp653;
            panda$collections$ImmutableArray** $tmp655 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9648->$data + 24));
            annotations654 = *$tmp655;
            org$pandalanguage$pandac$ASTNode** $tmp657 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9648->$data + 32));
            varDecl656 = *$tmp657;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position650, dc652, annotations654, varDecl656);
        }
        }
        else {
        panda$core$Bit $tmp658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9648->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp658.value) {
        {
            org$pandalanguage$pandac$Position* $tmp660 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9648->$data + 0));
            position659 = *$tmp660;
            org$pandalanguage$pandac$ASTNode** $tmp662 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9648->$data + 16));
            dc661 = *$tmp662;
            panda$collections$ImmutableArray** $tmp664 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9648->$data + 24));
            annotations663 = *$tmp664;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp666 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$327_9648->$data + 32));
            kind665 = *$tmp666;
            panda$core$String** $tmp668 = ((panda$core$String**) ((char*) $match$327_9648->$data + 40));
            name667 = *$tmp668;
            panda$collections$ImmutableArray** $tmp670 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9648->$data + 48));
            parameters669 = *$tmp670;
            org$pandalanguage$pandac$ASTNode** $tmp672 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9648->$data + 56));
            rawReturnType671 = *$tmp672;
            panda$collections$ImmutableArray** $tmp674 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9648->$data + 64));
            statements673 = *$tmp674;
            org$pandalanguage$pandac$MethodDecl* $tmp676 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position659, dc661, annotations663, kind665, name667, parameters669, rawReturnType671, statements673);
            m675 = $tmp676;
            if (((panda$core$Bit) { m675 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m675));
                panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m675));
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9648->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp677.value) {
        {
            org$pandalanguage$pandac$Position* $tmp679 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9648->$data + 0));
            position678 = *$tmp679;
            org$pandalanguage$pandac$ASTNode** $tmp681 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9648->$data + 16));
            dc680 = *$tmp681;
            panda$collections$ImmutableArray** $tmp683 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9648->$data + 24));
            annotations682 = *$tmp683;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp685 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$327_9648->$data + 32));
            kind684 = *$tmp685;
            panda$core$String** $tmp687 = ((panda$core$String**) ((char*) $match$327_9648->$data + 40));
            name686 = *$tmp687;
            panda$collections$ImmutableArray** $tmp689 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9648->$data + 48));
            generics688 = *$tmp689;
            panda$collections$ImmutableArray** $tmp691 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9648->$data + 56));
            supertypes690 = *$tmp691;
            panda$collections$ImmutableArray** $tmp693 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9648->$data + 64));
            members692 = *$tmp693;
            org$pandalanguage$pandac$ClassDecl* $tmp695 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, ((org$pandalanguage$pandac$Symbol*) p_cl)->name, position678, dc680, annotations682, kind684, name686, generics688, supertypes690, members692);
            inner694 = $tmp695;
            if (((panda$core$Bit) { inner694 != NULL }).value) {
            {
                {
                    inner694->owner = p_cl;
                }
                panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner694));
                panda$core$String* $tmp697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s696);
                panda$core$Bit $tmp698 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner694)->name, $tmp697);
                PANDA_ASSERT($tmp698.value);
                panda$core$Int64 $tmp700 = panda$core$String$length$R$panda$core$Int64(((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$Int64 $tmp701 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp700, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp699, ((panda$core$Int64$nullable) { $tmp701, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp702 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner694)->name, $tmp699);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner694), $tmp702);
                panda$collections$Array$add$panda$collections$Array$T(inner694->symbolTable->parents, ((panda$core$Object*) p_cl->symbolTable));
                panda$core$String* $tmp703 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner694->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_cl), $tmp703);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9648->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp704.value) {
        {
            org$pandalanguage$pandac$Position* $tmp706 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9648->$data + 0));
            position705 = *$tmp706;
            org$pandalanguage$pandac$ASTNode** $tmp708 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9648->$data + 16));
            dc707 = *$tmp708;
            panda$core$String** $tmp710 = ((panda$core$String**) ((char*) $match$327_9648->$data + 24));
            name709 = *$tmp710;
            panda$collections$ImmutableArray** $tmp712 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9648->$data + 32));
            fields711 = *$tmp712;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position705, dc707, name709, fields711);
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
    panda$core$String* doccomment713;
    org$pandalanguage$pandac$ASTNode* $match$365_13714;
    org$pandalanguage$pandac$Position position716;
    panda$core$String* text718;
    panda$collections$Array* fields720;
    panda$collections$Iterator* t$Iter722;
    org$pandalanguage$pandac$ASTNode* t734;
    org$pandalanguage$pandac$ChoiceEntry* entry740;
    panda$core$Bit found743;
    panda$collections$Iterator* m$Iter744;
    org$pandalanguage$pandac$MethodDecl* m756;
    panda$core$Range$LTpanda$core$Int64$GT $tmp769;
    panda$collections$Array* parameters795;
    panda$collections$Array* statements800;
    org$pandalanguage$pandac$parser$Token$Kind $tmp805;
    panda$core$Range$LTpanda$core$Int64$GT $tmp808;
    org$pandalanguage$pandac$parser$Token$Kind $tmp833;
    org$pandalanguage$pandac$MethodDecl* synthetic846;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp849;
    memset(&doccomment713, 0, sizeof(doccomment713));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment713 = NULL;
        }
    }
    }
    else {
    {
        {
            $match$365_13714 = p_rawDoccomment;
            panda$core$Bit $tmp715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$365_13714->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp715.value) {
            {
                org$pandalanguage$pandac$Position* $tmp717 = ((org$pandalanguage$pandac$Position*) ((char*) $match$365_13714->$data + 0));
                position716 = *$tmp717;
                panda$core$String** $tmp719 = ((panda$core$String**) ((char*) $match$365_13714->$data + 16));
                text718 = *$tmp719;
                {
                    doccomment713 = text718;
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
    panda$collections$Array* $tmp721 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp721);
    fields720 = $tmp721;
    {
        ITable* $tmp723 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
        while ($tmp723->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp723 = $tmp723->next;
        }
        $fn725 $tmp724 = $tmp723->methods[0];
        panda$collections$Iterator* $tmp726 = $tmp724(((panda$collections$Iterable*) p_rawFields));
        t$Iter722 = $tmp726;
        $l727:;
        ITable* $tmp729 = t$Iter722->$class->itable;
        while ($tmp729->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp729 = $tmp729->next;
        }
        $fn731 $tmp730 = $tmp729->methods[0];
        panda$core$Bit $tmp732 = $tmp730(t$Iter722);
        panda$core$Bit $tmp733 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp732);
        if (!$tmp733.value) goto $l728;
        {
            ITable* $tmp735 = t$Iter722->$class->itable;
            while ($tmp735->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp735 = $tmp735->next;
            }
            $fn737 $tmp736 = $tmp735->methods[1];
            panda$core$Object* $tmp738 = $tmp736(t$Iter722);
            t734 = ((org$pandalanguage$pandac$ASTNode*) $tmp738);
            org$pandalanguage$pandac$Type* $tmp739 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t734);
            panda$collections$Array$add$panda$collections$Array$T(fields720, ((panda$core$Object*) $tmp739));
        }
        goto $l727;
        $l728:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp726));
    }
    org$pandalanguage$pandac$ChoiceEntry* $tmp741 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(97, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
    panda$core$Int64 $tmp742 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
    org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp741, p_cl, p_position, p_name, doccomment713, $tmp742, ((panda$collections$ListView*) fields720));
    entry740 = $tmp741;
    panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry740));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry740));
    found743 = ((panda$core$Bit) { false });
    {
        ITable* $tmp745 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp745->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp745 = $tmp745->next;
        }
        $fn747 $tmp746 = $tmp745->methods[0];
        panda$collections$Iterator* $tmp748 = $tmp746(((panda$collections$Iterable*) p_cl->methods));
        m$Iter744 = $tmp748;
        $l749:;
        ITable* $tmp751 = m$Iter744->$class->itable;
        while ($tmp751->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp751 = $tmp751->next;
        }
        $fn753 $tmp752 = $tmp751->methods[0];
        panda$core$Bit $tmp754 = $tmp752(m$Iter744);
        panda$core$Bit $tmp755 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp754);
        if (!$tmp755.value) goto $l750;
        {
            ITable* $tmp757 = m$Iter744->$class->itable;
            while ($tmp757->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp757 = $tmp757->next;
            }
            $fn759 $tmp758 = $tmp757->methods[1];
            panda$core$Object* $tmp760 = $tmp758(m$Iter744);
            m756 = ((org$pandalanguage$pandac$MethodDecl*) $tmp760);
            panda$core$Bit $tmp761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m756->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp761.value);
            panda$core$Int64 $tmp762 = panda$collections$Array$get_count$R$panda$core$Int64(m756->parameters);
            panda$core$Int64 $tmp763 = panda$collections$Array$get_count$R$panda$core$Int64(fields720);
            panda$core$Int64 $tmp764 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp763, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp765 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp762, $tmp764);
            if ($tmp765.value) {
            {
                goto $l749;
            }
            }
            panda$core$Object* $tmp766 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m756->parameters, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp767 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp768 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp766)->type, $tmp767);
            PANDA_ASSERT($tmp768.value);
            panda$core$Int64 $tmp770 = panda$collections$Array$get_count$R$panda$core$Int64(fields720);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp769, ((panda$core$Int64) { 0 }), $tmp770, ((panda$core$Bit) { false }));
            int64_t $tmp772 = $tmp769.min.value;
            panda$core$Int64 i771 = { $tmp772 };
            int64_t $tmp774 = $tmp769.max.value;
            bool $tmp775 = $tmp769.inclusive.value;
            if ($tmp775) goto $l782; else goto $l783;
            $l782:;
            if ($tmp772 <= $tmp774) goto $l776; else goto $l778;
            $l783:;
            if ($tmp772 < $tmp774) goto $l776; else goto $l778;
            $l776:;
            {
                panda$core$Object* $tmp784 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields720, i771);
                panda$core$Int64 $tmp785 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i771, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp786 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m756->parameters, $tmp785);
                panda$core$Bit $tmp787 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp784), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp786)->type);
                if ($tmp787.value) {
                {
                    goto $l749;
                }
                }
            }
            $l779:;
            int64_t $tmp789 = $tmp774 - i771.value;
            if ($tmp775) goto $l790; else goto $l791;
            $l790:;
            if ((uint64_t) $tmp789 >= 1) goto $l788; else goto $l778;
            $l791:;
            if ((uint64_t) $tmp789 > 1) goto $l788; else goto $l778;
            $l788:;
            i771.value += 1;
            goto $l776;
            $l778:;
            {
                entry740->initMethod = m756;
            }
            found743 = ((panda$core$Bit) { true });
            goto $l750;
        }
        goto $l749;
        $l750:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp748));
    }
    panda$core$Bit $tmp794 = panda$core$Bit$$NOT$R$panda$core$Bit(found743);
    if ($tmp794.value) {
    {
        panda$collections$Array* $tmp796 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp796);
        parameters795 = $tmp796;
        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp797 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
        org$pandalanguage$pandac$Type* $tmp799 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp797, &$s798, $tmp799);
        panda$collections$Array$add$panda$collections$Array$T(parameters795, ((panda$core$Object*) $tmp797));
        panda$collections$Array* $tmp801 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp801);
        statements800 = $tmp801;
        org$pandalanguage$pandac$ASTNode* $tmp802 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode* $tmp803 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp803, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s804);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp805, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$ASTNode* $tmp806 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp806, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s807);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp802, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp803, $tmp805, $tmp806);
        panda$collections$Array$add$panda$collections$Array$T(statements800, ((panda$core$Object*) $tmp802));
        panda$core$Int64 $tmp809 = panda$collections$Array$get_count$R$panda$core$Int64(fields720);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp808, ((panda$core$Int64) { 0 }), $tmp809, ((panda$core$Bit) { false }));
        int64_t $tmp811 = $tmp808.min.value;
        panda$core$Int64 i810 = { $tmp811 };
        int64_t $tmp813 = $tmp808.max.value;
        bool $tmp814 = $tmp808.inclusive.value;
        if ($tmp814) goto $l821; else goto $l822;
        $l821:;
        if ($tmp811 <= $tmp813) goto $l815; else goto $l817;
        $l822:;
        if ($tmp811 < $tmp813) goto $l815; else goto $l817;
        $l815:;
        {
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp823 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
            panda$core$Int64$wrapper* $tmp825;
            $tmp825 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp825->value = i810;
            panda$core$String* $tmp826 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s824, ((panda$core$Object*) $tmp825));
            panda$core$String* $tmp828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp826, &$s827);
            panda$core$Object* $tmp829 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields720, i810);
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp823, $tmp828, ((org$pandalanguage$pandac$Type*) $tmp829));
            panda$collections$Array$add$panda$collections$Array$T(parameters795, ((panda$core$Object*) $tmp823));
            org$pandalanguage$pandac$ASTNode* $tmp830 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode* $tmp831 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode* $tmp832 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp832, ((panda$core$Int64) { 32 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64($tmp831, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp832, entry740, i810);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp833, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$ASTNode* $tmp834 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$wrapper* $tmp836;
            $tmp836 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp836->value = i810;
            panda$core$String* $tmp837 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s835, ((panda$core$Object*) $tmp836));
            panda$core$String* $tmp839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp837, &$s838);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp834, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp839);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp830, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp831, $tmp833, $tmp834);
            panda$collections$Array$add$panda$collections$Array$T(statements800, ((panda$core$Object*) $tmp830));
        }
        $l818:;
        int64_t $tmp841 = $tmp813 - i810.value;
        if ($tmp814) goto $l842; else goto $l843;
        $l842:;
        if ((uint64_t) $tmp841 >= 1) goto $l840; else goto $l817;
        $l843:;
        if ((uint64_t) $tmp841 > 1) goto $l840; else goto $l817;
        $l840:;
        i810.value += 1;
        goto $l815;
        $l817:;
        org$pandalanguage$pandac$MethodDecl* $tmp847 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp848 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init($tmp848);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp849, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$Type* $tmp851 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp852 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements800);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp847, p_cl, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, NULL, $tmp848, $tmp849, &$s850, parameters795, $tmp851, $tmp852);
        synthetic846 = $tmp847;
        {
            entry740->initMethod = synthetic846;
        }
        panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) synthetic846));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) synthetic846));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters795));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements800));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) synthetic846));
        }
    }
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields720));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry740));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment713));
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName853;
    panda$core$String* doccomment862;
    org$pandalanguage$pandac$ASTNode* $match$440_13863;
    org$pandalanguage$pandac$Position position865;
    panda$core$String* text867;
    org$pandalanguage$pandac$Annotations* annotations869;
    panda$collections$Array* parameters871;
    panda$collections$Iterator* p$Iter873;
    org$pandalanguage$pandac$ASTNode* p885;
    panda$core$String* name890;
    org$pandalanguage$pandac$Type* bound891;
    org$pandalanguage$pandac$ASTNode* $match$453_17892;
    panda$core$String* id894;
    panda$core$String* id898;
    org$pandalanguage$pandac$ASTNode* type900;
    panda$collections$Array* supertypes908;
    panda$collections$Iterator* s$Iter912;
    org$pandalanguage$pandac$ASTNode* s924;
    org$pandalanguage$pandac$ClassDecl* result930;
    org$pandalanguage$pandac$FieldDecl* rawValue933;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp936;
    org$pandalanguage$pandac$FieldDecl* data939;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp942;
    panda$collections$Iterator* m$Iter945;
    org$pandalanguage$pandac$ASTNode* m957;
    org$pandalanguage$pandac$ASTNode* $match$492_13962;
    org$pandalanguage$pandac$Position mPosition964;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind966;
    org$pandalanguage$pandac$ClassDecl$Kind $match$495_25969;
    panda$core$Bit foundInit975;
    panda$core$Bit foundCleanup976;
    panda$collections$Iterator* m$Iter977;
    org$pandalanguage$pandac$MethodDecl* m989;
    org$pandalanguage$pandac$MethodDecl* defaultInit1012;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1015;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1030;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1034;
    panda$core$Bit haveFields1040;
    panda$collections$Iterator* e$Iter1041;
    org$pandalanguage$pandac$ChoiceEntry* e1053;
    org$pandalanguage$pandac$ClassDecl* tmp21063;
    memset(&fullName853, 0, sizeof(fullName853));
    panda$core$Bit $tmp855 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s854);
    if ($tmp855.value) {
    {
        {
            panda$core$String* $tmp856 = panda$core$String$convert$R$panda$core$String(p_contextName);
            panda$core$String* $tmp858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp856, &$s857);
            panda$core$String* $tmp859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp858, p_name);
            panda$core$String* $tmp861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp859, &$s860);
            fullName853 = $tmp861;
        }
    }
    }
    else {
    {
        {
            fullName853 = p_name;
        }
    }
    }
    memset(&doccomment862, 0, sizeof(doccomment862));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment862 = NULL;
        }
    }
    }
    else {
    {
        {
            $match$440_13863 = p_rawDoccomment;
            panda$core$Bit $tmp864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$440_13863->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp864.value) {
            {
                org$pandalanguage$pandac$Position* $tmp866 = ((org$pandalanguage$pandac$Position*) ((char*) $match$440_13863->$data + 0));
                position865 = *$tmp866;
                panda$core$String** $tmp868 = ((panda$core$String**) ((char*) $match$440_13863->$data + 16));
                text867 = *$tmp868;
                {
                    doccomment862 = text867;
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
    org$pandalanguage$pandac$Annotations* $tmp870 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations869 = $tmp870;
    panda$collections$Array* $tmp872 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp872);
    parameters871 = $tmp872;
    if (((panda$core$Bit) { p_generics != NULL }).value) {
    {
        {
            ITable* $tmp874 = ((panda$collections$Iterable*) p_generics)->$class->itable;
            while ($tmp874->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp874 = $tmp874->next;
            }
            $fn876 $tmp875 = $tmp874->methods[0];
            panda$collections$Iterator* $tmp877 = $tmp875(((panda$collections$Iterable*) p_generics));
            p$Iter873 = $tmp877;
            $l878:;
            ITable* $tmp880 = p$Iter873->$class->itable;
            while ($tmp880->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp880 = $tmp880->next;
            }
            $fn882 $tmp881 = $tmp880->methods[0];
            panda$core$Bit $tmp883 = $tmp881(p$Iter873);
            panda$core$Bit $tmp884 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp883);
            if (!$tmp884.value) goto $l879;
            {
                ITable* $tmp886 = p$Iter873->$class->itable;
                while ($tmp886->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp886 = $tmp886->next;
                }
                $fn888 $tmp887 = $tmp886->methods[1];
                panda$core$Object* $tmp889 = $tmp887(p$Iter873);
                p885 = ((org$pandalanguage$pandac$ASTNode*) $tmp889);
                memset(&name890, 0, sizeof(name890));
                memset(&bound891, 0, sizeof(bound891));
                {
                    $match$453_17892 = p885;
                    panda$core$Bit $tmp893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453_17892->$rawValue, ((panda$core$Int64) { 18 }));
                    if ($tmp893.value) {
                    {
                        panda$core$String** $tmp895 = ((panda$core$String**) ((char*) $match$453_17892->$data + 16));
                        id894 = *$tmp895;
                        {
                            name890 = id894;
                        }
                        {
                            org$pandalanguage$pandac$Type* $tmp896 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                            bound891 = $tmp896;
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453_17892->$rawValue, ((panda$core$Int64) { 36 }));
                    if ($tmp897.value) {
                    {
                        panda$core$String** $tmp899 = ((panda$core$String**) ((char*) $match$453_17892->$data + 16));
                        id898 = *$tmp899;
                        org$pandalanguage$pandac$ASTNode** $tmp901 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$453_17892->$data + 24));
                        type900 = *$tmp901;
                        {
                            name890 = id898;
                        }
                        {
                            org$pandalanguage$pandac$Type* $tmp902 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type900);
                            bound891 = $tmp902;
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
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp903 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                org$pandalanguage$pandac$Position $tmp905 = (($fn904) p885->$class->vtable[2])(p885);
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp903, $tmp905, fullName853, name890, bound891);
                panda$collections$Array$add$panda$collections$Array$T(parameters871, ((panda$core$Object*) $tmp903));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound891));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name890));
                }
            }
            goto $l878;
            $l879:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp877));
        }
        panda$core$Bit $tmp906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp906.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s907);
        }
        }
    }
    }
    panda$collections$Array* $tmp909 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp909);
    supertypes908 = $tmp909;
    if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
    {
        panda$core$Bit $tmp910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp910.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s911);
        }
        }
        {
            ITable* $tmp913 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
            while ($tmp913->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp913 = $tmp913->next;
            }
            $fn915 $tmp914 = $tmp913->methods[0];
            panda$collections$Iterator* $tmp916 = $tmp914(((panda$collections$Iterable*) p_rawSupertypes));
            s$Iter912 = $tmp916;
            $l917:;
            ITable* $tmp919 = s$Iter912->$class->itable;
            while ($tmp919->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp919 = $tmp919->next;
            }
            $fn921 $tmp920 = $tmp919->methods[0];
            panda$core$Bit $tmp922 = $tmp920(s$Iter912);
            panda$core$Bit $tmp923 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp922);
            if (!$tmp923.value) goto $l918;
            {
                ITable* $tmp925 = s$Iter912->$class->itable;
                while ($tmp925->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp925 = $tmp925->next;
                }
                $fn927 $tmp926 = $tmp925->methods[1];
                panda$core$Object* $tmp928 = $tmp926(s$Iter912);
                s924 = ((org$pandalanguage$pandac$ASTNode*) $tmp928);
                org$pandalanguage$pandac$Type* $tmp929 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s924);
                panda$collections$Array$add$panda$collections$Array$T(supertypes908, ((panda$core$Object*) $tmp929));
            }
            goto $l917;
            $l918:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp916));
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp931 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(201, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp931, p_source, p_position, p_aliases, doccomment862, annotations869, p_kind, fullName853, ((panda$collections$ListView*) supertypes908), parameters871, self->compiler->root);
    result930 = $tmp931;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result930));
    panda$core$Bit $tmp932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp932.value) {
    {
        org$pandalanguage$pandac$FieldDecl* $tmp934 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp935 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init($tmp935);
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp936, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp938 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp934, result930, ((org$pandalanguage$pandac$Symbol*) result930)->position, NULL, $tmp935, $tmp936, &$s937, $tmp938, NULL);
        rawValue933 = $tmp934;
        panda$collections$Array$add$panda$collections$Array$T(result930->fields, ((panda$core$Object*) rawValue933));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result930->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue933));
        org$pandalanguage$pandac$FieldDecl* $tmp940 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp941 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init($tmp941);
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp942, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp944 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp940, result930, ((org$pandalanguage$pandac$Symbol*) result930)->position, NULL, $tmp941, $tmp942, &$s943, $tmp944, NULL);
        data939 = $tmp940;
        panda$collections$Array$add$panda$collections$Array$T(result930->fields, ((panda$core$Object*) data939));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result930->symbolTable, ((org$pandalanguage$pandac$Symbol*) data939));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue933));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data939));
        }
    }
    }
    {
        ITable* $tmp946 = ((panda$collections$Iterable*) p_members)->$class->itable;
        while ($tmp946->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp946 = $tmp946->next;
        }
        $fn948 $tmp947 = $tmp946->methods[0];
        panda$collections$Iterator* $tmp949 = $tmp947(((panda$collections$Iterable*) p_members));
        m$Iter945 = $tmp949;
        $l950:;
        ITable* $tmp952 = m$Iter945->$class->itable;
        while ($tmp952->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp952 = $tmp952->next;
        }
        $fn954 $tmp953 = $tmp952->methods[0];
        panda$core$Bit $tmp955 = $tmp953(m$Iter945);
        panda$core$Bit $tmp956 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp955);
        if (!$tmp956.value) goto $l951;
        {
            ITable* $tmp958 = m$Iter945->$class->itable;
            while ($tmp958->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp958 = $tmp958->next;
            }
            $fn960 $tmp959 = $tmp958->methods[1];
            panda$core$Object* $tmp961 = $tmp959(m$Iter945);
            m957 = ((org$pandalanguage$pandac$ASTNode*) $tmp961);
            {
                $match$492_13962 = m957;
                panda$core$Bit $tmp963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$492_13962->$rawValue, ((panda$core$Int64) { 23 }));
                if ($tmp963.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp965 = ((org$pandalanguage$pandac$Position*) ((char*) $match$492_13962->$data + 0));
                    mPosition964 = *$tmp965;
                    org$pandalanguage$pandac$MethodDecl$Kind* $tmp967 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$492_13962->$data + 32));
                    methodKind966 = *$tmp967;
                    panda$core$Bit $tmp968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind966.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp968.value) {
                    {
                        {
                            $match$495_25969 = p_kind;
                            panda$core$Bit $tmp970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_25969.$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp970.value) {
                            {
                            }
                            }
                            else {
                            panda$core$Bit $tmp971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_25969.$rawValue, ((panda$core$Int64) { 1 }));
                            if ($tmp971.value) {
                            {
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, mPosition964, &$s972);
                            }
                            }
                            else {
                            panda$core$Bit $tmp973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_25969.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp973.value) {
                            {
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, mPosition964, &$s974);
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
            org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result930, m957);
        }
        goto $l950;
        $l951:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp949));
    }
    foundInit975 = ((panda$core$Bit) { false });
    foundCleanup976 = ((panda$core$Bit) { false });
    {
        ITable* $tmp978 = ((panda$collections$Iterable*) result930->methods)->$class->itable;
        while ($tmp978->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp978 = $tmp978->next;
        }
        $fn980 $tmp979 = $tmp978->methods[0];
        panda$collections$Iterator* $tmp981 = $tmp979(((panda$collections$Iterable*) result930->methods));
        m$Iter977 = $tmp981;
        $l982:;
        ITable* $tmp984 = m$Iter977->$class->itable;
        while ($tmp984->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp984 = $tmp984->next;
        }
        $fn986 $tmp985 = $tmp984->methods[0];
        panda$core$Bit $tmp987 = $tmp985(m$Iter977);
        panda$core$Bit $tmp988 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp987);
        if (!$tmp988.value) goto $l983;
        {
            ITable* $tmp990 = m$Iter977->$class->itable;
            while ($tmp990->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp990 = $tmp990->next;
            }
            $fn992 $tmp991 = $tmp990->methods[1];
            panda$core$Object* $tmp993 = $tmp991(m$Iter977);
            m989 = ((org$pandalanguage$pandac$MethodDecl*) $tmp993);
            panda$core$Bit $tmp994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m989->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp994.value) {
            {
                foundInit975 = ((panda$core$Bit) { true });
            }
            }
            panda$core$Bit $tmp997 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m989)->name, &$s996);
            bool $tmp995 = $tmp997.value;
            if (!$tmp995) goto $l998;
            panda$core$Int64 $tmp999 = panda$collections$Array$get_count$R$panda$core$Int64(m989->parameters);
            panda$core$Bit $tmp1000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp999, ((panda$core$Int64) { 0 }));
            $tmp995 = $tmp1000.value;
            $l998:;
            panda$core$Bit $tmp1001 = { $tmp995 };
            if ($tmp1001.value) {
            {
                foundCleanup976 = ((panda$core$Bit) { true });
            }
            }
        }
        goto $l982;
        $l983:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp981));
    }
    panda$core$Bit $tmp1004 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit975);
    bool $tmp1003 = $tmp1004.value;
    if (!$tmp1003) goto $l1005;
    panda$core$Bit $tmp1006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
    $tmp1003 = $tmp1006.value;
    $l1005:;
    panda$core$Bit $tmp1007 = { $tmp1003 };
    bool $tmp1002 = $tmp1007.value;
    if (!$tmp1002) goto $l1008;
    panda$core$Bit $tmp1010 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result930)->name, &$s1009);
    $tmp1002 = $tmp1010.value;
    $l1008:;
    panda$core$Bit $tmp1011 = { $tmp1002 };
    if ($tmp1011.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp1013 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp1014 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init($tmp1014);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1015, ((panda$core$Int64) { 2 }));
        panda$collections$Array* $tmp1017 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1017);
        org$pandalanguage$pandac$Type* $tmp1018 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp1019 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp1019);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1013, result930, p_position, NULL, $tmp1014, $tmp1015, &$s1016, $tmp1017, $tmp1018, $tmp1019);
        defaultInit1012 = $tmp1013;
        panda$collections$Array$add$panda$collections$Array$T(result930->methods, ((panda$core$Object*) defaultInit1012));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result930->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1012));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1012));
    }
    }
    panda$core$Bit $tmp1022 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup976);
    bool $tmp1021 = $tmp1022.value;
    if (!$tmp1021) goto $l1023;
    panda$core$Bit $tmp1024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
    $tmp1021 = $tmp1024.value;
    $l1023:;
    panda$core$Bit $tmp1025 = { $tmp1021 };
    bool $tmp1020 = $tmp1025.value;
    if (!$tmp1020) goto $l1026;
    panda$core$Bit $tmp1028 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result930)->name, &$s1027);
    $tmp1020 = $tmp1028.value;
    $l1026:;
    panda$core$Bit $tmp1029 = { $tmp1020 };
    if ($tmp1029.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp1031 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp1032 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        panda$core$Int64 $tmp1033 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1032, $tmp1033);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1034, ((panda$core$Int64) { 0 }));
        panda$collections$Array* $tmp1036 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1036);
        org$pandalanguage$pandac$Type* $tmp1037 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp1038 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp1038);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1031, result930, p_position, NULL, $tmp1032, $tmp1034, &$s1035, $tmp1036, $tmp1037, $tmp1038);
        defaultCleanup1030 = $tmp1031;
        panda$collections$Array$add$panda$collections$Array$T(result930->methods, ((panda$core$Object*) defaultCleanup1030));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result930->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1030));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1030));
    }
    }
    panda$core$Bit $tmp1039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp1039.value) {
    {
        haveFields1040 = ((panda$core$Bit) { false });
        {
            ITable* $tmp1042 = ((panda$collections$Iterable*) result930->choiceEntries)->$class->itable;
            while ($tmp1042->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1042 = $tmp1042->next;
            }
            $fn1044 $tmp1043 = $tmp1042->methods[0];
            panda$collections$Iterator* $tmp1045 = $tmp1043(((panda$collections$Iterable*) result930->choiceEntries));
            e$Iter1041 = $tmp1045;
            $l1046:;
            ITable* $tmp1048 = e$Iter1041->$class->itable;
            while ($tmp1048->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1048 = $tmp1048->next;
            }
            $fn1050 $tmp1049 = $tmp1048->methods[0];
            panda$core$Bit $tmp1051 = $tmp1049(e$Iter1041);
            panda$core$Bit $tmp1052 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1051);
            if (!$tmp1052.value) goto $l1047;
            {
                ITable* $tmp1054 = e$Iter1041->$class->itable;
                while ($tmp1054->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1054 = $tmp1054->next;
                }
                $fn1056 $tmp1055 = $tmp1054->methods[1];
                panda$core$Object* $tmp1057 = $tmp1055(e$Iter1041);
                e1053 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1057);
                panda$core$Int64 $tmp1058 = panda$collections$Array$get_count$R$panda$core$Int64(e1053->fields);
                panda$core$Bit $tmp1059 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1058, ((panda$core$Int64) { 0 }));
                if ($tmp1059.value) {
                {
                    haveFields1040 = ((panda$core$Bit) { true });
                    goto $l1047;
                }
                }
            }
            goto $l1046;
            $l1047:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1045));
        }
        panda$core$Bit $tmp1060 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1040);
        if ($tmp1060.value) {
        {
            {
                org$pandalanguage$pandac$Type* $tmp1061 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                result930->rawSuper = $tmp1061;
            }
        }
        }
    }
    }
    panda$core$Object* $tmp1062 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    {
        tmp21063 = result930;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName853));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result930));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations869));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters871));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes908));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment862));
        }
        return tmp21063;
    }
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter1064;
    org$pandalanguage$pandac$ClassDecl* inner1076;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp1065 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp1065->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1065 = $tmp1065->next;
        }
        $fn1067 $tmp1066 = $tmp1065->methods[0];
        panda$collections$Iterator* $tmp1068 = $tmp1066(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter1064 = $tmp1068;
        $l1069:;
        ITable* $tmp1071 = inner$Iter1064->$class->itable;
        while ($tmp1071->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1071 = $tmp1071->next;
        }
        $fn1073 $tmp1072 = $tmp1071->methods[0];
        panda$core$Bit $tmp1074 = $tmp1072(inner$Iter1064);
        panda$core$Bit $tmp1075 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1074);
        if (!$tmp1075.value) goto $l1070;
        {
            ITable* $tmp1077 = inner$Iter1064->$class->itable;
            while ($tmp1077->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1077 = $tmp1077->next;
            }
            $fn1079 $tmp1078 = $tmp1077->methods[1];
            panda$core$Object* $tmp1080 = $tmp1078(inner$Iter1064);
            inner1076 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1080);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1076, p_arr);
        }
        goto $l1069;
        $l1070:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1068));
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$556_91081;
    panda$collections$ImmutableArray* entries1083;
    panda$collections$Array* result1085;
    panda$core$String* currentPackage1087;
    panda$collections$HashMap* aliases1089;
    panda$collections$Iterator* e$Iter1091;
    org$pandalanguage$pandac$ASTNode* e1103;
    org$pandalanguage$pandac$ASTNode* $match$562_211108;
    panda$core$String* name1110;
    panda$core$String* fullName1113;
    panda$core$String$Index$nullable idx1115;
    panda$core$String* alias1118;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1119;
    org$pandalanguage$pandac$Position position1123;
    org$pandalanguage$pandac$ASTNode* dc1125;
    panda$collections$ImmutableArray* annotations1127;
    org$pandalanguage$pandac$ClassDecl$Kind kind1129;
    panda$core$String* name1131;
    panda$collections$ImmutableArray* generics1133;
    panda$collections$ImmutableArray* supertypes1135;
    panda$collections$ImmutableArray* members1137;
    org$pandalanguage$pandac$ClassDecl* cl1139;
    {
        $match$556_91081 = p_file;
        panda$core$Bit $tmp1082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$556_91081->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1082.value) {
        {
            panda$collections$ImmutableArray** $tmp1084 = ((panda$collections$ImmutableArray**) ((char*) $match$556_91081->$data + 0));
            entries1083 = *$tmp1084;
            panda$collections$Array* $tmp1086 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp1086);
            result1085 = $tmp1086;
            currentPackage1087 = &$s1088;
            panda$collections$HashMap* $tmp1090 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
            panda$collections$HashMap$init($tmp1090);
            aliases1089 = $tmp1090;
            {
                ITable* $tmp1092 = ((panda$collections$Iterable*) entries1083)->$class->itable;
                while ($tmp1092->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1092 = $tmp1092->next;
                }
                $fn1094 $tmp1093 = $tmp1092->methods[0];
                panda$collections$Iterator* $tmp1095 = $tmp1093(((panda$collections$Iterable*) entries1083));
                e$Iter1091 = $tmp1095;
                $l1096:;
                ITable* $tmp1098 = e$Iter1091->$class->itable;
                while ($tmp1098->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1098 = $tmp1098->next;
                }
                $fn1100 $tmp1099 = $tmp1098->methods[0];
                panda$core$Bit $tmp1101 = $tmp1099(e$Iter1091);
                panda$core$Bit $tmp1102 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1101);
                if (!$tmp1102.value) goto $l1097;
                {
                    ITable* $tmp1104 = e$Iter1091->$class->itable;
                    while ($tmp1104->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1104 = $tmp1104->next;
                    }
                    $fn1106 $tmp1105 = $tmp1104->methods[1];
                    panda$core$Object* $tmp1107 = $tmp1105(e$Iter1091);
                    e1103 = ((org$pandalanguage$pandac$ASTNode*) $tmp1107);
                    {
                        $match$562_211108 = e1103;
                        panda$core$Bit $tmp1109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$562_211108->$rawValue, ((panda$core$Int64) { 26 }));
                        if ($tmp1109.value) {
                        {
                            panda$core$String** $tmp1111 = ((panda$core$String**) ((char*) $match$562_211108->$data + 16));
                            name1110 = *$tmp1111;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1087));
                                currentPackage1087 = name1110;
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp1112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$562_211108->$rawValue, ((panda$core$Int64) { 37 }));
                        if ($tmp1112.value) {
                        {
                            panda$core$String** $tmp1114 = ((panda$core$String**) ((char*) $match$562_211108->$data + 16));
                            fullName1113 = *$tmp1114;
                            panda$core$String$Index$nullable $tmp1117 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName1113, &$s1116);
                            idx1115 = $tmp1117;
                            memset(&alias1118, 0, sizeof(alias1118));
                            if (((panda$core$Bit) { idx1115.nonnull }).value) {
                            {
                                {
                                    panda$core$String$Index $tmp1120 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName1113, ((panda$core$String$Index) idx1115.value));
                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1119, ((panda$core$String$Index$nullable) { $tmp1120, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                    panda$core$String* $tmp1121 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName1113, $tmp1119);
                                    alias1118 = $tmp1121;
                                }
                            }
                            }
                            else {
                            {
                                {
                                    alias1118 = fullName1113;
                                }
                            }
                            }
                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1089, ((panda$collections$Key*) alias1118), ((panda$core$Object*) fullName1113));
                        }
                        }
                        else {
                        panda$core$Bit $tmp1122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$562_211108->$rawValue, ((panda$core$Int64) { 9 }));
                        if ($tmp1122.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp1124 = ((org$pandalanguage$pandac$Position*) ((char*) $match$562_211108->$data + 0));
                            position1123 = *$tmp1124;
                            org$pandalanguage$pandac$ASTNode** $tmp1126 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$562_211108->$data + 16));
                            dc1125 = *$tmp1126;
                            panda$collections$ImmutableArray** $tmp1128 = ((panda$collections$ImmutableArray**) ((char*) $match$562_211108->$data + 24));
                            annotations1127 = *$tmp1128;
                            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1130 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$562_211108->$data + 32));
                            kind1129 = *$tmp1130;
                            panda$core$String** $tmp1132 = ((panda$core$String**) ((char*) $match$562_211108->$data + 40));
                            name1131 = *$tmp1132;
                            panda$collections$ImmutableArray** $tmp1134 = ((panda$collections$ImmutableArray**) ((char*) $match$562_211108->$data + 48));
                            generics1133 = *$tmp1134;
                            panda$collections$ImmutableArray** $tmp1136 = ((panda$collections$ImmutableArray**) ((char*) $match$562_211108->$data + 56));
                            supertypes1135 = *$tmp1136;
                            panda$collections$ImmutableArray** $tmp1138 = ((panda$collections$ImmutableArray**) ((char*) $match$562_211108->$data + 64));
                            members1137 = *$tmp1138;
                            org$pandalanguage$pandac$ClassDecl* $tmp1140 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1089), currentPackage1087, position1123, dc1125, annotations1127, kind1129, name1131, generics1133, supertypes1135, members1137);
                            cl1139 = $tmp1140;
                            if (((panda$core$Bit) { cl1139 != NULL }).value) {
                            {
                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl1139, result1085);
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
                goto $l1096;
                $l1097:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1095));
            }
            return ((panda$collections$ListView*) result1085);
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

