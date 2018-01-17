#include "org/pandalanguage/pandac/Scanner.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/String.h"
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


org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Scanner$cleanup, org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit, org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT} };

typedef panda$collections$Iterator* (*$fn42)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn48)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn54)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn67)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn73)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn79)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn168)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn174)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn180)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn228)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn234)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn240)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn255)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn261)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn267)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn290)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn296)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn302)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn320)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn326)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn332)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn350)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn356)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn362)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn376)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn382)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn388)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn404)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn410)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn416)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn423)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn429)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn435)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn463)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn469)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn475)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn488)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn494)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn500)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn507)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn513)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn519)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn533)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn539)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn545)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn563)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn569)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn575)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn606)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn612)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn618)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn736)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn742)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn748)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn759)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn765)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn771)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn902)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn908)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn914)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn931)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn943)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn949)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn955)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn981)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn987)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn993)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1013)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1019)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1025)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1085)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1091)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1097)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1107)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1113)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1119)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1136)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1142)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1148)(panda$collections$Iterator*);

static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x6f\x6e\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x27", 30, -1250916154819313721, NULL };
static panda$core$String $s653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x68\x61\x76\x65\x20\x61\x20\x62\x6f\x64\x79", 16, -7652461387112275530, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s875 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s885 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1074 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s1158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    {
        self->compiler = p_compiler;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_type) {
    org$pandalanguage$pandac$ASTNode* $match$18_91;
    org$pandalanguage$pandac$Position position3;
    panda$core$String* name5;
    org$pandalanguage$pandac$Position position10;
    org$pandalanguage$pandac$ASTNode* base12;
    panda$collections$Array* subtypes14;
    org$pandalanguage$pandac$Position position24;
    panda$core$String* base26;
    panda$collections$ImmutableArray* args28;
    panda$collections$Array* subtypes30;
    panda$core$MutableString* name33;
    panda$core$Char8 $tmp36;
    panda$core$String* separator37;
    panda$collections$Iterator* arg$Iter39;
    org$pandalanguage$pandac$ASTNode* arg51;
    org$pandalanguage$pandac$Type* subtype56;
    panda$core$Char8 $tmp59;
    {
        $match$18_91 = p_type;
        panda$core$Bit $tmp2 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$18_91->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2.value) {
        {
            org$pandalanguage$pandac$Position* $tmp4 = ((org$pandalanguage$pandac$Position*) ((char*) $match$18_91->$data + 0));
            position3 = *$tmp4;
            panda$core$String** $tmp6 = ((panda$core$String**) ((char*) $match$18_91->$data + 16));
            name5 = *$tmp6;
            org$pandalanguage$pandac$Type* $tmp7 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
            $tmp7->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp7->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp7, name5, ((panda$core$Int64) { 10 }), position3);
            return $tmp7;
        }
        }
        else {
        panda$core$Bit $tmp9 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$18_91->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp9.value) {
        {
            org$pandalanguage$pandac$Position* $tmp11 = ((org$pandalanguage$pandac$Position*) ((char*) $match$18_91->$data + 0));
            position10 = *$tmp11;
            org$pandalanguage$pandac$ASTNode** $tmp13 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$18_91->$data + 16));
            base12 = *$tmp13;
            panda$collections$Array* $tmp15 = (panda$collections$Array*) pandaZAlloc(40);
            $tmp15->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp15->refCount.value = 1;
            panda$collections$Array$init($tmp15);
            subtypes14 = $tmp15;
            org$pandalanguage$pandac$Type* $tmp17 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, base12);
            panda$collections$Array$add$panda$collections$Array$T(subtypes14, ((panda$core$Object*) $tmp17));
            org$pandalanguage$pandac$Type* $tmp18 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
            $tmp18->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp18->refCount.value = 1;
            panda$core$Object* $tmp20 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes14, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp22 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp20))->name, &$s21);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp18, $tmp22, ((panda$core$Int64) { 11 }), position10, ((panda$collections$ListView*) subtypes14), ((panda$core$Bit) { false }));
            return $tmp18;
        }
        }
        else {
        panda$core$Bit $tmp23 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$18_91->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp23.value) {
        {
            org$pandalanguage$pandac$Position* $tmp25 = ((org$pandalanguage$pandac$Position*) ((char*) $match$18_91->$data + 0));
            position24 = *$tmp25;
            panda$core$String** $tmp27 = ((panda$core$String**) ((char*) $match$18_91->$data + 16));
            base26 = *$tmp27;
            panda$collections$ImmutableArray** $tmp29 = ((panda$collections$ImmutableArray**) ((char*) $match$18_91->$data + 24));
            args28 = *$tmp29;
            panda$collections$Array* $tmp31 = (panda$collections$Array*) pandaZAlloc(40);
            $tmp31->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp31->refCount.value = 1;
            panda$collections$Array$init($tmp31);
            subtypes30 = $tmp31;
            panda$core$MutableString* $tmp34 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp34->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp34->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp34, base26);
            name33 = $tmp34;
            panda$core$Char8$init$panda$core$UInt8(&$tmp36, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name33, $tmp36);
            separator37 = &$s38;
            {
                ITable* $tmp40 = ((panda$collections$Iterable*) args28)->$class->itable;
                while ($tmp40->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp40 = $tmp40->next;
                }
                $fn42 $tmp41 = $tmp40->methods[0];
                panda$collections$Iterator* $tmp43 = $tmp41(((panda$collections$Iterable*) args28));
                arg$Iter39 = $tmp43;
                $l44:;
                ITable* $tmp46 = arg$Iter39->$class->itable;
                while ($tmp46->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp46 = $tmp46->next;
                }
                $fn48 $tmp47 = $tmp46->methods[0];
                panda$core$Bit $tmp49 = $tmp47(arg$Iter39);
                panda$core$Bit $tmp50 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp49);
                if (!$tmp50.value) goto $l45;
                {
                    ITable* $tmp52 = arg$Iter39->$class->itable;
                    while ($tmp52->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp52 = $tmp52->next;
                    }
                    $fn54 $tmp53 = $tmp52->methods[1];
                    panda$core$Object* $tmp55 = $tmp53(arg$Iter39);
                    arg51 = ((org$pandalanguage$pandac$ASTNode*) $tmp55);
                    org$pandalanguage$pandac$Type* $tmp57 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, arg51);
                    subtype56 = $tmp57;
                    panda$collections$Array$add$panda$collections$Array$T(subtypes30, ((panda$core$Object*) subtype56));
                    panda$core$MutableString$append$panda$core$String(name33, separator37);
                    panda$core$MutableString$append$panda$core$String(name33, ((org$pandalanguage$pandac$Symbol*) subtype56)->name);
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator37));
                        separator37 = &$s58;
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtype56));
                }
                goto $l44;
                $l45:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp59, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name33, $tmp59);
            org$pandalanguage$pandac$Type* $tmp60 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
            $tmp60->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp60->refCount.value = 1;
            panda$core$String* $tmp62 = panda$core$MutableString$finish$R$panda$core$String(name33);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp60, $tmp62, ((panda$core$Int64) { 21 }), position24, ((panda$collections$ListView*) subtypes30), ((panda$core$Bit) { false }));
            return $tmp60;
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
    panda$core$Int64 flags63;
    panda$collections$Iterator* c$Iter64;
    org$pandalanguage$pandac$ASTNode* c76;
    org$pandalanguage$pandac$ASTNode* $match$47_1381;
    org$pandalanguage$pandac$Position position83;
    panda$core$String* text85;
    panda$core$String* $match$49_2187;
    flags63 = ((panda$core$Int64) { 0 });
    {
        ITable* $tmp65 = ((panda$collections$Iterable*) p_a)->$class->itable;
        while ($tmp65->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp65 = $tmp65->next;
        }
        $fn67 $tmp66 = $tmp65->methods[0];
        panda$collections$Iterator* $tmp68 = $tmp66(((panda$collections$Iterable*) p_a));
        c$Iter64 = $tmp68;
        $l69:;
        ITable* $tmp71 = c$Iter64->$class->itable;
        while ($tmp71->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp71 = $tmp71->next;
        }
        $fn73 $tmp72 = $tmp71->methods[0];
        panda$core$Bit $tmp74 = $tmp72(c$Iter64);
        panda$core$Bit $tmp75 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp74);
        if (!$tmp75.value) goto $l70;
        {
            ITable* $tmp77 = c$Iter64->$class->itable;
            while ($tmp77->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp77 = $tmp77->next;
            }
            $fn79 $tmp78 = $tmp77->methods[1];
            panda$core$Object* $tmp80 = $tmp78(c$Iter64);
            c76 = ((org$pandalanguage$pandac$ASTNode*) $tmp80);
            {
                $match$47_1381 = c76;
                panda$core$Bit $tmp82 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_1381->$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp82.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp84 = ((org$pandalanguage$pandac$Position*) ((char*) $match$47_1381->$data + 0));
                    position83 = *$tmp84;
                    panda$core$String** $tmp86 = ((panda$core$String**) ((char*) $match$47_1381->$data + 16));
                    text85 = *$tmp86;
                    {
                        $match$49_2187 = text85;
                        panda$core$Bit $tmp89 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s88);
                        if ($tmp89.value) {
                        {
                            panda$core$Int64 $tmp90 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                            panda$core$Int64 $tmp91 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp90);
                            flags63 = $tmp91;
                        }
                        }
                        else {
                        panda$core$Bit $tmp93 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s92);
                        if ($tmp93.value) {
                        {
                            panda$core$Int64 $tmp94 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                            panda$core$Int64 $tmp95 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp94);
                            flags63 = $tmp95;
                        }
                        }
                        else {
                        panda$core$Bit $tmp97 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s96);
                        if ($tmp97.value) {
                        {
                            panda$core$Int64 $tmp98 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                            panda$core$Int64 $tmp99 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp98);
                            flags63 = $tmp99;
                        }
                        }
                        else {
                        panda$core$Bit $tmp101 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s100);
                        if ($tmp101.value) {
                        {
                            panda$core$Int64 $tmp102 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                            panda$core$Int64 $tmp103 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp102);
                            flags63 = $tmp103;
                        }
                        }
                        else {
                        panda$core$Bit $tmp105 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s104);
                        if ($tmp105.value) {
                        {
                            panda$core$Int64 $tmp106 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                            panda$core$Int64 $tmp107 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp106);
                            flags63 = $tmp107;
                        }
                        }
                        else {
                        panda$core$Bit $tmp109 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s108);
                        if ($tmp109.value) {
                        {
                            panda$core$Int64 $tmp110 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                            panda$core$Int64 $tmp111 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp110);
                            flags63 = $tmp111;
                        }
                        }
                        else {
                        panda$core$Bit $tmp113 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s112);
                        if ($tmp113.value) {
                        {
                            panda$core$Int64 $tmp114 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                            panda$core$Int64 $tmp115 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp114);
                            flags63 = $tmp115;
                        }
                        }
                        else {
                        panda$core$Bit $tmp117 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s116);
                        if ($tmp117.value) {
                        {
                            panda$core$Int64 $tmp118 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                            panda$core$Int64 $tmp119 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp118);
                            flags63 = $tmp119;
                        }
                        }
                        else {
                        panda$core$Bit $tmp121 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s120);
                        if ($tmp121.value) {
                        {
                            panda$core$Int64 $tmp122 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                            panda$core$Int64 $tmp123 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp122);
                            flags63 = $tmp123;
                        }
                        }
                        else {
                        panda$core$Bit $tmp125 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s124);
                        if ($tmp125.value) {
                        {
                            panda$core$Int64 $tmp126 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                            panda$core$Int64 $tmp127 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp126);
                            flags63 = $tmp127;
                        }
                        }
                        else {
                        panda$core$Bit $tmp129 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2187, &$s128);
                        if ($tmp129.value) {
                        {
                            panda$core$Int64 $tmp130 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                            panda$core$Int64 $tmp131 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags63, $tmp130);
                            flags63 = $tmp131;
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s132, text85);
                            panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp133, &$s134);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, position83, $tmp135);
                        }
                        }
                        }
                        }
                        }
                        }
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
        goto $l69;
        $l70:;
    }
    org$pandalanguage$pandac$Annotations* $tmp136 = (org$pandalanguage$pandac$Annotations*) pandaZAlloc(24);
    $tmp136->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp136->refCount.value = 1;
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp136, flags63);
    return $tmp136;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment138;
    org$pandalanguage$pandac$ASTNode* $match$79_13139;
    org$pandalanguage$pandac$Position position141;
    panda$core$String* text143;
    org$pandalanguage$pandac$Annotations* annotations145;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind147;
    org$pandalanguage$pandac$ASTNode* $match$88_9148;
    org$pandalanguage$pandac$Variable$Kind kind150;
    panda$collections$ImmutableArray* decls152;
    org$pandalanguage$pandac$Variable$Kind $match$90_17154;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp156;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp158;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp160;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp164;
    panda$collections$Iterator* decl$Iter165;
    org$pandalanguage$pandac$ASTNode* decl177;
    org$pandalanguage$pandac$ASTNode* $match$102_21182;
    org$pandalanguage$pandac$Position declPosition184;
    org$pandalanguage$pandac$ASTNode* target186;
    org$pandalanguage$pandac$ASTNode* value188;
    panda$core$String* name190;
    org$pandalanguage$pandac$Type* type191;
    org$pandalanguage$pandac$ASTNode* $match$106_29192;
    panda$core$String* id194;
    panda$core$String* id198;
    org$pandalanguage$pandac$ASTNode* idType200;
    org$pandalanguage$pandac$FieldDecl* field203;
    memset(&doccomment138, 0, sizeof(doccomment138));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment138 = NULL;
        }
    }
    }
    else {
    {
        {
            $match$79_13139 = p_rawDoccomment;
            panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$79_13139->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp140.value) {
            {
                org$pandalanguage$pandac$Position* $tmp142 = ((org$pandalanguage$pandac$Position*) ((char*) $match$79_13139->$data + 0));
                position141 = *$tmp142;
                panda$core$String** $tmp144 = ((panda$core$String**) ((char*) $match$79_13139->$data + 16));
                text143 = *$tmp144;
                {
                    doccomment138 = text143;
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
    org$pandalanguage$pandac$Annotations* $tmp146 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations145 = $tmp146;
    memset(&fieldKind147, 0, sizeof(fieldKind147));
    {
        $match$88_9148 = p_varDecl;
        panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$88_9148->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp149.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp151 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$88_9148->$data + 16));
            kind150 = *$tmp151;
            panda$collections$ImmutableArray** $tmp153 = ((panda$collections$ImmutableArray**) ((char*) $match$88_9148->$data + 24));
            decls152 = *$tmp153;
            {
                $match$90_17154 = kind150;
                panda$core$Bit $tmp155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17154.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp155.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp156, ((panda$core$Int64) { 0 }));
                    fieldKind147 = $tmp156;
                }
                }
                else {
                panda$core$Bit $tmp157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17154.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp157.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp158, ((panda$core$Int64) { 1 }));
                    fieldKind147 = $tmp158;
                }
                }
                else {
                panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17154.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp159.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp160, ((panda$core$Int64) { 2 }));
                    fieldKind147 = $tmp160;
                    panda$core$Int64 $tmp161 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp162 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations145->flags, $tmp161);
                    annotations145->flags = $tmp162;
                }
                }
                else {
                panda$core$Bit $tmp163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17154.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp163.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp164, ((panda$core$Int64) { 3 }));
                    fieldKind147 = $tmp164;
                }
                }
                }
                }
                }
            }
            {
                ITable* $tmp166 = ((panda$collections$Iterable*) decls152)->$class->itable;
                while ($tmp166->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp166 = $tmp166->next;
                }
                $fn168 $tmp167 = $tmp166->methods[0];
                panda$collections$Iterator* $tmp169 = $tmp167(((panda$collections$Iterable*) decls152));
                decl$Iter165 = $tmp169;
                $l170:;
                ITable* $tmp172 = decl$Iter165->$class->itable;
                while ($tmp172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp172 = $tmp172->next;
                }
                $fn174 $tmp173 = $tmp172->methods[0];
                panda$core$Bit $tmp175 = $tmp173(decl$Iter165);
                panda$core$Bit $tmp176 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp175);
                if (!$tmp176.value) goto $l171;
                {
                    ITable* $tmp178 = decl$Iter165->$class->itable;
                    while ($tmp178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp178 = $tmp178->next;
                    }
                    $fn180 $tmp179 = $tmp178->methods[1];
                    panda$core$Object* $tmp181 = $tmp179(decl$Iter165);
                    decl177 = ((org$pandalanguage$pandac$ASTNode*) $tmp181);
                    {
                        $match$102_21182 = decl177;
                        panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$102_21182->$rawValue, ((panda$core$Int64) { 11 }));
                        if ($tmp183.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp185 = ((org$pandalanguage$pandac$Position*) ((char*) $match$102_21182->$data + 0));
                            declPosition184 = *$tmp185;
                            org$pandalanguage$pandac$ASTNode** $tmp187 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$102_21182->$data + 16));
                            target186 = *$tmp187;
                            org$pandalanguage$pandac$ASTNode** $tmp189 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$102_21182->$data + 24));
                            value188 = *$tmp189;
                            memset(&name190, 0, sizeof(name190));
                            memset(&type191, 0, sizeof(type191));
                            {
                                $match$106_29192 = target186;
                                panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$106_29192->$rawValue, ((panda$core$Int64) { 18 }));
                                if ($tmp193.value) {
                                {
                                    panda$core$String** $tmp195 = ((panda$core$String**) ((char*) $match$106_29192->$data + 16));
                                    id194 = *$tmp195;
                                    {
                                        name190 = id194;
                                    }
                                    {
                                        org$pandalanguage$pandac$Type* $tmp196 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                        type191 = $tmp196;
                                    }
                                }
                                }
                                else {
                                panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$106_29192->$rawValue, ((panda$core$Int64) { 36 }));
                                if ($tmp197.value) {
                                {
                                    panda$core$String** $tmp199 = ((panda$core$String**) ((char*) $match$106_29192->$data + 16));
                                    id198 = *$tmp199;
                                    org$pandalanguage$pandac$ASTNode** $tmp201 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$106_29192->$data + 24));
                                    idType200 = *$tmp201;
                                    {
                                        name190 = id198;
                                    }
                                    {
                                        org$pandalanguage$pandac$Type* $tmp202 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType200);
                                        type191 = $tmp202;
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
                            org$pandalanguage$pandac$FieldDecl* $tmp204 = (org$pandalanguage$pandac$FieldDecl*) pandaZAlloc(113);
                            $tmp204->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                            $tmp204->refCount.value = 1;
                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp204, p_owner, declPosition184, doccomment138, annotations145, fieldKind147, name190, type191, value188);
                            field203 = $tmp204;
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field203));
                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field203));
                        }
                        }
                        else {
                        {
                            PANDA_ASSERT(((panda$core$Bit) { false }).value);
                        }
                        }
                    }
                }
                goto $l170;
                $l171:;
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations145));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment138));
    }
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$131_9206;
    org$pandalanguage$pandac$ASTNode* test208;
    org$pandalanguage$pandac$ASTNode* left212;
    org$pandalanguage$pandac$ASTNode* right214;
    panda$collections$ImmutableArray* statements222;
    panda$core$Int64 result224;
    panda$collections$Iterator* s$Iter225;
    org$pandalanguage$pandac$ASTNode* s237;
    org$pandalanguage$pandac$ASTNode* target246;
    panda$collections$ImmutableArray* args248;
    panda$core$Int64 result250;
    panda$collections$Iterator* a$Iter252;
    org$pandalanguage$pandac$ASTNode* a264;
    org$pandalanguage$pandac$ASTNode* base272;
    org$pandalanguage$pandac$ASTNode* value277;
    panda$collections$ImmutableArray* statements281;
    org$pandalanguage$pandac$ASTNode* test283;
    panda$core$Int64 result285;
    panda$collections$Iterator* s$Iter287;
    org$pandalanguage$pandac$ASTNode* s299;
    org$pandalanguage$pandac$ASTNode* base307;
    org$pandalanguage$pandac$ASTNode* list311;
    panda$collections$ImmutableArray* statements313;
    panda$core$Int64 result315;
    panda$collections$Iterator* s$Iter317;
    org$pandalanguage$pandac$ASTNode* s329;
    org$pandalanguage$pandac$ASTNode* test339;
    panda$collections$ImmutableArray* ifTrue341;
    org$pandalanguage$pandac$ASTNode* ifFalse343;
    panda$core$Int64 result345;
    panda$collections$Iterator* s$Iter347;
    org$pandalanguage$pandac$ASTNode* s359;
    panda$collections$ImmutableArray* statements370;
    panda$core$Int64 result372;
    panda$collections$Iterator* s$Iter373;
    org$pandalanguage$pandac$ASTNode* s385;
    org$pandalanguage$pandac$ASTNode* value393;
    panda$collections$ImmutableArray* whens395;
    panda$collections$ImmutableArray* other397;
    panda$core$Int64 result399;
    panda$collections$Iterator* w$Iter401;
    org$pandalanguage$pandac$ASTNode* w413;
    panda$collections$Iterator* s$Iter420;
    org$pandalanguage$pandac$ASTNode* s432;
    org$pandalanguage$pandac$ASTNode* base442;
    org$pandalanguage$pandac$ASTNode* value449;
    panda$collections$ImmutableArray* decls457;
    panda$core$Int64 result459;
    panda$collections$Iterator* decl$Iter460;
    org$pandalanguage$pandac$ASTNode* decl472;
    panda$collections$ImmutableArray* tests480;
    panda$collections$ImmutableArray* statements482;
    panda$core$Int64 result484;
    panda$collections$Iterator* test$Iter485;
    org$pandalanguage$pandac$ASTNode* test497;
    panda$collections$Iterator* s$Iter504;
    org$pandalanguage$pandac$ASTNode* s516;
    org$pandalanguage$pandac$ASTNode* test524;
    panda$collections$ImmutableArray* statements526;
    panda$core$Int64 result528;
    panda$collections$Iterator* s$Iter530;
    org$pandalanguage$pandac$ASTNode* s542;
    {
        $match$131_9206 = p_node;
        panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp207.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp209 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 16));
            test208 = *$tmp209;
            panda$core$Int64 $tmp210 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test208);
            return $tmp210;
        }
        }
        else {
        panda$core$Bit $tmp211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp211.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp213 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 16));
            left212 = *$tmp213;
            org$pandalanguage$pandac$ASTNode** $tmp215 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 32));
            right214 = *$tmp215;
            panda$core$Int64 $tmp216 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left212);
            panda$core$Int64 $tmp217 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp216);
            panda$core$Int64 $tmp218 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right214);
            panda$core$Int64 $tmp219 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp217, $tmp218);
            return $tmp219;
        }
        }
        else {
        panda$core$Bit $tmp220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp220.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp221.value) {
        {
            panda$collections$ImmutableArray** $tmp223 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 16));
            statements222 = *$tmp223;
            result224 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp226 = ((panda$collections$Iterable*) statements222)->$class->itable;
                while ($tmp226->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp226 = $tmp226->next;
                }
                $fn228 $tmp227 = $tmp226->methods[0];
                panda$collections$Iterator* $tmp229 = $tmp227(((panda$collections$Iterable*) statements222));
                s$Iter225 = $tmp229;
                $l230:;
                ITable* $tmp232 = s$Iter225->$class->itable;
                while ($tmp232->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp232 = $tmp232->next;
                }
                $fn234 $tmp233 = $tmp232->methods[0];
                panda$core$Bit $tmp235 = $tmp233(s$Iter225);
                panda$core$Bit $tmp236 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp235);
                if (!$tmp236.value) goto $l231;
                {
                    ITable* $tmp238 = s$Iter225->$class->itable;
                    while ($tmp238->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp238 = $tmp238->next;
                    }
                    $fn240 $tmp239 = $tmp238->methods[1];
                    panda$core$Object* $tmp241 = $tmp239(s$Iter225);
                    s237 = ((org$pandalanguage$pandac$ASTNode*) $tmp241);
                    panda$core$Int64 $tmp242 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s237);
                    panda$core$Int64 $tmp243 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result224, $tmp242);
                    result224 = $tmp243;
                }
                goto $l230;
                $l231:;
            }
            return result224;
        }
        }
        else {
        panda$core$Bit $tmp244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp244.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp245.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp247 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 16));
            target246 = *$tmp247;
            panda$collections$ImmutableArray** $tmp249 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 24));
            args248 = *$tmp249;
            panda$core$Int64 $tmp251 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target246);
            result250 = $tmp251;
            {
                ITable* $tmp253 = ((panda$collections$Iterable*) args248)->$class->itable;
                while ($tmp253->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp253 = $tmp253->next;
                }
                $fn255 $tmp254 = $tmp253->methods[0];
                panda$collections$Iterator* $tmp256 = $tmp254(((panda$collections$Iterable*) args248));
                a$Iter252 = $tmp256;
                $l257:;
                ITable* $tmp259 = a$Iter252->$class->itable;
                while ($tmp259->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp259 = $tmp259->next;
                }
                $fn261 $tmp260 = $tmp259->methods[0];
                panda$core$Bit $tmp262 = $tmp260(a$Iter252);
                panda$core$Bit $tmp263 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp262);
                if (!$tmp263.value) goto $l258;
                {
                    ITable* $tmp265 = a$Iter252->$class->itable;
                    while ($tmp265->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp265 = $tmp265->next;
                    }
                    $fn267 $tmp266 = $tmp265->methods[1];
                    panda$core$Object* $tmp268 = $tmp266(a$Iter252);
                    a264 = ((org$pandalanguage$pandac$ASTNode*) $tmp268);
                    panda$core$Int64 $tmp269 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a264);
                    panda$core$Int64 $tmp270 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result250, $tmp269);
                    result250 = $tmp270;
                }
                goto $l257;
                $l258:;
            }
            return result250;
        }
        }
        else {
        panda$core$Bit $tmp271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp271.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp273 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 16));
            base272 = *$tmp273;
            panda$core$Int64 $tmp274 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base272);
            return $tmp274;
        }
        }
        else {
        panda$core$Bit $tmp275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp275.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp276.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp278 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 24));
            value277 = *$tmp278;
            if (((panda$core$Bit) { value277 == NULL }).value) {
            {
                return ((panda$core$Int64) { 0 });
            }
            }
            panda$core$Int64 $tmp279 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value277);
            return $tmp279;
        }
        }
        else {
        panda$core$Bit $tmp280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp280.value) {
        {
            panda$collections$ImmutableArray** $tmp282 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 24));
            statements281 = *$tmp282;
            org$pandalanguage$pandac$ASTNode** $tmp284 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 32));
            test283 = *$tmp284;
            panda$core$Int64 $tmp286 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test283);
            result285 = $tmp286;
            {
                ITable* $tmp288 = ((panda$collections$Iterable*) statements281)->$class->itable;
                while ($tmp288->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp288 = $tmp288->next;
                }
                $fn290 $tmp289 = $tmp288->methods[0];
                panda$collections$Iterator* $tmp291 = $tmp289(((panda$collections$Iterable*) statements281));
                s$Iter287 = $tmp291;
                $l292:;
                ITable* $tmp294 = s$Iter287->$class->itable;
                while ($tmp294->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp294 = $tmp294->next;
                }
                $fn296 $tmp295 = $tmp294->methods[0];
                panda$core$Bit $tmp297 = $tmp295(s$Iter287);
                panda$core$Bit $tmp298 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp297);
                if (!$tmp298.value) goto $l293;
                {
                    ITable* $tmp300 = s$Iter287->$class->itable;
                    while ($tmp300->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp300 = $tmp300->next;
                    }
                    $fn302 $tmp301 = $tmp300->methods[1];
                    panda$core$Object* $tmp303 = $tmp301(s$Iter287);
                    s299 = ((org$pandalanguage$pandac$ASTNode*) $tmp303);
                    panda$core$Int64 $tmp304 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s299);
                    panda$core$Int64 $tmp305 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result285, $tmp304);
                    result285 = $tmp305;
                }
                goto $l292;
                $l293:;
            }
            return result285;
        }
        }
        else {
        panda$core$Bit $tmp306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp306.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp308 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 16));
            base307 = *$tmp308;
            panda$core$Int64 $tmp309 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base307);
            return $tmp309;
        }
        }
        else {
        panda$core$Bit $tmp310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp310.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp312 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 32));
            list311 = *$tmp312;
            panda$collections$ImmutableArray** $tmp314 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 40));
            statements313 = *$tmp314;
            panda$core$Int64 $tmp316 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list311);
            result315 = $tmp316;
            {
                ITable* $tmp318 = ((panda$collections$Iterable*) statements313)->$class->itable;
                while ($tmp318->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp318 = $tmp318->next;
                }
                $fn320 $tmp319 = $tmp318->methods[0];
                panda$collections$Iterator* $tmp321 = $tmp319(((panda$collections$Iterable*) statements313));
                s$Iter317 = $tmp321;
                $l322:;
                ITable* $tmp324 = s$Iter317->$class->itable;
                while ($tmp324->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp324 = $tmp324->next;
                }
                $fn326 $tmp325 = $tmp324->methods[0];
                panda$core$Bit $tmp327 = $tmp325(s$Iter317);
                panda$core$Bit $tmp328 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp327);
                if (!$tmp328.value) goto $l323;
                {
                    ITable* $tmp330 = s$Iter317->$class->itable;
                    while ($tmp330->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp330 = $tmp330->next;
                    }
                    $fn332 $tmp331 = $tmp330->methods[1];
                    panda$core$Object* $tmp333 = $tmp331(s$Iter317);
                    s329 = ((org$pandalanguage$pandac$ASTNode*) $tmp333);
                    panda$core$Int64 $tmp334 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s329);
                    panda$core$Int64 $tmp335 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result315, $tmp334);
                    result315 = $tmp335;
                }
                goto $l322;
                $l323:;
            }
            return result315;
        }
        }
        else {
        panda$core$Bit $tmp336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp336.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp337.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp338.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp340 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 16));
            test339 = *$tmp340;
            panda$collections$ImmutableArray** $tmp342 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 24));
            ifTrue341 = *$tmp342;
            org$pandalanguage$pandac$ASTNode** $tmp344 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 32));
            ifFalse343 = *$tmp344;
            panda$core$Int64 $tmp346 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test339);
            result345 = $tmp346;
            {
                ITable* $tmp348 = ((panda$collections$Iterable*) ifTrue341)->$class->itable;
                while ($tmp348->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp348 = $tmp348->next;
                }
                $fn350 $tmp349 = $tmp348->methods[0];
                panda$collections$Iterator* $tmp351 = $tmp349(((panda$collections$Iterable*) ifTrue341));
                s$Iter347 = $tmp351;
                $l352:;
                ITable* $tmp354 = s$Iter347->$class->itable;
                while ($tmp354->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp354 = $tmp354->next;
                }
                $fn356 $tmp355 = $tmp354->methods[0];
                panda$core$Bit $tmp357 = $tmp355(s$Iter347);
                panda$core$Bit $tmp358 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp357);
                if (!$tmp358.value) goto $l353;
                {
                    ITable* $tmp360 = s$Iter347->$class->itable;
                    while ($tmp360->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp360 = $tmp360->next;
                    }
                    $fn362 $tmp361 = $tmp360->methods[1];
                    panda$core$Object* $tmp363 = $tmp361(s$Iter347);
                    s359 = ((org$pandalanguage$pandac$ASTNode*) $tmp363);
                    panda$core$Int64 $tmp364 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s359);
                    panda$core$Int64 $tmp365 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result345, $tmp364);
                    result345 = $tmp365;
                }
                goto $l352;
                $l353:;
            }
            if (((panda$core$Bit) { ifFalse343 != NULL }).value) {
            {
                panda$core$Int64 $tmp366 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse343);
                panda$core$Int64 $tmp367 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result345, $tmp366);
                result345 = $tmp367;
            }
            }
            return result345;
        }
        }
        else {
        panda$core$Bit $tmp368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp368.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp369.value) {
        {
            panda$collections$ImmutableArray** $tmp371 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 24));
            statements370 = *$tmp371;
            result372 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp374 = ((panda$collections$Iterable*) statements370)->$class->itable;
                while ($tmp374->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp374 = $tmp374->next;
                }
                $fn376 $tmp375 = $tmp374->methods[0];
                panda$collections$Iterator* $tmp377 = $tmp375(((panda$collections$Iterable*) statements370));
                s$Iter373 = $tmp377;
                $l378:;
                ITable* $tmp380 = s$Iter373->$class->itable;
                while ($tmp380->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp380 = $tmp380->next;
                }
                $fn382 $tmp381 = $tmp380->methods[0];
                panda$core$Bit $tmp383 = $tmp381(s$Iter373);
                panda$core$Bit $tmp384 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp383);
                if (!$tmp384.value) goto $l379;
                {
                    ITable* $tmp386 = s$Iter373->$class->itable;
                    while ($tmp386->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp386 = $tmp386->next;
                    }
                    $fn388 $tmp387 = $tmp386->methods[1];
                    panda$core$Object* $tmp389 = $tmp387(s$Iter373);
                    s385 = ((org$pandalanguage$pandac$ASTNode*) $tmp389);
                    panda$core$Int64 $tmp390 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s385);
                    panda$core$Int64 $tmp391 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result372, $tmp390);
                    result372 = $tmp391;
                }
                goto $l378;
                $l379:;
            }
            return result372;
        }
        }
        else {
        panda$core$Bit $tmp392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp392.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp394 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 16));
            value393 = *$tmp394;
            panda$collections$ImmutableArray** $tmp396 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 24));
            whens395 = *$tmp396;
            panda$collections$ImmutableArray** $tmp398 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 32));
            other397 = *$tmp398;
            panda$core$Int64 $tmp400 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value393);
            result399 = $tmp400;
            {
                ITable* $tmp402 = ((panda$collections$Iterable*) whens395)->$class->itable;
                while ($tmp402->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp402 = $tmp402->next;
                }
                $fn404 $tmp403 = $tmp402->methods[0];
                panda$collections$Iterator* $tmp405 = $tmp403(((panda$collections$Iterable*) whens395));
                w$Iter401 = $tmp405;
                $l406:;
                ITable* $tmp408 = w$Iter401->$class->itable;
                while ($tmp408->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp408 = $tmp408->next;
                }
                $fn410 $tmp409 = $tmp408->methods[0];
                panda$core$Bit $tmp411 = $tmp409(w$Iter401);
                panda$core$Bit $tmp412 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp411);
                if (!$tmp412.value) goto $l407;
                {
                    ITable* $tmp414 = w$Iter401->$class->itable;
                    while ($tmp414->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp414 = $tmp414->next;
                    }
                    $fn416 $tmp415 = $tmp414->methods[1];
                    panda$core$Object* $tmp417 = $tmp415(w$Iter401);
                    w413 = ((org$pandalanguage$pandac$ASTNode*) $tmp417);
                    panda$core$Int64 $tmp418 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w413);
                    panda$core$Int64 $tmp419 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result399, $tmp418);
                    result399 = $tmp419;
                }
                goto $l406;
                $l407:;
            }
            if (((panda$core$Bit) { other397 != NULL }).value) {
            {
                {
                    ITable* $tmp421 = ((panda$collections$Iterable*) other397)->$class->itable;
                    while ($tmp421->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp421 = $tmp421->next;
                    }
                    $fn423 $tmp422 = $tmp421->methods[0];
                    panda$collections$Iterator* $tmp424 = $tmp422(((panda$collections$Iterable*) other397));
                    s$Iter420 = $tmp424;
                    $l425:;
                    ITable* $tmp427 = s$Iter420->$class->itable;
                    while ($tmp427->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp427 = $tmp427->next;
                    }
                    $fn429 $tmp428 = $tmp427->methods[0];
                    panda$core$Bit $tmp430 = $tmp428(s$Iter420);
                    panda$core$Bit $tmp431 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp430);
                    if (!$tmp431.value) goto $l426;
                    {
                        ITable* $tmp433 = s$Iter420->$class->itable;
                        while ($tmp433->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp433 = $tmp433->next;
                        }
                        $fn435 $tmp434 = $tmp433->methods[1];
                        panda$core$Object* $tmp436 = $tmp434(s$Iter420);
                        s432 = ((org$pandalanguage$pandac$ASTNode*) $tmp436);
                        panda$core$Int64 $tmp437 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s432);
                        panda$core$Int64 $tmp438 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result399, $tmp437);
                        result399 = $tmp438;
                    }
                    goto $l425;
                    $l426:;
                }
            }
            }
            return result399;
        }
        }
        else {
        panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp439.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp440.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp441.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp443 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 24));
            base442 = *$tmp443;
            panda$core$Int64 $tmp444 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base442);
            panda$core$Int64 $tmp445 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp444);
            return $tmp445;
        }
        }
        else {
        panda$core$Bit $tmp446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp446.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp447.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp448.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp450 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 16));
            value449 = *$tmp450;
            if (((panda$core$Bit) { value449 == NULL }).value) {
            {
                return ((panda$core$Int64) { 0 });
            }
            }
            panda$core$Int64 $tmp451 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value449);
            return $tmp451;
        }
        }
        else {
        panda$core$Bit $tmp452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp452.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp453.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp454.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp455.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp456.value) {
        {
            panda$collections$ImmutableArray** $tmp458 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 24));
            decls457 = *$tmp458;
            result459 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp461 = ((panda$collections$Iterable*) decls457)->$class->itable;
                while ($tmp461->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp461 = $tmp461->next;
                }
                $fn463 $tmp462 = $tmp461->methods[0];
                panda$collections$Iterator* $tmp464 = $tmp462(((panda$collections$Iterable*) decls457));
                decl$Iter460 = $tmp464;
                $l465:;
                ITable* $tmp467 = decl$Iter460->$class->itable;
                while ($tmp467->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp467 = $tmp467->next;
                }
                $fn469 $tmp468 = $tmp467->methods[0];
                panda$core$Bit $tmp470 = $tmp468(decl$Iter460);
                panda$core$Bit $tmp471 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp470);
                if (!$tmp471.value) goto $l466;
                {
                    ITable* $tmp473 = decl$Iter460->$class->itable;
                    while ($tmp473->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp473 = $tmp473->next;
                    }
                    $fn475 $tmp474 = $tmp473->methods[1];
                    panda$core$Object* $tmp476 = $tmp474(decl$Iter460);
                    decl472 = ((org$pandalanguage$pandac$ASTNode*) $tmp476);
                    panda$core$Int64 $tmp477 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl472);
                    panda$core$Int64 $tmp478 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result459, $tmp477);
                    result459 = $tmp478;
                }
                goto $l465;
                $l466:;
            }
            return result459;
        }
        }
        else {
        panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp479.value) {
        {
            panda$collections$ImmutableArray** $tmp481 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 16));
            tests480 = *$tmp481;
            panda$collections$ImmutableArray** $tmp483 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 24));
            statements482 = *$tmp483;
            result484 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp486 = ((panda$collections$Iterable*) tests480)->$class->itable;
                while ($tmp486->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp486 = $tmp486->next;
                }
                $fn488 $tmp487 = $tmp486->methods[0];
                panda$collections$Iterator* $tmp489 = $tmp487(((panda$collections$Iterable*) tests480));
                test$Iter485 = $tmp489;
                $l490:;
                ITable* $tmp492 = test$Iter485->$class->itable;
                while ($tmp492->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp492 = $tmp492->next;
                }
                $fn494 $tmp493 = $tmp492->methods[0];
                panda$core$Bit $tmp495 = $tmp493(test$Iter485);
                panda$core$Bit $tmp496 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp495);
                if (!$tmp496.value) goto $l491;
                {
                    ITable* $tmp498 = test$Iter485->$class->itable;
                    while ($tmp498->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp498 = $tmp498->next;
                    }
                    $fn500 $tmp499 = $tmp498->methods[1];
                    panda$core$Object* $tmp501 = $tmp499(test$Iter485);
                    test497 = ((org$pandalanguage$pandac$ASTNode*) $tmp501);
                    panda$core$Int64 $tmp502 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test497);
                    panda$core$Int64 $tmp503 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result484, $tmp502);
                    result484 = $tmp503;
                }
                goto $l490;
                $l491:;
            }
            {
                ITable* $tmp505 = ((panda$collections$Iterable*) statements482)->$class->itable;
                while ($tmp505->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp505 = $tmp505->next;
                }
                $fn507 $tmp506 = $tmp505->methods[0];
                panda$collections$Iterator* $tmp508 = $tmp506(((panda$collections$Iterable*) statements482));
                s$Iter504 = $tmp508;
                $l509:;
                ITable* $tmp511 = s$Iter504->$class->itable;
                while ($tmp511->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp511 = $tmp511->next;
                }
                $fn513 $tmp512 = $tmp511->methods[0];
                panda$core$Bit $tmp514 = $tmp512(s$Iter504);
                panda$core$Bit $tmp515 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp514);
                if (!$tmp515.value) goto $l510;
                {
                    ITable* $tmp517 = s$Iter504->$class->itable;
                    while ($tmp517->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp517 = $tmp517->next;
                    }
                    $fn519 $tmp518 = $tmp517->methods[1];
                    panda$core$Object* $tmp520 = $tmp518(s$Iter504);
                    s516 = ((org$pandalanguage$pandac$ASTNode*) $tmp520);
                    panda$core$Int64 $tmp521 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s516);
                    panda$core$Int64 $tmp522 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result484, $tmp521);
                    result484 = $tmp522;
                }
                goto $l509;
                $l510:;
            }
            return result484;
        }
        }
        else {
        panda$core$Bit $tmp523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp523.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp525 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 24));
            test524 = *$tmp525;
            panda$collections$ImmutableArray** $tmp527 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 32));
            statements526 = *$tmp527;
            panda$core$Int64 $tmp529 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test524);
            result528 = $tmp529;
            {
                ITable* $tmp531 = ((panda$collections$Iterable*) statements526)->$class->itable;
                while ($tmp531->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp531 = $tmp531->next;
                }
                $fn533 $tmp532 = $tmp531->methods[0];
                panda$collections$Iterator* $tmp534 = $tmp532(((panda$collections$Iterable*) statements526));
                s$Iter530 = $tmp534;
                $l535:;
                ITable* $tmp537 = s$Iter530->$class->itable;
                while ($tmp537->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp537 = $tmp537->next;
                }
                $fn539 $tmp538 = $tmp537->methods[0];
                panda$core$Bit $tmp540 = $tmp538(s$Iter530);
                panda$core$Bit $tmp541 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp540);
                if (!$tmp541.value) goto $l536;
                {
                    ITable* $tmp543 = s$Iter530->$class->itable;
                    while ($tmp543->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp543 = $tmp543->next;
                    }
                    $fn545 $tmp544 = $tmp543->methods[1];
                    panda$core$Object* $tmp546 = $tmp544(s$Iter530);
                    s542 = ((org$pandalanguage$pandac$ASTNode*) $tmp546);
                    panda$core$Int64 $tmp547 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s542);
                    panda$core$Int64 $tmp548 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result528, $tmp547);
                    result528 = $tmp548;
                }
                goto $l535;
                $l536:;
            }
            return result528;
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
    panda$core$Int64 c559;
    panda$collections$Iterator* s$Iter560;
    org$pandalanguage$pandac$ASTNode* s572;
    panda$core$Bit $tmp551 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp550 = $tmp551.value;
    if (!$tmp550) goto $l552;
    panda$core$Bit $tmp553 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp554 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp553);
    $tmp550 = $tmp554.value;
    $l552:;
    panda$core$Bit $tmp555 = { $tmp550 };
    bool $tmp549 = $tmp555.value;
    if (!$tmp549) goto $l556;
    panda$core$Bit $tmp557 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp549 = $tmp557.value;
    $l556:;
    panda$core$Bit $tmp558 = { $tmp549 };
    if ($tmp558.value) {
    {
        c559 = ((panda$core$Int64) { 0 });
        {
            ITable* $tmp561 = ((panda$collections$Iterable*) p_statements)->$class->itable;
            while ($tmp561->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp561 = $tmp561->next;
            }
            $fn563 $tmp562 = $tmp561->methods[0];
            panda$collections$Iterator* $tmp564 = $tmp562(((panda$collections$Iterable*) p_statements));
            s$Iter560 = $tmp564;
            $l565:;
            ITable* $tmp567 = s$Iter560->$class->itable;
            while ($tmp567->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp567 = $tmp567->next;
            }
            $fn569 $tmp568 = $tmp567->methods[0];
            panda$core$Bit $tmp570 = $tmp568(s$Iter560);
            panda$core$Bit $tmp571 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp570);
            if (!$tmp571.value) goto $l566;
            {
                ITable* $tmp573 = s$Iter560->$class->itable;
                while ($tmp573->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp573 = $tmp573->next;
                }
                $fn575 $tmp574 = $tmp573->methods[1];
                panda$core$Object* $tmp576 = $tmp574(s$Iter560);
                s572 = ((org$pandalanguage$pandac$ASTNode*) $tmp576);
                panda$core$Int64 $tmp577 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s572);
                panda$core$Int64 $tmp578 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c559, $tmp577);
                c559 = $tmp578;
                panda$core$Bit $tmp579 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c559, ((panda$core$Int64) { 10 }));
                if ($tmp579.value) {
                {
                    return ((panda$core$Bit) { false });
                }
                }
            }
            goto $l565;
            $l566:;
        }
        return ((panda$core$Bit) { true });
    }
    }
    return ((panda$core$Bit) { false });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment580;
    org$pandalanguage$pandac$ASTNode* $match$281_13581;
    org$pandalanguage$pandac$Position position583;
    panda$core$String* text585;
    org$pandalanguage$pandac$Annotations* annotations587;
    panda$collections$Array* parameters600;
    panda$collections$Iterator* p$Iter603;
    org$pandalanguage$pandac$ASTNode* p615;
    org$pandalanguage$pandac$ASTNode* $match$294_13620;
    panda$core$String* name622;
    org$pandalanguage$pandac$ASTNode* type624;
    org$pandalanguage$pandac$Type* returnType629;
    org$pandalanguage$pandac$MethodDecl* tmp1655;
    memset(&doccomment580, 0, sizeof(doccomment580));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment580 = NULL;
        }
    }
    }
    else {
    {
        {
            $match$281_13581 = p_rawDoccomment;
            panda$core$Bit $tmp582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$281_13581->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp582.value) {
            {
                org$pandalanguage$pandac$Position* $tmp584 = ((org$pandalanguage$pandac$Position*) ((char*) $match$281_13581->$data + 0));
                position583 = *$tmp584;
                panda$core$String** $tmp586 = ((panda$core$String**) ((char*) $match$281_13581->$data + 16));
                text585 = *$tmp586;
                {
                    doccomment580 = text585;
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
    org$pandalanguage$pandac$Annotations* $tmp588 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations587 = $tmp588;
    panda$core$Bit $tmp591 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp590 = $tmp591.value;
    if (!$tmp590) goto $l592;
    panda$core$Bit $tmp593 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
    $tmp590 = $tmp593.value;
    $l592:;
    panda$core$Bit $tmp594 = { $tmp590 };
    bool $tmp589 = $tmp594.value;
    if ($tmp589) goto $l595;
    panda$core$Bit $tmp596 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations587);
    $tmp589 = $tmp596.value;
    $l595:;
    panda$core$Bit $tmp597 = { $tmp589 };
    if ($tmp597.value) {
    {
        panda$core$Int64 $tmp598 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp599 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations587->flags, $tmp598);
        annotations587->flags = $tmp599;
    }
    }
    panda$collections$Array* $tmp601 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp601->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp601->refCount.value = 1;
    panda$collections$Array$init($tmp601);
    parameters600 = $tmp601;
    {
        ITable* $tmp604 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
        while ($tmp604->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp604 = $tmp604->next;
        }
        $fn606 $tmp605 = $tmp604->methods[0];
        panda$collections$Iterator* $tmp607 = $tmp605(((panda$collections$Iterable*) p_rawParameters));
        p$Iter603 = $tmp607;
        $l608:;
        ITable* $tmp610 = p$Iter603->$class->itable;
        while ($tmp610->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp610 = $tmp610->next;
        }
        $fn612 $tmp611 = $tmp610->methods[0];
        panda$core$Bit $tmp613 = $tmp611(p$Iter603);
        panda$core$Bit $tmp614 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp613);
        if (!$tmp614.value) goto $l609;
        {
            ITable* $tmp616 = p$Iter603->$class->itable;
            while ($tmp616->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp616 = $tmp616->next;
            }
            $fn618 $tmp617 = $tmp616->methods[1];
            panda$core$Object* $tmp619 = $tmp617(p$Iter603);
            p615 = ((org$pandalanguage$pandac$ASTNode*) $tmp619);
            {
                $match$294_13620 = p615;
                panda$core$Bit $tmp621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$294_13620->$rawValue, ((panda$core$Int64) { 27 }));
                if ($tmp621.value) {
                {
                    panda$core$String** $tmp623 = ((panda$core$String**) ((char*) $match$294_13620->$data + 16));
                    name622 = *$tmp623;
                    org$pandalanguage$pandac$ASTNode** $tmp625 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$294_13620->$data + 24));
                    type624 = *$tmp625;
                    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp626 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaZAlloc(32);
                    $tmp626->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                    $tmp626->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp628 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type624);
                    org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp626, name622, $tmp628);
                    panda$collections$Array$add$panda$collections$Array$T(parameters600, ((panda$core$Object*) $tmp626));
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l608;
        $l609:;
    }
    memset(&returnType629, 0, sizeof(returnType629));
    if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp630 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
            returnType629 = $tmp630;
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp631 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            returnType629 = $tmp631;
        }
    }
    }
    panda$core$Bit $tmp633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
    bool $tmp632 = $tmp633.value;
    if (!$tmp632) goto $l634;
    org$pandalanguage$pandac$Type* $tmp635 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp636 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType629, $tmp635);
    $tmp632 = $tmp636.value;
    $l634:;
    panda$core$Bit $tmp637 = { $tmp632 };
    if ($tmp637.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s638);
    }
    }
    bool $tmp639 = ((panda$core$Bit) { p_statements != NULL }).value;
    if (!$tmp639) goto $l640;
    panda$core$Bit $tmp641 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations587, p_statements);
    $tmp639 = $tmp641.value;
    $l640:;
    panda$core$Bit $tmp642 = { $tmp639 };
    if ($tmp642.value) {
    {
        panda$core$Int64 $tmp643 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp644 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations587->flags, $tmp643);
        annotations587->flags = $tmp644;
    }
    }
    if (((panda$core$Bit) { p_statements == NULL }).value) {
    {
        panda$core$Bit $tmp645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp645.value) {
        {
            panda$core$Int64 $tmp646 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
            panda$core$Int64 $tmp647 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations587->flags, $tmp646);
            annotations587->flags = $tmp647;
        }
        }
        else {
        panda$core$Int64 $tmp648 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
        panda$core$Int64 $tmp649 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations587->flags, $tmp648);
        panda$core$Bit $tmp650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp649, ((panda$core$Int64) { 0 }));
        if ($tmp650.value) {
        {
            panda$core$String* $tmp652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s651, p_name);
            panda$core$String* $tmp654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp652, &$s653);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, $tmp654);
        }
        }
        }
    }
    }
    {
        org$pandalanguage$pandac$MethodDecl* $tmp656 = (org$pandalanguage$pandac$MethodDecl*) pandaZAlloc(136);
        $tmp656->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp656->refCount.value = 1;
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp656, p_owner, p_position, doccomment580, annotations587, p_kind, p_name, parameters600, returnType629, p_statements);
        tmp1655 = $tmp656;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations587));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters600));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType629));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment580));
        }
        return tmp1655;
    }
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$327_9658;
    org$pandalanguage$pandac$Position position660;
    org$pandalanguage$pandac$ASTNode* dc662;
    panda$collections$ImmutableArray* annotations664;
    org$pandalanguage$pandac$ASTNode* varDecl666;
    org$pandalanguage$pandac$Position position669;
    org$pandalanguage$pandac$ASTNode* dc671;
    panda$collections$ImmutableArray* annotations673;
    org$pandalanguage$pandac$MethodDecl$Kind kind675;
    panda$core$String* name677;
    panda$collections$ImmutableArray* parameters679;
    org$pandalanguage$pandac$ASTNode* rawReturnType681;
    panda$collections$ImmutableArray* statements683;
    org$pandalanguage$pandac$MethodDecl* m685;
    org$pandalanguage$pandac$Position position688;
    org$pandalanguage$pandac$ASTNode* dc690;
    panda$collections$ImmutableArray* annotations692;
    org$pandalanguage$pandac$ClassDecl$Kind kind694;
    panda$core$String* name696;
    panda$collections$ImmutableArray* generics698;
    panda$collections$ImmutableArray* supertypes700;
    panda$collections$ImmutableArray* members702;
    org$pandalanguage$pandac$ClassDecl* inner704;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp709;
    org$pandalanguage$pandac$Position position715;
    org$pandalanguage$pandac$ASTNode* dc717;
    panda$core$String* name719;
    panda$collections$ImmutableArray* fields721;
    {
        $match$327_9658 = p_node;
        panda$core$Bit $tmp659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9658->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp659.value) {
        {
            org$pandalanguage$pandac$Position* $tmp661 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9658->$data + 0));
            position660 = *$tmp661;
            org$pandalanguage$pandac$ASTNode** $tmp663 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9658->$data + 16));
            dc662 = *$tmp663;
            panda$collections$ImmutableArray** $tmp665 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9658->$data + 24));
            annotations664 = *$tmp665;
            org$pandalanguage$pandac$ASTNode** $tmp667 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9658->$data + 32));
            varDecl666 = *$tmp667;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position660, dc662, annotations664, varDecl666);
        }
        }
        else {
        panda$core$Bit $tmp668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9658->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp668.value) {
        {
            org$pandalanguage$pandac$Position* $tmp670 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9658->$data + 0));
            position669 = *$tmp670;
            org$pandalanguage$pandac$ASTNode** $tmp672 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9658->$data + 16));
            dc671 = *$tmp672;
            panda$collections$ImmutableArray** $tmp674 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9658->$data + 24));
            annotations673 = *$tmp674;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp676 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$327_9658->$data + 32));
            kind675 = *$tmp676;
            panda$core$String** $tmp678 = ((panda$core$String**) ((char*) $match$327_9658->$data + 40));
            name677 = *$tmp678;
            panda$collections$ImmutableArray** $tmp680 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9658->$data + 48));
            parameters679 = *$tmp680;
            org$pandalanguage$pandac$ASTNode** $tmp682 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9658->$data + 56));
            rawReturnType681 = *$tmp682;
            panda$collections$ImmutableArray** $tmp684 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9658->$data + 64));
            statements683 = *$tmp684;
            org$pandalanguage$pandac$MethodDecl* $tmp686 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position669, dc671, annotations673, kind675, name677, parameters679, rawReturnType681, statements683);
            m685 = $tmp686;
            if (((panda$core$Bit) { m685 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m685));
                panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m685));
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9658->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp687.value) {
        {
            org$pandalanguage$pandac$Position* $tmp689 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9658->$data + 0));
            position688 = *$tmp689;
            org$pandalanguage$pandac$ASTNode** $tmp691 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9658->$data + 16));
            dc690 = *$tmp691;
            panda$collections$ImmutableArray** $tmp693 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9658->$data + 24));
            annotations692 = *$tmp693;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp695 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$327_9658->$data + 32));
            kind694 = *$tmp695;
            panda$core$String** $tmp697 = ((panda$core$String**) ((char*) $match$327_9658->$data + 40));
            name696 = *$tmp697;
            panda$collections$ImmutableArray** $tmp699 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9658->$data + 48));
            generics698 = *$tmp699;
            panda$collections$ImmutableArray** $tmp701 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9658->$data + 56));
            supertypes700 = *$tmp701;
            panda$collections$ImmutableArray** $tmp703 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9658->$data + 64));
            members702 = *$tmp703;
            org$pandalanguage$pandac$ClassDecl* $tmp705 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, ((org$pandalanguage$pandac$Symbol*) p_cl)->name, position688, dc690, annotations692, kind694, name696, generics698, supertypes700, members702);
            inner704 = $tmp705;
            if (((panda$core$Bit) { inner704 != NULL }).value) {
            {
                {
                    inner704->owner = p_cl;
                }
                panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner704));
                panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s706);
                panda$core$Bit $tmp708 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner704)->name, $tmp707);
                PANDA_ASSERT($tmp708.value);
                panda$core$Int64 $tmp710 = panda$core$String$length$R$panda$core$Int64(((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$Int64 $tmp711 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp710, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp709, ((panda$core$Int64$nullable) { $tmp711, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp712 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner704)->name, $tmp709);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner704), $tmp712);
                panda$collections$Array$add$panda$collections$Array$T(inner704->symbolTable->parents, ((panda$core$Object*) p_cl->symbolTable));
                panda$core$String* $tmp713 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner704->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_cl), $tmp713);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp714 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9658->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp714.value) {
        {
            org$pandalanguage$pandac$Position* $tmp716 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9658->$data + 0));
            position715 = *$tmp716;
            org$pandalanguage$pandac$ASTNode** $tmp718 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9658->$data + 16));
            dc717 = *$tmp718;
            panda$core$String** $tmp720 = ((panda$core$String**) ((char*) $match$327_9658->$data + 24));
            name719 = *$tmp720;
            panda$collections$ImmutableArray** $tmp722 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9658->$data + 32));
            fields721 = *$tmp722;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position715, dc717, name719, fields721);
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
    panda$core$String* doccomment723;
    org$pandalanguage$pandac$ASTNode* $match$365_13724;
    org$pandalanguage$pandac$Position position726;
    panda$core$String* text728;
    panda$collections$Array* fields730;
    panda$collections$Iterator* t$Iter733;
    org$pandalanguage$pandac$ASTNode* t745;
    org$pandalanguage$pandac$ChoiceEntry* entry751;
    panda$core$Bit found755;
    panda$collections$Iterator* m$Iter756;
    org$pandalanguage$pandac$MethodDecl* m768;
    panda$core$Range$LTpanda$core$Int64$GT $tmp781;
    panda$collections$Array* parameters807;
    panda$collections$Array* statements814;
    org$pandalanguage$pandac$parser$Token$Kind $tmp822;
    panda$core$Range$LTpanda$core$Int64$GT $tmp826;
    org$pandalanguage$pandac$parser$Token$Kind $tmp855;
    org$pandalanguage$pandac$MethodDecl* synthetic869;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp874;
    memset(&doccomment723, 0, sizeof(doccomment723));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment723 = NULL;
        }
    }
    }
    else {
    {
        {
            $match$365_13724 = p_rawDoccomment;
            panda$core$Bit $tmp725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$365_13724->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp725.value) {
            {
                org$pandalanguage$pandac$Position* $tmp727 = ((org$pandalanguage$pandac$Position*) ((char*) $match$365_13724->$data + 0));
                position726 = *$tmp727;
                panda$core$String** $tmp729 = ((panda$core$String**) ((char*) $match$365_13724->$data + 16));
                text728 = *$tmp729;
                {
                    doccomment723 = text728;
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
    panda$collections$Array* $tmp731 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp731->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp731->refCount.value = 1;
    panda$collections$Array$init($tmp731);
    fields730 = $tmp731;
    {
        ITable* $tmp734 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
        while ($tmp734->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp734 = $tmp734->next;
        }
        $fn736 $tmp735 = $tmp734->methods[0];
        panda$collections$Iterator* $tmp737 = $tmp735(((panda$collections$Iterable*) p_rawFields));
        t$Iter733 = $tmp737;
        $l738:;
        ITable* $tmp740 = t$Iter733->$class->itable;
        while ($tmp740->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp740 = $tmp740->next;
        }
        $fn742 $tmp741 = $tmp740->methods[0];
        panda$core$Bit $tmp743 = $tmp741(t$Iter733);
        panda$core$Bit $tmp744 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp743);
        if (!$tmp744.value) goto $l739;
        {
            ITable* $tmp746 = t$Iter733->$class->itable;
            while ($tmp746->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp746 = $tmp746->next;
            }
            $fn748 $tmp747 = $tmp746->methods[1];
            panda$core$Object* $tmp749 = $tmp747(t$Iter733);
            t745 = ((org$pandalanguage$pandac$ASTNode*) $tmp749);
            org$pandalanguage$pandac$Type* $tmp750 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t745);
            panda$collections$Array$add$panda$collections$Array$T(fields730, ((panda$core$Object*) $tmp750));
        }
        goto $l738;
        $l739:;
    }
    org$pandalanguage$pandac$ChoiceEntry* $tmp752 = (org$pandalanguage$pandac$ChoiceEntry*) pandaZAlloc(97);
    $tmp752->$class = (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class;
    $tmp752->refCount.value = 1;
    panda$core$Int64 $tmp754 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
    org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp752, p_cl, p_position, p_name, doccomment723, $tmp754, ((panda$collections$ListView*) fields730));
    entry751 = $tmp752;
    panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry751));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry751));
    found755 = ((panda$core$Bit) { false });
    {
        ITable* $tmp757 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp757->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp757 = $tmp757->next;
        }
        $fn759 $tmp758 = $tmp757->methods[0];
        panda$collections$Iterator* $tmp760 = $tmp758(((panda$collections$Iterable*) p_cl->methods));
        m$Iter756 = $tmp760;
        $l761:;
        ITable* $tmp763 = m$Iter756->$class->itable;
        while ($tmp763->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp763 = $tmp763->next;
        }
        $fn765 $tmp764 = $tmp763->methods[0];
        panda$core$Bit $tmp766 = $tmp764(m$Iter756);
        panda$core$Bit $tmp767 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp766);
        if (!$tmp767.value) goto $l762;
        {
            ITable* $tmp769 = m$Iter756->$class->itable;
            while ($tmp769->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp769 = $tmp769->next;
            }
            $fn771 $tmp770 = $tmp769->methods[1];
            panda$core$Object* $tmp772 = $tmp770(m$Iter756);
            m768 = ((org$pandalanguage$pandac$MethodDecl*) $tmp772);
            panda$core$Bit $tmp773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m768->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp773.value);
            panda$core$Int64 $tmp774 = panda$collections$Array$get_count$R$panda$core$Int64(m768->parameters);
            panda$core$Int64 $tmp775 = panda$collections$Array$get_count$R$panda$core$Int64(fields730);
            panda$core$Int64 $tmp776 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp775, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp777 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp774, $tmp776);
            if ($tmp777.value) {
            {
                goto $l761;
            }
            }
            panda$core$Object* $tmp778 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m768->parameters, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp779 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp780 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp778)->type, $tmp779);
            PANDA_ASSERT($tmp780.value);
            panda$core$Int64 $tmp782 = panda$collections$Array$get_count$R$panda$core$Int64(fields730);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp781, ((panda$core$Int64) { 0 }), $tmp782, ((panda$core$Bit) { false }));
            int64_t $tmp784 = $tmp781.min.value;
            panda$core$Int64 i783 = { $tmp784 };
            int64_t $tmp786 = $tmp781.max.value;
            bool $tmp787 = $tmp781.inclusive.value;
            if ($tmp787) goto $l794; else goto $l795;
            $l794:;
            if ($tmp784 <= $tmp786) goto $l788; else goto $l790;
            $l795:;
            if ($tmp784 < $tmp786) goto $l788; else goto $l790;
            $l788:;
            {
                panda$core$Object* $tmp796 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields730, i783);
                panda$core$Int64 $tmp797 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i783, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp798 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m768->parameters, $tmp797);
                panda$core$Bit $tmp799 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp796), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp798)->type);
                if ($tmp799.value) {
                {
                    goto $l761;
                }
                }
            }
            $l791:;
            int64_t $tmp801 = $tmp786 - i783.value;
            if ($tmp787) goto $l802; else goto $l803;
            $l802:;
            if ((uint64_t) $tmp801 >= 1) goto $l800; else goto $l790;
            $l803:;
            if ((uint64_t) $tmp801 > 1) goto $l800; else goto $l790;
            $l800:;
            i783.value += 1;
            goto $l788;
            $l790:;
            {
                entry751->initMethod = m768;
            }
            found755 = ((panda$core$Bit) { true });
            goto $l762;
        }
        goto $l761;
        $l762:;
    }
    panda$core$Bit $tmp806 = panda$core$Bit$$NOT$R$panda$core$Bit(found755);
    if ($tmp806.value) {
    {
        panda$collections$Array* $tmp808 = (panda$collections$Array*) pandaZAlloc(40);
        $tmp808->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp808->refCount.value = 1;
        panda$collections$Array$init($tmp808);
        parameters807 = $tmp808;
        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp810 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaZAlloc(32);
        $tmp810->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
        $tmp810->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp813 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp810, &$s812, $tmp813);
        panda$collections$Array$add$panda$collections$Array$T(parameters807, ((panda$core$Object*) $tmp810));
        panda$collections$Array* $tmp815 = (panda$collections$Array*) pandaZAlloc(40);
        $tmp815->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp815->refCount.value = 1;
        panda$collections$Array$init($tmp815);
        statements814 = $tmp815;
        org$pandalanguage$pandac$ASTNode* $tmp817 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp817->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp817->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode* $tmp819 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp819->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp819->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp819, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s821);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp822, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$ASTNode* $tmp823 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp823->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp823->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp823, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s825);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp817, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp819, $tmp822, $tmp823);
        panda$collections$Array$add$panda$collections$Array$T(statements814, ((panda$core$Object*) $tmp817));
        panda$core$Int64 $tmp827 = panda$collections$Array$get_count$R$panda$core$Int64(fields730);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp826, ((panda$core$Int64) { 0 }), $tmp827, ((panda$core$Bit) { false }));
        int64_t $tmp829 = $tmp826.min.value;
        panda$core$Int64 i828 = { $tmp829 };
        int64_t $tmp831 = $tmp826.max.value;
        bool $tmp832 = $tmp826.inclusive.value;
        if ($tmp832) goto $l839; else goto $l840;
        $l839:;
        if ($tmp829 <= $tmp831) goto $l833; else goto $l835;
        $l840:;
        if ($tmp829 < $tmp831) goto $l833; else goto $l835;
        $l833:;
        {
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp841 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaZAlloc(32);
            $tmp841->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp841->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp844;
            $tmp844 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp844->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp844->refCount = 1;
            $tmp844->value = i828;
            panda$core$String* $tmp845 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s843, ((panda$core$Object*) $tmp844));
            panda$core$String* $tmp847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp845, &$s846);
            panda$core$Object* $tmp848 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields730, i828);
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp841, $tmp847, ((org$pandalanguage$pandac$Type*) $tmp848));
            panda$collections$Array$add$panda$collections$Array$T(parameters807, ((panda$core$Object*) $tmp841));
            org$pandalanguage$pandac$ASTNode* $tmp849 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp849->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp849->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode* $tmp851 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp851->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp851->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode* $tmp853 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp853->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp853->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp853, ((panda$core$Int64) { 32 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64($tmp851, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp853, entry751, i828);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp855, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$ASTNode* $tmp856 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp856->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp856->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp859;
            $tmp859 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp859->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp859->refCount = 1;
            $tmp859->value = i828;
            panda$core$String* $tmp860 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s858, ((panda$core$Object*) $tmp859));
            panda$core$String* $tmp862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp860, &$s861);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp856, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp862);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp849, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp851, $tmp855, $tmp856);
            panda$collections$Array$add$panda$collections$Array$T(statements814, ((panda$core$Object*) $tmp849));
        }
        $l836:;
        int64_t $tmp864 = $tmp831 - i828.value;
        if ($tmp832) goto $l865; else goto $l866;
        $l865:;
        if ((uint64_t) $tmp864 >= 1) goto $l863; else goto $l835;
        $l866:;
        if ((uint64_t) $tmp864 > 1) goto $l863; else goto $l835;
        $l863:;
        i828.value += 1;
        goto $l833;
        $l835:;
        org$pandalanguage$pandac$MethodDecl* $tmp870 = (org$pandalanguage$pandac$MethodDecl*) pandaZAlloc(136);
        $tmp870->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp870->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp872 = (org$pandalanguage$pandac$Annotations*) pandaZAlloc(24);
        $tmp872->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp872->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp872);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp874, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$Type* $tmp876 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp877 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements814);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp870, p_cl, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, NULL, $tmp872, $tmp874, &$s875, parameters807, $tmp876, $tmp877);
        synthetic869 = $tmp870;
        {
            entry751->initMethod = synthetic869;
        }
        panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) synthetic869));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) synthetic869));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters807));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements814));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) synthetic869));
        }
    }
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields730));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry751));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment723));
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName878;
    panda$core$String* doccomment887;
    org$pandalanguage$pandac$ASTNode* $match$440_13888;
    org$pandalanguage$pandac$Position position890;
    panda$core$String* text892;
    org$pandalanguage$pandac$Annotations* annotations894;
    panda$collections$Array* parameters896;
    panda$collections$Iterator* p$Iter899;
    org$pandalanguage$pandac$ASTNode* p911;
    panda$core$String* name916;
    org$pandalanguage$pandac$Type* bound917;
    org$pandalanguage$pandac$ASTNode* $match$453_17918;
    panda$core$String* id920;
    panda$core$String* id924;
    org$pandalanguage$pandac$ASTNode* type926;
    panda$collections$Array* supertypes935;
    panda$collections$Iterator* s$Iter940;
    org$pandalanguage$pandac$ASTNode* s952;
    org$pandalanguage$pandac$ClassDecl* result958;
    org$pandalanguage$pandac$FieldDecl* rawValue962;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp967;
    org$pandalanguage$pandac$FieldDecl* data970;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp975;
    panda$collections$Iterator* m$Iter978;
    org$pandalanguage$pandac$ASTNode* m990;
    org$pandalanguage$pandac$ASTNode* $match$492_13995;
    org$pandalanguage$pandac$Position mPosition997;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind999;
    org$pandalanguage$pandac$ClassDecl$Kind $match$495_251002;
    panda$core$Bit foundInit1008;
    panda$core$Bit foundCleanup1009;
    panda$collections$Iterator* m$Iter1010;
    org$pandalanguage$pandac$MethodDecl* m1022;
    org$pandalanguage$pandac$MethodDecl* defaultInit1045;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1050;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1067;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1073;
    panda$core$Bit haveFields1081;
    panda$collections$Iterator* e$Iter1082;
    org$pandalanguage$pandac$ChoiceEntry* e1094;
    org$pandalanguage$pandac$ClassDecl* tmp21103;
    memset(&fullName878, 0, sizeof(fullName878));
    panda$core$Bit $tmp880 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s879);
    if ($tmp880.value) {
    {
        {
            panda$core$String* $tmp881 = panda$core$String$convert$R$panda$core$String(p_contextName);
            panda$core$String* $tmp883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp881, &$s882);
            panda$core$String* $tmp884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp883, p_name);
            panda$core$String* $tmp886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp884, &$s885);
            fullName878 = $tmp886;
        }
    }
    }
    else {
    {
        {
            fullName878 = p_name;
        }
    }
    }
    memset(&doccomment887, 0, sizeof(doccomment887));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            doccomment887 = NULL;
        }
    }
    }
    else {
    {
        {
            $match$440_13888 = p_rawDoccomment;
            panda$core$Bit $tmp889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$440_13888->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp889.value) {
            {
                org$pandalanguage$pandac$Position* $tmp891 = ((org$pandalanguage$pandac$Position*) ((char*) $match$440_13888->$data + 0));
                position890 = *$tmp891;
                panda$core$String** $tmp893 = ((panda$core$String**) ((char*) $match$440_13888->$data + 16));
                text892 = *$tmp893;
                {
                    doccomment887 = text892;
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
    org$pandalanguage$pandac$Annotations* $tmp895 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations894 = $tmp895;
    panda$collections$Array* $tmp897 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp897->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp897->refCount.value = 1;
    panda$collections$Array$init($tmp897);
    parameters896 = $tmp897;
    if (((panda$core$Bit) { p_generics != NULL }).value) {
    {
        {
            ITable* $tmp900 = ((panda$collections$Iterable*) p_generics)->$class->itable;
            while ($tmp900->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp900 = $tmp900->next;
            }
            $fn902 $tmp901 = $tmp900->methods[0];
            panda$collections$Iterator* $tmp903 = $tmp901(((panda$collections$Iterable*) p_generics));
            p$Iter899 = $tmp903;
            $l904:;
            ITable* $tmp906 = p$Iter899->$class->itable;
            while ($tmp906->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp906 = $tmp906->next;
            }
            $fn908 $tmp907 = $tmp906->methods[0];
            panda$core$Bit $tmp909 = $tmp907(p$Iter899);
            panda$core$Bit $tmp910 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp909);
            if (!$tmp910.value) goto $l905;
            {
                ITable* $tmp912 = p$Iter899->$class->itable;
                while ($tmp912->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp912 = $tmp912->next;
                }
                $fn914 $tmp913 = $tmp912->methods[1];
                panda$core$Object* $tmp915 = $tmp913(p$Iter899);
                p911 = ((org$pandalanguage$pandac$ASTNode*) $tmp915);
                memset(&name916, 0, sizeof(name916));
                memset(&bound917, 0, sizeof(bound917));
                {
                    $match$453_17918 = p911;
                    panda$core$Bit $tmp919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453_17918->$rawValue, ((panda$core$Int64) { 18 }));
                    if ($tmp919.value) {
                    {
                        panda$core$String** $tmp921 = ((panda$core$String**) ((char*) $match$453_17918->$data + 16));
                        id920 = *$tmp921;
                        {
                            name916 = id920;
                        }
                        {
                            org$pandalanguage$pandac$Type* $tmp922 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                            bound917 = $tmp922;
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453_17918->$rawValue, ((panda$core$Int64) { 36 }));
                    if ($tmp923.value) {
                    {
                        panda$core$String** $tmp925 = ((panda$core$String**) ((char*) $match$453_17918->$data + 16));
                        id924 = *$tmp925;
                        org$pandalanguage$pandac$ASTNode** $tmp927 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$453_17918->$data + 24));
                        type926 = *$tmp927;
                        {
                            name916 = id924;
                        }
                        {
                            org$pandalanguage$pandac$Type* $tmp928 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type926);
                            bound917 = $tmp928;
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
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp929 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaZAlloc(72);
                $tmp929->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp929->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp932 = (($fn931) p911->$class->vtable[2])(p911);
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp929, $tmp932, fullName878, name916, bound917);
                panda$collections$Array$add$panda$collections$Array$T(parameters896, ((panda$core$Object*) $tmp929));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound917));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name916));
                }
            }
            goto $l904;
            $l905:;
        }
        panda$core$Bit $tmp933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp933.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s934);
        }
        }
    }
    }
    panda$collections$Array* $tmp936 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp936->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp936->refCount.value = 1;
    panda$collections$Array$init($tmp936);
    supertypes935 = $tmp936;
    if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
    {
        panda$core$Bit $tmp938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp938.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s939);
        }
        }
        {
            ITable* $tmp941 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
            while ($tmp941->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp941 = $tmp941->next;
            }
            $fn943 $tmp942 = $tmp941->methods[0];
            panda$collections$Iterator* $tmp944 = $tmp942(((panda$collections$Iterable*) p_rawSupertypes));
            s$Iter940 = $tmp944;
            $l945:;
            ITable* $tmp947 = s$Iter940->$class->itable;
            while ($tmp947->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp947 = $tmp947->next;
            }
            $fn949 $tmp948 = $tmp947->methods[0];
            panda$core$Bit $tmp950 = $tmp948(s$Iter940);
            panda$core$Bit $tmp951 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp950);
            if (!$tmp951.value) goto $l946;
            {
                ITable* $tmp953 = s$Iter940->$class->itable;
                while ($tmp953->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp953 = $tmp953->next;
                }
                $fn955 $tmp954 = $tmp953->methods[1];
                panda$core$Object* $tmp956 = $tmp954(s$Iter940);
                s952 = ((org$pandalanguage$pandac$ASTNode*) $tmp956);
                org$pandalanguage$pandac$Type* $tmp957 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s952);
                panda$collections$Array$add$panda$collections$Array$T(supertypes935, ((panda$core$Object*) $tmp957));
            }
            goto $l945;
            $l946:;
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp959 = (org$pandalanguage$pandac$ClassDecl*) pandaZAlloc(201);
    $tmp959->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp959->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp959, p_source, p_position, p_aliases, doccomment887, annotations894, p_kind, fullName878, ((panda$collections$ListView*) supertypes935), parameters896, self->compiler->root);
    result958 = $tmp959;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result958));
    panda$core$Bit $tmp961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp961.value) {
    {
        org$pandalanguage$pandac$FieldDecl* $tmp963 = (org$pandalanguage$pandac$FieldDecl*) pandaZAlloc(113);
        $tmp963->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
        $tmp963->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp965 = (org$pandalanguage$pandac$Annotations*) pandaZAlloc(24);
        $tmp965->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp965->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp965);
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp967, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp969 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp963, result958, ((org$pandalanguage$pandac$Symbol*) result958)->position, NULL, $tmp965, $tmp967, &$s968, $tmp969, NULL);
        rawValue962 = $tmp963;
        panda$collections$Array$add$panda$collections$Array$T(result958->fields, ((panda$core$Object*) rawValue962));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result958->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue962));
        org$pandalanguage$pandac$FieldDecl* $tmp971 = (org$pandalanguage$pandac$FieldDecl*) pandaZAlloc(113);
        $tmp971->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
        $tmp971->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp973 = (org$pandalanguage$pandac$Annotations*) pandaZAlloc(24);
        $tmp973->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp973->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp973);
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp975, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp977 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp971, result958, ((org$pandalanguage$pandac$Symbol*) result958)->position, NULL, $tmp973, $tmp975, &$s976, $tmp977, NULL);
        data970 = $tmp971;
        panda$collections$Array$add$panda$collections$Array$T(result958->fields, ((panda$core$Object*) data970));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result958->symbolTable, ((org$pandalanguage$pandac$Symbol*) data970));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue962));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data970));
        }
    }
    }
    {
        ITable* $tmp979 = ((panda$collections$Iterable*) p_members)->$class->itable;
        while ($tmp979->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp979 = $tmp979->next;
        }
        $fn981 $tmp980 = $tmp979->methods[0];
        panda$collections$Iterator* $tmp982 = $tmp980(((panda$collections$Iterable*) p_members));
        m$Iter978 = $tmp982;
        $l983:;
        ITable* $tmp985 = m$Iter978->$class->itable;
        while ($tmp985->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp985 = $tmp985->next;
        }
        $fn987 $tmp986 = $tmp985->methods[0];
        panda$core$Bit $tmp988 = $tmp986(m$Iter978);
        panda$core$Bit $tmp989 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp988);
        if (!$tmp989.value) goto $l984;
        {
            ITable* $tmp991 = m$Iter978->$class->itable;
            while ($tmp991->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp991 = $tmp991->next;
            }
            $fn993 $tmp992 = $tmp991->methods[1];
            panda$core$Object* $tmp994 = $tmp992(m$Iter978);
            m990 = ((org$pandalanguage$pandac$ASTNode*) $tmp994);
            {
                $match$492_13995 = m990;
                panda$core$Bit $tmp996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$492_13995->$rawValue, ((panda$core$Int64) { 23 }));
                if ($tmp996.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp998 = ((org$pandalanguage$pandac$Position*) ((char*) $match$492_13995->$data + 0));
                    mPosition997 = *$tmp998;
                    org$pandalanguage$pandac$MethodDecl$Kind* $tmp1000 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$492_13995->$data + 32));
                    methodKind999 = *$tmp1000;
                    panda$core$Bit $tmp1001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind999.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1001.value) {
                    {
                        {
                            $match$495_251002 = p_kind;
                            panda$core$Bit $tmp1003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_251002.$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp1003.value) {
                            {
                            }
                            }
                            else {
                            panda$core$Bit $tmp1004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_251002.$rawValue, ((panda$core$Int64) { 1 }));
                            if ($tmp1004.value) {
                            {
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, mPosition997, &$s1005);
                            }
                            }
                            else {
                            panda$core$Bit $tmp1006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_251002.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp1006.value) {
                            {
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, mPosition997, &$s1007);
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
            org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result958, m990);
        }
        goto $l983;
        $l984:;
    }
    foundInit1008 = ((panda$core$Bit) { false });
    foundCleanup1009 = ((panda$core$Bit) { false });
    {
        ITable* $tmp1011 = ((panda$collections$Iterable*) result958->methods)->$class->itable;
        while ($tmp1011->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1011 = $tmp1011->next;
        }
        $fn1013 $tmp1012 = $tmp1011->methods[0];
        panda$collections$Iterator* $tmp1014 = $tmp1012(((panda$collections$Iterable*) result958->methods));
        m$Iter1010 = $tmp1014;
        $l1015:;
        ITable* $tmp1017 = m$Iter1010->$class->itable;
        while ($tmp1017->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1017 = $tmp1017->next;
        }
        $fn1019 $tmp1018 = $tmp1017->methods[0];
        panda$core$Bit $tmp1020 = $tmp1018(m$Iter1010);
        panda$core$Bit $tmp1021 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1020);
        if (!$tmp1021.value) goto $l1016;
        {
            ITable* $tmp1023 = m$Iter1010->$class->itable;
            while ($tmp1023->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1023 = $tmp1023->next;
            }
            $fn1025 $tmp1024 = $tmp1023->methods[1];
            panda$core$Object* $tmp1026 = $tmp1024(m$Iter1010);
            m1022 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1026);
            panda$core$Bit $tmp1027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1022->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1027.value) {
            {
                foundInit1008 = ((panda$core$Bit) { true });
            }
            }
            panda$core$Bit $tmp1030 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1022)->name, &$s1029);
            bool $tmp1028 = $tmp1030.value;
            if (!$tmp1028) goto $l1031;
            panda$core$Int64 $tmp1032 = panda$collections$Array$get_count$R$panda$core$Int64(m1022->parameters);
            panda$core$Bit $tmp1033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1032, ((panda$core$Int64) { 0 }));
            $tmp1028 = $tmp1033.value;
            $l1031:;
            panda$core$Bit $tmp1034 = { $tmp1028 };
            if ($tmp1034.value) {
            {
                foundCleanup1009 = ((panda$core$Bit) { true });
            }
            }
        }
        goto $l1015;
        $l1016:;
    }
    panda$core$Bit $tmp1037 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1008);
    bool $tmp1036 = $tmp1037.value;
    if (!$tmp1036) goto $l1038;
    panda$core$Bit $tmp1039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
    $tmp1036 = $tmp1039.value;
    $l1038:;
    panda$core$Bit $tmp1040 = { $tmp1036 };
    bool $tmp1035 = $tmp1040.value;
    if (!$tmp1035) goto $l1041;
    panda$core$Bit $tmp1043 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result958)->name, &$s1042);
    $tmp1035 = $tmp1043.value;
    $l1041:;
    panda$core$Bit $tmp1044 = { $tmp1035 };
    if ($tmp1044.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp1046 = (org$pandalanguage$pandac$MethodDecl*) pandaZAlloc(136);
        $tmp1046->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp1046->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp1048 = (org$pandalanguage$pandac$Annotations*) pandaZAlloc(24);
        $tmp1048->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp1048->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp1048);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1050, ((panda$core$Int64) { 2 }));
        panda$collections$Array* $tmp1052 = (panda$collections$Array*) pandaZAlloc(40);
        $tmp1052->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1052->refCount.value = 1;
        panda$collections$Array$init($tmp1052);
        org$pandalanguage$pandac$Type* $tmp1054 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp1055 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
        $tmp1055->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp1055->refCount.value = 1;
        panda$collections$ImmutableArray$init($tmp1055);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1046, result958, p_position, NULL, $tmp1048, $tmp1050, &$s1051, $tmp1052, $tmp1054, $tmp1055);
        defaultInit1045 = $tmp1046;
        panda$collections$Array$add$panda$collections$Array$T(result958->methods, ((panda$core$Object*) defaultInit1045));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result958->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1045));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1045));
    }
    }
    panda$core$Bit $tmp1059 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup1009);
    bool $tmp1058 = $tmp1059.value;
    if (!$tmp1058) goto $l1060;
    panda$core$Bit $tmp1061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
    $tmp1058 = $tmp1061.value;
    $l1060:;
    panda$core$Bit $tmp1062 = { $tmp1058 };
    bool $tmp1057 = $tmp1062.value;
    if (!$tmp1057) goto $l1063;
    panda$core$Bit $tmp1065 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result958)->name, &$s1064);
    $tmp1057 = $tmp1065.value;
    $l1063:;
    panda$core$Bit $tmp1066 = { $tmp1057 };
    if ($tmp1066.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp1068 = (org$pandalanguage$pandac$MethodDecl*) pandaZAlloc(136);
        $tmp1068->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp1068->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp1070 = (org$pandalanguage$pandac$Annotations*) pandaZAlloc(24);
        $tmp1070->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp1070->refCount.value = 1;
        panda$core$Int64 $tmp1072 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1070, $tmp1072);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1073, ((panda$core$Int64) { 0 }));
        panda$collections$Array* $tmp1075 = (panda$collections$Array*) pandaZAlloc(40);
        $tmp1075->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1075->refCount.value = 1;
        panda$collections$Array$init($tmp1075);
        org$pandalanguage$pandac$Type* $tmp1077 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp1078 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
        $tmp1078->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp1078->refCount.value = 1;
        panda$collections$ImmutableArray$init($tmp1078);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1068, result958, p_position, NULL, $tmp1070, $tmp1073, &$s1074, $tmp1075, $tmp1077, $tmp1078);
        defaultCleanup1067 = $tmp1068;
        panda$collections$Array$add$panda$collections$Array$T(result958->methods, ((panda$core$Object*) defaultCleanup1067));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result958->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1067));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1067));
    }
    }
    panda$core$Bit $tmp1080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp1080.value) {
    {
        haveFields1081 = ((panda$core$Bit) { false });
        {
            ITable* $tmp1083 = ((panda$collections$Iterable*) result958->choiceEntries)->$class->itable;
            while ($tmp1083->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1083 = $tmp1083->next;
            }
            $fn1085 $tmp1084 = $tmp1083->methods[0];
            panda$collections$Iterator* $tmp1086 = $tmp1084(((panda$collections$Iterable*) result958->choiceEntries));
            e$Iter1082 = $tmp1086;
            $l1087:;
            ITable* $tmp1089 = e$Iter1082->$class->itable;
            while ($tmp1089->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1089 = $tmp1089->next;
            }
            $fn1091 $tmp1090 = $tmp1089->methods[0];
            panda$core$Bit $tmp1092 = $tmp1090(e$Iter1082);
            panda$core$Bit $tmp1093 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1092);
            if (!$tmp1093.value) goto $l1088;
            {
                ITable* $tmp1095 = e$Iter1082->$class->itable;
                while ($tmp1095->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1095 = $tmp1095->next;
                }
                $fn1097 $tmp1096 = $tmp1095->methods[1];
                panda$core$Object* $tmp1098 = $tmp1096(e$Iter1082);
                e1094 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1098);
                panda$core$Int64 $tmp1099 = panda$collections$Array$get_count$R$panda$core$Int64(e1094->fields);
                panda$core$Bit $tmp1100 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1099, ((panda$core$Int64) { 0 }));
                if ($tmp1100.value) {
                {
                    haveFields1081 = ((panda$core$Bit) { true });
                    goto $l1088;
                }
                }
            }
            goto $l1087;
            $l1088:;
        }
        panda$core$Bit $tmp1101 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1081);
        if ($tmp1101.value) {
        {
            {
                org$pandalanguage$pandac$Type* $tmp1102 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                result958->rawSuper = $tmp1102;
            }
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    {
        tmp21103 = result958;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName878));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result958));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations894));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters896));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes935));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment887));
        }
        return tmp21103;
    }
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter1104;
    org$pandalanguage$pandac$ClassDecl* inner1116;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp1105 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp1105->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1105 = $tmp1105->next;
        }
        $fn1107 $tmp1106 = $tmp1105->methods[0];
        panda$collections$Iterator* $tmp1108 = $tmp1106(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter1104 = $tmp1108;
        $l1109:;
        ITable* $tmp1111 = inner$Iter1104->$class->itable;
        while ($tmp1111->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1111 = $tmp1111->next;
        }
        $fn1113 $tmp1112 = $tmp1111->methods[0];
        panda$core$Bit $tmp1114 = $tmp1112(inner$Iter1104);
        panda$core$Bit $tmp1115 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1114);
        if (!$tmp1115.value) goto $l1110;
        {
            ITable* $tmp1117 = inner$Iter1104->$class->itable;
            while ($tmp1117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1117 = $tmp1117->next;
            }
            $fn1119 $tmp1118 = $tmp1117->methods[1];
            panda$core$Object* $tmp1120 = $tmp1118(inner$Iter1104);
            inner1116 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1120);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1116, p_arr);
        }
        goto $l1109;
        $l1110:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$556_91121;
    panda$collections$ImmutableArray* entries1123;
    panda$collections$Array* result1125;
    panda$core$String* currentPackage1128;
    panda$collections$HashMap* aliases1130;
    panda$collections$Iterator* e$Iter1133;
    org$pandalanguage$pandac$ASTNode* e1145;
    org$pandalanguage$pandac$ASTNode* $match$562_211150;
    panda$core$String* name1152;
    panda$core$String* fullName1155;
    panda$core$String$Index$nullable idx1157;
    panda$core$String* alias1160;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1161;
    org$pandalanguage$pandac$Position position1165;
    org$pandalanguage$pandac$ASTNode* dc1167;
    panda$collections$ImmutableArray* annotations1169;
    org$pandalanguage$pandac$ClassDecl$Kind kind1171;
    panda$core$String* name1173;
    panda$collections$ImmutableArray* generics1175;
    panda$collections$ImmutableArray* supertypes1177;
    panda$collections$ImmutableArray* members1179;
    org$pandalanguage$pandac$ClassDecl* cl1181;
    {
        $match$556_91121 = p_file;
        panda$core$Bit $tmp1122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$556_91121->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1122.value) {
        {
            panda$collections$ImmutableArray** $tmp1124 = ((panda$collections$ImmutableArray**) ((char*) $match$556_91121->$data + 0));
            entries1123 = *$tmp1124;
            panda$collections$Array* $tmp1126 = (panda$collections$Array*) pandaZAlloc(40);
            $tmp1126->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1126->refCount.value = 1;
            panda$collections$Array$init($tmp1126);
            result1125 = $tmp1126;
            currentPackage1128 = &$s1129;
            panda$collections$HashMap* $tmp1131 = (panda$collections$HashMap*) pandaZAlloc(56);
            $tmp1131->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1131->refCount.value = 1;
            panda$collections$HashMap$init($tmp1131);
            aliases1130 = $tmp1131;
            {
                ITable* $tmp1134 = ((panda$collections$Iterable*) entries1123)->$class->itable;
                while ($tmp1134->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1134 = $tmp1134->next;
                }
                $fn1136 $tmp1135 = $tmp1134->methods[0];
                panda$collections$Iterator* $tmp1137 = $tmp1135(((panda$collections$Iterable*) entries1123));
                e$Iter1133 = $tmp1137;
                $l1138:;
                ITable* $tmp1140 = e$Iter1133->$class->itable;
                while ($tmp1140->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1140 = $tmp1140->next;
                }
                $fn1142 $tmp1141 = $tmp1140->methods[0];
                panda$core$Bit $tmp1143 = $tmp1141(e$Iter1133);
                panda$core$Bit $tmp1144 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1143);
                if (!$tmp1144.value) goto $l1139;
                {
                    ITable* $tmp1146 = e$Iter1133->$class->itable;
                    while ($tmp1146->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1146 = $tmp1146->next;
                    }
                    $fn1148 $tmp1147 = $tmp1146->methods[1];
                    panda$core$Object* $tmp1149 = $tmp1147(e$Iter1133);
                    e1145 = ((org$pandalanguage$pandac$ASTNode*) $tmp1149);
                    {
                        $match$562_211150 = e1145;
                        panda$core$Bit $tmp1151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$562_211150->$rawValue, ((panda$core$Int64) { 26 }));
                        if ($tmp1151.value) {
                        {
                            panda$core$String** $tmp1153 = ((panda$core$String**) ((char*) $match$562_211150->$data + 16));
                            name1152 = *$tmp1153;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1128));
                                currentPackage1128 = name1152;
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp1154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$562_211150->$rawValue, ((panda$core$Int64) { 37 }));
                        if ($tmp1154.value) {
                        {
                            panda$core$String** $tmp1156 = ((panda$core$String**) ((char*) $match$562_211150->$data + 16));
                            fullName1155 = *$tmp1156;
                            panda$core$String$Index$nullable $tmp1159 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName1155, &$s1158);
                            idx1157 = $tmp1159;
                            memset(&alias1160, 0, sizeof(alias1160));
                            if (((panda$core$Bit) { idx1157.nonnull }).value) {
                            {
                                {
                                    panda$core$String$Index $tmp1162 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName1155, ((panda$core$String$Index) idx1157.value));
                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1161, ((panda$core$String$Index$nullable) { $tmp1162, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                    panda$core$String* $tmp1163 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName1155, $tmp1161);
                                    alias1160 = $tmp1163;
                                }
                            }
                            }
                            else {
                            {
                                {
                                    alias1160 = fullName1155;
                                }
                            }
                            }
                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1130, ((panda$collections$Key*) alias1160), ((panda$core$Object*) fullName1155));
                        }
                        }
                        else {
                        panda$core$Bit $tmp1164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$562_211150->$rawValue, ((panda$core$Int64) { 9 }));
                        if ($tmp1164.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp1166 = ((org$pandalanguage$pandac$Position*) ((char*) $match$562_211150->$data + 0));
                            position1165 = *$tmp1166;
                            org$pandalanguage$pandac$ASTNode** $tmp1168 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$562_211150->$data + 16));
                            dc1167 = *$tmp1168;
                            panda$collections$ImmutableArray** $tmp1170 = ((panda$collections$ImmutableArray**) ((char*) $match$562_211150->$data + 24));
                            annotations1169 = *$tmp1170;
                            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1172 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$562_211150->$data + 32));
                            kind1171 = *$tmp1172;
                            panda$core$String** $tmp1174 = ((panda$core$String**) ((char*) $match$562_211150->$data + 40));
                            name1173 = *$tmp1174;
                            panda$collections$ImmutableArray** $tmp1176 = ((panda$collections$ImmutableArray**) ((char*) $match$562_211150->$data + 48));
                            generics1175 = *$tmp1176;
                            panda$collections$ImmutableArray** $tmp1178 = ((panda$collections$ImmutableArray**) ((char*) $match$562_211150->$data + 56));
                            supertypes1177 = *$tmp1178;
                            panda$collections$ImmutableArray** $tmp1180 = ((panda$collections$ImmutableArray**) ((char*) $match$562_211150->$data + 64));
                            members1179 = *$tmp1180;
                            org$pandalanguage$pandac$ClassDecl* $tmp1182 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1130), currentPackage1128, position1165, dc1167, annotations1169, kind1171, name1173, generics1175, supertypes1177, members1179);
                            cl1181 = $tmp1182;
                            if (((panda$core$Bit) { cl1181 != NULL }).value) {
                            {
                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl1181, result1125);
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
                goto $l1138;
                $l1139:;
            }
            return ((panda$collections$ListView*) result1125);
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

