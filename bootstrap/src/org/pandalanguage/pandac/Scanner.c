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
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/io/File.h"
#include "panda/collections/MapView.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/Stack.h"
#include "panda/collections/HashMap.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/Key.h"


org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit, org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT} };

typedef panda$collections$Iterator* (*$fn42)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn48)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn54)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn67)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn73)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn79)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn168)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn174)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn180)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn232)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn238)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn244)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn259)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn265)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn271)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn302)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn308)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn314)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn338)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn344)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn350)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn370)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn376)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn382)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn398)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn404)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn410)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn426)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn432)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn438)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn445)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn451)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn457)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn489)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn495)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn501)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn514)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn520)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn526)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn533)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn539)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn545)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn561)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn567)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn573)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn591)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn597)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn603)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn634)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn640)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn646)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn763)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn769)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn775)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn786)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn792)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn798)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn929)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn935)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn941)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn958)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn970)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn976)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn982)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1008)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1014)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1020)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1051)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1057)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1063)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1093)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1099)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1105)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1114)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1120)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1126)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1143)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1149)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1155)(panda$collections$Iterator*);

static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x6f\x6e\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x27", 30, -1250916154819313721, NULL };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x68\x61\x76\x65\x20\x61\x20\x62\x6f\x64\x79", 16, -7652461387112275530, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s1165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = p_compiler;
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
            org$pandalanguage$pandac$Type* $tmp7 = (org$pandalanguage$pandac$Type*) malloc(96);
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
            panda$collections$Array* $tmp15 = (panda$collections$Array*) malloc(40);
            $tmp15->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp15->refCount.value = 1;
            panda$collections$Array$init($tmp15);
            subtypes14 = $tmp15;
            org$pandalanguage$pandac$Type* $tmp17 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, base12);
            panda$collections$Array$add$panda$collections$Array$T(subtypes14, ((panda$core$Object*) $tmp17));
            org$pandalanguage$pandac$Type* $tmp18 = (org$pandalanguage$pandac$Type*) malloc(96);
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
            panda$collections$Array* $tmp31 = (panda$collections$Array*) malloc(40);
            $tmp31->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp31->refCount.value = 1;
            panda$collections$Array$init($tmp31);
            subtypes30 = $tmp31;
            panda$core$MutableString* $tmp34 = (panda$core$MutableString*) malloc(48);
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
                    separator37 = &$s58;
                }
                goto $l44;
                $l45:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp59, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name33, $tmp59);
            org$pandalanguage$pandac$Type* $tmp60 = (org$pandalanguage$pandac$Type*) malloc(96);
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
    org$pandalanguage$pandac$Annotations* $tmp136 = (org$pandalanguage$pandac$Annotations*) malloc(24);
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
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        doccomment138 = NULL;
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
                doccomment138 = text143;
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
                            {
                                $match$106_29192 = target186;
                                panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$106_29192->$rawValue, ((panda$core$Int64) { 18 }));
                                if ($tmp193.value) {
                                {
                                    panda$core$String** $tmp195 = ((panda$core$String**) ((char*) $match$106_29192->$data + 16));
                                    id194 = *$tmp195;
                                    name190 = id194;
                                    org$pandalanguage$pandac$Type* $tmp196 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                    type191 = $tmp196;
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
                                    name190 = id198;
                                    org$pandalanguage$pandac$Type* $tmp202 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType200);
                                    type191 = $tmp202;
                                }
                                }
                                else {
                                {
                                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                                }
                                }
                                }
                            }
                            org$pandalanguage$pandac$FieldDecl* $tmp204 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
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
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$131_9206;
    org$pandalanguage$pandac$ASTNode* test208;
    org$pandalanguage$pandac$ASTNode* msg210;
    org$pandalanguage$pandac$ASTNode* left214;
    org$pandalanguage$pandac$parser$Token$Kind op216;
    org$pandalanguage$pandac$ASTNode* right218;
    panda$collections$ImmutableArray* statements226;
    panda$core$Int64 result228;
    panda$collections$Iterator* s$Iter229;
    org$pandalanguage$pandac$ASTNode* s241;
    org$pandalanguage$pandac$ASTNode* target250;
    panda$collections$ImmutableArray* args252;
    panda$core$Int64 result254;
    panda$collections$Iterator* a$Iter256;
    org$pandalanguage$pandac$ASTNode* a268;
    org$pandalanguage$pandac$ASTNode* base276;
    org$pandalanguage$pandac$ChoiceEntry* ce278;
    panda$core$Int64 f280;
    org$pandalanguage$pandac$ASTNode* target285;
    org$pandalanguage$pandac$ASTNode* value287;
    panda$core$String* label291;
    panda$collections$ImmutableArray* statements293;
    org$pandalanguage$pandac$ASTNode* test295;
    panda$core$Int64 result297;
    panda$collections$Iterator* s$Iter299;
    org$pandalanguage$pandac$ASTNode* s311;
    org$pandalanguage$pandac$ASTNode* base319;
    panda$core$String* field321;
    panda$core$String* label325;
    org$pandalanguage$pandac$ASTNode* target327;
    org$pandalanguage$pandac$ASTNode* list329;
    panda$collections$ImmutableArray* statements331;
    panda$core$Int64 result333;
    panda$collections$Iterator* s$Iter335;
    org$pandalanguage$pandac$ASTNode* s347;
    panda$core$String* text356;
    org$pandalanguage$pandac$ASTNode* test359;
    panda$collections$ImmutableArray* ifTrue361;
    org$pandalanguage$pandac$ASTNode* ifFalse363;
    panda$core$Int64 result365;
    panda$collections$Iterator* s$Iter367;
    org$pandalanguage$pandac$ASTNode* s379;
    panda$core$String* label390;
    panda$collections$ImmutableArray* statements392;
    panda$core$Int64 result394;
    panda$collections$Iterator* s$Iter395;
    org$pandalanguage$pandac$ASTNode* s407;
    org$pandalanguage$pandac$ASTNode* value415;
    panda$collections$ImmutableArray* whens417;
    panda$collections$ImmutableArray* other419;
    panda$core$Int64 result421;
    panda$collections$Iterator* w$Iter423;
    org$pandalanguage$pandac$ASTNode* w435;
    panda$collections$Iterator* s$Iter442;
    org$pandalanguage$pandac$ASTNode* s454;
    org$pandalanguage$pandac$parser$Token$Kind op464;
    org$pandalanguage$pandac$ASTNode* base466;
    org$pandalanguage$pandac$ASTNode* value473;
    org$pandalanguage$pandac$Variable$Kind kind481;
    panda$collections$ImmutableArray* decls483;
    panda$core$Int64 result485;
    panda$collections$Iterator* decl$Iter486;
    org$pandalanguage$pandac$ASTNode* decl498;
    panda$collections$ImmutableArray* tests506;
    panda$collections$ImmutableArray* statements508;
    panda$core$Int64 result510;
    panda$collections$Iterator* test$Iter511;
    org$pandalanguage$pandac$ASTNode* test523;
    panda$collections$Iterator* s$Iter530;
    org$pandalanguage$pandac$ASTNode* s542;
    panda$core$String* label550;
    org$pandalanguage$pandac$ASTNode* test552;
    panda$collections$ImmutableArray* statements554;
    panda$core$Int64 result556;
    panda$collections$Iterator* s$Iter558;
    org$pandalanguage$pandac$ASTNode* s570;
    {
        $match$131_9206 = p_node;
        panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp207.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp209 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 16));
            test208 = *$tmp209;
            org$pandalanguage$pandac$ASTNode** $tmp211 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 24));
            msg210 = *$tmp211;
            panda$core$Int64 $tmp212 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test208);
            return $tmp212;
        }
        }
        else {
        panda$core$Bit $tmp213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp213.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp215 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 16));
            left214 = *$tmp215;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp217 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$131_9206->$data + 24));
            op216 = *$tmp217;
            org$pandalanguage$pandac$ASTNode** $tmp219 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 32));
            right218 = *$tmp219;
            panda$core$Int64 $tmp220 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left214);
            panda$core$Int64 $tmp221 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp220);
            panda$core$Int64 $tmp222 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right218);
            panda$core$Int64 $tmp223 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp221, $tmp222);
            return $tmp223;
        }
        }
        else {
        panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp224.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp225.value) {
        {
            panda$collections$ImmutableArray** $tmp227 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 16));
            statements226 = *$tmp227;
            result228 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp230 = ((panda$collections$Iterable*) statements226)->$class->itable;
                while ($tmp230->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp230 = $tmp230->next;
                }
                $fn232 $tmp231 = $tmp230->methods[0];
                panda$collections$Iterator* $tmp233 = $tmp231(((panda$collections$Iterable*) statements226));
                s$Iter229 = $tmp233;
                $l234:;
                ITable* $tmp236 = s$Iter229->$class->itable;
                while ($tmp236->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp236 = $tmp236->next;
                }
                $fn238 $tmp237 = $tmp236->methods[0];
                panda$core$Bit $tmp239 = $tmp237(s$Iter229);
                panda$core$Bit $tmp240 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp239);
                if (!$tmp240.value) goto $l235;
                {
                    ITable* $tmp242 = s$Iter229->$class->itable;
                    while ($tmp242->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp242 = $tmp242->next;
                    }
                    $fn244 $tmp243 = $tmp242->methods[1];
                    panda$core$Object* $tmp245 = $tmp243(s$Iter229);
                    s241 = ((org$pandalanguage$pandac$ASTNode*) $tmp245);
                    panda$core$Int64 $tmp246 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s241);
                    panda$core$Int64 $tmp247 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result228, $tmp246);
                    result228 = $tmp247;
                }
                goto $l234;
                $l235:;
            }
            return result228;
        }
        }
        else {
        panda$core$Bit $tmp248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp248.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp249.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp251 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 16));
            target250 = *$tmp251;
            panda$collections$ImmutableArray** $tmp253 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 24));
            args252 = *$tmp253;
            panda$core$Int64 $tmp255 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target250);
            result254 = $tmp255;
            {
                ITable* $tmp257 = ((panda$collections$Iterable*) args252)->$class->itable;
                while ($tmp257->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp257 = $tmp257->next;
                }
                $fn259 $tmp258 = $tmp257->methods[0];
                panda$collections$Iterator* $tmp260 = $tmp258(((panda$collections$Iterable*) args252));
                a$Iter256 = $tmp260;
                $l261:;
                ITable* $tmp263 = a$Iter256->$class->itable;
                while ($tmp263->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp263 = $tmp263->next;
                }
                $fn265 $tmp264 = $tmp263->methods[0];
                panda$core$Bit $tmp266 = $tmp264(a$Iter256);
                panda$core$Bit $tmp267 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp266);
                if (!$tmp267.value) goto $l262;
                {
                    ITable* $tmp269 = a$Iter256->$class->itable;
                    while ($tmp269->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp269 = $tmp269->next;
                    }
                    $fn271 $tmp270 = $tmp269->methods[1];
                    panda$core$Object* $tmp272 = $tmp270(a$Iter256);
                    a268 = ((org$pandalanguage$pandac$ASTNode*) $tmp272);
                    panda$core$Int64 $tmp273 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a268);
                    panda$core$Int64 $tmp274 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result254, $tmp273);
                    result254 = $tmp274;
                }
                goto $l261;
                $l262:;
            }
            return result254;
        }
        }
        else {
        panda$core$Bit $tmp275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp275.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp277 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 16));
            base276 = *$tmp277;
            org$pandalanguage$pandac$ChoiceEntry** $tmp279 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$131_9206->$data + 24));
            ce278 = *$tmp279;
            panda$core$Int64* $tmp281 = ((panda$core$Int64*) ((char*) $match$131_9206->$data + 32));
            f280 = *$tmp281;
            panda$core$Int64 $tmp282 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base276);
            return $tmp282;
        }
        }
        else {
        panda$core$Bit $tmp283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp283.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp284.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp286 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 16));
            target285 = *$tmp286;
            org$pandalanguage$pandac$ASTNode** $tmp288 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 24));
            value287 = *$tmp288;
            if (((panda$core$Bit) { value287 == NULL }).value) {
            {
                return ((panda$core$Int64) { 0 });
            }
            }
            panda$core$Int64 $tmp289 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value287);
            return $tmp289;
        }
        }
        else {
        panda$core$Bit $tmp290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp290.value) {
        {
            panda$core$String** $tmp292 = ((panda$core$String**) ((char*) $match$131_9206->$data + 16));
            label291 = *$tmp292;
            panda$collections$ImmutableArray** $tmp294 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 24));
            statements293 = *$tmp294;
            org$pandalanguage$pandac$ASTNode** $tmp296 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 32));
            test295 = *$tmp296;
            panda$core$Int64 $tmp298 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test295);
            result297 = $tmp298;
            {
                ITable* $tmp300 = ((panda$collections$Iterable*) statements293)->$class->itable;
                while ($tmp300->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp300 = $tmp300->next;
                }
                $fn302 $tmp301 = $tmp300->methods[0];
                panda$collections$Iterator* $tmp303 = $tmp301(((panda$collections$Iterable*) statements293));
                s$Iter299 = $tmp303;
                $l304:;
                ITable* $tmp306 = s$Iter299->$class->itable;
                while ($tmp306->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp306 = $tmp306->next;
                }
                $fn308 $tmp307 = $tmp306->methods[0];
                panda$core$Bit $tmp309 = $tmp307(s$Iter299);
                panda$core$Bit $tmp310 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp309);
                if (!$tmp310.value) goto $l305;
                {
                    ITable* $tmp312 = s$Iter299->$class->itable;
                    while ($tmp312->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp312 = $tmp312->next;
                    }
                    $fn314 $tmp313 = $tmp312->methods[1];
                    panda$core$Object* $tmp315 = $tmp313(s$Iter299);
                    s311 = ((org$pandalanguage$pandac$ASTNode*) $tmp315);
                    panda$core$Int64 $tmp316 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s311);
                    panda$core$Int64 $tmp317 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result297, $tmp316);
                    result297 = $tmp317;
                }
                goto $l304;
                $l305:;
            }
            return result297;
        }
        }
        else {
        panda$core$Bit $tmp318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp318.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp320 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 16));
            base319 = *$tmp320;
            panda$core$String** $tmp322 = ((panda$core$String**) ((char*) $match$131_9206->$data + 24));
            field321 = *$tmp322;
            panda$core$Int64 $tmp323 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base319);
            return $tmp323;
        }
        }
        else {
        panda$core$Bit $tmp324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp324.value) {
        {
            panda$core$String** $tmp326 = ((panda$core$String**) ((char*) $match$131_9206->$data + 16));
            label325 = *$tmp326;
            org$pandalanguage$pandac$ASTNode** $tmp328 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 24));
            target327 = *$tmp328;
            org$pandalanguage$pandac$ASTNode** $tmp330 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 32));
            list329 = *$tmp330;
            panda$collections$ImmutableArray** $tmp332 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 40));
            statements331 = *$tmp332;
            panda$core$Int64 $tmp334 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list329);
            result333 = $tmp334;
            {
                ITable* $tmp336 = ((panda$collections$Iterable*) statements331)->$class->itable;
                while ($tmp336->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp336 = $tmp336->next;
                }
                $fn338 $tmp337 = $tmp336->methods[0];
                panda$collections$Iterator* $tmp339 = $tmp337(((panda$collections$Iterable*) statements331));
                s$Iter335 = $tmp339;
                $l340:;
                ITable* $tmp342 = s$Iter335->$class->itable;
                while ($tmp342->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp342 = $tmp342->next;
                }
                $fn344 $tmp343 = $tmp342->methods[0];
                panda$core$Bit $tmp345 = $tmp343(s$Iter335);
                panda$core$Bit $tmp346 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp345);
                if (!$tmp346.value) goto $l341;
                {
                    ITable* $tmp348 = s$Iter335->$class->itable;
                    while ($tmp348->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp348 = $tmp348->next;
                    }
                    $fn350 $tmp349 = $tmp348->methods[1];
                    panda$core$Object* $tmp351 = $tmp349(s$Iter335);
                    s347 = ((org$pandalanguage$pandac$ASTNode*) $tmp351);
                    panda$core$Int64 $tmp352 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s347);
                    panda$core$Int64 $tmp353 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result333, $tmp352);
                    result333 = $tmp353;
                }
                goto $l340;
                $l341:;
            }
            return result333;
        }
        }
        else {
        panda$core$Bit $tmp354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp354.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp355.value) {
        {
            panda$core$String** $tmp357 = ((panda$core$String**) ((char*) $match$131_9206->$data + 16));
            text356 = *$tmp357;
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp358.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp360 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 16));
            test359 = *$tmp360;
            panda$collections$ImmutableArray** $tmp362 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 24));
            ifTrue361 = *$tmp362;
            org$pandalanguage$pandac$ASTNode** $tmp364 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 32));
            ifFalse363 = *$tmp364;
            panda$core$Int64 $tmp366 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test359);
            result365 = $tmp366;
            {
                ITable* $tmp368 = ((panda$collections$Iterable*) ifTrue361)->$class->itable;
                while ($tmp368->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp368 = $tmp368->next;
                }
                $fn370 $tmp369 = $tmp368->methods[0];
                panda$collections$Iterator* $tmp371 = $tmp369(((panda$collections$Iterable*) ifTrue361));
                s$Iter367 = $tmp371;
                $l372:;
                ITable* $tmp374 = s$Iter367->$class->itable;
                while ($tmp374->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp374 = $tmp374->next;
                }
                $fn376 $tmp375 = $tmp374->methods[0];
                panda$core$Bit $tmp377 = $tmp375(s$Iter367);
                panda$core$Bit $tmp378 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp377);
                if (!$tmp378.value) goto $l373;
                {
                    ITable* $tmp380 = s$Iter367->$class->itable;
                    while ($tmp380->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp380 = $tmp380->next;
                    }
                    $fn382 $tmp381 = $tmp380->methods[1];
                    panda$core$Object* $tmp383 = $tmp381(s$Iter367);
                    s379 = ((org$pandalanguage$pandac$ASTNode*) $tmp383);
                    panda$core$Int64 $tmp384 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s379);
                    panda$core$Int64 $tmp385 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result365, $tmp384);
                    result365 = $tmp385;
                }
                goto $l372;
                $l373:;
            }
            if (((panda$core$Bit) { ifFalse363 != NULL }).value) {
            {
                panda$core$Int64 $tmp386 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse363);
                panda$core$Int64 $tmp387 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result365, $tmp386);
                result365 = $tmp387;
            }
            }
            return result365;
        }
        }
        else {
        panda$core$Bit $tmp388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp388.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp389.value) {
        {
            panda$core$String** $tmp391 = ((panda$core$String**) ((char*) $match$131_9206->$data + 16));
            label390 = *$tmp391;
            panda$collections$ImmutableArray** $tmp393 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 24));
            statements392 = *$tmp393;
            result394 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp396 = ((panda$collections$Iterable*) statements392)->$class->itable;
                while ($tmp396->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp396 = $tmp396->next;
                }
                $fn398 $tmp397 = $tmp396->methods[0];
                panda$collections$Iterator* $tmp399 = $tmp397(((panda$collections$Iterable*) statements392));
                s$Iter395 = $tmp399;
                $l400:;
                ITable* $tmp402 = s$Iter395->$class->itable;
                while ($tmp402->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp402 = $tmp402->next;
                }
                $fn404 $tmp403 = $tmp402->methods[0];
                panda$core$Bit $tmp405 = $tmp403(s$Iter395);
                panda$core$Bit $tmp406 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp405);
                if (!$tmp406.value) goto $l401;
                {
                    ITable* $tmp408 = s$Iter395->$class->itable;
                    while ($tmp408->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp408 = $tmp408->next;
                    }
                    $fn410 $tmp409 = $tmp408->methods[1];
                    panda$core$Object* $tmp411 = $tmp409(s$Iter395);
                    s407 = ((org$pandalanguage$pandac$ASTNode*) $tmp411);
                    panda$core$Int64 $tmp412 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s407);
                    panda$core$Int64 $tmp413 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result394, $tmp412);
                    result394 = $tmp413;
                }
                goto $l400;
                $l401:;
            }
            return result394;
        }
        }
        else {
        panda$core$Bit $tmp414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp414.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp416 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 16));
            value415 = *$tmp416;
            panda$collections$ImmutableArray** $tmp418 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 24));
            whens417 = *$tmp418;
            panda$collections$ImmutableArray** $tmp420 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 32));
            other419 = *$tmp420;
            panda$core$Int64 $tmp422 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value415);
            result421 = $tmp422;
            {
                ITable* $tmp424 = ((panda$collections$Iterable*) whens417)->$class->itable;
                while ($tmp424->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp424 = $tmp424->next;
                }
                $fn426 $tmp425 = $tmp424->methods[0];
                panda$collections$Iterator* $tmp427 = $tmp425(((panda$collections$Iterable*) whens417));
                w$Iter423 = $tmp427;
                $l428:;
                ITable* $tmp430 = w$Iter423->$class->itable;
                while ($tmp430->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp430 = $tmp430->next;
                }
                $fn432 $tmp431 = $tmp430->methods[0];
                panda$core$Bit $tmp433 = $tmp431(w$Iter423);
                panda$core$Bit $tmp434 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp433);
                if (!$tmp434.value) goto $l429;
                {
                    ITable* $tmp436 = w$Iter423->$class->itable;
                    while ($tmp436->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp436 = $tmp436->next;
                    }
                    $fn438 $tmp437 = $tmp436->methods[1];
                    panda$core$Object* $tmp439 = $tmp437(w$Iter423);
                    w435 = ((org$pandalanguage$pandac$ASTNode*) $tmp439);
                    panda$core$Int64 $tmp440 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w435);
                    panda$core$Int64 $tmp441 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result421, $tmp440);
                    result421 = $tmp441;
                }
                goto $l428;
                $l429:;
            }
            if (((panda$core$Bit) { other419 != NULL }).value) {
            {
                {
                    ITable* $tmp443 = ((panda$collections$Iterable*) other419)->$class->itable;
                    while ($tmp443->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp443 = $tmp443->next;
                    }
                    $fn445 $tmp444 = $tmp443->methods[0];
                    panda$collections$Iterator* $tmp446 = $tmp444(((panda$collections$Iterable*) other419));
                    s$Iter442 = $tmp446;
                    $l447:;
                    ITable* $tmp449 = s$Iter442->$class->itable;
                    while ($tmp449->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp449 = $tmp449->next;
                    }
                    $fn451 $tmp450 = $tmp449->methods[0];
                    panda$core$Bit $tmp452 = $tmp450(s$Iter442);
                    panda$core$Bit $tmp453 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp452);
                    if (!$tmp453.value) goto $l448;
                    {
                        ITable* $tmp455 = s$Iter442->$class->itable;
                        while ($tmp455->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp455 = $tmp455->next;
                        }
                        $fn457 $tmp456 = $tmp455->methods[1];
                        panda$core$Object* $tmp458 = $tmp456(s$Iter442);
                        s454 = ((org$pandalanguage$pandac$ASTNode*) $tmp458);
                        panda$core$Int64 $tmp459 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s454);
                        panda$core$Int64 $tmp460 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result421, $tmp459);
                        result421 = $tmp460;
                    }
                    goto $l447;
                    $l448:;
                }
            }
            }
            return result421;
        }
        }
        else {
        panda$core$Bit $tmp461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp461.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp462.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp463.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp465 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$131_9206->$data + 16));
            op464 = *$tmp465;
            org$pandalanguage$pandac$ASTNode** $tmp467 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 24));
            base466 = *$tmp467;
            panda$core$Int64 $tmp468 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base466);
            panda$core$Int64 $tmp469 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp468);
            return $tmp469;
        }
        }
        else {
        panda$core$Bit $tmp470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp470.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp471.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp472.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp474 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 16));
            value473 = *$tmp474;
            if (((panda$core$Bit) { value473 == NULL }).value) {
            {
                return ((panda$core$Int64) { 0 });
            }
            }
            panda$core$Int64 $tmp475 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value473);
            return $tmp475;
        }
        }
        else {
        panda$core$Bit $tmp476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp476.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp477.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp478.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp479.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp480.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp482 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$131_9206->$data + 16));
            kind481 = *$tmp482;
            panda$collections$ImmutableArray** $tmp484 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 24));
            decls483 = *$tmp484;
            result485 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp487 = ((panda$collections$Iterable*) decls483)->$class->itable;
                while ($tmp487->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp487 = $tmp487->next;
                }
                $fn489 $tmp488 = $tmp487->methods[0];
                panda$collections$Iterator* $tmp490 = $tmp488(((panda$collections$Iterable*) decls483));
                decl$Iter486 = $tmp490;
                $l491:;
                ITable* $tmp493 = decl$Iter486->$class->itable;
                while ($tmp493->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp493 = $tmp493->next;
                }
                $fn495 $tmp494 = $tmp493->methods[0];
                panda$core$Bit $tmp496 = $tmp494(decl$Iter486);
                panda$core$Bit $tmp497 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp496);
                if (!$tmp497.value) goto $l492;
                {
                    ITable* $tmp499 = decl$Iter486->$class->itable;
                    while ($tmp499->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp499 = $tmp499->next;
                    }
                    $fn501 $tmp500 = $tmp499->methods[1];
                    panda$core$Object* $tmp502 = $tmp500(decl$Iter486);
                    decl498 = ((org$pandalanguage$pandac$ASTNode*) $tmp502);
                    panda$core$Int64 $tmp503 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl498);
                    panda$core$Int64 $tmp504 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result485, $tmp503);
                    result485 = $tmp504;
                }
                goto $l491;
                $l492:;
            }
            return result485;
        }
        }
        else {
        panda$core$Bit $tmp505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp505.value) {
        {
            panda$collections$ImmutableArray** $tmp507 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 16));
            tests506 = *$tmp507;
            panda$collections$ImmutableArray** $tmp509 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 24));
            statements508 = *$tmp509;
            result510 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp512 = ((panda$collections$Iterable*) tests506)->$class->itable;
                while ($tmp512->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp512 = $tmp512->next;
                }
                $fn514 $tmp513 = $tmp512->methods[0];
                panda$collections$Iterator* $tmp515 = $tmp513(((panda$collections$Iterable*) tests506));
                test$Iter511 = $tmp515;
                $l516:;
                ITable* $tmp518 = test$Iter511->$class->itable;
                while ($tmp518->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp518 = $tmp518->next;
                }
                $fn520 $tmp519 = $tmp518->methods[0];
                panda$core$Bit $tmp521 = $tmp519(test$Iter511);
                panda$core$Bit $tmp522 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp521);
                if (!$tmp522.value) goto $l517;
                {
                    ITable* $tmp524 = test$Iter511->$class->itable;
                    while ($tmp524->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp524 = $tmp524->next;
                    }
                    $fn526 $tmp525 = $tmp524->methods[1];
                    panda$core$Object* $tmp527 = $tmp525(test$Iter511);
                    test523 = ((org$pandalanguage$pandac$ASTNode*) $tmp527);
                    panda$core$Int64 $tmp528 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test523);
                    panda$core$Int64 $tmp529 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result510, $tmp528);
                    result510 = $tmp529;
                }
                goto $l516;
                $l517:;
            }
            {
                ITable* $tmp531 = ((panda$collections$Iterable*) statements508)->$class->itable;
                while ($tmp531->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp531 = $tmp531->next;
                }
                $fn533 $tmp532 = $tmp531->methods[0];
                panda$collections$Iterator* $tmp534 = $tmp532(((panda$collections$Iterable*) statements508));
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
                    panda$core$Int64 $tmp548 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result510, $tmp547);
                    result510 = $tmp548;
                }
                goto $l535;
                $l536:;
            }
            return result510;
        }
        }
        else {
        panda$core$Bit $tmp549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9206->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp549.value) {
        {
            panda$core$String** $tmp551 = ((panda$core$String**) ((char*) $match$131_9206->$data + 16));
            label550 = *$tmp551;
            org$pandalanguage$pandac$ASTNode** $tmp553 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9206->$data + 24));
            test552 = *$tmp553;
            panda$collections$ImmutableArray** $tmp555 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9206->$data + 32));
            statements554 = *$tmp555;
            panda$core$Int64 $tmp557 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test552);
            result556 = $tmp557;
            {
                ITable* $tmp559 = ((panda$collections$Iterable*) statements554)->$class->itable;
                while ($tmp559->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp559 = $tmp559->next;
                }
                $fn561 $tmp560 = $tmp559->methods[0];
                panda$collections$Iterator* $tmp562 = $tmp560(((panda$collections$Iterable*) statements554));
                s$Iter558 = $tmp562;
                $l563:;
                ITable* $tmp565 = s$Iter558->$class->itable;
                while ($tmp565->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp565 = $tmp565->next;
                }
                $fn567 $tmp566 = $tmp565->methods[0];
                panda$core$Bit $tmp568 = $tmp566(s$Iter558);
                panda$core$Bit $tmp569 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp568);
                if (!$tmp569.value) goto $l564;
                {
                    ITable* $tmp571 = s$Iter558->$class->itable;
                    while ($tmp571->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp571 = $tmp571->next;
                    }
                    $fn573 $tmp572 = $tmp571->methods[1];
                    panda$core$Object* $tmp574 = $tmp572(s$Iter558);
                    s570 = ((org$pandalanguage$pandac$ASTNode*) $tmp574);
                    panda$core$Int64 $tmp575 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s570);
                    panda$core$Int64 $tmp576 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result556, $tmp575);
                    result556 = $tmp576;
                }
                goto $l563;
                $l564:;
            }
            return result556;
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
    panda$core$Int64 c587;
    panda$collections$Iterator* s$Iter588;
    org$pandalanguage$pandac$ASTNode* s600;
    panda$core$Bit $tmp579 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp578 = $tmp579.value;
    if (!$tmp578) goto $l580;
    panda$core$Bit $tmp581 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp582 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp581);
    $tmp578 = $tmp582.value;
    $l580:;
    panda$core$Bit $tmp583 = { $tmp578 };
    bool $tmp577 = $tmp583.value;
    if (!$tmp577) goto $l584;
    panda$core$Bit $tmp585 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp577 = $tmp585.value;
    $l584:;
    panda$core$Bit $tmp586 = { $tmp577 };
    if ($tmp586.value) {
    {
        c587 = ((panda$core$Int64) { 0 });
        {
            ITable* $tmp589 = ((panda$collections$Iterable*) p_statements)->$class->itable;
            while ($tmp589->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp589 = $tmp589->next;
            }
            $fn591 $tmp590 = $tmp589->methods[0];
            panda$collections$Iterator* $tmp592 = $tmp590(((panda$collections$Iterable*) p_statements));
            s$Iter588 = $tmp592;
            $l593:;
            ITable* $tmp595 = s$Iter588->$class->itable;
            while ($tmp595->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp595 = $tmp595->next;
            }
            $fn597 $tmp596 = $tmp595->methods[0];
            panda$core$Bit $tmp598 = $tmp596(s$Iter588);
            panda$core$Bit $tmp599 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp598);
            if (!$tmp599.value) goto $l594;
            {
                ITable* $tmp601 = s$Iter588->$class->itable;
                while ($tmp601->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp601 = $tmp601->next;
                }
                $fn603 $tmp602 = $tmp601->methods[1];
                panda$core$Object* $tmp604 = $tmp602(s$Iter588);
                s600 = ((org$pandalanguage$pandac$ASTNode*) $tmp604);
                panda$core$Int64 $tmp605 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s600);
                panda$core$Int64 $tmp606 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c587, $tmp605);
                c587 = $tmp606;
                panda$core$Bit $tmp607 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c587, ((panda$core$Int64) { 10 }));
                if ($tmp607.value) {
                {
                    return ((panda$core$Bit) { false });
                }
                }
            }
            goto $l593;
            $l594:;
        }
        return ((panda$core$Bit) { true });
    }
    }
    return ((panda$core$Bit) { false });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment608;
    org$pandalanguage$pandac$ASTNode* $match$281_13609;
    org$pandalanguage$pandac$Position position611;
    panda$core$String* text613;
    org$pandalanguage$pandac$Annotations* annotations615;
    panda$collections$Array* parameters628;
    panda$collections$Iterator* p$Iter631;
    org$pandalanguage$pandac$ASTNode* p643;
    org$pandalanguage$pandac$ASTNode* $match$294_13648;
    panda$core$String* name650;
    org$pandalanguage$pandac$ASTNode* type652;
    org$pandalanguage$pandac$Type* returnType657;
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        doccomment608 = NULL;
    }
    }
    else {
    {
        {
            $match$281_13609 = p_rawDoccomment;
            panda$core$Bit $tmp610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$281_13609->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp610.value) {
            {
                org$pandalanguage$pandac$Position* $tmp612 = ((org$pandalanguage$pandac$Position*) ((char*) $match$281_13609->$data + 0));
                position611 = *$tmp612;
                panda$core$String** $tmp614 = ((panda$core$String**) ((char*) $match$281_13609->$data + 16));
                text613 = *$tmp614;
                doccomment608 = text613;
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
    org$pandalanguage$pandac$Annotations* $tmp616 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations615 = $tmp616;
    panda$core$Bit $tmp619 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp618 = $tmp619.value;
    if (!$tmp618) goto $l620;
    panda$core$Bit $tmp621 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
    $tmp618 = $tmp621.value;
    $l620:;
    panda$core$Bit $tmp622 = { $tmp618 };
    bool $tmp617 = $tmp622.value;
    if ($tmp617) goto $l623;
    panda$core$Bit $tmp624 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations615);
    $tmp617 = $tmp624.value;
    $l623:;
    panda$core$Bit $tmp625 = { $tmp617 };
    if ($tmp625.value) {
    {
        panda$core$Int64 $tmp626 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp627 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations615->flags, $tmp626);
        annotations615->flags = $tmp627;
    }
    }
    panda$collections$Array* $tmp629 = (panda$collections$Array*) malloc(40);
    $tmp629->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp629->refCount.value = 1;
    panda$collections$Array$init($tmp629);
    parameters628 = $tmp629;
    {
        ITable* $tmp632 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
        while ($tmp632->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp632 = $tmp632->next;
        }
        $fn634 $tmp633 = $tmp632->methods[0];
        panda$collections$Iterator* $tmp635 = $tmp633(((panda$collections$Iterable*) p_rawParameters));
        p$Iter631 = $tmp635;
        $l636:;
        ITable* $tmp638 = p$Iter631->$class->itable;
        while ($tmp638->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp638 = $tmp638->next;
        }
        $fn640 $tmp639 = $tmp638->methods[0];
        panda$core$Bit $tmp641 = $tmp639(p$Iter631);
        panda$core$Bit $tmp642 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp641);
        if (!$tmp642.value) goto $l637;
        {
            ITable* $tmp644 = p$Iter631->$class->itable;
            while ($tmp644->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp644 = $tmp644->next;
            }
            $fn646 $tmp645 = $tmp644->methods[1];
            panda$core$Object* $tmp647 = $tmp645(p$Iter631);
            p643 = ((org$pandalanguage$pandac$ASTNode*) $tmp647);
            {
                $match$294_13648 = p643;
                panda$core$Bit $tmp649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$294_13648->$rawValue, ((panda$core$Int64) { 27 }));
                if ($tmp649.value) {
                {
                    panda$core$String** $tmp651 = ((panda$core$String**) ((char*) $match$294_13648->$data + 16));
                    name650 = *$tmp651;
                    org$pandalanguage$pandac$ASTNode** $tmp653 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$294_13648->$data + 24));
                    type652 = *$tmp653;
                    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp654 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                    $tmp654->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                    $tmp654->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp656 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type652);
                    org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp654, name650, $tmp656);
                    panda$collections$Array$add$panda$collections$Array$T(parameters628, ((panda$core$Object*) $tmp654));
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l636;
        $l637:;
    }
    if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp658 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
        returnType657 = $tmp658;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp659 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        returnType657 = $tmp659;
    }
    }
    panda$core$Bit $tmp661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
    bool $tmp660 = $tmp661.value;
    if (!$tmp660) goto $l662;
    org$pandalanguage$pandac$Type* $tmp663 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp664 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType657, $tmp663);
    $tmp660 = $tmp664.value;
    $l662:;
    panda$core$Bit $tmp665 = { $tmp660 };
    if ($tmp665.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s666);
    }
    }
    bool $tmp667 = ((panda$core$Bit) { p_statements != NULL }).value;
    if (!$tmp667) goto $l668;
    panda$core$Bit $tmp669 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations615, p_statements);
    $tmp667 = $tmp669.value;
    $l668:;
    panda$core$Bit $tmp670 = { $tmp667 };
    if ($tmp670.value) {
    {
        panda$core$Int64 $tmp671 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp672 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations615->flags, $tmp671);
        annotations615->flags = $tmp672;
    }
    }
    if (((panda$core$Bit) { p_statements == NULL }).value) {
    {
        panda$core$Bit $tmp673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp673.value) {
        {
            panda$core$Int64 $tmp674 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
            panda$core$Int64 $tmp675 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations615->flags, $tmp674);
            annotations615->flags = $tmp675;
        }
        }
        else {
        panda$core$Int64 $tmp676 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
        panda$core$Int64 $tmp677 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations615->flags, $tmp676);
        panda$core$Bit $tmp678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp677, ((panda$core$Int64) { 0 }));
        if ($tmp678.value) {
        {
            panda$core$String* $tmp680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s679, p_name);
            panda$core$String* $tmp682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp680, &$s681);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, $tmp682);
        }
        }
        }
    }
    }
    org$pandalanguage$pandac$MethodDecl* $tmp683 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
    $tmp683->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
    $tmp683->refCount.value = 1;
    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp683, p_owner, p_position, doccomment608, annotations615, p_kind, p_name, parameters628, returnType657, p_statements);
    return $tmp683;
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$327_9685;
    org$pandalanguage$pandac$Position position687;
    org$pandalanguage$pandac$ASTNode* dc689;
    panda$collections$ImmutableArray* annotations691;
    org$pandalanguage$pandac$ASTNode* varDecl693;
    org$pandalanguage$pandac$Position position696;
    org$pandalanguage$pandac$ASTNode* dc698;
    panda$collections$ImmutableArray* annotations700;
    org$pandalanguage$pandac$MethodDecl$Kind kind702;
    panda$core$String* name704;
    panda$collections$ImmutableArray* parameters706;
    org$pandalanguage$pandac$ASTNode* rawReturnType708;
    panda$collections$ImmutableArray* statements710;
    org$pandalanguage$pandac$MethodDecl* m712;
    org$pandalanguage$pandac$Position position715;
    org$pandalanguage$pandac$ASTNode* dc717;
    panda$collections$ImmutableArray* annotations719;
    org$pandalanguage$pandac$ClassDecl$Kind kind721;
    panda$core$String* name723;
    panda$collections$ImmutableArray* generics725;
    panda$collections$ImmutableArray* supertypes727;
    panda$collections$ImmutableArray* members729;
    org$pandalanguage$pandac$ClassDecl* inner731;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp736;
    org$pandalanguage$pandac$Position position742;
    org$pandalanguage$pandac$ASTNode* dc744;
    panda$core$String* name746;
    panda$collections$ImmutableArray* fields748;
    {
        $match$327_9685 = p_node;
        panda$core$Bit $tmp686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9685->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp686.value) {
        {
            org$pandalanguage$pandac$Position* $tmp688 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9685->$data + 0));
            position687 = *$tmp688;
            org$pandalanguage$pandac$ASTNode** $tmp690 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9685->$data + 16));
            dc689 = *$tmp690;
            panda$collections$ImmutableArray** $tmp692 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9685->$data + 24));
            annotations691 = *$tmp692;
            org$pandalanguage$pandac$ASTNode** $tmp694 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9685->$data + 32));
            varDecl693 = *$tmp694;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position687, dc689, annotations691, varDecl693);
        }
        }
        else {
        panda$core$Bit $tmp695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9685->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp695.value) {
        {
            org$pandalanguage$pandac$Position* $tmp697 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9685->$data + 0));
            position696 = *$tmp697;
            org$pandalanguage$pandac$ASTNode** $tmp699 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9685->$data + 16));
            dc698 = *$tmp699;
            panda$collections$ImmutableArray** $tmp701 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9685->$data + 24));
            annotations700 = *$tmp701;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp703 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$327_9685->$data + 32));
            kind702 = *$tmp703;
            panda$core$String** $tmp705 = ((panda$core$String**) ((char*) $match$327_9685->$data + 40));
            name704 = *$tmp705;
            panda$collections$ImmutableArray** $tmp707 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9685->$data + 48));
            parameters706 = *$tmp707;
            org$pandalanguage$pandac$ASTNode** $tmp709 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9685->$data + 56));
            rawReturnType708 = *$tmp709;
            panda$collections$ImmutableArray** $tmp711 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9685->$data + 64));
            statements710 = *$tmp711;
            org$pandalanguage$pandac$MethodDecl* $tmp713 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position696, dc698, annotations700, kind702, name704, parameters706, rawReturnType708, statements710);
            m712 = $tmp713;
            if (((panda$core$Bit) { m712 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m712));
                panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m712));
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp714 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9685->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp714.value) {
        {
            org$pandalanguage$pandac$Position* $tmp716 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9685->$data + 0));
            position715 = *$tmp716;
            org$pandalanguage$pandac$ASTNode** $tmp718 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9685->$data + 16));
            dc717 = *$tmp718;
            panda$collections$ImmutableArray** $tmp720 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9685->$data + 24));
            annotations719 = *$tmp720;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp722 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$327_9685->$data + 32));
            kind721 = *$tmp722;
            panda$core$String** $tmp724 = ((panda$core$String**) ((char*) $match$327_9685->$data + 40));
            name723 = *$tmp724;
            panda$collections$ImmutableArray** $tmp726 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9685->$data + 48));
            generics725 = *$tmp726;
            panda$collections$ImmutableArray** $tmp728 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9685->$data + 56));
            supertypes727 = *$tmp728;
            panda$collections$ImmutableArray** $tmp730 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9685->$data + 64));
            members729 = *$tmp730;
            org$pandalanguage$pandac$ClassDecl* $tmp732 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, ((org$pandalanguage$pandac$Symbol*) p_cl)->name, position715, dc717, annotations719, kind721, name723, generics725, supertypes727, members729);
            inner731 = $tmp732;
            if (((panda$core$Bit) { inner731 != NULL }).value) {
            {
                inner731->owner = p_cl;
                panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner731));
                panda$core$String* $tmp734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s733);
                panda$core$Bit $tmp735 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner731)->name, $tmp734);
                PANDA_ASSERT($tmp735.value);
                panda$core$Int64 $tmp737 = panda$core$String$length$R$panda$core$Int64(((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$Int64 $tmp738 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp737, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp736, ((panda$core$Int64$nullable) { $tmp738, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp739 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner731)->name, $tmp736);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner731), $tmp739);
                panda$collections$Array$add$panda$collections$Array$T(inner731->symbolTable->parents, ((panda$core$Object*) p_cl->symbolTable));
                panda$core$String* $tmp740 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner731->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_cl), $tmp740);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9685->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp741.value) {
        {
            org$pandalanguage$pandac$Position* $tmp743 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9685->$data + 0));
            position742 = *$tmp743;
            org$pandalanguage$pandac$ASTNode** $tmp745 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9685->$data + 16));
            dc744 = *$tmp745;
            panda$core$String** $tmp747 = ((panda$core$String**) ((char*) $match$327_9685->$data + 24));
            name746 = *$tmp747;
            panda$collections$ImmutableArray** $tmp749 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9685->$data + 32));
            fields748 = *$tmp749;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position742, dc744, name746, fields748);
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
    panda$core$String* doccomment750;
    org$pandalanguage$pandac$ASTNode* $match$365_13751;
    org$pandalanguage$pandac$Position position753;
    panda$core$String* text755;
    panda$collections$Array* fields757;
    panda$collections$Iterator* t$Iter760;
    org$pandalanguage$pandac$ASTNode* t772;
    org$pandalanguage$pandac$ChoiceEntry* entry778;
    panda$core$Bit found782;
    panda$collections$Iterator* m$Iter783;
    org$pandalanguage$pandac$MethodDecl* m795;
    panda$core$Range$LTpanda$core$Int64$GT $tmp808;
    panda$collections$Array* parameters834;
    panda$collections$Array* statements841;
    org$pandalanguage$pandac$parser$Token$Kind $tmp849;
    panda$core$Range$LTpanda$core$Int64$GT $tmp853;
    org$pandalanguage$pandac$parser$Token$Kind $tmp882;
    org$pandalanguage$pandac$MethodDecl* synthetic896;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp901;
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        doccomment750 = NULL;
    }
    }
    else {
    {
        {
            $match$365_13751 = p_rawDoccomment;
            panda$core$Bit $tmp752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$365_13751->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp752.value) {
            {
                org$pandalanguage$pandac$Position* $tmp754 = ((org$pandalanguage$pandac$Position*) ((char*) $match$365_13751->$data + 0));
                position753 = *$tmp754;
                panda$core$String** $tmp756 = ((panda$core$String**) ((char*) $match$365_13751->$data + 16));
                text755 = *$tmp756;
                doccomment750 = text755;
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
    panda$collections$Array* $tmp758 = (panda$collections$Array*) malloc(40);
    $tmp758->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp758->refCount.value = 1;
    panda$collections$Array$init($tmp758);
    fields757 = $tmp758;
    {
        ITable* $tmp761 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
        while ($tmp761->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp761 = $tmp761->next;
        }
        $fn763 $tmp762 = $tmp761->methods[0];
        panda$collections$Iterator* $tmp764 = $tmp762(((panda$collections$Iterable*) p_rawFields));
        t$Iter760 = $tmp764;
        $l765:;
        ITable* $tmp767 = t$Iter760->$class->itable;
        while ($tmp767->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp767 = $tmp767->next;
        }
        $fn769 $tmp768 = $tmp767->methods[0];
        panda$core$Bit $tmp770 = $tmp768(t$Iter760);
        panda$core$Bit $tmp771 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp770);
        if (!$tmp771.value) goto $l766;
        {
            ITable* $tmp773 = t$Iter760->$class->itable;
            while ($tmp773->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp773 = $tmp773->next;
            }
            $fn775 $tmp774 = $tmp773->methods[1];
            panda$core$Object* $tmp776 = $tmp774(t$Iter760);
            t772 = ((org$pandalanguage$pandac$ASTNode*) $tmp776);
            org$pandalanguage$pandac$Type* $tmp777 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t772);
            panda$collections$Array$add$panda$collections$Array$T(fields757, ((panda$core$Object*) $tmp777));
        }
        goto $l765;
        $l766:;
    }
    org$pandalanguage$pandac$ChoiceEntry* $tmp779 = (org$pandalanguage$pandac$ChoiceEntry*) malloc(89);
    $tmp779->$class = (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class;
    $tmp779->refCount.value = 1;
    panda$core$Int64 $tmp781 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
    org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp779, p_cl, p_position, p_name, doccomment750, $tmp781, ((panda$collections$ListView*) fields757));
    entry778 = $tmp779;
    panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry778));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry778));
    found782 = ((panda$core$Bit) { false });
    {
        ITable* $tmp784 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp784->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp784 = $tmp784->next;
        }
        $fn786 $tmp785 = $tmp784->methods[0];
        panda$collections$Iterator* $tmp787 = $tmp785(((panda$collections$Iterable*) p_cl->methods));
        m$Iter783 = $tmp787;
        $l788:;
        ITable* $tmp790 = m$Iter783->$class->itable;
        while ($tmp790->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp790 = $tmp790->next;
        }
        $fn792 $tmp791 = $tmp790->methods[0];
        panda$core$Bit $tmp793 = $tmp791(m$Iter783);
        panda$core$Bit $tmp794 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp793);
        if (!$tmp794.value) goto $l789;
        {
            ITable* $tmp796 = m$Iter783->$class->itable;
            while ($tmp796->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp796 = $tmp796->next;
            }
            $fn798 $tmp797 = $tmp796->methods[1];
            panda$core$Object* $tmp799 = $tmp797(m$Iter783);
            m795 = ((org$pandalanguage$pandac$MethodDecl*) $tmp799);
            panda$core$Bit $tmp800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m795->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp800.value);
            panda$core$Int64 $tmp801 = panda$collections$Array$get_count$R$panda$core$Int64(m795->parameters);
            panda$core$Int64 $tmp802 = panda$collections$Array$get_count$R$panda$core$Int64(fields757);
            panda$core$Int64 $tmp803 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp802, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp804 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp801, $tmp803);
            if ($tmp804.value) {
            {
                goto $l788;
            }
            }
            panda$core$Object* $tmp805 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m795->parameters, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp806 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp807 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp805)->type, $tmp806);
            PANDA_ASSERT($tmp807.value);
            panda$core$Int64 $tmp809 = panda$collections$Array$get_count$R$panda$core$Int64(fields757);
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
                panda$core$Object* $tmp823 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields757, i810);
                panda$core$Int64 $tmp824 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i810, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp825 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m795->parameters, $tmp824);
                panda$core$Bit $tmp826 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp823), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp825)->type);
                if ($tmp826.value) {
                {
                    goto $l788;
                }
                }
            }
            $l818:;
            int64_t $tmp828 = $tmp813 - i810.value;
            if ($tmp814) goto $l829; else goto $l830;
            $l829:;
            if ((uint64_t) $tmp828 >= 1) goto $l827; else goto $l817;
            $l830:;
            if ((uint64_t) $tmp828 > 1) goto $l827; else goto $l817;
            $l827:;
            i810.value += 1;
            goto $l815;
            $l817:;
            found782 = ((panda$core$Bit) { true });
            goto $l789;
        }
        goto $l788;
        $l789:;
    }
    panda$core$Bit $tmp833 = panda$core$Bit$$NOT$R$panda$core$Bit(found782);
    if ($tmp833.value) {
    {
        panda$collections$Array* $tmp835 = (panda$collections$Array*) malloc(40);
        $tmp835->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp835->refCount.value = 1;
        panda$collections$Array$init($tmp835);
        parameters834 = $tmp835;
        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp837 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
        $tmp837->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
        $tmp837->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp840 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp837, &$s839, $tmp840);
        panda$collections$Array$add$panda$collections$Array$T(parameters834, ((panda$core$Object*) $tmp837));
        panda$collections$Array* $tmp842 = (panda$collections$Array*) malloc(40);
        $tmp842->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp842->refCount.value = 1;
        panda$collections$Array$init($tmp842);
        statements841 = $tmp842;
        org$pandalanguage$pandac$ASTNode* $tmp844 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp844->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp844->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode* $tmp846 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp846->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp846->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp846, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s848);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp849, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$ASTNode* $tmp850 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp850->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp850->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp850, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s852);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp844, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp846, $tmp849, $tmp850);
        panda$collections$Array$add$panda$collections$Array$T(statements841, ((panda$core$Object*) $tmp844));
        panda$core$Int64 $tmp854 = panda$collections$Array$get_count$R$panda$core$Int64(fields757);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp853, ((panda$core$Int64) { 0 }), $tmp854, ((panda$core$Bit) { false }));
        int64_t $tmp856 = $tmp853.min.value;
        panda$core$Int64 i855 = { $tmp856 };
        int64_t $tmp858 = $tmp853.max.value;
        bool $tmp859 = $tmp853.inclusive.value;
        if ($tmp859) goto $l866; else goto $l867;
        $l866:;
        if ($tmp856 <= $tmp858) goto $l860; else goto $l862;
        $l867:;
        if ($tmp856 < $tmp858) goto $l860; else goto $l862;
        $l860:;
        {
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp868 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp868->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp868->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp871;
            $tmp871 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp871->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp871->refCount = 1;
            $tmp871->value = i855;
            panda$core$String* $tmp872 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s870, ((panda$core$Object*) $tmp871));
            panda$core$String* $tmp874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp872, &$s873);
            panda$core$Object* $tmp875 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields757, i855);
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp868, $tmp874, ((org$pandalanguage$pandac$Type*) $tmp875));
            panda$collections$Array$add$panda$collections$Array$T(parameters834, ((panda$core$Object*) $tmp868));
            org$pandalanguage$pandac$ASTNode* $tmp876 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp876->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp876->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode* $tmp878 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp878->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp878->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode* $tmp880 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp880->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp880->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp880, ((panda$core$Int64) { 32 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64($tmp878, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp880, entry778, i855);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp882, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$ASTNode* $tmp883 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp883->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp883->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp886;
            $tmp886 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp886->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp886->refCount = 1;
            $tmp886->value = i855;
            panda$core$String* $tmp887 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s885, ((panda$core$Object*) $tmp886));
            panda$core$String* $tmp889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp887, &$s888);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp883, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp889);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp876, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp878, $tmp882, $tmp883);
            panda$collections$Array$add$panda$collections$Array$T(statements841, ((panda$core$Object*) $tmp876));
        }
        $l863:;
        int64_t $tmp891 = $tmp858 - i855.value;
        if ($tmp859) goto $l892; else goto $l893;
        $l892:;
        if ((uint64_t) $tmp891 >= 1) goto $l890; else goto $l862;
        $l893:;
        if ((uint64_t) $tmp891 > 1) goto $l890; else goto $l862;
        $l890:;
        i855.value += 1;
        goto $l860;
        $l862:;
        org$pandalanguage$pandac$MethodDecl* $tmp897 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp897->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp897->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp899 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp899->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp899->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp899);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp901, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$Type* $tmp903 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp904 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements841);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp897, p_cl, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, NULL, $tmp899, $tmp901, &$s902, parameters834, $tmp903, $tmp904);
        synthetic896 = $tmp897;
        panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) synthetic896));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) synthetic896));
    }
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName905;
    panda$core$String* doccomment914;
    org$pandalanguage$pandac$ASTNode* $match$438_13915;
    org$pandalanguage$pandac$Position position917;
    panda$core$String* text919;
    org$pandalanguage$pandac$Annotations* annotations921;
    panda$collections$Array* parameters923;
    panda$collections$Iterator* p$Iter926;
    org$pandalanguage$pandac$ASTNode* p938;
    panda$core$String* name943;
    org$pandalanguage$pandac$Type* bound944;
    org$pandalanguage$pandac$ASTNode* $match$451_17945;
    panda$core$String* id947;
    panda$core$String* id951;
    org$pandalanguage$pandac$ASTNode* type953;
    panda$collections$Array* supertypes962;
    panda$collections$Iterator* s$Iter967;
    org$pandalanguage$pandac$ASTNode* s979;
    org$pandalanguage$pandac$ClassDecl* result985;
    org$pandalanguage$pandac$FieldDecl* rawValue989;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp994;
    org$pandalanguage$pandac$FieldDecl* data997;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1002;
    panda$collections$Iterator* m$Iter1005;
    org$pandalanguage$pandac$ASTNode* m1017;
    org$pandalanguage$pandac$ASTNode* $match$490_131022;
    org$pandalanguage$pandac$Position mPosition1024;
    org$pandalanguage$pandac$ASTNode* dc1026;
    panda$collections$ImmutableArray* annotations1028;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1030;
    panda$core$String* name1032;
    panda$collections$ImmutableArray* parameters1034;
    org$pandalanguage$pandac$ASTNode* rawReturnType1036;
    panda$collections$ImmutableArray* statements1038;
    org$pandalanguage$pandac$ClassDecl$Kind $match$494_251041;
    panda$core$Bit foundInit1047;
    panda$collections$Iterator* m$Iter1048;
    org$pandalanguage$pandac$MethodDecl* m1060;
    org$pandalanguage$pandac$MethodDecl* defaultInit1076;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1081;
    panda$core$Bit haveFields1089;
    panda$collections$Iterator* e$Iter1090;
    org$pandalanguage$pandac$ChoiceEntry* e1102;
    panda$core$Bit $tmp907 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s906);
    if ($tmp907.value) {
    {
        panda$core$String* $tmp908 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp908, &$s909);
        panda$core$String* $tmp911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp910, p_name);
        panda$core$String* $tmp913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp911, &$s912);
        fullName905 = $tmp913;
    }
    }
    else {
    {
        fullName905 = p_name;
    }
    }
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        doccomment914 = NULL;
    }
    }
    else {
    {
        {
            $match$438_13915 = p_rawDoccomment;
            panda$core$Bit $tmp916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_13915->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp916.value) {
            {
                org$pandalanguage$pandac$Position* $tmp918 = ((org$pandalanguage$pandac$Position*) ((char*) $match$438_13915->$data + 0));
                position917 = *$tmp918;
                panda$core$String** $tmp920 = ((panda$core$String**) ((char*) $match$438_13915->$data + 16));
                text919 = *$tmp920;
                doccomment914 = text919;
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
    org$pandalanguage$pandac$Annotations* $tmp922 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations921 = $tmp922;
    panda$collections$Array* $tmp924 = (panda$collections$Array*) malloc(40);
    $tmp924->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp924->refCount.value = 1;
    panda$collections$Array$init($tmp924);
    parameters923 = $tmp924;
    if (((panda$core$Bit) { p_generics != NULL }).value) {
    {
        {
            ITable* $tmp927 = ((panda$collections$Iterable*) p_generics)->$class->itable;
            while ($tmp927->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp927 = $tmp927->next;
            }
            $fn929 $tmp928 = $tmp927->methods[0];
            panda$collections$Iterator* $tmp930 = $tmp928(((panda$collections$Iterable*) p_generics));
            p$Iter926 = $tmp930;
            $l931:;
            ITable* $tmp933 = p$Iter926->$class->itable;
            while ($tmp933->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp933 = $tmp933->next;
            }
            $fn935 $tmp934 = $tmp933->methods[0];
            panda$core$Bit $tmp936 = $tmp934(p$Iter926);
            panda$core$Bit $tmp937 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp936);
            if (!$tmp937.value) goto $l932;
            {
                ITable* $tmp939 = p$Iter926->$class->itable;
                while ($tmp939->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp939 = $tmp939->next;
                }
                $fn941 $tmp940 = $tmp939->methods[1];
                panda$core$Object* $tmp942 = $tmp940(p$Iter926);
                p938 = ((org$pandalanguage$pandac$ASTNode*) $tmp942);
                {
                    $match$451_17945 = p938;
                    panda$core$Bit $tmp946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_17945->$rawValue, ((panda$core$Int64) { 18 }));
                    if ($tmp946.value) {
                    {
                        panda$core$String** $tmp948 = ((panda$core$String**) ((char*) $match$451_17945->$data + 16));
                        id947 = *$tmp948;
                        name943 = id947;
                        org$pandalanguage$pandac$Type* $tmp949 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                        bound944 = $tmp949;
                    }
                    }
                    else {
                    panda$core$Bit $tmp950 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_17945->$rawValue, ((panda$core$Int64) { 36 }));
                    if ($tmp950.value) {
                    {
                        panda$core$String** $tmp952 = ((panda$core$String**) ((char*) $match$451_17945->$data + 16));
                        id951 = *$tmp952;
                        org$pandalanguage$pandac$ASTNode** $tmp954 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$451_17945->$data + 24));
                        type953 = *$tmp954;
                        name943 = id951;
                        org$pandalanguage$pandac$Type* $tmp955 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type953);
                        bound944 = $tmp955;
                    }
                    }
                    else {
                    {
                        PANDA_ASSERT(((panda$core$Bit) { false }).value);
                    }
                    }
                    }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp956 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp956->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp956->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp959 = (($fn958) p938->$class->vtable[2])(p938);
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp956, $tmp959, fullName905, name943, bound944);
                panda$collections$Array$add$panda$collections$Array$T(parameters923, ((panda$core$Object*) $tmp956));
            }
            goto $l931;
            $l932:;
        }
        panda$core$Bit $tmp960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp960.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s961);
        }
        }
    }
    }
    panda$collections$Array* $tmp963 = (panda$collections$Array*) malloc(40);
    $tmp963->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp963->refCount.value = 1;
    panda$collections$Array$init($tmp963);
    supertypes962 = $tmp963;
    if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
    {
        panda$core$Bit $tmp965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp965.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s966);
        }
        }
        {
            ITable* $tmp968 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
            while ($tmp968->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp968 = $tmp968->next;
            }
            $fn970 $tmp969 = $tmp968->methods[0];
            panda$collections$Iterator* $tmp971 = $tmp969(((panda$collections$Iterable*) p_rawSupertypes));
            s$Iter967 = $tmp971;
            $l972:;
            ITable* $tmp974 = s$Iter967->$class->itable;
            while ($tmp974->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp974 = $tmp974->next;
            }
            $fn976 $tmp975 = $tmp974->methods[0];
            panda$core$Bit $tmp977 = $tmp975(s$Iter967);
            panda$core$Bit $tmp978 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp977);
            if (!$tmp978.value) goto $l973;
            {
                ITable* $tmp980 = s$Iter967->$class->itable;
                while ($tmp980->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp980 = $tmp980->next;
                }
                $fn982 $tmp981 = $tmp980->methods[1];
                panda$core$Object* $tmp983 = $tmp981(s$Iter967);
                s979 = ((org$pandalanguage$pandac$ASTNode*) $tmp983);
                org$pandalanguage$pandac$Type* $tmp984 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s979);
                panda$collections$Array$add$panda$collections$Array$T(supertypes962, ((panda$core$Object*) $tmp984));
            }
            goto $l972;
            $l973:;
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp986 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
    $tmp986->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp986->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp986, p_source, p_position, p_aliases, doccomment914, annotations921, p_kind, fullName905, ((panda$collections$ListView*) supertypes962), parameters923, self->compiler->root);
    result985 = $tmp986;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result985));
    panda$core$Bit $tmp988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp988.value) {
    {
        org$pandalanguage$pandac$FieldDecl* $tmp990 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
        $tmp990->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
        $tmp990->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp992 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp992->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp992->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp992);
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp994, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp996 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp990, result985, ((org$pandalanguage$pandac$Symbol*) result985)->position, NULL, $tmp992, $tmp994, &$s995, $tmp996, NULL);
        rawValue989 = $tmp990;
        panda$collections$Array$add$panda$collections$Array$T(result985->fields, ((panda$core$Object*) rawValue989));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result985->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue989));
        org$pandalanguage$pandac$FieldDecl* $tmp998 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
        $tmp998->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
        $tmp998->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp1000 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp1000->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp1000->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp1000);
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1002, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp1004 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp998, result985, ((org$pandalanguage$pandac$Symbol*) result985)->position, NULL, $tmp1000, $tmp1002, &$s1003, $tmp1004, NULL);
        data997 = $tmp998;
        panda$collections$Array$add$panda$collections$Array$T(result985->fields, ((panda$core$Object*) data997));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result985->symbolTable, ((org$pandalanguage$pandac$Symbol*) data997));
    }
    }
    {
        ITable* $tmp1006 = ((panda$collections$Iterable*) p_members)->$class->itable;
        while ($tmp1006->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1006 = $tmp1006->next;
        }
        $fn1008 $tmp1007 = $tmp1006->methods[0];
        panda$collections$Iterator* $tmp1009 = $tmp1007(((panda$collections$Iterable*) p_members));
        m$Iter1005 = $tmp1009;
        $l1010:;
        ITable* $tmp1012 = m$Iter1005->$class->itable;
        while ($tmp1012->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1012 = $tmp1012->next;
        }
        $fn1014 $tmp1013 = $tmp1012->methods[0];
        panda$core$Bit $tmp1015 = $tmp1013(m$Iter1005);
        panda$core$Bit $tmp1016 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1015);
        if (!$tmp1016.value) goto $l1011;
        {
            ITable* $tmp1018 = m$Iter1005->$class->itable;
            while ($tmp1018->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1018 = $tmp1018->next;
            }
            $fn1020 $tmp1019 = $tmp1018->methods[1];
            panda$core$Object* $tmp1021 = $tmp1019(m$Iter1005);
            m1017 = ((org$pandalanguage$pandac$ASTNode*) $tmp1021);
            {
                $match$490_131022 = m1017;
                panda$core$Bit $tmp1023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$490_131022->$rawValue, ((panda$core$Int64) { 23 }));
                if ($tmp1023.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1025 = ((org$pandalanguage$pandac$Position*) ((char*) $match$490_131022->$data + 0));
                    mPosition1024 = *$tmp1025;
                    org$pandalanguage$pandac$ASTNode** $tmp1027 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$490_131022->$data + 16));
                    dc1026 = *$tmp1027;
                    panda$collections$ImmutableArray** $tmp1029 = ((panda$collections$ImmutableArray**) ((char*) $match$490_131022->$data + 24));
                    annotations1028 = *$tmp1029;
                    org$pandalanguage$pandac$MethodDecl$Kind* $tmp1031 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$490_131022->$data + 32));
                    methodKind1030 = *$tmp1031;
                    panda$core$String** $tmp1033 = ((panda$core$String**) ((char*) $match$490_131022->$data + 40));
                    name1032 = *$tmp1033;
                    panda$collections$ImmutableArray** $tmp1035 = ((panda$collections$ImmutableArray**) ((char*) $match$490_131022->$data + 48));
                    parameters1034 = *$tmp1035;
                    org$pandalanguage$pandac$ASTNode** $tmp1037 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$490_131022->$data + 56));
                    rawReturnType1036 = *$tmp1037;
                    panda$collections$ImmutableArray** $tmp1039 = ((panda$collections$ImmutableArray**) ((char*) $match$490_131022->$data + 64));
                    statements1038 = *$tmp1039;
                    panda$core$Bit $tmp1040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1030.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1040.value) {
                    {
                        {
                            $match$494_251041 = p_kind;
                            panda$core$Bit $tmp1042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$494_251041.$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp1042.value) {
                            {
                            }
                            }
                            else {
                            panda$core$Bit $tmp1043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$494_251041.$rawValue, ((panda$core$Int64) { 1 }));
                            if ($tmp1043.value) {
                            {
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, mPosition1024, &$s1044);
                            }
                            }
                            else {
                            panda$core$Bit $tmp1045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$494_251041.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp1045.value) {
                            {
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, mPosition1024, &$s1046);
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
            org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result985, m1017);
        }
        goto $l1010;
        $l1011:;
    }
    foundInit1047 = ((panda$core$Bit) { false });
    {
        ITable* $tmp1049 = ((panda$collections$Iterable*) result985->methods)->$class->itable;
        while ($tmp1049->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1049 = $tmp1049->next;
        }
        $fn1051 $tmp1050 = $tmp1049->methods[0];
        panda$collections$Iterator* $tmp1052 = $tmp1050(((panda$collections$Iterable*) result985->methods));
        m$Iter1048 = $tmp1052;
        $l1053:;
        ITable* $tmp1055 = m$Iter1048->$class->itable;
        while ($tmp1055->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1055 = $tmp1055->next;
        }
        $fn1057 $tmp1056 = $tmp1055->methods[0];
        panda$core$Bit $tmp1058 = $tmp1056(m$Iter1048);
        panda$core$Bit $tmp1059 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1058);
        if (!$tmp1059.value) goto $l1054;
        {
            ITable* $tmp1061 = m$Iter1048->$class->itable;
            while ($tmp1061->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1061 = $tmp1061->next;
            }
            $fn1063 $tmp1062 = $tmp1061->methods[1];
            panda$core$Object* $tmp1064 = $tmp1062(m$Iter1048);
            m1060 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1064);
            panda$core$Bit $tmp1065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1060->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1065.value) {
            {
                foundInit1047 = ((panda$core$Bit) { true });
                goto $l1054;
            }
            }
        }
        goto $l1053;
        $l1054:;
    }
    panda$core$Bit $tmp1068 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1047);
    bool $tmp1067 = $tmp1068.value;
    if (!$tmp1067) goto $l1069;
    panda$core$Bit $tmp1070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
    $tmp1067 = $tmp1070.value;
    $l1069:;
    panda$core$Bit $tmp1071 = { $tmp1067 };
    bool $tmp1066 = $tmp1071.value;
    if (!$tmp1066) goto $l1072;
    panda$core$Bit $tmp1074 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result985)->name, &$s1073);
    $tmp1066 = $tmp1074.value;
    $l1072:;
    panda$core$Bit $tmp1075 = { $tmp1066 };
    if ($tmp1075.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp1077 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp1077->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp1077->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp1079 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp1079->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp1079->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp1079);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1081, ((panda$core$Int64) { 2 }));
        panda$collections$Array* $tmp1083 = (panda$collections$Array*) malloc(40);
        $tmp1083->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1083->refCount.value = 1;
        panda$collections$Array$init($tmp1083);
        org$pandalanguage$pandac$Type* $tmp1085 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp1086 = (panda$collections$ImmutableArray*) malloc(40);
        $tmp1086->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp1086->refCount.value = 1;
        panda$collections$ImmutableArray$init($tmp1086);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1077, result985, p_position, NULL, $tmp1079, $tmp1081, &$s1082, $tmp1083, $tmp1085, $tmp1086);
        defaultInit1076 = $tmp1077;
        panda$collections$Array$add$panda$collections$Array$T(result985->methods, ((panda$core$Object*) defaultInit1076));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result985->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1076));
    }
    }
    panda$core$Bit $tmp1088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp1088.value) {
    {
        haveFields1089 = ((panda$core$Bit) { false });
        {
            ITable* $tmp1091 = ((panda$collections$Iterable*) result985->choiceEntries)->$class->itable;
            while ($tmp1091->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1091 = $tmp1091->next;
            }
            $fn1093 $tmp1092 = $tmp1091->methods[0];
            panda$collections$Iterator* $tmp1094 = $tmp1092(((panda$collections$Iterable*) result985->choiceEntries));
            e$Iter1090 = $tmp1094;
            $l1095:;
            ITable* $tmp1097 = e$Iter1090->$class->itable;
            while ($tmp1097->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1097 = $tmp1097->next;
            }
            $fn1099 $tmp1098 = $tmp1097->methods[0];
            panda$core$Bit $tmp1100 = $tmp1098(e$Iter1090);
            panda$core$Bit $tmp1101 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1100);
            if (!$tmp1101.value) goto $l1096;
            {
                ITable* $tmp1103 = e$Iter1090->$class->itable;
                while ($tmp1103->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1103 = $tmp1103->next;
                }
                $fn1105 $tmp1104 = $tmp1103->methods[1];
                panda$core$Object* $tmp1106 = $tmp1104(e$Iter1090);
                e1102 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1106);
                panda$core$Int64 $tmp1107 = panda$collections$Array$get_count$R$panda$core$Int64(e1102->fields);
                panda$core$Bit $tmp1108 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1107, ((panda$core$Int64) { 0 }));
                if ($tmp1108.value) {
                {
                    haveFields1089 = ((panda$core$Bit) { true });
                    goto $l1096;
                }
                }
            }
            goto $l1095;
            $l1096:;
        }
        panda$core$Bit $tmp1109 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1089);
        if ($tmp1109.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1110 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            result985->rawSuper = $tmp1110;
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    return result985;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter1111;
    org$pandalanguage$pandac$ClassDecl* inner1123;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp1112 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp1112->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1112 = $tmp1112->next;
        }
        $fn1114 $tmp1113 = $tmp1112->methods[0];
        panda$collections$Iterator* $tmp1115 = $tmp1113(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter1111 = $tmp1115;
        $l1116:;
        ITable* $tmp1118 = inner$Iter1111->$class->itable;
        while ($tmp1118->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1118 = $tmp1118->next;
        }
        $fn1120 $tmp1119 = $tmp1118->methods[0];
        panda$core$Bit $tmp1121 = $tmp1119(inner$Iter1111);
        panda$core$Bit $tmp1122 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1121);
        if (!$tmp1122.value) goto $l1117;
        {
            ITable* $tmp1124 = inner$Iter1111->$class->itable;
            while ($tmp1124->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1124 = $tmp1124->next;
            }
            $fn1126 $tmp1125 = $tmp1124->methods[1];
            panda$core$Object* $tmp1127 = $tmp1125(inner$Iter1111);
            inner1123 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1127);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1123, p_arr);
        }
        goto $l1116;
        $l1117:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$545_91128;
    panda$collections$ImmutableArray* entries1130;
    panda$collections$Array* result1132;
    panda$core$String* currentPackage1135;
    panda$collections$HashMap* aliases1137;
    panda$collections$Iterator* e$Iter1140;
    org$pandalanguage$pandac$ASTNode* e1152;
    org$pandalanguage$pandac$ASTNode* $match$551_211157;
    panda$core$String* name1159;
    panda$core$String* fullName1162;
    panda$core$String$Index$nullable idx1164;
    panda$core$String* alias1167;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1168;
    org$pandalanguage$pandac$Position position1172;
    org$pandalanguage$pandac$ASTNode* dc1174;
    panda$collections$ImmutableArray* annotations1176;
    org$pandalanguage$pandac$ClassDecl$Kind kind1178;
    panda$core$String* name1180;
    panda$collections$ImmutableArray* generics1182;
    panda$collections$ImmutableArray* supertypes1184;
    panda$collections$ImmutableArray* members1186;
    org$pandalanguage$pandac$ClassDecl* cl1188;
    {
        $match$545_91128 = p_file;
        panda$core$Bit $tmp1129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545_91128->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1129.value) {
        {
            panda$collections$ImmutableArray** $tmp1131 = ((panda$collections$ImmutableArray**) ((char*) $match$545_91128->$data + 0));
            entries1130 = *$tmp1131;
            panda$collections$Array* $tmp1133 = (panda$collections$Array*) malloc(40);
            $tmp1133->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1133->refCount.value = 1;
            panda$collections$Array$init($tmp1133);
            result1132 = $tmp1133;
            currentPackage1135 = &$s1136;
            panda$collections$HashMap* $tmp1138 = (panda$collections$HashMap*) malloc(56);
            $tmp1138->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1138->refCount.value = 1;
            panda$collections$HashMap$init($tmp1138);
            aliases1137 = $tmp1138;
            {
                ITable* $tmp1141 = ((panda$collections$Iterable*) entries1130)->$class->itable;
                while ($tmp1141->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1141 = $tmp1141->next;
                }
                $fn1143 $tmp1142 = $tmp1141->methods[0];
                panda$collections$Iterator* $tmp1144 = $tmp1142(((panda$collections$Iterable*) entries1130));
                e$Iter1140 = $tmp1144;
                $l1145:;
                ITable* $tmp1147 = e$Iter1140->$class->itable;
                while ($tmp1147->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1147 = $tmp1147->next;
                }
                $fn1149 $tmp1148 = $tmp1147->methods[0];
                panda$core$Bit $tmp1150 = $tmp1148(e$Iter1140);
                panda$core$Bit $tmp1151 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1150);
                if (!$tmp1151.value) goto $l1146;
                {
                    ITable* $tmp1153 = e$Iter1140->$class->itable;
                    while ($tmp1153->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1153 = $tmp1153->next;
                    }
                    $fn1155 $tmp1154 = $tmp1153->methods[1];
                    panda$core$Object* $tmp1156 = $tmp1154(e$Iter1140);
                    e1152 = ((org$pandalanguage$pandac$ASTNode*) $tmp1156);
                    {
                        $match$551_211157 = e1152;
                        panda$core$Bit $tmp1158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_211157->$rawValue, ((panda$core$Int64) { 26 }));
                        if ($tmp1158.value) {
                        {
                            panda$core$String** $tmp1160 = ((panda$core$String**) ((char*) $match$551_211157->$data + 16));
                            name1159 = *$tmp1160;
                            currentPackage1135 = name1159;
                        }
                        }
                        else {
                        panda$core$Bit $tmp1161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_211157->$rawValue, ((panda$core$Int64) { 37 }));
                        if ($tmp1161.value) {
                        {
                            panda$core$String** $tmp1163 = ((panda$core$String**) ((char*) $match$551_211157->$data + 16));
                            fullName1162 = *$tmp1163;
                            panda$core$String$Index$nullable $tmp1166 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName1162, &$s1165);
                            idx1164 = $tmp1166;
                            if (((panda$core$Bit) { idx1164.nonnull }).value) {
                            {
                                panda$core$String$Index $tmp1169 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName1162, ((panda$core$String$Index) idx1164.value));
                                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1168, ((panda$core$String$Index$nullable) { $tmp1169, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                panda$core$String* $tmp1170 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName1162, $tmp1168);
                                alias1167 = $tmp1170;
                            }
                            }
                            else {
                            {
                                alias1167 = fullName1162;
                            }
                            }
                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1137, ((panda$collections$Key*) alias1167), ((panda$core$Object*) fullName1162));
                        }
                        }
                        else {
                        panda$core$Bit $tmp1171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$551_211157->$rawValue, ((panda$core$Int64) { 9 }));
                        if ($tmp1171.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp1173 = ((org$pandalanguage$pandac$Position*) ((char*) $match$551_211157->$data + 0));
                            position1172 = *$tmp1173;
                            org$pandalanguage$pandac$ASTNode** $tmp1175 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$551_211157->$data + 16));
                            dc1174 = *$tmp1175;
                            panda$collections$ImmutableArray** $tmp1177 = ((panda$collections$ImmutableArray**) ((char*) $match$551_211157->$data + 24));
                            annotations1176 = *$tmp1177;
                            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1179 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$551_211157->$data + 32));
                            kind1178 = *$tmp1179;
                            panda$core$String** $tmp1181 = ((panda$core$String**) ((char*) $match$551_211157->$data + 40));
                            name1180 = *$tmp1181;
                            panda$collections$ImmutableArray** $tmp1183 = ((panda$collections$ImmutableArray**) ((char*) $match$551_211157->$data + 48));
                            generics1182 = *$tmp1183;
                            panda$collections$ImmutableArray** $tmp1185 = ((panda$collections$ImmutableArray**) ((char*) $match$551_211157->$data + 56));
                            supertypes1184 = *$tmp1185;
                            panda$collections$ImmutableArray** $tmp1187 = ((panda$collections$ImmutableArray**) ((char*) $match$551_211157->$data + 64));
                            members1186 = *$tmp1187;
                            org$pandalanguage$pandac$ClassDecl* $tmp1189 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1137), currentPackage1135, position1172, dc1174, annotations1176, kind1178, name1180, generics1182, supertypes1184, members1186);
                            cl1188 = $tmp1189;
                            if (((panda$core$Bit) { cl1188 != NULL }).value) {
                            {
                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl1188, result1132);
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
                goto $l1145;
                $l1146:;
            }
            return ((panda$collections$ListView*) result1132);
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
}

