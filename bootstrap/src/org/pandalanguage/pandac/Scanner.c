#include "org/pandalanguage/pandac/Scanner.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Panda.h"
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


org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit, org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT} };

typedef panda$collections$Iterator* (*$fn47)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn53)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn59)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn74)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn80)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn86)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn178)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn184)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn190)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn243)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn249)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn255)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn270)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn276)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn282)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn305)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn311)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn317)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn335)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn341)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn347)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn365)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn371)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn377)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn391)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn397)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn403)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn419)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn425)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn431)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn438)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn444)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn450)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn478)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn484)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn490)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn503)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn509)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn515)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn522)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn528)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn534)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn548)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn554)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn560)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn578)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn584)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn590)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn625)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn631)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn637)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn762)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn768)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn774)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn786)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn792)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn798)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn940)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn946)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn952)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn973)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn986)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn992)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn998)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1027)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1033)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1039)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1058)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1064)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1070)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1101)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1107)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1113)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1123)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1129)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1135)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1155)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1161)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1167)(panda$collections$Iterator*);

static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x6f\x6e\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x27", 30, -1250916154819313721, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x68\x61\x76\x65\x20\x61\x20\x62\x6f\x64\x79", 16, -7652461387112275530, NULL };
static panda$core$String $s729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s905 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s911 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s1178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    {
        panda$core$Object* $tmp1 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_compiler));
        self->compiler = ((org$pandalanguage$pandac$Compiler*) $tmp1);
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_type) {
    org$pandalanguage$pandac$ASTNode* $match$18_92;
    org$pandalanguage$pandac$Position position4;
    panda$core$String* name6;
    org$pandalanguage$pandac$Position position11;
    org$pandalanguage$pandac$ASTNode* base13;
    panda$collections$Array* subtypes15;
    org$pandalanguage$pandac$Position position26;
    panda$core$String* base28;
    panda$collections$ImmutableArray* args30;
    panda$collections$Array* subtypes32;
    panda$core$MutableString* name36;
    panda$core$Char8 $tmp40;
    panda$core$String* separator41;
    panda$collections$Iterator* arg$Iter44;
    org$pandalanguage$pandac$ASTNode* arg56;
    org$pandalanguage$pandac$Type* subtype61;
    panda$core$Char8 $tmp66;
    {
        $match$18_92 = p_type;
        panda$core$Bit $tmp3 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$18_92->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp3.value) {
        {
            org$pandalanguage$pandac$Position* $tmp5 = ((org$pandalanguage$pandac$Position*) ((char*) $match$18_92->$data + 0));
            position4 = *$tmp5;
            panda$core$String** $tmp7 = ((panda$core$String**) ((char*) $match$18_92->$data + 16));
            name6 = *$tmp7;
            org$pandalanguage$pandac$Type* $tmp8 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
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
            panda$collections$Array* $tmp16 = (panda$collections$Array*) pandaAlloc(41);
            $tmp16->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp16->refCount.value = 1;
            panda$collections$Array$init($tmp16);
            panda$core$Object* $tmp18 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp16));
            subtypes15 = ((panda$collections$Array*) $tmp18);
            org$pandalanguage$pandac$Type* $tmp19 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, base13);
            panda$collections$Array$add$panda$collections$Array$T(subtypes15, ((panda$core$Object*) $tmp19));
            org$pandalanguage$pandac$Type* $tmp20 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
            $tmp20->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp20->refCount.value = 1;
            panda$core$Object* $tmp22 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes15, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp24 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp22))->name, &$s23);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp20, $tmp24, ((panda$core$Int64) { 11 }), position11, ((panda$collections$ListView*) subtypes15), ((panda$core$Bit) { false }));
            return $tmp20;
        }
        }
        else {
        panda$core$Bit $tmp25 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$18_92->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp25.value) {
        {
            org$pandalanguage$pandac$Position* $tmp27 = ((org$pandalanguage$pandac$Position*) ((char*) $match$18_92->$data + 0));
            position26 = *$tmp27;
            panda$core$String** $tmp29 = ((panda$core$String**) ((char*) $match$18_92->$data + 16));
            base28 = *$tmp29;
            panda$collections$ImmutableArray** $tmp31 = ((panda$collections$ImmutableArray**) ((char*) $match$18_92->$data + 24));
            args30 = *$tmp31;
            panda$collections$Array* $tmp33 = (panda$collections$Array*) pandaAlloc(41);
            $tmp33->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp33->refCount.value = 1;
            panda$collections$Array$init($tmp33);
            panda$core$Object* $tmp35 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp33));
            subtypes32 = ((panda$collections$Array*) $tmp35);
            panda$core$MutableString* $tmp37 = (panda$core$MutableString*) pandaAlloc(48);
            $tmp37->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp37->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp37, base28);
            panda$core$Object* $tmp39 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp37));
            name36 = ((panda$core$MutableString*) $tmp39);
            panda$core$Char8$init$panda$core$UInt8(&$tmp40, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name36, $tmp40);
            panda$core$Object* $tmp43 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s42));
            separator41 = ((panda$core$String*) $tmp43);
            {
                ITable* $tmp45 = ((panda$collections$Iterable*) args30)->$class->itable;
                while ($tmp45->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp45 = $tmp45->next;
                }
                $fn47 $tmp46 = $tmp45->methods[0];
                panda$collections$Iterator* $tmp48 = $tmp46(((panda$collections$Iterable*) args30));
                arg$Iter44 = $tmp48;
                $l49:;
                ITable* $tmp51 = arg$Iter44->$class->itable;
                while ($tmp51->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp51 = $tmp51->next;
                }
                $fn53 $tmp52 = $tmp51->methods[0];
                panda$core$Bit $tmp54 = $tmp52(arg$Iter44);
                panda$core$Bit $tmp55 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp54);
                if (!$tmp55.value) goto $l50;
                {
                    ITable* $tmp57 = arg$Iter44->$class->itable;
                    while ($tmp57->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp57 = $tmp57->next;
                    }
                    $fn59 $tmp58 = $tmp57->methods[1];
                    panda$core$Object* $tmp60 = $tmp58(arg$Iter44);
                    arg56 = ((org$pandalanguage$pandac$ASTNode*) $tmp60);
                    org$pandalanguage$pandac$Type* $tmp62 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, arg56);
                    panda$core$Object* $tmp63 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp62));
                    subtype61 = ((org$pandalanguage$pandac$Type*) $tmp63);
                    panda$collections$Array$add$panda$collections$Array$T(subtypes32, ((panda$core$Object*) subtype61));
                    panda$core$MutableString$append$panda$core$String(name36, separator41);
                    panda$core$MutableString$append$panda$core$String(name36, ((org$pandalanguage$pandac$Symbol*) subtype61)->name);
                    {
                        panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator41));
                        panda$core$Object* $tmp65 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s64));
                        separator41 = ((panda$core$String*) $tmp65);
                    }
                }
                goto $l49;
                $l50:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp66, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name36, $tmp66);
            org$pandalanguage$pandac$Type* $tmp67 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
            $tmp67->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp67->refCount.value = 1;
            panda$core$String* $tmp69 = panda$core$MutableString$finish$R$panda$core$String(name36);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp67, $tmp69, ((panda$core$Int64) { 21 }), position26, ((panda$collections$ListView*) subtypes32), ((panda$core$Bit) { false }));
            return $tmp67;
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
    panda$core$Int64 flags70;
    panda$collections$Iterator* c$Iter71;
    org$pandalanguage$pandac$ASTNode* c83;
    org$pandalanguage$pandac$ASTNode* $match$47_1388;
    org$pandalanguage$pandac$Position position90;
    panda$core$String* text92;
    panda$core$String* $match$49_2194;
    flags70 = ((panda$core$Int64) { 0 });
    {
        ITable* $tmp72 = ((panda$collections$Iterable*) p_a)->$class->itable;
        while ($tmp72->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp72 = $tmp72->next;
        }
        $fn74 $tmp73 = $tmp72->methods[0];
        panda$collections$Iterator* $tmp75 = $tmp73(((panda$collections$Iterable*) p_a));
        c$Iter71 = $tmp75;
        $l76:;
        ITable* $tmp78 = c$Iter71->$class->itable;
        while ($tmp78->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp78 = $tmp78->next;
        }
        $fn80 $tmp79 = $tmp78->methods[0];
        panda$core$Bit $tmp81 = $tmp79(c$Iter71);
        panda$core$Bit $tmp82 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp81);
        if (!$tmp82.value) goto $l77;
        {
            ITable* $tmp84 = c$Iter71->$class->itable;
            while ($tmp84->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp84 = $tmp84->next;
            }
            $fn86 $tmp85 = $tmp84->methods[1];
            panda$core$Object* $tmp87 = $tmp85(c$Iter71);
            c83 = ((org$pandalanguage$pandac$ASTNode*) $tmp87);
            {
                $match$47_1388 = c83;
                panda$core$Bit $tmp89 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_1388->$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp89.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp91 = ((org$pandalanguage$pandac$Position*) ((char*) $match$47_1388->$data + 0));
                    position90 = *$tmp91;
                    panda$core$String** $tmp93 = ((panda$core$String**) ((char*) $match$47_1388->$data + 16));
                    text92 = *$tmp93;
                    {
                        $match$49_2194 = text92;
                        panda$core$Bit $tmp96 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2194, &$s95);
                        if ($tmp96.value) {
                        {
                            panda$core$Int64 $tmp97 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                            panda$core$Int64 $tmp98 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags70, $tmp97);
                            flags70 = $tmp98;
                        }
                        }
                        else {
                        panda$core$Bit $tmp100 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2194, &$s99);
                        if ($tmp100.value) {
                        {
                            panda$core$Int64 $tmp101 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                            panda$core$Int64 $tmp102 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags70, $tmp101);
                            flags70 = $tmp102;
                        }
                        }
                        else {
                        panda$core$Bit $tmp104 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2194, &$s103);
                        if ($tmp104.value) {
                        {
                            panda$core$Int64 $tmp105 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                            panda$core$Int64 $tmp106 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags70, $tmp105);
                            flags70 = $tmp106;
                        }
                        }
                        else {
                        panda$core$Bit $tmp108 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2194, &$s107);
                        if ($tmp108.value) {
                        {
                            panda$core$Int64 $tmp109 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                            panda$core$Int64 $tmp110 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags70, $tmp109);
                            flags70 = $tmp110;
                        }
                        }
                        else {
                        panda$core$Bit $tmp112 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2194, &$s111);
                        if ($tmp112.value) {
                        {
                            panda$core$Int64 $tmp113 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                            panda$core$Int64 $tmp114 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags70, $tmp113);
                            flags70 = $tmp114;
                        }
                        }
                        else {
                        panda$core$Bit $tmp116 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2194, &$s115);
                        if ($tmp116.value) {
                        {
                            panda$core$Int64 $tmp117 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                            panda$core$Int64 $tmp118 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags70, $tmp117);
                            flags70 = $tmp118;
                        }
                        }
                        else {
                        panda$core$Bit $tmp120 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2194, &$s119);
                        if ($tmp120.value) {
                        {
                            panda$core$Int64 $tmp121 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                            panda$core$Int64 $tmp122 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags70, $tmp121);
                            flags70 = $tmp122;
                        }
                        }
                        else {
                        panda$core$Bit $tmp124 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2194, &$s123);
                        if ($tmp124.value) {
                        {
                            panda$core$Int64 $tmp125 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                            panda$core$Int64 $tmp126 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags70, $tmp125);
                            flags70 = $tmp126;
                        }
                        }
                        else {
                        panda$core$Bit $tmp128 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2194, &$s127);
                        if ($tmp128.value) {
                        {
                            panda$core$Int64 $tmp129 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                            panda$core$Int64 $tmp130 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags70, $tmp129);
                            flags70 = $tmp130;
                        }
                        }
                        else {
                        panda$core$Bit $tmp132 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2194, &$s131);
                        if ($tmp132.value) {
                        {
                            panda$core$Int64 $tmp133 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                            panda$core$Int64 $tmp134 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags70, $tmp133);
                            flags70 = $tmp134;
                        }
                        }
                        else {
                        panda$core$Bit $tmp136 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$49_2194, &$s135);
                        if ($tmp136.value) {
                        {
                            panda$core$Int64 $tmp137 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                            panda$core$Int64 $tmp138 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags70, $tmp137);
                            flags70 = $tmp138;
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s139, text92);
                            panda$core$String* $tmp142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp140, &$s141);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, position90, $tmp142);
                        }
                        }
                        }
                        }
                        }
                        }
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
        goto $l76;
        $l77:;
    }
    org$pandalanguage$pandac$Annotations* $tmp143 = (org$pandalanguage$pandac$Annotations*) pandaAlloc(24);
    $tmp143->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp143->refCount.value = 1;
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp143, flags70);
    return $tmp143;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment145;
    org$pandalanguage$pandac$ASTNode* $match$79_13147;
    org$pandalanguage$pandac$Position position149;
    panda$core$String* text151;
    org$pandalanguage$pandac$Annotations* annotations154;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind157;
    org$pandalanguage$pandac$ASTNode* $match$88_9158;
    org$pandalanguage$pandac$Variable$Kind kind160;
    panda$collections$ImmutableArray* decls162;
    org$pandalanguage$pandac$Variable$Kind $match$90_17164;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp166;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp168;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp170;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp174;
    panda$collections$Iterator* decl$Iter175;
    org$pandalanguage$pandac$ASTNode* decl187;
    org$pandalanguage$pandac$ASTNode* $match$102_21192;
    org$pandalanguage$pandac$Position declPosition194;
    org$pandalanguage$pandac$ASTNode* target196;
    org$pandalanguage$pandac$ASTNode* value198;
    panda$core$String* name200;
    org$pandalanguage$pandac$Type* type201;
    org$pandalanguage$pandac$ASTNode* $match$106_29202;
    panda$core$String* id204;
    panda$core$String* id210;
    org$pandalanguage$pandac$ASTNode* idType212;
    org$pandalanguage$pandac$FieldDecl* field217;
    memset(&doccomment145, 0, sizeof(doccomment145));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            panda$core$Object* $tmp146 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
            doccomment145 = ((panda$core$String*) $tmp146);
        }
    }
    }
    else {
    {
        {
            $match$79_13147 = p_rawDoccomment;
            panda$core$Bit $tmp148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$79_13147->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp148.value) {
            {
                org$pandalanguage$pandac$Position* $tmp150 = ((org$pandalanguage$pandac$Position*) ((char*) $match$79_13147->$data + 0));
                position149 = *$tmp150;
                panda$core$String** $tmp152 = ((panda$core$String**) ((char*) $match$79_13147->$data + 16));
                text151 = *$tmp152;
                {
                    panda$core$Object* $tmp153 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) text151));
                    doccomment145 = ((panda$core$String*) $tmp153);
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
    org$pandalanguage$pandac$Annotations* $tmp155 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    panda$core$Object* $tmp156 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp155));
    annotations154 = ((org$pandalanguage$pandac$Annotations*) $tmp156);
    memset(&fieldKind157, 0, sizeof(fieldKind157));
    {
        $match$88_9158 = p_varDecl;
        panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$88_9158->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp159.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp161 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$88_9158->$data + 16));
            kind160 = *$tmp161;
            panda$collections$ImmutableArray** $tmp163 = ((panda$collections$ImmutableArray**) ((char*) $match$88_9158->$data + 24));
            decls162 = *$tmp163;
            {
                $match$90_17164 = kind160;
                panda$core$Bit $tmp165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17164.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp165.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp166, ((panda$core$Int64) { 0 }));
                    fieldKind157 = $tmp166;
                }
                }
                else {
                panda$core$Bit $tmp167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17164.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp167.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp168, ((panda$core$Int64) { 1 }));
                    fieldKind157 = $tmp168;
                }
                }
                else {
                panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17164.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp169.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp170, ((panda$core$Int64) { 2 }));
                    fieldKind157 = $tmp170;
                    panda$core$Int64 $tmp171 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp172 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations154->flags, $tmp171);
                    annotations154->flags = $tmp172;
                }
                }
                else {
                panda$core$Bit $tmp173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_17164.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp173.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp174, ((panda$core$Int64) { 3 }));
                    fieldKind157 = $tmp174;
                }
                }
                }
                }
                }
            }
            {
                ITable* $tmp176 = ((panda$collections$Iterable*) decls162)->$class->itable;
                while ($tmp176->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp176 = $tmp176->next;
                }
                $fn178 $tmp177 = $tmp176->methods[0];
                panda$collections$Iterator* $tmp179 = $tmp177(((panda$collections$Iterable*) decls162));
                decl$Iter175 = $tmp179;
                $l180:;
                ITable* $tmp182 = decl$Iter175->$class->itable;
                while ($tmp182->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp182 = $tmp182->next;
                }
                $fn184 $tmp183 = $tmp182->methods[0];
                panda$core$Bit $tmp185 = $tmp183(decl$Iter175);
                panda$core$Bit $tmp186 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp185);
                if (!$tmp186.value) goto $l181;
                {
                    ITable* $tmp188 = decl$Iter175->$class->itable;
                    while ($tmp188->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp188 = $tmp188->next;
                    }
                    $fn190 $tmp189 = $tmp188->methods[1];
                    panda$core$Object* $tmp191 = $tmp189(decl$Iter175);
                    decl187 = ((org$pandalanguage$pandac$ASTNode*) $tmp191);
                    {
                        $match$102_21192 = decl187;
                        panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$102_21192->$rawValue, ((panda$core$Int64) { 11 }));
                        if ($tmp193.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp195 = ((org$pandalanguage$pandac$Position*) ((char*) $match$102_21192->$data + 0));
                            declPosition194 = *$tmp195;
                            org$pandalanguage$pandac$ASTNode** $tmp197 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$102_21192->$data + 16));
                            target196 = *$tmp197;
                            org$pandalanguage$pandac$ASTNode** $tmp199 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$102_21192->$data + 24));
                            value198 = *$tmp199;
                            memset(&name200, 0, sizeof(name200));
                            memset(&type201, 0, sizeof(type201));
                            {
                                $match$106_29202 = target196;
                                panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$106_29202->$rawValue, ((panda$core$Int64) { 18 }));
                                if ($tmp203.value) {
                                {
                                    panda$core$String** $tmp205 = ((panda$core$String**) ((char*) $match$106_29202->$data + 16));
                                    id204 = *$tmp205;
                                    {
                                        panda$core$Object* $tmp206 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) id204));
                                        name200 = ((panda$core$String*) $tmp206);
                                    }
                                    {
                                        org$pandalanguage$pandac$Type* $tmp207 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                        panda$core$Object* $tmp208 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp207));
                                        type201 = ((org$pandalanguage$pandac$Type*) $tmp208);
                                    }
                                }
                                }
                                else {
                                panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$106_29202->$rawValue, ((panda$core$Int64) { 36 }));
                                if ($tmp209.value) {
                                {
                                    panda$core$String** $tmp211 = ((panda$core$String**) ((char*) $match$106_29202->$data + 16));
                                    id210 = *$tmp211;
                                    org$pandalanguage$pandac$ASTNode** $tmp213 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$106_29202->$data + 24));
                                    idType212 = *$tmp213;
                                    {
                                        panda$core$Object* $tmp214 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) id210));
                                        name200 = ((panda$core$String*) $tmp214);
                                    }
                                    {
                                        org$pandalanguage$pandac$Type* $tmp215 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType212);
                                        panda$core$Object* $tmp216 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp215));
                                        type201 = ((org$pandalanguage$pandac$Type*) $tmp216);
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
                            org$pandalanguage$pandac$FieldDecl* $tmp218 = (org$pandalanguage$pandac$FieldDecl*) pandaAlloc(113);
                            $tmp218->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                            $tmp218->refCount.value = 1;
                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp218, p_owner, declPosition194, doccomment145, annotations154, fieldKind157, name200, type201, value198);
                            panda$core$Object* $tmp220 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp218));
                            field217 = ((org$pandalanguage$pandac$FieldDecl*) $tmp220);
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field217));
                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field217));
                        }
                        }
                        else {
                        {
                            PANDA_ASSERT(((panda$core$Bit) { false }).value);
                        }
                        }
                    }
                }
                goto $l180;
                $l181:;
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
    org$pandalanguage$pandac$ASTNode* $match$131_9221;
    org$pandalanguage$pandac$ASTNode* test223;
    org$pandalanguage$pandac$ASTNode* left227;
    org$pandalanguage$pandac$ASTNode* right229;
    panda$collections$ImmutableArray* statements237;
    panda$core$Int64 result239;
    panda$collections$Iterator* s$Iter240;
    org$pandalanguage$pandac$ASTNode* s252;
    org$pandalanguage$pandac$ASTNode* target261;
    panda$collections$ImmutableArray* args263;
    panda$core$Int64 result265;
    panda$collections$Iterator* a$Iter267;
    org$pandalanguage$pandac$ASTNode* a279;
    org$pandalanguage$pandac$ASTNode* base287;
    org$pandalanguage$pandac$ASTNode* value292;
    panda$collections$ImmutableArray* statements296;
    org$pandalanguage$pandac$ASTNode* test298;
    panda$core$Int64 result300;
    panda$collections$Iterator* s$Iter302;
    org$pandalanguage$pandac$ASTNode* s314;
    org$pandalanguage$pandac$ASTNode* base322;
    org$pandalanguage$pandac$ASTNode* list326;
    panda$collections$ImmutableArray* statements328;
    panda$core$Int64 result330;
    panda$collections$Iterator* s$Iter332;
    org$pandalanguage$pandac$ASTNode* s344;
    org$pandalanguage$pandac$ASTNode* test354;
    panda$collections$ImmutableArray* ifTrue356;
    org$pandalanguage$pandac$ASTNode* ifFalse358;
    panda$core$Int64 result360;
    panda$collections$Iterator* s$Iter362;
    org$pandalanguage$pandac$ASTNode* s374;
    panda$collections$ImmutableArray* statements385;
    panda$core$Int64 result387;
    panda$collections$Iterator* s$Iter388;
    org$pandalanguage$pandac$ASTNode* s400;
    org$pandalanguage$pandac$ASTNode* value408;
    panda$collections$ImmutableArray* whens410;
    panda$collections$ImmutableArray* other412;
    panda$core$Int64 result414;
    panda$collections$Iterator* w$Iter416;
    org$pandalanguage$pandac$ASTNode* w428;
    panda$collections$Iterator* s$Iter435;
    org$pandalanguage$pandac$ASTNode* s447;
    org$pandalanguage$pandac$ASTNode* base457;
    org$pandalanguage$pandac$ASTNode* value464;
    panda$collections$ImmutableArray* decls472;
    panda$core$Int64 result474;
    panda$collections$Iterator* decl$Iter475;
    org$pandalanguage$pandac$ASTNode* decl487;
    panda$collections$ImmutableArray* tests495;
    panda$collections$ImmutableArray* statements497;
    panda$core$Int64 result499;
    panda$collections$Iterator* test$Iter500;
    org$pandalanguage$pandac$ASTNode* test512;
    panda$collections$Iterator* s$Iter519;
    org$pandalanguage$pandac$ASTNode* s531;
    org$pandalanguage$pandac$ASTNode* test539;
    panda$collections$ImmutableArray* statements541;
    panda$core$Int64 result543;
    panda$collections$Iterator* s$Iter545;
    org$pandalanguage$pandac$ASTNode* s557;
    {
        $match$131_9221 = p_node;
        panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp222.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp224 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9221->$data + 16));
            test223 = *$tmp224;
            panda$core$Int64 $tmp225 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test223);
            return $tmp225;
        }
        }
        else {
        panda$core$Bit $tmp226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp226.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp228 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9221->$data + 16));
            left227 = *$tmp228;
            org$pandalanguage$pandac$ASTNode** $tmp230 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9221->$data + 32));
            right229 = *$tmp230;
            panda$core$Int64 $tmp231 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left227);
            panda$core$Int64 $tmp232 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp231);
            panda$core$Int64 $tmp233 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right229);
            panda$core$Int64 $tmp234 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp232, $tmp233);
            return $tmp234;
        }
        }
        else {
        panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp235.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp236.value) {
        {
            panda$collections$ImmutableArray** $tmp238 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9221->$data + 16));
            statements237 = *$tmp238;
            result239 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp241 = ((panda$collections$Iterable*) statements237)->$class->itable;
                while ($tmp241->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp241 = $tmp241->next;
                }
                $fn243 $tmp242 = $tmp241->methods[0];
                panda$collections$Iterator* $tmp244 = $tmp242(((panda$collections$Iterable*) statements237));
                s$Iter240 = $tmp244;
                $l245:;
                ITable* $tmp247 = s$Iter240->$class->itable;
                while ($tmp247->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp247 = $tmp247->next;
                }
                $fn249 $tmp248 = $tmp247->methods[0];
                panda$core$Bit $tmp250 = $tmp248(s$Iter240);
                panda$core$Bit $tmp251 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp250);
                if (!$tmp251.value) goto $l246;
                {
                    ITable* $tmp253 = s$Iter240->$class->itable;
                    while ($tmp253->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp253 = $tmp253->next;
                    }
                    $fn255 $tmp254 = $tmp253->methods[1];
                    panda$core$Object* $tmp256 = $tmp254(s$Iter240);
                    s252 = ((org$pandalanguage$pandac$ASTNode*) $tmp256);
                    panda$core$Int64 $tmp257 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s252);
                    panda$core$Int64 $tmp258 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result239, $tmp257);
                    result239 = $tmp258;
                }
                goto $l245;
                $l246:;
            }
            return result239;
        }
        }
        else {
        panda$core$Bit $tmp259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp259.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp260.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp262 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9221->$data + 16));
            target261 = *$tmp262;
            panda$collections$ImmutableArray** $tmp264 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9221->$data + 24));
            args263 = *$tmp264;
            panda$core$Int64 $tmp266 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target261);
            result265 = $tmp266;
            {
                ITable* $tmp268 = ((panda$collections$Iterable*) args263)->$class->itable;
                while ($tmp268->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp268 = $tmp268->next;
                }
                $fn270 $tmp269 = $tmp268->methods[0];
                panda$collections$Iterator* $tmp271 = $tmp269(((panda$collections$Iterable*) args263));
                a$Iter267 = $tmp271;
                $l272:;
                ITable* $tmp274 = a$Iter267->$class->itable;
                while ($tmp274->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp274 = $tmp274->next;
                }
                $fn276 $tmp275 = $tmp274->methods[0];
                panda$core$Bit $tmp277 = $tmp275(a$Iter267);
                panda$core$Bit $tmp278 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp277);
                if (!$tmp278.value) goto $l273;
                {
                    ITable* $tmp280 = a$Iter267->$class->itable;
                    while ($tmp280->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp280 = $tmp280->next;
                    }
                    $fn282 $tmp281 = $tmp280->methods[1];
                    panda$core$Object* $tmp283 = $tmp281(a$Iter267);
                    a279 = ((org$pandalanguage$pandac$ASTNode*) $tmp283);
                    panda$core$Int64 $tmp284 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a279);
                    panda$core$Int64 $tmp285 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result265, $tmp284);
                    result265 = $tmp285;
                }
                goto $l272;
                $l273:;
            }
            return result265;
        }
        }
        else {
        panda$core$Bit $tmp286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp286.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp288 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9221->$data + 16));
            base287 = *$tmp288;
            panda$core$Int64 $tmp289 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base287);
            return $tmp289;
        }
        }
        else {
        panda$core$Bit $tmp290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp290.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp291.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp293 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9221->$data + 24));
            value292 = *$tmp293;
            if (((panda$core$Bit) { value292 == NULL }).value) {
            {
                return ((panda$core$Int64) { 0 });
            }
            }
            panda$core$Int64 $tmp294 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value292);
            return $tmp294;
        }
        }
        else {
        panda$core$Bit $tmp295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp295.value) {
        {
            panda$collections$ImmutableArray** $tmp297 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9221->$data + 24));
            statements296 = *$tmp297;
            org$pandalanguage$pandac$ASTNode** $tmp299 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9221->$data + 32));
            test298 = *$tmp299;
            panda$core$Int64 $tmp301 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test298);
            result300 = $tmp301;
            {
                ITable* $tmp303 = ((panda$collections$Iterable*) statements296)->$class->itable;
                while ($tmp303->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp303 = $tmp303->next;
                }
                $fn305 $tmp304 = $tmp303->methods[0];
                panda$collections$Iterator* $tmp306 = $tmp304(((panda$collections$Iterable*) statements296));
                s$Iter302 = $tmp306;
                $l307:;
                ITable* $tmp309 = s$Iter302->$class->itable;
                while ($tmp309->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp309 = $tmp309->next;
                }
                $fn311 $tmp310 = $tmp309->methods[0];
                panda$core$Bit $tmp312 = $tmp310(s$Iter302);
                panda$core$Bit $tmp313 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp312);
                if (!$tmp313.value) goto $l308;
                {
                    ITable* $tmp315 = s$Iter302->$class->itable;
                    while ($tmp315->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp315 = $tmp315->next;
                    }
                    $fn317 $tmp316 = $tmp315->methods[1];
                    panda$core$Object* $tmp318 = $tmp316(s$Iter302);
                    s314 = ((org$pandalanguage$pandac$ASTNode*) $tmp318);
                    panda$core$Int64 $tmp319 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s314);
                    panda$core$Int64 $tmp320 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result300, $tmp319);
                    result300 = $tmp320;
                }
                goto $l307;
                $l308:;
            }
            return result300;
        }
        }
        else {
        panda$core$Bit $tmp321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp321.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp323 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9221->$data + 16));
            base322 = *$tmp323;
            panda$core$Int64 $tmp324 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base322);
            return $tmp324;
        }
        }
        else {
        panda$core$Bit $tmp325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp325.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp327 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9221->$data + 32));
            list326 = *$tmp327;
            panda$collections$ImmutableArray** $tmp329 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9221->$data + 40));
            statements328 = *$tmp329;
            panda$core$Int64 $tmp331 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list326);
            result330 = $tmp331;
            {
                ITable* $tmp333 = ((panda$collections$Iterable*) statements328)->$class->itable;
                while ($tmp333->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp333 = $tmp333->next;
                }
                $fn335 $tmp334 = $tmp333->methods[0];
                panda$collections$Iterator* $tmp336 = $tmp334(((panda$collections$Iterable*) statements328));
                s$Iter332 = $tmp336;
                $l337:;
                ITable* $tmp339 = s$Iter332->$class->itable;
                while ($tmp339->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp339 = $tmp339->next;
                }
                $fn341 $tmp340 = $tmp339->methods[0];
                panda$core$Bit $tmp342 = $tmp340(s$Iter332);
                panda$core$Bit $tmp343 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp342);
                if (!$tmp343.value) goto $l338;
                {
                    ITable* $tmp345 = s$Iter332->$class->itable;
                    while ($tmp345->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp345 = $tmp345->next;
                    }
                    $fn347 $tmp346 = $tmp345->methods[1];
                    panda$core$Object* $tmp348 = $tmp346(s$Iter332);
                    s344 = ((org$pandalanguage$pandac$ASTNode*) $tmp348);
                    panda$core$Int64 $tmp349 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s344);
                    panda$core$Int64 $tmp350 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result330, $tmp349);
                    result330 = $tmp350;
                }
                goto $l337;
                $l338:;
            }
            return result330;
        }
        }
        else {
        panda$core$Bit $tmp351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp351.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp352.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp353.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp355 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9221->$data + 16));
            test354 = *$tmp355;
            panda$collections$ImmutableArray** $tmp357 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9221->$data + 24));
            ifTrue356 = *$tmp357;
            org$pandalanguage$pandac$ASTNode** $tmp359 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9221->$data + 32));
            ifFalse358 = *$tmp359;
            panda$core$Int64 $tmp361 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test354);
            result360 = $tmp361;
            {
                ITable* $tmp363 = ((panda$collections$Iterable*) ifTrue356)->$class->itable;
                while ($tmp363->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp363 = $tmp363->next;
                }
                $fn365 $tmp364 = $tmp363->methods[0];
                panda$collections$Iterator* $tmp366 = $tmp364(((panda$collections$Iterable*) ifTrue356));
                s$Iter362 = $tmp366;
                $l367:;
                ITable* $tmp369 = s$Iter362->$class->itable;
                while ($tmp369->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp369 = $tmp369->next;
                }
                $fn371 $tmp370 = $tmp369->methods[0];
                panda$core$Bit $tmp372 = $tmp370(s$Iter362);
                panda$core$Bit $tmp373 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp372);
                if (!$tmp373.value) goto $l368;
                {
                    ITable* $tmp375 = s$Iter362->$class->itable;
                    while ($tmp375->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp375 = $tmp375->next;
                    }
                    $fn377 $tmp376 = $tmp375->methods[1];
                    panda$core$Object* $tmp378 = $tmp376(s$Iter362);
                    s374 = ((org$pandalanguage$pandac$ASTNode*) $tmp378);
                    panda$core$Int64 $tmp379 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s374);
                    panda$core$Int64 $tmp380 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result360, $tmp379);
                    result360 = $tmp380;
                }
                goto $l367;
                $l368:;
            }
            if (((panda$core$Bit) { ifFalse358 != NULL }).value) {
            {
                panda$core$Int64 $tmp381 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse358);
                panda$core$Int64 $tmp382 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result360, $tmp381);
                result360 = $tmp382;
            }
            }
            return result360;
        }
        }
        else {
        panda$core$Bit $tmp383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp383.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp384.value) {
        {
            panda$collections$ImmutableArray** $tmp386 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9221->$data + 24));
            statements385 = *$tmp386;
            result387 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp389 = ((panda$collections$Iterable*) statements385)->$class->itable;
                while ($tmp389->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp389 = $tmp389->next;
                }
                $fn391 $tmp390 = $tmp389->methods[0];
                panda$collections$Iterator* $tmp392 = $tmp390(((panda$collections$Iterable*) statements385));
                s$Iter388 = $tmp392;
                $l393:;
                ITable* $tmp395 = s$Iter388->$class->itable;
                while ($tmp395->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp395 = $tmp395->next;
                }
                $fn397 $tmp396 = $tmp395->methods[0];
                panda$core$Bit $tmp398 = $tmp396(s$Iter388);
                panda$core$Bit $tmp399 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp398);
                if (!$tmp399.value) goto $l394;
                {
                    ITable* $tmp401 = s$Iter388->$class->itable;
                    while ($tmp401->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp401 = $tmp401->next;
                    }
                    $fn403 $tmp402 = $tmp401->methods[1];
                    panda$core$Object* $tmp404 = $tmp402(s$Iter388);
                    s400 = ((org$pandalanguage$pandac$ASTNode*) $tmp404);
                    panda$core$Int64 $tmp405 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s400);
                    panda$core$Int64 $tmp406 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result387, $tmp405);
                    result387 = $tmp406;
                }
                goto $l393;
                $l394:;
            }
            return result387;
        }
        }
        else {
        panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp407.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp409 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9221->$data + 16));
            value408 = *$tmp409;
            panda$collections$ImmutableArray** $tmp411 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9221->$data + 24));
            whens410 = *$tmp411;
            panda$collections$ImmutableArray** $tmp413 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9221->$data + 32));
            other412 = *$tmp413;
            panda$core$Int64 $tmp415 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value408);
            result414 = $tmp415;
            {
                ITable* $tmp417 = ((panda$collections$Iterable*) whens410)->$class->itable;
                while ($tmp417->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp417 = $tmp417->next;
                }
                $fn419 $tmp418 = $tmp417->methods[0];
                panda$collections$Iterator* $tmp420 = $tmp418(((panda$collections$Iterable*) whens410));
                w$Iter416 = $tmp420;
                $l421:;
                ITable* $tmp423 = w$Iter416->$class->itable;
                while ($tmp423->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp423 = $tmp423->next;
                }
                $fn425 $tmp424 = $tmp423->methods[0];
                panda$core$Bit $tmp426 = $tmp424(w$Iter416);
                panda$core$Bit $tmp427 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp426);
                if (!$tmp427.value) goto $l422;
                {
                    ITable* $tmp429 = w$Iter416->$class->itable;
                    while ($tmp429->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp429 = $tmp429->next;
                    }
                    $fn431 $tmp430 = $tmp429->methods[1];
                    panda$core$Object* $tmp432 = $tmp430(w$Iter416);
                    w428 = ((org$pandalanguage$pandac$ASTNode*) $tmp432);
                    panda$core$Int64 $tmp433 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w428);
                    panda$core$Int64 $tmp434 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result414, $tmp433);
                    result414 = $tmp434;
                }
                goto $l421;
                $l422:;
            }
            if (((panda$core$Bit) { other412 != NULL }).value) {
            {
                {
                    ITable* $tmp436 = ((panda$collections$Iterable*) other412)->$class->itable;
                    while ($tmp436->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp436 = $tmp436->next;
                    }
                    $fn438 $tmp437 = $tmp436->methods[0];
                    panda$collections$Iterator* $tmp439 = $tmp437(((panda$collections$Iterable*) other412));
                    s$Iter435 = $tmp439;
                    $l440:;
                    ITable* $tmp442 = s$Iter435->$class->itable;
                    while ($tmp442->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp442 = $tmp442->next;
                    }
                    $fn444 $tmp443 = $tmp442->methods[0];
                    panda$core$Bit $tmp445 = $tmp443(s$Iter435);
                    panda$core$Bit $tmp446 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp445);
                    if (!$tmp446.value) goto $l441;
                    {
                        ITable* $tmp448 = s$Iter435->$class->itable;
                        while ($tmp448->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp448 = $tmp448->next;
                        }
                        $fn450 $tmp449 = $tmp448->methods[1];
                        panda$core$Object* $tmp451 = $tmp449(s$Iter435);
                        s447 = ((org$pandalanguage$pandac$ASTNode*) $tmp451);
                        panda$core$Int64 $tmp452 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s447);
                        panda$core$Int64 $tmp453 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result414, $tmp452);
                        result414 = $tmp453;
                    }
                    goto $l440;
                    $l441:;
                }
            }
            }
            return result414;
        }
        }
        else {
        panda$core$Bit $tmp454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp454.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp455.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp456.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp458 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9221->$data + 24));
            base457 = *$tmp458;
            panda$core$Int64 $tmp459 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base457);
            panda$core$Int64 $tmp460 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp459);
            return $tmp460;
        }
        }
        else {
        panda$core$Bit $tmp461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp461.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp462.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp463.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp465 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9221->$data + 16));
            value464 = *$tmp465;
            if (((panda$core$Bit) { value464 == NULL }).value) {
            {
                return ((panda$core$Int64) { 0 });
            }
            }
            panda$core$Int64 $tmp466 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value464);
            return $tmp466;
        }
        }
        else {
        panda$core$Bit $tmp467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp467.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp468.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp469.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        else {
        panda$core$Bit $tmp470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp470.value) {
        {
            return ((panda$core$Int64) { 0 });
        }
        }
        else {
        panda$core$Bit $tmp471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp471.value) {
        {
            panda$collections$ImmutableArray** $tmp473 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9221->$data + 24));
            decls472 = *$tmp473;
            result474 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp476 = ((panda$collections$Iterable*) decls472)->$class->itable;
                while ($tmp476->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp476 = $tmp476->next;
                }
                $fn478 $tmp477 = $tmp476->methods[0];
                panda$collections$Iterator* $tmp479 = $tmp477(((panda$collections$Iterable*) decls472));
                decl$Iter475 = $tmp479;
                $l480:;
                ITable* $tmp482 = decl$Iter475->$class->itable;
                while ($tmp482->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp482 = $tmp482->next;
                }
                $fn484 $tmp483 = $tmp482->methods[0];
                panda$core$Bit $tmp485 = $tmp483(decl$Iter475);
                panda$core$Bit $tmp486 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp485);
                if (!$tmp486.value) goto $l481;
                {
                    ITable* $tmp488 = decl$Iter475->$class->itable;
                    while ($tmp488->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp488 = $tmp488->next;
                    }
                    $fn490 $tmp489 = $tmp488->methods[1];
                    panda$core$Object* $tmp491 = $tmp489(decl$Iter475);
                    decl487 = ((org$pandalanguage$pandac$ASTNode*) $tmp491);
                    panda$core$Int64 $tmp492 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl487);
                    panda$core$Int64 $tmp493 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result474, $tmp492);
                    result474 = $tmp493;
                }
                goto $l480;
                $l481:;
            }
            return result474;
        }
        }
        else {
        panda$core$Bit $tmp494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp494.value) {
        {
            panda$collections$ImmutableArray** $tmp496 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9221->$data + 16));
            tests495 = *$tmp496;
            panda$collections$ImmutableArray** $tmp498 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9221->$data + 24));
            statements497 = *$tmp498;
            result499 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp501 = ((panda$collections$Iterable*) tests495)->$class->itable;
                while ($tmp501->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp501 = $tmp501->next;
                }
                $fn503 $tmp502 = $tmp501->methods[0];
                panda$collections$Iterator* $tmp504 = $tmp502(((panda$collections$Iterable*) tests495));
                test$Iter500 = $tmp504;
                $l505:;
                ITable* $tmp507 = test$Iter500->$class->itable;
                while ($tmp507->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp507 = $tmp507->next;
                }
                $fn509 $tmp508 = $tmp507->methods[0];
                panda$core$Bit $tmp510 = $tmp508(test$Iter500);
                panda$core$Bit $tmp511 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp510);
                if (!$tmp511.value) goto $l506;
                {
                    ITable* $tmp513 = test$Iter500->$class->itable;
                    while ($tmp513->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp513 = $tmp513->next;
                    }
                    $fn515 $tmp514 = $tmp513->methods[1];
                    panda$core$Object* $tmp516 = $tmp514(test$Iter500);
                    test512 = ((org$pandalanguage$pandac$ASTNode*) $tmp516);
                    panda$core$Int64 $tmp517 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test512);
                    panda$core$Int64 $tmp518 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result499, $tmp517);
                    result499 = $tmp518;
                }
                goto $l505;
                $l506:;
            }
            {
                ITable* $tmp520 = ((panda$collections$Iterable*) statements497)->$class->itable;
                while ($tmp520->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp520 = $tmp520->next;
                }
                $fn522 $tmp521 = $tmp520->methods[0];
                panda$collections$Iterator* $tmp523 = $tmp521(((panda$collections$Iterable*) statements497));
                s$Iter519 = $tmp523;
                $l524:;
                ITable* $tmp526 = s$Iter519->$class->itable;
                while ($tmp526->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp526 = $tmp526->next;
                }
                $fn528 $tmp527 = $tmp526->methods[0];
                panda$core$Bit $tmp529 = $tmp527(s$Iter519);
                panda$core$Bit $tmp530 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp529);
                if (!$tmp530.value) goto $l525;
                {
                    ITable* $tmp532 = s$Iter519->$class->itable;
                    while ($tmp532->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp532 = $tmp532->next;
                    }
                    $fn534 $tmp533 = $tmp532->methods[1];
                    panda$core$Object* $tmp535 = $tmp533(s$Iter519);
                    s531 = ((org$pandalanguage$pandac$ASTNode*) $tmp535);
                    panda$core$Int64 $tmp536 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s531);
                    panda$core$Int64 $tmp537 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result499, $tmp536);
                    result499 = $tmp537;
                }
                goto $l524;
                $l525:;
            }
            return result499;
        }
        }
        else {
        panda$core$Bit $tmp538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9221->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp538.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp540 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$131_9221->$data + 24));
            test539 = *$tmp540;
            panda$collections$ImmutableArray** $tmp542 = ((panda$collections$ImmutableArray**) ((char*) $match$131_9221->$data + 32));
            statements541 = *$tmp542;
            panda$core$Int64 $tmp544 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test539);
            result543 = $tmp544;
            {
                ITable* $tmp546 = ((panda$collections$Iterable*) statements541)->$class->itable;
                while ($tmp546->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp546 = $tmp546->next;
                }
                $fn548 $tmp547 = $tmp546->methods[0];
                panda$collections$Iterator* $tmp549 = $tmp547(((panda$collections$Iterable*) statements541));
                s$Iter545 = $tmp549;
                $l550:;
                ITable* $tmp552 = s$Iter545->$class->itable;
                while ($tmp552->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp552 = $tmp552->next;
                }
                $fn554 $tmp553 = $tmp552->methods[0];
                panda$core$Bit $tmp555 = $tmp553(s$Iter545);
                panda$core$Bit $tmp556 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp555);
                if (!$tmp556.value) goto $l551;
                {
                    ITable* $tmp558 = s$Iter545->$class->itable;
                    while ($tmp558->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp558 = $tmp558->next;
                    }
                    $fn560 $tmp559 = $tmp558->methods[1];
                    panda$core$Object* $tmp561 = $tmp559(s$Iter545);
                    s557 = ((org$pandalanguage$pandac$ASTNode*) $tmp561);
                    panda$core$Int64 $tmp562 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s557);
                    panda$core$Int64 $tmp563 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result543, $tmp562);
                    result543 = $tmp563;
                }
                goto $l550;
                $l551:;
            }
            return result543;
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
    panda$core$Int64 c574;
    panda$collections$Iterator* s$Iter575;
    org$pandalanguage$pandac$ASTNode* s587;
    panda$core$Bit $tmp566 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp565 = $tmp566.value;
    if (!$tmp565) goto $l567;
    panda$core$Bit $tmp568 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp569 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp568);
    $tmp565 = $tmp569.value;
    $l567:;
    panda$core$Bit $tmp570 = { $tmp565 };
    bool $tmp564 = $tmp570.value;
    if (!$tmp564) goto $l571;
    panda$core$Bit $tmp572 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp564 = $tmp572.value;
    $l571:;
    panda$core$Bit $tmp573 = { $tmp564 };
    if ($tmp573.value) {
    {
        c574 = ((panda$core$Int64) { 0 });
        {
            ITable* $tmp576 = ((panda$collections$Iterable*) p_statements)->$class->itable;
            while ($tmp576->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp576 = $tmp576->next;
            }
            $fn578 $tmp577 = $tmp576->methods[0];
            panda$collections$Iterator* $tmp579 = $tmp577(((panda$collections$Iterable*) p_statements));
            s$Iter575 = $tmp579;
            $l580:;
            ITable* $tmp582 = s$Iter575->$class->itable;
            while ($tmp582->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp582 = $tmp582->next;
            }
            $fn584 $tmp583 = $tmp582->methods[0];
            panda$core$Bit $tmp585 = $tmp583(s$Iter575);
            panda$core$Bit $tmp586 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp585);
            if (!$tmp586.value) goto $l581;
            {
                ITable* $tmp588 = s$Iter575->$class->itable;
                while ($tmp588->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp588 = $tmp588->next;
                }
                $fn590 $tmp589 = $tmp588->methods[1];
                panda$core$Object* $tmp591 = $tmp589(s$Iter575);
                s587 = ((org$pandalanguage$pandac$ASTNode*) $tmp591);
                panda$core$Int64 $tmp592 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s587);
                panda$core$Int64 $tmp593 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c574, $tmp592);
                c574 = $tmp593;
                panda$core$Bit $tmp594 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c574, ((panda$core$Int64) { 10 }));
                if ($tmp594.value) {
                {
                    return ((panda$core$Bit) { false });
                }
                }
            }
            goto $l580;
            $l581:;
        }
        return ((panda$core$Bit) { true });
    }
    }
    return ((panda$core$Bit) { false });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment595;
    org$pandalanguage$pandac$ASTNode* $match$281_13597;
    org$pandalanguage$pandac$Position position599;
    panda$core$String* text601;
    org$pandalanguage$pandac$Annotations* annotations604;
    panda$collections$Array* parameters618;
    panda$collections$Iterator* p$Iter622;
    org$pandalanguage$pandac$ASTNode* p634;
    org$pandalanguage$pandac$ASTNode* $match$294_13639;
    panda$core$String* name641;
    org$pandalanguage$pandac$ASTNode* type643;
    org$pandalanguage$pandac$Type* returnType648;
    memset(&doccomment595, 0, sizeof(doccomment595));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            panda$core$Object* $tmp596 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
            doccomment595 = ((panda$core$String*) $tmp596);
        }
    }
    }
    else {
    {
        {
            $match$281_13597 = p_rawDoccomment;
            panda$core$Bit $tmp598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$281_13597->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp598.value) {
            {
                org$pandalanguage$pandac$Position* $tmp600 = ((org$pandalanguage$pandac$Position*) ((char*) $match$281_13597->$data + 0));
                position599 = *$tmp600;
                panda$core$String** $tmp602 = ((panda$core$String**) ((char*) $match$281_13597->$data + 16));
                text601 = *$tmp602;
                {
                    panda$core$Object* $tmp603 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) text601));
                    doccomment595 = ((panda$core$String*) $tmp603);
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
    org$pandalanguage$pandac$Annotations* $tmp605 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    panda$core$Object* $tmp606 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp605));
    annotations604 = ((org$pandalanguage$pandac$Annotations*) $tmp606);
    panda$core$Bit $tmp609 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp608 = $tmp609.value;
    if (!$tmp608) goto $l610;
    panda$core$Bit $tmp611 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
    $tmp608 = $tmp611.value;
    $l610:;
    panda$core$Bit $tmp612 = { $tmp608 };
    bool $tmp607 = $tmp612.value;
    if ($tmp607) goto $l613;
    panda$core$Bit $tmp614 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations604);
    $tmp607 = $tmp614.value;
    $l613:;
    panda$core$Bit $tmp615 = { $tmp607 };
    if ($tmp615.value) {
    {
        panda$core$Int64 $tmp616 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp617 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations604->flags, $tmp616);
        annotations604->flags = $tmp617;
    }
    }
    panda$collections$Array* $tmp619 = (panda$collections$Array*) pandaAlloc(41);
    $tmp619->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp619->refCount.value = 1;
    panda$collections$Array$init($tmp619);
    panda$core$Object* $tmp621 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp619));
    parameters618 = ((panda$collections$Array*) $tmp621);
    {
        ITable* $tmp623 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
        while ($tmp623->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp623 = $tmp623->next;
        }
        $fn625 $tmp624 = $tmp623->methods[0];
        panda$collections$Iterator* $tmp626 = $tmp624(((panda$collections$Iterable*) p_rawParameters));
        p$Iter622 = $tmp626;
        $l627:;
        ITable* $tmp629 = p$Iter622->$class->itable;
        while ($tmp629->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp629 = $tmp629->next;
        }
        $fn631 $tmp630 = $tmp629->methods[0];
        panda$core$Bit $tmp632 = $tmp630(p$Iter622);
        panda$core$Bit $tmp633 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp632);
        if (!$tmp633.value) goto $l628;
        {
            ITable* $tmp635 = p$Iter622->$class->itable;
            while ($tmp635->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp635 = $tmp635->next;
            }
            $fn637 $tmp636 = $tmp635->methods[1];
            panda$core$Object* $tmp638 = $tmp636(p$Iter622);
            p634 = ((org$pandalanguage$pandac$ASTNode*) $tmp638);
            {
                $match$294_13639 = p634;
                panda$core$Bit $tmp640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$294_13639->$rawValue, ((panda$core$Int64) { 27 }));
                if ($tmp640.value) {
                {
                    panda$core$String** $tmp642 = ((panda$core$String**) ((char*) $match$294_13639->$data + 16));
                    name641 = *$tmp642;
                    org$pandalanguage$pandac$ASTNode** $tmp644 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$294_13639->$data + 24));
                    type643 = *$tmp644;
                    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp645 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaAlloc(32);
                    $tmp645->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                    $tmp645->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp647 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type643);
                    org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp645, name641, $tmp647);
                    panda$collections$Array$add$panda$collections$Array$T(parameters618, ((panda$core$Object*) $tmp645));
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        goto $l627;
        $l628:;
    }
    memset(&returnType648, 0, sizeof(returnType648));
    if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp649 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
            panda$core$Object* $tmp650 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp649));
            returnType648 = ((org$pandalanguage$pandac$Type*) $tmp650);
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp651 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Object* $tmp652 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp651));
            returnType648 = ((org$pandalanguage$pandac$Type*) $tmp652);
        }
    }
    }
    panda$core$Bit $tmp654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
    bool $tmp653 = $tmp654.value;
    if (!$tmp653) goto $l655;
    org$pandalanguage$pandac$Type* $tmp656 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp657 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType648, $tmp656);
    $tmp653 = $tmp657.value;
    $l655:;
    panda$core$Bit $tmp658 = { $tmp653 };
    if ($tmp658.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s659);
    }
    }
    bool $tmp660 = ((panda$core$Bit) { p_statements != NULL }).value;
    if (!$tmp660) goto $l661;
    panda$core$Bit $tmp662 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations604, p_statements);
    $tmp660 = $tmp662.value;
    $l661:;
    panda$core$Bit $tmp663 = { $tmp660 };
    if ($tmp663.value) {
    {
        panda$core$Int64 $tmp664 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp665 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations604->flags, $tmp664);
        annotations604->flags = $tmp665;
    }
    }
    if (((panda$core$Bit) { p_statements == NULL }).value) {
    {
        panda$core$Bit $tmp666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp666.value) {
        {
            panda$core$Int64 $tmp667 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
            panda$core$Int64 $tmp668 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations604->flags, $tmp667);
            annotations604->flags = $tmp668;
        }
        }
        else {
        panda$core$Int64 $tmp669 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
        panda$core$Int64 $tmp670 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations604->flags, $tmp669);
        panda$core$Bit $tmp671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp670, ((panda$core$Int64) { 0 }));
        if ($tmp671.value) {
        {
            panda$core$String* $tmp673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s672, p_name);
            panda$core$String* $tmp675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp673, &$s674);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, $tmp675);
        }
        }
        }
    }
    }
    org$pandalanguage$pandac$MethodDecl* $tmp676 = (org$pandalanguage$pandac$MethodDecl*) pandaAlloc(136);
    $tmp676->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
    $tmp676->refCount.value = 1;
    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp676, p_owner, p_position, doccomment595, annotations604, p_kind, p_name, parameters618, returnType648, p_statements);
    return $tmp676;
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$327_9678;
    org$pandalanguage$pandac$Position position680;
    org$pandalanguage$pandac$ASTNode* dc682;
    panda$collections$ImmutableArray* annotations684;
    org$pandalanguage$pandac$ASTNode* varDecl686;
    org$pandalanguage$pandac$Position position689;
    org$pandalanguage$pandac$ASTNode* dc691;
    panda$collections$ImmutableArray* annotations693;
    org$pandalanguage$pandac$MethodDecl$Kind kind695;
    panda$core$String* name697;
    panda$collections$ImmutableArray* parameters699;
    org$pandalanguage$pandac$ASTNode* rawReturnType701;
    panda$collections$ImmutableArray* statements703;
    org$pandalanguage$pandac$MethodDecl* m705;
    org$pandalanguage$pandac$Position position709;
    org$pandalanguage$pandac$ASTNode* dc711;
    panda$collections$ImmutableArray* annotations713;
    org$pandalanguage$pandac$ClassDecl$Kind kind715;
    panda$core$String* name717;
    panda$collections$ImmutableArray* generics719;
    panda$collections$ImmutableArray* supertypes721;
    panda$collections$ImmutableArray* members723;
    org$pandalanguage$pandac$ClassDecl* inner725;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp732;
    org$pandalanguage$pandac$Position position738;
    org$pandalanguage$pandac$ASTNode* dc740;
    panda$core$String* name742;
    panda$collections$ImmutableArray* fields744;
    {
        $match$327_9678 = p_node;
        panda$core$Bit $tmp679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9678->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp679.value) {
        {
            org$pandalanguage$pandac$Position* $tmp681 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9678->$data + 0));
            position680 = *$tmp681;
            org$pandalanguage$pandac$ASTNode** $tmp683 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9678->$data + 16));
            dc682 = *$tmp683;
            panda$collections$ImmutableArray** $tmp685 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9678->$data + 24));
            annotations684 = *$tmp685;
            org$pandalanguage$pandac$ASTNode** $tmp687 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9678->$data + 32));
            varDecl686 = *$tmp687;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position680, dc682, annotations684, varDecl686);
        }
        }
        else {
        panda$core$Bit $tmp688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9678->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp688.value) {
        {
            org$pandalanguage$pandac$Position* $tmp690 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9678->$data + 0));
            position689 = *$tmp690;
            org$pandalanguage$pandac$ASTNode** $tmp692 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9678->$data + 16));
            dc691 = *$tmp692;
            panda$collections$ImmutableArray** $tmp694 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9678->$data + 24));
            annotations693 = *$tmp694;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp696 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$327_9678->$data + 32));
            kind695 = *$tmp696;
            panda$core$String** $tmp698 = ((panda$core$String**) ((char*) $match$327_9678->$data + 40));
            name697 = *$tmp698;
            panda$collections$ImmutableArray** $tmp700 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9678->$data + 48));
            parameters699 = *$tmp700;
            org$pandalanguage$pandac$ASTNode** $tmp702 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9678->$data + 56));
            rawReturnType701 = *$tmp702;
            panda$collections$ImmutableArray** $tmp704 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9678->$data + 64));
            statements703 = *$tmp704;
            org$pandalanguage$pandac$MethodDecl* $tmp706 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position689, dc691, annotations693, kind695, name697, parameters699, rawReturnType701, statements703);
            panda$core$Object* $tmp707 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp706));
            m705 = ((org$pandalanguage$pandac$MethodDecl*) $tmp707);
            if (((panda$core$Bit) { m705 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m705));
                panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m705));
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9678->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp708.value) {
        {
            org$pandalanguage$pandac$Position* $tmp710 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9678->$data + 0));
            position709 = *$tmp710;
            org$pandalanguage$pandac$ASTNode** $tmp712 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9678->$data + 16));
            dc711 = *$tmp712;
            panda$collections$ImmutableArray** $tmp714 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9678->$data + 24));
            annotations713 = *$tmp714;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp716 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$327_9678->$data + 32));
            kind715 = *$tmp716;
            panda$core$String** $tmp718 = ((panda$core$String**) ((char*) $match$327_9678->$data + 40));
            name717 = *$tmp718;
            panda$collections$ImmutableArray** $tmp720 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9678->$data + 48));
            generics719 = *$tmp720;
            panda$collections$ImmutableArray** $tmp722 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9678->$data + 56));
            supertypes721 = *$tmp722;
            panda$collections$ImmutableArray** $tmp724 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9678->$data + 64));
            members723 = *$tmp724;
            org$pandalanguage$pandac$ClassDecl* $tmp726 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, ((org$pandalanguage$pandac$Symbol*) p_cl)->name, position709, dc711, annotations713, kind715, name717, generics719, supertypes721, members723);
            panda$core$Object* $tmp727 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp726));
            inner725 = ((org$pandalanguage$pandac$ClassDecl*) $tmp727);
            if (((panda$core$Bit) { inner725 != NULL }).value) {
            {
                {
                    panda$core$Object* $tmp728 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_cl));
                    inner725->owner = ((org$pandalanguage$pandac$ClassDecl*) $tmp728);
                }
                panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner725));
                panda$core$String* $tmp730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s729);
                panda$core$Bit $tmp731 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner725)->name, $tmp730);
                PANDA_ASSERT($tmp731.value);
                panda$core$Int64 $tmp733 = panda$core$String$length$R$panda$core$Int64(((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$Int64 $tmp734 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp733, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp732, ((panda$core$Int64$nullable) { $tmp734, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp735 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner725)->name, $tmp732);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner725), $tmp735);
                panda$collections$Array$add$panda$collections$Array$T(inner725->symbolTable->parents, ((panda$core$Object*) p_cl->symbolTable));
                panda$core$String* $tmp736 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner725->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_cl), $tmp736);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9678->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp737.value) {
        {
            org$pandalanguage$pandac$Position* $tmp739 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9678->$data + 0));
            position738 = *$tmp739;
            org$pandalanguage$pandac$ASTNode** $tmp741 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9678->$data + 16));
            dc740 = *$tmp741;
            panda$core$String** $tmp743 = ((panda$core$String**) ((char*) $match$327_9678->$data + 24));
            name742 = *$tmp743;
            panda$collections$ImmutableArray** $tmp745 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9678->$data + 32));
            fields744 = *$tmp745;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position738, dc740, name742, fields744);
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
    panda$core$String* doccomment746;
    org$pandalanguage$pandac$ASTNode* $match$365_13748;
    org$pandalanguage$pandac$Position position750;
    panda$core$String* text752;
    panda$collections$Array* fields755;
    panda$collections$Iterator* t$Iter759;
    org$pandalanguage$pandac$ASTNode* t771;
    org$pandalanguage$pandac$ChoiceEntry* entry777;
    panda$core$Bit found782;
    panda$collections$Iterator* m$Iter783;
    org$pandalanguage$pandac$MethodDecl* m795;
    panda$core$Range$LTpanda$core$Int64$GT $tmp808;
    panda$collections$Array* parameters835;
    panda$collections$Array* statements843;
    org$pandalanguage$pandac$parser$Token$Kind $tmp852;
    panda$core$Range$LTpanda$core$Int64$GT $tmp856;
    org$pandalanguage$pandac$parser$Token$Kind $tmp885;
    org$pandalanguage$pandac$MethodDecl* synthetic899;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp904;
    memset(&doccomment746, 0, sizeof(doccomment746));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            panda$core$Object* $tmp747 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
            doccomment746 = ((panda$core$String*) $tmp747);
        }
    }
    }
    else {
    {
        {
            $match$365_13748 = p_rawDoccomment;
            panda$core$Bit $tmp749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$365_13748->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp749.value) {
            {
                org$pandalanguage$pandac$Position* $tmp751 = ((org$pandalanguage$pandac$Position*) ((char*) $match$365_13748->$data + 0));
                position750 = *$tmp751;
                panda$core$String** $tmp753 = ((panda$core$String**) ((char*) $match$365_13748->$data + 16));
                text752 = *$tmp753;
                {
                    panda$core$Object* $tmp754 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) text752));
                    doccomment746 = ((panda$core$String*) $tmp754);
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
    panda$collections$Array* $tmp756 = (panda$collections$Array*) pandaAlloc(41);
    $tmp756->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp756->refCount.value = 1;
    panda$collections$Array$init($tmp756);
    panda$core$Object* $tmp758 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp756));
    fields755 = ((panda$collections$Array*) $tmp758);
    {
        ITable* $tmp760 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
        while ($tmp760->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp760 = $tmp760->next;
        }
        $fn762 $tmp761 = $tmp760->methods[0];
        panda$collections$Iterator* $tmp763 = $tmp761(((panda$collections$Iterable*) p_rawFields));
        t$Iter759 = $tmp763;
        $l764:;
        ITable* $tmp766 = t$Iter759->$class->itable;
        while ($tmp766->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp766 = $tmp766->next;
        }
        $fn768 $tmp767 = $tmp766->methods[0];
        panda$core$Bit $tmp769 = $tmp767(t$Iter759);
        panda$core$Bit $tmp770 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp769);
        if (!$tmp770.value) goto $l765;
        {
            ITable* $tmp772 = t$Iter759->$class->itable;
            while ($tmp772->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp772 = $tmp772->next;
            }
            $fn774 $tmp773 = $tmp772->methods[1];
            panda$core$Object* $tmp775 = $tmp773(t$Iter759);
            t771 = ((org$pandalanguage$pandac$ASTNode*) $tmp775);
            org$pandalanguage$pandac$Type* $tmp776 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t771);
            panda$collections$Array$add$panda$collections$Array$T(fields755, ((panda$core$Object*) $tmp776));
        }
        goto $l764;
        $l765:;
    }
    org$pandalanguage$pandac$ChoiceEntry* $tmp778 = (org$pandalanguage$pandac$ChoiceEntry*) pandaAlloc(97);
    $tmp778->$class = (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class;
    $tmp778->refCount.value = 1;
    panda$core$Int64 $tmp780 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
    org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp778, p_cl, p_position, p_name, doccomment746, $tmp780, ((panda$collections$ListView*) fields755));
    panda$core$Object* $tmp781 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp778));
    entry777 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp781);
    panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry777));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry777));
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
            panda$core$Int64 $tmp802 = panda$collections$Array$get_count$R$panda$core$Int64(fields755);
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
            panda$core$Int64 $tmp809 = panda$collections$Array$get_count$R$panda$core$Int64(fields755);
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
                panda$core$Object* $tmp823 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields755, i810);
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
            {
                panda$core$Object* $tmp833 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) m795));
                entry777->initMethod = ((org$pandalanguage$pandac$MethodDecl*) $tmp833);
            }
            found782 = ((panda$core$Bit) { true });
            goto $l789;
        }
        goto $l788;
        $l789:;
    }
    panda$core$Bit $tmp834 = panda$core$Bit$$NOT$R$panda$core$Bit(found782);
    if ($tmp834.value) {
    {
        panda$collections$Array* $tmp836 = (panda$collections$Array*) pandaAlloc(41);
        $tmp836->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp836->refCount.value = 1;
        panda$collections$Array$init($tmp836);
        panda$core$Object* $tmp838 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp836));
        parameters835 = ((panda$collections$Array*) $tmp838);
        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp839 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaAlloc(32);
        $tmp839->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
        $tmp839->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp842 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp839, &$s841, $tmp842);
        panda$collections$Array$add$panda$collections$Array$T(parameters835, ((panda$core$Object*) $tmp839));
        panda$collections$Array* $tmp844 = (panda$collections$Array*) pandaAlloc(41);
        $tmp844->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp844->refCount.value = 1;
        panda$collections$Array$init($tmp844);
        panda$core$Object* $tmp846 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp844));
        statements843 = ((panda$collections$Array*) $tmp846);
        org$pandalanguage$pandac$ASTNode* $tmp847 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
        $tmp847->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp847->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode* $tmp849 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
        $tmp849->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp849->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp849, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s851);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp852, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$ASTNode* $tmp853 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
        $tmp853->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp853->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp853, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s855);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp847, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp849, $tmp852, $tmp853);
        panda$collections$Array$add$panda$collections$Array$T(statements843, ((panda$core$Object*) $tmp847));
        panda$core$Int64 $tmp857 = panda$collections$Array$get_count$R$panda$core$Int64(fields755);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp856, ((panda$core$Int64) { 0 }), $tmp857, ((panda$core$Bit) { false }));
        int64_t $tmp859 = $tmp856.min.value;
        panda$core$Int64 i858 = { $tmp859 };
        int64_t $tmp861 = $tmp856.max.value;
        bool $tmp862 = $tmp856.inclusive.value;
        if ($tmp862) goto $l869; else goto $l870;
        $l869:;
        if ($tmp859 <= $tmp861) goto $l863; else goto $l865;
        $l870:;
        if ($tmp859 < $tmp861) goto $l863; else goto $l865;
        $l863:;
        {
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp871 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaAlloc(32);
            $tmp871->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp871->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp874;
            $tmp874 = (panda$core$Int64$wrapper*) pandaAlloc(24);
            $tmp874->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp874->refCount = 1;
            $tmp874->value = i858;
            panda$core$String* $tmp875 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s873, ((panda$core$Object*) $tmp874));
            panda$core$String* $tmp877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp875, &$s876);
            panda$core$Object* $tmp878 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields755, i858);
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp871, $tmp877, ((org$pandalanguage$pandac$Type*) $tmp878));
            panda$collections$Array$add$panda$collections$Array$T(parameters835, ((panda$core$Object*) $tmp871));
            org$pandalanguage$pandac$ASTNode* $tmp879 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp879->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp879->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode* $tmp881 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp881->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp881->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode* $tmp883 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp883->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp883->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp883, ((panda$core$Int64) { 32 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64($tmp881, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp883, entry777, i858);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp885, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$ASTNode* $tmp886 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp886->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp886->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp889;
            $tmp889 = (panda$core$Int64$wrapper*) pandaAlloc(24);
            $tmp889->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp889->refCount = 1;
            $tmp889->value = i858;
            panda$core$String* $tmp890 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s888, ((panda$core$Object*) $tmp889));
            panda$core$String* $tmp892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp890, &$s891);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp886, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp892);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp879, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp881, $tmp885, $tmp886);
            panda$collections$Array$add$panda$collections$Array$T(statements843, ((panda$core$Object*) $tmp879));
        }
        $l866:;
        int64_t $tmp894 = $tmp861 - i858.value;
        if ($tmp862) goto $l895; else goto $l896;
        $l895:;
        if ((uint64_t) $tmp894 >= 1) goto $l893; else goto $l865;
        $l896:;
        if ((uint64_t) $tmp894 > 1) goto $l893; else goto $l865;
        $l893:;
        i858.value += 1;
        goto $l863;
        $l865:;
        org$pandalanguage$pandac$MethodDecl* $tmp900 = (org$pandalanguage$pandac$MethodDecl*) pandaAlloc(136);
        $tmp900->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp900->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp902 = (org$pandalanguage$pandac$Annotations*) pandaAlloc(24);
        $tmp902->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp902->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp902);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp904, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$Type* $tmp906 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp907 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements843);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp900, p_cl, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, NULL, $tmp902, $tmp904, &$s905, parameters835, $tmp906, $tmp907);
        panda$core$Object* $tmp908 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp900));
        synthetic899 = ((org$pandalanguage$pandac$MethodDecl*) $tmp908);
        {
            panda$core$Object* $tmp909 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) synthetic899));
            entry777->initMethod = ((org$pandalanguage$pandac$MethodDecl*) $tmp909);
        }
        panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) synthetic899));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) synthetic899));
    }
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName910;
    panda$core$String* doccomment921;
    org$pandalanguage$pandac$ASTNode* $match$440_13923;
    org$pandalanguage$pandac$Position position925;
    panda$core$String* text927;
    org$pandalanguage$pandac$Annotations* annotations930;
    panda$collections$Array* parameters933;
    panda$collections$Iterator* p$Iter937;
    org$pandalanguage$pandac$ASTNode* p949;
    panda$core$String* name954;
    org$pandalanguage$pandac$Type* bound955;
    org$pandalanguage$pandac$ASTNode* $match$453_17956;
    panda$core$String* id958;
    panda$core$String* id964;
    org$pandalanguage$pandac$ASTNode* type966;
    panda$collections$Array* supertypes977;
    panda$collections$Iterator* s$Iter983;
    org$pandalanguage$pandac$ASTNode* s995;
    org$pandalanguage$pandac$ClassDecl* result1001;
    org$pandalanguage$pandac$FieldDecl* rawValue1006;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1011;
    org$pandalanguage$pandac$FieldDecl* data1015;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1020;
    panda$collections$Iterator* m$Iter1024;
    org$pandalanguage$pandac$ASTNode* m1036;
    org$pandalanguage$pandac$ASTNode* $match$492_131041;
    org$pandalanguage$pandac$Position mPosition1043;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1045;
    org$pandalanguage$pandac$ClassDecl$Kind $match$495_251048;
    panda$core$Bit foundInit1054;
    panda$collections$Iterator* m$Iter1055;
    org$pandalanguage$pandac$MethodDecl* m1067;
    org$pandalanguage$pandac$MethodDecl* defaultInit1083;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1088;
    panda$core$Bit haveFields1097;
    panda$collections$Iterator* e$Iter1098;
    org$pandalanguage$pandac$ChoiceEntry* e1110;
    memset(&fullName910, 0, sizeof(fullName910));
    panda$core$Bit $tmp912 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s911);
    if ($tmp912.value) {
    {
        {
            panda$core$String* $tmp913 = panda$core$String$convert$R$panda$core$String(p_contextName);
            panda$core$String* $tmp915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp913, &$s914);
            panda$core$String* $tmp916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp915, p_name);
            panda$core$String* $tmp918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp916, &$s917);
            panda$core$Object* $tmp919 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp918));
            fullName910 = ((panda$core$String*) $tmp919);
        }
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp920 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_name));
            fullName910 = ((panda$core$String*) $tmp920);
        }
    }
    }
    memset(&doccomment921, 0, sizeof(doccomment921));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            panda$core$Object* $tmp922 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
            doccomment921 = ((panda$core$String*) $tmp922);
        }
    }
    }
    else {
    {
        {
            $match$440_13923 = p_rawDoccomment;
            panda$core$Bit $tmp924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$440_13923->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp924.value) {
            {
                org$pandalanguage$pandac$Position* $tmp926 = ((org$pandalanguage$pandac$Position*) ((char*) $match$440_13923->$data + 0));
                position925 = *$tmp926;
                panda$core$String** $tmp928 = ((panda$core$String**) ((char*) $match$440_13923->$data + 16));
                text927 = *$tmp928;
                {
                    panda$core$Object* $tmp929 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) text927));
                    doccomment921 = ((panda$core$String*) $tmp929);
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
    org$pandalanguage$pandac$Annotations* $tmp931 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    panda$core$Object* $tmp932 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp931));
    annotations930 = ((org$pandalanguage$pandac$Annotations*) $tmp932);
    panda$collections$Array* $tmp934 = (panda$collections$Array*) pandaAlloc(41);
    $tmp934->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp934->refCount.value = 1;
    panda$collections$Array$init($tmp934);
    panda$core$Object* $tmp936 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp934));
    parameters933 = ((panda$collections$Array*) $tmp936);
    if (((panda$core$Bit) { p_generics != NULL }).value) {
    {
        {
            ITable* $tmp938 = ((panda$collections$Iterable*) p_generics)->$class->itable;
            while ($tmp938->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp938 = $tmp938->next;
            }
            $fn940 $tmp939 = $tmp938->methods[0];
            panda$collections$Iterator* $tmp941 = $tmp939(((panda$collections$Iterable*) p_generics));
            p$Iter937 = $tmp941;
            $l942:;
            ITable* $tmp944 = p$Iter937->$class->itable;
            while ($tmp944->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp944 = $tmp944->next;
            }
            $fn946 $tmp945 = $tmp944->methods[0];
            panda$core$Bit $tmp947 = $tmp945(p$Iter937);
            panda$core$Bit $tmp948 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp947);
            if (!$tmp948.value) goto $l943;
            {
                ITable* $tmp950 = p$Iter937->$class->itable;
                while ($tmp950->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp950 = $tmp950->next;
                }
                $fn952 $tmp951 = $tmp950->methods[1];
                panda$core$Object* $tmp953 = $tmp951(p$Iter937);
                p949 = ((org$pandalanguage$pandac$ASTNode*) $tmp953);
                memset(&name954, 0, sizeof(name954));
                memset(&bound955, 0, sizeof(bound955));
                {
                    $match$453_17956 = p949;
                    panda$core$Bit $tmp957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453_17956->$rawValue, ((panda$core$Int64) { 18 }));
                    if ($tmp957.value) {
                    {
                        panda$core$String** $tmp959 = ((panda$core$String**) ((char*) $match$453_17956->$data + 16));
                        id958 = *$tmp959;
                        {
                            panda$core$Object* $tmp960 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) id958));
                            name954 = ((panda$core$String*) $tmp960);
                        }
                        {
                            org$pandalanguage$pandac$Type* $tmp961 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                            panda$core$Object* $tmp962 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp961));
                            bound955 = ((org$pandalanguage$pandac$Type*) $tmp962);
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453_17956->$rawValue, ((panda$core$Int64) { 36 }));
                    if ($tmp963.value) {
                    {
                        panda$core$String** $tmp965 = ((panda$core$String**) ((char*) $match$453_17956->$data + 16));
                        id964 = *$tmp965;
                        org$pandalanguage$pandac$ASTNode** $tmp967 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$453_17956->$data + 24));
                        type966 = *$tmp967;
                        {
                            panda$core$Object* $tmp968 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) id964));
                            name954 = ((panda$core$String*) $tmp968);
                        }
                        {
                            org$pandalanguage$pandac$Type* $tmp969 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type966);
                            panda$core$Object* $tmp970 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp969));
                            bound955 = ((org$pandalanguage$pandac$Type*) $tmp970);
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
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp971 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaAlloc(72);
                $tmp971->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp971->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp974 = (($fn973) p949->$class->vtable[2])(p949);
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp971, $tmp974, fullName910, name954, bound955);
                panda$collections$Array$add$panda$collections$Array$T(parameters933, ((panda$core$Object*) $tmp971));
            }
            goto $l942;
            $l943:;
        }
        panda$core$Bit $tmp975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp975.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s976);
        }
        }
    }
    }
    panda$collections$Array* $tmp978 = (panda$collections$Array*) pandaAlloc(41);
    $tmp978->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp978->refCount.value = 1;
    panda$collections$Array$init($tmp978);
    panda$core$Object* $tmp980 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp978));
    supertypes977 = ((panda$collections$Array*) $tmp980);
    if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
    {
        panda$core$Bit $tmp981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp981.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s982);
        }
        }
        {
            ITable* $tmp984 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
            while ($tmp984->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp984 = $tmp984->next;
            }
            $fn986 $tmp985 = $tmp984->methods[0];
            panda$collections$Iterator* $tmp987 = $tmp985(((panda$collections$Iterable*) p_rawSupertypes));
            s$Iter983 = $tmp987;
            $l988:;
            ITable* $tmp990 = s$Iter983->$class->itable;
            while ($tmp990->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp990 = $tmp990->next;
            }
            $fn992 $tmp991 = $tmp990->methods[0];
            panda$core$Bit $tmp993 = $tmp991(s$Iter983);
            panda$core$Bit $tmp994 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp993);
            if (!$tmp994.value) goto $l989;
            {
                ITable* $tmp996 = s$Iter983->$class->itable;
                while ($tmp996->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp996 = $tmp996->next;
                }
                $fn998 $tmp997 = $tmp996->methods[1];
                panda$core$Object* $tmp999 = $tmp997(s$Iter983);
                s995 = ((org$pandalanguage$pandac$ASTNode*) $tmp999);
                org$pandalanguage$pandac$Type* $tmp1000 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s995);
                panda$collections$Array$add$panda$collections$Array$T(supertypes977, ((panda$core$Object*) $tmp1000));
            }
            goto $l988;
            $l989:;
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1002 = (org$pandalanguage$pandac$ClassDecl*) pandaAlloc(201);
    $tmp1002->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp1002->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1002, p_source, p_position, p_aliases, doccomment921, annotations930, p_kind, fullName910, ((panda$collections$ListView*) supertypes977), parameters933, self->compiler->root);
    panda$core$Object* $tmp1004 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1002));
    result1001 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1004);
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result1001));
    panda$core$Bit $tmp1005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp1005.value) {
    {
        org$pandalanguage$pandac$FieldDecl* $tmp1007 = (org$pandalanguage$pandac$FieldDecl*) pandaAlloc(113);
        $tmp1007->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
        $tmp1007->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp1009 = (org$pandalanguage$pandac$Annotations*) pandaAlloc(24);
        $tmp1009->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp1009->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp1009);
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1011, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp1013 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1007, result1001, ((org$pandalanguage$pandac$Symbol*) result1001)->position, NULL, $tmp1009, $tmp1011, &$s1012, $tmp1013, NULL);
        panda$core$Object* $tmp1014 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1007));
        rawValue1006 = ((org$pandalanguage$pandac$FieldDecl*) $tmp1014);
        panda$collections$Array$add$panda$collections$Array$T(result1001->fields, ((panda$core$Object*) rawValue1006));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1001->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1006));
        org$pandalanguage$pandac$FieldDecl* $tmp1016 = (org$pandalanguage$pandac$FieldDecl*) pandaAlloc(113);
        $tmp1016->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
        $tmp1016->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp1018 = (org$pandalanguage$pandac$Annotations*) pandaAlloc(24);
        $tmp1018->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp1018->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp1018);
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1020, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp1022 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1016, result1001, ((org$pandalanguage$pandac$Symbol*) result1001)->position, NULL, $tmp1018, $tmp1020, &$s1021, $tmp1022, NULL);
        panda$core$Object* $tmp1023 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1016));
        data1015 = ((org$pandalanguage$pandac$FieldDecl*) $tmp1023);
        panda$collections$Array$add$panda$collections$Array$T(result1001->fields, ((panda$core$Object*) data1015));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1001->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1015));
    }
    }
    {
        ITable* $tmp1025 = ((panda$collections$Iterable*) p_members)->$class->itable;
        while ($tmp1025->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1025 = $tmp1025->next;
        }
        $fn1027 $tmp1026 = $tmp1025->methods[0];
        panda$collections$Iterator* $tmp1028 = $tmp1026(((panda$collections$Iterable*) p_members));
        m$Iter1024 = $tmp1028;
        $l1029:;
        ITable* $tmp1031 = m$Iter1024->$class->itable;
        while ($tmp1031->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1031 = $tmp1031->next;
        }
        $fn1033 $tmp1032 = $tmp1031->methods[0];
        panda$core$Bit $tmp1034 = $tmp1032(m$Iter1024);
        panda$core$Bit $tmp1035 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1034);
        if (!$tmp1035.value) goto $l1030;
        {
            ITable* $tmp1037 = m$Iter1024->$class->itable;
            while ($tmp1037->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1037 = $tmp1037->next;
            }
            $fn1039 $tmp1038 = $tmp1037->methods[1];
            panda$core$Object* $tmp1040 = $tmp1038(m$Iter1024);
            m1036 = ((org$pandalanguage$pandac$ASTNode*) $tmp1040);
            {
                $match$492_131041 = m1036;
                panda$core$Bit $tmp1042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$492_131041->$rawValue, ((panda$core$Int64) { 23 }));
                if ($tmp1042.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1044 = ((org$pandalanguage$pandac$Position*) ((char*) $match$492_131041->$data + 0));
                    mPosition1043 = *$tmp1044;
                    org$pandalanguage$pandac$MethodDecl$Kind* $tmp1046 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$492_131041->$data + 32));
                    methodKind1045 = *$tmp1046;
                    panda$core$Bit $tmp1047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1045.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1047.value) {
                    {
                        {
                            $match$495_251048 = p_kind;
                            panda$core$Bit $tmp1049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_251048.$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp1049.value) {
                            {
                            }
                            }
                            else {
                            panda$core$Bit $tmp1050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_251048.$rawValue, ((panda$core$Int64) { 1 }));
                            if ($tmp1050.value) {
                            {
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, mPosition1043, &$s1051);
                            }
                            }
                            else {
                            panda$core$Bit $tmp1052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_251048.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp1052.value) {
                            {
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, mPosition1043, &$s1053);
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
            org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1001, m1036);
        }
        goto $l1029;
        $l1030:;
    }
    foundInit1054 = ((panda$core$Bit) { false });
    {
        ITable* $tmp1056 = ((panda$collections$Iterable*) result1001->methods)->$class->itable;
        while ($tmp1056->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1056 = $tmp1056->next;
        }
        $fn1058 $tmp1057 = $tmp1056->methods[0];
        panda$collections$Iterator* $tmp1059 = $tmp1057(((panda$collections$Iterable*) result1001->methods));
        m$Iter1055 = $tmp1059;
        $l1060:;
        ITable* $tmp1062 = m$Iter1055->$class->itable;
        while ($tmp1062->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1062 = $tmp1062->next;
        }
        $fn1064 $tmp1063 = $tmp1062->methods[0];
        panda$core$Bit $tmp1065 = $tmp1063(m$Iter1055);
        panda$core$Bit $tmp1066 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1065);
        if (!$tmp1066.value) goto $l1061;
        {
            ITable* $tmp1068 = m$Iter1055->$class->itable;
            while ($tmp1068->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1068 = $tmp1068->next;
            }
            $fn1070 $tmp1069 = $tmp1068->methods[1];
            panda$core$Object* $tmp1071 = $tmp1069(m$Iter1055);
            m1067 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1071);
            panda$core$Bit $tmp1072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1067->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1072.value) {
            {
                foundInit1054 = ((panda$core$Bit) { true });
                goto $l1061;
            }
            }
        }
        goto $l1060;
        $l1061:;
    }
    panda$core$Bit $tmp1075 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1054);
    bool $tmp1074 = $tmp1075.value;
    if (!$tmp1074) goto $l1076;
    panda$core$Bit $tmp1077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
    $tmp1074 = $tmp1077.value;
    $l1076:;
    panda$core$Bit $tmp1078 = { $tmp1074 };
    bool $tmp1073 = $tmp1078.value;
    if (!$tmp1073) goto $l1079;
    panda$core$Bit $tmp1081 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result1001)->name, &$s1080);
    $tmp1073 = $tmp1081.value;
    $l1079:;
    panda$core$Bit $tmp1082 = { $tmp1073 };
    if ($tmp1082.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp1084 = (org$pandalanguage$pandac$MethodDecl*) pandaAlloc(136);
        $tmp1084->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp1084->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp1086 = (org$pandalanguage$pandac$Annotations*) pandaAlloc(24);
        $tmp1086->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp1086->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp1086);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1088, ((panda$core$Int64) { 2 }));
        panda$collections$Array* $tmp1090 = (panda$collections$Array*) pandaAlloc(41);
        $tmp1090->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1090->refCount.value = 1;
        panda$collections$Array$init($tmp1090);
        org$pandalanguage$pandac$Type* $tmp1092 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp1093 = (panda$collections$ImmutableArray*) pandaAlloc(40);
        $tmp1093->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp1093->refCount.value = 1;
        panda$collections$ImmutableArray$init($tmp1093);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1084, result1001, p_position, NULL, $tmp1086, $tmp1088, &$s1089, $tmp1090, $tmp1092, $tmp1093);
        panda$core$Object* $tmp1095 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1084));
        defaultInit1083 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1095);
        panda$collections$Array$add$panda$collections$Array$T(result1001->methods, ((panda$core$Object*) defaultInit1083));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1001->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1083));
    }
    }
    panda$core$Bit $tmp1096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp1096.value) {
    {
        haveFields1097 = ((panda$core$Bit) { false });
        {
            ITable* $tmp1099 = ((panda$collections$Iterable*) result1001->choiceEntries)->$class->itable;
            while ($tmp1099->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1099 = $tmp1099->next;
            }
            $fn1101 $tmp1100 = $tmp1099->methods[0];
            panda$collections$Iterator* $tmp1102 = $tmp1100(((panda$collections$Iterable*) result1001->choiceEntries));
            e$Iter1098 = $tmp1102;
            $l1103:;
            ITable* $tmp1105 = e$Iter1098->$class->itable;
            while ($tmp1105->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1105 = $tmp1105->next;
            }
            $fn1107 $tmp1106 = $tmp1105->methods[0];
            panda$core$Bit $tmp1108 = $tmp1106(e$Iter1098);
            panda$core$Bit $tmp1109 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1108);
            if (!$tmp1109.value) goto $l1104;
            {
                ITable* $tmp1111 = e$Iter1098->$class->itable;
                while ($tmp1111->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1111 = $tmp1111->next;
                }
                $fn1113 $tmp1112 = $tmp1111->methods[1];
                panda$core$Object* $tmp1114 = $tmp1112(e$Iter1098);
                e1110 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1114);
                panda$core$Int64 $tmp1115 = panda$collections$Array$get_count$R$panda$core$Int64(e1110->fields);
                panda$core$Bit $tmp1116 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1115, ((panda$core$Int64) { 0 }));
                if ($tmp1116.value) {
                {
                    haveFields1097 = ((panda$core$Bit) { true });
                    goto $l1104;
                }
                }
            }
            goto $l1103;
            $l1104:;
        }
        panda$core$Bit $tmp1117 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1097);
        if ($tmp1117.value) {
        {
            {
                org$pandalanguage$pandac$Type* $tmp1118 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                panda$core$Object* $tmp1119 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1118));
                result1001->rawSuper = ((org$pandalanguage$pandac$Type*) $tmp1119);
            }
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    return result1001;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter1120;
    org$pandalanguage$pandac$ClassDecl* inner1132;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp1121 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp1121->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1121 = $tmp1121->next;
        }
        $fn1123 $tmp1122 = $tmp1121->methods[0];
        panda$collections$Iterator* $tmp1124 = $tmp1122(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter1120 = $tmp1124;
        $l1125:;
        ITable* $tmp1127 = inner$Iter1120->$class->itable;
        while ($tmp1127->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1127 = $tmp1127->next;
        }
        $fn1129 $tmp1128 = $tmp1127->methods[0];
        panda$core$Bit $tmp1130 = $tmp1128(inner$Iter1120);
        panda$core$Bit $tmp1131 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1130);
        if (!$tmp1131.value) goto $l1126;
        {
            ITable* $tmp1133 = inner$Iter1120->$class->itable;
            while ($tmp1133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1133 = $tmp1133->next;
            }
            $fn1135 $tmp1134 = $tmp1133->methods[1];
            panda$core$Object* $tmp1136 = $tmp1134(inner$Iter1120);
            inner1132 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1136);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1132, p_arr);
        }
        goto $l1125;
        $l1126:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$546_91137;
    panda$collections$ImmutableArray* entries1139;
    panda$collections$Array* result1141;
    panda$core$String* currentPackage1145;
    panda$collections$HashMap* aliases1148;
    panda$collections$Iterator* e$Iter1152;
    org$pandalanguage$pandac$ASTNode* e1164;
    org$pandalanguage$pandac$ASTNode* $match$552_211169;
    panda$core$String* name1171;
    panda$core$String* fullName1175;
    panda$core$String$Index$nullable idx1177;
    panda$core$String* alias1180;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1181;
    org$pandalanguage$pandac$Position position1187;
    org$pandalanguage$pandac$ASTNode* dc1189;
    panda$collections$ImmutableArray* annotations1191;
    org$pandalanguage$pandac$ClassDecl$Kind kind1193;
    panda$core$String* name1195;
    panda$collections$ImmutableArray* generics1197;
    panda$collections$ImmutableArray* supertypes1199;
    panda$collections$ImmutableArray* members1201;
    org$pandalanguage$pandac$ClassDecl* cl1203;
    {
        $match$546_91137 = p_file;
        panda$core$Bit $tmp1138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$546_91137->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1138.value) {
        {
            panda$collections$ImmutableArray** $tmp1140 = ((panda$collections$ImmutableArray**) ((char*) $match$546_91137->$data + 0));
            entries1139 = *$tmp1140;
            panda$collections$Array* $tmp1142 = (panda$collections$Array*) pandaAlloc(41);
            $tmp1142->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1142->refCount.value = 1;
            panda$collections$Array$init($tmp1142);
            panda$core$Object* $tmp1144 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1142));
            result1141 = ((panda$collections$Array*) $tmp1144);
            panda$core$Object* $tmp1147 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1146));
            currentPackage1145 = ((panda$core$String*) $tmp1147);
            panda$collections$HashMap* $tmp1149 = (panda$collections$HashMap*) pandaAlloc(56);
            $tmp1149->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1149->refCount.value = 1;
            panda$collections$HashMap$init($tmp1149);
            panda$core$Object* $tmp1151 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1149));
            aliases1148 = ((panda$collections$HashMap*) $tmp1151);
            {
                ITable* $tmp1153 = ((panda$collections$Iterable*) entries1139)->$class->itable;
                while ($tmp1153->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1153 = $tmp1153->next;
                }
                $fn1155 $tmp1154 = $tmp1153->methods[0];
                panda$collections$Iterator* $tmp1156 = $tmp1154(((panda$collections$Iterable*) entries1139));
                e$Iter1152 = $tmp1156;
                $l1157:;
                ITable* $tmp1159 = e$Iter1152->$class->itable;
                while ($tmp1159->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1159 = $tmp1159->next;
                }
                $fn1161 $tmp1160 = $tmp1159->methods[0];
                panda$core$Bit $tmp1162 = $tmp1160(e$Iter1152);
                panda$core$Bit $tmp1163 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1162);
                if (!$tmp1163.value) goto $l1158;
                {
                    ITable* $tmp1165 = e$Iter1152->$class->itable;
                    while ($tmp1165->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1165 = $tmp1165->next;
                    }
                    $fn1167 $tmp1166 = $tmp1165->methods[1];
                    panda$core$Object* $tmp1168 = $tmp1166(e$Iter1152);
                    e1164 = ((org$pandalanguage$pandac$ASTNode*) $tmp1168);
                    {
                        $match$552_211169 = e1164;
                        panda$core$Bit $tmp1170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$552_211169->$rawValue, ((panda$core$Int64) { 26 }));
                        if ($tmp1170.value) {
                        {
                            panda$core$String** $tmp1172 = ((panda$core$String**) ((char*) $match$552_211169->$data + 16));
                            name1171 = *$tmp1172;
                            {
                                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) currentPackage1145));
                                panda$core$Object* $tmp1173 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) name1171));
                                currentPackage1145 = ((panda$core$String*) $tmp1173);
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp1174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$552_211169->$rawValue, ((panda$core$Int64) { 37 }));
                        if ($tmp1174.value) {
                        {
                            panda$core$String** $tmp1176 = ((panda$core$String**) ((char*) $match$552_211169->$data + 16));
                            fullName1175 = *$tmp1176;
                            panda$core$String$Index$nullable $tmp1179 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName1175, &$s1178);
                            idx1177 = $tmp1179;
                            memset(&alias1180, 0, sizeof(alias1180));
                            if (((panda$core$Bit) { idx1177.nonnull }).value) {
                            {
                                {
                                    panda$core$String$Index $tmp1182 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName1175, ((panda$core$String$Index) idx1177.value));
                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1181, ((panda$core$String$Index$nullable) { $tmp1182, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                    panda$core$String* $tmp1183 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName1175, $tmp1181);
                                    panda$core$Object* $tmp1184 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1183));
                                    alias1180 = ((panda$core$String*) $tmp1184);
                                }
                            }
                            }
                            else {
                            {
                                {
                                    panda$core$Object* $tmp1185 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) fullName1175));
                                    alias1180 = ((panda$core$String*) $tmp1185);
                                }
                            }
                            }
                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1148, ((panda$collections$Key*) alias1180), ((panda$core$Object*) fullName1175));
                        }
                        }
                        else {
                        panda$core$Bit $tmp1186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$552_211169->$rawValue, ((panda$core$Int64) { 9 }));
                        if ($tmp1186.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp1188 = ((org$pandalanguage$pandac$Position*) ((char*) $match$552_211169->$data + 0));
                            position1187 = *$tmp1188;
                            org$pandalanguage$pandac$ASTNode** $tmp1190 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$552_211169->$data + 16));
                            dc1189 = *$tmp1190;
                            panda$collections$ImmutableArray** $tmp1192 = ((panda$collections$ImmutableArray**) ((char*) $match$552_211169->$data + 24));
                            annotations1191 = *$tmp1192;
                            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1194 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$552_211169->$data + 32));
                            kind1193 = *$tmp1194;
                            panda$core$String** $tmp1196 = ((panda$core$String**) ((char*) $match$552_211169->$data + 40));
                            name1195 = *$tmp1196;
                            panda$collections$ImmutableArray** $tmp1198 = ((panda$collections$ImmutableArray**) ((char*) $match$552_211169->$data + 48));
                            generics1197 = *$tmp1198;
                            panda$collections$ImmutableArray** $tmp1200 = ((panda$collections$ImmutableArray**) ((char*) $match$552_211169->$data + 56));
                            supertypes1199 = *$tmp1200;
                            panda$collections$ImmutableArray** $tmp1202 = ((panda$collections$ImmutableArray**) ((char*) $match$552_211169->$data + 64));
                            members1201 = *$tmp1202;
                            org$pandalanguage$pandac$ClassDecl* $tmp1204 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1148), currentPackage1145, position1187, dc1189, annotations1191, kind1193, name1195, generics1197, supertypes1199, members1201);
                            panda$core$Object* $tmp1205 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1204));
                            cl1203 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1205);
                            if (((panda$core$Bit) { cl1203 != NULL }).value) {
                            {
                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl1203, result1141);
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
                goto $l1157;
                $l1158:;
            }
            return ((panda$collections$ListView*) result1141);
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
}

