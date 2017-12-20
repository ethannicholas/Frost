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
typedef panda$collections$Iterator* (*$fn735)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn741)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn747)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn758)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn764)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn770)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn901)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn907)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn913)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn930)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn942)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn948)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn954)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn980)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn986)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn992)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1011)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1017)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1023)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1053)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1059)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1065)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1074)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1080)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1086)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1103)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1109)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1115)(panda$collections$Iterator*);

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
static panda$core$String $s638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x6f\x6e\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x27", 30, -1250916154819313721, NULL };
static panda$core$String $s653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x68\x61\x76\x65\x20\x61\x20\x62\x6f\x64\x79", 16, -7652461387112275530, NULL };
static panda$core$String $s705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s1125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };

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
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        doccomment580 = NULL;
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
                doccomment580 = text585;
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
    panda$collections$Array* $tmp601 = (panda$collections$Array*) malloc(40);
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
                    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp626 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
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
    if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp630 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
        returnType629 = $tmp630;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp631 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        returnType629 = $tmp631;
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
    org$pandalanguage$pandac$MethodDecl* $tmp655 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
    $tmp655->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
    $tmp655->refCount.value = 1;
    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp655, p_owner, p_position, doccomment580, annotations587, p_kind, p_name, parameters600, returnType629, p_statements);
    return $tmp655;
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$327_9657;
    org$pandalanguage$pandac$Position position659;
    org$pandalanguage$pandac$ASTNode* dc661;
    panda$collections$ImmutableArray* annotations663;
    org$pandalanguage$pandac$ASTNode* varDecl665;
    org$pandalanguage$pandac$Position position668;
    org$pandalanguage$pandac$ASTNode* dc670;
    panda$collections$ImmutableArray* annotations672;
    org$pandalanguage$pandac$MethodDecl$Kind kind674;
    panda$core$String* name676;
    panda$collections$ImmutableArray* parameters678;
    org$pandalanguage$pandac$ASTNode* rawReturnType680;
    panda$collections$ImmutableArray* statements682;
    org$pandalanguage$pandac$MethodDecl* m684;
    org$pandalanguage$pandac$Position position687;
    org$pandalanguage$pandac$ASTNode* dc689;
    panda$collections$ImmutableArray* annotations691;
    org$pandalanguage$pandac$ClassDecl$Kind kind693;
    panda$core$String* name695;
    panda$collections$ImmutableArray* generics697;
    panda$collections$ImmutableArray* supertypes699;
    panda$collections$ImmutableArray* members701;
    org$pandalanguage$pandac$ClassDecl* inner703;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp708;
    org$pandalanguage$pandac$Position position714;
    org$pandalanguage$pandac$ASTNode* dc716;
    panda$core$String* name718;
    panda$collections$ImmutableArray* fields720;
    {
        $match$327_9657 = p_node;
        panda$core$Bit $tmp658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9657->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp658.value) {
        {
            org$pandalanguage$pandac$Position* $tmp660 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9657->$data + 0));
            position659 = *$tmp660;
            org$pandalanguage$pandac$ASTNode** $tmp662 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9657->$data + 16));
            dc661 = *$tmp662;
            panda$collections$ImmutableArray** $tmp664 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9657->$data + 24));
            annotations663 = *$tmp664;
            org$pandalanguage$pandac$ASTNode** $tmp666 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9657->$data + 32));
            varDecl665 = *$tmp666;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position659, dc661, annotations663, varDecl665);
        }
        }
        else {
        panda$core$Bit $tmp667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9657->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp667.value) {
        {
            org$pandalanguage$pandac$Position* $tmp669 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9657->$data + 0));
            position668 = *$tmp669;
            org$pandalanguage$pandac$ASTNode** $tmp671 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9657->$data + 16));
            dc670 = *$tmp671;
            panda$collections$ImmutableArray** $tmp673 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9657->$data + 24));
            annotations672 = *$tmp673;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp675 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$327_9657->$data + 32));
            kind674 = *$tmp675;
            panda$core$String** $tmp677 = ((panda$core$String**) ((char*) $match$327_9657->$data + 40));
            name676 = *$tmp677;
            panda$collections$ImmutableArray** $tmp679 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9657->$data + 48));
            parameters678 = *$tmp679;
            org$pandalanguage$pandac$ASTNode** $tmp681 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9657->$data + 56));
            rawReturnType680 = *$tmp681;
            panda$collections$ImmutableArray** $tmp683 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9657->$data + 64));
            statements682 = *$tmp683;
            org$pandalanguage$pandac$MethodDecl* $tmp685 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position668, dc670, annotations672, kind674, name676, parameters678, rawReturnType680, statements682);
            m684 = $tmp685;
            if (((panda$core$Bit) { m684 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m684));
                panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m684));
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9657->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp686.value) {
        {
            org$pandalanguage$pandac$Position* $tmp688 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9657->$data + 0));
            position687 = *$tmp688;
            org$pandalanguage$pandac$ASTNode** $tmp690 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9657->$data + 16));
            dc689 = *$tmp690;
            panda$collections$ImmutableArray** $tmp692 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9657->$data + 24));
            annotations691 = *$tmp692;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp694 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$327_9657->$data + 32));
            kind693 = *$tmp694;
            panda$core$String** $tmp696 = ((panda$core$String**) ((char*) $match$327_9657->$data + 40));
            name695 = *$tmp696;
            panda$collections$ImmutableArray** $tmp698 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9657->$data + 48));
            generics697 = *$tmp698;
            panda$collections$ImmutableArray** $tmp700 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9657->$data + 56));
            supertypes699 = *$tmp700;
            panda$collections$ImmutableArray** $tmp702 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9657->$data + 64));
            members701 = *$tmp702;
            org$pandalanguage$pandac$ClassDecl* $tmp704 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, ((org$pandalanguage$pandac$Symbol*) p_cl)->name, position687, dc689, annotations691, kind693, name695, generics697, supertypes699, members701);
            inner703 = $tmp704;
            if (((panda$core$Bit) { inner703 != NULL }).value) {
            {
                inner703->owner = p_cl;
                panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner703));
                panda$core$String* $tmp706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s705);
                panda$core$Bit $tmp707 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner703)->name, $tmp706);
                PANDA_ASSERT($tmp707.value);
                panda$core$Int64 $tmp709 = panda$core$String$length$R$panda$core$Int64(((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$Int64 $tmp710 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp709, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp708, ((panda$core$Int64$nullable) { $tmp710, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp711 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner703)->name, $tmp708);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner703), $tmp711);
                panda$collections$Array$add$panda$collections$Array$T(inner703->symbolTable->parents, ((panda$core$Object*) p_cl->symbolTable));
                panda$core$String* $tmp712 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner703->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_cl), $tmp712);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$327_9657->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp713.value) {
        {
            org$pandalanguage$pandac$Position* $tmp715 = ((org$pandalanguage$pandac$Position*) ((char*) $match$327_9657->$data + 0));
            position714 = *$tmp715;
            org$pandalanguage$pandac$ASTNode** $tmp717 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$327_9657->$data + 16));
            dc716 = *$tmp717;
            panda$core$String** $tmp719 = ((panda$core$String**) ((char*) $match$327_9657->$data + 24));
            name718 = *$tmp719;
            panda$collections$ImmutableArray** $tmp721 = ((panda$collections$ImmutableArray**) ((char*) $match$327_9657->$data + 32));
            fields720 = *$tmp721;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position714, dc716, name718, fields720);
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
    panda$core$String* doccomment722;
    org$pandalanguage$pandac$ASTNode* $match$365_13723;
    org$pandalanguage$pandac$Position position725;
    panda$core$String* text727;
    panda$collections$Array* fields729;
    panda$collections$Iterator* t$Iter732;
    org$pandalanguage$pandac$ASTNode* t744;
    org$pandalanguage$pandac$ChoiceEntry* entry750;
    panda$core$Bit found754;
    panda$collections$Iterator* m$Iter755;
    org$pandalanguage$pandac$MethodDecl* m767;
    panda$core$Range$LTpanda$core$Int64$GT $tmp780;
    panda$collections$Array* parameters806;
    panda$collections$Array* statements813;
    org$pandalanguage$pandac$parser$Token$Kind $tmp821;
    panda$core$Range$LTpanda$core$Int64$GT $tmp825;
    org$pandalanguage$pandac$parser$Token$Kind $tmp854;
    org$pandalanguage$pandac$MethodDecl* synthetic868;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp873;
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        doccomment722 = NULL;
    }
    }
    else {
    {
        {
            $match$365_13723 = p_rawDoccomment;
            panda$core$Bit $tmp724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$365_13723->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp724.value) {
            {
                org$pandalanguage$pandac$Position* $tmp726 = ((org$pandalanguage$pandac$Position*) ((char*) $match$365_13723->$data + 0));
                position725 = *$tmp726;
                panda$core$String** $tmp728 = ((panda$core$String**) ((char*) $match$365_13723->$data + 16));
                text727 = *$tmp728;
                doccomment722 = text727;
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
    panda$collections$Array* $tmp730 = (panda$collections$Array*) malloc(40);
    $tmp730->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp730->refCount.value = 1;
    panda$collections$Array$init($tmp730);
    fields729 = $tmp730;
    {
        ITable* $tmp733 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
        while ($tmp733->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp733 = $tmp733->next;
        }
        $fn735 $tmp734 = $tmp733->methods[0];
        panda$collections$Iterator* $tmp736 = $tmp734(((panda$collections$Iterable*) p_rawFields));
        t$Iter732 = $tmp736;
        $l737:;
        ITable* $tmp739 = t$Iter732->$class->itable;
        while ($tmp739->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp739 = $tmp739->next;
        }
        $fn741 $tmp740 = $tmp739->methods[0];
        panda$core$Bit $tmp742 = $tmp740(t$Iter732);
        panda$core$Bit $tmp743 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp742);
        if (!$tmp743.value) goto $l738;
        {
            ITable* $tmp745 = t$Iter732->$class->itable;
            while ($tmp745->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp745 = $tmp745->next;
            }
            $fn747 $tmp746 = $tmp745->methods[1];
            panda$core$Object* $tmp748 = $tmp746(t$Iter732);
            t744 = ((org$pandalanguage$pandac$ASTNode*) $tmp748);
            org$pandalanguage$pandac$Type* $tmp749 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t744);
            panda$collections$Array$add$panda$collections$Array$T(fields729, ((panda$core$Object*) $tmp749));
        }
        goto $l737;
        $l738:;
    }
    org$pandalanguage$pandac$ChoiceEntry* $tmp751 = (org$pandalanguage$pandac$ChoiceEntry*) malloc(97);
    $tmp751->$class = (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class;
    $tmp751->refCount.value = 1;
    panda$core$Int64 $tmp753 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
    org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp751, p_cl, p_position, p_name, doccomment722, $tmp753, ((panda$collections$ListView*) fields729));
    entry750 = $tmp751;
    panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry750));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry750));
    found754 = ((panda$core$Bit) { false });
    {
        ITable* $tmp756 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp756->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp756 = $tmp756->next;
        }
        $fn758 $tmp757 = $tmp756->methods[0];
        panda$collections$Iterator* $tmp759 = $tmp757(((panda$collections$Iterable*) p_cl->methods));
        m$Iter755 = $tmp759;
        $l760:;
        ITable* $tmp762 = m$Iter755->$class->itable;
        while ($tmp762->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp762 = $tmp762->next;
        }
        $fn764 $tmp763 = $tmp762->methods[0];
        panda$core$Bit $tmp765 = $tmp763(m$Iter755);
        panda$core$Bit $tmp766 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp765);
        if (!$tmp766.value) goto $l761;
        {
            ITable* $tmp768 = m$Iter755->$class->itable;
            while ($tmp768->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp768 = $tmp768->next;
            }
            $fn770 $tmp769 = $tmp768->methods[1];
            panda$core$Object* $tmp771 = $tmp769(m$Iter755);
            m767 = ((org$pandalanguage$pandac$MethodDecl*) $tmp771);
            panda$core$Bit $tmp772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m767->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp772.value);
            panda$core$Int64 $tmp773 = panda$collections$Array$get_count$R$panda$core$Int64(m767->parameters);
            panda$core$Int64 $tmp774 = panda$collections$Array$get_count$R$panda$core$Int64(fields729);
            panda$core$Int64 $tmp775 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp774, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp776 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp773, $tmp775);
            if ($tmp776.value) {
            {
                goto $l760;
            }
            }
            panda$core$Object* $tmp777 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m767->parameters, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp778 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp779 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp777)->type, $tmp778);
            PANDA_ASSERT($tmp779.value);
            panda$core$Int64 $tmp781 = panda$collections$Array$get_count$R$panda$core$Int64(fields729);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp780, ((panda$core$Int64) { 0 }), $tmp781, ((panda$core$Bit) { false }));
            int64_t $tmp783 = $tmp780.min.value;
            panda$core$Int64 i782 = { $tmp783 };
            int64_t $tmp785 = $tmp780.max.value;
            bool $tmp786 = $tmp780.inclusive.value;
            if ($tmp786) goto $l793; else goto $l794;
            $l793:;
            if ($tmp783 <= $tmp785) goto $l787; else goto $l789;
            $l794:;
            if ($tmp783 < $tmp785) goto $l787; else goto $l789;
            $l787:;
            {
                panda$core$Object* $tmp795 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields729, i782);
                panda$core$Int64 $tmp796 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i782, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp797 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m767->parameters, $tmp796);
                panda$core$Bit $tmp798 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp795), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp797)->type);
                if ($tmp798.value) {
                {
                    goto $l760;
                }
                }
            }
            $l790:;
            int64_t $tmp800 = $tmp785 - i782.value;
            if ($tmp786) goto $l801; else goto $l802;
            $l801:;
            if ((uint64_t) $tmp800 >= 1) goto $l799; else goto $l789;
            $l802:;
            if ((uint64_t) $tmp800 > 1) goto $l799; else goto $l789;
            $l799:;
            i782.value += 1;
            goto $l787;
            $l789:;
            entry750->initMethod = m767;
            found754 = ((panda$core$Bit) { true });
            goto $l761;
        }
        goto $l760;
        $l761:;
    }
    panda$core$Bit $tmp805 = panda$core$Bit$$NOT$R$panda$core$Bit(found754);
    if ($tmp805.value) {
    {
        panda$collections$Array* $tmp807 = (panda$collections$Array*) malloc(40);
        $tmp807->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp807->refCount.value = 1;
        panda$collections$Array$init($tmp807);
        parameters806 = $tmp807;
        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp809 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
        $tmp809->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
        $tmp809->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp812 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp809, &$s811, $tmp812);
        panda$collections$Array$add$panda$collections$Array$T(parameters806, ((panda$core$Object*) $tmp809));
        panda$collections$Array* $tmp814 = (panda$collections$Array*) malloc(40);
        $tmp814->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp814->refCount.value = 1;
        panda$collections$Array$init($tmp814);
        statements813 = $tmp814;
        org$pandalanguage$pandac$ASTNode* $tmp816 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp816->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp816->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode* $tmp818 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp818->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp818->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp818, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s820);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp821, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$ASTNode* $tmp822 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp822->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp822->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp822, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s824);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp816, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp818, $tmp821, $tmp822);
        panda$collections$Array$add$panda$collections$Array$T(statements813, ((panda$core$Object*) $tmp816));
        panda$core$Int64 $tmp826 = panda$collections$Array$get_count$R$panda$core$Int64(fields729);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp825, ((panda$core$Int64) { 0 }), $tmp826, ((panda$core$Bit) { false }));
        int64_t $tmp828 = $tmp825.min.value;
        panda$core$Int64 i827 = { $tmp828 };
        int64_t $tmp830 = $tmp825.max.value;
        bool $tmp831 = $tmp825.inclusive.value;
        if ($tmp831) goto $l838; else goto $l839;
        $l838:;
        if ($tmp828 <= $tmp830) goto $l832; else goto $l834;
        $l839:;
        if ($tmp828 < $tmp830) goto $l832; else goto $l834;
        $l832:;
        {
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp840 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp840->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp840->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp843;
            $tmp843 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp843->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp843->refCount = 1;
            $tmp843->value = i827;
            panda$core$String* $tmp844 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s842, ((panda$core$Object*) $tmp843));
            panda$core$String* $tmp846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp844, &$s845);
            panda$core$Object* $tmp847 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields729, i827);
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp840, $tmp846, ((org$pandalanguage$pandac$Type*) $tmp847));
            panda$collections$Array$add$panda$collections$Array$T(parameters806, ((panda$core$Object*) $tmp840));
            org$pandalanguage$pandac$ASTNode* $tmp848 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp848->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp848->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode* $tmp850 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp850->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp850->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode* $tmp852 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp852->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp852->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp852, ((panda$core$Int64) { 32 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64($tmp850, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp852, entry750, i827);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp854, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$ASTNode* $tmp855 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp855->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp855->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp858;
            $tmp858 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp858->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp858->refCount = 1;
            $tmp858->value = i827;
            panda$core$String* $tmp859 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s857, ((panda$core$Object*) $tmp858));
            panda$core$String* $tmp861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp859, &$s860);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp855, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp861);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp848, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp850, $tmp854, $tmp855);
            panda$collections$Array$add$panda$collections$Array$T(statements813, ((panda$core$Object*) $tmp848));
        }
        $l835:;
        int64_t $tmp863 = $tmp830 - i827.value;
        if ($tmp831) goto $l864; else goto $l865;
        $l864:;
        if ((uint64_t) $tmp863 >= 1) goto $l862; else goto $l834;
        $l865:;
        if ((uint64_t) $tmp863 > 1) goto $l862; else goto $l834;
        $l862:;
        i827.value += 1;
        goto $l832;
        $l834:;
        org$pandalanguage$pandac$MethodDecl* $tmp869 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp869->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp869->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp871 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp871->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp871->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp871);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp873, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$Type* $tmp875 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp876 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements813);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp869, p_cl, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, NULL, $tmp871, $tmp873, &$s874, parameters806, $tmp875, $tmp876);
        synthetic868 = $tmp869;
        entry750->initMethod = synthetic868;
        panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) synthetic868));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) synthetic868));
    }
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName877;
    panda$core$String* doccomment886;
    org$pandalanguage$pandac$ASTNode* $match$440_13887;
    org$pandalanguage$pandac$Position position889;
    panda$core$String* text891;
    org$pandalanguage$pandac$Annotations* annotations893;
    panda$collections$Array* parameters895;
    panda$collections$Iterator* p$Iter898;
    org$pandalanguage$pandac$ASTNode* p910;
    panda$core$String* name915;
    org$pandalanguage$pandac$Type* bound916;
    org$pandalanguage$pandac$ASTNode* $match$453_17917;
    panda$core$String* id919;
    panda$core$String* id923;
    org$pandalanguage$pandac$ASTNode* type925;
    panda$collections$Array* supertypes934;
    panda$collections$Iterator* s$Iter939;
    org$pandalanguage$pandac$ASTNode* s951;
    org$pandalanguage$pandac$ClassDecl* result957;
    org$pandalanguage$pandac$FieldDecl* rawValue961;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp966;
    org$pandalanguage$pandac$FieldDecl* data969;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp974;
    panda$collections$Iterator* m$Iter977;
    org$pandalanguage$pandac$ASTNode* m989;
    org$pandalanguage$pandac$ASTNode* $match$492_13994;
    org$pandalanguage$pandac$Position mPosition996;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind998;
    org$pandalanguage$pandac$ClassDecl$Kind $match$495_251001;
    panda$core$Bit foundInit1007;
    panda$collections$Iterator* m$Iter1008;
    org$pandalanguage$pandac$MethodDecl* m1020;
    org$pandalanguage$pandac$MethodDecl* defaultInit1036;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1041;
    panda$core$Bit haveFields1049;
    panda$collections$Iterator* e$Iter1050;
    org$pandalanguage$pandac$ChoiceEntry* e1062;
    panda$core$Bit $tmp879 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s878);
    if ($tmp879.value) {
    {
        panda$core$String* $tmp880 = panda$core$String$convert$R$panda$core$String(p_contextName);
        panda$core$String* $tmp882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp880, &$s881);
        panda$core$String* $tmp883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp882, p_name);
        panda$core$String* $tmp885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp883, &$s884);
        fullName877 = $tmp885;
    }
    }
    else {
    {
        fullName877 = p_name;
    }
    }
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        doccomment886 = NULL;
    }
    }
    else {
    {
        {
            $match$440_13887 = p_rawDoccomment;
            panda$core$Bit $tmp888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$440_13887->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp888.value) {
            {
                org$pandalanguage$pandac$Position* $tmp890 = ((org$pandalanguage$pandac$Position*) ((char*) $match$440_13887->$data + 0));
                position889 = *$tmp890;
                panda$core$String** $tmp892 = ((panda$core$String**) ((char*) $match$440_13887->$data + 16));
                text891 = *$tmp892;
                doccomment886 = text891;
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
    org$pandalanguage$pandac$Annotations* $tmp894 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    annotations893 = $tmp894;
    panda$collections$Array* $tmp896 = (panda$collections$Array*) malloc(40);
    $tmp896->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp896->refCount.value = 1;
    panda$collections$Array$init($tmp896);
    parameters895 = $tmp896;
    if (((panda$core$Bit) { p_generics != NULL }).value) {
    {
        {
            ITable* $tmp899 = ((panda$collections$Iterable*) p_generics)->$class->itable;
            while ($tmp899->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp899 = $tmp899->next;
            }
            $fn901 $tmp900 = $tmp899->methods[0];
            panda$collections$Iterator* $tmp902 = $tmp900(((panda$collections$Iterable*) p_generics));
            p$Iter898 = $tmp902;
            $l903:;
            ITable* $tmp905 = p$Iter898->$class->itable;
            while ($tmp905->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp905 = $tmp905->next;
            }
            $fn907 $tmp906 = $tmp905->methods[0];
            panda$core$Bit $tmp908 = $tmp906(p$Iter898);
            panda$core$Bit $tmp909 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp908);
            if (!$tmp909.value) goto $l904;
            {
                ITable* $tmp911 = p$Iter898->$class->itable;
                while ($tmp911->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp911 = $tmp911->next;
                }
                $fn913 $tmp912 = $tmp911->methods[1];
                panda$core$Object* $tmp914 = $tmp912(p$Iter898);
                p910 = ((org$pandalanguage$pandac$ASTNode*) $tmp914);
                {
                    $match$453_17917 = p910;
                    panda$core$Bit $tmp918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453_17917->$rawValue, ((panda$core$Int64) { 18 }));
                    if ($tmp918.value) {
                    {
                        panda$core$String** $tmp920 = ((panda$core$String**) ((char*) $match$453_17917->$data + 16));
                        id919 = *$tmp920;
                        name915 = id919;
                        org$pandalanguage$pandac$Type* $tmp921 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                        bound916 = $tmp921;
                    }
                    }
                    else {
                    panda$core$Bit $tmp922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453_17917->$rawValue, ((panda$core$Int64) { 36 }));
                    if ($tmp922.value) {
                    {
                        panda$core$String** $tmp924 = ((panda$core$String**) ((char*) $match$453_17917->$data + 16));
                        id923 = *$tmp924;
                        org$pandalanguage$pandac$ASTNode** $tmp926 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$453_17917->$data + 24));
                        type925 = *$tmp926;
                        name915 = id923;
                        org$pandalanguage$pandac$Type* $tmp927 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type925);
                        bound916 = $tmp927;
                    }
                    }
                    else {
                    {
                        PANDA_ASSERT(((panda$core$Bit) { false }).value);
                    }
                    }
                    }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp928 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(72);
                $tmp928->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp928->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp931 = (($fn930) p910->$class->vtable[2])(p910);
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp928, $tmp931, fullName877, name915, bound916);
                panda$collections$Array$add$panda$collections$Array$T(parameters895, ((panda$core$Object*) $tmp928));
            }
            goto $l903;
            $l904:;
        }
        panda$core$Bit $tmp932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp932.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s933);
        }
        }
    }
    }
    panda$collections$Array* $tmp935 = (panda$collections$Array*) malloc(40);
    $tmp935->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp935->refCount.value = 1;
    panda$collections$Array$init($tmp935);
    supertypes934 = $tmp935;
    if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
    {
        panda$core$Bit $tmp937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp937.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, p_position, &$s938);
        }
        }
        {
            ITable* $tmp940 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
            while ($tmp940->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp940 = $tmp940->next;
            }
            $fn942 $tmp941 = $tmp940->methods[0];
            panda$collections$Iterator* $tmp943 = $tmp941(((panda$collections$Iterable*) p_rawSupertypes));
            s$Iter939 = $tmp943;
            $l944:;
            ITable* $tmp946 = s$Iter939->$class->itable;
            while ($tmp946->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp946 = $tmp946->next;
            }
            $fn948 $tmp947 = $tmp946->methods[0];
            panda$core$Bit $tmp949 = $tmp947(s$Iter939);
            panda$core$Bit $tmp950 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp949);
            if (!$tmp950.value) goto $l945;
            {
                ITable* $tmp952 = s$Iter939->$class->itable;
                while ($tmp952->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp952 = $tmp952->next;
                }
                $fn954 $tmp953 = $tmp952->methods[1];
                panda$core$Object* $tmp955 = $tmp953(s$Iter939);
                s951 = ((org$pandalanguage$pandac$ASTNode*) $tmp955);
                org$pandalanguage$pandac$Type* $tmp956 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s951);
                panda$collections$Array$add$panda$collections$Array$T(supertypes934, ((panda$core$Object*) $tmp956));
            }
            goto $l944;
            $l945:;
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp958 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
    $tmp958->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp958->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp958, p_source, p_position, p_aliases, doccomment886, annotations893, p_kind, fullName877, ((panda$collections$ListView*) supertypes934), parameters895, self->compiler->root);
    result957 = $tmp958;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) result957));
    panda$core$Bit $tmp960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp960.value) {
    {
        org$pandalanguage$pandac$FieldDecl* $tmp962 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
        $tmp962->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
        $tmp962->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp964 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp964->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp964->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp964);
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp966, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp968 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp962, result957, ((org$pandalanguage$pandac$Symbol*) result957)->position, NULL, $tmp964, $tmp966, &$s967, $tmp968, NULL);
        rawValue961 = $tmp962;
        panda$collections$Array$add$panda$collections$Array$T(result957->fields, ((panda$core$Object*) rawValue961));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result957->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue961));
        org$pandalanguage$pandac$FieldDecl* $tmp970 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
        $tmp970->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
        $tmp970->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp972 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp972->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp972->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp972);
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp974, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp976 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp970, result957, ((org$pandalanguage$pandac$Symbol*) result957)->position, NULL, $tmp972, $tmp974, &$s975, $tmp976, NULL);
        data969 = $tmp970;
        panda$collections$Array$add$panda$collections$Array$T(result957->fields, ((panda$core$Object*) data969));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result957->symbolTable, ((org$pandalanguage$pandac$Symbol*) data969));
    }
    }
    {
        ITable* $tmp978 = ((panda$collections$Iterable*) p_members)->$class->itable;
        while ($tmp978->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp978 = $tmp978->next;
        }
        $fn980 $tmp979 = $tmp978->methods[0];
        panda$collections$Iterator* $tmp981 = $tmp979(((panda$collections$Iterable*) p_members));
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
            m989 = ((org$pandalanguage$pandac$ASTNode*) $tmp993);
            {
                $match$492_13994 = m989;
                panda$core$Bit $tmp995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$492_13994->$rawValue, ((panda$core$Int64) { 23 }));
                if ($tmp995.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp997 = ((org$pandalanguage$pandac$Position*) ((char*) $match$492_13994->$data + 0));
                    mPosition996 = *$tmp997;
                    org$pandalanguage$pandac$MethodDecl$Kind* $tmp999 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$492_13994->$data + 32));
                    methodKind998 = *$tmp999;
                    panda$core$Bit $tmp1000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind998.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1000.value) {
                    {
                        {
                            $match$495_251001 = p_kind;
                            panda$core$Bit $tmp1002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_251001.$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp1002.value) {
                            {
                            }
                            }
                            else {
                            panda$core$Bit $tmp1003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_251001.$rawValue, ((panda$core$Int64) { 1 }));
                            if ($tmp1003.value) {
                            {
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, mPosition996, &$s1004);
                            }
                            }
                            else {
                            panda$core$Bit $tmp1005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$495_251001.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp1005.value) {
                            {
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self->compiler, mPosition996, &$s1006);
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
            org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result957, m989);
        }
        goto $l982;
        $l983:;
    }
    foundInit1007 = ((panda$core$Bit) { false });
    {
        ITable* $tmp1009 = ((panda$collections$Iterable*) result957->methods)->$class->itable;
        while ($tmp1009->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1009 = $tmp1009->next;
        }
        $fn1011 $tmp1010 = $tmp1009->methods[0];
        panda$collections$Iterator* $tmp1012 = $tmp1010(((panda$collections$Iterable*) result957->methods));
        m$Iter1008 = $tmp1012;
        $l1013:;
        ITable* $tmp1015 = m$Iter1008->$class->itable;
        while ($tmp1015->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1015 = $tmp1015->next;
        }
        $fn1017 $tmp1016 = $tmp1015->methods[0];
        panda$core$Bit $tmp1018 = $tmp1016(m$Iter1008);
        panda$core$Bit $tmp1019 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1018);
        if (!$tmp1019.value) goto $l1014;
        {
            ITable* $tmp1021 = m$Iter1008->$class->itable;
            while ($tmp1021->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1021 = $tmp1021->next;
            }
            $fn1023 $tmp1022 = $tmp1021->methods[1];
            panda$core$Object* $tmp1024 = $tmp1022(m$Iter1008);
            m1020 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1024);
            panda$core$Bit $tmp1025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1020->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1025.value) {
            {
                foundInit1007 = ((panda$core$Bit) { true });
                goto $l1014;
            }
            }
        }
        goto $l1013;
        $l1014:;
    }
    panda$core$Bit $tmp1028 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1007);
    bool $tmp1027 = $tmp1028.value;
    if (!$tmp1027) goto $l1029;
    panda$core$Bit $tmp1030 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
    $tmp1027 = $tmp1030.value;
    $l1029:;
    panda$core$Bit $tmp1031 = { $tmp1027 };
    bool $tmp1026 = $tmp1031.value;
    if (!$tmp1026) goto $l1032;
    panda$core$Bit $tmp1034 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result957)->name, &$s1033);
    $tmp1026 = $tmp1034.value;
    $l1032:;
    panda$core$Bit $tmp1035 = { $tmp1026 };
    if ($tmp1035.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp1037 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
        $tmp1037->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp1037->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp1039 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp1039->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp1039->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp1039);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1041, ((panda$core$Int64) { 2 }));
        panda$collections$Array* $tmp1043 = (panda$collections$Array*) malloc(40);
        $tmp1043->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1043->refCount.value = 1;
        panda$collections$Array$init($tmp1043);
        org$pandalanguage$pandac$Type* $tmp1045 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$collections$ImmutableArray* $tmp1046 = (panda$collections$ImmutableArray*) malloc(40);
        $tmp1046->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp1046->refCount.value = 1;
        panda$collections$ImmutableArray$init($tmp1046);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1037, result957, p_position, NULL, $tmp1039, $tmp1041, &$s1042, $tmp1043, $tmp1045, $tmp1046);
        defaultInit1036 = $tmp1037;
        panda$collections$Array$add$panda$collections$Array$T(result957->methods, ((panda$core$Object*) defaultInit1036));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result957->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1036));
    }
    }
    panda$core$Bit $tmp1048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp1048.value) {
    {
        haveFields1049 = ((panda$core$Bit) { false });
        {
            ITable* $tmp1051 = ((panda$collections$Iterable*) result957->choiceEntries)->$class->itable;
            while ($tmp1051->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1051 = $tmp1051->next;
            }
            $fn1053 $tmp1052 = $tmp1051->methods[0];
            panda$collections$Iterator* $tmp1054 = $tmp1052(((panda$collections$Iterable*) result957->choiceEntries));
            e$Iter1050 = $tmp1054;
            $l1055:;
            ITable* $tmp1057 = e$Iter1050->$class->itable;
            while ($tmp1057->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1057 = $tmp1057->next;
            }
            $fn1059 $tmp1058 = $tmp1057->methods[0];
            panda$core$Bit $tmp1060 = $tmp1058(e$Iter1050);
            panda$core$Bit $tmp1061 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1060);
            if (!$tmp1061.value) goto $l1056;
            {
                ITable* $tmp1063 = e$Iter1050->$class->itable;
                while ($tmp1063->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1063 = $tmp1063->next;
                }
                $fn1065 $tmp1064 = $tmp1063->methods[1];
                panda$core$Object* $tmp1066 = $tmp1064(e$Iter1050);
                e1062 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1066);
                panda$core$Int64 $tmp1067 = panda$collections$Array$get_count$R$panda$core$Int64(e1062->fields);
                panda$core$Bit $tmp1068 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1067, ((panda$core$Int64) { 0 }));
                if ($tmp1068.value) {
                {
                    haveFields1049 = ((panda$core$Bit) { true });
                    goto $l1056;
                }
                }
            }
            goto $l1055;
            $l1056:;
        }
        panda$core$Bit $tmp1069 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1049);
        if ($tmp1069.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1070 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            result957->rawSuper = $tmp1070;
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    return result957;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter1071;
    org$pandalanguage$pandac$ClassDecl* inner1083;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp1072 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp1072->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1072 = $tmp1072->next;
        }
        $fn1074 $tmp1073 = $tmp1072->methods[0];
        panda$collections$Iterator* $tmp1075 = $tmp1073(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter1071 = $tmp1075;
        $l1076:;
        ITable* $tmp1078 = inner$Iter1071->$class->itable;
        while ($tmp1078->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1078 = $tmp1078->next;
        }
        $fn1080 $tmp1079 = $tmp1078->methods[0];
        panda$core$Bit $tmp1081 = $tmp1079(inner$Iter1071);
        panda$core$Bit $tmp1082 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1081);
        if (!$tmp1082.value) goto $l1077;
        {
            ITable* $tmp1084 = inner$Iter1071->$class->itable;
            while ($tmp1084->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1084 = $tmp1084->next;
            }
            $fn1086 $tmp1085 = $tmp1084->methods[1];
            panda$core$Object* $tmp1087 = $tmp1085(inner$Iter1071);
            inner1083 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1087);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1083, p_arr);
        }
        goto $l1076;
        $l1077:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$546_91088;
    panda$collections$ImmutableArray* entries1090;
    panda$collections$Array* result1092;
    panda$core$String* currentPackage1095;
    panda$collections$HashMap* aliases1097;
    panda$collections$Iterator* e$Iter1100;
    org$pandalanguage$pandac$ASTNode* e1112;
    org$pandalanguage$pandac$ASTNode* $match$552_211117;
    panda$core$String* name1119;
    panda$core$String* fullName1122;
    panda$core$String$Index$nullable idx1124;
    panda$core$String* alias1127;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1128;
    org$pandalanguage$pandac$Position position1132;
    org$pandalanguage$pandac$ASTNode* dc1134;
    panda$collections$ImmutableArray* annotations1136;
    org$pandalanguage$pandac$ClassDecl$Kind kind1138;
    panda$core$String* name1140;
    panda$collections$ImmutableArray* generics1142;
    panda$collections$ImmutableArray* supertypes1144;
    panda$collections$ImmutableArray* members1146;
    org$pandalanguage$pandac$ClassDecl* cl1148;
    {
        $match$546_91088 = p_file;
        panda$core$Bit $tmp1089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$546_91088->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1089.value) {
        {
            panda$collections$ImmutableArray** $tmp1091 = ((panda$collections$ImmutableArray**) ((char*) $match$546_91088->$data + 0));
            entries1090 = *$tmp1091;
            panda$collections$Array* $tmp1093 = (panda$collections$Array*) malloc(40);
            $tmp1093->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1093->refCount.value = 1;
            panda$collections$Array$init($tmp1093);
            result1092 = $tmp1093;
            currentPackage1095 = &$s1096;
            panda$collections$HashMap* $tmp1098 = (panda$collections$HashMap*) malloc(56);
            $tmp1098->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1098->refCount.value = 1;
            panda$collections$HashMap$init($tmp1098);
            aliases1097 = $tmp1098;
            {
                ITable* $tmp1101 = ((panda$collections$Iterable*) entries1090)->$class->itable;
                while ($tmp1101->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1101 = $tmp1101->next;
                }
                $fn1103 $tmp1102 = $tmp1101->methods[0];
                panda$collections$Iterator* $tmp1104 = $tmp1102(((panda$collections$Iterable*) entries1090));
                e$Iter1100 = $tmp1104;
                $l1105:;
                ITable* $tmp1107 = e$Iter1100->$class->itable;
                while ($tmp1107->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1107 = $tmp1107->next;
                }
                $fn1109 $tmp1108 = $tmp1107->methods[0];
                panda$core$Bit $tmp1110 = $tmp1108(e$Iter1100);
                panda$core$Bit $tmp1111 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1110);
                if (!$tmp1111.value) goto $l1106;
                {
                    ITable* $tmp1113 = e$Iter1100->$class->itable;
                    while ($tmp1113->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1113 = $tmp1113->next;
                    }
                    $fn1115 $tmp1114 = $tmp1113->methods[1];
                    panda$core$Object* $tmp1116 = $tmp1114(e$Iter1100);
                    e1112 = ((org$pandalanguage$pandac$ASTNode*) $tmp1116);
                    {
                        $match$552_211117 = e1112;
                        panda$core$Bit $tmp1118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$552_211117->$rawValue, ((panda$core$Int64) { 26 }));
                        if ($tmp1118.value) {
                        {
                            panda$core$String** $tmp1120 = ((panda$core$String**) ((char*) $match$552_211117->$data + 16));
                            name1119 = *$tmp1120;
                            currentPackage1095 = name1119;
                        }
                        }
                        else {
                        panda$core$Bit $tmp1121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$552_211117->$rawValue, ((panda$core$Int64) { 37 }));
                        if ($tmp1121.value) {
                        {
                            panda$core$String** $tmp1123 = ((panda$core$String**) ((char*) $match$552_211117->$data + 16));
                            fullName1122 = *$tmp1123;
                            panda$core$String$Index$nullable $tmp1126 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName1122, &$s1125);
                            idx1124 = $tmp1126;
                            if (((panda$core$Bit) { idx1124.nonnull }).value) {
                            {
                                panda$core$String$Index $tmp1129 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName1122, ((panda$core$String$Index) idx1124.value));
                                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1128, ((panda$core$String$Index$nullable) { $tmp1129, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                panda$core$String* $tmp1130 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName1122, $tmp1128);
                                alias1127 = $tmp1130;
                            }
                            }
                            else {
                            {
                                alias1127 = fullName1122;
                            }
                            }
                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1097, ((panda$collections$Key*) alias1127), ((panda$core$Object*) fullName1122));
                        }
                        }
                        else {
                        panda$core$Bit $tmp1131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$552_211117->$rawValue, ((panda$core$Int64) { 9 }));
                        if ($tmp1131.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp1133 = ((org$pandalanguage$pandac$Position*) ((char*) $match$552_211117->$data + 0));
                            position1132 = *$tmp1133;
                            org$pandalanguage$pandac$ASTNode** $tmp1135 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$552_211117->$data + 16));
                            dc1134 = *$tmp1135;
                            panda$collections$ImmutableArray** $tmp1137 = ((panda$collections$ImmutableArray**) ((char*) $match$552_211117->$data + 24));
                            annotations1136 = *$tmp1137;
                            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1139 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$552_211117->$data + 32));
                            kind1138 = *$tmp1139;
                            panda$core$String** $tmp1141 = ((panda$core$String**) ((char*) $match$552_211117->$data + 40));
                            name1140 = *$tmp1141;
                            panda$collections$ImmutableArray** $tmp1143 = ((panda$collections$ImmutableArray**) ((char*) $match$552_211117->$data + 48));
                            generics1142 = *$tmp1143;
                            panda$collections$ImmutableArray** $tmp1145 = ((panda$collections$ImmutableArray**) ((char*) $match$552_211117->$data + 56));
                            supertypes1144 = *$tmp1145;
                            panda$collections$ImmutableArray** $tmp1147 = ((panda$collections$ImmutableArray**) ((char*) $match$552_211117->$data + 64));
                            members1146 = *$tmp1147;
                            org$pandalanguage$pandac$ClassDecl* $tmp1149 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1097), currentPackage1095, position1132, dc1134, annotations1136, kind1138, name1140, generics1142, supertypes1144, members1146);
                            cl1148 = $tmp1149;
                            if (((panda$core$Bit) { cl1148 != NULL }).value) {
                            {
                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl1148, result1092);
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
                goto $l1105;
                $l1106:;
            }
            return ((panda$collections$ListView*) result1092);
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
}

